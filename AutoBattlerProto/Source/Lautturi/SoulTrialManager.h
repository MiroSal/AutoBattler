// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
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

	FChosenSoul(APlayerCharacter* SoulToAdd, bool bIsSpawned)
	{
		bHasBeenSpawned = bIsSpawned;
		Soul = SoulToAdd;
	}

	UPROPERTY()
		bool bHasBeenSpawned;

	UPROPERTY()
		class APlayerCharacter* Soul;
};


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSoulAddedToJourneyDelegate, APlayerCharacter*, SoulCard);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFerryIsFullDelegate, bool, bCanClick);
/**
 * 
 */
UCLASS()
class AUTOBATTLERPROTO_API USoulTrialManager : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY()
	TArray<FChosenSoul> ChosenSouls;

	UPROPERTY()
	TArray<class APlayerCharacter*> TrialSouls;

	UPROPERTY()
	TMap<class APlayerCharacter*, bool> SoulsToJourney;

	UPROPERTY()
		class APlayerCharacter* SoulTest;
public:

	USoulTrialManager();

	void AddSoulToJourney(APlayerCharacter* Soul);

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
		class APlayerCharacter* GetChosenSoul();

};
