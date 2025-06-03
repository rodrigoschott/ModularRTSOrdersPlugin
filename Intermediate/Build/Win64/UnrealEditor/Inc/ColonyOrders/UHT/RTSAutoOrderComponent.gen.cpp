// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ColonyOrders/Public/Orders/RTSAutoOrderComponent.h"
#include "ColonyOrders/Public/Orders/RTSOrderData.h"
#include "ColonyOrders/Public/Orders/RTSOrderTypeWithIndex.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSAutoOrderComponent() {}

// Begin Cross Module References
COLONYORDERS_API UClass* Z_Construct_UClass_URTSAutoOrderComponent();
COLONYORDERS_API UClass* Z_Construct_UClass_URTSAutoOrderComponent_NoRegister();
COLONYORDERS_API UScriptStruct* Z_Construct_UScriptStruct_FRTSOrderData();
COLONYORDERS_API UScriptStruct* Z_Construct_UScriptStruct_FRTSOrderTypeWithIndex();
ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_ColonyOrders();
// End Cross Module References

// Begin Class URTSAutoOrderComponent Function GetHumanPlayerAutoOrderState
struct Z_Construct_UFunction_URTSAutoOrderComponent_GetHumanPlayerAutoOrderState_Statics
{
	struct RTSAutoOrderComponent_eventGetHumanPlayerAutoOrderState_Parms
	{
		FRTSOrderTypeWithIndex Order;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets whether the the specified auto order is enabled to be issued automatically. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSAutoOrderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets whether the the specified auto order is enabled to be issued automatically." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Order_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Order;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAutoOrderComponent_GetHumanPlayerAutoOrderState_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAutoOrderComponent_eventGetHumanPlayerAutoOrderState_Parms, Order), Z_Construct_UScriptStruct_FRTSOrderTypeWithIndex, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Order_MetaData), NewProp_Order_MetaData) }; // 305801775
void Z_Construct_UFunction_URTSAutoOrderComponent_GetHumanPlayerAutoOrderState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTSAutoOrderComponent_eventGetHumanPlayerAutoOrderState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTSAutoOrderComponent_GetHumanPlayerAutoOrderState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTSAutoOrderComponent_eventGetHumanPlayerAutoOrderState_Parms), &Z_Construct_UFunction_URTSAutoOrderComponent_GetHumanPlayerAutoOrderState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAutoOrderComponent_GetHumanPlayerAutoOrderState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAutoOrderComponent_GetHumanPlayerAutoOrderState_Statics::NewProp_Order,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAutoOrderComponent_GetHumanPlayerAutoOrderState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAutoOrderComponent_GetHumanPlayerAutoOrderState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAutoOrderComponent_GetHumanPlayerAutoOrderState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAutoOrderComponent, nullptr, "GetHumanPlayerAutoOrderState", nullptr, nullptr, Z_Construct_UFunction_URTSAutoOrderComponent_GetHumanPlayerAutoOrderState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAutoOrderComponent_GetHumanPlayerAutoOrderState_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAutoOrderComponent_GetHumanPlayerAutoOrderState_Statics::RTSAutoOrderComponent_eventGetHumanPlayerAutoOrderState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAutoOrderComponent_GetHumanPlayerAutoOrderState_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAutoOrderComponent_GetHumanPlayerAutoOrderState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAutoOrderComponent_GetHumanPlayerAutoOrderState_Statics::RTSAutoOrderComponent_eventGetHumanPlayerAutoOrderState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAutoOrderComponent_GetHumanPlayerAutoOrderState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAutoOrderComponent_GetHumanPlayerAutoOrderState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAutoOrderComponent::execGetHumanPlayerAutoOrderState)
{
	P_GET_STRUCT_REF(FRTSOrderTypeWithIndex,Z_Param_Out_Order);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetHumanPlayerAutoOrderState(Z_Param_Out_Order);
	P_NATIVE_END;
}
// End Class URTSAutoOrderComponent Function GetHumanPlayerAutoOrderState

