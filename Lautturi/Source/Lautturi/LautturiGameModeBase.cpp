// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.


#include "LautturiGameModeBase.h"
#include "Engine/World.h"
#include "UObject/UObjectGlobals.h"


void ALautturiGameModeBase::BeginPlay()
{
	Super::BeginPlay();
}

void ALautturiGameModeBase::InitGame(const FString & MapName, const FString & Options, FString & ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);

	Gameinstance = Cast<ULautturiGameInstance>(GetWorld()->GetGameInstance());
}

USoulTrialManager * ALautturiGameModeBase::GetSoulTrialManager()
{
	if (Gameinstance)
	{
		return Gameinstance->GetSoulTrialManager();
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("SoulTrialManager is not valid, maybe not created yet!!"));
	}
	return nullptr;
}

UCombatManager * ALautturiGameModeBase::GetCombatManager()
{
	if (Gameinstance)
	{
		return Gameinstance->GetCombatManager();
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("CombatManager is not valid, maybe not created yet!!"));
	}

	return nullptr;
}
