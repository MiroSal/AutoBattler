// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CharacterBase.h"
#include "Materials/Material.h"
#include "SkillTypeEnums.h"
#include "SoulDataStruct.h"
#include "SkillBase.h"
#include "SoulCard.generated.h"

UCLASS()
class LAUTTURI_API ASoulCard : public ACharacterBase
{
	GENERATED_BODY()

private:

	UPROPERTY(VisibleAnywhere)
		class UTextRenderComponent* SoulStatusText;

	UPROPERTY(EditAnywhere)
		bool bHasCoin;

	UPROPERTY(EditAnywhere)
		bool bIsAlive;

	UPROPERTY(EditAnywhere)
		bool bTestAction;

	bool bCanBeClicked;
	
	UPROPERTY(VisibleAnywhere)
		class USkillBase* PrimarySkill;

	UPROPERTY(VisibleAnywhere)
		class USkillBase* PassiveSkill;

	UPROPERTY(EditAnywhere)
		TArray<TSubclassOf<USkillBase>> AllPossiblePrimarySkills;
	UPROPERTY(EditAnywhere)
		TArray<TSubclassOf<USkillBase>> AllPossiblePassiveSkills;

	void RandomizeStats();

	UFUNCTION()
	void ActionSkillUsed(FSoulData ActionInfo);

public:
	ASoulCard();
	virtual bool Clicked(AActor* ActorToDeactivate) override;
	virtual bool DoubleClicked(AActor* ActorToDeactivate) override;
	virtual bool Deactivate() override;

	void CombatInitialize(ACharacterBase* Character);
	virtual void Initialize(ABaseSlot* Slot, bool bCanClick)override;

	//temps
public:

	UPROPERTY(EditAnywhere)
		class UMaterial* ActivatedColor;
	//temp
	UPROPERTY(EditAnywhere)
		class UMaterial* DeactivatedColor;	//temp
	UPROPERTY(EditAnywhere)
		class UMaterial* AliveColor;	//temp
	UPROPERTY(EditAnywhere)
		class UMaterial* NoCoinColor;//temp

public:

	bool HasCoin();

	UFUNCTION()
	void CanClick(bool bCanClick);

	virtual void ActivatePrimarySkill() override;
	virtual void ActivatePassiveSkill() override;

	virtual void Attack() override;

	virtual void UpdateDataText() override;

	UFUNCTION(BlueprintCallable)
		virtual bool HealthReduce(int32 Amount) override;

	UFUNCTION(BlueprintCallable)
		virtual bool HealthAdd(int32 Amount) override;


	//Getter&&Setters
public:

	UFUNCTION(BlueprintCallable)
		virtual ABaseSlot* GetSlot() override { return CurrentSlot; };

	FORCEINLINE virtual USkillBase* GetPassiveSkill() override { return PassiveSkill; };
	FORCEINLINE virtual USkillBase* GetPrimarySkill()override { return PrimarySkill; };
	FORCEINLINE virtual ESkillType GetPrimarySkillType() override { return PrimarySkill->GetSkillType(); };
	FORCEINLINE virtual ESkillType GetPassiveSkillType() override { return PassiveSkill->GetSkillType(); };
	FORCEINLINE class ABaseSlot* GetCurrentSlot() { return CurrentSlot; };
};