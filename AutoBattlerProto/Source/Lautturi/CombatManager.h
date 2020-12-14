// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SoulDataStruct.h"
#include "CombatManager.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSkillUsedDelegate, FSoulData, SoulData);

UENUM()
enum class ETurnEnum :uint8
{
	Player,
	Enemy,
	None
};

UCLASS()
class AUTOBATTLERPROTO_API UCombatManager : public UObject
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

	UPROPERTY()
		class ACharacterBase* CurrentSoulInAction;

	UPROPERTY(VisibleAnywhere)
		ETurnEnum CurrentTurn;

public:

	bool FirstTurn = true;

	void Initialize();

	void RegisterSoulListener(ACharacterBase* Character);

	void RegisterEnemyListener(ACharacterBase* Character);

	void UnRegisterFromListener(ACharacterBase* Character);

	UFUNCTION()
		void AddSkillActionToQueue(FSoulData ActionData);

	UFUNCTION(BlueprintCallable)
		void ChangeTurn();

	UFUNCTION(BlueprintCallable)
		void PopNextSkillActionFromQueue();

	UPROPERTY()
		FSkillUsedDelegate SkillUsedDelegate;

	//TODO remove and make properly, this is hack for enemy count that is shown from enemy_BP
	UPROPERTY()
		int32 TotalEnemyCount = 5;

	//TODO remove and make properly, this is hack for enemy count that is shown from enemy_BP
	UPROPERTY()
		int32 CurrentEnemyCount = 1;

//Getter&&Setters
public:

	TArray<ACharacterBase*> GetAllEnemies();

	TArray<ACharacterBase*> GetAllSouls();

};