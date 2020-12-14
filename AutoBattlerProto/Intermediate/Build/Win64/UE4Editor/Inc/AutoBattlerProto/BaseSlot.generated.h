// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacterBase;
#ifdef AUTOBATTLERPROTO_BaseSlot_generated_h
#error "BaseSlot.generated.h already included, missing '#pragma once' in BaseSlot.h"
#endif
#define AUTOBATTLERPROTO_BaseSlot_generated_h

#define AutoBattlerProto_Source_Lautturi_BaseSlot_h_12_SPARSE_DATA
#define AutoBattlerProto_Source_Lautturi_BaseSlot_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveCharacterFromSlot) \
	{ \
		P_GET_UBOOL(Z_Param_bDestroyCharacter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveCharacterFromSlot(Z_Param_bDestroyCharacter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddExistingCharacterToSlot) \
	{ \
		P_GET_OBJECT(ACharacterBase,Z_Param_CharacterToCreate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddExistingCharacterToSlot(Z_Param_CharacterToCreate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnNewCharacterToSlot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnNewCharacterToSlot(); \
		P_NATIVE_END; \
	}


#define AutoBattlerProto_Source_Lautturi_BaseSlot_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveCharacterFromSlot) \
	{ \
		P_GET_UBOOL(Z_Param_bDestroyCharacter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveCharacterFromSlot(Z_Param_bDestroyCharacter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddExistingCharacterToSlot) \
	{ \
		P_GET_OBJECT(ACharacterBase,Z_Param_CharacterToCreate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddExistingCharacterToSlot(Z_Param_CharacterToCreate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnNewCharacterToSlot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnNewCharacterToSlot(); \
		P_NATIVE_END; \
	}


#define AutoBattlerProto_Source_Lautturi_BaseSlot_h_12_EVENT_PARMS
#define AutoBattlerProto_Source_Lautturi_BaseSlot_h_12_CALLBACK_WRAPPERS
#define AutoBattlerProto_Source_Lautturi_BaseSlot_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseSlot(); \
	friend struct Z_Construct_UClass_ABaseSlot_Statics; \
public: \
	DECLARE_CLASS(ABaseSlot, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoBattlerProto"), NO_API) \
	DECLARE_SERIALIZER(ABaseSlot)


#define AutoBattlerProto_Source_Lautturi_BaseSlot_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABaseSlot(); \
	friend struct Z_Construct_UClass_ABaseSlot_Statics; \
public: \
	DECLARE_CLASS(ABaseSlot, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoBattlerProto"), NO_API) \
	DECLARE_SERIALIZER(ABaseSlot)


#define AutoBattlerProto_Source_Lautturi_BaseSlot_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseSlot(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseSlot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseSlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseSlot(ABaseSlot&&); \
	NO_API ABaseSlot(const ABaseSlot&); \
public:


#define AutoBattlerProto_Source_Lautturi_BaseSlot_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseSlot(ABaseSlot&&); \
	NO_API ABaseSlot(const ABaseSlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseSlot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseSlot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseSlot)


#define AutoBattlerProto_Source_Lautturi_BaseSlot_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bCreatedSoulCanBeClicked() { return STRUCT_OFFSET(ABaseSlot, bCreatedSoulCanBeClicked); } \
	FORCEINLINE static uint32 __PPO__Root() { return STRUCT_OFFSET(ABaseSlot, Root); } \
	FORCEINLINE static uint32 __PPO__ArrowComponent() { return STRUCT_OFFSET(ABaseSlot, ArrowComponent); } \
	FORCEINLINE static uint32 __PPO__SoulCardToSpawn() { return STRUCT_OFFSET(ABaseSlot, SoulCardToSpawn); } \
	FORCEINLINE static uint32 __PPO__CharacterInSlot() { return STRUCT_OFFSET(ABaseSlot, CharacterInSlot); }


#define AutoBattlerProto_Source_Lautturi_BaseSlot_h_9_PROLOG \
	AutoBattlerProto_Source_Lautturi_BaseSlot_h_12_EVENT_PARMS


#define AutoBattlerProto_Source_Lautturi_BaseSlot_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutoBattlerProto_Source_Lautturi_BaseSlot_h_12_PRIVATE_PROPERTY_OFFSET \
	AutoBattlerProto_Source_Lautturi_BaseSlot_h_12_SPARSE_DATA \
	AutoBattlerProto_Source_Lautturi_BaseSlot_h_12_RPC_WRAPPERS \
	AutoBattlerProto_Source_Lautturi_BaseSlot_h_12_CALLBACK_WRAPPERS \
	AutoBattlerProto_Source_Lautturi_BaseSlot_h_12_INCLASS \
	AutoBattlerProto_Source_Lautturi_BaseSlot_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AutoBattlerProto_Source_Lautturi_BaseSlot_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutoBattlerProto_Source_Lautturi_BaseSlot_h_12_PRIVATE_PROPERTY_OFFSET \
	AutoBattlerProto_Source_Lautturi_BaseSlot_h_12_SPARSE_DATA \
	AutoBattlerProto_Source_Lautturi_BaseSlot_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AutoBattlerProto_Source_Lautturi_BaseSlot_h_12_CALLBACK_WRAPPERS \
	AutoBattlerProto_Source_Lautturi_BaseSlot_h_12_INCLASS_NO_PURE_DECLS \
	AutoBattlerProto_Source_Lautturi_BaseSlot_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOBATTLERPROTO_API UClass* StaticClass<class ABaseSlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AutoBattlerProto_Source_Lautturi_BaseSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
