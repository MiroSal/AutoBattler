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
}

USoulTrialManager * ALautturiGameModeBase::GetSoulTrialManager()
{
	return SoulTrialManager;
}
