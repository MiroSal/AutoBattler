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
	TArray<FSoulData> CombatSoulListeners;
	TArray<FSoulData*> ActionQueue;
	FSoulData* CurrentSoulInAction;
	int32 CurrentSoulIndexInAction;

public:

	void Initialize();

	void RegisterToListener(FSoulData Data);

	void AddSkillActionToQueue(FSoulData ActionData);

	void PopNextSkillActionFromQueue();

	FSkillUsedDelegate SkillUsedDelegate;
	
};
