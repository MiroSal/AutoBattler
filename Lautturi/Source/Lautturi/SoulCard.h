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
class UCombatManager;

UCLASS()
class LAUTTURI_API ASoulCard : public ACharacterBase
{
	GENERATED_BODY()

private:

	UPROPERTY(VisibleAnywhere)
		UTextRenderComponent* StatsText;

	UPROPERTY(VisibleAnywhere)
		UTextRenderComponent* SoulStatusText;
	
	UPROPERTY(EditAnywhere)
		bool bHasCoin;

	UPROPERTY(EditAnywhere)
		bool bIsAlive;

	UPROPERTY(EditAnywhere)
		int32 Sin;

	UPROPERTY(EditAnywhere)
		int32 Str;

	UPROPERTY()
		ABaseSlot* CurrentSlot;

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
	// Sets default values for this character's properties
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

	int32 GetSin();
	int32 GetStr();

	ABaseSlot* GetCurrentSlot();

	UFUNCTION()
	void CanClick(bool bCanClick);

	UFUNCTION()
		virtual void ActivatePrimarySkill() override;

	UFUNCTION()
		virtual void ActivatePassiveSkill() override;

	UFUNCTION()
	virtual ABaseSlot* GetSlot() override;

	virtual ESkillType GetPrimarySkillType() override;

	virtual ESkillType GetPassiveSkillType() override;

	UFUNCTION(BlueprintCallable)
		virtual void HealthReduce(int32 Amount) override;

	UFUNCTION(BlueprintCallable)
		virtual void HealthAdd(int32 Amount) override;

	UFUNCTION()
		virtual void Attack() override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
