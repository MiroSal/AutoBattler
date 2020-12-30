// Copyright © 2020 by Miro Salminen
#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SkillTypeEnums.h"
#include "CombatManager.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSkillUsedDelegate, ACharacterBase*, Character, ESkillType , SkillType);

UCLASS()
class AUTOBATTLERPROTO_API UCombatManager : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY()
	TArray<ACharacterBase*> CombatPlayerListeners;

	UPROPERTY()
	TArray<ACharacterBase*> CombatEnemyListeners;

	//Skill in queue
	UPROPERTY()
	TArray<ACharacterBase*> ActionQueue;

	//Keeps track whose player's turn
	UPROPERTY()
	int32 PlayerIndex;

	//Keeps track whose enemy's turn
	UPROPERTY()
	int32 EnemyIndex;

	//Active at current turn
	UPROPERTY()
	class ACharacterBase* ActiveCharacter;

	//is it player or enemy turn
	UPROPERTY(VisibleAnywhere)
	ETurnEnum CurrentCombatTurn;

	UPROPERTY()
	bool bIsFirstTurn;

	//Temp for stat visualization
	UPROPERTY()
	int32 TotalEnemyCount;

	//Temp for stat visualization
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

	//adds or remove player to listen combatManagers orders
	void RegisterToCombatListener(ACharacterBase* Character);
	void UnRegisterCombatListener(ACharacterBase* Character);
	void AddSkillActionToQueue(ACharacterBase* Character);

	FORCEINLINE int32 GetCurrentEnemyCount() { return CurrentEnemyCount; };
	FORCEINLINE int32 GetTotalEnemyCount() { return TotalEnemyCount; };
};