// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SkillTypeEnums.h"
#include "CombatManager.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSkillUsedDelegate, ACharacterBase*, Character, ESkillType , SkillType);

UENUM()
enum class ETurnEnum :uint8
{
	TE_Player UMETA(DisplayName = "Player"),
	TE_Enemy UMETA(DisplayName = "Enemy"),
	TE_None UMETA(DisplayName = "None")
};

UCLASS()
class AUTOBATTLERPROTO_API UCombatManager : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY()
	TArray<ACharacterBase*> CombatPlayerListeners;

	UPROPERTY()
	TArray<ACharacterBase*> CombatEnemyListeners;

	UPROPERTY()
	TArray<ACharacterBase*> ActionQueue;

	UPROPERTY()
	int32 CharacterIndex;

	UPROPERTY()
	int32 EnemyIndex;

	UPROPERTY()
	class ACharacterBase* ActiveCharacter;

	UPROPERTY(VisibleAnywhere)
	ETurnEnum CurrentCombatTurn;

	UPROPERTY()
	bool bIsFirstTurn = true;

	UPROPERTY()
	int32 TotalEnemyCount;

	UPROPERTY()
	int32 CurrentEnemyCount;

private:
	void HandleFirstTurn();

	void ChangeActiveCharacter();


public:
	UCombatManager();

	void Initialize();

	void ChangeTurn();

	void PopNextSkillFromQueue();

	UFUNCTION(BlueprintCallable)
		void StartCombat();

	UPROPERTY()
	FSkillUsedDelegate SkillUsedDelegate;

	//Getter&&Setters
public:

	FORCEINLINE TArray<ACharacterBase*> GetCombatEnemyListeners() { return CombatEnemyListeners; };
	FORCEINLINE TArray<ACharacterBase*> GetCombatPlayerListeners() { return CombatPlayerListeners; };
	FORCEINLINE void RegisterCombatListener(ACharacterBase* Character);
	FORCEINLINE void UnRegisterCombatListener(ACharacterBase* Character);
	FORCEINLINE void AddSkillActionToQueue(ACharacterBase* Character);
	FORCEINLINE int32 GetCurrentEnemyCount() { return CurrentEnemyCount; };
	FORCEINLINE int32 GetTotalEnemyCount() { return TotalEnemyCount; };
};