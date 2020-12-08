#pragma once
#include "CoreMinimal.h"
#include "SkillTypeEnums.h"
#include "SoulDataStruct.generated.h"


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

	FSoulData(class ACharacterBase* Character, ESkillType Type)
	{
		CharacterBase = Character;
		SkillType = Type;
	}

	class ACharacterBase* CharacterBase;
	ESkillType SkillType;
};
