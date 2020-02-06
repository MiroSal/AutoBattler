// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.


#include "LautturiGameModeBase.h"
#include "UObject/UObjectGlobals.h"


void ALautturiGameModeBase::BeginPlay()
{
	Super::BeginPlay();
}

void ALautturiGameModeBase::InitGame(const FString & MapName, const FString & Options, FString & ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);

	SoulTrialManager = NewObject<USoulTrialManager>();
	SoulTrialManager->Initialize();
	CombatManager = NewObject<UCombatManager>();
	CombatManager->Initialize();

}

USoulTrialManager * ALautturiGameModeBase::GetSoulTrialManager()
{
	if (IsValid(CombatManager))
	{
		return SoulTrialManager;
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("SoulTrialManager is not valid, maybe not created yet!!"));
	}
	return nullptr;
}

UCombatManager * ALautturiGameModeBase::GetCombatManager()
{
	if (IsValid(CombatManager))
	{
		return CombatManager;
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("CombatManager is not valid, maybe not created yet!!"));
	}

	return nullptr;
}
