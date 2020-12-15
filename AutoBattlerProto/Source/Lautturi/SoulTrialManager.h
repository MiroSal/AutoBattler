// Copyright © 2020 by Miro Salminen
#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SoulTrialManager.generated.h"

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
	TArray<class APlayerCharacter*> AllCharactersInTrial;

	UPROPERTY()
	TArray<class APlayerCharacter*> CharactersToCombat;

public:
	USoulTrialManager();

	UPROPERTY()
	FSoulAddedToJourneyDelegate SoulAddedToJourneyDelegate;

	UPROPERTY()
	FFerryIsFullDelegate FerryIsFullDelegate;


	//Getters&&Setters
public:
	UFUNCTION(BlueprintCallable)
	class APlayerCharacter* GetChosenCharacter();

	UFUNCTION(BlueprintCallable)
	void DestroyCharactersFromTrial();
	
	FORCEINLINE void AddCharacterToCombat(APlayerCharacter* Soul);
	FORCEINLINE void AddCharacterToTrial(class ACharacterBase* Soul);
	FORCEINLINE void RemoveCharacterFromTrial(class ACharacterBase* Soul);
};