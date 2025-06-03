// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ColonyOrders/Public/Orders/RTSOrderGroupExecutionType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSOrderGroupExecutionType() {}

// Begin Cross Module References
COLONYORDERS_API UEnum* Z_Construct_UEnum_ColonyOrders_ERTSOrderGroupExecutionType();
UPackage* Z_Construct_UPackage__Script_ColonyOrders();
// End Cross Module References

// Begin Enum ERTSOrderGroupExecutionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERTSOrderGroupExecutionType;
static UEnum* ERTSOrderGroupExecutionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERTSOrderGroupExecutionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERTSOrderGroupExecutionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ColonyOrders_ERTSOrderGroupExecutionType, (UObject*)Z_Construct_UPackage__Script_ColonyOrders(), TEXT("ERTSOrderGroupExecutionType"));
	}
	return Z_Registration_Info_UEnum_ERTSOrderGroupExecutionType.OuterSingleton;
}
template<> COLONYORDERS_API UEnum* StaticEnum<ERTSOrderGroupExecutionType>()
{
	return ERTSOrderGroupExecutionType_StaticEnum();
}
struct Z_Construct_UEnum_ColonyOrders_ERTSOrderGroupExecutionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ALL.Comment", "/** The order is simply issued to all selected units. */" },
		{ "ALL.Name", "ERTSOrderGroupExecutionType::ALL" },
		{ "ALL.ToolTip", "The order is simply issued to all selected units." },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * To how many and which of the selected units should an order be issued to.\n */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderGroupExecutionType.h" },
		{ "MOST_SUITABLE_UNIT.Comment", "/**\n     * The order is issued to a single unit that is capable to obey the order.\n     * Note that if the order has a target, the highest value returned by RTSOrderHelperGetOrderTargetScore determines\n     * the unit.\n     */" },
		{ "MOST_SUITABLE_UNIT.Name", "ERTSOrderGroupExecutionType::MOST_SUITABLE_UNIT" },
		{ "MOST_SUITABLE_UNIT.ToolTip", "The order is issued to a single unit that is capable to obey the order.\nNote that if the order has a target, the highest value returned by RTSOrderHelperGetOrderTargetScore determines\nthe unit." },
		{ "SELECTED_SUB_GROUP.Comment", "/** The order is issued to the currently selected subgroup. */" },
		{ "SELECTED_SUB_GROUP.Name", "ERTSOrderGroupExecutionType::SELECTED_SUB_GROUP" },
		{ "SELECTED_SUB_GROUP.ToolTip", "The order is issued to the currently selected subgroup." },
		{ "SELECTED_UNIT.Comment", "/** The order is only issued to the main selected unit. */" },
		{ "SELECTED_UNIT.Name", "ERTSOrderGroupExecutionType::SELECTED_UNIT" },
		{ "SELECTED_UNIT.ToolTip", "The order is only issued to the main selected unit." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "To how many and which of the selected units should an order be issued to." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERTSOrderGroupExecutionType::ALL", (int64)ERTSOrderGroupExecutionType::ALL },
		{ "ERTSOrderGroupExecutionType::SELECTED_SUB_GROUP", (int64)ERTSOrderGroupExecutionType::SELECTED_SUB_GROUP },
		{ "ERTSOrderGroupExecutionType::SELECTED_UNIT", (int64)ERTSOrderGroupExecutionType::SELECTED_UNIT },
		{ "ERTSOrderGroupExecutionType::MOST_SUITABLE_UNIT", (int64)ERTSOrderGroupExecutionType::MOST_SUITABLE_UNIT },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ColonyOrders_ERTSOrderGroupExecutionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ColonyOrders,
	nullptr,
	"ERTSOrderGroupExecutionType",
	"ERTSOrderGroupExecutionType",
	Z_Construct_UEnum_ColonyOrders_ERTSOrderGroupExecutionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ColonyOrders_ERTSOrderGroupExecutionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ColonyOrders_ERTSOrderGroupExecutionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ColonyOrders_ERTSOrderGroupExecutionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ColonyOrders_ERTSOrderGroupExecutionType()
{
	if (!Z_Registration_Info_UEnum_ERTSOrderGroupExecutionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERTSOrderGroupExecutionType.InnerSingleton, Z_Construct_UEnum_ColonyOrders_ERTSOrderGroupExecutionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERTSOrderGroupExecutionType.InnerSingleton;
}
// End Enum ERTSOrderGroupExecutionType

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderGroupExecutionType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERTSOrderGroupExecutionType_StaticEnum, TEXT("ERTSOrderGroupExecutionType"), &Z_Registration_Info_UEnum_ERTSOrderGroupExecutionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 286734233U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderGroupExecutionType_h_516333510(TEXT("/Script/ColonyOrders"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderGroupExecutionType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderGroupExecutionType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
