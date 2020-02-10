// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SoulDataStruct.h"
#include "CombatManager.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSkillUsedDelegate, FSoulData, SoulData);

/**
 * 
 */
UCLASS()
class LAUTTURI_API UCombatManager : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY()
	TArray<FSoulData> CombatSoulListeners;
	UPROPERTY()
	TArray<FSoulData> ActionQueue;
	FSoulData* CurrentSoulInAction;
	UPROPERTY()
	int32 CurrentSoulIndexInAction;

	//TODO temp remove
	bool testrun = true;

public:

	void Initialize();

	void RegisterToListener(FSoulData Data);

	UFUNCTION()
	void AddSkillActionToQueue(FSoulData ActionData);

	UFUNCTION()
	void PopNextSkillActionFromQueue();

	UPROPERTY()
	FSkillUsedDelegate SkillUsedDelegate;
	
};
