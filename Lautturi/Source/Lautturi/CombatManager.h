// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SoulDataStruct.h"
#include "CombatManager.generated.h"

class ACharacterBase;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSkillUsedDelegate, FSoulData, SoulData);

UENUM()
enum class ETurnEnum :uint8
{
	Player,
	Enemy,
	None
};

/**
 *
 */
UCLASS()
class LAUTTURI_API UCombatManager : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY()
		TArray<ACharacterBase*> CombatCharacterListeners;

	UPROPERTY()
		TArray<ACharacterBase*> CombatEnemyListeners;

	UPROPERTY()
		int32 CurrentSoulIndexInAction = 0;

	UPROPERTY()
		int32 CurrentEnemyIndexInAction = 0;

	UPROPERTY()
		TArray<ACharacterBase*> CurrentListenerList;

	UPROPERTY()
		TArray<FSoulData> ActionQueue;

	FSoulData* CurrentSoulInAction;

	UPROPERTY()
		ETurnEnum CurrentTurn;

	//TODO temp remove
	bool testrun = true;

public:

	void Initialize();

	void RegisterSoulListener(ACharacterBase* Character);

	void RegisterEnemyListener(ACharacterBase* Character);

	void UnRegisterFromListener(ACharacterBase* Character);

	UFUNCTION()
		void AddSkillActionToQueue(FSoulData ActionData);
	
	UFUNCTION()
	void ChangeTurn();

	UFUNCTION()
		void PopNextSkillActionFromQueue();

	UPROPERTY()
		FSkillUsedDelegate SkillUsedDelegate;

	TArray<ACharacterBase*> GetAllEnemies();

	TArray<ACharacterBase*> GetAllSouls();

};