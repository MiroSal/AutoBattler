// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ActivationInterface.h"
#include "SkillTypeEnums.h"
#include "CharacterBase.generated.h"

class ABaseSlot;
class UCombatManager;
class ALautturiGameModeBase;
class USoulTrialManager;
class USceneComponent;
class UStaticMeshComponent;

UCLASS()
class LAUTTURI_API ACharacterBase : public AActor, public IActivationInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACharacterBase();

	virtual bool Clicked(AActor* ActorToDeactivate) override;
	virtual bool DoubleClicked(AActor* ActorToDeactivate) override;
	virtual bool Deactivate() override;

protected:
	// Called when the game starts or when spawned
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


public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void ActivatePrimarySkill();

	virtual void ActivatePassiveSkill();

	virtual ABaseSlot* GetSlot();

	virtual void Initialize(ABaseSlot* Slot, bool bCanClick);

	virtual ESkillType GetPrimarySkillType();
	virtual ESkillType GetPassiveSkillType();

};
