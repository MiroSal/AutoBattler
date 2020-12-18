// Copyright © 2020 by Miro Salminen
#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SoulTrialManager.generated.h"

UENUM()
enum class ETrialStatus :uint8
{
	TS_HasCoin UMETA(DisplayName = "Coin"),
	TS_NoCoin UMETA(DisplayName = "No Coin"),
	TS_Alive UMETA(DisplayName = "Alive"),
	TS_None UMETA(DisplayName = "None")
};

USTRUCT()
struct FCharacterAttributes
{
	GENERATED_BODY()
public:

	FCharacterAttributes()
	{
		TrialStatus = ETrialStatus::TS_None;
		Health = 0;
		Sin = 0;
		Str = 0;
		PrimarySkill = nullptr;
		PassiveSkill = nullptr;
	};

	void RandomizeAttributes(TArray<TSubclassOf<class USkillBase>> AllPossiblePrimarySkills,
		TArray<TSubclassOf<class USkillBase>> AllPossiblePassiveSkills)
	{
		TrialStatus = ETrialStatus(FMath::RandRange(0, ((int)ETrialStatus::TS_None) - 1));
		Health = FMath::RandRange(1, 10);
		Sin = FMath::RandRange(1, 10);
		Str = FMath::RandRange(1, 10);

		if (AllPossiblePrimarySkills.Num() > 0)
			PrimarySkill = AllPossiblePrimarySkills[FMath::RandRange(0, AllPossiblePrimarySkills.Num() - 1)];

		if (AllPossiblePassiveSkills.Num() > 0)
			PassiveSkill = AllPossiblePassiveSkills[FMath::RandRange(0, AllPossiblePassiveSkills.Num() - 1)];
	};

	UPROPERTY()
		ETrialStatus TrialStatus;

	UPROPERTY()
		int32 Health;
	UPROPERTY()
		int32 Sin;
	UPROPERTY()
		int32 Str;

	UPROPERTY()
		TSubclassOf<class USkillBase> PrimarySkill;

	UPROPERTY()
		TSubclassOf<class USkillBase> PassiveSkill;
};

/**
 *
 */
UCLASS(BlueprintType, Blueprintable)
class AUTOBATTLERPROTO_API USoulTrialManager : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY()
	TArray<FCharacterAttributes> SelectedCharacterAttributes;

//Widgets
private:

	UPROPERTY()
	TSubclassOf<class UTrialHUDWidget> TrialHUDWidgetClass;

	UPROPERTY()
	class UTrialHUDWidget* TrialHUDWidget;

	UPROPERTY()
	class UCharacterDataWidget* ActiveCharacterWidget;

protected:
	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<class USkillBase>> AllPossiblePrimarySkills;

	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<class USkillBase>> AllPossiblePassiveSkills;

public:
	USoulTrialManager();

	void Initialize();

//Getters&&Setters
public:
	/**Returns Character Attributes that was selected in SoulTrial UI*/
	FORCEINLINE FCharacterAttributes GetSelectedCharacterAttributes();

	/** Add Selected Character attributes that is used in combat */
	FORCEINLINE void AddSelectedCharacterAttributes(FCharacterAttributes CharacterAttributes) { SelectedCharacterAttributes.Add(CharacterAttributes); };

	FCharacterAttributes GetRandomizedCharacterAttributes();

	FORCEINLINE class UTrialHUDWidget* GetTrialHUDWidget() { return TrialHUDWidget; };

	void SetActiveCharacterWidget(UCharacterDataWidget* Widget);
};