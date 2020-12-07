// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SoulCard.h"
#include "SoulTrialManager.generated.h"

USTRUCT(BlueprintType)
struct FChosenSoul
{
	GENERATED_BODY()

public:

	FChosenSoul() 
	{
		bHasBeenSpawned = false;
		Soul = nullptr;
	}

	FChosenSoul(ASoulCard* SoulToAdd, bool bIsSpawned)
	{
		bHasBeenSpawned = bIsSpawned;
		Soul = SoulToAdd;
	}

	UPROPERTY()
		bool bHasBeenSpawned;

	UPROPERTY()
		ASoulCard* Soul;
};


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
	UPROPERTY()
	TArray<FChosenSoul> ChosenSouls;

	UPROPERTY()
	TArray<ASoulCard*> TrialSouls;

	UPROPERTY()
	TMap<ASoulCard*, bool> SoulsToJourney;

	UPROPERTY()
		ASoulCard* SoulTest;
public:

	USoulTrialManager();

	void AddSoulToJourney(ASoulCard* Soul);

	void Initialize();

	FSoulAddedToJourneyDelegate SoulAddedToJourneyDelegate;

	FFerryIsFullDelegate FerryIsFullDelegate;

	UFUNCTION()
		void AddTrialSoulList(class ACharacterBase* Soul);

	UFUNCTION()
		void RemoveTrialSoulList(class ACharacterBase* Soul);	
	
	UFUNCTION(BlueprintCallable)
		void DestoryAllOnTrialSoulsList();

	//Getters&&Setters
public:
	UFUNCTION(BlueprintCallable)
		ASoulCard* GetChosenSoul();

};
