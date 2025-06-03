// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ColonyOrders/Public/Orders/RTSMoveOrder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSMoveOrder() {}

// Begin Cross Module References
COLONYORDERS_API UClass* Z_Construct_UClass_URTSCharacterAIOrder();
COLONYORDERS_API UClass* Z_Construct_UClass_URTSMoveOrder();
COLONYORDERS_API UClass* Z_Construct_UClass_URTSMoveOrder_NoRegister();
UPackage* Z_Construct_UPackage__Script_ColonyOrders();
// End Cross Module References

// Begin Class URTSMoveOrder
void URTSMoveOrder::StaticRegisterNativesURTSMoveOrder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URTSMoveOrder);
UClass* Z_Construct_UClass_URTSMoveOrder_NoRegister()
{
	return URTSMoveOrder::StaticClass();
}
struct Z_Construct_UClass_URTSMoveOrder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Standard unit movement to a fixed target location on the map. Calculates a formation for multiple units using their\n * formation rank.\n */" },
#endif
		{ "IncludePath", "Orders/RTSMoveOrder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Orders/RTSMoveOrder.h" },
		{ "NotBlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Standard unit movement to a fixed target location on the map. Calculates a formation for multiple units using their\nformation rank." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URTSMoveOrder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URTSMoveOrder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URTSCharacterAIOrder,
	(UObject* (*)())Z_Construct_UPackage__Script_ColonyOrders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTSMoveOrder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URTSMoveOrder_Statics::ClassParams = {
	&URTSMoveOrder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URTSMoveOrder_Statics::Class_MetaDataParams), Z_Construct_UClass_URTSMoveOrder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URTSMoveOrder()
{
	if (!Z_Registration_Info_UClass_URTSMoveOrder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URTSMoveOrder.OuterSingleton, Z_Construct_UClass_URTSMoveOrder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URTSMoveOrder.OuterSingleton;
}
template<> COLONYORDERS_API UClass* StaticClass<URTSMoveOrder>()
{
	return URTSMoveOrder::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URTSMoveOrder);
URTSMoveOrder::~URTSMoveOrder() {}
// End Class URTSMoveOrder

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSMoveOrder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URTSMoveOrder, URTSMoveOrder::StaticClass, TEXT("URTSMoveOrder"), &Z_Registration_Info_UClass_URTSMoveOrder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URTSMoveOrder), 3738469810U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSMoveOrder_h_2661761453(TEXT("/Script/ColonyOrders"),
	Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSMoveOrder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSMoveOrder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
