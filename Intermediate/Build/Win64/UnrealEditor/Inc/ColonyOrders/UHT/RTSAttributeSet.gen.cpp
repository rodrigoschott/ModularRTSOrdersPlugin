// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ColonyOrders/Public/AbilitySystem/RTSAttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSAttributeSet() {}

// Begin Cross Module References
COLONYORDERS_API UClass* Z_Construct_UClass_URTSAttributeSet();
COLONYORDERS_API UClass* Z_Construct_UClass_URTSAttributeSet_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
UPackage* Z_Construct_UPackage__Script_ColonyOrders();
// End Cross Module References

// Begin Class URTSAttributeSet
void URTSAttributeSet::StaticRegisterNativesURTSAttributeSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URTSAttributeSet);
UClass* Z_Construct_UClass_URTSAttributeSet_NoRegister()
{
	return URTSAttributeSet::StaticClass();
}
struct Z_Construct_UClass_URTSAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * RTS base class for ability system attribute sets\n */" },
#endif
		{ "IncludePath", "AbilitySystem/RTSAttributeSet.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RTS base class for ability system attribute sets" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URTSAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URTSAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_ColonyOrders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTSAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URTSAttributeSet_Statics::ClassParams = {
	&URTSAttributeSet::StaticClass,
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
	0x003000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URTSAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_URTSAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URTSAttributeSet()
{
	if (!Z_Registration_Info_UClass_URTSAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URTSAttributeSet.OuterSingleton, Z_Construct_UClass_URTSAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URTSAttributeSet.OuterSingleton;
}
template<> COLONYORDERS_API UClass* StaticClass<URTSAttributeSet>()
{
	return URTSAttributeSet::StaticClass();
}
URTSAttributeSet::URTSAttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URTSAttributeSet);
URTSAttributeSet::~URTSAttributeSet() {}
// End Class URTSAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URTSAttributeSet, URTSAttributeSet::StaticClass, TEXT("URTSAttributeSet"), &Z_Registration_Info_UClass_URTSAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URTSAttributeSet), 4220742379U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAttributeSet_h_3125085908(TEXT("/Script/ColonyOrders"),
	Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
