// Fill out your copyright notice in the Description page of Project Settings.

#include "CombatManager.h"
#include "SoulCard.h"

void UCombatManager::Initialize()
{
	CurrentSoulIndexInAction = 0;
}

void UCombatManager::RegisterToListener(FSoulData Data)
{
	CombatSoulListeners.Add(Data);

	for (int32 i = 0; i < CombatSoulListeners.Num(); i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("Listener Name: %s"), *CombatSoulListeners[i].SoulCard->GetFName().ToString());

	}
	if (CombatSoulListeners.Num() == 5)
	{
		PopNextSkillActionFromQueue();
	}
}

void UCombatManager::AddSkillActionToQueue(FSoulData ActionData)
{
	if (IsValid(ActionData.SoulCard))
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
		ASoulCard* Soul = Cast<ASoulCard>(Data.SoulCard);
		if (IsValid(Soul))
		{
			//SkillUsedDelegate.Broadcast(*Data);
			Data.SoulCard->ActivatePassiveSkill();
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("ActionQueue data is not valid"));
		}
	}
	else if (/*ActionQueue.Num() <= 0*/testrun)
	{
		testrun = false;
		++CurrentSoulIndexInAction;
		if (CurrentSoulIndexInAction >= CombatSoulListeners.Num())
		{
			CurrentSoulIndexInAction = 0;
		}
		if (IsValid(CombatSoulListeners[CurrentSoulIndexInAction].SoulCard))
		{
			FSoulData Data = CombatSoulListeners[CurrentSoulIndexInAction];
			if (IsValid(Data.SoulCard))
			{
				SkillUsedDelegate.Broadcast(Data);
				CombatSoulListeners[CurrentSoulIndexInAction].SoulCard->ActivatePrimarySkill();
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("CombatSoulListeners data is not valid"));
			}
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Something odd happened"));
	}
}
