// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANT_PlayerAnt_generated_h
#error "PlayerAnt.generated.h already included, missing '#pragma once' in PlayerAnt.h"
#endif
#define ANT_PlayerAnt_generated_h

#define ANT_Source_ANT_PlayerAnt_h_12_RPC_WRAPPERS
#define ANT_Source_ANT_PlayerAnt_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ANT_Source_ANT_PlayerAnt_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerAnt(); \
	friend struct Z_Construct_UClass_APlayerAnt_Statics; \
public: \
	DECLARE_CLASS(APlayerAnt, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ANT"), NO_API) \
	DECLARE_SERIALIZER(APlayerAnt)


#define ANT_Source_ANT_PlayerAnt_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerAnt(); \
	friend struct Z_Construct_UClass_APlayerAnt_Statics; \
public: \
	DECLARE_CLASS(APlayerAnt, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ANT"), NO_API) \
	DECLARE_SERIALIZER(APlayerAnt)


#define ANT_Source_ANT_PlayerAnt_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerAnt(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerAnt) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerAnt); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerAnt); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerAnt(APlayerAnt&&); \
	NO_API APlayerAnt(const APlayerAnt&); \
public:


#define ANT_Source_ANT_PlayerAnt_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerAnt(APlayerAnt&&); \
	NO_API APlayerAnt(const APlayerAnt&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerAnt); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerAnt); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerAnt)


#define ANT_Source_ANT_PlayerAnt_h_12_PRIVATE_PROPERTY_OFFSET
#define ANT_Source_ANT_PlayerAnt_h_9_PROLOG
#define ANT_Source_ANT_PlayerAnt_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ANT_Source_ANT_PlayerAnt_h_12_PRIVATE_PROPERTY_OFFSET \
	ANT_Source_ANT_PlayerAnt_h_12_RPC_WRAPPERS \
	ANT_Source_ANT_PlayerAnt_h_12_INCLASS \
	ANT_Source_ANT_PlayerAnt_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ANT_Source_ANT_PlayerAnt_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ANT_Source_ANT_PlayerAnt_h_12_PRIVATE_PROPERTY_OFFSET \
	ANT_Source_ANT_PlayerAnt_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ANT_Source_ANT_PlayerAnt_h_12_INCLASS_NO_PURE_DECLS \
	ANT_Source_ANT_PlayerAnt_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANT_API UClass* StaticClass<class APlayerAnt>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ANT_Source_ANT_PlayerAnt_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
