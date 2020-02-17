// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ActivationInterface.h"
#include "SkillTypeEnums.h"
#include "CombatManager.h"
#include "CharacterBase.generated.h"

class ABaseSlot;
class ALautturiGameModeBase;
class USoulTrialManager;
class USceneComponent;
class UStaticMeshComponent;

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

	UPROPERTY()
		USceneComponent* ObjRoot;

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* SoulMesh;

	UPROPERTY()
		USoulTrialManager* SoulTrialManager;

	UPROPERTY()
		UCombatManager* CombatManager;

	UPROPERTY()
		ALautturiGameModeBase* GameMode;

	UPROPERTY(EditAnywhere, Category="Character Stats")
		int32 Health;

	UPROPERTY(EditAnywhere, Category = "Character Stats")
		ETurnEnum CharacterType = ETurnEnum::None;

	UPROPERTY()
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

	virtual void HealthReduce(int32 Amount);

	virtual void HealthAdd(int32 Amount);

	virtual void Attack();

	UFUNCTION(BlueprintImplementableEvent)
	void AttackBlueprint();

	UFUNCTION(BlueprintImplementableEvent)
	void OnDeath();
};