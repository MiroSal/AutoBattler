// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASlotBase;
class ACharacterBase;
enum class ESkillType : uint8;
class USkillBase;
#ifdef AUTOBATTLERPROTO_CharacterBase_generated_h
#error "CharacterBase.generated.h already included, missing '#pragma once' in CharacterBase.h"
#endif
#define AUTOBATTLERPROTO_CharacterBase_generated_h

#define AutoBattlerProto_Source_CharacterBase_h_15_SPARSE_DATA
#define AutoBattlerProto_Source_CharacterBase_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsAlive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAlive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStr) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetStr(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetSin(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStr) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InStr); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStr(Z_Param_InStr); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSin) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InSin); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSin(Z_Param_InSin); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHealth) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InHealth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHealth(Z_Param_InHealth); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentSlot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ASlotBase**)Z_Param__Result=P_THIS->GetCurrentSlot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentSlot) \
	{ \
		P_GET_OBJECT(ASlotBase,Z_Param_NewCurrentSlot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentSlot(Z_Param_NewCurrentSlot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAttackEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AttackEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateDataText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateDataText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSkillUsed) \
	{ \
		P_GET_OBJECT(ACharacterBase,Z_Param_InCharacter); \
		P_GET_ENUM(ESkillType,Z_Param_InSkillType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SkillUsed(Z_Param_InCharacter,ESkillType(Z_Param_InSkillType)); \
		P_NATIVE_END; \
	}


#define AutoBattlerProto_Source_CharacterBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsAlive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAlive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStr) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetStr(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetSin(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStr) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InStr); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStr(Z_Param_InStr); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSin) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InSin); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSin(Z_Param_InSin); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHealth) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InHealth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHealth(Z_Param_InHealth); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentSlot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ASlotBase**)Z_Param__Result=P_THIS->GetCurrentSlot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentSlot) \
	{ \
		P_GET_OBJECT(ASlotBase,Z_Param_NewCurrentSlot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentSlot(Z_Param_NewCurrentSlot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAttackEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AttackEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateDataText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateDataText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSkillUsed) \
	{ \
		P_GET_OBJECT(ACharacterBase,Z_Param_InCharacter); \
		P_GET_ENUM(ESkillType,Z_Param_InSkillType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SkillUsed(Z_Param_InCharacter,ESkillType(Z_Param_InSkillType)); \
		P_NATIVE_END; \
	}


#define AutoBattlerProto_Source_CharacterBase_h_15_EVENT_PARMS \
	struct CharacterBase_eventBP_DamageTaken_Parms \
	{ \
		int32 Amount; \
	}; \
	struct CharacterBase_eventBP_HealthAdded_Parms \
	{ \
		int32 Amount; \
	}; \
	struct CharacterBase_eventBP_SkillUsed_Parms \
	{ \
		USkillBase* Skill; \
	};


#define AutoBattlerProto_Source_CharacterBase_h_15_CALLBACK_WRAPPERS
#define AutoBattlerProto_Source_CharacterBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacterBase(); \
	friend struct Z_Construct_UClass_ACharacterBase_Statics; \
public: \
	DECLARE_CLASS(ACharacterBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoBattlerProto"), NO_API) \
	DECLARE_SERIALIZER(ACharacterBase)


#define AutoBattlerProto_Source_CharacterBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACharacterBase(); \
	friend struct Z_Construct_UClass_ACharacterBase_Statics; \
public: \
	DECLARE_CLASS(ACharacterBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoBattlerProto"), NO_API) \
	DECLARE_SERIALIZER(ACharacterBase)


#define AutoBattlerProto_Source_CharacterBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACharacterBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACharacterBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterBase(ACharacterBase&&); \
	NO_API ACharacterBase(const ACharacterBase&); \
public:


#define AutoBattlerProto_Source_CharacterBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterBase(ACharacterBase&&); \
	NO_API ACharacterBase(const ACharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACharacterBase)


#define AutoBattlerProto_Source_CharacterBase_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(ACharacterBase, Health); } \
	FORCEINLINE static uint32 __PPO__Sin() { return STRUCT_OFFSET(ACharacterBase, Sin); } \
	FORCEINLINE static uint32 __PPO__Str() { return STRUCT_OFFSET(ACharacterBase, Str); } \
	FORCEINLINE static uint32 __PPO__PrimarySkill() { return STRUCT_OFFSET(ACharacterBase, PrimarySkill); } \
	FORCEINLINE static uint32 __PPO__PassiveSkill() { return STRUCT_OFFSET(ACharacterBase, PassiveSkill); } \
	FORCEINLINE static uint32 __PPO__AllPossiblePrimarySkills() { return STRUCT_OFFSET(ACharacterBase, AllPossiblePrimarySkills); } \
	FORCEINLINE static uint32 __PPO__AllPossiblePassiveSkills() { return STRUCT_OFFSET(ACharacterBase, AllPossiblePassiveSkills); } \
	FORCEINLINE static uint32 __PPO__CharacterType() { return STRUCT_OFFSET(ACharacterBase, CharacterType); } \
	FORCEINLINE static uint32 __PPO__CurrentSlot() { return STRUCT_OFFSET(ACharacterBase, CurrentSlot); } \
	FORCEINLINE static uint32 __PPO__Root() { return STRUCT_OFFSET(ACharacterBase, Root); } \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(ACharacterBase, Mesh); } \
	FORCEINLINE static uint32 __PPO__StatsText() { return STRUCT_OFFSET(ACharacterBase, StatsText); }


#define AutoBattlerProto_Source_CharacterBase_h_12_PROLOG \
	AutoBattlerProto_Source_CharacterBase_h_15_EVENT_PARMS


#define AutoBattlerProto_Source_CharacterBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutoBattlerProto_Source_CharacterBase_h_15_PRIVATE_PROPERTY_OFFSET \
	AutoBattlerProto_Source_CharacterBase_h_15_SPARSE_DATA \
	AutoBattlerProto_Source_CharacterBase_h_15_RPC_WRAPPERS \
	AutoBattlerProto_Source_CharacterBase_h_15_CALLBACK_WRAPPERS \
	AutoBattlerProto_Source_CharacterBase_h_15_INCLASS \
	AutoBattlerProto_Source_CharacterBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AutoBattlerProto_Source_CharacterBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutoBattlerProto_Source_CharacterBase_h_15_PRIVATE_PROPERTY_OFFSET \
	AutoBattlerProto_Source_CharacterBase_h_15_SPARSE_DATA \
	AutoBattlerProto_Source_CharacterBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AutoBattlerProto_Source_CharacterBase_h_15_CALLBACK_WRAPPERS \
	AutoBattlerProto_Source_CharacterBase_h_15_INCLASS_NO_PURE_DECLS \
	AutoBattlerProto_Source_CharacterBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOBATTLERPROTO_API UClass* StaticClass<class ACharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AutoBattlerProto_Source_CharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
