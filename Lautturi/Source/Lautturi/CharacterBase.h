// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ActivationInterface.h"
#include "Components/TextRenderComponent.h"
#include "SkillTypeEnums.h"
#include "CombatManager.h"
#include "CharacterBase.generated.h"

class ABaseSlot;
class ALautturiGameModeBase;
class USoulTrialManager;
class USceneComponent;
class UStaticMeshComponent;
class USkillBase;

UCLASS()
class LAUTTURI_API ACharacterBase : public AActor, public IActivationInterface
{
	GENERATED_BODY()

public:
	ACharacterBase();

	virtual bool Clicked(AActor* ActorToDeactivate) override;
	virtual bool DoubleClicked(AActor* ActorToDeactivate) override;
	virtual bool Deactivate() override;

protected:
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		USceneComponent* ObjRoot;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UStaticMeshComponent* SoulMesh;

	UPROPERTY(VisibleAnywhere)
		UTextRenderComponent* StatsText;

	UPROPERTY()
		USoulTrialManager* SoulTrialManager;

	UPROPERTY()
		UCombatManager* CombatManager;

	UPROPERTY()
		ALautturiGameModeBase* GameMode;

	UPROPERTY(EditAnywhere, Category="Character Stats")
		int32 Health;

	UPROPERTY(EditAnywhere, Category = "Character Stats")
		int32 Sin;

	UPROPERTY(EditAnywhere, Category = "Character Stats")
		int32 Str;

	UPROPERTY(EditAnywhere, Category = "Character Stats")
		ETurnEnum CharacterType = ETurnEnum::None;

	UPROPERTY(VisibleAnywhere,Category = "Character Stats")
		ABaseSlot* CurrentSlot;

public:
	virtual void Tick(float DeltaTime) override;

	virtual void ActivatePrimarySkill();

	virtual void ActivatePassiveSkill();

	virtual ABaseSlot* GetSlot();

	ETurnEnum GetCharacterType();

	virtual void Initialize(ABaseSlot* Slot, bool bCanClick);

	virtual ESkillType GetPrimarySkillType();
	virtual ESkillType GetPassiveSkillType();

	virtual bool HealthReduce(int32 Amount);

	virtual bool HealthAdd(int32 Amount);

	virtual void Attack();

	UFUNCTION(BlueprintImplementableEvent)
	void AttackBlueprint();

	UFUNCTION(BlueprintImplementableEvent)
	void SetActiveDecal();

	UFUNCTION(BlueprintCallable)
	void AttackEnd();

	UFUNCTION(BlueprintImplementableEvent)
	void OnDeath();	
	
	UFUNCTION(BlueprintImplementableEvent)
	void DamageTaken(int32 Amount);
	
	UFUNCTION(BlueprintImplementableEvent)
	void HealthAdded(int32 Amount);

	UFUNCTION(BlueprintCallable)
	virtual void UpdateDataText();

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

	UFUNCTION(BlueprintImplementableEvent)
		void StartTurn();

	UFUNCTION(BlueprintImplementableEvent)
		void EndTurn();

		virtual USkillBase* GetPassiveSkill();	

		virtual USkillBase* GetPrimarySkill();

		UFUNCTION(BLueprintCallable)
			void SetCurrentSlot(ABaseSlot* NewCurrentSlot);

};