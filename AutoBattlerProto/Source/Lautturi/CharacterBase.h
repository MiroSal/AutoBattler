// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ActivationInterface.h"
#include "Components/TextRenderComponent.h"
#include "SkillTypeEnums.h"
#include "CombatManager.h"
#include "CharacterBase.generated.h"

UCLASS()
class AUTOBATTLERPROTO_API ACharacterBase : public AActor, public IActivationInterface
{
	GENERATED_BODY()
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		class USceneComponent* Root;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		class USkeletalMeshComponent* Mesh;

	UPROPERTY(VisibleAnywhere)
		class UTextRenderComponent* StatsText;

	UPROPERTY()
		class USoulTrialManager* SoulTrialManager;

	UPROPERTY()
		class UCombatManager* CombatManager;

	UPROPERTY()
		class AAutoBattlerProtoGameModeBase* GameMode;

	UPROPERTY(EditAnywhere, Category = "Character Stats")
		int32 Health;

	UPROPERTY(EditAnywhere, Category = "Character Stats")
		int32 Sin;

	UPROPERTY(EditAnywhere, Category = "Character Stats")
		int32 Str;

	UPROPERTY(EditAnywhere, Category = "Character Stats")
		ETurnEnum CharacterType = ETurnEnum::None;

	UPROPERTY(VisibleAnywhere, Category = "Character Stats")
		ABaseSlot* CurrentSlot;



public:
	ACharacterBase();
	virtual void Initialize(ABaseSlot* Slot, bool bCanClick);
	virtual bool Clicked(AActor* ActorToDeactivate) override;
	virtual bool DoubleClicked(AActor* ActorToDeactivate) override;
	virtual bool Deactivate() override;

public:

	virtual void ActivatePrimarySkill();
	virtual void ActivatePassiveSkill();

	virtual bool HealthReduce(int32 Amount);
	virtual bool HealthAdd(int32 Amount);

	virtual void Attack();

	UFUNCTION(BlueprintImplementableEvent)
		void BP_Attack();

	UFUNCTION(BlueprintImplementableEvent)
		void BP_SkillUsed(class USkillBase * Skill);

	UFUNCTION(BlueprintCallable)
		void AttackEnd();

	UFUNCTION(BlueprintImplementableEvent)
		void SetActiveDecal();

	UFUNCTION(BlueprintImplementableEvent)
		void DamageTaken(int32 Amount);

	UFUNCTION(BlueprintImplementableEvent)
		void BP_OnDeath();

	UFUNCTION(BlueprintImplementableEvent)
		void HealthAdded(int32 Amount);

	UFUNCTION(BlueprintCallable)
		virtual void UpdateDataText();

	UFUNCTION(BlueprintImplementableEvent)
		void StartTurn();

	UFUNCTION(BlueprintImplementableEvent)
		void EndTurn();

//Getter&&Setters
public:

	FORCEINLINE ETurnEnum GetCharacterType() { return CharacterType; };
	FORCEINLINE virtual ESkillType GetPrimarySkillType() { UE_LOG(LogTemp, Warning, TEXT("Override GetPrimarySkillType function!")); return ESkillType(); };
	FORCEINLINE virtual ESkillType GetPassiveSkillType() { UE_LOG(LogTemp, Warning, TEXT("Override GetPassiveSkillType function!")); return ESkillType(); };
	FORCEINLINE virtual class ABaseSlot* GetSlot() { UE_LOG(LogTemp, Warning, TEXT("Override ACharacterBase::GetSlot() function!")); return nullptr; };
	FORCEINLINE virtual class USkillBase* GetPassiveSkill() { UE_LOG(LogTemp, Warning, TEXT("Override GetPassiveSkill() function!")); return nullptr; };
	FORCEINLINE virtual class USkillBase* GetPrimarySkill() { UE_LOG(LogTemp, Warning, TEXT("Override GetPrimarySkill() function!")); return nullptr; };

	UFUNCTION(BlueprintCallable)
		void SetCurrentSlot(ABaseSlot* NewCurrentSlot);

	UFUNCTION(BlueprintCallable)
		bool StrAdd(int32 Amount);

	UFUNCTION(BlueprintCallable)
		bool StrReduce(int32 Amount);

	UFUNCTION(BlueprintCallable)
		void StrSet(int32 Amount);

	UFUNCTION(BlueprintCallable)
		bool SinReduce(int32 Amount);

	UFUNCTION(BlueprintCallable)
		bool SinAdd(int32 Amount);

	UFUNCTION(BlueprintCallable)
		int32 GetHealth();

	UFUNCTION(BlueprintCallable)
		int32 GetSin();

	UFUNCTION(BlueprintCallable)
		int32 GetStr();
};