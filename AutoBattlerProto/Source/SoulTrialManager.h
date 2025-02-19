// Copyright � 2020 by Miro Salminen
#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SkillTypeEnums.h"
#include "SoulTrialManager.generated.h"


//Characters are randomized from these attributes
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

	void RandomizeAttributes(TArray<TSubclassOf<class USkillBase>> AllPossiblePrimarySkillClasses,
		TArray<TSubclassOf<class USkillBase>> AllPossiblePassiveSkillClasses)
	{
		TrialStatus = ETrialStatus(FMath::RandRange(0, ((int)ETrialStatus::TS_None) - 1));
		Health = FMath::RandRange(1, 10);
		Sin = FMath::RandRange(1, 10);
		Str = FMath::RandRange(1, 10);

		if (AllPossiblePrimarySkillClasses.Num() > 0)
			PrimarySkill = AllPossiblePrimarySkillClasses[FMath::RandRange(0, AllPossiblePrimarySkillClasses.Num() - 1)];

		if (AllPossiblePassiveSkillClasses.Num() > 0)
			PassiveSkill = AllPossiblePassiveSkillClasses[FMath::RandRange(0, AllPossiblePassiveSkillClasses.Num() - 1)];
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
	class UAutoBattlerProtoGameInstance* AutoBattlerProtoGameInstance;

	UPROPERTY()
	TArray<FCharacterAttributes> SelectedCharacterAttributes;

	UFUNCTION()
	void CombatEnded();

//random characters to SoulTrial is created from these classes
protected:
	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<class USkillBase>> AllPossiblePrimarySkillClasses;

	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<class USkillBase>> AllPossiblePassiveSkillClasses;

public:
	USoulTrialManager();

	void Initialize(class UAutoBattlerProtoGameInstance* Instance);

//Widgets
private:

	UPROPERTY()
	TSubclassOf<class UTrialHUDWidget> TrialHUDWidgetClass;

	UPROPERTY()
	class UTrialHUDWidget* TrialHUDWidget;

	UPROPERTY()
	class UCharacterDataWidget* ActiveCharacterWidget;

//Getters&&Setters
public:
	/**Returns Character Attributes that was selected in SoulTrial UI*/
	FCharacterAttributes GetSelectedCharacterAttributes();

	FCharacterAttributes GetRandomizedCharacterAttributes();

	/** Add Selected Character attributes that is used in combat */
	FORCEINLINE void AddSelectedCharacterAttributes(const FCharacterAttributes CharacterAttributes) { SelectedCharacterAttributes.Add(CharacterAttributes); };

	FORCEINLINE class UTrialHUDWidget* GetTrialHUDWidget() { return TrialHUDWidget; };

	void SetActiveCharacterWidget(UCharacterDataWidget* Widget);
};