// Begin Class URTSAutoOrderComponent Function IsHumanPlayerAutoOrder
struct Z_Construct_UFunction_URTSAutoOrderComponent_IsHumanPlayerAutoOrder_Statics
{
	struct RTSAutoOrderComponent_eventIsHumanPlayerAutoOrder_Parms
	{
		FRTSOrderTypeWithIndex Order;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the specified order is a togglable auto order for the human player. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSAutoOrderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the specified order is a togglable auto order for the human player." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Order_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Order;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAutoOrderComponent_IsHumanPlayerAutoOrder_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAutoOrderComponent_eventIsHumanPlayerAutoOrder_Parms, Order), Z_Construct_UScriptStruct_FRTSOrderTypeWithIndex, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Order_MetaData), NewProp_Order_MetaData) }; // 305801775
void Z_Construct_UFunction_URTSAutoOrderComponent_IsHumanPlayerAutoOrder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTSAutoOrderComponent_eventIsHumanPlayerAutoOrder_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTSAutoOrderComponent_IsHumanPlayerAutoOrder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTSAutoOrderComponent_eventIsHumanPlayerAutoOrder_Parms), &Z_Construct_UFunction_URTSAutoOrderComponent_IsHumanPlayerAutoOrder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAutoOrderComponent_IsHumanPlayerAutoOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAutoOrderComponent_IsHumanPlayerAutoOrder_Statics::NewProp_Order,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAutoOrderComponent_IsHumanPlayerAutoOrder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAutoOrderComponent_IsHumanPlayerAutoOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAutoOrderComponent_IsHumanPlayerAutoOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAutoOrderComponent, nullptr, "IsHumanPlayerAutoOrder", nullptr, nullptr, Z_Construct_UFunction_URTSAutoOrderComponent_IsHumanPlayerAutoOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAutoOrderComponent_IsHumanPlayerAutoOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAutoOrderComponent_IsHumanPlayerAutoOrder_Statics::RTSAutoOrderComponent_eventIsHumanPlayerAutoOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAutoOrderComponent_IsHumanPlayerAutoOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAutoOrderComponent_IsHumanPlayerAutoOrder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAutoOrderComponent_IsHumanPlayerAutoOrder_Statics::RTSAutoOrderComponent_eventIsHumanPlayerAutoOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAutoOrderComponent_IsHumanPlayerAutoOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAutoOrderComponent_IsHumanPlayerAutoOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAutoOrderComponent::execIsHumanPlayerAutoOrder)
{
	P_GET_STRUCT_REF(FRTSOrderTypeWithIndex,Z_Param_Out_Order);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsHumanPlayerAutoOrder(Z_Param_Out_Order);
	P_NATIVE_END;
}
// End Class URTSAutoOrderComponent Function IsHumanPlayerAutoOrder

// Begin Class URTSAutoOrderComponent Function OnOrderChanged
struct Z_Construct_UFunction_URTSAutoOrderComponent_OnOrderChanged_Statics
{
	struct RTSAutoOrderComponent_eventOnOrderChanged_Parms
	{
		FRTSOrderData NewOrder;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Orders/RTSAutoOrderComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewOrder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewOrder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAutoOrderComponent_OnOrderChanged_Statics::NewProp_NewOrder = { "NewOrder", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAutoOrderComponent_eventOnOrderChanged_Parms, NewOrder), Z_Construct_UScriptStruct_FRTSOrderData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewOrder_MetaData), NewProp_NewOrder_MetaData) }; // 1083319845
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAutoOrderComponent_OnOrderChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAutoOrderComponent_OnOrderChanged_Statics::NewProp_NewOrder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAutoOrderComponent_OnOrderChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAutoOrderComponent_OnOrderChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAutoOrderComponent, nullptr, "OnOrderChanged", nullptr, nullptr, Z_Construct_UFunction_URTSAutoOrderComponent_OnOrderChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAutoOrderComponent_OnOrderChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAutoOrderComponent_OnOrderChanged_Statics::RTSAutoOrderComponent_eventOnOrderChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAutoOrderComponent_OnOrderChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAutoOrderComponent_OnOrderChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAutoOrderComponent_OnOrderChanged_Statics::RTSAutoOrderComponent_eventOnOrderChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAutoOrderComponent_OnOrderChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAutoOrderComponent_OnOrderChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAutoOrderComponent::execOnOrderChanged)
{
	P_GET_STRUCT_REF(FRTSOrderData,Z_Param_Out_NewOrder);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOrderChanged(Z_Param_Out_NewOrder);
	P_NATIVE_END;
}
// End Class URTSAutoOrderComponent Function OnOrderChanged

