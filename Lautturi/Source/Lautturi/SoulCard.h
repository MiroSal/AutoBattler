// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CharacterBase.h"
#include "Materials/Material.h"
#include "SkillTypeEnums.h"
#include "SoulDataStruct.h"
#include "SoulCard.generated.h"

class ASoulSlot;
class USceneComponent;
class UTextRenderComponent;
class UStaticMeshComponent;
class USoulTrialManager;
class ALautturiGameModeBase;
class USkillBase;
class UCombatManager;

UCLASS()
class LAUTTURI_API ASoulCard : public ACharacterBase
{
	GENERATED_BODY()

private:

	UPROPERTY()
		USceneComponent* ObjRoot;

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* SoulMesh;

	UPROPERTY(VisibleAnywhere)
		UTextRenderComponent* StatsText;

	UPROPERTY(VisibleAnywhere)
		UTextRenderComponent* SoulStatusText;
	
	UPROPERTY(EditAnywhere)
		bool bHasCoin;

	UPROPERTY(EditAnywhere)
		bool bIsAlive;

	UPROPERTY(EditAnywhere)
		int32 Hp;

	UPROPERTY(EditAnywhere)
		int32 Sin;

	UPROPERTY(EditAnywhere)
		int32 Str;

	UPROPERTY()
		ASoulSlot* CurrentSlot;

	UPROPERTY()
		USoulTrialManager* SoulTrialManager;

	UPROPERTY()
		UCombatManager* CombatManager;

	UPROPERTY()
		ALautturiGameModeBase* GameMode;

	UPROPERTY()
		ESkillType PassiveSkillType;

	void RandomizeStats();

	bool bCanBeClicked;

	UPROPERTY(EditAnywhere)
	TSubclassOf<USkillBase> PrimarySkill;

	UPROPERTY()
		USkillBase* Primary;

	UPROPERTY(EditAnywhere)
	TSubclassOf<USkillBase> PassiveSkill;

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
	virtual bool DoubleClicked() override;
	virtual bool Deactivate() override;

	bool HasCoin();

	void Initialize(ASoulSlot* SoulSlot, bool bCanClick);

	int32 GetHp();
	int32 GetSin();
	int32 GetStr();

	ASoulSlot* GetCurrentSlot();

	UFUNCTION()
	void CanClick(bool bCanClick);


	UFUNCTION()
		void ActivatePrimarySkill();

	UFUNCTION()
		void ActivatePassiveSkill();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
