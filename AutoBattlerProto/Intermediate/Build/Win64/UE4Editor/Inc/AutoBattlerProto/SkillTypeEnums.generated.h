// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOBATTLERPROTO_SkillTypeEnums_generated_h
#error "SkillTypeEnums.generated.h already included, missing '#pragma once' in SkillTypeEnums.h"
#endif
#define AUTOBATTLERPROTO_SkillTypeEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AutoBattlerProto_Source_Lautturi_SkillTypeEnums_h


#define FOREACH_ENUM_EAFFECTRANGE(op) \
	op(EAffectRange::AR_All) \
	op(EAffectRange::AR_Single) \
	op(EAffectRange::AR_None) 

enum class EAffectRange : uint8;
template<> AUTOBATTLERPROTO_API UEnum* StaticEnum<EAffectRange>();

#define FOREACH_ENUM_ESKILLTYPE(op) \
	op(ESkillType::ST_Heal) \
	op(ESkillType::ST_Sin) \
	op(ESkillType::ST_Buff) \
	op(ESkillType::ST_None) 

enum class ESkillType : uint8;
template<> AUTOBATTLERPROTO_API UEnum* StaticEnum<ESkillType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
