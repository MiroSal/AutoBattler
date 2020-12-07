// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "LautturiGameModeBase.h"
#include "Engine/World.h"
#include "UObject/UObjectGlobals.h"

void ALautturiGameModeBase::BeginPlay()
{
	Super::BeginPlay();
}

USoulTrialManager * ALautturiGameModeBase::GetSoulTrialManager()
{
	ULautturiGameInstance* Gameinstance = Cast<ULautturiGameInstance>(GetWorld()->GetGameInstance());
	if (IsValid(Gameinstance))
	{
		return Gameinstance->GetSoulTrialManager();
	}
	return nullptr;
}

UCombatManager * ALautturiGameModeBase::GetCombatManager()
{
	ULautturiGameInstance* Gameinstance = Cast<ULautturiGameInstance>(GetWorld()->GetGameInstance());

	if (IsValid(Gameinstance))
	{
		return Gameinstance->GetCombatManager();
	}
	return nullptr;
}
