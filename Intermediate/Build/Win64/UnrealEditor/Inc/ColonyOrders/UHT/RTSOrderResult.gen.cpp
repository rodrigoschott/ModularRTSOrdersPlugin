// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ColonyOrders/Public/Orders/RTSOrderResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSOrderResult() {}

// Begin Cross Module References
COLONYORDERS_API UEnum* Z_Construct_UEnum_ColonyOrders_ERTSOrderResult();
UPackage* Z_Construct_UPackage__Script_ColonyOrders();
// End Cross Module References

// Begin Enum ERTSOrderResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERTSOrderResult;
static UEnum* ERTSOrderResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERTSOrderResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERTSOrderResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ColonyOrders_ERTSOrderResult, (UObject*)Z_Construct_UPackage__Script_ColonyOrders(), TEXT("ERTSOrderResult"));
	}
	return Z_Registration_Info_UEnum_ERTSOrderResult.OuterSingleton;
}
template<> COLONYORDERS_API UEnum* StaticEnum<ERTSOrderResult>()
{
	return ERTSOrderResult_StaticEnum();
}
struct Z_Construct_UEnum_ColonyOrders_ERTSOrderResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CANCELED.Comment", "/** The order was canceled. */" },
		{ "CANCELED.Name", "ERTSOrderResult::CANCELED" },
		{ "CANCELED.ToolTip", "The order was canceled." },
		{ "FAILED.Comment", "/** The order has failed. */" },
		{ "FAILED.Name", "ERTSOrderResult::FAILED" },
		{ "FAILED.ToolTip", "The order has failed." },
		{ "ModuleRelativePath", "Public/Orders/RTSOrderResult.h" },
		{ "SUCCEEDED.Comment", "/** The order was fulfilled. */" },
		{ "SUCCEEDED.Name", "ERTSOrderResult::SUCCEEDED" },
		{ "SUCCEEDED.ToolTip", "The order was fulfilled." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERTSOrderResult::SUCCEEDED", (int64)ERTSOrderResult::SUCCEEDED },
		{ "ERTSOrderResult::CANCELED", (int64)ERTSOrderResult::CANCELED },
		{ "ERTSOrderResult::FAILED", (int64)ERTSOrderResult::FAILED },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ColonyOrders_ERTSOrderResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ColonyOrders,
	nullptr,
	"ERTSOrderResult",
	"ERTSOrderResult",
	Z_Construct_UEnum_ColonyOrders_ERTSOrderResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ColonyOrders_ERTSOrderResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ColonyOrders_ERTSOrderResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ColonyOrders_ERTSOrderResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ColonyOrders_ERTSOrderResult()
{
	if (!Z_Registration_Info_UEnum_ERTSOrderResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERTSOrderResult.InnerSingleton, Z_Construct_UEnum_ColonyOrders_ERTSOrderResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERTSOrderResult.InnerSingleton;
}
// End Enum ERTSOrderResult

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderResult_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERTSOrderResult_StaticEnum, TEXT("ERTSOrderResult"), &Z_Registration_Info_UEnum_ERTSOrderResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 934721529U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderResult_h_252751078(TEXT("/Script/ColonyOrders"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderResult_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderResult_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
