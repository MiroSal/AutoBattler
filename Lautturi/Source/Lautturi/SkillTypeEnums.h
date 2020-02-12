#pragma once
#include "CoreMinimal.h"

UENUM()
enum class ESkillType :uint8
{
	HealAll,
	HealSingle,
	SinAll,
	SinSingle,
	buffAll,
	buffSingle,
	None
	
};
