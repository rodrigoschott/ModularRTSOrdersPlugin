// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ColonyOrders/Public/Orders/RTSOrderProcessPolicy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSOrderProcessPolicy() {}

// Begin Cross Module References
COLONYORDERS_API UEnum* Z_Construct_UEnum_ColonyOrders_ERTSOrderProcessPolicy();
UPackage* Z_Construct_UPackage__Script_ColonyOrders();
// End Cross Module References

// Begin Enum ERTSOrderProcessPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERTSOrderProcessPolicy;
static UEnum* ERTSOrderProcessPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERTSOrderProcessPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERTSOrderProcessPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ColonyOrders_ERTSOrderProcessPolicy, (UObject*)Z_Construct_UPackage__Script_ColonyOrders(), TEXT("ERTSOrderProcessPolicy"));
	}
	return Z_Registration_Info_UEnum_ERTSOrderProcessPolicy.OuterSingleton;
}
template<> COLONYORDERS_API UEnum* StaticEnum<ERTSOrderProcessPolicy>()
{
	return ERTSOrderProcessPolicy_StaticEnum();
}
struct Z_Construct_UEnum_ColonyOrders_ERTSOrderProcessPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CAN_BE_CANCELED.Comment", "/**\n     * The order is considered to have a duration (MoveOrder). The order will be canceled actively when another order is\n     * issued.\n     */" },
		{ "CAN_BE_CANCELED.Name", "ERTSOrderProcessPolicy::CAN_BE_CANCELED" },
		{ "CAN_BE_CANCELED.ToolTip", "The order is considered to have a duration (MoveOrder). The order will be canceled actively when another order is\nissued." },
		{ "CAN_NOT_BE_CANCELED.Comment", "/**\n     * The order is considered to have a duration (MoveOrder). The order will not be canceled actively when another\n     * order is issued. It will only be canceled when the tag requirements for the order or its target are not full\n     * filled anymore.\n     */" },
		{ "CAN_NOT_BE_CANCELED.Name", "ERTSOrderProcessPolicy::CAN_NOT_BE_CANCELED" },
		{ "CAN_NOT_BE_CANCELED.ToolTip", "The order is considered to have a duration (MoveOrder). The order will not be canceled actively when another\norder is issued. It will only be canceled when the tag requirements for the order or its target are not full\nfilled anymore." },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Describes how an order is executed. This might determine how the order is displayed in the UI and it determines\n * how the order is handled by the order system.\n */" },
#endif
		{ "INSTANT.Comment", "/**\n     * An instant order is issued directly without changing the current order (ProductionOrder, SetRallyPointOrder,\n     * Some Abilities etc.).\n     */" },
		{ "INSTANT.Name", "ERTSOrderProcessPolicy::INSTANT" },
		{ "INSTANT.ToolTip", "An instant order is issued directly without changing the current order (ProductionOrder, SetRallyPointOrder,\nSome Abilities etc.)." },
		{ "ModuleRelativePath", "Public/Orders/RTSOrderProcessPolicy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Describes how an order is executed. This might determine how the order is displayed in the UI and it determines\nhow the order is handled by the order system." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERTSOrderProcessPolicy::INSTANT", (int64)ERTSOrderProcessPolicy::INSTANT },
		{ "ERTSOrderProcessPolicy::CAN_BE_CANCELED", (int64)ERTSOrderProcessPolicy::CAN_BE_CANCELED },
		{ "ERTSOrderProcessPolicy::CAN_NOT_BE_CANCELED", (int64)ERTSOrderProcessPolicy::CAN_NOT_BE_CANCELED },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ColonyOrders_ERTSOrderProcessPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ColonyOrders,
	nullptr,
	"ERTSOrderProcessPolicy",
	"ERTSOrderProcessPolicy",
	Z_Construct_UEnum_ColonyOrders_ERTSOrderProcessPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ColonyOrders_ERTSOrderProcessPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ColonyOrders_ERTSOrderProcessPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ColonyOrders_ERTSOrderProcessPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ColonyOrders_ERTSOrderProcessPolicy()
{
	if (!Z_Registration_Info_UEnum_ERTSOrderProcessPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERTSOrderProcessPolicy.InnerSingleton, Z_Construct_UEnum_ColonyOrders_ERTSOrderProcessPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERTSOrderProcessPolicy.InnerSingleton;
}
// End Enum ERTSOrderProcessPolicy

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderProcessPolicy_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERTSOrderProcessPolicy_StaticEnum, TEXT("ERTSOrderProcessPolicy"), &Z_Registration_Info_UEnum_ERTSOrderProcessPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2077137834U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderProcessPolicy_h_1312890369(TEXT("/Script/ColonyOrders"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderProcessPolicy_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderProcessPolicy_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
