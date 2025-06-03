// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ColonyOrders/Public/Orders/RTSAttackOrder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSAttackOrder() {}

// Begin Cross Module References
COLONYORDERS_API UClass* Z_Construct_UClass_URTSAttackOrder();
COLONYORDERS_API UClass* Z_Construct_UClass_URTSAttackOrder_NoRegister();
COLONYORDERS_API UClass* Z_Construct_UClass_URTSCharacterAIOrder();
UPackage* Z_Construct_UPackage__Script_ColonyOrders();
// End Cross Module References

// Begin Class URTSAttackOrder
void URTSAttackOrder::StaticRegisterNativesURTSAttackOrder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URTSAttackOrder);
UClass* Z_Construct_UClass_URTSAttackOrder_NoRegister()
{
	return URTSAttackOrder::StaticClass();
}
struct Z_Construct_UClass_URTSAttackOrder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Orders the actor to attack a unit or building.\n */" },
#endif
		{ "IncludePath", "Orders/RTSAttackOrder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Orders/RTSAttackOrder.h" },
		{ "NotBlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Orders the actor to attack a unit or building." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URTSAttackOrder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URTSAttackOrder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URTSCharacterAIOrder,
	(UObject* (*)())Z_Construct_UPackage__Script_ColonyOrders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTSAttackOrder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URTSAttackOrder_Statics::ClassParams = {
	&URTSAttackOrder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URTSAttackOrder_Statics::Class_MetaDataParams), Z_Construct_UClass_URTSAttackOrder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URTSAttackOrder()
{
	if (!Z_Registration_Info_UClass_URTSAttackOrder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URTSAttackOrder.OuterSingleton, Z_Construct_UClass_URTSAttackOrder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URTSAttackOrder.OuterSingleton;
}
template<> COLONYORDERS_API UClass* StaticClass<URTSAttackOrder>()
{
	return URTSAttackOrder::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URTSAttackOrder);
URTSAttackOrder::~URTSAttackOrder() {}
// End Class URTSAttackOrder

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSAttackOrder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URTSAttackOrder, URTSAttackOrder::StaticClass, TEXT("URTSAttackOrder"), &Z_Registration_Info_UClass_URTSAttackOrder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URTSAttackOrder), 3369117514U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSAttackOrder_h_3496891788(TEXT("/Script/ColonyOrders"),
	Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSAttackOrder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSAttackOrder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
