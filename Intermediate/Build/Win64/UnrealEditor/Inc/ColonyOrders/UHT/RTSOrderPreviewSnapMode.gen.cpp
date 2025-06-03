// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ColonyOrders/Public/Orders/RTSOrderPreviewSnapMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSOrderPreviewSnapMode() {}

// Begin Cross Module References
COLONYORDERS_API UEnum* Z_Construct_UEnum_ColonyOrders_ERTSOrderPreviewSnapMode();
UPackage* Z_Construct_UPackage__Script_ColonyOrders();
// End Cross Module References

// Begin Enum ERTSOrderPreviewSnapMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERTSOrderPreviewSnapMode;
static UEnum* ERTSOrderPreviewSnapMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERTSOrderPreviewSnapMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERTSOrderPreviewSnapMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ColonyOrders_ERTSOrderPreviewSnapMode, (UObject*)Z_Construct_UPackage__Script_ColonyOrders(), TEXT("ERTSOrderPreviewSnapMode"));
	}
	return Z_Registration_Info_UEnum_ERTSOrderPreviewSnapMode.OuterSingleton;
}
template<> COLONYORDERS_API UEnum* StaticEnum<ERTSOrderPreviewSnapMode>()
{
	return ERTSOrderPreviewSnapMode_StaticEnum();
}
struct Z_Construct_UEnum_ColonyOrders_ERTSOrderPreviewSnapMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether and how to snap order previews. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderPreviewSnapMode.h" },
		{ "ORDERPREVIEW_DontSnap.Comment", "/** Don't snap. */" },
		{ "ORDERPREVIEW_DontSnap.Name", "ERTSOrderPreviewSnapMode::ORDERPREVIEW_DontSnap" },
		{ "ORDERPREVIEW_DontSnap.ToolTip", "Don't snap." },
		{ "ORDERPREVIEW_SnapToCursor.Comment", "/** Snap to the cursor position. */" },
		{ "ORDERPREVIEW_SnapToCursor.Name", "ERTSOrderPreviewSnapMode::ORDERPREVIEW_SnapToCursor" },
		{ "ORDERPREVIEW_SnapToCursor.ToolTip", "Snap to the cursor position." },
		{ "ORDERPREVIEW_SnapToOwner.Comment", "/** Snap to the actor the preview is shown for, and rotate towards the cursor position. */" },
		{ "ORDERPREVIEW_SnapToOwner.Name", "ERTSOrderPreviewSnapMode::ORDERPREVIEW_SnapToOwner" },
		{ "ORDERPREVIEW_SnapToOwner.ToolTip", "Snap to the actor the preview is shown for, and rotate towards the cursor position." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether and how to snap order previews." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERTSOrderPreviewSnapMode::ORDERPREVIEW_DontSnap", (int64)ERTSOrderPreviewSnapMode::ORDERPREVIEW_DontSnap },
		{ "ERTSOrderPreviewSnapMode::ORDERPREVIEW_SnapToOwner", (int64)ERTSOrderPreviewSnapMode::ORDERPREVIEW_SnapToOwner },
		{ "ERTSOrderPreviewSnapMode::ORDERPREVIEW_SnapToCursor", (int64)ERTSOrderPreviewSnapMode::ORDERPREVIEW_SnapToCursor },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ColonyOrders_ERTSOrderPreviewSnapMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ColonyOrders,
	nullptr,
	"ERTSOrderPreviewSnapMode",
	"ERTSOrderPreviewSnapMode",
	Z_Construct_UEnum_ColonyOrders_ERTSOrderPreviewSnapMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ColonyOrders_ERTSOrderPreviewSnapMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ColonyOrders_ERTSOrderPreviewSnapMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ColonyOrders_ERTSOrderPreviewSnapMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ColonyOrders_ERTSOrderPreviewSnapMode()
{
	if (!Z_Registration_Info_UEnum_ERTSOrderPreviewSnapMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERTSOrderPreviewSnapMode.InnerSingleton, Z_Construct_UEnum_ColonyOrders_ERTSOrderPreviewSnapMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERTSOrderPreviewSnapMode.InnerSingleton;
}
// End Enum ERTSOrderPreviewSnapMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderPreviewSnapMode_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERTSOrderPreviewSnapMode_StaticEnum, TEXT("ERTSOrderPreviewSnapMode"), &Z_Registration_Info_UEnum_ERTSOrderPreviewSnapMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 835436674U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderPreviewSnapMode_h_3510148390(TEXT("/Script/ColonyOrders"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderPreviewSnapMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderPreviewSnapMode_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
