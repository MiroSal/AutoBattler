// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SoulCard.h"
#include "CombatManager.generated.h"

USTRUCT(BlueprintType)
struct FSoulData
{
	GENERATED_BODY()

public:

	FSoulData(){}

	FSoulData(ASoulCard* Soul, ESkillType Type)
	{
		SoulCard = Soul;
		SkillType = Type;
	}

	ASoulCard* SoulCard;
	ESkillType SkillType;
};


/**
 * 
 */
UCLASS()
class LAUTTURI_API UCombatManager : public UObject
{
	GENERATED_BODY()

private:
	TArray<FSoulData> CombatSoulDatas;

public:

	void RegisterToListener(FSoulData Data);

	void Initialize();
	
};
