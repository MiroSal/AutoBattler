// Copyright © 2020 by Miro Salminen

#pragma once
#include "CoreMinimal.h"
#include "SkillTypeEnums.h"
#include "SkillBase.h"
#include "CharacterBase.generated.h"

UCLASS()
class AUTOBATTLERPROTO_API ACharacterBase : public AActor
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

	//Is player or enemy
	UPROPERTY(EditAnywhere, Category = "Character Stats")
	ETurnEnum CharacterType = ETurnEnum::TE_None;

	UPROPERTY(VisibleAnywhere, Category = "Character Stats")
	ASlotBase* CurrentSlot;

public:
	ACharacterBase();

	virtual void Initialize(class ASlotBase* Slot, struct FCharacterAttributes InAttributes);

//DefaultSubObjects
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class USceneComponent* Root;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class USkeletalMeshComponent* Mesh;

	UPROPERTY(VisibleAnywhere)
	class UTextRenderComponent* StatsText;

	UPROPERTY()
	class UAutoBattlerProtoGameInstance* GameInstance;

	UPROPERTY()
	class USoulTrialManager* TrialManager;

	UPROPERTY()
	class UCombatManager* CombatManager;

protected:
	virtual void OnDeath();
	//Called when someone uses skill
	UFUNCTION()
	virtual void SkillUsed(ACharacterBase* InCharacter, const ESkillType InSkillType) {};

public:
	virtual void ActivatePrimarySkill() {};
	virtual void ActivatePassiveSkill() {};
	virtual bool HealthReduce(const int32 Amount) { return false; };
	virtual bool HealthAdd(const int32 Amount) { return false; };
	virtual void Attack() {};

	//temp for stat visualization
	UFUNCTION(BlueprintCallable)
		virtual void UpdateDataText() {};

//BlueprintImplementableEvents
public:
	UFUNCTION(BlueprintImplementableEvent)
	void BP_Attack();

	UFUNCTION(BlueprintImplementableEvent)
	float BP_SkillUsed(const class USkillBase * Skill);

	UFUNCTION(BlueprintImplementableEvent)
	void BP_SetActiveDecal();

	UFUNCTION(BlueprintImplementableEvent)
	void BP_DamageTaken(const int32 Amount);

	UFUNCTION(BlueprintImplementableEvent)
	void BP_OnDeath();

	UFUNCTION(BlueprintImplementableEvent)
	void BP_HealthAdded(const int32 Amount);

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
	void SetCurrentSlot(ASlotBase* NewCurrentSlot) {CurrentSlot = NewCurrentSlot;};

	UFUNCTION(BlueprintPure)
	ASlotBase* GetCurrentSlot() { return CurrentSlot; };

////Character stats
	UFUNCTION(BlueprintCallable, Category = "Character Stats")
	void AdjustHealth(const int32 InHealth, bool bSetToValue = false);

	UFUNCTION(BlueprintCallable, Category = "Character Stats")
	void AdjustSin(const int32 InSin, bool bSetToValue = false);

	UFUNCTION(BlueprintCallable, Category = "Character Stats")
	void AdjustStr(const int32 InStr, bool bSetToValue = false);

	UFUNCTION(BlueprintPure, Category = "Character Stats")
	int32 GetHealth() {return Health;};

	UFUNCTION(Blueprintpure, Category = "Character Stats")
	int32 GetSin() {return Sin;};

	UFUNCTION(BlueprintPure, Category = "Character Stats")
	int32 GetStr() {return Str;};

	UFUNCTION(BlueprintPure, Category = "Character Stats")
	bool IsAlive();
};