// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOBATTLERPROTO_DropZone_generated_h
#error "DropZone.generated.h already included, missing '#pragma once' in DropZone.h"
#endif
#define AUTOBATTLERPROTO_DropZone_generated_h

#define AutoBattlerProto_Source_Lautturi_DropZone_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFerrySoulSpot_Statics; \
	AUTOBATTLERPROTO_API static class UScriptStruct* StaticStruct();


template<> AUTOBATTLERPROTO_API UScriptStruct* StaticStruct<struct FFerrySoulSpot>();

#define AutoBattlerProto_Source_Lautturi_DropZone_h_28_SPARSE_DATA
#define AutoBattlerProto_Source_Lautturi_DropZone_h_28_RPC_WRAPPERS
#define AutoBattlerProto_Source_Lautturi_DropZone_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define AutoBattlerProto_Source_Lautturi_DropZone_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADropZone(); \
	friend struct Z_Construct_UClass_ADropZone_Statics; \
public: \
	DECLARE_CLASS(ADropZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoBattlerProto"), NO_API) \
	DECLARE_SERIALIZER(ADropZone) \
	virtual UObject* _getUObject() const override { return const_cast<ADropZone*>(this); }


#define AutoBattlerProto_Source_Lautturi_DropZone_h_28_INCLASS \
private: \
	static void StaticRegisterNativesADropZone(); \
	friend struct Z_Construct_UClass_ADropZone_Statics; \
public: \
	DECLARE_CLASS(ADropZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoBattlerProto"), NO_API) \
	DECLARE_SERIALIZER(ADropZone) \
	virtual UObject* _getUObject() const override { return const_cast<ADropZone*>(this); }


#define AutoBattlerProto_Source_Lautturi_DropZone_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADropZone(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADropZone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADropZone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADropZone); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADropZone(ADropZone&&); \
	NO_API ADropZone(const ADropZone&); \
public:


#define AutoBattlerProto_Source_Lautturi_DropZone_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADropZone(ADropZone&&); \
	NO_API ADropZone(const ADropZone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADropZone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADropZone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADropZone)


#define AutoBattlerProto_Source_Lautturi_DropZone_h_28_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Root() { return STRUCT_OFFSET(ADropZone, Root); } \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(ADropZone, Mesh); } \
	FORCEINLINE static uint32 __PPO__CharacterSpot1() { return STRUCT_OFFSET(ADropZone, CharacterSpot1); } \
	FORCEINLINE static uint32 __PPO__CharacterSpot2() { return STRUCT_OFFSET(ADropZone, CharacterSpot2); } \
	FORCEINLINE static uint32 __PPO__CharacterSpot3() { return STRUCT_OFFSET(ADropZone, CharacterSpot3); } \
	FORCEINLINE static uint32 __PPO__CharacterSpot4() { return STRUCT_OFFSET(ADropZone, CharacterSpot4); } \
	FORCEINLINE static uint32 __PPO__CharacterSpot5() { return STRUCT_OFFSET(ADropZone, CharacterSpot5); } \
	FORCEINLINE static uint32 __PPO__CharacterSpots() { return STRUCT_OFFSET(ADropZone, CharacterSpots); }


#define AutoBattlerProto_Source_Lautturi_DropZone_h_25_PROLOG
#define AutoBattlerProto_Source_Lautturi_DropZone_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutoBattlerProto_Source_Lautturi_DropZone_h_28_PRIVATE_PROPERTY_OFFSET \
	AutoBattlerProto_Source_Lautturi_DropZone_h_28_SPARSE_DATA \
	AutoBattlerProto_Source_Lautturi_DropZone_h_28_RPC_WRAPPERS \
	AutoBattlerProto_Source_Lautturi_DropZone_h_28_INCLASS \
	AutoBattlerProto_Source_Lautturi_DropZone_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AutoBattlerProto_Source_Lautturi_DropZone_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutoBattlerProto_Source_Lautturi_DropZone_h_28_PRIVATE_PROPERTY_OFFSET \
	AutoBattlerProto_Source_Lautturi_DropZone_h_28_SPARSE_DATA \
	AutoBattlerProto_Source_Lautturi_DropZone_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	AutoBattlerProto_Source_Lautturi_DropZone_h_28_INCLASS_NO_PURE_DECLS \
	AutoBattlerProto_Source_Lautturi_DropZone_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOBATTLERPROTO_API UClass* StaticClass<class ADropZone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AutoBattlerProto_Source_Lautturi_DropZone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
