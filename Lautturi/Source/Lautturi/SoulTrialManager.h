// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SoulCard.h"
#include "SoulTrialManager.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSoulAddedToJourneyDelegate, ASoulCard*, SoulCard);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFerryIsFullDelegate, bool, bCanClick);
/**
 * 
 */
UCLASS()
class LAUTTURI_API USoulTrialManager : public UObject
{
	GENERATED_BODY()

private:

	TArray<ASoulCard*> ChosenSouls;

public:

	UFUNCTION()
	void AddSoulToJourney(ASoulCard* Soul);

	void Initialize();

	FSoulAddedToJourneyDelegate SoulAddedToJourneyDelegate;

	FFerryIsFullDelegate FerryIsFullDelegate;
};