// Begin Class URTSAutoOrderComponent Function OnOwnerChanged
struct Z_Construct_UFunction_URTSAutoOrderComponent_OnOwnerChanged_Statics
{
	struct RTSAutoOrderComponent_eventOnOwnerChanged_Parms
	{
		APlayerState* PreviousOwner;
		APlayerState* NewOwner;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Orders/RTSAutoOrderComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviousOwner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAutoOrderComponent_OnOwnerChanged_Statics::NewProp_PreviousOwner = { "PreviousOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAutoOrderComponent_eventOnOwnerChanged_Parms, PreviousOwner), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAutoOrderComponent_OnOwnerChanged_Statics::NewProp_NewOwner = { "NewOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAutoOrderComponent_eventOnOwnerChanged_Parms, NewOwner), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAutoOrderComponent_OnOwnerChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAutoOrderComponent_OnOwnerChanged_Statics::NewProp_PreviousOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAutoOrderComponent_OnOwnerChanged_Statics::NewProp_NewOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAutoOrderComponent_OnOwnerChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAutoOrderComponent_OnOwnerChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAutoOrderComponent, nullptr, "OnOwnerChanged", nullptr, nullptr, Z_Construct_UFunction_URTSAutoOrderComponent_OnOwnerChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAutoOrderComponent_OnOwnerChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAutoOrderComponent_OnOwnerChanged_Statics::RTSAutoOrderComponent_eventOnOwnerChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAutoOrderComponent_OnOwnerChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAutoOrderComponent_OnOwnerChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAutoOrderComponent_OnOwnerChanged_Statics::RTSAutoOrderComponent_eventOnOwnerChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAutoOrderComponent_OnOwnerChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAutoOrderComponent_OnOwnerChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAutoOrderComponent::execOnOwnerChanged)
{
	P_GET_OBJECT(APlayerState,Z_Param_PreviousOwner);
	P_GET_OBJECT(APlayerState,Z_Param_NewOwner);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOwnerChanged(Z_Param_PreviousOwner,Z_Param_NewOwner);
	P_NATIVE_END;
}
// End Class URTSAutoOrderComponent Function OnOwnerChanged

// Begin Class URTSAutoOrderComponent Function SetHumanPlayerAutoOrderState
struct Z_Construct_UFunction_URTSAutoOrderComponent_SetHumanPlayerAutoOrderState_Statics
{
	struct RTSAutoOrderComponent_eventSetHumanPlayerAutoOrderState_Parms
	{
		FRTSOrderTypeWithIndex Order;
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets whether the specified auto order is enabled to be issued automatically. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSAutoOrderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets whether the specified auto order is enabled to be issued automatically." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Order_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Order;
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAutoOrderComponent_SetHumanPlayerAutoOrderState_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAutoOrderComponent_eventSetHumanPlayerAutoOrderState_Parms, Order), Z_Construct_UScriptStruct_FRTSOrderTypeWithIndex, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Order_MetaData), NewProp_Order_MetaData) }; // 305801775
void Z_Construct_UFunction_URTSAutoOrderComponent_SetHumanPlayerAutoOrderState_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((RTSAutoOrderComponent_eventSetHumanPlayerAutoOrderState_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTSAutoOrderComponent_SetHumanPlayerAutoOrderState_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTSAutoOrderComponent_eventSetHumanPlayerAutoOrderState_Parms), &Z_Construct_UFunction_URTSAutoOrderComponent_SetHumanPlayerAutoOrderState_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAutoOrderComponent_SetHumanPlayerAutoOrderState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAutoOrderComponent_SetHumanPlayerAutoOrderState_Statics::NewProp_Order,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAutoOrderComponent_SetHumanPlayerAutoOrderState_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAutoOrderComponent_SetHumanPlayerAutoOrderState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAutoOrderComponent_SetHumanPlayerAutoOrderState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAutoOrderComponent, nullptr, "SetHumanPlayerAutoOrderState", nullptr, nullptr, Z_Construct_UFunction_URTSAutoOrderComponent_SetHumanPlayerAutoOrderState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAutoOrderComponent_SetHumanPlayerAutoOrderState_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAutoOrderComponent_SetHumanPlayerAutoOrderState_Statics::RTSAutoOrderComponent_eventSetHumanPlayerAutoOrderState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAutoOrderComponent_SetHumanPlayerAutoOrderState_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAutoOrderComponent_SetHumanPlayerAutoOrderState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAutoOrderComponent_SetHumanPlayerAutoOrderState_Statics::RTSAutoOrderComponent_eventSetHumanPlayerAutoOrderState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAutoOrderComponent_SetHumanPlayerAutoOrderState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAutoOrderComponent_SetHumanPlayerAutoOrderState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAutoOrderComponent::execSetHumanPlayerAutoOrderState)
{
	P_GET_STRUCT_REF(FRTSOrderTypeWithIndex,Z_Param_Out_Order);
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHumanPlayerAutoOrderState(Z_Param_Out_Order,Z_Param_bEnable);
	P_NATIVE_END;
}
// End Class URTSAutoOrderComponent Function SetHumanPlayerAutoOrderState

