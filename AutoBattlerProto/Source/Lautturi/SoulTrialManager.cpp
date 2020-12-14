// Fill out your copyright notice in the Description page of Project Settings.

#include "SoulTrialManager.h"
#include "AutoBattlerProtoGameModeBase.h"
#include "CharacterBase.h"
#include "AutoBattlerProtoGameInstance.h"
#include "PlayerCharacter.h"

USoulTrialManager::USoulTrialManager()
{
	SoulTest = nullptr;
}

void USoulTrialManager::Initialize()
{
	UE_LOG(LogTemp, Warning, TEXT("Soultrial Initialized"));
}

void USoulTrialManager::AddSoulToJourney(APlayerCharacter* Soul)
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

void USoulTrialManager::AddTrialSoulList(ACharacterBase * Soul)
{
	TrialSouls.Add(Cast<APlayerCharacter>(Soul));
}

void USoulTrialManager::RemoveTrialSoulList(ACharacterBase * Soul)
{

	TrialSouls.Remove(Cast<APlayerCharacter>(Soul));
}

void USoulTrialManager::DestoryAllOnTrialSoulsList()
{
	for (APlayerCharacter* Soul : TrialSouls)
	{
		if (IsValid(Soul))
		{
			Soul->Destroy();
		}
	}
}

APlayerCharacter * USoulTrialManager::GetChosenSoul()
{
	APlayerCharacter* SoulToSend = nullptr;

	for (TPair<APlayerCharacter*, bool> Soul : SoulsToJourney)
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
