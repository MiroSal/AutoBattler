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

		//TODO remove this is a test launch
		if (i == 4)
		{
			PopNextSkillActionFromQueue();
			UE_LOG(LogTemp, Warning, TEXT("Launch"));
		}
	}
}

void UCombatManager::AddSkillActionToQueue(FSoulData ActionData)
{
	if (IsValid(ActionData.SoulCard))
	{
		ActionQueue.Add(&ActionData);
	}
}

void UCombatManager::PopNextSkillActionFromQueue()
{
	if (ActionQueue.Num() <= 0)
	{
		++CurrentSoulIndexInAction;
		if (CurrentSoulIndexInAction > CombatSoulListeners.Num())
		{
			CurrentSoulIndexInAction = 0;
		}
		if (IsValid(CombatSoulListeners[CurrentSoulIndexInAction].SoulCard))
		{
			FSoulData Data = CombatSoulListeners[CurrentSoulIndexInAction];
			CombatSoulListeners[CurrentSoulIndexInAction].SoulCard->ActivatePrimarySkill();
			SkillUsedDelegate.Broadcast(Data);
		}
	}
	else if (ActionQueue.Num() > 0)
	{
		FSoulData* Data = ActionQueue.Pop();
		Data->SoulCard->ActivatePassiveSkill();
		SkillUsedDelegate.Broadcast(*Data);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Something odd happened"));
	}
}