// Begin Class URTSAutoOrderComponent
void URTSAutoOrderComponent::StaticRegisterNativesURTSAutoOrderComponent()
{
	UClass* Class = URTSAutoOrderComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetHumanPlayerAutoOrderState", &URTSAutoOrderComponent::execGetHumanPlayerAutoOrderState },
		{ "IsHumanPlayerAutoOrder", &URTSAutoOrderComponent::execIsHumanPlayerAutoOrder },
		{ "OnOrderChanged", &URTSAutoOrderComponent::execOnOrderChanged },
		{ "OnOwnerChanged", &URTSAutoOrderComponent::execOnOwnerChanged },
		{ "SetHumanPlayerAutoOrderState", &URTSAutoOrderComponent::execSetHumanPlayerAutoOrderState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URTSAutoOrderComponent);
UClass* Z_Construct_UClass_URTSAutoOrderComponent_NoRegister()
{
	return URTSAutoOrderComponent::StaticClass();
}
struct Z_Construct_UClass_URTSAutoOrderComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Manages the orders of a unit that should be issued automatically.\n */" },
#endif
		{ "IncludePath", "Orders/RTSAutoOrderComponent.h" },
		{ "ModuleRelativePath", "Public/Orders/RTSAutoOrderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Manages the orders of a unit that should be issued automatically." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HumanPlayerAutoOrderStates_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether an auto order is enabled to be issued automatically. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSAutoOrderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether an auto order is enabled to be issued automatically." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HumanPlayerAutoOrderStates_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HumanPlayerAutoOrderStates;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URTSAutoOrderComponent_GetHumanPlayerAutoOrderState, "GetHumanPlayerAutoOrderState" }, // 236429138
		{ &Z_Construct_UFunction_URTSAutoOrderComponent_IsHumanPlayerAutoOrder, "IsHumanPlayerAutoOrder" }, // 1392922331
		{ &Z_Construct_UFunction_URTSAutoOrderComponent_OnOrderChanged, "OnOrderChanged" }, // 2965752045
		{ &Z_Construct_UFunction_URTSAutoOrderComponent_OnOwnerChanged, "OnOwnerChanged" }, // 2545829037
		{ &Z_Construct_UFunction_URTSAutoOrderComponent_SetHumanPlayerAutoOrderState, "SetHumanPlayerAutoOrderState" }, // 102310050
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URTSAutoOrderComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URTSAutoOrderComponent_Statics::NewProp_HumanPlayerAutoOrderStates_Inner = { "HumanPlayerAutoOrderStates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URTSAutoOrderComponent_Statics::NewProp_HumanPlayerAutoOrderStates = { "HumanPlayerAutoOrderStates", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSAutoOrderComponent, HumanPlayerAutoOrderStates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HumanPlayerAutoOrderStates_MetaData), NewProp_HumanPlayerAutoOrderStates_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URTSAutoOrderComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSAutoOrderComponent_Statics::NewProp_HumanPlayerAutoOrderStates_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSAutoOrderComponent_Statics::NewProp_HumanPlayerAutoOrderStates,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTSAutoOrderComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URTSAutoOrderComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ColonyOrders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTSAutoOrderComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URTSAutoOrderComponent_Statics::ClassParams = {
	&URTSAutoOrderComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URTSAutoOrderComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URTSAutoOrderComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URTSAutoOrderComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_URTSAutoOrderComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URTSAutoOrderComponent()
{
	if (!Z_Registration_Info_UClass_URTSAutoOrderComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URTSAutoOrderComponent.OuterSingleton, Z_Construct_UClass_URTSAutoOrderComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URTSAutoOrderComponent.OuterSingleton;
}
template<> COLONYORDERS_API UClass* StaticClass<URTSAutoOrderComponent>()
{
	return URTSAutoOrderComponent::StaticClass();
}
void URTSAutoOrderComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_HumanPlayerAutoOrderStates(TEXT("HumanPlayerAutoOrderStates"));
	const bool bIsValid = true
		&& Name_HumanPlayerAutoOrderStates == ClassReps[(int32)ENetFields_Private::HumanPlayerAutoOrderStates].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in URTSAutoOrderComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URTSAutoOrderComponent);
URTSAutoOrderComponent::~URTSAutoOrderComponent() {}
// End Class URTSAutoOrderComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSAutoOrderComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URTSAutoOrderComponent, URTSAutoOrderComponent::StaticClass, TEXT("URTSAutoOrderComponent"), &Z_Registration_Info_UClass_URTSAutoOrderComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URTSAutoOrderComponent), 3924634401U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSAutoOrderComponent_h_3489728704(TEXT("/Script/ColonyOrders"),
	Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSAutoOrderComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSAutoOrderComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
