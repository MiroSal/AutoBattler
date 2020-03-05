#pragma once
#include "CoreMinimal.h"
#include "SkillTypeEnums.h"
#include "SoulDataStruct.generated.h"

class ACharacterBase;

USTRUCT()
struct FSoulData
{
	GENERATED_BODY()

public:

	FSoulData() 
	{
		CharacterBase = nullptr;
		SkillType = ESkillType::None;
	}

	FSoulData(ACharacterBase* Character, ESkillType Type)
	{
		CharacterBase = Character;
		SkillType = Type;
	}

	ACharacterBase* CharacterBase;
	ESkillType SkillType;
};
