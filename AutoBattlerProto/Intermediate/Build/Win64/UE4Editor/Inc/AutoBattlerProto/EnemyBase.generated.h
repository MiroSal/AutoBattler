// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABaseSlot;
enum class ESkillType : uint8;
struct FSoulData;
#ifdef AUTOBATTLERPROTO_EnemyBase_generated_h
#error "EnemyBase.generated.h already included, missing '#pragma once' in EnemyBase.h"
#endif
#define AUTOBATTLERPROTO_EnemyBase_generated_h

#define AutoBattlerProto_Source_Lautturi_EnemyBase_h_13_SPARSE_DATA
#define AutoBattlerProto_Source_Lautturi_EnemyBase_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSlot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ABaseSlot**)Z_Param__Result=P_THIS->GetSlot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPassiveSkillType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ESkillType*)Z_Param__Result=P_THIS->GetPassiveSkillType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPrimarySkillType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ESkillType*)Z_Param__Result=P_THIS->GetPrimarySkillType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAttack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Attack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHealthAdd) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HealthAdd(Z_Param_Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHealthReduce) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HealthReduce(Z_Param_Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActionSkillUsed) \
	{ \
		P_GET_STRUCT(FSoulData,Z_Param_ActionInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActionSkillUsed(Z_Param_ActionInfo); \
		P_NATIVE_END; \
	}


#define AutoBattlerProto_Source_Lautturi_EnemyBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSlot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ABaseSlot**)Z_Param__Result=P_THIS->GetSlot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPassiveSkillType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ESkillType*)Z_Param__Result=P_THIS->GetPassiveSkillType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPrimarySkillType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ESkillType*)Z_Param__Result=P_THIS->GetPrimarySkillType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAttack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Attack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHealthAdd) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HealthAdd(Z_Param_Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHealthReduce) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HealthReduce(Z_Param_Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActionSkillUsed) \
	{ \
		P_GET_STRUCT(FSoulData,Z_Param_ActionInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActionSkillUsed(Z_Param_ActionInfo); \
		P_NATIVE_END; \
	}


#define AutoBattlerProto_Source_Lautturi_EnemyBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyBase(); \
	friend struct Z_Construct_UClass_AEnemyBase_Statics; \
public: \
	DECLARE_CLASS(AEnemyBase, ACharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoBattlerProto"), NO_API) \
	DECLARE_SERIALIZER(AEnemyBase)


#define AutoBattlerProto_Source_Lautturi_EnemyBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyBase(); \
	friend struct Z_Construct_UClass_AEnemyBase_Statics; \
public: \
	DECLARE_CLASS(AEnemyBase, ACharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoBattlerProto"), NO_API) \
	DECLARE_SERIALIZER(AEnemyBase)


#define AutoBattlerProto_Source_Lautturi_EnemyBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyBase(AEnemyBase&&); \
	NO_API AEnemyBase(const AEnemyBase&); \
public:


#define AutoBattlerProto_Source_Lautturi_EnemyBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyBase(AEnemyBase&&); \
	NO_API AEnemyBase(const AEnemyBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyBase)


#define AutoBattlerProto_Source_Lautturi_EnemyBase_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EnemyCountText() { return STRUCT_OFFSET(AEnemyBase, EnemyCountText); } \
	FORCEINLINE static uint32 __PPO__PrimarySkill() { return STRUCT_OFFSET(AEnemyBase, PrimarySkill); } \
	FORCEINLINE static uint32 __PPO__PassiveSkill() { return STRUCT_OFFSET(AEnemyBase, PassiveSkill); } \
	FORCEINLINE static uint32 __PPO__Primary() { return STRUCT_OFFSET(AEnemyBase, Primary); } \
	FORCEINLINE static uint32 __PPO__Passive() { return STRUCT_OFFSET(AEnemyBase, Passive); }


#define AutoBattlerProto_Source_Lautturi_EnemyBase_h_10_PROLOG
#define AutoBattlerProto_Source_Lautturi_EnemyBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutoBattlerProto_Source_Lautturi_EnemyBase_h_13_PRIVATE_PROPERTY_OFFSET \
	AutoBattlerProto_Source_Lautturi_EnemyBase_h_13_SPARSE_DATA \
	AutoBattlerProto_Source_Lautturi_EnemyBase_h_13_RPC_WRAPPERS \
	AutoBattlerProto_Source_Lautturi_EnemyBase_h_13_INCLASS \
	AutoBattlerProto_Source_Lautturi_EnemyBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AutoBattlerProto_Source_Lautturi_EnemyBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutoBattlerProto_Source_Lautturi_EnemyBase_h_13_PRIVATE_PROPERTY_OFFSET \
	AutoBattlerProto_Source_Lautturi_EnemyBase_h_13_SPARSE_DATA \
	AutoBattlerProto_Source_Lautturi_EnemyBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AutoBattlerProto_Source_Lautturi_EnemyBase_h_13_INCLASS_NO_PURE_DECLS \
	AutoBattlerProto_Source_Lautturi_EnemyBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOBATTLERPROTO_API UClass* StaticClass<class AEnemyBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AutoBattlerProto_Source_Lautturi_EnemyBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
