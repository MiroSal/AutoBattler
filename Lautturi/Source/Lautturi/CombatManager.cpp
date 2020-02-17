// Fill out your copyright notice in the Description page of Project Settings.

#include "CombatManager.h"
#include "SoulCard.h"
#include "CharacterBase.h"

void UCombatManager::Initialize()
{
	CurrentSoulIndexInAction = 0;
	CurrentEnemyIndexInAction = 0;
	CurrentTurn = ETurnEnum::Enemy;
}

void UCombatManager::RegisterSoulListener(ACharacterBase* Character)
{
	CombatCharacterListeners.Add(Character);

	if (CombatCharacterListeners.Num() == 5)
	{
	}
}

void UCombatManager::RegisterEnemyListener(ACharacterBase * Character)
{
	CombatEnemyListeners.Add(Character);

	PopNextSkillActionFromQueue();
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
			Character->Attack();
			UE_LOG(LogTemp, Warning, TEXT("Character: %s attacks"), *Character->GetFName().ToString());
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("No valid character"));
		}

		UE_LOG(LogTemp, Warning, TEXT("RoundEnded"));
		ChangeTurn();
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

void UCombatManager::ChangeTurn()
{
	ACharacterBase* Character= nullptr;

	switch (CurrentTurn)
	{
	case ETurnEnum::Player:

		CurrentTurn = ETurnEnum::Enemy;
		++CurrentEnemyIndexInAction;

		if (CurrentEnemyIndexInAction >= CombatEnemyListeners.Num())
		{
			CurrentEnemyIndexInAction = 0;
			Character = Cast<ACharacterBase>(CombatEnemyListeners[CurrentEnemyIndexInAction]);
			if (Character)
			{
				UE_LOG(LogTemp, Warning, TEXT("Character casted %s "), *Character->GetFName().ToString());

			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("Cast failed on Player turn"));
			}
		}
		else if (CombatEnemyListeners.Num()<=0)
		{
			UE_LOG(LogTemp, Warning, TEXT("No Enemy Listeners"));
			Character = nullptr;
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
		else if (CombatCharacterListeners.Num() > 0)
		{
			Character = Cast<ACharacterBase>(CombatCharacterListeners[CurrentSoulIndexInAction]);
			UE_LOG(LogTemp, Warning, TEXT("No Soul Listeners"));
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Cast failed on Enemy turn"));
		}
		break;

	case ETurnEnum::None:
		break;

	default:
		break;
	}

	if (IsValid(Character))
	{
		SkillUsedDelegate.Broadcast(FSoulData(Character, Character->GetPrimarySkillType()));
		Character->ActivatePrimarySkill();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("CombatSoulListeners data is not so valid"));
		ChangeTurn();
	}
}
