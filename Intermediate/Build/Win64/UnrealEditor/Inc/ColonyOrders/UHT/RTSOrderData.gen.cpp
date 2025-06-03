// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ColonyOrders/Public/Orders/RTSOrderData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSOrderData() {}

// Begin Cross Module References
COLONYORDERS_API UClass* Z_Construct_UClass_URTSOrder_NoRegister();
COLONYORDERS_API UScriptStruct* Z_Construct_UScriptStruct_FRTSOrderData();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_ColonyOrders();
// End Cross Module References

// Begin ScriptStruct FRTSOrderData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RTSOrderData;
class UScriptStruct* FRTSOrderData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RTSOrderData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RTSOrderData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRTSOrderData, (UObject*)Z_Construct_UPackage__Script_ColonyOrders(), TEXT("RTSOrderData"));
	}
	return Z_Registration_Info_UScriptStruct_RTSOrderData.OuterSingleton;
}
template<> COLONYORDERS_API UScriptStruct* StaticStruct<FRTSOrderData>()
{
	return FRTSOrderData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRTSOrderData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * An order that can be issued to units and buildings.\n */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An order that can be issued to units and buildings." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderType_MetaData[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Type of this order. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of this order." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLocation_MetaData[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Indicates that 'Location' is valid and should be used by this order. */" },
#endif
		{ "InlineEditConditionToggle", "TRUE" },
		{ "ModuleRelativePath", "Public/Orders/RTSOrderData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates that 'Location' is valid and should be used by this order." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Target location of the order. Use 'bUseLocation' to check if this location is really set and should be used.\n     */" },
#endif
		{ "EditCondition", "bUseLocation" },
		{ "ModuleRelativePath", "Public/Orders/RTSOrderData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Target location of the order. Use 'bUseLocation' to check if this location is really set and should be used." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Target actor for this order. 'Null' if no order has been specified. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Target actor for this order. 'Null' if no order has been specified." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Additional index. This is needed for certain orders to differentiate. Default '-1'. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional index. This is needed for certain orders to differentiate. Default '-1'." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_OrderType;
	static void NewProp_bUseLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRTSOrderData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FRTSOrderData_Statics::NewProp_OrderType = { "OrderType", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRTSOrderData, OrderType), Z_Construct_UClass_URTSOrder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderType_MetaData), NewProp_OrderType_MetaData) };
void Z_Construct_UScriptStruct_FRTSOrderData_Statics::NewProp_bUseLocation_SetBit(void* Obj)
{
	((FRTSOrderData*)Obj)->bUseLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRTSOrderData_Statics::NewProp_bUseLocation = { "bUseLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FRTSOrderData), &Z_Construct_UScriptStruct_FRTSOrderData_Statics::NewProp_bUseLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLocation_MetaData), NewProp_bUseLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRTSOrderData_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRTSOrderData, Location), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRTSOrderData_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRTSOrderData, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRTSOrderData_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRTSOrderData, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRTSOrderData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTSOrderData_Statics::NewProp_OrderType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTSOrderData_Statics::NewProp_bUseLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTSOrderData_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTSOrderData_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTSOrderData_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTSOrderData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRTSOrderData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ColonyOrders,
	nullptr,
	&NewStructOps,
	"RTSOrderData",
	Z_Construct_UScriptStruct_FRTSOrderData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTSOrderData_Statics::PropPointers),
	sizeof(FRTSOrderData),
	alignof(FRTSOrderData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTSOrderData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRTSOrderData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRTSOrderData()
{
	if (!Z_Registration_Info_UScriptStruct_RTSOrderData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RTSOrderData.InnerSingleton, Z_Construct_UScriptStruct_FRTSOrderData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RTSOrderData.InnerSingleton;
}
// End ScriptStruct FRTSOrderData

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRTSOrderData::StaticStruct, Z_Construct_UScriptStruct_FRTSOrderData_Statics::NewStructOps, TEXT("RTSOrderData"), &Z_Registration_Info_UScriptStruct_RTSOrderData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRTSOrderData), 1083319845U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderData_h_2197872371(TEXT("/Script/ColonyOrders"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
