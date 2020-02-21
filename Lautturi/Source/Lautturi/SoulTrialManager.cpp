// Fill out your copyright notice in the Description page of Project Settings.


#include "SoulTrialManager.h"
#include "LautturiGameModeBase.h"
#include "LautturiGameInstance.h"

void USoulTrialManager::AddSoulToJourney(ASoulCard* Soul)
{
	if (ChosenSouls.Num() <= 5)
	{

		ULautturiGameInstance *Gameinstance = Cast<ULautturiGameInstance>(GetWorld()->GetGameInstance());
		Gameinstance->SoulsToJourney.Add(Soul, false);


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


	for (FChosenSoul Soul : ChosenSouls)
	{
		if (Soul.bHasBeenSpawned == false)
		{
			Soul.bHasBeenSpawned = true;
			return Soul.Soul;
		}
	}

	ULautturiGameInstance *Gameinstance = Cast<ULautturiGameInstance>(GetWorld()->GetGameInstance());
	TMap<ASoulCard*, bool> JourneySouls = Gameinstance->SoulsToJourney;

	for (TPair<ASoulCard*, bool> Soul : JourneySouls)
	{
		if (Soul.Value == false)
		{
			if (IsValid(Soul.Key))
			{
				UE_LOG(LogTemp, Warning, TEXT("Gameinstance thing: %s "), *Soul.Key->GetFName().ToString());
				Soul.Value = true;
				return Soul.Key;
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("Gameinstance thing: Not valis "));

			}
		}
	}

	return nullptr;
}
