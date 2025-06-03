// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ColonyOrders/Public/Orders/RTSOrderHelper.h"
#include "ColonyOrders/Public/Orders/RTSOrderData.h"
#include "ColonyOrders/Public/Orders/RTSOrderErrorTags.h"
#include "ColonyOrders/Public/Orders/RTSOrderPreviewData.h"
#include "ColonyOrders/Public/Orders/RTSOrderTagRequirements.h"
#include "ColonyOrders/Public/Orders/RTSOrderTargetData.h"
#include "ColonyOrders/Public/Orders/RTSOrderTypeWithIndex.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSOrderHelper() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
COLONYORDERS_API UClass* Z_Construct_UClass_URTSOrder_NoRegister();
COLONYORDERS_API UClass* Z_Construct_UClass_URTSOrderHelper();
COLONYORDERS_API UClass* Z_Construct_UClass_URTSOrderHelper_NoRegister();
COLONYORDERS_API UClass* Z_Construct_UClass_URTSOrderWithBehavior_NoRegister();
COLONYORDERS_API UEnum* Z_Construct_UEnum_ColonyOrders_ERTSOrderGroupExecutionType();
COLONYORDERS_API UEnum* Z_Construct_UEnum_ColonyOrders_ERTSOrderProcessPolicy();
COLONYORDERS_API UEnum* Z_Construct_UEnum_ColonyOrders_ERTSTargetType();
COLONYORDERS_API UScriptStruct* Z_Construct_UScriptStruct_FRTSOrderData();
COLONYORDERS_API UScriptStruct* Z_Construct_UScriptStruct_FRTSOrderErrorTags();
COLONYORDERS_API UScriptStruct* Z_Construct_UScriptStruct_FRTSOrderPreviewData();
COLONYORDERS_API UScriptStruct* Z_Construct_UScriptStruct_FRTSOrderTagRequirements();
COLONYORDERS_API UScriptStruct* Z_Construct_UScriptStruct_FRTSOrderTargetData();
COLONYORDERS_API UScriptStruct* Z_Construct_UScriptStruct_FRTSOrderTypeWithIndex();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_ColonyOrders();
// End Cross Module References

// Begin Class URTSOrderHelper Function AreAutoOrdersAllowedDuringOrder
struct Z_Construct_UFunction_URTSOrderHelper_AreAutoOrdersAllowedDuringOrder_Statics
{
	struct RTSOrderHelper_eventAreAutoOrdersAllowedDuringOrder_Parms
	{
		TSoftClassPtr<URTSOrder>  OrderType;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the specified order order allows auto orders when it is active. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the specified order order allows auto orders when it is active." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_OrderType;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_URTSOrderHelper_AreAutoOrdersAllowedDuringOrder_Statics::NewProp_OrderType = { "OrderType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventAreAutoOrdersAllowedDuringOrder_Parms, OrderType), Z_Construct_UClass_URTSOrder_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URTSOrderHelper_AreAutoOrdersAllowedDuringOrder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTSOrderHelper_eventAreAutoOrdersAllowedDuringOrder_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTSOrderHelper_AreAutoOrdersAllowedDuringOrder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTSOrderHelper_eventAreAutoOrdersAllowedDuringOrder_Parms), &Z_Construct_UFunction_URTSOrderHelper_AreAutoOrdersAllowedDuringOrder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderHelper_AreAutoOrdersAllowedDuringOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_AreAutoOrdersAllowedDuringOrder_Statics::NewProp_OrderType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_AreAutoOrdersAllowedDuringOrder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_AreAutoOrdersAllowedDuringOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderHelper_AreAutoOrdersAllowedDuringOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderHelper, nullptr, "AreAutoOrdersAllowedDuringOrder", nullptr, nullptr, Z_Construct_UFunction_URTSOrderHelper_AreAutoOrdersAllowedDuringOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_AreAutoOrdersAllowedDuringOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderHelper_AreAutoOrdersAllowedDuringOrder_Statics::RTSOrderHelper_eventAreAutoOrdersAllowedDuringOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_AreAutoOrdersAllowedDuringOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderHelper_AreAutoOrdersAllowedDuringOrder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderHelper_AreAutoOrdersAllowedDuringOrder_Statics::RTSOrderHelper_eventAreAutoOrdersAllowedDuringOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderHelper_AreAutoOrdersAllowedDuringOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderHelper_AreAutoOrdersAllowedDuringOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderHelper::execAreAutoOrdersAllowedDuringOrder)
{
	P_GET_SOFTCLASS(TSoftClassPtr<URTSOrder> ,Z_Param_OrderType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URTSOrderHelper::AreAutoOrdersAllowedDuringOrder(Z_Param_OrderType);
	P_NATIVE_END;
}
// End Class URTSOrderHelper Function AreAutoOrdersAllowedDuringOrder

// Begin Class URTSOrderHelper Function CanObeyOrder
struct Z_Construct_UFunction_URTSOrderHelper_CanObeyOrder_Statics
{
	struct RTSOrderHelper_eventCanObeyOrder_Parms
	{
		TSoftClassPtr<URTSOrder>  OrderType;
		const AActor* OrderedActor;
		int32 Index;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the specified actor can obey this kind of order. */" },
#endif
		{ "CPP_Default_Index", "-1" },
		{ "ModuleRelativePath", "Public/Orders/RTSOrderHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the specified actor can obey this kind of order." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderedActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_OrderType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrderedActor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_URTSOrderHelper_CanObeyOrder_Statics::NewProp_OrderType = { "OrderType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventCanObeyOrder_Parms, OrderType), Z_Construct_UClass_URTSOrder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderHelper_CanObeyOrder_Statics::NewProp_OrderedActor = { "OrderedActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventCanObeyOrder_Parms, OrderedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderedActor_MetaData), NewProp_OrderedActor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSOrderHelper_CanObeyOrder_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventCanObeyOrder_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URTSOrderHelper_CanObeyOrder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTSOrderHelper_eventCanObeyOrder_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTSOrderHelper_CanObeyOrder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTSOrderHelper_eventCanObeyOrder_Parms), &Z_Construct_UFunction_URTSOrderHelper_CanObeyOrder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderHelper_CanObeyOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_CanObeyOrder_Statics::NewProp_OrderType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_CanObeyOrder_Statics::NewProp_OrderedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_CanObeyOrder_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_CanObeyOrder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_CanObeyOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderHelper_CanObeyOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderHelper, nullptr, "CanObeyOrder", nullptr, nullptr, Z_Construct_UFunction_URTSOrderHelper_CanObeyOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_CanObeyOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderHelper_CanObeyOrder_Statics::RTSOrderHelper_eventCanObeyOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_CanObeyOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderHelper_CanObeyOrder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderHelper_CanObeyOrder_Statics::RTSOrderHelper_eventCanObeyOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderHelper_CanObeyOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderHelper_CanObeyOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderHelper::execCanObeyOrder)
{
	P_GET_SOFTCLASS(TSoftClassPtr<URTSOrder> ,Z_Param_OrderType);
	P_GET_OBJECT(AActor,Z_Param_OrderedActor);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URTSOrderHelper::CanObeyOrder(Z_Param_OrderType,Z_Param_OrderedActor,Z_Param_Index);
	P_NATIVE_END;
}
// End Class URTSOrderHelper Function CanObeyOrder

// Begin Class URTSOrderHelper Function CanOrderBeConsideredAsSucceeded
struct Z_Construct_UFunction_URTSOrderHelper_CanOrderBeConsideredAsSucceeded_Statics
{
	struct RTSOrderHelper_eventCanOrderBeConsideredAsSucceeded_Parms
	{
		TSoftClassPtr<URTSOrder>  OrderType;
		const AActor* OrderedActor;
		FRTSOrderTargetData TargetData;
		int32 Index;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Whether the specified order can be considered as succeeded in regard to the specified ordered actor and order\n     * target.\n     */" },
#endif
		{ "CPP_Default_Index", "-1" },
		{ "ModuleRelativePath", "Public/Orders/RTSOrderHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the specified order can be considered as succeeded in regard to the specified ordered actor and order\ntarget." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderedActor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_OrderType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrderedActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_URTSOrderHelper_CanOrderBeConsideredAsSucceeded_Statics::NewProp_OrderType = { "OrderType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventCanOrderBeConsideredAsSucceeded_Parms, OrderType), Z_Construct_UClass_URTSOrder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderHelper_CanOrderBeConsideredAsSucceeded_Statics::NewProp_OrderedActor = { "OrderedActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventCanOrderBeConsideredAsSucceeded_Parms, OrderedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderedActor_MetaData), NewProp_OrderedActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSOrderHelper_CanOrderBeConsideredAsSucceeded_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventCanOrderBeConsideredAsSucceeded_Parms, TargetData), Z_Construct_UScriptStruct_FRTSOrderTargetData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetData_MetaData), NewProp_TargetData_MetaData) }; // 2315840092
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSOrderHelper_CanOrderBeConsideredAsSucceeded_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventCanOrderBeConsideredAsSucceeded_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URTSOrderHelper_CanOrderBeConsideredAsSucceeded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTSOrderHelper_eventCanOrderBeConsideredAsSucceeded_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTSOrderHelper_CanOrderBeConsideredAsSucceeded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTSOrderHelper_eventCanOrderBeConsideredAsSucceeded_Parms), &Z_Construct_UFunction_URTSOrderHelper_CanOrderBeConsideredAsSucceeded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderHelper_CanOrderBeConsideredAsSucceeded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_CanOrderBeConsideredAsSucceeded_Statics::NewProp_OrderType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_CanOrderBeConsideredAsSucceeded_Statics::NewProp_OrderedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_CanOrderBeConsideredAsSucceeded_Statics::NewProp_TargetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_CanOrderBeConsideredAsSucceeded_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_CanOrderBeConsideredAsSucceeded_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_CanOrderBeConsideredAsSucceeded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderHelper_CanOrderBeConsideredAsSucceeded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderHelper, nullptr, "CanOrderBeConsideredAsSucceeded", nullptr, nullptr, Z_Construct_UFunction_URTSOrderHelper_CanOrderBeConsideredAsSucceeded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_CanOrderBeConsideredAsSucceeded_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderHelper_CanOrderBeConsideredAsSucceeded_Statics::RTSOrderHelper_eventCanOrderBeConsideredAsSucceeded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_CanOrderBeConsideredAsSucceeded_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderHelper_CanOrderBeConsideredAsSucceeded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderHelper_CanOrderBeConsideredAsSucceeded_Statics::RTSOrderHelper_eventCanOrderBeConsideredAsSucceeded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderHelper_CanOrderBeConsideredAsSucceeded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderHelper_CanOrderBeConsideredAsSucceeded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderHelper::execCanOrderBeConsideredAsSucceeded)
{
	P_GET_SOFTCLASS(TSoftClassPtr<URTSOrder> ,Z_Param_OrderType);
	P_GET_OBJECT(AActor,Z_Param_OrderedActor);
	P_GET_STRUCT_REF(FRTSOrderTargetData,Z_Param_Out_TargetData);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URTSOrderHelper::CanOrderBeConsideredAsSucceeded(Z_Param_OrderType,Z_Param_OrderedActor,Z_Param_Out_TargetData,Z_Param_Index);
	P_NATIVE_END;
}
// End Class URTSOrderHelper Function CanOrderBeConsideredAsSucceeded

// Begin Class URTSOrderHelper Function CheckOrder
struct Z_Construct_UFunction_URTSOrderHelper_CheckOrder_Statics
{
	struct RTSOrderHelper_eventCheckOrder_Parms
	{
		AActor* OrderedActor;
		FRTSOrderData Order;
		FRTSOrderErrorTags ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Checks whether the specified actor can apply the passed order to its target. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks whether the specified actor can apply the passed order to its target." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Order_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrderedActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Order;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderHelper_CheckOrder_Statics::NewProp_OrderedActor = { "OrderedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventCheckOrder_Parms, OrderedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSOrderHelper_CheckOrder_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventCheckOrder_Parms, Order), Z_Construct_UScriptStruct_FRTSOrderData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Order_MetaData), NewProp_Order_MetaData) }; // 1083319845
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSOrderHelper_CheckOrder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventCheckOrder_Parms, ReturnValue), Z_Construct_UScriptStruct_FRTSOrderErrorTags, METADATA_PARAMS(0, nullptr) }; // 2904688719
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderHelper_CheckOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_CheckOrder_Statics::NewProp_OrderedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_CheckOrder_Statics::NewProp_Order,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_CheckOrder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_CheckOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderHelper_CheckOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderHelper, nullptr, "CheckOrder", nullptr, nullptr, Z_Construct_UFunction_URTSOrderHelper_CheckOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_CheckOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderHelper_CheckOrder_Statics::RTSOrderHelper_eventCheckOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_CheckOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderHelper_CheckOrder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderHelper_CheckOrder_Statics::RTSOrderHelper_eventCheckOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderHelper_CheckOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderHelper_CheckOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderHelper::execCheckOrder)
{
	P_GET_OBJECT(AActor,Z_Param_OrderedActor);
	P_GET_STRUCT_REF(FRTSOrderData,Z_Param_Out_Order);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRTSOrderErrorTags*)Z_Param__Result=URTSOrderHelper::CheckOrder(Z_Param_OrderedActor,Z_Param_Out_Order);
	P_NATIVE_END;
}
// End Class URTSOrderHelper Function CheckOrder

