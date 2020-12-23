// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacterBase;
enum class EAffectRange : uint8;
#ifdef AUTOBATTLERPROTO_SkillBase_generated_h
#error "SkillBase.generated.h already included, missing '#pragma once' in SkillBase.h"
#endif
#define AUTOBATTLERPROTO_SkillBase_generated_h

#define AutoBattlerProto_Source_SkillBase_h_11_SPARSE_DATA
#define AutoBattlerProto_Source_SkillBase_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCombatEnemyListeners) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<ACharacterBase*>*)Z_Param__Result=P_THIS->GetCombatEnemyListeners(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCombatPlayerListeners) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<ACharacterBase*>*)Z_Param__Result=P_THIS->GetCombatPlayerListeners(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwningCharacter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ACharacterBase**)Z_Param__Result=P_THIS->GetOwningCharacter(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAffectRange) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EAffectRange*)Z_Param__Result=P_THIS->GetAffectRange(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeactivateSkill) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeactivateSkill(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Activate(); \
		P_NATIVE_END; \
	}


#define AutoBattlerProto_Source_SkillBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCombatEnemyListeners) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<ACharacterBase*>*)Z_Param__Result=P_THIS->GetCombatEnemyListeners(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCombatPlayerListeners) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<ACharacterBase*>*)Z_Param__Result=P_THIS->GetCombatPlayerListeners(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwningCharacter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ACharacterBase**)Z_Param__Result=P_THIS->GetOwningCharacter(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAffectRange) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EAffectRange*)Z_Param__Result=P_THIS->GetAffectRange(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeactivateSkill) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeactivateSkill(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Activate(); \
		P_NATIVE_END; \
	}


#define AutoBattlerProto_Source_SkillBase_h_11_EVENT_PARMS
#define AutoBattlerProto_Source_SkillBase_h_11_CALLBACK_WRAPPERS
#define AutoBattlerProto_Source_SkillBase_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkillBase(); \
	friend struct Z_Construct_UClass_USkillBase_Statics; \
public: \
	DECLARE_CLASS(USkillBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutoBattlerProto"), NO_API) \
	DECLARE_SERIALIZER(USkillBase)


#define AutoBattlerProto_Source_SkillBase_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSkillBase(); \
	friend struct Z_Construct_UClass_USkillBase_Statics; \
public: \
	DECLARE_CLASS(USkillBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutoBattlerProto"), NO_API) \
	DECLARE_SERIALIZER(USkillBase)


#define AutoBattlerProto_Source_SkillBase_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkillBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkillBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkillBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkillBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkillBase(USkillBase&&); \
	NO_API USkillBase(const USkillBase&); \
public:


#define AutoBattlerProto_Source_SkillBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkillBase(USkillBase&&); \
	NO_API USkillBase(const USkillBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkillBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkillBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USkillBase)


#define AutoBattlerProto_Source_SkillBase_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AffectRange() { return STRUCT_OFFSET(USkillBase, AffectRange); } \
	FORCEINLINE static uint32 __PPO__SkillType() { return STRUCT_OFFSET(USkillBase, SkillType); } \
	FORCEINLINE static uint32 __PPO__SkillTypeToActivate() { return STRUCT_OFFSET(USkillBase, SkillTypeToActivate); } \
	FORCEINLINE static uint32 __PPO__SkillInfo() { return STRUCT_OFFSET(USkillBase, SkillInfo); } \
	FORCEINLINE static uint32 __PPO__OwningCharacter() { return STRUCT_OFFSET(USkillBase, OwningCharacter); }


#define AutoBattlerProto_Source_SkillBase_h_8_PROLOG \
	AutoBattlerProto_Source_SkillBase_h_11_EVENT_PARMS


#define AutoBattlerProto_Source_SkillBase_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutoBattlerProto_Source_SkillBase_h_11_PRIVATE_PROPERTY_OFFSET \
	AutoBattlerProto_Source_SkillBase_h_11_SPARSE_DATA \
	AutoBattlerProto_Source_SkillBase_h_11_RPC_WRAPPERS \
	AutoBattlerProto_Source_SkillBase_h_11_CALLBACK_WRAPPERS \
	AutoBattlerProto_Source_SkillBase_h_11_INCLASS \
	AutoBattlerProto_Source_SkillBase_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AutoBattlerProto_Source_SkillBase_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutoBattlerProto_Source_SkillBase_h_11_PRIVATE_PROPERTY_OFFSET \
	AutoBattlerProto_Source_SkillBase_h_11_SPARSE_DATA \
	AutoBattlerProto_Source_SkillBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	AutoBattlerProto_Source_SkillBase_h_11_CALLBACK_WRAPPERS \
	AutoBattlerProto_Source_SkillBase_h_11_INCLASS_NO_PURE_DECLS \
	AutoBattlerProto_Source_SkillBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOBATTLERPROTO_API UClass* StaticClass<class USkillBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AutoBattlerProto_Source_SkillBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
