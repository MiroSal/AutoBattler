// Fill out your copyright notice in the Description page of Project Settings.

#include "CombatManager.h"
#include "CharacterBase.h"

UCombatManager::UCombatManager()
{
	CombatPlayerListeners = TArray<ACharacterBase*>();
	CombatEnemyListeners = TArray<ACharacterBase*>();
	ActionQueue = TArray<FCharacterData>();

	ActiveCharacter = nullptr;
	CurrentCombatTurn = ETurnEnum::TE_None;

	CharacterIndex = 0;
	EnemyIndex = 0;

	TotalEnemyCount = 5;
	CurrentEnemyCount = 1;

	bIsFirstTurn = true;
}

void UCombatManager::Initialize()
{
	CurrentCombatTurn = ETurnEnum::TE_Enemy;
}

void UCombatManager::StartCombat()
{
	ChangeTurn();
}

void UCombatManager::PopNextSkillFromQueue()
{
	if (ActionQueue.Num() > 0)
	{
		FCharacterData Data = ActionQueue.Pop();
		ACharacterBase* Character = Cast<ACharacterBase>(Data.CharacterBase);
		if (IsValid(Character))
		{
			Character->ActivatePassiveSkill();
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("SkillQueue data is not valid"));
		}
	}
	else if (ActionQueue.Num() <= 0)
	{
		if (IsValid(ActiveCharacter))
		{
			if (ActiveCharacter->IsAlive())
			{
				ActiveCharacter->Attack(); //Character will attack and run blueprint functionality, calls ChangeTurn() from Blueprint when ready.
				UE_LOG(LogTemp, Warning, TEXT("Character: %s attacks"), *ActiveCharacter->GetFName().ToString());
			}
			else
			{
				ChangeTurn();
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("No valid character"));
		}
	}
}

void UCombatManager::ChangeTurn()
{
	if (CombatPlayerListeners.Num() > 0)
	{
		if (bIsFirstTurn)
		{
			HandleFirstTurn();
		}
		else
		{
			if (IsValid(ActiveCharacter))
				ActiveCharacter->BP_EndTurn();

			ChangeActiveCharacter();

			if (IsValid(ActiveCharacter))
			{
				ActiveCharacter->BP_StartTurn();
				SkillUsedDelegate.Broadcast(FCharacterData(ActiveCharacter, ActiveCharacter->GetPrimarySkillType()));
				ActiveCharacter->ActivatePrimarySkill();
			}
			else
			{
				ChangeTurn();
			}
		}
	}
}

void UCombatManager::ChangeActiveCharacter()
{
	switch (CurrentCombatTurn)
	{
	case ETurnEnum::TE_Player:
		CurrentCombatTurn = ETurnEnum::TE_Enemy;
		++EnemyIndex;

		if (EnemyIndex >= CombatEnemyListeners.Num())
			EnemyIndex = 0;

		ActiveCharacter = Cast<ACharacterBase>(CombatEnemyListeners[FMath::Clamp(EnemyIndex, 0, CombatEnemyListeners.Num())]);
		break;

	case ETurnEnum::TE_Enemy:

		CurrentCombatTurn = ETurnEnum::TE_Player;
		++CharacterIndex;
		if (CharacterIndex >= CombatPlayerListeners.Num())
			CharacterIndex = 0;

		ActiveCharacter = Cast<ACharacterBase>(CombatPlayerListeners[FMath::Clamp(CharacterIndex, 0, CombatPlayerListeners.Num())]);
		break;

	case ETurnEnum::TE_None:
		UE_LOG(LogTemp, Warning, TEXT("CurrentCombatTurn was None"));
		break;
	default:
		UE_LOG(LogTemp, Warning, TEXT("Something went wrong, this should never happen"));
		break;
	}
}

void UCombatManager::HandleFirstTurn()
{
	CharacterIndex = 0;
	ActiveCharacter = Cast<ACharacterBase>(CombatPlayerListeners[CharacterIndex]);
	CurrentCombatTurn = ETurnEnum::TE_Player;
	bIsFirstTurn = false;

	if (IsValid(ActiveCharacter))
	{
		ActiveCharacter->BP_StartTurn();
		SkillUsedDelegate.Broadcast(FCharacterData(ActiveCharacter, ActiveCharacter->GetPrimarySkillType()));
		ActiveCharacter->ActivatePrimarySkill();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("CombatSoulListeners data is not so valid"));
		ChangeTurn();
	}
}

void UCombatManager::RegisterCombatListener(ACharacterBase* Character)
{
	if (!IsValid(Character))
		return;

	switch (Character->GetCharacterType())
	{
	case ETurnEnum::TE_Player:
		CombatPlayerListeners.Add(Character);
		break;
	case ETurnEnum::TE_Enemy:
		CombatEnemyListeners.Add(Character);
		break;
	case ETurnEnum::TE_None:
		UE_LOG(LogTemp, Warning, TEXT("Charactertype is None"));
		break;
	default:
		UE_LOG(LogTemp, Warning, TEXT("Character doesn't have Charactertype"));
		break;
	}
}

void UCombatManager::UnRegisterCombatListener(ACharacterBase * Character)
{
	if (!IsValid(Character))
		return;

	switch (Character->GetCharacterType())
	{
	case ETurnEnum::TE_Player:
		CombatPlayerListeners.Remove(Character);
		break;
	case ETurnEnum::TE_Enemy:
		CombatEnemyListeners.Remove(Character);
		break;
	case ETurnEnum::TE_None:
		UE_LOG(LogTemp, Warning, TEXT("Charactertype is None"));
		break;
	default:
		UE_LOG(LogTemp, Warning, TEXT("Character doesn't have Charactertype"));
		break;
	}
}

void UCombatManager::AddSkillActionToQueue(FCharacterData ActionData)
{
	if (IsValid(ActionData.CharacterBase))
	{
		ActionQueue.Add(ActionData);
		UE_LOG(LogTemp, Display, TEXT("Skill Action In Queue: %i"), ActionQueue.Num());
	}
}
