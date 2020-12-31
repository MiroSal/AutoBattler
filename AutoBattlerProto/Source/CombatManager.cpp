// Copyright © 2020 by Miro Salminen

#include "CombatManager.h"
#include "CharacterBase.h"
#include "AutoBattlerProtoGameInstance.h"

#define TOTALENEMYCOUNT  5

UCombatManager::UCombatManager()
{
	CombatPlayerListeners = TArray<ACharacterBase*>();
	CombatEnemyListeners = TArray<ACharacterBase*>();
	ActionQueue = TArray<ACharacterBase*>();

	ActiveCharacter = nullptr;
	CurrentCombatTurn = ETurnEnum::TE_None;

	PlayerIndex = 0;
	EnemyIndex = 0;

	CurrentEnemyCount = 0;

	bIsFirstTurn = true;
}

void UCombatManager::Initialize(UAutoBattlerProtoGameInstance* Instance)
{
	AutoBattlerProtoGameInstance = Instance;
	check(AutoBattlerProtoGameInstance);
	AutoBattlerProtoGameInstance->EndCombatDelegate.AddDynamic(this, &UCombatManager::CombatEnded);
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
		ACharacterBase* Character = ActionQueue.Pop();
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
				UE_LOG(LogTemp, Warning, TEXT("Character: %s attacks"), *ActiveCharacter->GetFName().ToString());
				ActiveCharacter->Attack(); //Character will attack and run blueprint functionality, calls ChangeTurn() from Blueprint when ready.
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
				SkillUsedDelegate.Broadcast(ActiveCharacter, ActiveCharacter->GetPrimarySkillType());
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
		++PlayerIndex;
		if (PlayerIndex >= CombatPlayerListeners.Num())
			PlayerIndex = 0;

		ActiveCharacter = Cast<ACharacterBase>(CombatPlayerListeners[FMath::Clamp(PlayerIndex, 0, CombatPlayerListeners.Num())]);
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
	PlayerIndex = 0;
	ActiveCharacter = Cast<ACharacterBase>(CombatPlayerListeners[PlayerIndex]);
	CurrentCombatTurn = ETurnEnum::TE_Player;
	bIsFirstTurn = false;

	if (IsValid(ActiveCharacter))
	{
		ActiveCharacter->BP_StartTurn();
		if (SkillUsedDelegate.IsBound())
		{
			SkillUsedDelegate.Broadcast(ActiveCharacter, ActiveCharacter->GetPrimarySkillType());
		}

		ActiveCharacter->ActivatePrimarySkill();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("CombatSoulListeners data is not so valid"));
		ChangeTurn();
	}
}

//Add and listen combatmangers orders
void UCombatManager::RegisterToCombatListener(ACharacterBase* Character)
{
	if (!IsValid(Character))
		return;

	switch (Character->GetCharacterType())
	{
	case ETurnEnum::TE_Player:
		CombatPlayerListeners.Add(Character);
		if (!CombatPlayerListeners.Contains(Character))
		{
			CombatPlayerListeners.Add(Character);
		}
		break;
	case ETurnEnum::TE_Enemy:
		if (!CombatEnemyListeners.Contains(Character))
		{
			CombatEnemyListeners.Add(Character);
		}
		break;
	case ETurnEnum::TE_None:
		UE_LOG(LogTemp, Warning, TEXT("Charactertype is None"));
		break;
	default:
		UE_LOG(LogTemp, Warning, TEXT("Character doesn't have Charactertype"));
		break;
	}
}

//Remove and dont listen orders
void UCombatManager::UnRegisterCombatListener(ACharacterBase * Character)
{
	if (!IsValid(Character))
		return;

	switch (Character->GetCharacterType())
	{
	case ETurnEnum::TE_Player:
		CombatPlayerListeners.Remove(Character);
		if (CombatPlayerListeners.Num() <= 0)
		{
			AutoBattlerProtoGameInstance->EndCombat();
		}
		break;
	case ETurnEnum::TE_Enemy:
		CombatEnemyListeners.Remove(Character);
		CurrentEnemyCount++;
		if (CurrentEnemyCount >= TOTALENEMYCOUNT)
		{
			AutoBattlerProtoGameInstance->EndCombat();
		}
		break;
	case ETurnEnum::TE_None:
		UE_LOG(LogTemp, Warning, TEXT("Charactertype is None"));
		break;
	default:
		UE_LOG(LogTemp, Warning, TEXT("Character doesn't have Charactertype"));
		break;
	}
}

//Skills to activate this turn
void UCombatManager::AddSkillActionToQueue(ACharacterBase* InCharacter)
{
	if (IsValid(InCharacter))
	{
		ActionQueue.Add(InCharacter);
		UE_LOG(LogTemp, Display, TEXT("Skill Action In Queue: %i"), ActionQueue.Num());
	}
}

void UCombatManager::CombatEnded()
{
	CombatPlayerListeners.Empty();
	CombatEnemyListeners.Empty();
	ActionQueue.Empty();

	ActiveCharacter = nullptr;
	CurrentCombatTurn = ETurnEnum::TE_None;

	PlayerIndex = 0;
	EnemyIndex = 0;

	CurrentEnemyCount = 0;

	bIsFirstTurn = true;
}