// Begin Class URTSOrderHelper Function ClearOrderQueue
struct Z_Construct_UFunction_URTSOrderHelper_ClearOrderQueue_Statics
{
	struct RTSOrderHelper_eventClearOrderQueue_Parms
	{
		AActor* OrderedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Clears the order of the specified actor. Should probably only be used if queuing orders immediately after. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears the order of the specified actor. Should probably only be used if queuing orders immediately after." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrderedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderHelper_ClearOrderQueue_Statics::NewProp_OrderedActor = { "OrderedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventClearOrderQueue_Parms, OrderedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderHelper_ClearOrderQueue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_ClearOrderQueue_Statics::NewProp_OrderedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_ClearOrderQueue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderHelper_ClearOrderQueue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderHelper, nullptr, "ClearOrderQueue", nullptr, nullptr, Z_Construct_UFunction_URTSOrderHelper_ClearOrderQueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_ClearOrderQueue_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderHelper_ClearOrderQueue_Statics::RTSOrderHelper_eventClearOrderQueue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_ClearOrderQueue_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderHelper_ClearOrderQueue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderHelper_ClearOrderQueue_Statics::RTSOrderHelper_eventClearOrderQueue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderHelper_ClearOrderQueue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderHelper_ClearOrderQueue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderHelper::execClearOrderQueue)
{
	P_GET_OBJECT(AActor,Z_Param_OrderedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	URTSOrderHelper::ClearOrderQueue(Z_Param_OrderedActor);
	P_NATIVE_END;
}
// End Class URTSOrderHelper Function ClearOrderQueue

// Begin Class URTSOrderHelper Function CreateIndividualTargetLocations
struct Z_Construct_UFunction_URTSOrderHelper_CreateIndividualTargetLocations_Statics
{
	struct RTSOrderHelper_eventCreateIndividualTargetLocations_Parms
	{
		TSoftClassPtr<URTSOrder>  OrderType;
		TArray<AActor*> OrderedActors;
		FRTSOrderTargetData TargetData;
		TArray<FVector2D> OutTargetLocations;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Creates individual target locations for the group of actors. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates individual target locations for the group of actors." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderedActors_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_OrderType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrderedActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OrderedActors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTargetLocations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutTargetLocations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_URTSOrderHelper_CreateIndividualTargetLocations_Statics::NewProp_OrderType = { "OrderType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventCreateIndividualTargetLocations_Parms, OrderType), Z_Construct_UClass_URTSOrder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderHelper_CreateIndividualTargetLocations_Statics::NewProp_OrderedActors_Inner = { "OrderedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URTSOrderHelper_CreateIndividualTargetLocations_Statics::NewProp_OrderedActors = { "OrderedActors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventCreateIndividualTargetLocations_Parms, OrderedActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderedActors_MetaData), NewProp_OrderedActors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSOrderHelper_CreateIndividualTargetLocations_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventCreateIndividualTargetLocations_Parms, TargetData), Z_Construct_UScriptStruct_FRTSOrderTargetData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetData_MetaData), NewProp_TargetData_MetaData) }; // 2315840092
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSOrderHelper_CreateIndividualTargetLocations_Statics::NewProp_OutTargetLocations_Inner = { "OutTargetLocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URTSOrderHelper_CreateIndividualTargetLocations_Statics::NewProp_OutTargetLocations = { "OutTargetLocations", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventCreateIndividualTargetLocations_Parms, OutTargetLocations), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderHelper_CreateIndividualTargetLocations_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_CreateIndividualTargetLocations_Statics::NewProp_OrderType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_CreateIndividualTargetLocations_Statics::NewProp_OrderedActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_CreateIndividualTargetLocations_Statics::NewProp_OrderedActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_CreateIndividualTargetLocations_Statics::NewProp_TargetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_CreateIndividualTargetLocations_Statics::NewProp_OutTargetLocations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_CreateIndividualTargetLocations_Statics::NewProp_OutTargetLocations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_CreateIndividualTargetLocations_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderHelper_CreateIndividualTargetLocations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderHelper, nullptr, "CreateIndividualTargetLocations", nullptr, nullptr, Z_Construct_UFunction_URTSOrderHelper_CreateIndividualTargetLocations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_CreateIndividualTargetLocations_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderHelper_CreateIndividualTargetLocations_Statics::RTSOrderHelper_eventCreateIndividualTargetLocations_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_CreateIndividualTargetLocations_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderHelper_CreateIndividualTargetLocations_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderHelper_CreateIndividualTargetLocations_Statics::RTSOrderHelper_eventCreateIndividualTargetLocations_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderHelper_CreateIndividualTargetLocations()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderHelper_CreateIndividualTargetLocations_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderHelper::execCreateIndividualTargetLocations)
{
	P_GET_SOFTCLASS(TSoftClassPtr<URTSOrder> ,Z_Param_OrderType);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_OrderedActors);
	P_GET_STRUCT_REF(FRTSOrderTargetData,Z_Param_Out_TargetData);
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_OutTargetLocations);
	P_FINISH;
	P_NATIVE_BEGIN;
	URTSOrderHelper::CreateIndividualTargetLocations(Z_Param_OrderType,Z_Param_Out_OrderedActors,Z_Param_Out_TargetData,Z_Param_Out_OutTargetLocations);
	P_NATIVE_END;
}
// End Class URTSOrderHelper Function CreateIndividualTargetLocations

// Begin Class URTSOrderHelper Function CreateOrderTargetData
struct Z_Construct_UFunction_URTSOrderHelper_CreateOrderTargetData_Statics
{
	struct RTSOrderHelper_eventCreateOrderTargetData_Parms
	{
		const AActor* OrderedActor;
		AActor* TargetActor;
		FVector2D TargetLocation;
		FRTSOrderTargetData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Creates order target data using the specified target actor. */" },
#endif
		{ "CPP_Default_TargetLocation", "" },
		{ "ModuleRelativePath", "Public/Orders/RTSOrderHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates order target data using the specified target actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderedActor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrderedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderHelper_CreateOrderTargetData_Statics::NewProp_OrderedActor = { "OrderedActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventCreateOrderTargetData_Parms, OrderedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderedActor_MetaData), NewProp_OrderedActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderHelper_CreateOrderTargetData_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventCreateOrderTargetData_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSOrderHelper_CreateOrderTargetData_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventCreateOrderTargetData_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLocation_MetaData), NewProp_TargetLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSOrderHelper_CreateOrderTargetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventCreateOrderTargetData_Parms, ReturnValue), Z_Construct_UScriptStruct_FRTSOrderTargetData, METADATA_PARAMS(0, nullptr) }; // 2315840092
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderHelper_CreateOrderTargetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_CreateOrderTargetData_Statics::NewProp_OrderedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_CreateOrderTargetData_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_CreateOrderTargetData_Statics::NewProp_TargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_CreateOrderTargetData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_CreateOrderTargetData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderHelper_CreateOrderTargetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderHelper, nullptr, "CreateOrderTargetData", nullptr, nullptr, Z_Construct_UFunction_URTSOrderHelper_CreateOrderTargetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_CreateOrderTargetData_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderHelper_CreateOrderTargetData_Statics::RTSOrderHelper_eventCreateOrderTargetData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_CreateOrderTargetData_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderHelper_CreateOrderTargetData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderHelper_CreateOrderTargetData_Statics::RTSOrderHelper_eventCreateOrderTargetData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderHelper_CreateOrderTargetData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderHelper_CreateOrderTargetData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderHelper::execCreateOrderTargetData)
{
	P_GET_OBJECT(AActor,Z_Param_OrderedActor);
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_TargetLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRTSOrderTargetData*)Z_Param__Result=URTSOrderHelper::CreateOrderTargetData(Z_Param_OrderedActor,Z_Param_TargetActor,Z_Param_Out_TargetLocation);
	P_NATIVE_END;
}
// End Class URTSOrderHelper Function CreateOrderTargetData

// Begin Class URTSOrderHelper Function EnqueueOrder
struct Z_Construct_UFunction_URTSOrderHelper_EnqueueOrder_Statics
{
	struct RTSOrderHelper_eventEnqueueOrder_Parms
	{
		AActor* OrderedActor;
		FRTSOrderData Order;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enqueues an order that will be issued to the specified actor if all its other orders has succeeded. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enqueues an order that will be issued to the specified actor if all its other orders has succeeded." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Order_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrderedActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Order;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderHelper_EnqueueOrder_Statics::NewProp_OrderedActor = { "OrderedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventEnqueueOrder_Parms, OrderedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSOrderHelper_EnqueueOrder_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventEnqueueOrder_Parms, Order), Z_Construct_UScriptStruct_FRTSOrderData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Order_MetaData), NewProp_Order_MetaData) }; // 1083319845
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderHelper_EnqueueOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_EnqueueOrder_Statics::NewProp_OrderedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_EnqueueOrder_Statics::NewProp_Order,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_EnqueueOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderHelper_EnqueueOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderHelper, nullptr, "EnqueueOrder", nullptr, nullptr, Z_Construct_UFunction_URTSOrderHelper_EnqueueOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_EnqueueOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderHelper_EnqueueOrder_Statics::RTSOrderHelper_eventEnqueueOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_EnqueueOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderHelper_EnqueueOrder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderHelper_EnqueueOrder_Statics::RTSOrderHelper_eventEnqueueOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderHelper_EnqueueOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderHelper_EnqueueOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderHelper::execEnqueueOrder)
{
	P_GET_OBJECT(AActor,Z_Param_OrderedActor);
	P_GET_STRUCT_REF(FRTSOrderData,Z_Param_Out_Order);
	P_FINISH;
	P_NATIVE_BEGIN;
	URTSOrderHelper::EnqueueOrder(Z_Param_OrderedActor,Z_Param_Out_Order);
	P_NATIVE_END;
}
// End Class URTSOrderHelper Function EnqueueOrder

// Begin Class URTSOrderHelper Function FindTargetForOrder
struct Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrder_Statics
{
	struct RTSOrderHelper_eventFindTargetForOrder_Parms
	{
		TSoftClassPtr<URTSOrder>  OrderType;
		const AActor* OrderedActor;
		int32 Index;
		float AcquisitionRadius;
		float OutScore;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Finds the best matching target for the specified order inside the specified acquisition radius.\n     * @param OrderType                 The order type.\n     * @param OrderedActor              The ordered actor\n     * @param Index                     Order index. This is needed for certain orders to differentiate. Default '-1'.\n     * @param AcquisitionRadius         Max distance from the ordered actor to a potential target.\n     * @param OutScore                  Score of the returned target if a target was found.\n     * @return                          The target or 'nullptr' if no target was found.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds the best matching target for the specified order inside the specified acquisition radius.\n@param OrderType                 The order type.\n@param OrderedActor              The ordered actor\n@param Index                     Order index. This is needed for certain orders to differentiate. Default '-1'.\n@param AcquisitionRadius         Max distance from the ordered actor to a potential target.\n@param OutScore                  Score of the returned target if a target was found.\n@return                          The target or 'nullptr' if no target was found." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderedActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_OrderType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrderedActor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AcquisitionRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutScore;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrder_Statics::NewProp_OrderType = { "OrderType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventFindTargetForOrder_Parms, OrderType), Z_Construct_UClass_URTSOrder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrder_Statics::NewProp_OrderedActor = { "OrderedActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventFindTargetForOrder_Parms, OrderedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderedActor_MetaData), NewProp_OrderedActor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrder_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventFindTargetForOrder_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrder_Statics::NewProp_AcquisitionRadius = { "AcquisitionRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventFindTargetForOrder_Parms, AcquisitionRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrder_Statics::NewProp_OutScore = { "OutScore", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventFindTargetForOrder_Parms, OutScore), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventFindTargetForOrder_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrder_Statics::NewProp_OrderType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrder_Statics::NewProp_OrderedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrder_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrder_Statics::NewProp_AcquisitionRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrder_Statics::NewProp_OutScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderHelper, nullptr, "FindTargetForOrder", nullptr, nullptr, Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrder_Statics::RTSOrderHelper_eventFindTargetForOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrder_Statics::RTSOrderHelper_eventFindTargetForOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderHelper::execFindTargetForOrder)
{
	P_GET_SOFTCLASS(TSoftClassPtr<URTSOrder> ,Z_Param_OrderType);
	P_GET_OBJECT(AActor,Z_Param_OrderedActor);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AcquisitionRadius);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutScore);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=URTSOrderHelper::FindTargetForOrder(Z_Param_OrderType,Z_Param_OrderedActor,Z_Param_Index,Z_Param_AcquisitionRadius,Z_Param_Out_OutScore);
	P_NATIVE_END;
}
// End Class URTSOrderHelper Function FindTargetForOrder

// Begin Class URTSOrderHelper Function FindTargetForOrderInChaseDistance
struct Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrderInChaseDistance_Statics
{
	struct RTSOrderHelper_eventFindTargetForOrderInChaseDistance_Parms
	{
		TSoftClassPtr<URTSOrder>  OrderType;
		const AActor* OrderedActor;
		int32 Index;
		float AcquisitionRadius;
		float ChaseDistance;
		FVector OrderedActorHomeLocation;
		float OutScore;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Finds the best matching target for the specified order inside the specified acquisition radius and inside the\n     * specified chase distance.\n     * @param OrderType                 The order type.\n     * @param OrderedActor              The ordered actor\n     * @param Index                     Order index. This is needed for certain orders to differentiate. Default '-1'.\n     * @param AcquisitionRadius         Max distance from the ordered actor to a potential target.\n     * @param ChaseDistance             Max distance from the 'OrderedActorHomeLocation' to a potential target.\n     * @param OrderedActorHomeLocation  Home location of the 'OrderedActor'. Used in conjunction with 'ChaseDistance'\n     * @param OutScore                  Score of the returned target if a target was found.\n     * @return                          The target or 'nullptr' if no target was found.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds the best matching target for the specified order inside the specified acquisition radius and inside the\nspecified chase distance.\n@param OrderType                 The order type.\n@param OrderedActor              The ordered actor\n@param Index                     Order index. This is needed for certain orders to differentiate. Default '-1'.\n@param AcquisitionRadius         Max distance from the ordered actor to a potential target.\n@param ChaseDistance             Max distance from the 'OrderedActorHomeLocation' to a potential target.\n@param OrderedActorHomeLocation  Home location of the 'OrderedActor'. Used in conjunction with 'ChaseDistance'\n@param OutScore                  Score of the returned target if a target was found.\n@return                          The target or 'nullptr' if no target was found." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderedActor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderedActorHomeLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_OrderType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrderedActor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AcquisitionRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChaseDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OrderedActorHomeLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutScore;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrderInChaseDistance_Statics::NewProp_OrderType = { "OrderType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventFindTargetForOrderInChaseDistance_Parms, OrderType), Z_Construct_UClass_URTSOrder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrderInChaseDistance_Statics::NewProp_OrderedActor = { "OrderedActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventFindTargetForOrderInChaseDistance_Parms, OrderedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderedActor_MetaData), NewProp_OrderedActor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrderInChaseDistance_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventFindTargetForOrderInChaseDistance_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrderInChaseDistance_Statics::NewProp_AcquisitionRadius = { "AcquisitionRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventFindTargetForOrderInChaseDistance_Parms, AcquisitionRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrderInChaseDistance_Statics::NewProp_ChaseDistance = { "ChaseDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventFindTargetForOrderInChaseDistance_Parms, ChaseDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrderInChaseDistance_Statics::NewProp_OrderedActorHomeLocation = { "OrderedActorHomeLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventFindTargetForOrderInChaseDistance_Parms, OrderedActorHomeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderedActorHomeLocation_MetaData), NewProp_OrderedActorHomeLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrderInChaseDistance_Statics::NewProp_OutScore = { "OutScore", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventFindTargetForOrderInChaseDistance_Parms, OutScore), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrderInChaseDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventFindTargetForOrderInChaseDistance_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrderInChaseDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrderInChaseDistance_Statics::NewProp_OrderType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrderInChaseDistance_Statics::NewProp_OrderedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrderInChaseDistance_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrderInChaseDistance_Statics::NewProp_AcquisitionRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrderInChaseDistance_Statics::NewProp_ChaseDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrderInChaseDistance_Statics::NewProp_OrderedActorHomeLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrderInChaseDistance_Statics::NewProp_OutScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrderInChaseDistance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrderInChaseDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrderInChaseDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderHelper, nullptr, "FindTargetForOrderInChaseDistance", nullptr, nullptr, Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrderInChaseDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrderInChaseDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrderInChaseDistance_Statics::RTSOrderHelper_eventFindTargetForOrderInChaseDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrderInChaseDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrderInChaseDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrderInChaseDistance_Statics::RTSOrderHelper_eventFindTargetForOrderInChaseDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrderInChaseDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrderInChaseDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderHelper::execFindTargetForOrderInChaseDistance)
{
	P_GET_SOFTCLASS(TSoftClassPtr<URTSOrder> ,Z_Param_OrderType);
	P_GET_OBJECT(AActor,Z_Param_OrderedActor);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AcquisitionRadius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ChaseDistance);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OrderedActorHomeLocation);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutScore);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=URTSOrderHelper::FindTargetForOrderInChaseDistance(Z_Param_OrderType,Z_Param_OrderedActor,Z_Param_Index,Z_Param_AcquisitionRadius,Z_Param_ChaseDistance,Z_Param_Out_OrderedActorHomeLocation,Z_Param_Out_OutScore);
	P_NATIVE_END;
}
// End Class URTSOrderHelper Function FindTargetForOrderInChaseDistance

