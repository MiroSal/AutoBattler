// Copyright © 2020 by Miro Salminen
#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SoulTrialManager.generated.h"

USTRUCT()
struct FCharacterAttributes
{
	GENERATED_BODY()
public:

	FCharacterAttributes()
	{
		Health = 0;
		Sin = 0;
		Str = 0;
		PrimarySkill = nullptr;
		PassiveSkill = nullptr;
	};

	void RandomAttributes(TArray<TSubclassOf<class USkillBase>> AllPossiblePrimarySkills,
		TArray<TSubclassOf<class USkillBase>> AllPossiblePassiveSkills)
	{
		Health = FMath::RandRange(1, 10);
		Sin = FMath::RandRange(1, 10);
		Str = FMath::RandRange(1, 10);

		if (AllPossiblePrimarySkills.Num() > 0)
			PrimarySkill = AllPossiblePrimarySkills[FMath::RandRange(0, AllPossiblePrimarySkills.Num() - 1)];

		if (AllPossiblePassiveSkills.Num() > 0)
			PassiveSkill = AllPossiblePassiveSkills[FMath::RandRange(0, AllPossiblePassiveSkills.Num() - 1)];
	};

	UPROPERTY(EditDefaultsOnly)
		int32 Health;
	UPROPERTY(EditDefaultsOnly)
		int32 Sin;
	UPROPERTY(EditDefaultsOnly)
		int32 Str;

	UPROPERTY()
		TSubclassOf<class USkillBase> PrimarySkill;

	UPROPERTY()
		TSubclassOf<class USkillBase> PassiveSkill;


};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSoulAddedToJourneyDelegate, APlayerCharacter*, SoulCard);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFerryIsFullDelegate, bool, bCanClick);
/**
 *
 */
UCLASS(BlueprintType, Blueprintable)
class AUTOBATTLERPROTO_API USoulTrialManager : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY()
	TArray<class APlayerCharacter*> AllCharactersInTrial;

	UPROPERTY()
	TArray<class APlayerCharacter*> CharactersToCombat;

	UPROPERTY()
	TArray<FCharacterAttributes> CharactersAttributes;

public:
	USoulTrialManager();

	UPROPERTY()
	FSoulAddedToJourneyDelegate SoulAddedToJourneyDelegate;

	UPROPERTY()
	FFerryIsFullDelegate FerryIsFullDelegate;

	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<class USkillBase>> AllPossiblePrimarySkills;

	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<class USkillBase>> AllPossiblePassiveSkills;


	//Getters&&Setters
public:
	UFUNCTION(BlueprintCallable)
	class APlayerCharacter* GetChosenCharacter();	
	
	UFUNCTION(BlueprintCallable)
	void DestroyCharactersFromTrial();

	FORCEINLINE FCharacterAttributes GetChosenCharacterAttributes();
	FORCEINLINE void AddCharacterToCombat(APlayerCharacter* Soul);
	FORCEINLINE void AddCharacterToCombat(FCharacterAttributes CharacterAttributes);
	FORCEINLINE void AddCharacterToTrial(class ACharacterBase* Soul);
	FORCEINLINE void RemoveCharacterFromTrial(class ACharacterBase* Soul);

	FCharacterAttributes GetRandomCharacterAttributes();
};