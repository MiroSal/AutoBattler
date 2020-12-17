// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "AutoBattlerProtoGameInstance.h"
#include "AutoBattlerProtoGameModeBase.generated.h"

/**
 *
 */
UCLASS()
class AUTOBATTLERPROTO_API AAutoBattlerProtoGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	USoulTrialManager* GetSoulTrialManager();

	UFUNCTION(BlueprintCallable)
	UCombatManager* GetCombatManager();
};