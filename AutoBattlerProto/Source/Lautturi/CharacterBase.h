// Copyright © 2020 by Miro Salminen

#pragma once
#include "CoreMinimal.h"
#include "ActivationInterface.h"
#include "SkillTypeEnums.h"
#include "CombatManager.h"
#include "SkillBase.h"
#include "CharacterBase.generated.h"


UCLASS()
class AUTOBATTLERPROTO_API ACharacterBase : public AActor, public IActivationInterface
{
	GENERATED_BODY()

		//Character Stats
private:
	UPROPERTY()
	int32 Health;

	UPROPERTY()
	int32 Sin;

	UPROPERTY()
	int32 Str;

	UPROPERTY(VisibleInstanceOnly)
	class USkillBase* PrimarySkill;

	UPROPERTY(VisibleInstanceOnly)
	class USkillBase* PassiveSkill;

	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<USkillBase>> AllPossiblePrimarySkills;

	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<USkillBase>> AllPossiblePassiveSkills;

	UPROPERTY(EditAnywhere, Category = "Character Stats")
	ETurnEnum CharacterType = ETurnEnum::TE_None;

	UPROPERTY(VisibleAnywhere, Category = "Character Stats")
	ASlotBase* CurrentSlot;

protected:
	//Randomize base stats
	virtual void RandomizeStats();

	UFUNCTION()
		virtual void SkillUsed(FCharacterData Data) {};

public:
	ACharacterBase();

	virtual void Initialize(class ASlotBase* Slot, bool bCanClick);

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

	//overriden in derived classes
public:
	virtual void ActivatePrimarySkill() {};
	virtual void ActivatePassiveSkill() {};
	virtual bool HealthReduce(int32 Amount) { return false; };
	virtual bool HealthAdd(int32 Amount) { return false; };
	virtual void Attack() {};

	UFUNCTION(BlueprintCallable)
		virtual void UpdateDataText() {};

	//BlueprintImplementableEvents
public:
	UFUNCTION(BlueprintImplementableEvent)
	void BP_Attack();

	UFUNCTION(BlueprintImplementableEvent)
	void BP_SkillUsed(class USkillBase * Skill);

	UFUNCTION(BlueprintImplementableEvent)
	void BP_SetActiveDecal();

	UFUNCTION(BlueprintImplementableEvent)
	void BP_DamageTaken(int32 Amount);

	UFUNCTION(BlueprintImplementableEvent)
	void BP_OnDeath();

	UFUNCTION(BlueprintImplementableEvent)
	void BP_HealthAdded(int32 Amount);

	UFUNCTION(BlueprintImplementableEvent)
	void BP_StartTurn();

	UFUNCTION(BlueprintImplementableEvent)
	void BP_EndTurn();

	UFUNCTION(BlueprintCallable)
	void AttackEnd();

	//Getter&&Setters
public:
	FORCEINLINE ETurnEnum GetCharacterType() { return CharacterType; };
	FORCEINLINE virtual class ASlotBase* GetSlot() { return CurrentSlot; };
	FORCEINLINE virtual USkillBase* GetPassiveSkill() { return PassiveSkill; };
	FORCEINLINE virtual USkillBase* GetPrimarySkill() { return PrimarySkill; };
	FORCEINLINE virtual ESkillType GetPrimarySkillType() { return PrimarySkill->GetSkillType(); };
	FORCEINLINE virtual ESkillType GetPassiveSkillType() { return PassiveSkill->GetSkillType(); };

	UFUNCTION(BlueprintCallable)
	void SetCurrentSlot(ASlotBase* NewCurrentSlot);

	UFUNCTION(BlueprintCallable)
	ASlotBase* GetCurrentSlot() { return CurrentSlot; };

	//Character stats
	UFUNCTION(BlueprintCallable, Category = "Character Stats")
	void SetHealth(int32 InHealth);

	UFUNCTION(BlueprintCallable, Category = "Character Stats")
	void SetSin(int32 InSin);

	UFUNCTION(BlueprintCallable, Category = "Character Stats")
	void SetStr(int32 InStr);

	UFUNCTION(BlueprintCallable, Category = "Character Stats")
	int32 GetHealth();

	UFUNCTION(BlueprintCallable, Category = "Character Stats")
	int32 GetSin();

	UFUNCTION(BlueprintCallable, Category = "Character Stats")
	int32 GetStr();

	UFUNCTION(BlueprintCallable, Category = "Character Stats")
	bool IsAlive();

	//IActivationInterface
public:
	virtual bool Clicked(AActor* ActorToDeactivate) override { return false; };
	virtual bool DoubleClicked(AActor* ActorToDeactivate) override { return false; };
	virtual bool Deactivate() override { return false; };
};