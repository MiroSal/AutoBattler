// Fill out your copyright notice in the Description page of Project Settings.

#include "CombatManager.h"
#include "SoulCard.h"
#include "CharacterBase.h"

void UCombatManager::Initialize()
{
	CurrentSoulIndexInAction = 0;
	CurrentEnemyIndexInAction = 0;
	CurrentTurn = ETurnEnum::Enemy;
	FirstTurn = true;
}

void UCombatManager::RegisterSoulListener(ACharacterBase* Character)
{
	CombatCharacterListeners.Add(Character);
}

void UCombatManager::RegisterEnemyListener(ACharacterBase * Character)
{
	CombatEnemyListeners.Add(Character);
	UE_LOG(LogTemp, Warning, TEXT("EnemyRegister"));
}

void UCombatManager::UnRegisterFromListener(ACharacterBase * Character)
{
	switch (Character->GetCharacterType())
	{
	case ETurnEnum::Player:
		CombatCharacterListeners.Remove(Character);
		break;
	case ETurnEnum::Enemy:
		CombatEnemyListeners.Remove(Character);
		break;
	case ETurnEnum::None:
		UE_LOG(LogTemp, Warning, TEXT("Character doesn't have Charactertype"));
		break;
	default:
		break;
	}
}

void UCombatManager::AddSkillActionToQueue(FSoulData ActionData)
{
	if (IsValid(ActionData.CharacterBase))
	{
		ActionQueue.Add(ActionData);
		UE_LOG(LogTemp, Warning, TEXT("Skill Action In Queue: %i"), ActionQueue.Num());
	}
}

void UCombatManager::PopNextSkillActionFromQueue()
{

	if (ActionQueue.Num() > 0)
	{
		FSoulData Data = ActionQueue.Pop();
		ACharacterBase* Character = Cast<ACharacterBase>(Data.CharacterBase);
		if (IsValid(Character))
		{
			Character->ActivatePassiveSkill();
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("ActionQueue data is not valid"));
		}
	}
	else if (ActionQueue.Num() <= 0)
	{
		ACharacterBase* Character = nullptr;
		switch (CurrentTurn)
		{
		case ETurnEnum::Player:
			Character = CombatCharacterListeners[CurrentSoulIndexInAction];
			break;
		case ETurnEnum::Enemy:
			Character = CombatEnemyListeners[CurrentEnemyIndexInAction];
			break;
		case ETurnEnum::None:
			break;
		default:
			break;
		}

		if (IsValid(Character))
		{
			if (Character->GetHealth() > 0)
			{
				Character->Attack();
			}
			else
			{
				ChangeTurn();
			}
			UE_LOG(LogTemp, Warning, TEXT("Character: %s attacks"), *Character->GetFName().ToString());
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("No valid character"));
		}

		UE_LOG(LogTemp, Warning, TEXT("RoundEnded"));
	}
}


void UCombatManager::ChangeTurn()
{
	ACharacterBase* Character = nullptr;
	if (FirstTurn)
	{
		CurrentSoulIndexInAction = 0;
		Character = Cast<ACharacterBase>(CombatCharacterListeners[CurrentSoulIndexInAction]);
		CurrentTurn = ETurnEnum::Player;
		FirstTurn = false;

		if (IsValid(Character))
		{
			Character->StartTurn();
			CurrentSoulInAction = Character;
			SkillUsedDelegate.Broadcast(FSoulData(Character, Character->GetPrimarySkillType()));
			Character->ActivatePrimarySkill();
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("CombatSoulListeners data is not so valid"));
			ChangeTurn();
		}
	}
	else
	{
		switch (CurrentTurn)
		{
		case ETurnEnum::Player:

			CurrentTurn = ETurnEnum::Enemy;
			++CurrentEnemyIndexInAction;

			if (CurrentEnemyIndexInAction >= CombatEnemyListeners.Num())
			{
				CurrentEnemyIndexInAction = 0;
				Character = Cast<ACharacterBase>(CombatEnemyListeners[CurrentEnemyIndexInAction]);

			}
			else if (CombatEnemyListeners.Num() <= 0)
			{
				UE_LOG(LogTemp, Warning, TEXT("No Enemy Listeners"));
				Character = nullptr;
			}
			else
			{
				Character = Cast<ACharacterBase>(CombatEnemyListeners[CurrentEnemyIndexInAction]);
			}
			break;

		case ETurnEnum::Enemy:

			CurrentTurn = ETurnEnum::Player;
			++CurrentSoulIndexInAction;

			if (CurrentSoulIndexInAction >= CombatCharacterListeners.Num())
			{
				CurrentSoulIndexInAction = 0;
				Character = Cast<ACharacterBase>(CombatCharacterListeners[CurrentSoulIndexInAction]);

			}
			else if (CombatCharacterListeners.Num() <= 0)
			{
				UE_LOG(LogTemp, Warning, TEXT("No Soul Listeners"));
				Character = nullptr;
			}
			else
			{
				Character = Cast<ACharacterBase>(CombatCharacterListeners[CurrentSoulIndexInAction]);
			}

			if (IsValid(Character))
			{
				UE_LOG(LogTemp, Warning, TEXT("Health = %d"), Character->GetHealth());
				if (Character->GetHealth() <= 0)
				{
					CurrentTurn = ETurnEnum::Enemy;
					ChangeTurn();
					return;
				}
			}
			break;

		case ETurnEnum::None:
			break;

		default:
			break;
		}

		if (IsValid(Character))
		{

			if (IsValid(CurrentSoulInAction))
			{
				CurrentSoulInAction->EndTurn();
			}
			Character->StartTurn();
			CurrentSoulInAction = Character;
			SkillUsedDelegate.Broadcast(FSoulData(Character, Character->GetPrimarySkillType()));
			Character->ActivatePrimarySkill();
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("CombatSoulListeners data is not so valid"));
			ChangeTurn();
		}
	}
}

TArray<ACharacterBase*> UCombatManager::GetAllEnemies()
{
	return CombatEnemyListeners;
}

TArray<ACharacterBase*> UCombatManager::GetAllSouls()
{
	return CombatCharacterListeners;
}