// Begin Class URTSOrderHelper Function GetAcquisitionRadiusOverride
struct Z_Construct_UFunction_URTSOrderHelper_GetAcquisitionRadiusOverride_Statics
{
	struct RTSOrderHelper_eventGetAcquisitionRadiusOverride_Parms
	{
		TSoftClassPtr<URTSOrder>  OrderType;
		const AActor* OrderedActor;
		int32 Index;
		float OutAcquisitionRadius;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Gets the specified order specific acquisition radius for this order and returns whether the specified order uses\n     * a specific acquisition radius.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the specified order specific acquisition radius for this order and returns whether the specified order uses\na specific acquisition radius." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderedActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_OrderType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrderedActor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutAcquisitionRadius;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetAcquisitionRadiusOverride_Statics::NewProp_OrderType = { "OrderType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetAcquisitionRadiusOverride_Parms, OrderType), Z_Construct_UClass_URTSOrder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetAcquisitionRadiusOverride_Statics::NewProp_OrderedActor = { "OrderedActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetAcquisitionRadiusOverride_Parms, OrderedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderedActor_MetaData), NewProp_OrderedActor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetAcquisitionRadiusOverride_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetAcquisitionRadiusOverride_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetAcquisitionRadiusOverride_Statics::NewProp_OutAcquisitionRadius = { "OutAcquisitionRadius", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetAcquisitionRadiusOverride_Parms, OutAcquisitionRadius), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URTSOrderHelper_GetAcquisitionRadiusOverride_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTSOrderHelper_eventGetAcquisitionRadiusOverride_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetAcquisitionRadiusOverride_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTSOrderHelper_eventGetAcquisitionRadiusOverride_Parms), &Z_Construct_UFunction_URTSOrderHelper_GetAcquisitionRadiusOverride_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderHelper_GetAcquisitionRadiusOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetAcquisitionRadiusOverride_Statics::NewProp_OrderType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetAcquisitionRadiusOverride_Statics::NewProp_OrderedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetAcquisitionRadiusOverride_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetAcquisitionRadiusOverride_Statics::NewProp_OutAcquisitionRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetAcquisitionRadiusOverride_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetAcquisitionRadiusOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderHelper_GetAcquisitionRadiusOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderHelper, nullptr, "GetAcquisitionRadiusOverride", nullptr, nullptr, Z_Construct_UFunction_URTSOrderHelper_GetAcquisitionRadiusOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetAcquisitionRadiusOverride_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderHelper_GetAcquisitionRadiusOverride_Statics::RTSOrderHelper_eventGetAcquisitionRadiusOverride_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetAcquisitionRadiusOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderHelper_GetAcquisitionRadiusOverride_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderHelper_GetAcquisitionRadiusOverride_Statics::RTSOrderHelper_eventGetAcquisitionRadiusOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderHelper_GetAcquisitionRadiusOverride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderHelper_GetAcquisitionRadiusOverride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderHelper::execGetAcquisitionRadiusOverride)
{
	P_GET_SOFTCLASS(TSoftClassPtr<URTSOrder> ,Z_Param_OrderType);
	P_GET_OBJECT(AActor,Z_Param_OrderedActor);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutAcquisitionRadius);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URTSOrderHelper::GetAcquisitionRadiusOverride(Z_Param_OrderType,Z_Param_OrderedActor,Z_Param_Index,Z_Param_Out_OutAcquisitionRadius);
	P_NATIVE_END;
}
// End Class URTSOrderHelper Function GetAcquisitionRadiusOverride

// Begin Class URTSOrderHelper Function GetBehaviorTree
struct Z_Construct_UFunction_URTSOrderHelper_GetBehaviorTree_Statics
{
	struct RTSOrderHelper_eventGetBehaviorTree_Parms
	{
		TSoftClassPtr<URTSOrderWithBehavior>  OrderType;
		UBehaviorTree* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the behavior tree that should run in order to obey this order. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the behavior tree that should run in order to obey this order." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_OrderType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetBehaviorTree_Statics::NewProp_OrderType = { "OrderType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetBehaviorTree_Parms, OrderType), Z_Construct_UClass_URTSOrderWithBehavior_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetBehaviorTree_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetBehaviorTree_Parms, ReturnValue), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderHelper_GetBehaviorTree_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetBehaviorTree_Statics::NewProp_OrderType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetBehaviorTree_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetBehaviorTree_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderHelper_GetBehaviorTree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderHelper, nullptr, "GetBehaviorTree", nullptr, nullptr, Z_Construct_UFunction_URTSOrderHelper_GetBehaviorTree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetBehaviorTree_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderHelper_GetBehaviorTree_Statics::RTSOrderHelper_eventGetBehaviorTree_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetBehaviorTree_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderHelper_GetBehaviorTree_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderHelper_GetBehaviorTree_Statics::RTSOrderHelper_eventGetBehaviorTree_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderHelper_GetBehaviorTree()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderHelper_GetBehaviorTree_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderHelper::execGetBehaviorTree)
{
	P_GET_SOFTCLASS(TSoftClassPtr<URTSOrderWithBehavior> ,Z_Param_OrderType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBehaviorTree**)Z_Param__Result=URTSOrderHelper::GetBehaviorTree(Z_Param_OrderType);
	P_NATIVE_END;
}
// End Class URTSOrderHelper Function GetBehaviorTree

