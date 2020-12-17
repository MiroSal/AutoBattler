// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCombatManager;
class USoulTrialManager;
#ifdef AUTOBATTLERPROTO_AutoBattlerProtoGameModeBase_generated_h
#error "AutoBattlerProtoGameModeBase.generated.h already included, missing '#pragma once' in AutoBattlerProtoGameModeBase.h"
#endif
#define AUTOBATTLERPROTO_AutoBattlerProtoGameModeBase_generated_h

#define AutoBattlerProto_Source_AutoBattlerProtoGameModeBase_h_14_SPARSE_DATA
#define AutoBattlerProto_Source_AutoBattlerProtoGameModeBase_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCombatManager) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCombatManager**)Z_Param__Result=P_THIS->GetCombatManager(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSoulTrialManager) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USoulTrialManager**)Z_Param__Result=P_THIS->GetSoulTrialManager(); \
		P_NATIVE_END; \
	}


#define AutoBattlerProto_Source_AutoBattlerProtoGameModeBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCombatManager) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCombatManager**)Z_Param__Result=P_THIS->GetCombatManager(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSoulTrialManager) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USoulTrialManager**)Z_Param__Result=P_THIS->GetSoulTrialManager(); \
		P_NATIVE_END; \
	}


#define AutoBattlerProto_Source_AutoBattlerProtoGameModeBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAutoBattlerProtoGameModeBase(); \
	friend struct Z_Construct_UClass_AAutoBattlerProtoGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AAutoBattlerProtoGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoBattlerProto"), NO_API) \
	DECLARE_SERIALIZER(AAutoBattlerProtoGameModeBase)


#define AutoBattlerProto_Source_AutoBattlerProtoGameModeBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAAutoBattlerProtoGameModeBase(); \
	friend struct Z_Construct_UClass_AAutoBattlerProtoGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AAutoBattlerProtoGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoBattlerProto"), NO_API) \
	DECLARE_SERIALIZER(AAutoBattlerProtoGameModeBase)


#define AutoBattlerProto_Source_AutoBattlerProtoGameModeBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAutoBattlerProtoGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAutoBattlerProtoGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAutoBattlerProtoGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAutoBattlerProtoGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAutoBattlerProtoGameModeBase(AAutoBattlerProtoGameModeBase&&); \
	NO_API AAutoBattlerProtoGameModeBase(const AAutoBattlerProtoGameModeBase&); \
public:


#define AutoBattlerProto_Source_AutoBattlerProtoGameModeBase_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAutoBattlerProtoGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAutoBattlerProtoGameModeBase(AAutoBattlerProtoGameModeBase&&); \
	NO_API AAutoBattlerProtoGameModeBase(const AAutoBattlerProtoGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAutoBattlerProtoGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAutoBattlerProtoGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAutoBattlerProtoGameModeBase)


#define AutoBattlerProto_Source_AutoBattlerProtoGameModeBase_h_14_PRIVATE_PROPERTY_OFFSET
#define AutoBattlerProto_Source_AutoBattlerProtoGameModeBase_h_11_PROLOG
#define AutoBattlerProto_Source_AutoBattlerProtoGameModeBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutoBattlerProto_Source_AutoBattlerProtoGameModeBase_h_14_PRIVATE_PROPERTY_OFFSET \
	AutoBattlerProto_Source_AutoBattlerProtoGameModeBase_h_14_SPARSE_DATA \
	AutoBattlerProto_Source_AutoBattlerProtoGameModeBase_h_14_RPC_WRAPPERS \
	AutoBattlerProto_Source_AutoBattlerProtoGameModeBase_h_14_INCLASS \
	AutoBattlerProto_Source_AutoBattlerProtoGameModeBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AutoBattlerProto_Source_AutoBattlerProtoGameModeBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutoBattlerProto_Source_AutoBattlerProtoGameModeBase_h_14_PRIVATE_PROPERTY_OFFSET \
	AutoBattlerProto_Source_AutoBattlerProtoGameModeBase_h_14_SPARSE_DATA \
	AutoBattlerProto_Source_AutoBattlerProtoGameModeBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	AutoBattlerProto_Source_AutoBattlerProtoGameModeBase_h_14_INCLASS_NO_PURE_DECLS \
	AutoBattlerProto_Source_AutoBattlerProtoGameModeBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOBATTLERPROTO_API UClass* StaticClass<class AAutoBattlerProtoGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AutoBattlerProto_Source_AutoBattlerProtoGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
