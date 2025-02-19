// Copyright © 2020 by Miro Salminen
#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SkillTypeEnums.h"
#include "SkillBase.generated.h"

UCLASS(BlueprintType, Blueprintable)
class AUTOBATTLERPROTO_API USkillBase : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	EAffectRange AffectRange;

	//Skilltype of this skill
	UPROPERTY(EditDefaultsOnly)
	ESkillType SkillType;

	//Skill type that can trigger this skill
	UPROPERTY(EditDefaultsOnly)
	ESkillType SkillTypeToActivate;

	//What this skill will do, this is displayed to player
	UPROPERTY(EditDefaultsOnly)
	FString SkillInfo;

	UPROPERTY()
	class ACharacterBase* OwningCharacter;

	UPROPERTY()
	class UAutoBattlerProtoGameInstance* GameInstance;

	UPROPERTY()
	class USoulTrialManager* TrialManager;

	UPROPERTY()
	class UCombatManager* CombatManager;

public:
	// Sets default values for this actor's properties
	USkillBase();

	void Initialize(ACharacterBase* Character);

	//Delay is passed to adjust when skilleffect starts playing.
	void Activate(float Delay = 0.5f);

	UFUNCTION(BlueprintImplementableEvent)
	void BP_ActivateSkill(float AnimDelay);

	//this will deactivate this skill and move to next 
	UFUNCTION(BlueprintCallable)
	void DeactivateSkill();


//Getters&&Setters
public:
	FORCEINLINE ESkillType GetSkillType() { if (this != nullptr) { return SkillType; }return ESkillType::ST_None; };
	FORCEINLINE ESkillType GetActivationSkillType() { if (this != nullptr) { return SkillTypeToActivate; }return ESkillType::ST_None; };
	FORCEINLINE FString GetSkillInfo() { return SkillInfo; };

	UFUNCTION(BlueprintPure)
	EAffectRange GetAffectRange() { if (this != nullptr) { return AffectRange; }return EAffectRange::AR_None; };

	UFUNCTION(BlueprintPure)
	class ACharacterBase* GetOwningCharacter() { return OwningCharacter; };

	UFUNCTION(BlueprintPure)
	TArray<class ACharacterBase*> GetCombatPlayerListeners();

	UFUNCTION(BlueprintPure)
	TArray<class ACharacterBase*> GetCombatEnemyListeners();
};