// Begin Class URTSOrderHelper Function GetDescription
struct Z_Construct_UFunction_URTSOrderHelper_GetDescription_Statics
{
	struct RTSOrderHelper_eventGetDescription_Parms
	{
		TSoftClassPtr<URTSOrder>  OrderType;
		const AActor* OrderedActor;
		int32 Index;
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the name of the order. Can be shown in the UI. */" },
#endif
		{ "CPP_Default_Index", "-1" },
		{ "CPP_Default_OrderedActor", "None" },
		{ "ModuleRelativePath", "Public/Orders/RTSOrderHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the name of the order. Can be shown in the UI." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderedActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_OrderType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrderedActor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetDescription_Statics::NewProp_OrderType = { "OrderType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetDescription_Parms, OrderType), Z_Construct_UClass_URTSOrder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetDescription_Statics::NewProp_OrderedActor = { "OrderedActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetDescription_Parms, OrderedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderedActor_MetaData), NewProp_OrderedActor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetDescription_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetDescription_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetDescription_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderHelper_GetDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetDescription_Statics::NewProp_OrderType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetDescription_Statics::NewProp_OrderedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetDescription_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetDescription_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderHelper_GetDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderHelper, nullptr, "GetDescription", nullptr, nullptr, Z_Construct_UFunction_URTSOrderHelper_GetDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetDescription_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderHelper_GetDescription_Statics::RTSOrderHelper_eventGetDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderHelper_GetDescription_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderHelper_GetDescription_Statics::RTSOrderHelper_eventGetDescription_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderHelper_GetDescription()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderHelper_GetDescription_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderHelper::execGetDescription)
{
	P_GET_SOFTCLASS(TSoftClassPtr<URTSOrder> ,Z_Param_OrderType);
	P_GET_OBJECT(AActor,Z_Param_OrderedActor);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=URTSOrderHelper::GetDescription(Z_Param_OrderType,Z_Param_OrderedActor,Z_Param_Index);
	P_NATIVE_END;
}
// End Class URTSOrderHelper Function GetDescription

// Begin Class URTSOrderHelper Function GetDisabledIcon
struct Z_Construct_UFunction_URTSOrderHelper_GetDisabledIcon_Statics
{
	struct RTSOrderHelper_eventGetDisabledIcon_Parms
	{
		TSoftClassPtr<URTSOrder>  OrderType;
		const AActor* OrderedActor;
		int32 Index;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the disabled icon of the order. Can be shown in the UI. */" },
#endif
		{ "CPP_Default_Index", "-1" },
		{ "CPP_Default_OrderedActor", "None" },
		{ "ModuleRelativePath", "Public/Orders/RTSOrderHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the disabled icon of the order. Can be shown in the UI." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderedActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_OrderType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrderedActor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetDisabledIcon_Statics::NewProp_OrderType = { "OrderType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetDisabledIcon_Parms, OrderType), Z_Construct_UClass_URTSOrder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetDisabledIcon_Statics::NewProp_OrderedActor = { "OrderedActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetDisabledIcon_Parms, OrderedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderedActor_MetaData), NewProp_OrderedActor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetDisabledIcon_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetDisabledIcon_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetDisabledIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetDisabledIcon_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderHelper_GetDisabledIcon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetDisabledIcon_Statics::NewProp_OrderType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetDisabledIcon_Statics::NewProp_OrderedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetDisabledIcon_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetDisabledIcon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetDisabledIcon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderHelper_GetDisabledIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderHelper, nullptr, "GetDisabledIcon", nullptr, nullptr, Z_Construct_UFunction_URTSOrderHelper_GetDisabledIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetDisabledIcon_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderHelper_GetDisabledIcon_Statics::RTSOrderHelper_eventGetDisabledIcon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetDisabledIcon_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderHelper_GetDisabledIcon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderHelper_GetDisabledIcon_Statics::RTSOrderHelper_eventGetDisabledIcon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderHelper_GetDisabledIcon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderHelper_GetDisabledIcon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderHelper::execGetDisabledIcon)
{
	P_GET_SOFTCLASS(TSoftClassPtr<URTSOrder> ,Z_Param_OrderType);
	P_GET_OBJECT(AActor,Z_Param_OrderedActor);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=URTSOrderHelper::GetDisabledIcon(Z_Param_OrderType,Z_Param_OrderedActor,Z_Param_Index);
	P_NATIVE_END;
}
// End Class URTSOrderHelper Function GetDisabledIcon

// Begin Class URTSOrderHelper Function GetFallbackOrder
struct Z_Construct_UFunction_URTSOrderHelper_GetFallbackOrder_Statics
{
	struct RTSOrderHelper_eventGetFallbackOrder_Parms
	{
		TSoftClassPtr<URTSOrder>  OrderType;
		TSoftClassPtr<URTSOrder>  ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the order to issue instead if the player specified an invalid target for the specified one. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the order to issue instead if the player specified an invalid target for the specified one." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_OrderType;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetFallbackOrder_Statics::NewProp_OrderType = { "OrderType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetFallbackOrder_Parms, OrderType), Z_Construct_UClass_URTSOrder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetFallbackOrder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetFallbackOrder_Parms, ReturnValue), Z_Construct_UClass_URTSOrder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderHelper_GetFallbackOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetFallbackOrder_Statics::NewProp_OrderType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetFallbackOrder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetFallbackOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderHelper_GetFallbackOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderHelper, nullptr, "GetFallbackOrder", nullptr, nullptr, Z_Construct_UFunction_URTSOrderHelper_GetFallbackOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetFallbackOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderHelper_GetFallbackOrder_Statics::RTSOrderHelper_eventGetFallbackOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetFallbackOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderHelper_GetFallbackOrder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderHelper_GetFallbackOrder_Statics::RTSOrderHelper_eventGetFallbackOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderHelper_GetFallbackOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderHelper_GetFallbackOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderHelper::execGetFallbackOrder)
{
	P_GET_SOFTCLASS(TSoftClassPtr<URTSOrder> ,Z_Param_OrderType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSoftClassPtr<URTSOrder> *)Z_Param__Result=URTSOrderHelper::GetFallbackOrder(Z_Param_OrderType);
	P_NATIVE_END;
}
// End Class URTSOrderHelper Function GetFallbackOrder

// Begin Class URTSOrderHelper Function GetHoveredIcon
struct Z_Construct_UFunction_URTSOrderHelper_GetHoveredIcon_Statics
{
	struct RTSOrderHelper_eventGetHoveredIcon_Parms
	{
		TSoftClassPtr<URTSOrder>  OrderType;
		const AActor* OrderedActor;
		int32 Index;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the hovered icon of the order. Can be shown in the UI. */" },
#endif
		{ "CPP_Default_Index", "-1" },
		{ "CPP_Default_OrderedActor", "None" },
		{ "ModuleRelativePath", "Public/Orders/RTSOrderHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the hovered icon of the order. Can be shown in the UI." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderedActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_OrderType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrderedActor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetHoveredIcon_Statics::NewProp_OrderType = { "OrderType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetHoveredIcon_Parms, OrderType), Z_Construct_UClass_URTSOrder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetHoveredIcon_Statics::NewProp_OrderedActor = { "OrderedActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetHoveredIcon_Parms, OrderedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderedActor_MetaData), NewProp_OrderedActor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetHoveredIcon_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetHoveredIcon_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetHoveredIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetHoveredIcon_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderHelper_GetHoveredIcon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetHoveredIcon_Statics::NewProp_OrderType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetHoveredIcon_Statics::NewProp_OrderedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetHoveredIcon_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetHoveredIcon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetHoveredIcon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderHelper_GetHoveredIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderHelper, nullptr, "GetHoveredIcon", nullptr, nullptr, Z_Construct_UFunction_URTSOrderHelper_GetHoveredIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetHoveredIcon_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderHelper_GetHoveredIcon_Statics::RTSOrderHelper_eventGetHoveredIcon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetHoveredIcon_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderHelper_GetHoveredIcon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderHelper_GetHoveredIcon_Statics::RTSOrderHelper_eventGetHoveredIcon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderHelper_GetHoveredIcon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderHelper_GetHoveredIcon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderHelper::execGetHoveredIcon)
{
	P_GET_SOFTCLASS(TSoftClassPtr<URTSOrder> ,Z_Param_OrderType);
	P_GET_OBJECT(AActor,Z_Param_OrderedActor);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=URTSOrderHelper::GetHoveredIcon(Z_Param_OrderType,Z_Param_OrderedActor,Z_Param_Index);
	P_NATIVE_END;
}
// End Class URTSOrderHelper Function GetHoveredIcon

// Begin Class URTSOrderHelper Function GetHumanPlayerAutoOrderInitialState
struct Z_Construct_UFunction_URTSOrderHelper_GetHumanPlayerAutoOrderInitialState_Statics
{
	struct RTSOrderHelper_eventGetHumanPlayerAutoOrderInitialState_Parms
	{
		TSoftClassPtr<URTSOrder>  OrderType;
		const AActor* OrderedActor;
		int32 Index;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When the specified order is an auto order, this value indicates whether it is active by default. */" },
#endif
		{ "CPP_Default_Index", "-1" },
		{ "ModuleRelativePath", "Public/Orders/RTSOrderHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When the specified order is an auto order, this value indicates whether it is active by default." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderedActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_OrderType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrderedActor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetHumanPlayerAutoOrderInitialState_Statics::NewProp_OrderType = { "OrderType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetHumanPlayerAutoOrderInitialState_Parms, OrderType), Z_Construct_UClass_URTSOrder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetHumanPlayerAutoOrderInitialState_Statics::NewProp_OrderedActor = { "OrderedActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetHumanPlayerAutoOrderInitialState_Parms, OrderedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderedActor_MetaData), NewProp_OrderedActor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetHumanPlayerAutoOrderInitialState_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetHumanPlayerAutoOrderInitialState_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URTSOrderHelper_GetHumanPlayerAutoOrderInitialState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTSOrderHelper_eventGetHumanPlayerAutoOrderInitialState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetHumanPlayerAutoOrderInitialState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTSOrderHelper_eventGetHumanPlayerAutoOrderInitialState_Parms), &Z_Construct_UFunction_URTSOrderHelper_GetHumanPlayerAutoOrderInitialState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderHelper_GetHumanPlayerAutoOrderInitialState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetHumanPlayerAutoOrderInitialState_Statics::NewProp_OrderType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetHumanPlayerAutoOrderInitialState_Statics::NewProp_OrderedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetHumanPlayerAutoOrderInitialState_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetHumanPlayerAutoOrderInitialState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetHumanPlayerAutoOrderInitialState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderHelper_GetHumanPlayerAutoOrderInitialState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderHelper, nullptr, "GetHumanPlayerAutoOrderInitialState", nullptr, nullptr, Z_Construct_UFunction_URTSOrderHelper_GetHumanPlayerAutoOrderInitialState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetHumanPlayerAutoOrderInitialState_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderHelper_GetHumanPlayerAutoOrderInitialState_Statics::RTSOrderHelper_eventGetHumanPlayerAutoOrderInitialState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetHumanPlayerAutoOrderInitialState_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderHelper_GetHumanPlayerAutoOrderInitialState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderHelper_GetHumanPlayerAutoOrderInitialState_Statics::RTSOrderHelper_eventGetHumanPlayerAutoOrderInitialState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderHelper_GetHumanPlayerAutoOrderInitialState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderHelper_GetHumanPlayerAutoOrderInitialState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderHelper::execGetHumanPlayerAutoOrderInitialState)
{
	P_GET_SOFTCLASS(TSoftClassPtr<URTSOrder> ,Z_Param_OrderType);
	P_GET_OBJECT(AActor,Z_Param_OrderedActor);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URTSOrderHelper::GetHumanPlayerAutoOrderInitialState(Z_Param_OrderType,Z_Param_OrderedActor,Z_Param_Index);
	P_NATIVE_END;
}
// End Class URTSOrderHelper Function GetHumanPlayerAutoOrderInitialState

// Begin Class URTSOrderHelper Function GetName
struct Z_Construct_UFunction_URTSOrderHelper_GetName_Statics
{
	struct RTSOrderHelper_eventGetName_Parms
	{
		TSoftClassPtr<URTSOrder>  OrderType;
		const AActor* OrderedActor;
		int32 Index;
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the name of the order. Can be shown in the UI. */" },
#endif
		{ "CPP_Default_Index", "-1" },
		{ "CPP_Default_OrderedActor", "None" },
		{ "ModuleRelativePath", "Public/Orders/RTSOrderHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the name of the order. Can be shown in the UI." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderedActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_OrderType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrderedActor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetName_Statics::NewProp_OrderType = { "OrderType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetName_Parms, OrderType), Z_Construct_UClass_URTSOrder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetName_Statics::NewProp_OrderedActor = { "OrderedActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetName_Parms, OrderedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderedActor_MetaData), NewProp_OrderedActor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetName_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetName_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderHelper_GetName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetName_Statics::NewProp_OrderType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetName_Statics::NewProp_OrderedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetName_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderHelper_GetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderHelper, nullptr, "GetName", nullptr, nullptr, Z_Construct_UFunction_URTSOrderHelper_GetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetName_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderHelper_GetName_Statics::RTSOrderHelper_eventGetName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetName_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderHelper_GetName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderHelper_GetName_Statics::RTSOrderHelper_eventGetName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderHelper_GetName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderHelper_GetName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderHelper::execGetName)
{
	P_GET_SOFTCLASS(TSoftClassPtr<URTSOrder> ,Z_Param_OrderType);
	P_GET_OBJECT(AActor,Z_Param_OrderedActor);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=URTSOrderHelper::GetName(Z_Param_OrderType,Z_Param_OrderedActor,Z_Param_Index);
	P_NATIVE_END;
}
// End Class URTSOrderHelper Function GetName

// Begin Class URTSOrderHelper Function GetNormalIcon
struct Z_Construct_UFunction_URTSOrderHelper_GetNormalIcon_Statics
{
	struct RTSOrderHelper_eventGetNormalIcon_Parms
	{
		TSoftClassPtr<URTSOrder>  OrderType;
		const AActor* OrderedActor;
		int32 Index;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the normal icon of the order. Can be shown in the UI. */" },
#endif
		{ "CPP_Default_Index", "-1" },
		{ "CPP_Default_OrderedActor", "None" },
		{ "ModuleRelativePath", "Public/Orders/RTSOrderHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the normal icon of the order. Can be shown in the UI." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderedActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_OrderType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrderedActor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetNormalIcon_Statics::NewProp_OrderType = { "OrderType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetNormalIcon_Parms, OrderType), Z_Construct_UClass_URTSOrder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetNormalIcon_Statics::NewProp_OrderedActor = { "OrderedActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetNormalIcon_Parms, OrderedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderedActor_MetaData), NewProp_OrderedActor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetNormalIcon_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetNormalIcon_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetNormalIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetNormalIcon_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderHelper_GetNormalIcon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetNormalIcon_Statics::NewProp_OrderType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetNormalIcon_Statics::NewProp_OrderedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetNormalIcon_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetNormalIcon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetNormalIcon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderHelper_GetNormalIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderHelper, nullptr, "GetNormalIcon", nullptr, nullptr, Z_Construct_UFunction_URTSOrderHelper_GetNormalIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetNormalIcon_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderHelper_GetNormalIcon_Statics::RTSOrderHelper_eventGetNormalIcon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetNormalIcon_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderHelper_GetNormalIcon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderHelper_GetNormalIcon_Statics::RTSOrderHelper_eventGetNormalIcon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderHelper_GetNormalIcon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderHelper_GetNormalIcon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderHelper::execGetNormalIcon)
{
	P_GET_SOFTCLASS(TSoftClassPtr<URTSOrder> ,Z_Param_OrderType);
	P_GET_OBJECT(AActor,Z_Param_OrderedActor);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=URTSOrderHelper::GetNormalIcon(Z_Param_OrderType,Z_Param_OrderedActor,Z_Param_Index);
	P_NATIVE_END;
}
// End Class URTSOrderHelper Function GetNormalIcon

// Begin Class URTSOrderHelper Function GetOrderButtonIndex
struct Z_Construct_UFunction_URTSOrderHelper_GetOrderButtonIndex_Statics
{
	struct RTSOrderHelper_eventGetOrderButtonIndex_Parms
	{
		TSoftClassPtr<URTSOrder>  OrderType;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the index of the button when shown in the UI. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the index of the button when shown in the UI." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_OrderType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetOrderButtonIndex_Statics::NewProp_OrderType = { "OrderType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetOrderButtonIndex_Parms, OrderType), Z_Construct_UClass_URTSOrder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetOrderButtonIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetOrderButtonIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderHelper_GetOrderButtonIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetOrderButtonIndex_Statics::NewProp_OrderType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetOrderButtonIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetOrderButtonIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderHelper_GetOrderButtonIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderHelper, nullptr, "GetOrderButtonIndex", nullptr, nullptr, Z_Construct_UFunction_URTSOrderHelper_GetOrderButtonIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetOrderButtonIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderHelper_GetOrderButtonIndex_Statics::RTSOrderHelper_eventGetOrderButtonIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetOrderButtonIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderHelper_GetOrderButtonIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderHelper_GetOrderButtonIndex_Statics::RTSOrderHelper_eventGetOrderButtonIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderHelper_GetOrderButtonIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderHelper_GetOrderButtonIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderHelper::execGetOrderButtonIndex)
{
	P_GET_SOFTCLASS(TSoftClassPtr<URTSOrder> ,Z_Param_OrderType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=URTSOrderHelper::GetOrderButtonIndex(Z_Param_OrderType);
	P_NATIVE_END;
}
// End Class URTSOrderHelper Function GetOrderButtonIndex

// Begin Class URTSOrderHelper Function GetOrderGroupExecutionType
struct Z_Construct_UFunction_URTSOrderHelper_GetOrderGroupExecutionType_Statics
{
	struct RTSOrderHelper_eventGetOrderGroupExecutionType_Parms
	{
		TSoftClassPtr<URTSOrder>  OrderType;
		const AActor* OrderedActor;
		int32 Index;
		ERTSOrderGroupExecutionType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the group execution type of the specified order. */" },
#endif
		{ "CPP_Default_Index", "-1" },
		{ "ModuleRelativePath", "Public/Orders/RTSOrderHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the group execution type of the specified order." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderedActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_OrderType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrderedActor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetOrderGroupExecutionType_Statics::NewProp_OrderType = { "OrderType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetOrderGroupExecutionType_Parms, OrderType), Z_Construct_UClass_URTSOrder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetOrderGroupExecutionType_Statics::NewProp_OrderedActor = { "OrderedActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetOrderGroupExecutionType_Parms, OrderedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderedActor_MetaData), NewProp_OrderedActor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetOrderGroupExecutionType_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetOrderGroupExecutionType_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URTSOrderHelper_GetOrderGroupExecutionType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetOrderGroupExecutionType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetOrderGroupExecutionType_Parms, ReturnValue), Z_Construct_UEnum_ColonyOrders_ERTSOrderGroupExecutionType, METADATA_PARAMS(0, nullptr) }; // 286734233
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderHelper_GetOrderGroupExecutionType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetOrderGroupExecutionType_Statics::NewProp_OrderType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetOrderGroupExecutionType_Statics::NewProp_OrderedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetOrderGroupExecutionType_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetOrderGroupExecutionType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetOrderGroupExecutionType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetOrderGroupExecutionType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderHelper_GetOrderGroupExecutionType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderHelper, nullptr, "GetOrderGroupExecutionType", nullptr, nullptr, Z_Construct_UFunction_URTSOrderHelper_GetOrderGroupExecutionType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetOrderGroupExecutionType_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderHelper_GetOrderGroupExecutionType_Statics::RTSOrderHelper_eventGetOrderGroupExecutionType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetOrderGroupExecutionType_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderHelper_GetOrderGroupExecutionType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderHelper_GetOrderGroupExecutionType_Statics::RTSOrderHelper_eventGetOrderGroupExecutionType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderHelper_GetOrderGroupExecutionType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderHelper_GetOrderGroupExecutionType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderHelper::execGetOrderGroupExecutionType)
{
	P_GET_SOFTCLASS(TSoftClassPtr<URTSOrder> ,Z_Param_OrderType);
	P_GET_OBJECT(AActor,Z_Param_OrderedActor);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ERTSOrderGroupExecutionType*)Z_Param__Result=URTSOrderHelper::GetOrderGroupExecutionType(Z_Param_OrderType,Z_Param_OrderedActor,Z_Param_Index);
	P_NATIVE_END;
}
// End Class URTSOrderHelper Function GetOrderGroupExecutionType

// Begin Class URTSOrderHelper Function GetOrderPreviewData
struct Z_Construct_UFunction_URTSOrderHelper_GetOrderPreviewData_Statics
{
	struct RTSOrderHelper_eventGetOrderPreviewData_Parms
	{
		TSoftClassPtr<URTSOrder>  OrderType;
		const AActor* OrderedActor;
		int32 Index;
		FRTSOrderPreviewData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets details about the preview for the order while choosing a target. */" },
#endif
		{ "CPP_Default_Index", "-1" },
		{ "CPP_Default_OrderedActor", "None" },
		{ "ModuleRelativePath", "Public/Orders/RTSOrderHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets details about the preview for the order while choosing a target." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderedActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_OrderType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrderedActor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetOrderPreviewData_Statics::NewProp_OrderType = { "OrderType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetOrderPreviewData_Parms, OrderType), Z_Construct_UClass_URTSOrder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetOrderPreviewData_Statics::NewProp_OrderedActor = { "OrderedActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetOrderPreviewData_Parms, OrderedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderedActor_MetaData), NewProp_OrderedActor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetOrderPreviewData_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetOrderPreviewData_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetOrderPreviewData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetOrderPreviewData_Parms, ReturnValue), Z_Construct_UScriptStruct_FRTSOrderPreviewData, METADATA_PARAMS(0, nullptr) }; // 2497024495
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderHelper_GetOrderPreviewData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetOrderPreviewData_Statics::NewProp_OrderType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetOrderPreviewData_Statics::NewProp_OrderedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetOrderPreviewData_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetOrderPreviewData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetOrderPreviewData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderHelper_GetOrderPreviewData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderHelper, nullptr, "GetOrderPreviewData", nullptr, nullptr, Z_Construct_UFunction_URTSOrderHelper_GetOrderPreviewData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetOrderPreviewData_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderHelper_GetOrderPreviewData_Statics::RTSOrderHelper_eventGetOrderPreviewData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetOrderPreviewData_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderHelper_GetOrderPreviewData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderHelper_GetOrderPreviewData_Statics::RTSOrderHelper_eventGetOrderPreviewData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderHelper_GetOrderPreviewData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderHelper_GetOrderPreviewData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderHelper::execGetOrderPreviewData)
{
	P_GET_SOFTCLASS(TSoftClassPtr<URTSOrder> ,Z_Param_OrderType);
	P_GET_OBJECT(AActor,Z_Param_OrderedActor);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRTSOrderPreviewData*)Z_Param__Result=URTSOrderHelper::GetOrderPreviewData(Z_Param_OrderType,Z_Param_OrderedActor,Z_Param_Index);
	P_NATIVE_END;
}
// End Class URTSOrderHelper Function GetOrderPreviewData

// Begin Class URTSOrderHelper Function GetOrderProcessPolicy
struct Z_Construct_UFunction_URTSOrderHelper_GetOrderProcessPolicy_Statics
{
	struct RTSOrderHelper_eventGetOrderProcessPolicy_Parms
	{
		TSoftClassPtr<URTSOrder>  OrderType;
		const AActor* OrderedActor;
		int32 Index;
		ERTSOrderProcessPolicy ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Gets a value that describes how the specified order is executed. This might determine how the order is displayed\n     * in the UI and it determines how the order is handled by the order system.\n     */" },
#endif
		{ "CPP_Default_Index", "-1" },
		{ "ModuleRelativePath", "Public/Orders/RTSOrderHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a value that describes how the specified order is executed. This might determine how the order is displayed\nin the UI and it determines how the order is handled by the order system." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderedActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_OrderType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrderedActor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetOrderProcessPolicy_Statics::NewProp_OrderType = { "OrderType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetOrderProcessPolicy_Parms, OrderType), Z_Construct_UClass_URTSOrder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetOrderProcessPolicy_Statics::NewProp_OrderedActor = { "OrderedActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetOrderProcessPolicy_Parms, OrderedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderedActor_MetaData), NewProp_OrderedActor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetOrderProcessPolicy_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetOrderProcessPolicy_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URTSOrderHelper_GetOrderProcessPolicy_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetOrderProcessPolicy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetOrderProcessPolicy_Parms, ReturnValue), Z_Construct_UEnum_ColonyOrders_ERTSOrderProcessPolicy, METADATA_PARAMS(0, nullptr) }; // 2077137834
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderHelper_GetOrderProcessPolicy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetOrderProcessPolicy_Statics::NewProp_OrderType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetOrderProcessPolicy_Statics::NewProp_OrderedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetOrderProcessPolicy_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetOrderProcessPolicy_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetOrderProcessPolicy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetOrderProcessPolicy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderHelper_GetOrderProcessPolicy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderHelper, nullptr, "GetOrderProcessPolicy", nullptr, nullptr, Z_Construct_UFunction_URTSOrderHelper_GetOrderProcessPolicy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetOrderProcessPolicy_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderHelper_GetOrderProcessPolicy_Statics::RTSOrderHelper_eventGetOrderProcessPolicy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetOrderProcessPolicy_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderHelper_GetOrderProcessPolicy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderHelper_GetOrderProcessPolicy_Statics::RTSOrderHelper_eventGetOrderProcessPolicy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderHelper_GetOrderProcessPolicy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderHelper_GetOrderProcessPolicy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderHelper::execGetOrderProcessPolicy)
{
	P_GET_SOFTCLASS(TSoftClassPtr<URTSOrder> ,Z_Param_OrderType);
	P_GET_OBJECT(AActor,Z_Param_OrderedActor);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ERTSOrderProcessPolicy*)Z_Param__Result=URTSOrderHelper::GetOrderProcessPolicy(Z_Param_OrderType,Z_Param_OrderedActor,Z_Param_Index);
	P_NATIVE_END;
}
// End Class URTSOrderHelper Function GetOrderProcessPolicy

// Begin Class URTSOrderHelper Function GetOrderRequiredRange
struct Z_Construct_UFunction_URTSOrderHelper_GetOrderRequiredRange_Statics
{
	struct RTSOrderHelper_eventGetOrderRequiredRange_Parms
	{
		TSoftClassPtr<URTSOrder>  OrderType;
		const AActor* OrderedActor;
		int32 Index;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Gets the required range between the ordered actor and the target that is needed to fulfill the order.\n     * '0' value is returned if the order has no required range.\n     */" },
#endif
		{ "CPP_Default_Index", "-1" },
		{ "ModuleRelativePath", "Public/Orders/RTSOrderHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the required range between the ordered actor and the target that is needed to fulfill the order.\n'0' value is returned if the order has no required range." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderedActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_OrderType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrderedActor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetOrderRequiredRange_Statics::NewProp_OrderType = { "OrderType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetOrderRequiredRange_Parms, OrderType), Z_Construct_UClass_URTSOrder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetOrderRequiredRange_Statics::NewProp_OrderedActor = { "OrderedActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetOrderRequiredRange_Parms, OrderedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderedActor_MetaData), NewProp_OrderedActor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetOrderRequiredRange_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetOrderRequiredRange_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetOrderRequiredRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetOrderRequiredRange_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderHelper_GetOrderRequiredRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetOrderRequiredRange_Statics::NewProp_OrderType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetOrderRequiredRange_Statics::NewProp_OrderedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetOrderRequiredRange_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetOrderRequiredRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetOrderRequiredRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderHelper_GetOrderRequiredRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderHelper, nullptr, "GetOrderRequiredRange", nullptr, nullptr, Z_Construct_UFunction_URTSOrderHelper_GetOrderRequiredRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetOrderRequiredRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderHelper_GetOrderRequiredRange_Statics::RTSOrderHelper_eventGetOrderRequiredRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetOrderRequiredRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderHelper_GetOrderRequiredRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderHelper_GetOrderRequiredRange_Statics::RTSOrderHelper_eventGetOrderRequiredRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderHelper_GetOrderRequiredRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderHelper_GetOrderRequiredRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderHelper::execGetOrderRequiredRange)
{
	P_GET_SOFTCLASS(TSoftClassPtr<URTSOrder> ,Z_Param_OrderType);
	P_GET_OBJECT(AActor,Z_Param_OrderedActor);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=URTSOrderHelper::GetOrderRequiredRange(Z_Param_OrderType,Z_Param_OrderedActor,Z_Param_Index);
	P_NATIVE_END;
}
// End Class URTSOrderHelper Function GetOrderRequiredRange

// Begin Class URTSOrderHelper Function GetOrderSuccessTagRequirements
struct Z_Construct_UFunction_URTSOrderHelper_GetOrderSuccessTagRequirements_Statics
{
	struct RTSOrderHelper_eventGetOrderSuccessTagRequirements_Parms
	{
		TSoftClassPtr<URTSOrder>  OrderType;
		const AActor* OrderedActor;
		int32 Index;
		FRTSOrderTagRequirements OutTagRequirements;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the tag requirements for this order that must be full filled to be successful. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the tag requirements for this order that must be full filled to be successful." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderedActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_OrderType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrderedActor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTagRequirements;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetOrderSuccessTagRequirements_Statics::NewProp_OrderType = { "OrderType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetOrderSuccessTagRequirements_Parms, OrderType), Z_Construct_UClass_URTSOrder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetOrderSuccessTagRequirements_Statics::NewProp_OrderedActor = { "OrderedActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetOrderSuccessTagRequirements_Parms, OrderedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderedActor_MetaData), NewProp_OrderedActor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetOrderSuccessTagRequirements_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetOrderSuccessTagRequirements_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetOrderSuccessTagRequirements_Statics::NewProp_OutTagRequirements = { "OutTagRequirements", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetOrderSuccessTagRequirements_Parms, OutTagRequirements), Z_Construct_UScriptStruct_FRTSOrderTagRequirements, METADATA_PARAMS(0, nullptr) }; // 3444264109
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderHelper_GetOrderSuccessTagRequirements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetOrderSuccessTagRequirements_Statics::NewProp_OrderType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetOrderSuccessTagRequirements_Statics::NewProp_OrderedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetOrderSuccessTagRequirements_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetOrderSuccessTagRequirements_Statics::NewProp_OutTagRequirements,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetOrderSuccessTagRequirements_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderHelper_GetOrderSuccessTagRequirements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderHelper, nullptr, "GetOrderSuccessTagRequirements", nullptr, nullptr, Z_Construct_UFunction_URTSOrderHelper_GetOrderSuccessTagRequirements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetOrderSuccessTagRequirements_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderHelper_GetOrderSuccessTagRequirements_Statics::RTSOrderHelper_eventGetOrderSuccessTagRequirements_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetOrderSuccessTagRequirements_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderHelper_GetOrderSuccessTagRequirements_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderHelper_GetOrderSuccessTagRequirements_Statics::RTSOrderHelper_eventGetOrderSuccessTagRequirements_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderHelper_GetOrderSuccessTagRequirements()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderHelper_GetOrderSuccessTagRequirements_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderHelper::execGetOrderSuccessTagRequirements)
{
	P_GET_SOFTCLASS(TSoftClassPtr<URTSOrder> ,Z_Param_OrderType);
	P_GET_OBJECT(AActor,Z_Param_OrderedActor);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_STRUCT_REF(FRTSOrderTagRequirements,Z_Param_Out_OutTagRequirements);
	P_FINISH;
	P_NATIVE_BEGIN;
	URTSOrderHelper::GetOrderSuccessTagRequirements(Z_Param_OrderType,Z_Param_OrderedActor,Z_Param_Index,Z_Param_Out_OutTagRequirements);
	P_NATIVE_END;
}
// End Class URTSOrderHelper Function GetOrderSuccessTagRequirements

// Begin Class URTSOrderHelper Function GetOrderTagRequirements
struct Z_Construct_UFunction_URTSOrderHelper_GetOrderTagRequirements_Statics
{
	struct RTSOrderHelper_eventGetOrderTagRequirements_Parms
	{
		TSoftClassPtr<URTSOrder>  OrderType;
		const AActor* OrderedActor;
		int32 Index;
		FRTSOrderTagRequirements OutTagRequirements;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the tag requirements for this order that must be full filled to be issued. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the tag requirements for this order that must be full filled to be issued." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderedActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_OrderType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrderedActor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTagRequirements;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetOrderTagRequirements_Statics::NewProp_OrderType = { "OrderType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetOrderTagRequirements_Parms, OrderType), Z_Construct_UClass_URTSOrder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetOrderTagRequirements_Statics::NewProp_OrderedActor = { "OrderedActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetOrderTagRequirements_Parms, OrderedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderedActor_MetaData), NewProp_OrderedActor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetOrderTagRequirements_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetOrderTagRequirements_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetOrderTagRequirements_Statics::NewProp_OutTagRequirements = { "OutTagRequirements", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetOrderTagRequirements_Parms, OutTagRequirements), Z_Construct_UScriptStruct_FRTSOrderTagRequirements, METADATA_PARAMS(0, nullptr) }; // 3444264109
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderHelper_GetOrderTagRequirements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetOrderTagRequirements_Statics::NewProp_OrderType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetOrderTagRequirements_Statics::NewProp_OrderedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetOrderTagRequirements_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetOrderTagRequirements_Statics::NewProp_OutTagRequirements,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetOrderTagRequirements_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderHelper_GetOrderTagRequirements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderHelper, nullptr, "GetOrderTagRequirements", nullptr, nullptr, Z_Construct_UFunction_URTSOrderHelper_GetOrderTagRequirements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetOrderTagRequirements_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderHelper_GetOrderTagRequirements_Statics::RTSOrderHelper_eventGetOrderTagRequirements_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetOrderTagRequirements_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderHelper_GetOrderTagRequirements_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderHelper_GetOrderTagRequirements_Statics::RTSOrderHelper_eventGetOrderTagRequirements_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderHelper_GetOrderTagRequirements()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderHelper_GetOrderTagRequirements_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderHelper::execGetOrderTagRequirements)
{
	P_GET_SOFTCLASS(TSoftClassPtr<URTSOrder> ,Z_Param_OrderType);
	P_GET_OBJECT(AActor,Z_Param_OrderedActor);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_STRUCT_REF(FRTSOrderTagRequirements,Z_Param_Out_OutTagRequirements);
	P_FINISH;
	P_NATIVE_BEGIN;
	URTSOrderHelper::GetOrderTagRequirements(Z_Param_OrderType,Z_Param_OrderedActor,Z_Param_Index,Z_Param_Out_OutTagRequirements);
	P_NATIVE_END;
}
// End Class URTSOrderHelper Function GetOrderTagRequirements

// Begin Class URTSOrderHelper Function GetOrderTargetScore
struct Z_Construct_UFunction_URTSOrderHelper_GetOrderTargetScore_Statics
{
	struct RTSOrderHelper_eventGetOrderTargetScore_Parms
	{
		TSoftClassPtr<URTSOrder>  OrderType;
		const AActor* OrderedActor;
		FRTSOrderTargetData TargetData;
		int32 Index;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Evaluates the target and returns a score that can be used to compare the different targets. A higher score means\n     * a better target for the order.\n     */" },
#endif
		{ "CPP_Default_Index", "-1" },
		{ "ModuleRelativePath", "Public/Orders/RTSOrderHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Evaluates the target and returns a score that can be used to compare the different targets. A higher score means\na better target for the order." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderedActor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_OrderType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrderedActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetOrderTargetScore_Statics::NewProp_OrderType = { "OrderType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetOrderTargetScore_Parms, OrderType), Z_Construct_UClass_URTSOrder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetOrderTargetScore_Statics::NewProp_OrderedActor = { "OrderedActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetOrderTargetScore_Parms, OrderedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderedActor_MetaData), NewProp_OrderedActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetOrderTargetScore_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetOrderTargetScore_Parms, TargetData), Z_Construct_UScriptStruct_FRTSOrderTargetData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetData_MetaData), NewProp_TargetData_MetaData) }; // 2315840092
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetOrderTargetScore_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetOrderTargetScore_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetOrderTargetScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetOrderTargetScore_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderHelper_GetOrderTargetScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetOrderTargetScore_Statics::NewProp_OrderType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetOrderTargetScore_Statics::NewProp_OrderedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetOrderTargetScore_Statics::NewProp_TargetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetOrderTargetScore_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetOrderTargetScore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetOrderTargetScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderHelper_GetOrderTargetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderHelper, nullptr, "GetOrderTargetScore", nullptr, nullptr, Z_Construct_UFunction_URTSOrderHelper_GetOrderTargetScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetOrderTargetScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderHelper_GetOrderTargetScore_Statics::RTSOrderHelper_eventGetOrderTargetScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetOrderTargetScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderHelper_GetOrderTargetScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderHelper_GetOrderTargetScore_Statics::RTSOrderHelper_eventGetOrderTargetScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderHelper_GetOrderTargetScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderHelper_GetOrderTargetScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderHelper::execGetOrderTargetScore)
{
	P_GET_SOFTCLASS(TSoftClassPtr<URTSOrder> ,Z_Param_OrderType);
	P_GET_OBJECT(AActor,Z_Param_OrderedActor);
	P_GET_STRUCT_REF(FRTSOrderTargetData,Z_Param_Out_TargetData);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=URTSOrderHelper::GetOrderTargetScore(Z_Param_OrderType,Z_Param_OrderedActor,Z_Param_Out_TargetData,Z_Param_Index);
	P_NATIVE_END;
}
// End Class URTSOrderHelper Function GetOrderTargetScore

// Begin Class URTSOrderHelper Function GetPressedIcon
struct Z_Construct_UFunction_URTSOrderHelper_GetPressedIcon_Statics
{
	struct RTSOrderHelper_eventGetPressedIcon_Parms
	{
		TSoftClassPtr<URTSOrder>  OrderType;
		const AActor* OrderedActor;
		int32 Index;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the pressed icon of the order. Can be shown in the UI. */" },
#endif
		{ "CPP_Default_Index", "-1" },
		{ "CPP_Default_OrderedActor", "None" },
		{ "ModuleRelativePath", "Public/Orders/RTSOrderHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the pressed icon of the order. Can be shown in the UI." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderedActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_OrderType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrderedActor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetPressedIcon_Statics::NewProp_OrderType = { "OrderType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetPressedIcon_Parms, OrderType), Z_Construct_UClass_URTSOrder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetPressedIcon_Statics::NewProp_OrderedActor = { "OrderedActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetPressedIcon_Parms, OrderedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderedActor_MetaData), NewProp_OrderedActor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetPressedIcon_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetPressedIcon_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetPressedIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetPressedIcon_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderHelper_GetPressedIcon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetPressedIcon_Statics::NewProp_OrderType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetPressedIcon_Statics::NewProp_OrderedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetPressedIcon_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetPressedIcon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetPressedIcon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderHelper_GetPressedIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderHelper, nullptr, "GetPressedIcon", nullptr, nullptr, Z_Construct_UFunction_URTSOrderHelper_GetPressedIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetPressedIcon_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderHelper_GetPressedIcon_Statics::RTSOrderHelper_eventGetPressedIcon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetPressedIcon_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderHelper_GetPressedIcon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderHelper_GetPressedIcon_Statics::RTSOrderHelper_eventGetPressedIcon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderHelper_GetPressedIcon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderHelper_GetPressedIcon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderHelper::execGetPressedIcon)
{
	P_GET_SOFTCLASS(TSoftClassPtr<URTSOrder> ,Z_Param_OrderType);
	P_GET_OBJECT(AActor,Z_Param_OrderedActor);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=URTSOrderHelper::GetPressedIcon(Z_Param_OrderType,Z_Param_OrderedActor,Z_Param_Index);
	P_NATIVE_END;
}
// End Class URTSOrderHelper Function GetPressedIcon

// Begin Class URTSOrderHelper Function GetTargetType
struct Z_Construct_UFunction_URTSOrderHelper_GetTargetType_Statics
{
	struct RTSOrderHelper_eventGetTargetType_Parms
	{
		TSoftClassPtr<URTSOrder>  OrderType;
		const AActor* OrderedActor;
		int32 Index;
		ERTSTargetType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the target type the specified order is using. */" },
#endif
		{ "CPP_Default_Index", "-1" },
		{ "CPP_Default_OrderedActor", "None" },
		{ "ModuleRelativePath", "Public/Orders/RTSOrderHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the target type the specified order is using." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderedActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_OrderType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrderedActor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetTargetType_Statics::NewProp_OrderType = { "OrderType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetTargetType_Parms, OrderType), Z_Construct_UClass_URTSOrder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetTargetType_Statics::NewProp_OrderedActor = { "OrderedActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetTargetType_Parms, OrderedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderedActor_MetaData), NewProp_OrderedActor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetTargetType_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetTargetType_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URTSOrderHelper_GetTargetType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URTSOrderHelper_GetTargetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventGetTargetType_Parms, ReturnValue), Z_Construct_UEnum_ColonyOrders_ERTSTargetType, METADATA_PARAMS(0, nullptr) }; // 406532435
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderHelper_GetTargetType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetTargetType_Statics::NewProp_OrderType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetTargetType_Statics::NewProp_OrderedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetTargetType_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetTargetType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_GetTargetType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetTargetType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderHelper_GetTargetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderHelper, nullptr, "GetTargetType", nullptr, nullptr, Z_Construct_UFunction_URTSOrderHelper_GetTargetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetTargetType_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderHelper_GetTargetType_Statics::RTSOrderHelper_eventGetTargetType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_GetTargetType_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderHelper_GetTargetType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderHelper_GetTargetType_Statics::RTSOrderHelper_eventGetTargetType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderHelper_GetTargetType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderHelper_GetTargetType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderHelper::execGetTargetType)
{
	P_GET_SOFTCLASS(TSoftClassPtr<URTSOrder> ,Z_Param_OrderType);
	P_GET_OBJECT(AActor,Z_Param_OrderedActor);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ERTSTargetType*)Z_Param__Result=URTSOrderHelper::GetTargetType(Z_Param_OrderType,Z_Param_OrderedActor,Z_Param_Index);
	P_NATIVE_END;
}
// End Class URTSOrderHelper Function GetTargetType

// Begin Class URTSOrderHelper Function HasFixedOrderButtonIndex
struct Z_Construct_UFunction_URTSOrderHelper_HasFixedOrderButtonIndex_Statics
{
	struct RTSOrderHelper_eventHasFixedOrderButtonIndex_Parms
	{
		TSoftClassPtr<URTSOrder>  OrderType;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Checks whether to use a fixed index of the button when shown in the UI, instead of just lining it up among\n     * others. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks whether to use a fixed index of the button when shown in the UI, instead of just lining it up among\nothers." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_OrderType;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_URTSOrderHelper_HasFixedOrderButtonIndex_Statics::NewProp_OrderType = { "OrderType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventHasFixedOrderButtonIndex_Parms, OrderType), Z_Construct_UClass_URTSOrder_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URTSOrderHelper_HasFixedOrderButtonIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTSOrderHelper_eventHasFixedOrderButtonIndex_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTSOrderHelper_HasFixedOrderButtonIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTSOrderHelper_eventHasFixedOrderButtonIndex_Parms), &Z_Construct_UFunction_URTSOrderHelper_HasFixedOrderButtonIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderHelper_HasFixedOrderButtonIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_HasFixedOrderButtonIndex_Statics::NewProp_OrderType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_HasFixedOrderButtonIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_HasFixedOrderButtonIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderHelper_HasFixedOrderButtonIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderHelper, nullptr, "HasFixedOrderButtonIndex", nullptr, nullptr, Z_Construct_UFunction_URTSOrderHelper_HasFixedOrderButtonIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_HasFixedOrderButtonIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderHelper_HasFixedOrderButtonIndex_Statics::RTSOrderHelper_eventHasFixedOrderButtonIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_HasFixedOrderButtonIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderHelper_HasFixedOrderButtonIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderHelper_HasFixedOrderButtonIndex_Statics::RTSOrderHelper_eventHasFixedOrderButtonIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderHelper_HasFixedOrderButtonIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderHelper_HasFixedOrderButtonIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderHelper::execHasFixedOrderButtonIndex)
{
	P_GET_SOFTCLASS(TSoftClassPtr<URTSOrder> ,Z_Param_OrderType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URTSOrderHelper::HasFixedOrderButtonIndex(Z_Param_OrderType);
	P_NATIVE_END;
}
// End Class URTSOrderHelper Function HasFixedOrderButtonIndex

// Begin Class URTSOrderHelper Function InsertOrderAfterCurrentOrder
struct Z_Construct_UFunction_URTSOrderHelper_InsertOrderAfterCurrentOrder_Statics
{
	struct RTSOrderHelper_eventInsertOrderAfterCurrentOrder_Parms
	{
		AActor* OrderedActor;
		FRTSOrderData Order;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Inserts an order that will be issued when this current order of the specified actor has succeeded. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Inserts an order that will be issued when this current order of the specified actor has succeeded." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Order_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrderedActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Order;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderHelper_InsertOrderAfterCurrentOrder_Statics::NewProp_OrderedActor = { "OrderedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventInsertOrderAfterCurrentOrder_Parms, OrderedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSOrderHelper_InsertOrderAfterCurrentOrder_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventInsertOrderAfterCurrentOrder_Parms, Order), Z_Construct_UScriptStruct_FRTSOrderData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Order_MetaData), NewProp_Order_MetaData) }; // 1083319845
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderHelper_InsertOrderAfterCurrentOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_InsertOrderAfterCurrentOrder_Statics::NewProp_OrderedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_InsertOrderAfterCurrentOrder_Statics::NewProp_Order,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_InsertOrderAfterCurrentOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderHelper_InsertOrderAfterCurrentOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderHelper, nullptr, "InsertOrderAfterCurrentOrder", nullptr, nullptr, Z_Construct_UFunction_URTSOrderHelper_InsertOrderAfterCurrentOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_InsertOrderAfterCurrentOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderHelper_InsertOrderAfterCurrentOrder_Statics::RTSOrderHelper_eventInsertOrderAfterCurrentOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_InsertOrderAfterCurrentOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderHelper_InsertOrderAfterCurrentOrder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderHelper_InsertOrderAfterCurrentOrder_Statics::RTSOrderHelper_eventInsertOrderAfterCurrentOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderHelper_InsertOrderAfterCurrentOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderHelper_InsertOrderAfterCurrentOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderHelper::execInsertOrderAfterCurrentOrder)
{
	P_GET_OBJECT(AActor,Z_Param_OrderedActor);
	P_GET_STRUCT_REF(FRTSOrderData,Z_Param_Out_Order);
	P_FINISH;
	P_NATIVE_BEGIN;
	URTSOrderHelper::InsertOrderAfterCurrentOrder(Z_Param_OrderedActor,Z_Param_Out_Order);
	P_NATIVE_END;
}
// End Class URTSOrderHelper Function InsertOrderAfterCurrentOrder

// Begin Class URTSOrderHelper Function IsAIPlayerAutoOrder
struct Z_Construct_UFunction_URTSOrderHelper_IsAIPlayerAutoOrder_Statics
{
	struct RTSOrderHelper_eventIsAIPlayerAutoOrder_Parms
	{
		TSoftClassPtr<URTSOrder>  OrderType;
		const AActor* OrderedActor;
		int32 Index;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the specified order is an auto order for AI players. */" },
#endif
		{ "CPP_Default_Index", "-1" },
		{ "ModuleRelativePath", "Public/Orders/RTSOrderHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the specified order is an auto order for AI players." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderedActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_OrderType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrderedActor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_URTSOrderHelper_IsAIPlayerAutoOrder_Statics::NewProp_OrderType = { "OrderType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventIsAIPlayerAutoOrder_Parms, OrderType), Z_Construct_UClass_URTSOrder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderHelper_IsAIPlayerAutoOrder_Statics::NewProp_OrderedActor = { "OrderedActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventIsAIPlayerAutoOrder_Parms, OrderedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderedActor_MetaData), NewProp_OrderedActor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSOrderHelper_IsAIPlayerAutoOrder_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventIsAIPlayerAutoOrder_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URTSOrderHelper_IsAIPlayerAutoOrder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTSOrderHelper_eventIsAIPlayerAutoOrder_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTSOrderHelper_IsAIPlayerAutoOrder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTSOrderHelper_eventIsAIPlayerAutoOrder_Parms), &Z_Construct_UFunction_URTSOrderHelper_IsAIPlayerAutoOrder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderHelper_IsAIPlayerAutoOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_IsAIPlayerAutoOrder_Statics::NewProp_OrderType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_IsAIPlayerAutoOrder_Statics::NewProp_OrderedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_IsAIPlayerAutoOrder_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_IsAIPlayerAutoOrder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_IsAIPlayerAutoOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderHelper_IsAIPlayerAutoOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderHelper, nullptr, "IsAIPlayerAutoOrder", nullptr, nullptr, Z_Construct_UFunction_URTSOrderHelper_IsAIPlayerAutoOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_IsAIPlayerAutoOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderHelper_IsAIPlayerAutoOrder_Statics::RTSOrderHelper_eventIsAIPlayerAutoOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_IsAIPlayerAutoOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderHelper_IsAIPlayerAutoOrder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderHelper_IsAIPlayerAutoOrder_Statics::RTSOrderHelper_eventIsAIPlayerAutoOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderHelper_IsAIPlayerAutoOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderHelper_IsAIPlayerAutoOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderHelper::execIsAIPlayerAutoOrder)
{
	P_GET_SOFTCLASS(TSoftClassPtr<URTSOrder> ,Z_Param_OrderType);
	P_GET_OBJECT(AActor,Z_Param_OrderedActor);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URTSOrderHelper::IsAIPlayerAutoOrder(Z_Param_OrderType,Z_Param_OrderedActor,Z_Param_Index);
	P_NATIVE_END;
}
// End Class URTSOrderHelper Function IsAIPlayerAutoOrder

// Begin Class URTSOrderHelper Function IsCreatingIndividualTargetLocations
struct Z_Construct_UFunction_URTSOrderHelper_IsCreatingIndividualTargetLocations_Statics
{
	struct RTSOrderHelper_eventIsCreatingIndividualTargetLocations_Parms
	{
		TSoftClassPtr<URTSOrder>  OrderType;
		const AActor* OrderedActor;
		int32 Index;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether this order type creates individual target locations for a group of actors */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether this order type creates individual target locations for a group of actors" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderedActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_OrderType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrderedActor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_URTSOrderHelper_IsCreatingIndividualTargetLocations_Statics::NewProp_OrderType = { "OrderType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventIsCreatingIndividualTargetLocations_Parms, OrderType), Z_Construct_UClass_URTSOrder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderHelper_IsCreatingIndividualTargetLocations_Statics::NewProp_OrderedActor = { "OrderedActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventIsCreatingIndividualTargetLocations_Parms, OrderedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderedActor_MetaData), NewProp_OrderedActor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSOrderHelper_IsCreatingIndividualTargetLocations_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventIsCreatingIndividualTargetLocations_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URTSOrderHelper_IsCreatingIndividualTargetLocations_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTSOrderHelper_eventIsCreatingIndividualTargetLocations_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTSOrderHelper_IsCreatingIndividualTargetLocations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTSOrderHelper_eventIsCreatingIndividualTargetLocations_Parms), &Z_Construct_UFunction_URTSOrderHelper_IsCreatingIndividualTargetLocations_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderHelper_IsCreatingIndividualTargetLocations_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_IsCreatingIndividualTargetLocations_Statics::NewProp_OrderType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_IsCreatingIndividualTargetLocations_Statics::NewProp_OrderedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_IsCreatingIndividualTargetLocations_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_IsCreatingIndividualTargetLocations_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_IsCreatingIndividualTargetLocations_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderHelper_IsCreatingIndividualTargetLocations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderHelper, nullptr, "IsCreatingIndividualTargetLocations", nullptr, nullptr, Z_Construct_UFunction_URTSOrderHelper_IsCreatingIndividualTargetLocations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_IsCreatingIndividualTargetLocations_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderHelper_IsCreatingIndividualTargetLocations_Statics::RTSOrderHelper_eventIsCreatingIndividualTargetLocations_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_IsCreatingIndividualTargetLocations_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderHelper_IsCreatingIndividualTargetLocations_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderHelper_IsCreatingIndividualTargetLocations_Statics::RTSOrderHelper_eventIsCreatingIndividualTargetLocations_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderHelper_IsCreatingIndividualTargetLocations()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderHelper_IsCreatingIndividualTargetLocations_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderHelper::execIsCreatingIndividualTargetLocations)
{
	P_GET_SOFTCLASS(TSoftClassPtr<URTSOrder> ,Z_Param_OrderType);
	P_GET_OBJECT(AActor,Z_Param_OrderedActor);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URTSOrderHelper::IsCreatingIndividualTargetLocations(Z_Param_OrderType,Z_Param_OrderedActor,Z_Param_Index);
	P_NATIVE_END;
}
// End Class URTSOrderHelper Function IsCreatingIndividualTargetLocations

// Begin Class URTSOrderHelper Function IsEnemyInAcquisitionRadius
struct Z_Construct_UFunction_URTSOrderHelper_IsEnemyInAcquisitionRadius_Statics
{
	struct RTSOrderHelper_eventIsEnemyInAcquisitionRadius_Parms
	{
		const AActor* OrderedActor;
		float AcquisitionRadius;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Checks if their is an actor that has a hostile relationship with the ordered actor inside the specified\n     * acquisition radius.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if their is an actor that has a hostile relationship with the ordered actor inside the specified\nacquisition radius." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderedActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrderedActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AcquisitionRadius;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderHelper_IsEnemyInAcquisitionRadius_Statics::NewProp_OrderedActor = { "OrderedActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventIsEnemyInAcquisitionRadius_Parms, OrderedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderedActor_MetaData), NewProp_OrderedActor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTSOrderHelper_IsEnemyInAcquisitionRadius_Statics::NewProp_AcquisitionRadius = { "AcquisitionRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventIsEnemyInAcquisitionRadius_Parms, AcquisitionRadius), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URTSOrderHelper_IsEnemyInAcquisitionRadius_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTSOrderHelper_eventIsEnemyInAcquisitionRadius_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTSOrderHelper_IsEnemyInAcquisitionRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTSOrderHelper_eventIsEnemyInAcquisitionRadius_Parms), &Z_Construct_UFunction_URTSOrderHelper_IsEnemyInAcquisitionRadius_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderHelper_IsEnemyInAcquisitionRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_IsEnemyInAcquisitionRadius_Statics::NewProp_OrderedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_IsEnemyInAcquisitionRadius_Statics::NewProp_AcquisitionRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_IsEnemyInAcquisitionRadius_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_IsEnemyInAcquisitionRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderHelper_IsEnemyInAcquisitionRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderHelper, nullptr, "IsEnemyInAcquisitionRadius", nullptr, nullptr, Z_Construct_UFunction_URTSOrderHelper_IsEnemyInAcquisitionRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_IsEnemyInAcquisitionRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderHelper_IsEnemyInAcquisitionRadius_Statics::RTSOrderHelper_eventIsEnemyInAcquisitionRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_IsEnemyInAcquisitionRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderHelper_IsEnemyInAcquisitionRadius_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderHelper_IsEnemyInAcquisitionRadius_Statics::RTSOrderHelper_eventIsEnemyInAcquisitionRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderHelper_IsEnemyInAcquisitionRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderHelper_IsEnemyInAcquisitionRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderHelper::execIsEnemyInAcquisitionRadius)
{
	P_GET_OBJECT(AActor,Z_Param_OrderedActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AcquisitionRadius);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URTSOrderHelper::IsEnemyInAcquisitionRadius(Z_Param_OrderedActor,Z_Param_AcquisitionRadius);
	P_NATIVE_END;
}
// End Class URTSOrderHelper Function IsEnemyInAcquisitionRadius

// Begin Class URTSOrderHelper Function IsHumanPlayerAutoOrder
struct Z_Construct_UFunction_URTSOrderHelper_IsHumanPlayerAutoOrder_Statics
{
	struct RTSOrderHelper_eventIsHumanPlayerAutoOrder_Parms
	{
		TSoftClassPtr<URTSOrder>  OrderType;
		const AActor* OrderedActor;
		int32 Index;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the specified order is an auto order for the human player. */" },
#endif
		{ "CPP_Default_Index", "-1" },
		{ "ModuleRelativePath", "Public/Orders/RTSOrderHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the specified order is an auto order for the human player." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderedActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_OrderType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrderedActor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_URTSOrderHelper_IsHumanPlayerAutoOrder_Statics::NewProp_OrderType = { "OrderType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventIsHumanPlayerAutoOrder_Parms, OrderType), Z_Construct_UClass_URTSOrder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderHelper_IsHumanPlayerAutoOrder_Statics::NewProp_OrderedActor = { "OrderedActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventIsHumanPlayerAutoOrder_Parms, OrderedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderedActor_MetaData), NewProp_OrderedActor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSOrderHelper_IsHumanPlayerAutoOrder_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventIsHumanPlayerAutoOrder_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URTSOrderHelper_IsHumanPlayerAutoOrder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTSOrderHelper_eventIsHumanPlayerAutoOrder_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTSOrderHelper_IsHumanPlayerAutoOrder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTSOrderHelper_eventIsHumanPlayerAutoOrder_Parms), &Z_Construct_UFunction_URTSOrderHelper_IsHumanPlayerAutoOrder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderHelper_IsHumanPlayerAutoOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_IsHumanPlayerAutoOrder_Statics::NewProp_OrderType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_IsHumanPlayerAutoOrder_Statics::NewProp_OrderedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_IsHumanPlayerAutoOrder_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_IsHumanPlayerAutoOrder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_IsHumanPlayerAutoOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderHelper_IsHumanPlayerAutoOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderHelper, nullptr, "IsHumanPlayerAutoOrder", nullptr, nullptr, Z_Construct_UFunction_URTSOrderHelper_IsHumanPlayerAutoOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_IsHumanPlayerAutoOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderHelper_IsHumanPlayerAutoOrder_Statics::RTSOrderHelper_eventIsHumanPlayerAutoOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_IsHumanPlayerAutoOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderHelper_IsHumanPlayerAutoOrder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderHelper_IsHumanPlayerAutoOrder_Statics::RTSOrderHelper_eventIsHumanPlayerAutoOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderHelper_IsHumanPlayerAutoOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderHelper_IsHumanPlayerAutoOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderHelper::execIsHumanPlayerAutoOrder)
{
	P_GET_SOFTCLASS(TSoftClassPtr<URTSOrder> ,Z_Param_OrderType);
	P_GET_OBJECT(AActor,Z_Param_OrderedActor);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URTSOrderHelper::IsHumanPlayerAutoOrder(Z_Param_OrderType,Z_Param_OrderedActor,Z_Param_Index);
	P_NATIVE_END;
}
// End Class URTSOrderHelper Function IsHumanPlayerAutoOrder

// Begin Class URTSOrderHelper Function IssueOrder
struct Z_Construct_UFunction_URTSOrderHelper_IssueOrder_Statics
{
	struct RTSOrderHelper_eventIssueOrder_Parms
	{
		AActor* OrderedActor;
		FRTSOrderData Order;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Issues the specified actor to obey this order on the specified target. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Issues the specified actor to obey this order on the specified target." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Order_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrderedActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Order;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderHelper_IssueOrder_Statics::NewProp_OrderedActor = { "OrderedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventIssueOrder_Parms, OrderedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSOrderHelper_IssueOrder_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventIssueOrder_Parms, Order), Z_Construct_UScriptStruct_FRTSOrderData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Order_MetaData), NewProp_Order_MetaData) }; // 1083319845
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderHelper_IssueOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_IssueOrder_Statics::NewProp_OrderedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_IssueOrder_Statics::NewProp_Order,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_IssueOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderHelper_IssueOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderHelper, nullptr, "IssueOrder", nullptr, nullptr, Z_Construct_UFunction_URTSOrderHelper_IssueOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_IssueOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderHelper_IssueOrder_Statics::RTSOrderHelper_eventIssueOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_IssueOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderHelper_IssueOrder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderHelper_IssueOrder_Statics::RTSOrderHelper_eventIssueOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderHelper_IssueOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderHelper_IssueOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderHelper::execIssueOrder)
{
	P_GET_OBJECT(AActor,Z_Param_OrderedActor);
	P_GET_STRUCT_REF(FRTSOrderData,Z_Param_Out_Order);
	P_FINISH;
	P_NATIVE_BEGIN;
	URTSOrderHelper::IssueOrder(Z_Param_OrderedActor,Z_Param_Out_Order);
	P_NATIVE_END;
}
// End Class URTSOrderHelper Function IssueOrder

// Begin Class URTSOrderHelper Function IsValidTarget
struct Z_Construct_UFunction_URTSOrderHelper_IsValidTarget_Statics
{
	struct RTSOrderHelper_eventIsValidTarget_Parms
	{
		TSoftClassPtr<URTSOrder>  OrderType;
		const AActor* OrderedActor;
		FRTSOrderTargetData TargetData;
		int32 Index;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the specified actor and/or location is a valid target for this order. */" },
#endif
		{ "CPP_Default_Index", "-1" },
		{ "ModuleRelativePath", "Public/Orders/RTSOrderHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the specified actor and/or location is a valid target for this order." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderedActor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_OrderType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrderedActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_URTSOrderHelper_IsValidTarget_Statics::NewProp_OrderType = { "OrderType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventIsValidTarget_Parms, OrderType), Z_Construct_UClass_URTSOrder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderHelper_IsValidTarget_Statics::NewProp_OrderedActor = { "OrderedActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventIsValidTarget_Parms, OrderedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderedActor_MetaData), NewProp_OrderedActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSOrderHelper_IsValidTarget_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventIsValidTarget_Parms, TargetData), Z_Construct_UScriptStruct_FRTSOrderTargetData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetData_MetaData), NewProp_TargetData_MetaData) }; // 2315840092
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSOrderHelper_IsValidTarget_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventIsValidTarget_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URTSOrderHelper_IsValidTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTSOrderHelper_eventIsValidTarget_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTSOrderHelper_IsValidTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTSOrderHelper_eventIsValidTarget_Parms), &Z_Construct_UFunction_URTSOrderHelper_IsValidTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderHelper_IsValidTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_IsValidTarget_Statics::NewProp_OrderType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_IsValidTarget_Statics::NewProp_OrderedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_IsValidTarget_Statics::NewProp_TargetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_IsValidTarget_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_IsValidTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_IsValidTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderHelper_IsValidTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderHelper, nullptr, "IsValidTarget", nullptr, nullptr, Z_Construct_UFunction_URTSOrderHelper_IsValidTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_IsValidTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderHelper_IsValidTarget_Statics::RTSOrderHelper_eventIsValidTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_IsValidTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderHelper_IsValidTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderHelper_IsValidTarget_Statics::RTSOrderHelper_eventIsValidTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderHelper_IsValidTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderHelper_IsValidTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderHelper::execIsValidTarget)
{
	P_GET_SOFTCLASS(TSoftClassPtr<URTSOrder> ,Z_Param_OrderType);
	P_GET_OBJECT(AActor,Z_Param_OrderedActor);
	P_GET_STRUCT_REF(FRTSOrderTargetData,Z_Param_Out_TargetData);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URTSOrderHelper::IsValidTarget(Z_Param_OrderType,Z_Param_OrderedActor,Z_Param_Out_TargetData,Z_Param_Index);
	P_NATIVE_END;
}
// End Class URTSOrderHelper Function IsValidTarget

// Begin Class URTSOrderHelper Function K2_CanObeyOrderWithErrorTags
struct Z_Construct_UFunction_URTSOrderHelper_K2_CanObeyOrderWithErrorTags_Statics
{
	struct RTSOrderHelper_eventK2_CanObeyOrderWithErrorTags_Parms
	{
		TSoftClassPtr<URTSOrder>  OrderType;
		const AActor* OrderedActor;
		int32 Index;
		FRTSOrderErrorTags OutErrorTags;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the specified actor can obey this kind of order. */" },
#endif
		{ "DisplayName", "Can Obey Order (With Error Tags)" },
		{ "ModuleRelativePath", "Public/Orders/RTSOrderHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the specified actor can obey this kind of order." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderedActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_OrderType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrderedActor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutErrorTags;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_URTSOrderHelper_K2_CanObeyOrderWithErrorTags_Statics::NewProp_OrderType = { "OrderType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventK2_CanObeyOrderWithErrorTags_Parms, OrderType), Z_Construct_UClass_URTSOrder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderHelper_K2_CanObeyOrderWithErrorTags_Statics::NewProp_OrderedActor = { "OrderedActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventK2_CanObeyOrderWithErrorTags_Parms, OrderedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderedActor_MetaData), NewProp_OrderedActor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSOrderHelper_K2_CanObeyOrderWithErrorTags_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventK2_CanObeyOrderWithErrorTags_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSOrderHelper_K2_CanObeyOrderWithErrorTags_Statics::NewProp_OutErrorTags = { "OutErrorTags", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventK2_CanObeyOrderWithErrorTags_Parms, OutErrorTags), Z_Construct_UScriptStruct_FRTSOrderErrorTags, METADATA_PARAMS(0, nullptr) }; // 2904688719
void Z_Construct_UFunction_URTSOrderHelper_K2_CanObeyOrderWithErrorTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTSOrderHelper_eventK2_CanObeyOrderWithErrorTags_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTSOrderHelper_K2_CanObeyOrderWithErrorTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTSOrderHelper_eventK2_CanObeyOrderWithErrorTags_Parms), &Z_Construct_UFunction_URTSOrderHelper_K2_CanObeyOrderWithErrorTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderHelper_K2_CanObeyOrderWithErrorTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_K2_CanObeyOrderWithErrorTags_Statics::NewProp_OrderType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_K2_CanObeyOrderWithErrorTags_Statics::NewProp_OrderedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_K2_CanObeyOrderWithErrorTags_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_K2_CanObeyOrderWithErrorTags_Statics::NewProp_OutErrorTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_K2_CanObeyOrderWithErrorTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_K2_CanObeyOrderWithErrorTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderHelper_K2_CanObeyOrderWithErrorTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderHelper, nullptr, "K2_CanObeyOrderWithErrorTags", nullptr, nullptr, Z_Construct_UFunction_URTSOrderHelper_K2_CanObeyOrderWithErrorTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_K2_CanObeyOrderWithErrorTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderHelper_K2_CanObeyOrderWithErrorTags_Statics::RTSOrderHelper_eventK2_CanObeyOrderWithErrorTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_K2_CanObeyOrderWithErrorTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderHelper_K2_CanObeyOrderWithErrorTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderHelper_K2_CanObeyOrderWithErrorTags_Statics::RTSOrderHelper_eventK2_CanObeyOrderWithErrorTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderHelper_K2_CanObeyOrderWithErrorTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderHelper_K2_CanObeyOrderWithErrorTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderHelper::execK2_CanObeyOrderWithErrorTags)
{
	P_GET_SOFTCLASS(TSoftClassPtr<URTSOrder> ,Z_Param_OrderType);
	P_GET_OBJECT(AActor,Z_Param_OrderedActor);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_STRUCT_REF(FRTSOrderErrorTags,Z_Param_Out_OutErrorTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URTSOrderHelper::K2_CanObeyOrderWithErrorTags(Z_Param_OrderType,Z_Param_OrderedActor,Z_Param_Index,Z_Param_Out_OutErrorTags);
	P_NATIVE_END;
}
// End Class URTSOrderHelper Function K2_CanObeyOrderWithErrorTags

// Begin Class URTSOrderHelper Function K2_IsValidTargetWithErrorTags
struct Z_Construct_UFunction_URTSOrderHelper_K2_IsValidTargetWithErrorTags_Statics
{
	struct RTSOrderHelper_eventK2_IsValidTargetWithErrorTags_Parms
	{
		TSoftClassPtr<URTSOrder>  OrderType;
		const AActor* OrderedActor;
		FRTSOrderTargetData TargetData;
		int32 Index;
		FRTSOrderErrorTags OutErrorTags;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the specified actor and/or location is a valid target for this order. */" },
#endif
		{ "DisplayName", "Is Valid Target (With Error Tags)" },
		{ "ModuleRelativePath", "Public/Orders/RTSOrderHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the specified actor and/or location is a valid target for this order." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderedActor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_OrderType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrderedActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutErrorTags;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_URTSOrderHelper_K2_IsValidTargetWithErrorTags_Statics::NewProp_OrderType = { "OrderType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventK2_IsValidTargetWithErrorTags_Parms, OrderType), Z_Construct_UClass_URTSOrder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderHelper_K2_IsValidTargetWithErrorTags_Statics::NewProp_OrderedActor = { "OrderedActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventK2_IsValidTargetWithErrorTags_Parms, OrderedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderedActor_MetaData), NewProp_OrderedActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSOrderHelper_K2_IsValidTargetWithErrorTags_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventK2_IsValidTargetWithErrorTags_Parms, TargetData), Z_Construct_UScriptStruct_FRTSOrderTargetData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetData_MetaData), NewProp_TargetData_MetaData) }; // 2315840092
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSOrderHelper_K2_IsValidTargetWithErrorTags_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventK2_IsValidTargetWithErrorTags_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSOrderHelper_K2_IsValidTargetWithErrorTags_Statics::NewProp_OutErrorTags = { "OutErrorTags", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventK2_IsValidTargetWithErrorTags_Parms, OutErrorTags), Z_Construct_UScriptStruct_FRTSOrderErrorTags, METADATA_PARAMS(0, nullptr) }; // 2904688719
void Z_Construct_UFunction_URTSOrderHelper_K2_IsValidTargetWithErrorTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTSOrderHelper_eventK2_IsValidTargetWithErrorTags_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTSOrderHelper_K2_IsValidTargetWithErrorTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTSOrderHelper_eventK2_IsValidTargetWithErrorTags_Parms), &Z_Construct_UFunction_URTSOrderHelper_K2_IsValidTargetWithErrorTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderHelper_K2_IsValidTargetWithErrorTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_K2_IsValidTargetWithErrorTags_Statics::NewProp_OrderType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_K2_IsValidTargetWithErrorTags_Statics::NewProp_OrderedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_K2_IsValidTargetWithErrorTags_Statics::NewProp_TargetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_K2_IsValidTargetWithErrorTags_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_K2_IsValidTargetWithErrorTags_Statics::NewProp_OutErrorTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_K2_IsValidTargetWithErrorTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_K2_IsValidTargetWithErrorTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderHelper_K2_IsValidTargetWithErrorTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderHelper, nullptr, "K2_IsValidTargetWithErrorTags", nullptr, nullptr, Z_Construct_UFunction_URTSOrderHelper_K2_IsValidTargetWithErrorTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_K2_IsValidTargetWithErrorTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderHelper_K2_IsValidTargetWithErrorTags_Statics::RTSOrderHelper_eventK2_IsValidTargetWithErrorTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_K2_IsValidTargetWithErrorTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderHelper_K2_IsValidTargetWithErrorTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderHelper_K2_IsValidTargetWithErrorTags_Statics::RTSOrderHelper_eventK2_IsValidTargetWithErrorTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderHelper_K2_IsValidTargetWithErrorTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderHelper_K2_IsValidTargetWithErrorTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderHelper::execK2_IsValidTargetWithErrorTags)
{
	P_GET_SOFTCLASS(TSoftClassPtr<URTSOrder> ,Z_Param_OrderType);
	P_GET_OBJECT(AActor,Z_Param_OrderedActor);
	P_GET_STRUCT_REF(FRTSOrderTargetData,Z_Param_Out_TargetData);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_STRUCT_REF(FRTSOrderErrorTags,Z_Param_Out_OutErrorTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URTSOrderHelper::K2_IsValidTargetWithErrorTags(Z_Param_OrderType,Z_Param_OrderedActor,Z_Param_Out_TargetData,Z_Param_Index,Z_Param_Out_OutErrorTags);
	P_NATIVE_END;
}
// End Class URTSOrderHelper Function K2_IsValidTargetWithErrorTags

// Begin Class URTSOrderHelper Function SetHumanPlayerAutoOrderState
struct Z_Construct_UFunction_URTSOrderHelper_SetHumanPlayerAutoOrderState_Statics
{
	struct RTSOrderHelper_eventSetHumanPlayerAutoOrderState_Parms
	{
		const AActor* OrderedActor;
		FRTSOrderTypeWithIndex Order;
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets whether the specified auto order is enabled to be issued automatically. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets whether the specified auto order is enabled to be issued automatically." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderedActor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Order_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrderedActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Order;
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderHelper_SetHumanPlayerAutoOrderState_Statics::NewProp_OrderedActor = { "OrderedActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventSetHumanPlayerAutoOrderState_Parms, OrderedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderedActor_MetaData), NewProp_OrderedActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSOrderHelper_SetHumanPlayerAutoOrderState_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventSetHumanPlayerAutoOrderState_Parms, Order), Z_Construct_UScriptStruct_FRTSOrderTypeWithIndex, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Order_MetaData), NewProp_Order_MetaData) }; // 305801775
void Z_Construct_UFunction_URTSOrderHelper_SetHumanPlayerAutoOrderState_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((RTSOrderHelper_eventSetHumanPlayerAutoOrderState_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTSOrderHelper_SetHumanPlayerAutoOrderState_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTSOrderHelper_eventSetHumanPlayerAutoOrderState_Parms), &Z_Construct_UFunction_URTSOrderHelper_SetHumanPlayerAutoOrderState_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderHelper_SetHumanPlayerAutoOrderState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_SetHumanPlayerAutoOrderState_Statics::NewProp_OrderedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_SetHumanPlayerAutoOrderState_Statics::NewProp_Order,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_SetHumanPlayerAutoOrderState_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_SetHumanPlayerAutoOrderState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderHelper_SetHumanPlayerAutoOrderState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderHelper, nullptr, "SetHumanPlayerAutoOrderState", nullptr, nullptr, Z_Construct_UFunction_URTSOrderHelper_SetHumanPlayerAutoOrderState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_SetHumanPlayerAutoOrderState_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderHelper_SetHumanPlayerAutoOrderState_Statics::RTSOrderHelper_eventSetHumanPlayerAutoOrderState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_SetHumanPlayerAutoOrderState_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderHelper_SetHumanPlayerAutoOrderState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderHelper_SetHumanPlayerAutoOrderState_Statics::RTSOrderHelper_eventSetHumanPlayerAutoOrderState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderHelper_SetHumanPlayerAutoOrderState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderHelper_SetHumanPlayerAutoOrderState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderHelper::execSetHumanPlayerAutoOrderState)
{
	P_GET_OBJECT(AActor,Z_Param_OrderedActor);
	P_GET_STRUCT_REF(FRTSOrderTypeWithIndex,Z_Param_Out_Order);
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	URTSOrderHelper::SetHumanPlayerAutoOrderState(Z_Param_OrderedActor,Z_Param_Out_Order,Z_Param_bEnable);
	P_NATIVE_END;
}
// End Class URTSOrderHelper Function SetHumanPlayerAutoOrderState

// Begin Class URTSOrderHelper Function ShouldRestartBehaviourTree
struct Z_Construct_UFunction_URTSOrderHelper_ShouldRestartBehaviourTree_Statics
{
	struct RTSOrderHelper_eventShouldRestartBehaviourTree_Parms
	{
		TSoftClassPtr<URTSOrderWithBehavior>  OrderType;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to restart the behaviour tree whenever a new order of the specified type is issued. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to restart the behaviour tree whenever a new order of the specified type is issued." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_OrderType;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_URTSOrderHelper_ShouldRestartBehaviourTree_Statics::NewProp_OrderType = { "OrderType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderHelper_eventShouldRestartBehaviourTree_Parms, OrderType), Z_Construct_UClass_URTSOrderWithBehavior_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URTSOrderHelper_ShouldRestartBehaviourTree_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTSOrderHelper_eventShouldRestartBehaviourTree_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTSOrderHelper_ShouldRestartBehaviourTree_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTSOrderHelper_eventShouldRestartBehaviourTree_Parms), &Z_Construct_UFunction_URTSOrderHelper_ShouldRestartBehaviourTree_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderHelper_ShouldRestartBehaviourTree_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_ShouldRestartBehaviourTree_Statics::NewProp_OrderType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderHelper_ShouldRestartBehaviourTree_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_ShouldRestartBehaviourTree_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderHelper_ShouldRestartBehaviourTree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderHelper, nullptr, "ShouldRestartBehaviourTree", nullptr, nullptr, Z_Construct_UFunction_URTSOrderHelper_ShouldRestartBehaviourTree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_ShouldRestartBehaviourTree_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderHelper_ShouldRestartBehaviourTree_Statics::RTSOrderHelper_eventShouldRestartBehaviourTree_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderHelper_ShouldRestartBehaviourTree_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderHelper_ShouldRestartBehaviourTree_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderHelper_ShouldRestartBehaviourTree_Statics::RTSOrderHelper_eventShouldRestartBehaviourTree_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderHelper_ShouldRestartBehaviourTree()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderHelper_ShouldRestartBehaviourTree_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderHelper::execShouldRestartBehaviourTree)
{
	P_GET_SOFTCLASS(TSoftClassPtr<URTSOrderWithBehavior> ,Z_Param_OrderType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URTSOrderHelper::ShouldRestartBehaviourTree(Z_Param_OrderType);
	P_NATIVE_END;
}
// End Class URTSOrderHelper Function ShouldRestartBehaviourTree

// Begin Class URTSOrderHelper
void URTSOrderHelper::StaticRegisterNativesURTSOrderHelper()
{
	UClass* Class = URTSOrderHelper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AreAutoOrdersAllowedDuringOrder", &URTSOrderHelper::execAreAutoOrdersAllowedDuringOrder },
		{ "CanObeyOrder", &URTSOrderHelper::execCanObeyOrder },
		{ "CanOrderBeConsideredAsSucceeded", &URTSOrderHelper::execCanOrderBeConsideredAsSucceeded },
		{ "CheckOrder", &URTSOrderHelper::execCheckOrder },
		{ "ClearOrderQueue", &URTSOrderHelper::execClearOrderQueue },
		{ "CreateIndividualTargetLocations", &URTSOrderHelper::execCreateIndividualTargetLocations },
		{ "CreateOrderTargetData", &URTSOrderHelper::execCreateOrderTargetData },
		{ "EnqueueOrder", &URTSOrderHelper::execEnqueueOrder },
		{ "FindTargetForOrder", &URTSOrderHelper::execFindTargetForOrder },
		{ "FindTargetForOrderInChaseDistance", &URTSOrderHelper::execFindTargetForOrderInChaseDistance },
		{ "GetAcquisitionRadiusOverride", &URTSOrderHelper::execGetAcquisitionRadiusOverride },
		{ "GetBehaviorTree", &URTSOrderHelper::execGetBehaviorTree },
		{ "GetDescription", &URTSOrderHelper::execGetDescription },
		{ "GetDisabledIcon", &URTSOrderHelper::execGetDisabledIcon },
		{ "GetFallbackOrder", &URTSOrderHelper::execGetFallbackOrder },
		{ "GetHoveredIcon", &URTSOrderHelper::execGetHoveredIcon },
		{ "GetHumanPlayerAutoOrderInitialState", &URTSOrderHelper::execGetHumanPlayerAutoOrderInitialState },
		{ "GetName", &URTSOrderHelper::execGetName },
		{ "GetNormalIcon", &URTSOrderHelper::execGetNormalIcon },
		{ "GetOrderButtonIndex", &URTSOrderHelper::execGetOrderButtonIndex },
		{ "GetOrderGroupExecutionType", &URTSOrderHelper::execGetOrderGroupExecutionType },
		{ "GetOrderPreviewData", &URTSOrderHelper::execGetOrderPreviewData },
		{ "GetOrderProcessPolicy", &URTSOrderHelper::execGetOrderProcessPolicy },
		{ "GetOrderRequiredRange", &URTSOrderHelper::execGetOrderRequiredRange },
		{ "GetOrderSuccessTagRequirements", &URTSOrderHelper::execGetOrderSuccessTagRequirements },
		{ "GetOrderTagRequirements", &URTSOrderHelper::execGetOrderTagRequirements },
		{ "GetOrderTargetScore", &URTSOrderHelper::execGetOrderTargetScore },
		{ "GetPressedIcon", &URTSOrderHelper::execGetPressedIcon },
		{ "GetTargetType", &URTSOrderHelper::execGetTargetType },
		{ "HasFixedOrderButtonIndex", &URTSOrderHelper::execHasFixedOrderButtonIndex },
		{ "InsertOrderAfterCurrentOrder", &URTSOrderHelper::execInsertOrderAfterCurrentOrder },
		{ "IsAIPlayerAutoOrder", &URTSOrderHelper::execIsAIPlayerAutoOrder },
		{ "IsCreatingIndividualTargetLocations", &URTSOrderHelper::execIsCreatingIndividualTargetLocations },
		{ "IsEnemyInAcquisitionRadius", &URTSOrderHelper::execIsEnemyInAcquisitionRadius },
		{ "IsHumanPlayerAutoOrder", &URTSOrderHelper::execIsHumanPlayerAutoOrder },
		{ "IssueOrder", &URTSOrderHelper::execIssueOrder },
		{ "IsValidTarget", &URTSOrderHelper::execIsValidTarget },
		{ "K2_CanObeyOrderWithErrorTags", &URTSOrderHelper::execK2_CanObeyOrderWithErrorTags },
		{ "K2_IsValidTargetWithErrorTags", &URTSOrderHelper::execK2_IsValidTargetWithErrorTags },
		{ "SetHumanPlayerAutoOrderState", &URTSOrderHelper::execSetHumanPlayerAutoOrderState },
		{ "ShouldRestartBehaviourTree", &URTSOrderHelper::execShouldRestartBehaviourTree },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URTSOrderHelper);
UClass* Z_Construct_UClass_URTSOrderHelper_NoRegister()
{
	return URTSOrderHelper::StaticClass();
}
struct Z_Construct_UClass_URTSOrderHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Helper functions for accessing the default objects of order classes.\n */" },
#endif
		{ "IncludePath", "Orders/RTSOrderHelper.h" },
		{ "ModuleRelativePath", "Public/Orders/RTSOrderHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helper functions for accessing the default objects of order classes." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URTSOrderHelper_AreAutoOrdersAllowedDuringOrder, "AreAutoOrdersAllowedDuringOrder" }, // 3975128379
		{ &Z_Construct_UFunction_URTSOrderHelper_CanObeyOrder, "CanObeyOrder" }, // 2128834603
		{ &Z_Construct_UFunction_URTSOrderHelper_CanOrderBeConsideredAsSucceeded, "CanOrderBeConsideredAsSucceeded" }, // 3357400311
		{ &Z_Construct_UFunction_URTSOrderHelper_CheckOrder, "CheckOrder" }, // 2574416009
		{ &Z_Construct_UFunction_URTSOrderHelper_ClearOrderQueue, "ClearOrderQueue" }, // 3082140907
		{ &Z_Construct_UFunction_URTSOrderHelper_CreateIndividualTargetLocations, "CreateIndividualTargetLocations" }, // 4286600571
		{ &Z_Construct_UFunction_URTSOrderHelper_CreateOrderTargetData, "CreateOrderTargetData" }, // 1238103129
		{ &Z_Construct_UFunction_URTSOrderHelper_EnqueueOrder, "EnqueueOrder" }, // 3209250791
		{ &Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrder, "FindTargetForOrder" }, // 1289097952
		{ &Z_Construct_UFunction_URTSOrderHelper_FindTargetForOrderInChaseDistance, "FindTargetForOrderInChaseDistance" }, // 1093808791
		{ &Z_Construct_UFunction_URTSOrderHelper_GetAcquisitionRadiusOverride, "GetAcquisitionRadiusOverride" }, // 3860421137
		{ &Z_Construct_UFunction_URTSOrderHelper_GetBehaviorTree, "GetBehaviorTree" }, // 4194923472
		{ &Z_Construct_UFunction_URTSOrderHelper_GetDescription, "GetDescription" }, // 2462890141
		{ &Z_Construct_UFunction_URTSOrderHelper_GetDisabledIcon, "GetDisabledIcon" }, // 3009327224
		{ &Z_Construct_UFunction_URTSOrderHelper_GetFallbackOrder, "GetFallbackOrder" }, // 2580686329
		{ &Z_Construct_UFunction_URTSOrderHelper_GetHoveredIcon, "GetHoveredIcon" }, // 1567159395
		{ &Z_Construct_UFunction_URTSOrderHelper_GetHumanPlayerAutoOrderInitialState, "GetHumanPlayerAutoOrderInitialState" }, // 2506755404
		{ &Z_Construct_UFunction_URTSOrderHelper_GetName, "GetName" }, // 334734106
		{ &Z_Construct_UFunction_URTSOrderHelper_GetNormalIcon, "GetNormalIcon" }, // 1454874963
		{ &Z_Construct_UFunction_URTSOrderHelper_GetOrderButtonIndex, "GetOrderButtonIndex" }, // 4017328495
		{ &Z_Construct_UFunction_URTSOrderHelper_GetOrderGroupExecutionType, "GetOrderGroupExecutionType" }, // 1835329572
		{ &Z_Construct_UFunction_URTSOrderHelper_GetOrderPreviewData, "GetOrderPreviewData" }, // 607854822
		{ &Z_Construct_UFunction_URTSOrderHelper_GetOrderProcessPolicy, "GetOrderProcessPolicy" }, // 892018
		{ &Z_Construct_UFunction_URTSOrderHelper_GetOrderRequiredRange, "GetOrderRequiredRange" }, // 737939132
		{ &Z_Construct_UFunction_URTSOrderHelper_GetOrderSuccessTagRequirements, "GetOrderSuccessTagRequirements" }, // 797802087
		{ &Z_Construct_UFunction_URTSOrderHelper_GetOrderTagRequirements, "GetOrderTagRequirements" }, // 54456354
		{ &Z_Construct_UFunction_URTSOrderHelper_GetOrderTargetScore, "GetOrderTargetScore" }, // 213272029
		{ &Z_Construct_UFunction_URTSOrderHelper_GetPressedIcon, "GetPressedIcon" }, // 3243713781
		{ &Z_Construct_UFunction_URTSOrderHelper_GetTargetType, "GetTargetType" }, // 2418646854
		{ &Z_Construct_UFunction_URTSOrderHelper_HasFixedOrderButtonIndex, "HasFixedOrderButtonIndex" }, // 1872683838
		{ &Z_Construct_UFunction_URTSOrderHelper_InsertOrderAfterCurrentOrder, "InsertOrderAfterCurrentOrder" }, // 3501151787
		{ &Z_Construct_UFunction_URTSOrderHelper_IsAIPlayerAutoOrder, "IsAIPlayerAutoOrder" }, // 3549884630
		{ &Z_Construct_UFunction_URTSOrderHelper_IsCreatingIndividualTargetLocations, "IsCreatingIndividualTargetLocations" }, // 1707590852
		{ &Z_Construct_UFunction_URTSOrderHelper_IsEnemyInAcquisitionRadius, "IsEnemyInAcquisitionRadius" }, // 3370030351
		{ &Z_Construct_UFunction_URTSOrderHelper_IsHumanPlayerAutoOrder, "IsHumanPlayerAutoOrder" }, // 2251318261
		{ &Z_Construct_UFunction_URTSOrderHelper_IssueOrder, "IssueOrder" }, // 390543070
		{ &Z_Construct_UFunction_URTSOrderHelper_IsValidTarget, "IsValidTarget" }, // 4089488477
		{ &Z_Construct_UFunction_URTSOrderHelper_K2_CanObeyOrderWithErrorTags, "K2_CanObeyOrderWithErrorTags" }, // 530878251
		{ &Z_Construct_UFunction_URTSOrderHelper_K2_IsValidTargetWithErrorTags, "K2_IsValidTargetWithErrorTags" }, // 1016056095
		{ &Z_Construct_UFunction_URTSOrderHelper_SetHumanPlayerAutoOrderState, "SetHumanPlayerAutoOrderState" }, // 3154018027
		{ &Z_Construct_UFunction_URTSOrderHelper_ShouldRestartBehaviourTree, "ShouldRestartBehaviourTree" }, // 1200887440
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URTSOrderHelper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URTSOrderHelper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ColonyOrders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTSOrderHelper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URTSOrderHelper_Statics::ClassParams = {
	&URTSOrderHelper::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URTSOrderHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_URTSOrderHelper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URTSOrderHelper()
{
	if (!Z_Registration_Info_UClass_URTSOrderHelper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URTSOrderHelper.OuterSingleton, Z_Construct_UClass_URTSOrderHelper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URTSOrderHelper.OuterSingleton;
}
template<> COLONYORDERS_API UClass* StaticClass<URTSOrderHelper>()
{
	return URTSOrderHelper::StaticClass();
}
URTSOrderHelper::URTSOrderHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URTSOrderHelper);
URTSOrderHelper::~URTSOrderHelper() {}
// End Class URTSOrderHelper

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderHelper_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URTSOrderHelper, URTSOrderHelper::StaticClass, TEXT("URTSOrderHelper"), &Z_Registration_Info_UClass_URTSOrderHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URTSOrderHelper), 1449286087U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderHelper_h_1172721498(TEXT("/Script/ColonyOrders"),
	Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderHelper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderHelper_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
