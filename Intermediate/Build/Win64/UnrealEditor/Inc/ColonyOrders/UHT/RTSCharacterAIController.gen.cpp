// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ColonyOrders/Public/Orders/RTSCharacterAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSCharacterAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTNodeResult();
COLONYORDERS_API UClass* Z_Construct_UClass_ARTSCharacterAIController();
COLONYORDERS_API UClass* Z_Construct_UClass_ARTSCharacterAIController_NoRegister();
COLONYORDERS_API UClass* Z_Construct_UClass_URTSOrder_NoRegister();
COLONYORDERS_API UClass* Z_Construct_UClass_URTSStopOrder_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
UPackage* Z_Construct_UPackage__Script_ColonyOrders();
// End Cross Module References

// Begin Class ARTSCharacterAIController Function BehaviorTreeEnded
struct Z_Construct_UFunction_ARTSCharacterAIController_BehaviorTreeEnded_Statics
{
	struct RTSCharacterAIController_eventBehaviorTreeEnded_Parms
	{
		TEnumAsByte<EBTNodeResult::Type> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called from the behavior tree to indicate that it has ended with the passed result. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSCharacterAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called from the behavior tree to indicate that it has ended with the passed result." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARTSCharacterAIController_BehaviorTreeEnded_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSCharacterAIController_eventBehaviorTreeEnded_Parms, Result), Z_Construct_UEnum_AIModule_EBTNodeResult, METADATA_PARAMS(0, nullptr) }; // 3742194854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTSCharacterAIController_BehaviorTreeEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSCharacterAIController_BehaviorTreeEnded_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSCharacterAIController_BehaviorTreeEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSCharacterAIController_BehaviorTreeEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSCharacterAIController, nullptr, "BehaviorTreeEnded", nullptr, nullptr, Z_Construct_UFunction_ARTSCharacterAIController_BehaviorTreeEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSCharacterAIController_BehaviorTreeEnded_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARTSCharacterAIController_BehaviorTreeEnded_Statics::RTSCharacterAIController_eventBehaviorTreeEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSCharacterAIController_BehaviorTreeEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTSCharacterAIController_BehaviorTreeEnded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARTSCharacterAIController_BehaviorTreeEnded_Statics::RTSCharacterAIController_eventBehaviorTreeEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTSCharacterAIController_BehaviorTreeEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTSCharacterAIController_BehaviorTreeEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTSCharacterAIController::execBehaviorTreeEnded)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BehaviorTreeEnded(EBTNodeResult::Type(Z_Param_Result));
	P_NATIVE_END;
}
// End Class ARTSCharacterAIController Function BehaviorTreeEnded

// Begin Class ARTSCharacterAIController Function GetBuildingClass
struct Z_Construct_UFunction_ARTSCharacterAIController_GetBuildingClass_Statics
{
	struct RTSCharacterAIController_eventGetBuildingClass_Parms
	{
		TSubclassOf<AActor> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the building class of the current order. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSCharacterAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the building class of the current order." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ARTSCharacterAIController_GetBuildingClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSCharacterAIController_eventGetBuildingClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTSCharacterAIController_GetBuildingClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSCharacterAIController_GetBuildingClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSCharacterAIController_GetBuildingClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSCharacterAIController_GetBuildingClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSCharacterAIController, nullptr, "GetBuildingClass", nullptr, nullptr, Z_Construct_UFunction_ARTSCharacterAIController_GetBuildingClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSCharacterAIController_GetBuildingClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARTSCharacterAIController_GetBuildingClass_Statics::RTSCharacterAIController_eventGetBuildingClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSCharacterAIController_GetBuildingClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTSCharacterAIController_GetBuildingClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARTSCharacterAIController_GetBuildingClass_Statics::RTSCharacterAIController_eventGetBuildingClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTSCharacterAIController_GetBuildingClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTSCharacterAIController_GetBuildingClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTSCharacterAIController::execGetBuildingClass)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<AActor>*)Z_Param__Result=P_THIS->GetBuildingClass();
	P_NATIVE_END;
}
// End Class ARTSCharacterAIController Function GetBuildingClass

// Begin Class ARTSCharacterAIController Function GetStopOrder
struct Z_Construct_UFunction_ARTSCharacterAIController_GetStopOrder_Statics
{
	struct RTSCharacterAIController_eventGetStopOrder_Parms
	{
		TSoftClassPtr<URTSStopOrder>  ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~ End AActor Interface\n" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSCharacterAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_ARTSCharacterAIController_GetStopOrder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSCharacterAIController_eventGetStopOrder_Parms, ReturnValue), Z_Construct_UClass_URTSStopOrder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTSCharacterAIController_GetStopOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSCharacterAIController_GetStopOrder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSCharacterAIController_GetStopOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSCharacterAIController_GetStopOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSCharacterAIController, nullptr, "GetStopOrder", nullptr, nullptr, Z_Construct_UFunction_ARTSCharacterAIController_GetStopOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSCharacterAIController_GetStopOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARTSCharacterAIController_GetStopOrder_Statics::RTSCharacterAIController_eventGetStopOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSCharacterAIController_GetStopOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTSCharacterAIController_GetStopOrder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARTSCharacterAIController_GetStopOrder_Statics::RTSCharacterAIController_eventGetStopOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTSCharacterAIController_GetStopOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTSCharacterAIController_GetStopOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTSCharacterAIController::execGetStopOrder)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSoftClassPtr<URTSStopOrder> *)Z_Param__Result=P_THIS->GetStopOrder();
	P_NATIVE_END;
}
// End Class ARTSCharacterAIController Function GetStopOrder

// Begin Class ARTSCharacterAIController Function HasOrder
struct Z_Construct_UFunction_ARTSCharacterAIController_HasOrder_Statics
{
	struct RTSCharacterAIController_eventHasOrder_Parms
	{
		TSubclassOf<URTSOrder> OrderType;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Checks whether the pawn has an order of the specified type. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSCharacterAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks whether the pawn has an order of the specified type." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_OrderType;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ARTSCharacterAIController_HasOrder_Statics::NewProp_OrderType = { "OrderType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSCharacterAIController_eventHasOrder_Parms, OrderType), Z_Construct_UClass_UClass, Z_Construct_UClass_URTSOrder_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ARTSCharacterAIController_HasOrder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTSCharacterAIController_eventHasOrder_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARTSCharacterAIController_HasOrder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTSCharacterAIController_eventHasOrder_Parms), &Z_Construct_UFunction_ARTSCharacterAIController_HasOrder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTSCharacterAIController_HasOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSCharacterAIController_HasOrder_Statics::NewProp_OrderType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSCharacterAIController_HasOrder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSCharacterAIController_HasOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSCharacterAIController_HasOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSCharacterAIController, nullptr, "HasOrder", nullptr, nullptr, Z_Construct_UFunction_ARTSCharacterAIController_HasOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSCharacterAIController_HasOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARTSCharacterAIController_HasOrder_Statics::RTSCharacterAIController_eventHasOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSCharacterAIController_HasOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTSCharacterAIController_HasOrder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARTSCharacterAIController_HasOrder_Statics::RTSCharacterAIController_eventHasOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTSCharacterAIController_HasOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTSCharacterAIController_HasOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTSCharacterAIController::execHasOrder)
{
	P_GET_OBJECT(UClass,Z_Param_OrderType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasOrder(Z_Param_OrderType);
	P_NATIVE_END;
}
// End Class ARTSCharacterAIController Function HasOrder

// Begin Class ARTSCharacterAIController
void ARTSCharacterAIController::StaticRegisterNativesARTSCharacterAIController()
{
	UClass* Class = ARTSCharacterAIController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BehaviorTreeEnded", &ARTSCharacterAIController::execBehaviorTreeEnded },
		{ "GetBuildingClass", &ARTSCharacterAIController::execGetBuildingClass },
		{ "GetStopOrder", &ARTSCharacterAIController::execGetStopOrder },
		{ "HasOrder", &ARTSCharacterAIController::execHasOrder },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARTSCharacterAIController);
UClass* Z_Construct_UClass_ARTSCharacterAIController_NoRegister()
{
	return ARTSCharacterAIController::StaticClass();
}
struct Z_Construct_UClass_ARTSCharacterAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * AI controller that drives RTS unit movement and orders.\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Orders/RTSCharacterAIController.h" },
		{ "ModuleRelativePath", "Public/Orders/RTSCharacterAIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AI controller that drives RTS unit movement and orders." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackTargetDetectionChannels_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Collision object types that are used to detect attack targets. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSCharacterAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collision object types that are used to detect attack targets." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FindLocationDetectionChannels_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Collision object types that are used to find free locations. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSCharacterAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collision object types that are used to find free locations." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopOrder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The order to stop the character and put him in the idle state. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSCharacterAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The order to stop the character and put him in the idle state." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterBlackboardAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Blackboard to use for holding all data relevant to the character AI. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSCharacterAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blackboard to use for holding all data relevant to the character AI." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttackTargetDetectionChannels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AttackTargetDetectionChannels;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FindLocationDetectionChannels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FindLocationDetectionChannels;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_StopOrder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterBlackboardAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARTSCharacterAIController_BehaviorTreeEnded, "BehaviorTreeEnded" }, // 2866766630
		{ &Z_Construct_UFunction_ARTSCharacterAIController_GetBuildingClass, "GetBuildingClass" }, // 946013533
		{ &Z_Construct_UFunction_ARTSCharacterAIController_GetStopOrder, "GetStopOrder" }, // 4238378597
		{ &Z_Construct_UFunction_ARTSCharacterAIController_HasOrder, "HasOrder" }, // 3289319070
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARTSCharacterAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARTSCharacterAIController_Statics::NewProp_AttackTargetDetectionChannels_Inner = { "AttackTargetDetectionChannels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1798967895
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARTSCharacterAIController_Statics::NewProp_AttackTargetDetectionChannels = { "AttackTargetDetectionChannels", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSCharacterAIController, AttackTargetDetectionChannels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackTargetDetectionChannels_MetaData), NewProp_AttackTargetDetectionChannels_MetaData) }; // 1798967895
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARTSCharacterAIController_Statics::NewProp_FindLocationDetectionChannels_Inner = { "FindLocationDetectionChannels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1798967895
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARTSCharacterAIController_Statics::NewProp_FindLocationDetectionChannels = { "FindLocationDetectionChannels", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSCharacterAIController, FindLocationDetectionChannels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FindLocationDetectionChannels_MetaData), NewProp_FindLocationDetectionChannels_MetaData) }; // 1798967895
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_ARTSCharacterAIController_Statics::NewProp_StopOrder = { "StopOrder", nullptr, (EPropertyFlags)0x0044000000010015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSCharacterAIController, StopOrder), Z_Construct_UClass_URTSStopOrder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopOrder_MetaData), NewProp_StopOrder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTSCharacterAIController_Statics::NewProp_CharacterBlackboardAsset = { "CharacterBlackboardAsset", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSCharacterAIController, CharacterBlackboardAsset), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterBlackboardAsset_MetaData), NewProp_CharacterBlackboardAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARTSCharacterAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCharacterAIController_Statics::NewProp_AttackTargetDetectionChannels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCharacterAIController_Statics::NewProp_AttackTargetDetectionChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCharacterAIController_Statics::NewProp_FindLocationDetectionChannels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCharacterAIController_Statics::NewProp_FindLocationDetectionChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCharacterAIController_Statics::NewProp_StopOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCharacterAIController_Statics::NewProp_CharacterBlackboardAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCharacterAIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARTSCharacterAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_ColonyOrders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCharacterAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARTSCharacterAIController_Statics::ClassParams = {
	&ARTSCharacterAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARTSCharacterAIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCharacterAIController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCharacterAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_ARTSCharacterAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARTSCharacterAIController()
{
	if (!Z_Registration_Info_UClass_ARTSCharacterAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARTSCharacterAIController.OuterSingleton, Z_Construct_UClass_ARTSCharacterAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARTSCharacterAIController.OuterSingleton;
}
template<> COLONYORDERS_API UClass* StaticClass<ARTSCharacterAIController>()
{
	return ARTSCharacterAIController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARTSCharacterAIController);
ARTSCharacterAIController::~ARTSCharacterAIController() {}
// End Class ARTSCharacterAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSCharacterAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARTSCharacterAIController, ARTSCharacterAIController::StaticClass, TEXT("ARTSCharacterAIController"), &Z_Registration_Info_UClass_ARTSCharacterAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARTSCharacterAIController), 3351819746U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSCharacterAIController_h_2254309370(TEXT("/Script/ColonyOrders"),
	Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSCharacterAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSCharacterAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
