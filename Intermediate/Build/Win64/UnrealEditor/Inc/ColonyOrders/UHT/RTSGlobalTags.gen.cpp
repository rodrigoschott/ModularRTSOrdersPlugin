// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ColonyOrders/Public/AbilitySystem/RTSGlobalTags.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSGlobalTags() {}

// Begin Cross Module References
COLONYORDERS_API UClass* Z_Construct_UClass_URTSGlobalTags();
COLONYORDERS_API UClass* Z_Construct_UClass_URTSGlobalTags_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_ColonyOrders();
// End Cross Module References

// Begin Class URTSGlobalTags
void URTSGlobalTags::StaticRegisterNativesURTSGlobalTags()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URTSGlobalTags);
UClass* Z_Construct_UClass_URTSGlobalTags_NoRegister()
{
	return URTSGlobalTags::StaticClass();
}
struct Z_Construct_UClass_URTSGlobalTags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Global tags that need to be exposed to C++. */// TODO: Load tag names from config file?\n" },
#endif
		{ "IncludePath", "AbilitySystem/RTSGlobalTags.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSGlobalTags.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Global tags that need to be exposed to C++. // TODO: Load tag names from config file?" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URTSGlobalTags>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URTSGlobalTags_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ColonyOrders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTSGlobalTags_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URTSGlobalTags_Statics::ClassParams = {
	&URTSGlobalTags::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URTSGlobalTags_Statics::Class_MetaDataParams), Z_Construct_UClass_URTSGlobalTags_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URTSGlobalTags()
{
	if (!Z_Registration_Info_UClass_URTSGlobalTags.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URTSGlobalTags.OuterSingleton, Z_Construct_UClass_URTSGlobalTags_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URTSGlobalTags.OuterSingleton;
}
template<> COLONYORDERS_API UClass* StaticClass<URTSGlobalTags>()
{
	return URTSGlobalTags::StaticClass();
}
URTSGlobalTags::URTSGlobalTags(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URTSGlobalTags);
URTSGlobalTags::~URTSGlobalTags() {}
// End Class URTSGlobalTags

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSGlobalTags_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URTSGlobalTags, URTSGlobalTags::StaticClass, TEXT("URTSGlobalTags"), &Z_Registration_Info_UClass_URTSGlobalTags, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URTSGlobalTags), 1584898788U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSGlobalTags_h_981260443(TEXT("/Script/ColonyOrders"),
	Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSGlobalTags_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSGlobalTags_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
