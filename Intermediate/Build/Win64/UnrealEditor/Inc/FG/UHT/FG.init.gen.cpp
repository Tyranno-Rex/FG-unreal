// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFG_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_FG;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_FG()
	{
		if (!Z_Registration_Info_UPackage__Script_FG.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/FG",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xD92F1064,
				0xD8537179,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_FG.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_FG.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_FG(Z_Construct_UPackage__Script_FG, TEXT("/Script/FG"), Z_Registration_Info_UPackage__Script_FG, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD92F1064, 0xD8537179));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
