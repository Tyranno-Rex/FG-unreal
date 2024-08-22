// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FG/FGGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
FG_API UClass* Z_Construct_UClass_AFGGameMode();
FG_API UClass* Z_Construct_UClass_AFGGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_FG();
// End Cross Module References

// Begin Class AFGGameMode
void AFGGameMode::StaticRegisterNativesAFGGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFGGameMode);
UClass* Z_Construct_UClass_AFGGameMode_NoRegister()
{
	return AFGGameMode::StaticClass();
}
struct Z_Construct_UClass_AFGGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FGGameMode.h" },
		{ "ModuleRelativePath", "FGGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFGGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFGGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFGGameMode_Statics::ClassParams = {
	&AFGGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFGGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFGGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFGGameMode()
{
	if (!Z_Registration_Info_UClass_AFGGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFGGameMode.OuterSingleton, Z_Construct_UClass_AFGGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFGGameMode.OuterSingleton;
}
template<> FG_API UClass* StaticClass<AFGGameMode>()
{
	return AFGGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFGGameMode);
AFGGameMode::~AFGGameMode() {}
// End Class AFGGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jeongeunseong_Documents_Unreal_Projects_FG_Source_FG_FGGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFGGameMode, AFGGameMode::StaticClass, TEXT("AFGGameMode"), &Z_Registration_Info_UClass_AFGGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFGGameMode), 536106293U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jeongeunseong_Documents_Unreal_Projects_FG_Source_FG_FGGameMode_h_39918486(TEXT("/Script/FG"),
	Z_CompiledInDeferFile_FID_Users_jeongeunseong_Documents_Unreal_Projects_FG_Source_FG_FGGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jeongeunseong_Documents_Unreal_Projects_FG_Source_FG_FGGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
