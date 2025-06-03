// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ColonyOrders/Public/Orders/RTSTargetType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSTargetType() {}

// Begin Cross Module References
COLONYORDERS_API UEnum* Z_Construct_UEnum_ColonyOrders_ERTSTargetType();
UPackage* Z_Construct_UPackage__Script_ColonyOrders();
// End Cross Module References

// Begin Enum ERTSTargetType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERTSTargetType;
static UEnum* ERTSTargetType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERTSTargetType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERTSTargetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ColonyOrders_ERTSTargetType, (UObject*)Z_Construct_UPackage__Script_ColonyOrders(), TEXT("ERTSTargetType"));
	}
	return Z_Registration_Info_UEnum_ERTSTargetType.OuterSingleton;
}
template<> COLONYORDERS_API UEnum* StaticEnum<ERTSTargetType>()
{
	return ERTSTargetType_StaticEnum();
}
struct Z_Construct_UEnum_ColonyOrders_ERTSTargetType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ACTOR.Comment", "/** Order needs an actor as target. */" },
		{ "ACTOR.Name", "ERTSTargetType::ACTOR" },
		{ "ACTOR.ToolTip", "Order needs an actor as target." },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The possible target types of an order.\n */" },
#endif
		{ "DIRECTION.Comment", "/** Order needs vector location that is used together with the unit location as a direction. */" },
		{ "DIRECTION.Name", "ERTSTargetType::DIRECTION" },
		{ "DIRECTION.ToolTip", "Order needs vector location that is used together with the unit location as a direction." },
		{ "LOCATION.Comment", "/** Order needs vector location as target. */" },
		{ "LOCATION.Name", "ERTSTargetType::LOCATION" },
		{ "LOCATION.ToolTip", "Order needs vector location as target." },
		{ "ModuleRelativePath", "Public/Orders/RTSTargetType.h" },
		{ "NONE.Comment", "/** No specific target (AOE, Aura or automatically applied to self). */" },
		{ "NONE.Name", "ERTSTargetType::NONE" },
		{ "NONE.ToolTip", "No specific target (AOE, Aura or automatically applied to self)." },
		{ "PASSIVE.Comment", "/** Can't be activated. */" },
		{ "PASSIVE.Name", "ERTSTargetType::PASSIVE" },
		{ "PASSIVE.ToolTip", "Can't be activated." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The possible target types of an order." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERTSTargetType::NONE", (int64)ERTSTargetType::NONE },
		{ "ERTSTargetType::ACTOR", (int64)ERTSTargetType::ACTOR },
		{ "ERTSTargetType::LOCATION", (int64)ERTSTargetType::LOCATION },
		{ "ERTSTargetType::DIRECTION", (int64)ERTSTargetType::DIRECTION },
		{ "ERTSTargetType::PASSIVE", (int64)ERTSTargetType::PASSIVE },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ColonyOrders_ERTSTargetType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ColonyOrders,
	nullptr,
	"ERTSTargetType",
	"ERTSTargetType",
	Z_Construct_UEnum_ColonyOrders_ERTSTargetType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ColonyOrders_ERTSTargetType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ColonyOrders_ERTSTargetType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ColonyOrders_ERTSTargetType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ColonyOrders_ERTSTargetType()
{
	if (!Z_Registration_Info_UEnum_ERTSTargetType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERTSTargetType.InnerSingleton, Z_Construct_UEnum_ColonyOrders_ERTSTargetType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERTSTargetType.InnerSingleton;
}
// End Enum ERTSTargetType

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSTargetType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERTSTargetType_StaticEnum, TEXT("ERTSTargetType"), &Z_Registration_Info_UEnum_ERTSTargetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 406532435U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSTargetType_h_524316494(TEXT("/Script/ColonyOrders"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSTargetType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSTargetType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
