#pragma once
#include "CoreMinimal.h"
#include "SkillTypeEnums.h"
#include "SoulDataStruct.generated.h"

USTRUCT()
struct FCharacterData
{
	GENERATED_BODY()

public:

	FCharacterData()
	{
		CharacterBase = nullptr;
		SkillType = ESkillType::ST_None;
	}

	FCharacterData(class ACharacterBase* Character, ESkillType Type)
	{
		CharacterBase = Character;
		SkillType = Type;
	}

	class ACharacterBase* CharacterBase;
	ESkillType SkillType;
};
