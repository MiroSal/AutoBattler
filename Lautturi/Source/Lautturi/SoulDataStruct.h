#pragma once
#include "CoreMinimal.h"
#include "SkillTypeEnums.h"
#include "SoulDataStruct.generated.h"

class ASoulCard;

USTRUCT()
struct FSoulData
{
	GENERATED_BODY()

public:

	FSoulData() {}

	FSoulData(ASoulCard* Soul, ESkillType Type)
	{
		SoulCard = Soul;
		SkillType = Type;
	}

	ASoulCard* SoulCard;
	ESkillType SkillType;
};
