// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CharacterBase.h"
#include "Materials/Material.h"
#include "SkillTypeEnums.h"
#include "SoulDataStruct.h"
#include "SoulCard.generated.h"

class ABaseSlot;
class UTextRenderComponent;
class USoulTrialManager;
class ALautturiGameModeBase;
class USkillBase;

UCLASS()
class LAUTTURI_API ASoulCard : public ACharacterBase
{
	GENERATED_BODY()

private:

	UPROPERTY(VisibleAnywhere)
		UTextRenderComponent* SoulStatusText;
	
	UPROPERTY(EditAnywhere)
		bool bHasCoin;

	UPROPERTY(EditAnywhere)
		bool bIsAlive;

	UPROPERTY()
		ESkillType PassiveSkillType;

	void RandomizeStats();

	bool bCanBeClicked;

	UPROPERTY(VisibleAnywhere)
	USkillBase* PrimarySkill;

	UPROPERTY(VisibleAnywhere)
	USkillBase* PassiveSkill;

	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<USkillBase>> AllPossibleSkills;

	UPROPERTY(EditAnywhere)
	bool bTestAction=false;

	UFUNCTION()
	void ActionSkillUsed(FSoulData ActionInfo);

public:
	ASoulCard();

	//temp
	UPROPERTY(EditAnywhere)
	UMaterial* ActivatedColor;

	//temp
	UPROPERTY(EditAnywhere)
	UMaterial* DeactivatedColor;	//temp

	UPROPERTY(EditAnywhere)
	UMaterial* AliveColor;	//temp

	UPROPERTY(EditAnywhere)
	UMaterial* NoCoinColor;//temp

	virtual bool Clicked(AActor* ActorToDeactivate) override;
	virtual bool DoubleClicked(AActor* ActorToDeactivate) override;
	virtual bool Deactivate() override;

	bool HasCoin();

	virtual void Initialize(ABaseSlot* Slot, bool bCanClick)override;

	ABaseSlot* GetCurrentSlot();

	UFUNCTION()
	void CanClick(bool bCanClick);

	UFUNCTION()
	virtual void ActivatePrimarySkill() override;

	UFUNCTION()
	virtual void ActivatePassiveSkill() override;

	UFUNCTION(BlueprintCallable)
	virtual ABaseSlot* GetSlot() override;

	virtual ESkillType GetPrimarySkillType() override;

	virtual ESkillType GetPassiveSkillType() override;

	UFUNCTION(BlueprintCallable)
	virtual bool HealthReduce(int32 Amount) override;

	UFUNCTION(BlueprintCallable)
	virtual bool HealthAdd(int32 Amount) override;

	UFUNCTION()
	virtual void Attack() override;

	virtual void UpdateDataText() override;


	UFUNCTION()
		void CombatInitialize(ACharacterBase* Character);

	UFUNCTION()
		virtual USkillBase* GetPassiveSkill() override;
	UFUNCTION()
		virtual USkillBase* GetPrimarySkill() override;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};