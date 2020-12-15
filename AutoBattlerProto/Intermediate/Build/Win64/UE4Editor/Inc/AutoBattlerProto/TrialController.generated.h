// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOBATTLERPROTO_TrialController_generated_h
#error "TrialController.generated.h already included, missing '#pragma once' in TrialController.h"
#endif
#define AUTOBATTLERPROTO_TrialController_generated_h

#define AutoBattlerProto_Source_Lautturi_TrialController_h_14_SPARSE_DATA
#define AutoBattlerProto_Source_Lautturi_TrialController_h_14_RPC_WRAPPERS
#define AutoBattlerProto_Source_Lautturi_TrialController_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define AutoBattlerProto_Source_Lautturi_TrialController_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATrialController(); \
	friend struct Z_Construct_UClass_ATrialController_Statics; \
public: \
	DECLARE_CLASS(ATrialController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoBattlerProto"), NO_API) \
	DECLARE_SERIALIZER(ATrialController)


#define AutoBattlerProto_Source_Lautturi_TrialController_h_14_INCLASS \
private: \
	static void StaticRegisterNativesATrialController(); \
	friend struct Z_Construct_UClass_ATrialController_Statics; \
public: \
	DECLARE_CLASS(ATrialController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoBattlerProto"), NO_API) \
	DECLARE_SERIALIZER(ATrialController)


#define AutoBattlerProto_Source_Lautturi_TrialController_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATrialController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATrialController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATrialController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATrialController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATrialController(ATrialController&&); \
	NO_API ATrialController(const ATrialController&); \
public:


#define AutoBattlerProto_Source_Lautturi_TrialController_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATrialController(ATrialController&&); \
	NO_API ATrialController(const ATrialController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATrialController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATrialController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATrialController)


#define AutoBattlerProto_Source_Lautturi_TrialController_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ActiveCharacter() { return STRUCT_OFFSET(ATrialController, ActiveCharacter); } \
	FORCEINLINE static uint32 __PPO__LastActiveCharacter() { return STRUCT_OFFSET(ATrialController, LastActiveCharacter); } \
	FORCEINLINE static uint32 __PPO__DraggedActor() { return STRUCT_OFFSET(ATrialController, DraggedActor); } \
	FORCEINLINE static uint32 __PPO__DragTimer() { return STRUCT_OFFSET(ATrialController, DragTimer); }


#define AutoBattlerProto_Source_Lautturi_TrialController_h_11_PROLOG
#define AutoBattlerProto_Source_Lautturi_TrialController_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutoBattlerProto_Source_Lautturi_TrialController_h_14_PRIVATE_PROPERTY_OFFSET \
	AutoBattlerProto_Source_Lautturi_TrialController_h_14_SPARSE_DATA \
	AutoBattlerProto_Source_Lautturi_TrialController_h_14_RPC_WRAPPERS \
	AutoBattlerProto_Source_Lautturi_TrialController_h_14_INCLASS \
	AutoBattlerProto_Source_Lautturi_TrialController_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AutoBattlerProto_Source_Lautturi_TrialController_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutoBattlerProto_Source_Lautturi_TrialController_h_14_PRIVATE_PROPERTY_OFFSET \
	AutoBattlerProto_Source_Lautturi_TrialController_h_14_SPARSE_DATA \
	AutoBattlerProto_Source_Lautturi_TrialController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	AutoBattlerProto_Source_Lautturi_TrialController_h_14_INCLASS_NO_PURE_DECLS \
	AutoBattlerProto_Source_Lautturi_TrialController_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOBATTLERPROTO_API UClass* StaticClass<class ATrialController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AutoBattlerProto_Source_Lautturi_TrialController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
