// Copyright © 2020 by Miro Salminen
#pragma once
#include "CoreMinimal.h"

UENUM()
enum class ETurnEnum :uint8
{
	TE_Player UMETA(DisplayName = "Player"),
	TE_Enemy UMETA(DisplayName = "Enemy"),
	TE_None UMETA(DisplayName = "None")
};

UENUM()
enum class ETrialStatus :uint8
{
	TS_HasCoin UMETA(DisplayName = "Coin"),
	TS_NoCoin UMETA(DisplayName = "No Coin"),
	TS_Alive UMETA(DisplayName = "Alive"),
	TS_None UMETA(DisplayName = "None")
};

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