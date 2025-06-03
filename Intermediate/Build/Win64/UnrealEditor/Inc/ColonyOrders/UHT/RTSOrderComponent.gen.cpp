// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ColonyOrders/Public/Orders/RTSOrderComponent.h"
#include "ColonyOrders/Public/Orders/RTSOrderData.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSOrderComponent() {}

// Begin Cross Module References
COLONYORDERS_API UClass* Z_Construct_UClass_URTSOrder_NoRegister();
COLONYORDERS_API UClass* Z_Construct_UClass_URTSOrderComponent();
COLONYORDERS_API UClass* Z_Construct_UClass_URTSOrderComponent_NoRegister();
COLONYORDERS_API UEnum* Z_Construct_UEnum_ColonyOrders_ERTSOrderResult();
COLONYORDERS_API UFunction* Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderChangedSignature__DelegateSignature();
COLONYORDERS_API UFunction* Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderEnqueuedSignature__DelegateSignature();
COLONYORDERS_API UFunction* Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderQueueClearedSignature__DelegateSignature();
COLONYORDERS_API UScriptStruct* Z_Construct_UScriptStruct_FRTSOrderData();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_ColonyOrders();
// End Cross Module References

// Begin Delegate FRTSOrderComponentOrderEnqueuedSignature
struct Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderEnqueuedSignature__DelegateSignature_Statics
{
	struct _Script_ColonyOrders_eventRTSOrderComponentOrderEnqueuedSignature_Parms
	{
		FRTSOrderData Order;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Orders/RTSOrderComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Order_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Order;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderEnqueuedSignature__DelegateSignature_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ColonyOrders_eventRTSOrderComponentOrderEnqueuedSignature_Parms, Order), Z_Construct_UScriptStruct_FRTSOrderData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Order_MetaData), NewProp_Order_MetaData) }; // 1083319845
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderEnqueuedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderEnqueuedSignature__DelegateSignature_Statics::NewProp_Order,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderEnqueuedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderEnqueuedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ColonyOrders, nullptr, "RTSOrderComponentOrderEnqueuedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderEnqueuedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderEnqueuedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderEnqueuedSignature__DelegateSignature_Statics::_Script_ColonyOrders_eventRTSOrderComponentOrderEnqueuedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderEnqueuedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderEnqueuedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderEnqueuedSignature__DelegateSignature_Statics::_Script_ColonyOrders_eventRTSOrderComponentOrderEnqueuedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderEnqueuedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderEnqueuedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FRTSOrderComponentOrderEnqueuedSignature_DelegateWrapper(const FMulticastScriptDelegate& RTSOrderComponentOrderEnqueuedSignature, FRTSOrderData const& Order)
{
	struct _Script_ColonyOrders_eventRTSOrderComponentOrderEnqueuedSignature_Parms
	{
		FRTSOrderData Order;
	};
	_Script_ColonyOrders_eventRTSOrderComponentOrderEnqueuedSignature_Parms Parms;
	Parms.Order=Order;
	RTSOrderComponentOrderEnqueuedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FRTSOrderComponentOrderEnqueuedSignature

// Begin Delegate FRTSOrderComponentOrderQueueClearedSignature
struct Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderQueueClearedSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Orders/RTSOrderComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderQueueClearedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ColonyOrders, nullptr, "RTSOrderComponentOrderQueueClearedSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderQueueClearedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderQueueClearedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderQueueClearedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderQueueClearedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FRTSOrderComponentOrderQueueClearedSignature_DelegateWrapper(const FMulticastScriptDelegate& RTSOrderComponentOrderQueueClearedSignature)
{
	RTSOrderComponentOrderQueueClearedSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FRTSOrderComponentOrderQueueClearedSignature

// Begin Delegate FRTSOrderComponentOrderChangedSignature
struct Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderChangedSignature__DelegateSignature_Statics
{
	struct _Script_ColonyOrders_eventRTSOrderComponentOrderChangedSignature_Parms
	{
		FRTSOrderData NewOrder;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Orders/RTSOrderComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewOrder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewOrder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderChangedSignature__DelegateSignature_Statics::NewProp_NewOrder = { "NewOrder", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ColonyOrders_eventRTSOrderComponentOrderChangedSignature_Parms, NewOrder), Z_Construct_UScriptStruct_FRTSOrderData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewOrder_MetaData), NewProp_NewOrder_MetaData) }; // 1083319845
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderChangedSignature__DelegateSignature_Statics::NewProp_NewOrder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ColonyOrders, nullptr, "RTSOrderComponentOrderChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderChangedSignature__DelegateSignature_Statics::_Script_ColonyOrders_eventRTSOrderComponentOrderChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderChangedSignature__DelegateSignature_Statics::_Script_ColonyOrders_eventRTSOrderComponentOrderChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FRTSOrderComponentOrderChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& RTSOrderComponentOrderChangedSignature, FRTSOrderData const& NewOrder)
{
	struct _Script_ColonyOrders_eventRTSOrderComponentOrderChangedSignature_Parms
	{
		FRTSOrderData NewOrder;
	};
	_Script_ColonyOrders_eventRTSOrderComponentOrderChangedSignature_Parms Parms;
	Parms.NewOrder=NewOrder;
	RTSOrderComponentOrderChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FRTSOrderComponentOrderChangedSignature

// Begin Class URTSOrderComponent Function GetCurrentOrderTargetActor
struct Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderTargetActor_Statics
{
	struct RTSOrderComponent_eventGetCurrentOrderTargetActor_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the target actor of the current order of this pawn. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the target actor of the current order of this pawn." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderTargetActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderComponent_eventGetCurrentOrderTargetActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderTargetActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderTargetActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderTargetActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderTargetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderComponent, nullptr, "GetCurrentOrderTargetActor", nullptr, nullptr, Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderTargetActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderTargetActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderTargetActor_Statics::RTSOrderComponent_eventGetCurrentOrderTargetActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderTargetActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderTargetActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderTargetActor_Statics::RTSOrderComponent_eventGetCurrentOrderTargetActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderTargetActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderTargetActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderComponent::execGetCurrentOrderTargetActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetCurrentOrderTargetActor();
	P_NATIVE_END;
}
// End Class URTSOrderComponent Function GetCurrentOrderTargetActor

// Begin Class URTSOrderComponent Function GetCurrentOrderTargetIndex
struct Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderTargetIndex_Statics
{
	struct RTSOrderComponent_eventGetCurrentOrderTargetIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the target index of the current order of this pawn. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the target index of the current order of this pawn." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderTargetIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderComponent_eventGetCurrentOrderTargetIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderTargetIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderTargetIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderTargetIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderTargetIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderComponent, nullptr, "GetCurrentOrderTargetIndex", nullptr, nullptr, Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderTargetIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderTargetIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderTargetIndex_Statics::RTSOrderComponent_eventGetCurrentOrderTargetIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderTargetIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderTargetIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderTargetIndex_Statics::RTSOrderComponent_eventGetCurrentOrderTargetIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderTargetIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderTargetIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderComponent::execGetCurrentOrderTargetIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentOrderTargetIndex();
	P_NATIVE_END;
}
// End Class URTSOrderComponent Function GetCurrentOrderTargetIndex

// Begin Class URTSOrderComponent Function GetCurrentOrderTargetLocation
struct Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderTargetLocation_Statics
{
	struct RTSOrderComponent_eventGetCurrentOrderTargetLocation_Parms
	{
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the target location of the current order of this pawn. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the target location of the current order of this pawn." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderTargetLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderComponent_eventGetCurrentOrderTargetLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderTargetLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderTargetLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderTargetLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderTargetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderComponent, nullptr, "GetCurrentOrderTargetLocation", nullptr, nullptr, Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderTargetLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderTargetLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderTargetLocation_Statics::RTSOrderComponent_eventGetCurrentOrderTargetLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderTargetLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderTargetLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderTargetLocation_Statics::RTSOrderComponent_eventGetCurrentOrderTargetLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderTargetLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderTargetLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderComponent::execGetCurrentOrderTargetLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetCurrentOrderTargetLocation();
	P_NATIVE_END;
}
// End Class URTSOrderComponent Function GetCurrentOrderTargetLocation

// Begin Class URTSOrderComponent Function GetCurrentOrderType
struct Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderType_Statics
{
	struct RTSOrderComponent_eventGetCurrentOrderType_Parms
	{
		TSoftClassPtr<URTSOrder>  ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the type of the current order of this pawn. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the type of the current order of this pawn." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderComponent_eventGetCurrentOrderType_Parms, ReturnValue), Z_Construct_UClass_URTSOrder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderComponent, nullptr, "GetCurrentOrderType", nullptr, nullptr, Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderType_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderType_Statics::RTSOrderComponent_eventGetCurrentOrderType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderType_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderType_Statics::RTSOrderComponent_eventGetCurrentOrderType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderComponent::execGetCurrentOrderType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSoftClassPtr<URTSOrder> *)Z_Param__Result=P_THIS->GetCurrentOrderType();
	P_NATIVE_END;
}
// End Class URTSOrderComponent Function GetCurrentOrderType

// Begin Class URTSOrderComponent Function IsIdle
struct Z_Construct_UFunction_URTSOrderComponent_IsIdle_Statics
{
	struct RTSOrderComponent_eventIsIdle_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Checks whether the pawn is idle, or has any orders. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks whether the pawn is idle, or has any orders." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_URTSOrderComponent_IsIdle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTSOrderComponent_eventIsIdle_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTSOrderComponent_IsIdle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTSOrderComponent_eventIsIdle_Parms), &Z_Construct_UFunction_URTSOrderComponent_IsIdle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderComponent_IsIdle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderComponent_IsIdle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderComponent_IsIdle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderComponent_IsIdle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderComponent, nullptr, "IsIdle", nullptr, nullptr, Z_Construct_UFunction_URTSOrderComponent_IsIdle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderComponent_IsIdle_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderComponent_IsIdle_Statics::RTSOrderComponent_eventIsIdle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderComponent_IsIdle_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderComponent_IsIdle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderComponent_IsIdle_Statics::RTSOrderComponent_eventIsIdle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderComponent_IsIdle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderComponent_IsIdle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderComponent::execIsIdle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsIdle();
	P_NATIVE_END;
}
// End Class URTSOrderComponent Function IsIdle

// Begin Class URTSOrderComponent Function OnDeselected
struct Z_Construct_UFunction_URTSOrderComponent_OnDeselected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Orders/RTSOrderComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderComponent_OnDeselected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderComponent, nullptr, "OnDeselected", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderComponent_OnDeselected_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderComponent_OnDeselected_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URTSOrderComponent_OnDeselected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderComponent_OnDeselected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderComponent::execOnDeselected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDeselected();
	P_NATIVE_END;
}
// End Class URTSOrderComponent Function OnDeselected

// Begin Class URTSOrderComponent Function OnOrderEndedCallback
struct Z_Construct_UFunction_URTSOrderComponent_OnOrderEndedCallback_Statics
{
	struct RTSOrderComponent_eventOnOrderEndedCallback_Parms
	{
		ERTSOrderResult OrderResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Orders/RTSOrderComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OrderResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OrderResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URTSOrderComponent_OnOrderEndedCallback_Statics::NewProp_OrderResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URTSOrderComponent_OnOrderEndedCallback_Statics::NewProp_OrderResult = { "OrderResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderComponent_eventOnOrderEndedCallback_Parms, OrderResult), Z_Construct_UEnum_ColonyOrders_ERTSOrderResult, METADATA_PARAMS(0, nullptr) }; // 934721529
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderComponent_OnOrderEndedCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderComponent_OnOrderEndedCallback_Statics::NewProp_OrderResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderComponent_OnOrderEndedCallback_Statics::NewProp_OrderResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderComponent_OnOrderEndedCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderComponent_OnOrderEndedCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderComponent, nullptr, "OnOrderEndedCallback", nullptr, nullptr, Z_Construct_UFunction_URTSOrderComponent_OnOrderEndedCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderComponent_OnOrderEndedCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderComponent_OnOrderEndedCallback_Statics::RTSOrderComponent_eventOnOrderEndedCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderComponent_OnOrderEndedCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderComponent_OnOrderEndedCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderComponent_OnOrderEndedCallback_Statics::RTSOrderComponent_eventOnOrderEndedCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderComponent_OnOrderEndedCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderComponent_OnOrderEndedCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderComponent::execOnOrderEndedCallback)
{
	P_GET_ENUM(ERTSOrderResult,Z_Param_OrderResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOrderEndedCallback(ERTSOrderResult(Z_Param_OrderResult));
	P_NATIVE_END;
}
// End Class URTSOrderComponent Function OnOrderEndedCallback

// Begin Class URTSOrderComponent Function OnOwnerTagsChanged
struct Z_Construct_UFunction_URTSOrderComponent_OnOwnerTagsChanged_Statics
{
	struct RTSOrderComponent_eventOnOwnerTagsChanged_Parms
	{
		FGameplayTag Tag;
		int32 NewCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Orders/RTSOrderComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSOrderComponent_OnOwnerTagsChanged_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderComponent_eventOnOwnerTagsChanged_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSOrderComponent_OnOwnerTagsChanged_Statics::NewProp_NewCount = { "NewCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderComponent_eventOnOwnerTagsChanged_Parms, NewCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderComponent_OnOwnerTagsChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderComponent_OnOwnerTagsChanged_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderComponent_OnOwnerTagsChanged_Statics::NewProp_NewCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderComponent_OnOwnerTagsChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderComponent_OnOwnerTagsChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderComponent, nullptr, "OnOwnerTagsChanged", nullptr, nullptr, Z_Construct_UFunction_URTSOrderComponent_OnOwnerTagsChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderComponent_OnOwnerTagsChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderComponent_OnOwnerTagsChanged_Statics::RTSOrderComponent_eventOnOwnerTagsChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderComponent_OnOwnerTagsChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderComponent_OnOwnerTagsChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderComponent_OnOwnerTagsChanged_Statics::RTSOrderComponent_eventOnOwnerTagsChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderComponent_OnOwnerTagsChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderComponent_OnOwnerTagsChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderComponent::execOnOwnerTagsChanged)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOwnerTagsChanged(Z_Param_Tag,Z_Param_NewCount);
	P_NATIVE_END;
}
// End Class URTSOrderComponent Function OnOwnerTagsChanged

// Begin Class URTSOrderComponent Function OnSelected
struct Z_Construct_UFunction_URTSOrderComponent_OnSelected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Orders/RTSOrderComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderComponent_OnSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderComponent, nullptr, "OnSelected", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderComponent_OnSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderComponent_OnSelected_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URTSOrderComponent_OnSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderComponent_OnSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderComponent::execOnSelected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSelected();
	P_NATIVE_END;
}
// End Class URTSOrderComponent Function OnSelected

// Begin Class URTSOrderComponent Function OnTargetTagsChanged
struct Z_Construct_UFunction_URTSOrderComponent_OnTargetTagsChanged_Statics
{
	struct RTSOrderComponent_eventOnTargetTagsChanged_Parms
	{
		FGameplayTag Tag;
		int32 NewCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Orders/RTSOrderComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSOrderComponent_OnTargetTagsChanged_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderComponent_eventOnTargetTagsChanged_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSOrderComponent_OnTargetTagsChanged_Statics::NewProp_NewCount = { "NewCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderComponent_eventOnTargetTagsChanged_Parms, NewCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSOrderComponent_OnTargetTagsChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderComponent_OnTargetTagsChanged_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSOrderComponent_OnTargetTagsChanged_Statics::NewProp_NewCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderComponent_OnTargetTagsChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderComponent_OnTargetTagsChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderComponent, nullptr, "OnTargetTagsChanged", nullptr, nullptr, Z_Construct_UFunction_URTSOrderComponent_OnTargetTagsChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderComponent_OnTargetTagsChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSOrderComponent_OnTargetTagsChanged_Statics::RTSOrderComponent_eventOnTargetTagsChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderComponent_OnTargetTagsChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderComponent_OnTargetTagsChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSOrderComponent_OnTargetTagsChanged_Statics::RTSOrderComponent_eventOnTargetTagsChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSOrderComponent_OnTargetTagsChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderComponent_OnTargetTagsChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderComponent::execOnTargetTagsChanged)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTargetTagsChanged(Z_Param_Tag,Z_Param_NewCount);
	P_NATIVE_END;
}
// End Class URTSOrderComponent Function OnTargetTagsChanged

// Begin Class URTSOrderComponent Function ReceivedCurrentOrder
struct Z_Construct_UFunction_URTSOrderComponent_ReceivedCurrentOrder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Orders/RTSOrderComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderComponent_ReceivedCurrentOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderComponent, nullptr, "ReceivedCurrentOrder", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderComponent_ReceivedCurrentOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderComponent_ReceivedCurrentOrder_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URTSOrderComponent_ReceivedCurrentOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderComponent_ReceivedCurrentOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderComponent::execReceivedCurrentOrder)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReceivedCurrentOrder();
	P_NATIVE_END;
}
// End Class URTSOrderComponent Function ReceivedCurrentOrder

// Begin Class URTSOrderComponent Function ReceivedOrderQueue
struct Z_Construct_UFunction_URTSOrderComponent_ReceivedOrderQueue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Orders/RTSOrderComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSOrderComponent_ReceivedOrderQueue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSOrderComponent, nullptr, "ReceivedOrderQueue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSOrderComponent_ReceivedOrderQueue_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSOrderComponent_ReceivedOrderQueue_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URTSOrderComponent_ReceivedOrderQueue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSOrderComponent_ReceivedOrderQueue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSOrderComponent::execReceivedOrderQueue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReceivedOrderQueue();
	P_NATIVE_END;
}
// End Class URTSOrderComponent Function ReceivedOrderQueue

// Begin Class URTSOrderComponent
void URTSOrderComponent::StaticRegisterNativesURTSOrderComponent()
{
	UClass* Class = URTSOrderComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentOrderTargetActor", &URTSOrderComponent::execGetCurrentOrderTargetActor },
		{ "GetCurrentOrderTargetIndex", &URTSOrderComponent::execGetCurrentOrderTargetIndex },
		{ "GetCurrentOrderTargetLocation", &URTSOrderComponent::execGetCurrentOrderTargetLocation },
		{ "GetCurrentOrderType", &URTSOrderComponent::execGetCurrentOrderType },
		{ "IsIdle", &URTSOrderComponent::execIsIdle },
		{ "OnDeselected", &URTSOrderComponent::execOnDeselected },
		{ "OnOrderEndedCallback", &URTSOrderComponent::execOnOrderEndedCallback },
		{ "OnOwnerTagsChanged", &URTSOrderComponent::execOnOwnerTagsChanged },
		{ "OnSelected", &URTSOrderComponent::execOnSelected },
		{ "OnTargetTagsChanged", &URTSOrderComponent::execOnTargetTagsChanged },
		{ "ReceivedCurrentOrder", &URTSOrderComponent::execReceivedCurrentOrder },
		{ "ReceivedOrderQueue", &URTSOrderComponent::execReceivedOrderQueue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URTSOrderComponent);
UClass* Z_Construct_UClass_URTSOrderComponent_NoRegister()
{
	return URTSOrderComponent::StaticClass();
}
struct Z_Construct_UClass_URTSOrderComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Manages the orders for a RTSChracter or RTSPawn\n */" },
#endif
		{ "IncludePath", "Orders/RTSOrderComponent.h" },
		{ "ModuleRelativePath", "Public/Orders/RTSOrderComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Manages the orders for a RTSChracter or RTSPawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnOrderChanged_MetaData[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Event when the actor has received a new order. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event when the actor has received a new order." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnOrderEnqueued_MetaData[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Event when a new order has been enqueued. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event when a new order has been enqueued." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnOrderQueueCleared_MetaData[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Event when the order queue has been cleared. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event when the order queue has been cleared." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentOrder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS" },
		{ "ModuleRelativePath", "Public/Orders/RTSOrderComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastOrder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS" },
		{ "ModuleRelativePath", "Public/Orders/RTSOrderComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderQueue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS" },
		{ "ModuleRelativePath", "Public/Orders/RTSOrderComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopOrder_MetaData[] = {
		{ "ModuleRelativePath", "Public/Orders/RTSOrderComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderPreviewActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/Orders/RTSOrderComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderPreviewActorClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Class of the preview actor that is used to show the target location of an order. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Class of the preview actor that is used to show the target location of an order." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeginConstructionOrder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Order type that is used to begin the construction of a building. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Order type that is used to begin the construction of a building." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOrderChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOrderEnqueued;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOrderQueueCleared;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentOrder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastOrder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OrderQueue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OrderQueue;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_StopOrder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrderPreviewActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OrderPreviewActors;
	static const UECodeGen_Private::FClassPropertyParams NewProp_OrderPreviewActorClass;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_BeginConstructionOrder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderTargetActor, "GetCurrentOrderTargetActor" }, // 3902330977
		{ &Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderTargetIndex, "GetCurrentOrderTargetIndex" }, // 2824442731
		{ &Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderTargetLocation, "GetCurrentOrderTargetLocation" }, // 4158092710
		{ &Z_Construct_UFunction_URTSOrderComponent_GetCurrentOrderType, "GetCurrentOrderType" }, // 2817582129
		{ &Z_Construct_UFunction_URTSOrderComponent_IsIdle, "IsIdle" }, // 1252168358
		{ &Z_Construct_UFunction_URTSOrderComponent_OnDeselected, "OnDeselected" }, // 3014896329
		{ &Z_Construct_UFunction_URTSOrderComponent_OnOrderEndedCallback, "OnOrderEndedCallback" }, // 4016317041
		{ &Z_Construct_UFunction_URTSOrderComponent_OnOwnerTagsChanged, "OnOwnerTagsChanged" }, // 2054554649
		{ &Z_Construct_UFunction_URTSOrderComponent_OnSelected, "OnSelected" }, // 4235288762
		{ &Z_Construct_UFunction_URTSOrderComponent_OnTargetTagsChanged, "OnTargetTagsChanged" }, // 695260146
		{ &Z_Construct_UFunction_URTSOrderComponent_ReceivedCurrentOrder, "ReceivedCurrentOrder" }, // 617458851
		{ &Z_Construct_UFunction_URTSOrderComponent_ReceivedOrderQueue, "ReceivedOrderQueue" }, // 2588137625
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URTSOrderComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URTSOrderComponent_Statics::NewProp_OnOrderChanged = { "OnOrderChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSOrderComponent, OnOrderChanged), Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnOrderChanged_MetaData), NewProp_OnOrderChanged_MetaData) }; // 2588912236
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URTSOrderComponent_Statics::NewProp_OnOrderEnqueued = { "OnOrderEnqueued", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSOrderComponent, OnOrderEnqueued), Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderEnqueuedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnOrderEnqueued_MetaData), NewProp_OnOrderEnqueued_MetaData) }; // 2007829938
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URTSOrderComponent_Statics::NewProp_OnOrderQueueCleared = { "OnOrderQueueCleared", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSOrderComponent, OnOrderQueueCleared), Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderQueueClearedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnOrderQueueCleared_MetaData), NewProp_OnOrderQueueCleared_MetaData) }; // 940135849
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URTSOrderComponent_Statics::NewProp_CurrentOrder = { "CurrentOrder", "ReceivedCurrentOrder", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSOrderComponent, CurrentOrder), Z_Construct_UScriptStruct_FRTSOrderData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentOrder_MetaData), NewProp_CurrentOrder_MetaData) }; // 1083319845
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URTSOrderComponent_Statics::NewProp_LastOrder = { "LastOrder", "ReceivedCurrentOrder", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSOrderComponent, LastOrder), Z_Construct_UScriptStruct_FRTSOrderData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastOrder_MetaData), NewProp_LastOrder_MetaData) }; // 1083319845
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URTSOrderComponent_Statics::NewProp_OrderQueue_Inner = { "OrderQueue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRTSOrderData, METADATA_PARAMS(0, nullptr) }; // 1083319845
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URTSOrderComponent_Statics::NewProp_OrderQueue = { "OrderQueue", "ReceivedOrderQueue", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSOrderComponent, OrderQueue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderQueue_MetaData), NewProp_OrderQueue_MetaData) }; // 1083319845
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_URTSOrderComponent_Statics::NewProp_StopOrder = { "StopOrder", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSOrderComponent, StopOrder), Z_Construct_UClass_URTSOrder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopOrder_MetaData), NewProp_StopOrder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URTSOrderComponent_Statics::NewProp_OrderPreviewActors_Inner = { "OrderPreviewActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URTSOrderComponent_Statics::NewProp_OrderPreviewActors = { "OrderPreviewActors", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSOrderComponent, OrderPreviewActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderPreviewActors_MetaData), NewProp_OrderPreviewActors_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_URTSOrderComponent_Statics::NewProp_OrderPreviewActorClass = { "OrderPreviewActorClass", nullptr, (EPropertyFlags)0x0044000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSOrderComponent, OrderPreviewActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderPreviewActorClass_MetaData), NewProp_OrderPreviewActorClass_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_URTSOrderComponent_Statics::NewProp_BeginConstructionOrder = { "BeginConstructionOrder", nullptr, (EPropertyFlags)0x0044000000010015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSOrderComponent, BeginConstructionOrder), Z_Construct_UClass_URTSOrder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeginConstructionOrder_MetaData), NewProp_BeginConstructionOrder_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URTSOrderComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderComponent_Statics::NewProp_OnOrderChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderComponent_Statics::NewProp_OnOrderEnqueued,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderComponent_Statics::NewProp_OnOrderQueueCleared,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderComponent_Statics::NewProp_CurrentOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderComponent_Statics::NewProp_LastOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderComponent_Statics::NewProp_OrderQueue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderComponent_Statics::NewProp_OrderQueue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderComponent_Statics::NewProp_StopOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderComponent_Statics::NewProp_OrderPreviewActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderComponent_Statics::NewProp_OrderPreviewActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderComponent_Statics::NewProp_OrderPreviewActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderComponent_Statics::NewProp_BeginConstructionOrder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTSOrderComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URTSOrderComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ColonyOrders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTSOrderComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URTSOrderComponent_Statics::ClassParams = {
	&URTSOrderComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URTSOrderComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URTSOrderComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URTSOrderComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_URTSOrderComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URTSOrderComponent()
{
	if (!Z_Registration_Info_UClass_URTSOrderComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URTSOrderComponent.OuterSingleton, Z_Construct_UClass_URTSOrderComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URTSOrderComponent.OuterSingleton;
}
template<> COLONYORDERS_API UClass* StaticClass<URTSOrderComponent>()
{
	return URTSOrderComponent::StaticClass();
}
void URTSOrderComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_CurrentOrder(TEXT("CurrentOrder"));
	static const FName Name_LastOrder(TEXT("LastOrder"));
	static const FName Name_OrderQueue(TEXT("OrderQueue"));
	const bool bIsValid = true
		&& Name_CurrentOrder == ClassReps[(int32)ENetFields_Private::CurrentOrder].Property->GetFName()
		&& Name_LastOrder == ClassReps[(int32)ENetFields_Private::LastOrder].Property->GetFName()
		&& Name_OrderQueue == ClassReps[(int32)ENetFields_Private::OrderQueue].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in URTSOrderComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URTSOrderComponent);
URTSOrderComponent::~URTSOrderComponent() {}
// End Class URTSOrderComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URTSOrderComponent, URTSOrderComponent::StaticClass, TEXT("URTSOrderComponent"), &Z_Registration_Info_UClass_URTSOrderComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URTSOrderComponent), 1345866284U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderComponent_h_1800449011(TEXT("/Script/ColonyOrders"),
	Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
