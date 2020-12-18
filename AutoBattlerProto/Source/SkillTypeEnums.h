#pragma once
#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class ESkillType :uint8
{
	ST_Heal UMETA(DisplayName = "Heal"),
	ST_Sin UMETA(DisplayName = "Sin"),
	ST_Buff UMETA(DisplayName = "Buff"),
	ST_None UMETA(DisplayName = "None")	
};

UENUM(BlueprintType)
enum class EAffectRange : uint8
{
	AR_All UMETA(DisplayName = "All"),
	AR_Single UMETA(DisplayName = "Single"),
	AR_None UMETA(DisplayName = "None")
};