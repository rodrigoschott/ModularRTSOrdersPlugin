// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ColonyOrders/Public/Orders/RTSOrderPreviewData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSOrderPreviewData() {}

// Begin Cross Module References
COLONYORDERS_API UClass* Z_Construct_UClass_ARTSOrderPreview_NoRegister();
COLONYORDERS_API UEnum* Z_Construct_UEnum_ColonyOrders_ERTSOrderPreviewSnapMode();
COLONYORDERS_API UScriptStruct* Z_Construct_UScriptStruct_FRTSOrderPreviewData();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_ColonyOrders();
// End Cross Module References

// Begin ScriptStruct FRTSOrderPreviewData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RTSOrderPreviewData;
class UScriptStruct* FRTSOrderPreviewData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RTSOrderPreviewData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RTSOrderPreviewData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRTSOrderPreviewData, (UObject*)Z_Construct_UPackage__Script_ColonyOrders(), TEXT("RTSOrderPreviewData"));
	}
	return Z_Registration_Info_UScriptStruct_RTSOrderPreviewData.OuterSingleton;
}
template<> COLONYORDERS_API UScriptStruct* StaticStruct<FRTSOrderPreviewData>()
{
	return FRTSOrderPreviewData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRTSOrderPreviewData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Specifies how to show previews while selecting an order target. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderPreviewData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies how to show previews while selecting an order target." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Actor the preview is shown for. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderPreviewData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor the preview is shown for." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Preview_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Actor previewing the order. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderPreviewData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor previewing the order." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderPreviewClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Class of actors to spawn as preview for an order. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderPreviewData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Class of actors to spawn as preview for an order." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapMode_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether and how to snap order previews. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderPreviewData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether and how to snap order previews." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Preview;
	static const UECodeGen_Private::FClassPropertyParams NewProp_OrderPreviewClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SnapMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SnapMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRTSOrderPreviewData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRTSOrderPreviewData_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRTSOrderPreviewData, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRTSOrderPreviewData_Statics::NewProp_Preview = { "Preview", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRTSOrderPreviewData, Preview), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Preview_MetaData), NewProp_Preview_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FRTSOrderPreviewData_Statics::NewProp_OrderPreviewClass = { "OrderPreviewClass", nullptr, (EPropertyFlags)0x0044000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRTSOrderPreviewData, OrderPreviewClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ARTSOrderPreview_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderPreviewClass_MetaData), NewProp_OrderPreviewClass_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRTSOrderPreviewData_Statics::NewProp_SnapMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRTSOrderPreviewData_Statics::NewProp_SnapMode = { "SnapMode", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRTSOrderPreviewData, SnapMode), Z_Construct_UEnum_ColonyOrders_ERTSOrderPreviewSnapMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapMode_MetaData), NewProp_SnapMode_MetaData) }; // 835436674
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRTSOrderPreviewData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTSOrderPreviewData_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTSOrderPreviewData_Statics::NewProp_Preview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTSOrderPreviewData_Statics::NewProp_OrderPreviewClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTSOrderPreviewData_Statics::NewProp_SnapMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTSOrderPreviewData_Statics::NewProp_SnapMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTSOrderPreviewData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRTSOrderPreviewData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ColonyOrders,
	nullptr,
	&NewStructOps,
	"RTSOrderPreviewData",
	Z_Construct_UScriptStruct_FRTSOrderPreviewData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTSOrderPreviewData_Statics::PropPointers),
	sizeof(FRTSOrderPreviewData),
	alignof(FRTSOrderPreviewData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTSOrderPreviewData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRTSOrderPreviewData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRTSOrderPreviewData()
{
	if (!Z_Registration_Info_UScriptStruct_RTSOrderPreviewData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RTSOrderPreviewData.InnerSingleton, Z_Construct_UScriptStruct_FRTSOrderPreviewData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RTSOrderPreviewData.InnerSingleton;
}
// End ScriptStruct FRTSOrderPreviewData

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderPreviewData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRTSOrderPreviewData::StaticStruct, Z_Construct_UScriptStruct_FRTSOrderPreviewData_Statics::NewStructOps, TEXT("RTSOrderPreviewData"), &Z_Registration_Info_UScriptStruct_RTSOrderPreviewData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRTSOrderPreviewData), 2497024495U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderPreviewData_h_2243141982(TEXT("/Script/ColonyOrders"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderPreviewData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderPreviewData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
