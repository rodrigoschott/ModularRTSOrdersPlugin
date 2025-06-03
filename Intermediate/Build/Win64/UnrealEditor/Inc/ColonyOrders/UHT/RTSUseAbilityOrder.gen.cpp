// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ColonyOrders/Public/Orders/RTSUseAbilityOrder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSUseAbilityOrder() {}

// Begin Cross Module References
COLONYORDERS_API UClass* Z_Construct_UClass_URTSOrderWithBehavior();
COLONYORDERS_API UClass* Z_Construct_UClass_URTSUseAbilityOrder();
COLONYORDERS_API UClass* Z_Construct_UClass_URTSUseAbilityOrder_NoRegister();
UPackage* Z_Construct_UPackage__Script_ColonyOrders();
// End Cross Module References

// Begin Class URTSUseAbilityOrder
void URTSUseAbilityOrder::StaticRegisterNativesURTSUseAbilityOrder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URTSUseAbilityOrder);
UClass* Z_Construct_UClass_URTSUseAbilityOrder_NoRegister()
{
	return URTSUseAbilityOrder::StaticClass();
}
struct Z_Construct_UClass_URTSUseAbilityOrder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Orders the actor to use a ability.\n */" },
#endif
		{ "HideCategories", "RTSDisplay" },
		{ "IncludePath", "Orders/RTSUseAbilityOrder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Orders/RTSUseAbilityOrder.h" },
		{ "NotBlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Orders the actor to use a ability." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URTSUseAbilityOrder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URTSUseAbilityOrder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URTSOrderWithBehavior,
	(UObject* (*)())Z_Construct_UPackage__Script_ColonyOrders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTSUseAbilityOrder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URTSUseAbilityOrder_Statics::ClassParams = {
	&URTSUseAbilityOrder::StaticClass,
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
	0x001100A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URTSUseAbilityOrder_Statics::Class_MetaDataParams), Z_Construct_UClass_URTSUseAbilityOrder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URTSUseAbilityOrder()
{
	if (!Z_Registration_Info_UClass_URTSUseAbilityOrder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URTSUseAbilityOrder.OuterSingleton, Z_Construct_UClass_URTSUseAbilityOrder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URTSUseAbilityOrder.OuterSingleton;
}
template<> COLONYORDERS_API UClass* StaticClass<URTSUseAbilityOrder>()
{
	return URTSUseAbilityOrder::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URTSUseAbilityOrder);
URTSUseAbilityOrder::~URTSUseAbilityOrder() {}
// End Class URTSUseAbilityOrder

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSUseAbilityOrder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URTSUseAbilityOrder, URTSUseAbilityOrder::StaticClass, TEXT("URTSUseAbilityOrder"), &Z_Registration_Info_UClass_URTSUseAbilityOrder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URTSUseAbilityOrder), 1698995276U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSUseAbilityOrder_h_1861133505(TEXT("/Script/ColonyOrders"),
	Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSUseAbilityOrder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSUseAbilityOrder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
