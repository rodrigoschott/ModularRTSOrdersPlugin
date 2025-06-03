// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ColonyOrders/Public/Orders/RTSBlackboardHelper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSBlackboardHelper() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTNode_NoRegister();
COLONYORDERS_API UClass* Z_Construct_UClass_URTSBlackboardHelper();
COLONYORDERS_API UClass* Z_Construct_UClass_URTSBlackboardHelper_NoRegister();
COLONYORDERS_API UClass* Z_Construct_UClass_URTSOrder_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_ColonyOrders();
// End Cross Module References

// Begin Class URTSBlackboardHelper Function GetBlackboardOrderHomeLocation
struct Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderHomeLocation_Statics
{
	struct RTSBlackboardHelper_eventGetBlackboardOrderHomeLocation_Parms
	{
		UBTNode* NodeOwner;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Public/Orders/RTSBlackboardHelper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderHomeLocation_Statics::NewProp_NodeOwner = { "NodeOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSBlackboardHelper_eventGetBlackboardOrderHomeLocation_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderHomeLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSBlackboardHelper_eventGetBlackboardOrderHomeLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderHomeLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderHomeLocation_Statics::NewProp_NodeOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderHomeLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderHomeLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderHomeLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSBlackboardHelper, nullptr, "GetBlackboardOrderHomeLocation", nullptr, nullptr, Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderHomeLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderHomeLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderHomeLocation_Statics::RTSBlackboardHelper_eventGetBlackboardOrderHomeLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderHomeLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderHomeLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderHomeLocation_Statics::RTSBlackboardHelper_eventGetBlackboardOrderHomeLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderHomeLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderHomeLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSBlackboardHelper::execGetBlackboardOrderHomeLocation)
{
	P_GET_OBJECT(UBTNode,Z_Param_NodeOwner);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=URTSBlackboardHelper::GetBlackboardOrderHomeLocation(Z_Param_NodeOwner);
	P_NATIVE_END;
}
// End Class URTSBlackboardHelper Function GetBlackboardOrderHomeLocation

// Begin Class URTSBlackboardHelper Function GetBlackboardOrderIndex
struct Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderIndex_Statics
{
	struct RTSBlackboardHelper_eventGetBlackboardOrderIndex_Parms
	{
		UBTNode* NodeOwner;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Public/Orders/RTSBlackboardHelper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderIndex_Statics::NewProp_NodeOwner = { "NodeOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSBlackboardHelper_eventGetBlackboardOrderIndex_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSBlackboardHelper_eventGetBlackboardOrderIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderIndex_Statics::NewProp_NodeOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSBlackboardHelper, nullptr, "GetBlackboardOrderIndex", nullptr, nullptr, Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderIndex_Statics::RTSBlackboardHelper_eventGetBlackboardOrderIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderIndex_Statics::RTSBlackboardHelper_eventGetBlackboardOrderIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSBlackboardHelper::execGetBlackboardOrderIndex)
{
	P_GET_OBJECT(UBTNode,Z_Param_NodeOwner);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=URTSBlackboardHelper::GetBlackboardOrderIndex(Z_Param_NodeOwner);
	P_NATIVE_END;
}
// End Class URTSBlackboardHelper Function GetBlackboardOrderIndex

// Begin Class URTSBlackboardHelper Function GetBlackboardOrderLocation
struct Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderLocation_Statics
{
	struct RTSBlackboardHelper_eventGetBlackboardOrderLocation_Parms
	{
		UBTNode* NodeOwner;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Public/Orders/RTSBlackboardHelper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderLocation_Statics::NewProp_NodeOwner = { "NodeOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSBlackboardHelper_eventGetBlackboardOrderLocation_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSBlackboardHelper_eventGetBlackboardOrderLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderLocation_Statics::NewProp_NodeOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSBlackboardHelper, nullptr, "GetBlackboardOrderLocation", nullptr, nullptr, Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderLocation_Statics::RTSBlackboardHelper_eventGetBlackboardOrderLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderLocation_Statics::RTSBlackboardHelper_eventGetBlackboardOrderLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSBlackboardHelper::execGetBlackboardOrderLocation)
{
	P_GET_OBJECT(UBTNode,Z_Param_NodeOwner);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=URTSBlackboardHelper::GetBlackboardOrderLocation(Z_Param_NodeOwner);
	P_NATIVE_END;
}
// End Class URTSBlackboardHelper Function GetBlackboardOrderLocation

// Begin Class URTSBlackboardHelper Function GetBlackboardOrderRange
struct Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderRange_Statics
{
	struct RTSBlackboardHelper_eventGetBlackboardOrderRange_Parms
	{
		UBTNode* NodeOwner;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Public/Orders/RTSBlackboardHelper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderRange_Statics::NewProp_NodeOwner = { "NodeOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSBlackboardHelper_eventGetBlackboardOrderRange_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSBlackboardHelper_eventGetBlackboardOrderRange_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderRange_Statics::NewProp_NodeOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSBlackboardHelper, nullptr, "GetBlackboardOrderRange", nullptr, nullptr, Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderRange_Statics::RTSBlackboardHelper_eventGetBlackboardOrderRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderRange_Statics::RTSBlackboardHelper_eventGetBlackboardOrderRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSBlackboardHelper::execGetBlackboardOrderRange)
{
	P_GET_OBJECT(UBTNode,Z_Param_NodeOwner);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=URTSBlackboardHelper::GetBlackboardOrderRange(Z_Param_NodeOwner);
	P_NATIVE_END;
}
// End Class URTSBlackboardHelper Function GetBlackboardOrderRange

// Begin Class URTSBlackboardHelper Function GetBlackboardOrderTarget
struct Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderTarget_Statics
{
	struct RTSBlackboardHelper_eventGetBlackboardOrderTarget_Parms
	{
		UBTNode* NodeOwner;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Public/Orders/RTSBlackboardHelper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderTarget_Statics::NewProp_NodeOwner = { "NodeOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSBlackboardHelper_eventGetBlackboardOrderTarget_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSBlackboardHelper_eventGetBlackboardOrderTarget_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderTarget_Statics::NewProp_NodeOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSBlackboardHelper, nullptr, "GetBlackboardOrderTarget", nullptr, nullptr, Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderTarget_Statics::RTSBlackboardHelper_eventGetBlackboardOrderTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderTarget_Statics::RTSBlackboardHelper_eventGetBlackboardOrderTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSBlackboardHelper::execGetBlackboardOrderTarget)
{
	P_GET_OBJECT(UBTNode,Z_Param_NodeOwner);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=URTSBlackboardHelper::GetBlackboardOrderTarget(Z_Param_NodeOwner);
	P_NATIVE_END;
}
// End Class URTSBlackboardHelper Function GetBlackboardOrderTarget

// Begin Class URTSBlackboardHelper Function GetBlackboardOrderType
struct Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderType_Statics
{
	struct RTSBlackboardHelper_eventGetBlackboardOrderType_Parms
	{
		UBTNode* NodeOwner;
		TSubclassOf<URTSOrder> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Public/Orders/RTSBlackboardHelper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderType_Statics::NewProp_NodeOwner = { "NodeOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSBlackboardHelper_eventGetBlackboardOrderType_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSBlackboardHelper_eventGetBlackboardOrderType_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_URTSOrder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderType_Statics::NewProp_NodeOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSBlackboardHelper, nullptr, "GetBlackboardOrderType", nullptr, nullptr, Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderType_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderType_Statics::RTSBlackboardHelper_eventGetBlackboardOrderType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderType_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderType_Statics::RTSBlackboardHelper_eventGetBlackboardOrderType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSBlackboardHelper::execGetBlackboardOrderType)
{
	P_GET_OBJECT(UBTNode,Z_Param_NodeOwner);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<URTSOrder>*)Z_Param__Result=URTSBlackboardHelper::GetBlackboardOrderType(Z_Param_NodeOwner);
	P_NATIVE_END;
}
// End Class URTSBlackboardHelper Function GetBlackboardOrderType

// Begin Class URTSBlackboardHelper
void URTSBlackboardHelper::StaticRegisterNativesURTSBlackboardHelper()
{
	UClass* Class = URTSBlackboardHelper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBlackboardOrderHomeLocation", &URTSBlackboardHelper::execGetBlackboardOrderHomeLocation },
		{ "GetBlackboardOrderIndex", &URTSBlackboardHelper::execGetBlackboardOrderIndex },
		{ "GetBlackboardOrderLocation", &URTSBlackboardHelper::execGetBlackboardOrderLocation },
		{ "GetBlackboardOrderRange", &URTSBlackboardHelper::execGetBlackboardOrderRange },
		{ "GetBlackboardOrderTarget", &URTSBlackboardHelper::execGetBlackboardOrderTarget },
		{ "GetBlackboardOrderType", &URTSBlackboardHelper::execGetBlackboardOrderType },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URTSBlackboardHelper);
UClass* Z_Construct_UClass_URTSBlackboardHelper_NoRegister()
{
	return URTSBlackboardHelper::StaticClass();
}
struct Z_Construct_UClass_URTSBlackboardHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Helper function for the behavior trees. */" },
#endif
		{ "IncludePath", "Orders/RTSBlackboardHelper.h" },
		{ "ModuleRelativePath", "Public/Orders/RTSBlackboardHelper.h" },
		{ "RestrictedToClasses", "BTNode" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helper function for the behavior trees." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderHomeLocation, "GetBlackboardOrderHomeLocation" }, // 3786962022
		{ &Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderIndex, "GetBlackboardOrderIndex" }, // 2970627237
		{ &Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderLocation, "GetBlackboardOrderLocation" }, // 416658280
		{ &Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderRange, "GetBlackboardOrderRange" }, // 3521704389
		{ &Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderTarget, "GetBlackboardOrderTarget" }, // 2051983242
		{ &Z_Construct_UFunction_URTSBlackboardHelper_GetBlackboardOrderType, "GetBlackboardOrderType" }, // 126621692
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URTSBlackboardHelper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URTSBlackboardHelper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ColonyOrders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTSBlackboardHelper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URTSBlackboardHelper_Statics::ClassParams = {
	&URTSBlackboardHelper::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URTSBlackboardHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_URTSBlackboardHelper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URTSBlackboardHelper()
{
	if (!Z_Registration_Info_UClass_URTSBlackboardHelper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URTSBlackboardHelper.OuterSingleton, Z_Construct_UClass_URTSBlackboardHelper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URTSBlackboardHelper.OuterSingleton;
}
template<> COLONYORDERS_API UClass* StaticClass<URTSBlackboardHelper>()
{
	return URTSBlackboardHelper::StaticClass();
}
URTSBlackboardHelper::URTSBlackboardHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URTSBlackboardHelper);
URTSBlackboardHelper::~URTSBlackboardHelper() {}
// End Class URTSBlackboardHelper

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSBlackboardHelper_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URTSBlackboardHelper, URTSBlackboardHelper::StaticClass, TEXT("URTSBlackboardHelper"), &Z_Registration_Info_UClass_URTSBlackboardHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URTSBlackboardHelper), 4102103232U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSBlackboardHelper_h_1880285735(TEXT("/Script/ColonyOrders"),
	Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSBlackboardHelper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSBlackboardHelper_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
