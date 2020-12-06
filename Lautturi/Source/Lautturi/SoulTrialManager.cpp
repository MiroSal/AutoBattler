// Fill out your copyright notice in the Description page of Project Settings.


#include "SoulTrialManager.h"
#include "LautturiGameModeBase.h"
#include "CharacterBase.h"
#include "LautturiGameInstance.h"


void USoulTrialManager::AddSoulToJourney(ASoulCard* Soul)
{
	if (ChosenSouls.Num() <= 5)
	{
		SoulsToJourney.Add(Soul, false);
		ChosenSouls.Add(FChosenSoul(Soul, false));

		if (ChosenSouls.Num() >= 5)
		{
			FerryIsFullDelegate.Broadcast(false);
		}

		if (SoulAddedToJourneyDelegate.IsBound())
		{
			SoulAddedToJourneyDelegate.Broadcast(Soul);
		}
	}
}

void USoulTrialManager::Initialize()
{
	UE_LOG(LogTemp, Warning, TEXT("Soultrial Initialized"));
}

ASoulCard * USoulTrialManager::GetChosenSoul()
{
	ASoulCard* SoulToSend = nullptr;

	for (TPair<ASoulCard*, bool> Soul : SoulsToJourney)
	{
		if (Soul.Value == false)
		{
			if (IsValid(Soul.Key))
			{
				UE_LOG(LogTemp, Warning, TEXT("Gameinstance thing: %s "), *Soul.Key->GetFName().ToString());
				SoulToSend = Soul.Key;
				break;
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("Gameinstance thing: Not valis "));

			}
		}
	}


	if (IsValid(SoulToSend))
	{
		SoulsToJourney.Remove(SoulToSend);
		return SoulToSend;
	}

	return nullptr;
}

void USoulTrialManager::AddTrialSoulList(ACharacterBase * Soul)
{
	TrialSouls.Add(Cast<ASoulCard>(Soul));
}

void USoulTrialManager::RemoveTrialSoulList(ACharacterBase * Soul)
{

	TrialSouls.Remove(Cast<ASoulCard>(Soul));
}

void USoulTrialManager::DestoryAllOnTrialSoulsList()
{
	for (ASoulCard* Soul : TrialSouls)
	{
		if (IsValid(Soul))
		{
			Soul->Destroy();
		}
	}
}
