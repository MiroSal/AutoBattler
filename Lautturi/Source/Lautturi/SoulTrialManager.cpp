// Fill out your copyright notice in the Description page of Project Settings.


#include "SoulTrialManager.h"

void USoulTrialManager::AddSoulToJourney(ASoulCard* Soul)
{
	if (ChosenSouls.Num() <= 5)
	{
		ChosenSouls.Add(Soul);
	}

	if (ChosenSouls.Num() >= 5)
	{
		FerryIsFullDelegate.Broadcast(false);
	}

	if (SoulAddedToJourneyDelegate.IsBound())
	{
		UE_LOG(LogTemp, Warning, TEXT("DELEGATED"));
		SoulAddedToJourneyDelegate.Broadcast(Soul);
	}
}

void USoulTrialManager::Initialize()
{
}
