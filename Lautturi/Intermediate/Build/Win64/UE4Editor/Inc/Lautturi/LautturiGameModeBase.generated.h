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
#ifdef LAUTTURI_LautturiGameModeBase_generated_h
#error "LautturiGameModeBase.generated.h already included, missing '#pragma once' in LautturiGameModeBase.h"
#endif
#define LAUTTURI_LautturiGameModeBase_generated_h

#define Lautturi_Source_Lautturi_LautturiGameModeBase_h_16_SPARSE_DATA
#define Lautturi_Source_Lautturi_LautturiGameModeBase_h_16_RPC_WRAPPERS \
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


#define Lautturi_Source_Lautturi_LautturiGameModeBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define Lautturi_Source_Lautturi_LautturiGameModeBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALautturiGameModeBase(); \
	friend struct Z_Construct_UClass_ALautturiGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ALautturiGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Lautturi"), NO_API) \
	DECLARE_SERIALIZER(ALautturiGameModeBase)


#define Lautturi_Source_Lautturi_LautturiGameModeBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesALautturiGameModeBase(); \
	friend struct Z_Construct_UClass_ALautturiGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ALautturiGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Lautturi"), NO_API) \
	DECLARE_SERIALIZER(ALautturiGameModeBase)


#define Lautturi_Source_Lautturi_LautturiGameModeBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALautturiGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALautturiGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALautturiGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALautturiGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALautturiGameModeBase(ALautturiGameModeBase&&); \
	NO_API ALautturiGameModeBase(const ALautturiGameModeBase&); \
public:


#define Lautturi_Source_Lautturi_LautturiGameModeBase_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALautturiGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALautturiGameModeBase(ALautturiGameModeBase&&); \
	NO_API ALautturiGameModeBase(const ALautturiGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALautturiGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALautturiGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALautturiGameModeBase)


#define Lautturi_Source_Lautturi_LautturiGameModeBase_h_16_PRIVATE_PROPERTY_OFFSET
#define Lautturi_Source_Lautturi_LautturiGameModeBase_h_13_PROLOG
#define Lautturi_Source_Lautturi_LautturiGameModeBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Lautturi_Source_Lautturi_LautturiGameModeBase_h_16_PRIVATE_PROPERTY_OFFSET \
	Lautturi_Source_Lautturi_LautturiGameModeBase_h_16_SPARSE_DATA \
	Lautturi_Source_Lautturi_LautturiGameModeBase_h_16_RPC_WRAPPERS \
	Lautturi_Source_Lautturi_LautturiGameModeBase_h_16_INCLASS \
	Lautturi_Source_Lautturi_LautturiGameModeBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Lautturi_Source_Lautturi_LautturiGameModeBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Lautturi_Source_Lautturi_LautturiGameModeBase_h_16_PRIVATE_PROPERTY_OFFSET \
	Lautturi_Source_Lautturi_LautturiGameModeBase_h_16_SPARSE_DATA \
	Lautturi_Source_Lautturi_LautturiGameModeBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Lautturi_Source_Lautturi_LautturiGameModeBase_h_16_INCLASS_NO_PURE_DECLS \
	Lautturi_Source_Lautturi_LautturiGameModeBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LAUTTURI_API UClass* StaticClass<class ALautturiGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Lautturi_Source_Lautturi_LautturiGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
