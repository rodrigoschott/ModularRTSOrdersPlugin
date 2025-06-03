// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ColonyOrders/Public/Orders/RTSOrderTypeWithIndex.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSOrderTypeWithIndex() {}

// Begin Cross Module References
COLONYORDERS_API UClass* Z_Construct_UClass_URTSOrder_NoRegister();
COLONYORDERS_API UScriptStruct* Z_Construct_UScriptStruct_FRTSOrderTypeWithIndex();
UPackage* Z_Construct_UPackage__Script_ColonyOrders();
// End Cross Module References

// Begin ScriptStruct FRTSOrderTypeWithIndex
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RTSOrderTypeWithIndex;
class UScriptStruct* FRTSOrderTypeWithIndex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RTSOrderTypeWithIndex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RTSOrderTypeWithIndex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRTSOrderTypeWithIndex, (UObject*)Z_Construct_UPackage__Script_ColonyOrders(), TEXT("RTSOrderTypeWithIndex"));
	}
	return Z_Registration_Info_UScriptStruct_RTSOrderTypeWithIndex.OuterSingleton;
}
template<> COLONYORDERS_API UScriptStruct* StaticStruct<FRTSOrderTypeWithIndex>()
{
	return FRTSOrderTypeWithIndex::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRTSOrderTypeWithIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * An order type with an index.\n */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderTypeWithIndex.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An order type with an index." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderType_MetaData[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Type of this order. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderTypeWithIndex.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of this order." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Additional index. This is needed for certain orders to differentiate. Default '-1'. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderTypeWithIndex.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional index. This is needed for certain orders to differentiate. Default '-1'." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_OrderType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRTSOrderTypeWithIndex>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FRTSOrderTypeWithIndex_Statics::NewProp_OrderType = { "OrderType", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRTSOrderTypeWithIndex, OrderType), Z_Construct_UClass_URTSOrder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderType_MetaData), NewProp_OrderType_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRTSOrderTypeWithIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRTSOrderTypeWithIndex, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRTSOrderTypeWithIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTSOrderTypeWithIndex_Statics::NewProp_OrderType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTSOrderTypeWithIndex_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTSOrderTypeWithIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRTSOrderTypeWithIndex_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ColonyOrders,
	nullptr,
	&NewStructOps,
	"RTSOrderTypeWithIndex",
	Z_Construct_UScriptStruct_FRTSOrderTypeWithIndex_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTSOrderTypeWithIndex_Statics::PropPointers),
	sizeof(FRTSOrderTypeWithIndex),
	alignof(FRTSOrderTypeWithIndex),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTSOrderTypeWithIndex_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRTSOrderTypeWithIndex_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRTSOrderTypeWithIndex()
{
	if (!Z_Registration_Info_UScriptStruct_RTSOrderTypeWithIndex.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RTSOrderTypeWithIndex.InnerSingleton, Z_Construct_UScriptStruct_FRTSOrderTypeWithIndex_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RTSOrderTypeWithIndex.InnerSingleton;
}
// End ScriptStruct FRTSOrderTypeWithIndex

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderTypeWithIndex_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRTSOrderTypeWithIndex::StaticStruct, Z_Construct_UScriptStruct_FRTSOrderTypeWithIndex_Statics::NewStructOps, TEXT("RTSOrderTypeWithIndex"), &Z_Registration_Info_UScriptStruct_RTSOrderTypeWithIndex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRTSOrderTypeWithIndex), 305801775U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderTypeWithIndex_h_1376364955(TEXT("/Script/ColonyOrders"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderTypeWithIndex_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderTypeWithIndex_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
