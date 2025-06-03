// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ColonyOrders/Public/Orders/RTSStopOrder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSStopOrder() {}

// Begin Cross Module References
COLONYORDERS_API UClass* Z_Construct_UClass_URTSCharacterAIOrder();
COLONYORDERS_API UClass* Z_Construct_UClass_URTSStopOrder();
COLONYORDERS_API UClass* Z_Construct_UClass_URTSStopOrder_NoRegister();
UPackage* Z_Construct_UPackage__Script_ColonyOrders();
// End Cross Module References

// Begin Class URTSStopOrder
void URTSStopOrder::StaticRegisterNativesURTSStopOrder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URTSStopOrder);
UClass* Z_Construct_UClass_URTSStopOrder_NoRegister()
{
	return URTSStopOrder::StaticClass();
}
struct Z_Construct_UClass_URTSStopOrder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Stops the actor and switches it in the idle state.\n */" },
#endif
		{ "IncludePath", "Orders/RTSStopOrder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Orders/RTSStopOrder.h" },
		{ "NotBlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stops the actor and switches it in the idle state." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URTSStopOrder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URTSStopOrder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URTSCharacterAIOrder,
	(UObject* (*)())Z_Construct_UPackage__Script_ColonyOrders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTSStopOrder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URTSStopOrder_Statics::ClassParams = {
	&URTSStopOrder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URTSStopOrder_Statics::Class_MetaDataParams), Z_Construct_UClass_URTSStopOrder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URTSStopOrder()
{
	if (!Z_Registration_Info_UClass_URTSStopOrder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URTSStopOrder.OuterSingleton, Z_Construct_UClass_URTSStopOrder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URTSStopOrder.OuterSingleton;
}
template<> COLONYORDERS_API UClass* StaticClass<URTSStopOrder>()
{
	return URTSStopOrder::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URTSStopOrder);
URTSStopOrder::~URTSStopOrder() {}
// End Class URTSStopOrder

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSStopOrder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URTSStopOrder, URTSStopOrder::StaticClass, TEXT("URTSStopOrder"), &Z_Registration_Info_UClass_URTSStopOrder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URTSStopOrder), 2541688269U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSStopOrder_h_827142200(TEXT("/Script/ColonyOrders"),
	Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSStopOrder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSStopOrder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
