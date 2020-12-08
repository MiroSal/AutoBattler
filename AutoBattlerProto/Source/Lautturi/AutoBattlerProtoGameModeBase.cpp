// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "AutoBattlerProtoGameModeBase.h"
#include "Engine/World.h"
#include "UObject/UObjectGlobals.h"

void AAutoBattlerProtoGameModeBase::BeginPlay()
{
	Super::BeginPlay();
}

USoulTrialManager * AAutoBattlerProtoGameModeBase::GetSoulTrialManager()
{
	UAutoBattlerProtoGameInstance* Gameinstance = Cast<UAutoBattlerProtoGameInstance>(GetWorld()->GetGameInstance());
	if (IsValid(Gameinstance))
	{
		return Gameinstance->GetSoulTrialManager();
	}
	return nullptr;
}

UCombatManager * AAutoBattlerProtoGameModeBase::GetCombatManager()
{
	UAutoBattlerProtoGameInstance* Gameinstance = Cast<UAutoBattlerProtoGameInstance>(GetWorld()->GetGameInstance());

	if (IsValid(Gameinstance))
	{
		return Gameinstance->GetCombatManager();
	}
	return nullptr;
}
