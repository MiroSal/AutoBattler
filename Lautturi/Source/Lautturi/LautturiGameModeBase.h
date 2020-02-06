// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SoulTrialManager.h"
#include "CombatManager.h"
#include "LautturiGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class LAUTTURI_API ALautturiGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

private:

	UPROPERTY()
	USoulTrialManager* SoulTrialManager;

	UPROPERTY()
		UCombatManager* CombatManager;

public:
	virtual void BeginPlay() override;

	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;


	USoulTrialManager* GetSoulTrialManager();

	UCombatManager* GetCombatManager();
	
};
