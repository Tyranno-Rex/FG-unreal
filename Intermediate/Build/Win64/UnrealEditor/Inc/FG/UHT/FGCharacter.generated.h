// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FGCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FG_FGCharacter_generated_h
#error "FGCharacter.generated.h already included, missing '#pragma once' in FGCharacter.h"
#endif
#define FG_FGCharacter_generated_h

#define FID_Users_jeongeunseong_Documents_Unreal_Projects_FG_Source_FG_FGCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGCharacter(); \
	friend struct Z_Construct_UClass_AFGCharacter_Statics; \
public: \
	DECLARE_CLASS(AFGCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FG"), NO_API) \
	DECLARE_SERIALIZER(AFGCharacter)


#define FID_Users_jeongeunseong_Documents_Unreal_Projects_FG_Source_FG_FGCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFGCharacter(AFGCharacter&&); \
	AFGCharacter(const AFGCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGCharacter) \
	NO_API virtual ~AFGCharacter();


#define FID_Users_jeongeunseong_Documents_Unreal_Projects_FG_Source_FG_FGCharacter_h_9_PROLOG
#define FID_Users_jeongeunseong_Documents_Unreal_Projects_FG_Source_FG_FGCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jeongeunseong_Documents_Unreal_Projects_FG_Source_FG_FGCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_jeongeunseong_Documents_Unreal_Projects_FG_Source_FG_FGCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FG_API UClass* StaticClass<class AFGCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jeongeunseong_Documents_Unreal_Projects_FG_Source_FG_FGCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
