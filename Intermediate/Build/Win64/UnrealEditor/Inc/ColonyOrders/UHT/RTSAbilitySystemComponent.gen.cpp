// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ColonyOrders/Public/AbilitySystem/RTSAbilitySystemComponent.h"
#include "GameplayAbilities/Public/GameplayAbilitySpecHandle.h"
#include "GameplayAbilities/Public/ScalableFloat.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSAbilitySystemComponent() {}

// Begin Cross Module References
COLONYORDERS_API UClass* Z_Construct_UClass_URTSAbilitySystemComponent();
COLONYORDERS_API UClass* Z_Construct_UClass_URTSAbilitySystemComponent_NoRegister();
COLONYORDERS_API UClass* Z_Construct_UClass_URTSAutoOrderProvider_NoRegister();
COLONYORDERS_API UClass* Z_Construct_UClass_URTSUseAbilityOrder_NoRegister();
COLONYORDERS_API UFunction* Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentAbilityEndedSignature__DelegateSignature();
COLONYORDERS_API UFunction* Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentAbilityPointsChangedSignature__DelegateSignature();
COLONYORDERS_API UFunction* Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentCollectedXPChangedSignature__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_ColonyOrders();
// End Cross Module References

// Begin Delegate FRTSAbilitySystemComponentCollectedXPChangedSignature
struct Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentCollectedXPChangedSignature__DelegateSignature_Statics
{
	struct _Script_ColonyOrders_eventRTSAbilitySystemComponentCollectedXPChangedSignature_Parms
	{
		float OldCollectedXP;
		float NewCollectedXP;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OldCollectedXP;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewCollectedXP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentCollectedXPChangedSignature__DelegateSignature_Statics::NewProp_OldCollectedXP = { "OldCollectedXP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ColonyOrders_eventRTSAbilitySystemComponentCollectedXPChangedSignature_Parms, OldCollectedXP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentCollectedXPChangedSignature__DelegateSignature_Statics::NewProp_NewCollectedXP = { "NewCollectedXP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ColonyOrders_eventRTSAbilitySystemComponentCollectedXPChangedSignature_Parms, NewCollectedXP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentCollectedXPChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentCollectedXPChangedSignature__DelegateSignature_Statics::NewProp_OldCollectedXP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentCollectedXPChangedSignature__DelegateSignature_Statics::NewProp_NewCollectedXP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentCollectedXPChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentCollectedXPChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ColonyOrders, nullptr, "RTSAbilitySystemComponentCollectedXPChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentCollectedXPChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentCollectedXPChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentCollectedXPChangedSignature__DelegateSignature_Statics::_Script_ColonyOrders_eventRTSAbilitySystemComponentCollectedXPChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentCollectedXPChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentCollectedXPChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentCollectedXPChangedSignature__DelegateSignature_Statics::_Script_ColonyOrders_eventRTSAbilitySystemComponentCollectedXPChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentCollectedXPChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentCollectedXPChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FRTSAbilitySystemComponentCollectedXPChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& RTSAbilitySystemComponentCollectedXPChangedSignature, float OldCollectedXP, float NewCollectedXP)
{
	struct _Script_ColonyOrders_eventRTSAbilitySystemComponentCollectedXPChangedSignature_Parms
	{
		float OldCollectedXP;
		float NewCollectedXP;
	};
	_Script_ColonyOrders_eventRTSAbilitySystemComponentCollectedXPChangedSignature_Parms Parms;
	Parms.OldCollectedXP=OldCollectedXP;
	Parms.NewCollectedXP=NewCollectedXP;
	RTSAbilitySystemComponentCollectedXPChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FRTSAbilitySystemComponentCollectedXPChangedSignature

// Begin Delegate FRTSAbilitySystemComponentAbilityPointsChangedSignature
struct Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentAbilityPointsChangedSignature__DelegateSignature_Statics
{
	struct _Script_ColonyOrders_eventRTSAbilitySystemComponentAbilityPointsChangedSignature_Parms
	{
		int32 OldAbilityPoints;
		int32 NewAbilityPoints;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OldAbilityPoints;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewAbilityPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentAbilityPointsChangedSignature__DelegateSignature_Statics::NewProp_OldAbilityPoints = { "OldAbilityPoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ColonyOrders_eventRTSAbilitySystemComponentAbilityPointsChangedSignature_Parms, OldAbilityPoints), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentAbilityPointsChangedSignature__DelegateSignature_Statics::NewProp_NewAbilityPoints = { "NewAbilityPoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ColonyOrders_eventRTSAbilitySystemComponentAbilityPointsChangedSignature_Parms, NewAbilityPoints), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentAbilityPointsChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentAbilityPointsChangedSignature__DelegateSignature_Statics::NewProp_OldAbilityPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentAbilityPointsChangedSignature__DelegateSignature_Statics::NewProp_NewAbilityPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentAbilityPointsChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentAbilityPointsChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ColonyOrders, nullptr, "RTSAbilitySystemComponentAbilityPointsChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentAbilityPointsChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentAbilityPointsChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentAbilityPointsChangedSignature__DelegateSignature_Statics::_Script_ColonyOrders_eventRTSAbilitySystemComponentAbilityPointsChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentAbilityPointsChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentAbilityPointsChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentAbilityPointsChangedSignature__DelegateSignature_Statics::_Script_ColonyOrders_eventRTSAbilitySystemComponentAbilityPointsChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentAbilityPointsChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentAbilityPointsChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FRTSAbilitySystemComponentAbilityPointsChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& RTSAbilitySystemComponentAbilityPointsChangedSignature, int32 OldAbilityPoints, int32 NewAbilityPoints)
{
	struct _Script_ColonyOrders_eventRTSAbilitySystemComponentAbilityPointsChangedSignature_Parms
	{
		int32 OldAbilityPoints;
		int32 NewAbilityPoints;
	};
	_Script_ColonyOrders_eventRTSAbilitySystemComponentAbilityPointsChangedSignature_Parms Parms;
	Parms.OldAbilityPoints=OldAbilityPoints;
	Parms.NewAbilityPoints=NewAbilityPoints;
	RTSAbilitySystemComponentAbilityPointsChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FRTSAbilitySystemComponentAbilityPointsChangedSignature

// Begin Delegate FRTSAbilitySystemComponentAbilityEndedSignature
struct Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentAbilityEndedSignature__DelegateSignature_Statics
{
	struct _Script_ColonyOrders_eventRTSAbilitySystemComponentAbilityEndedSignature_Parms
	{
		TSubclassOf<UGameplayAbility> Ability;
		FGameplayAbilitySpecHandle AbilitySpecHandle;
		bool bWasCancelled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilitySpecHandle;
	static void NewProp_bWasCancelled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasCancelled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentAbilityEndedSignature__DelegateSignature_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ColonyOrders_eventRTSAbilitySystemComponentAbilityEndedSignature_Parms, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentAbilityEndedSignature__DelegateSignature_Statics::NewProp_AbilitySpecHandle = { "AbilitySpecHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ColonyOrders_eventRTSAbilitySystemComponentAbilityEndedSignature_Parms, AbilitySpecHandle), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 3490030742
void Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentAbilityEndedSignature__DelegateSignature_Statics::NewProp_bWasCancelled_SetBit(void* Obj)
{
	((_Script_ColonyOrders_eventRTSAbilitySystemComponentAbilityEndedSignature_Parms*)Obj)->bWasCancelled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentAbilityEndedSignature__DelegateSignature_Statics::NewProp_bWasCancelled = { "bWasCancelled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ColonyOrders_eventRTSAbilitySystemComponentAbilityEndedSignature_Parms), &Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentAbilityEndedSignature__DelegateSignature_Statics::NewProp_bWasCancelled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentAbilityEndedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentAbilityEndedSignature__DelegateSignature_Statics::NewProp_Ability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentAbilityEndedSignature__DelegateSignature_Statics::NewProp_AbilitySpecHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentAbilityEndedSignature__DelegateSignature_Statics::NewProp_bWasCancelled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentAbilityEndedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentAbilityEndedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ColonyOrders, nullptr, "RTSAbilitySystemComponentAbilityEndedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentAbilityEndedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentAbilityEndedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentAbilityEndedSignature__DelegateSignature_Statics::_Script_ColonyOrders_eventRTSAbilitySystemComponentAbilityEndedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentAbilityEndedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentAbilityEndedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentAbilityEndedSignature__DelegateSignature_Statics::_Script_ColonyOrders_eventRTSAbilitySystemComponentAbilityEndedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentAbilityEndedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentAbilityEndedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FRTSAbilitySystemComponentAbilityEndedSignature_DelegateWrapper(const FMulticastScriptDelegate& RTSAbilitySystemComponentAbilityEndedSignature, TSubclassOf<UGameplayAbility> Ability, FGameplayAbilitySpecHandle AbilitySpecHandle, bool bWasCancelled)
{
	struct _Script_ColonyOrders_eventRTSAbilitySystemComponentAbilityEndedSignature_Parms
	{
		TSubclassOf<UGameplayAbility> Ability;
		FGameplayAbilitySpecHandle AbilitySpecHandle;
		bool bWasCancelled;
	};
	_Script_ColonyOrders_eventRTSAbilitySystemComponentAbilityEndedSignature_Parms Parms;
	Parms.Ability=Ability;
	Parms.AbilitySpecHandle=AbilitySpecHandle;
	Parms.bWasCancelled=bWasCancelled ? true : false;
	RTSAbilitySystemComponentAbilityEndedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FRTSAbilitySystemComponentAbilityEndedSignature

// Begin Class URTSAbilitySystemComponent Function AddCollectedXP
struct Z_Construct_UFunction_URTSAbilitySystemComponent_AddCollectedXP_Statics
{
	struct RTSAbilitySystemComponent_eventAddCollectedXP_Parms
	{
		float AdditionalCollectedXP;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Adds the specified amount of XP to the actor. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds the specified amount of XP to the actor." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdditionalCollectedXP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTSAbilitySystemComponent_AddCollectedXP_Statics::NewProp_AdditionalCollectedXP = { "AdditionalCollectedXP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemComponent_eventAddCollectedXP_Parms, AdditionalCollectedXP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemComponent_AddCollectedXP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemComponent_AddCollectedXP_Statics::NewProp_AdditionalCollectedXP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_AddCollectedXP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemComponent_AddCollectedXP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemComponent, nullptr, "AddCollectedXP", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemComponent_AddCollectedXP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_AddCollectedXP_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemComponent_AddCollectedXP_Statics::RTSAbilitySystemComponent_eventAddCollectedXP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_AddCollectedXP_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemComponent_AddCollectedXP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemComponent_AddCollectedXP_Statics::RTSAbilitySystemComponent_eventAddCollectedXP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemComponent_AddCollectedXP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemComponent_AddCollectedXP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemComponent::execAddCollectedXP)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AdditionalCollectedXP);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddCollectedXP(Z_Param_AdditionalCollectedXP);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemComponent Function AddCollectedXP

// Begin Class URTSAbilitySystemComponent Function CanLevelUp
struct Z_Construct_UFunction_URTSAbilitySystemComponent_CanLevelUp_Statics
{
	struct RTSAbilitySystemComponent_eventCanLevelUp_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether this actor can level up.  */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether this actor can level up." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_URTSAbilitySystemComponent_CanLevelUp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTSAbilitySystemComponent_eventCanLevelUp_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTSAbilitySystemComponent_CanLevelUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTSAbilitySystemComponent_eventCanLevelUp_Parms), &Z_Construct_UFunction_URTSAbilitySystemComponent_CanLevelUp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemComponent_CanLevelUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemComponent_CanLevelUp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_CanLevelUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemComponent_CanLevelUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemComponent, nullptr, "CanLevelUp", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemComponent_CanLevelUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_CanLevelUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemComponent_CanLevelUp_Statics::RTSAbilitySystemComponent_eventCanLevelUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_CanLevelUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemComponent_CanLevelUp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemComponent_CanLevelUp_Statics::RTSAbilitySystemComponent_eventCanLevelUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemComponent_CanLevelUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemComponent_CanLevelUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemComponent::execCanLevelUp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanLevelUp();
	P_NATIVE_END;
}
// End Class URTSAbilitySystemComponent Function CanLevelUp

// Begin Class URTSAbilitySystemComponent Function GetAbilityPoints
struct Z_Construct_UFunction_URTSAbilitySystemComponent_GetAbilityPoints_Statics
{
	struct RTSAbilitySystemComponent_eventGetAbilityPoints_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the current ability points (granted on level up and required to increase ability levels). */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current ability points (granted on level up and required to increase ability levels)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSAbilitySystemComponent_GetAbilityPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemComponent_eventGetAbilityPoints_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemComponent_GetAbilityPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemComponent_GetAbilityPoints_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_GetAbilityPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemComponent_GetAbilityPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemComponent, nullptr, "GetAbilityPoints", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemComponent_GetAbilityPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_GetAbilityPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemComponent_GetAbilityPoints_Statics::RTSAbilitySystemComponent_eventGetAbilityPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_GetAbilityPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemComponent_GetAbilityPoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemComponent_GetAbilityPoints_Statics::RTSAbilitySystemComponent_eventGetAbilityPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemComponent_GetAbilityPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemComponent_GetAbilityPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemComponent::execGetAbilityPoints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAbilityPoints();
	P_NATIVE_END;
}
// End Class URTSAbilitySystemComponent Function GetAbilityPoints

// Begin Class URTSAbilitySystemComponent Function GetCollectedXP
struct Z_Construct_UFunction_URTSAbilitySystemComponent_GetCollectedXP_Statics
{
	struct RTSAbilitySystemComponent_eventGetCollectedXP_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the lifetime collected XP of the actor. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the lifetime collected XP of the actor." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTSAbilitySystemComponent_GetCollectedXP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemComponent_eventGetCollectedXP_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemComponent_GetCollectedXP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemComponent_GetCollectedXP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_GetCollectedXP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemComponent_GetCollectedXP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemComponent, nullptr, "GetCollectedXP", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemComponent_GetCollectedXP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_GetCollectedXP_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemComponent_GetCollectedXP_Statics::RTSAbilitySystemComponent_eventGetCollectedXP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_GetCollectedXP_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemComponent_GetCollectedXP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemComponent_GetCollectedXP_Statics::RTSAbilitySystemComponent_eventGetCollectedXP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemComponent_GetCollectedXP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemComponent_GetCollectedXP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemComponent::execGetCollectedXP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCollectedXP();
	P_NATIVE_END;
}
// End Class URTSAbilitySystemComponent Function GetCollectedXP

// Begin Class URTSAbilitySystemComponent Function GetCurrentLevelXP
struct Z_Construct_UFunction_URTSAbilitySystemComponent_GetCurrentLevelXP_Statics
{
	struct RTSAbilitySystemComponent_eventGetCurrentLevelXP_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the amount of XP gained since the last level-up. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the amount of XP gained since the last level-up." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTSAbilitySystemComponent_GetCurrentLevelXP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemComponent_eventGetCurrentLevelXP_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemComponent_GetCurrentLevelXP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemComponent_GetCurrentLevelXP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_GetCurrentLevelXP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemComponent_GetCurrentLevelXP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemComponent, nullptr, "GetCurrentLevelXP", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemComponent_GetCurrentLevelXP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_GetCurrentLevelXP_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemComponent_GetCurrentLevelXP_Statics::RTSAbilitySystemComponent_eventGetCurrentLevelXP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_GetCurrentLevelXP_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemComponent_GetCurrentLevelXP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemComponent_GetCurrentLevelXP_Statics::RTSAbilitySystemComponent_eventGetCurrentLevelXP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemComponent_GetCurrentLevelXP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemComponent_GetCurrentLevelXP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemComponent::execGetCurrentLevelXP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentLevelXP();
	P_NATIVE_END;
}
// End Class URTSAbilitySystemComponent Function GetCurrentLevelXP

// Begin Class URTSAbilitySystemComponent Function GetCurrentLevelXPProgress
struct Z_Construct_UFunction_URTSAbilitySystemComponent_GetCurrentLevelXPProgress_Statics
{
	struct RTSAbilitySystemComponent_eventGetCurrentLevelXPProgress_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the progress of the unit towards reaching the next level [0..1]. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the progress of the unit towards reaching the next level [0..1]." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTSAbilitySystemComponent_GetCurrentLevelXPProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemComponent_eventGetCurrentLevelXPProgress_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemComponent_GetCurrentLevelXPProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemComponent_GetCurrentLevelXPProgress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_GetCurrentLevelXPProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemComponent_GetCurrentLevelXPProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemComponent, nullptr, "GetCurrentLevelXPProgress", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemComponent_GetCurrentLevelXPProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_GetCurrentLevelXPProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemComponent_GetCurrentLevelXPProgress_Statics::RTSAbilitySystemComponent_eventGetCurrentLevelXPProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_GetCurrentLevelXPProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemComponent_GetCurrentLevelXPProgress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemComponent_GetCurrentLevelXPProgress_Statics::RTSAbilitySystemComponent_eventGetCurrentLevelXPProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemComponent_GetCurrentLevelXPProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemComponent_GetCurrentLevelXPProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemComponent::execGetCurrentLevelXPProgress)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentLevelXPProgress();
	P_NATIVE_END;
}
// End Class URTSAbilitySystemComponent Function GetCurrentLevelXPProgress

// Begin Class URTSAbilitySystemComponent Function GetGrantedXP
struct Z_Construct_UFunction_URTSAbilitySystemComponent_GetGrantedXP_Statics
{
	struct RTSAbilitySystemComponent_eventGetGrantedXP_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the XP this actor grants to its killer. The curve table value depends on the level of this actor.  */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the XP this actor grants to its killer. The curve table value depends on the level of this actor." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTSAbilitySystemComponent_GetGrantedXP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemComponent_eventGetGrantedXP_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemComponent_GetGrantedXP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemComponent_GetGrantedXP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_GetGrantedXP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemComponent_GetGrantedXP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemComponent, nullptr, "GetGrantedXP", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemComponent_GetGrantedXP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_GetGrantedXP_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemComponent_GetGrantedXP_Statics::RTSAbilitySystemComponent_eventGetGrantedXP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_GetGrantedXP_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemComponent_GetGrantedXP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemComponent_GetGrantedXP_Statics::RTSAbilitySystemComponent_eventGetGrantedXP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemComponent_GetGrantedXP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemComponent_GetGrantedXP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemComponent::execGetGrantedXP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetGrantedXP();
	P_NATIVE_END;
}
// End Class URTSAbilitySystemComponent Function GetGrantedXP

// Begin Class URTSAbilitySystemComponent Function GetInitialAndUnlockableAbilities
struct Z_Construct_UFunction_URTSAbilitySystemComponent_GetInitialAndUnlockableAbilities_Statics
{
	struct RTSAbilitySystemComponent_eventGetInitialAndUnlockableAbilities_Parms
	{
		TArray<TSubclassOf<UGameplayAbility> > ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the combined list of all initial and unlockable abilities. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the combined list of all initial and unlockable abilities." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URTSAbilitySystemComponent_GetInitialAndUnlockableAbilities_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URTSAbilitySystemComponent_GetInitialAndUnlockableAbilities_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemComponent_eventGetInitialAndUnlockableAbilities_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemComponent_GetInitialAndUnlockableAbilities_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemComponent_GetInitialAndUnlockableAbilities_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemComponent_GetInitialAndUnlockableAbilities_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_GetInitialAndUnlockableAbilities_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemComponent_GetInitialAndUnlockableAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemComponent, nullptr, "GetInitialAndUnlockableAbilities", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemComponent_GetInitialAndUnlockableAbilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_GetInitialAndUnlockableAbilities_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemComponent_GetInitialAndUnlockableAbilities_Statics::RTSAbilitySystemComponent_eventGetInitialAndUnlockableAbilities_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_GetInitialAndUnlockableAbilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemComponent_GetInitialAndUnlockableAbilities_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemComponent_GetInitialAndUnlockableAbilities_Statics::RTSAbilitySystemComponent_eventGetInitialAndUnlockableAbilities_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemComponent_GetInitialAndUnlockableAbilities()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemComponent_GetInitialAndUnlockableAbilities_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemComponent::execGetInitialAndUnlockableAbilities)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<TSubclassOf<UGameplayAbility> >*)Z_Param__Result=P_THIS->GetInitialAndUnlockableAbilities();
	P_NATIVE_END;
}
// End Class URTSAbilitySystemComponent Function GetInitialAndUnlockableAbilities

// Begin Class URTSAbilitySystemComponent Function GetInitialTags
struct Z_Construct_UFunction_URTSAbilitySystemComponent_GetInitialTags_Statics
{
	struct RTSAbilitySystemComponent_eventGetInitialTags_Parms
	{
		FGameplayTagContainer ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tags that are granted on begin play. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags that are granted on begin play." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemComponent_GetInitialTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemComponent_eventGetInitialTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemComponent_GetInitialTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemComponent_GetInitialTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_GetInitialTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemComponent_GetInitialTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemComponent, nullptr, "GetInitialTags", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemComponent_GetInitialTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_GetInitialTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemComponent_GetInitialTags_Statics::RTSAbilitySystemComponent_eventGetInitialTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_GetInitialTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemComponent_GetInitialTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemComponent_GetInitialTags_Statics::RTSAbilitySystemComponent_eventGetInitialTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemComponent_GetInitialTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemComponent_GetInitialTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemComponent::execGetInitialTags)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetInitialTags();
	P_NATIVE_END;
}
// End Class URTSAbilitySystemComponent Function GetInitialTags

// Begin Class URTSAbilitySystemComponent Function GetLevel
struct Z_Construct_UFunction_URTSAbilitySystemComponent_GetLevel_Statics
{
	struct RTSAbilitySystemComponent_eventGetLevel_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the current level of this actor. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current level of this actor." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSAbilitySystemComponent_GetLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemComponent_eventGetLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemComponent_GetLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemComponent_GetLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_GetLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemComponent_GetLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemComponent, nullptr, "GetLevel", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemComponent_GetLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_GetLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemComponent_GetLevel_Statics::RTSAbilitySystemComponent_eventGetLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_GetLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemComponent_GetLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemComponent_GetLevel_Statics::RTSAbilitySystemComponent_eventGetLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemComponent_GetLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemComponent_GetLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemComponent::execGetLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetLevel();
	P_NATIVE_END;
}
// End Class URTSAbilitySystemComponent Function GetLevel

// Begin Class URTSAbilitySystemComponent Function GetName
struct Z_Construct_UFunction_URTSAbilitySystemComponent_GetName_Statics
{
	struct RTSAbilitySystemComponent_eventGetName_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the name of the owner of this component. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the name of the owner of this component." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URTSAbilitySystemComponent_GetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemComponent_eventGetName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemComponent_GetName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemComponent_GetName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_GetName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemComponent_GetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemComponent, nullptr, "GetName", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemComponent_GetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_GetName_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemComponent_GetName_Statics::RTSAbilitySystemComponent_eventGetName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_GetName_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemComponent_GetName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemComponent_GetName_Statics::RTSAbilitySystemComponent_eventGetName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemComponent_GetName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemComponent_GetName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemComponent::execGetName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetName();
	P_NATIVE_END;
}
// End Class URTSAbilitySystemComponent Function GetName

// Begin Class URTSAbilitySystemComponent Function GetNextLevelXP
struct Z_Construct_UFunction_URTSAbilitySystemComponent_GetNextLevelXP_Statics
{
	struct RTSAbilitySystemComponent_eventGetNextLevelXP_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the total amount of XP required for the next level-up. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the total amount of XP required for the next level-up." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTSAbilitySystemComponent_GetNextLevelXP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemComponent_eventGetNextLevelXP_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemComponent_GetNextLevelXP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemComponent_GetNextLevelXP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_GetNextLevelXP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemComponent_GetNextLevelXP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemComponent, nullptr, "GetNextLevelXP", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemComponent_GetNextLevelXP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_GetNextLevelXP_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemComponent_GetNextLevelXP_Statics::RTSAbilitySystemComponent_eventGetNextLevelXP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_GetNextLevelXP_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemComponent_GetNextLevelXP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemComponent_GetNextLevelXP_Statics::RTSAbilitySystemComponent_eventGetNextLevelXP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemComponent_GetNextLevelXP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemComponent_GetNextLevelXP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemComponent::execGetNextLevelXP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetNextLevelXP();
	P_NATIVE_END;
}
// End Class URTSAbilitySystemComponent Function GetNextLevelXP

// Begin Class URTSAbilitySystemComponent Function GetTotalXPRequiredForLevel
struct Z_Construct_UFunction_URTSAbilitySystemComponent_GetTotalXPRequiredForLevel_Statics
{
	struct RTSAbilitySystemComponent_eventGetTotalXPRequiredForLevel_Parms
	{
		int32 InLevel;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the total amount of XP required for reaching the specified level. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the total amount of XP required for reaching the specified level." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSAbilitySystemComponent_GetTotalXPRequiredForLevel_Statics::NewProp_InLevel = { "InLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemComponent_eventGetTotalXPRequiredForLevel_Parms, InLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTSAbilitySystemComponent_GetTotalXPRequiredForLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemComponent_eventGetTotalXPRequiredForLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemComponent_GetTotalXPRequiredForLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemComponent_GetTotalXPRequiredForLevel_Statics::NewProp_InLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemComponent_GetTotalXPRequiredForLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_GetTotalXPRequiredForLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemComponent_GetTotalXPRequiredForLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemComponent, nullptr, "GetTotalXPRequiredForLevel", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemComponent_GetTotalXPRequiredForLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_GetTotalXPRequiredForLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemComponent_GetTotalXPRequiredForLevel_Statics::RTSAbilitySystemComponent_eventGetTotalXPRequiredForLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_GetTotalXPRequiredForLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemComponent_GetTotalXPRequiredForLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemComponent_GetTotalXPRequiredForLevel_Statics::RTSAbilitySystemComponent_eventGetTotalXPRequiredForLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemComponent_GetTotalXPRequiredForLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemComponent_GetTotalXPRequiredForLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemComponent::execGetTotalXPRequiredForLevel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetTotalXPRequiredForLevel(Z_Param_InLevel);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemComponent Function GetTotalXPRequiredForLevel

// Begin Class URTSAbilitySystemComponent Function IncreaseAbilityLevel
struct Z_Construct_UFunction_URTSAbilitySystemComponent_IncreaseAbilityLevel_Statics
{
	struct RTSAbilitySystemComponent_eventIncreaseAbilityLevel_Parms
	{
		TSubclassOf<UGameplayAbility> AbilityClass;
		bool bUseAbilityPoint;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Spends an ability point to increase the level of the specified ability. */" },
#endif
		{ "CPP_Default_bUseAbilityPoint", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spends an ability point to increase the level of the specified ability." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityClass;
	static void NewProp_bUseAbilityPoint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAbilityPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URTSAbilitySystemComponent_IncreaseAbilityLevel_Statics::NewProp_AbilityClass = { "AbilityClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemComponent_eventIncreaseAbilityLevel_Parms, AbilityClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URTSAbilitySystemComponent_IncreaseAbilityLevel_Statics::NewProp_bUseAbilityPoint_SetBit(void* Obj)
{
	((RTSAbilitySystemComponent_eventIncreaseAbilityLevel_Parms*)Obj)->bUseAbilityPoint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTSAbilitySystemComponent_IncreaseAbilityLevel_Statics::NewProp_bUseAbilityPoint = { "bUseAbilityPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTSAbilitySystemComponent_eventIncreaseAbilityLevel_Parms), &Z_Construct_UFunction_URTSAbilitySystemComponent_IncreaseAbilityLevel_Statics::NewProp_bUseAbilityPoint_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemComponent_IncreaseAbilityLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemComponent_IncreaseAbilityLevel_Statics::NewProp_AbilityClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemComponent_IncreaseAbilityLevel_Statics::NewProp_bUseAbilityPoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_IncreaseAbilityLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemComponent_IncreaseAbilityLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemComponent, nullptr, "IncreaseAbilityLevel", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemComponent_IncreaseAbilityLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_IncreaseAbilityLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemComponent_IncreaseAbilityLevel_Statics::RTSAbilitySystemComponent_eventIncreaseAbilityLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_IncreaseAbilityLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemComponent_IncreaseAbilityLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemComponent_IncreaseAbilityLevel_Statics::RTSAbilitySystemComponent_eventIncreaseAbilityLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemComponent_IncreaseAbilityLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemComponent_IncreaseAbilityLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemComponent::execIncreaseAbilityLevel)
{
	P_GET_OBJECT(UClass,Z_Param_AbilityClass);
	P_GET_UBOOL(Z_Param_bUseAbilityPoint);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncreaseAbilityLevel(Z_Param_AbilityClass,Z_Param_bUseAbilityPoint);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemComponent Function IncreaseAbilityLevel

// Begin Class URTSAbilitySystemComponent Function OnAnyActorKilled
struct Z_Construct_UFunction_URTSAbilitySystemComponent_OnAnyActorKilled_Statics
{
	struct RTSAbilitySystemComponent_eventOnAnyActorKilled_Parms
	{
		AActor* KilledActor;
		AController* PreviousOwner;
		AActor* DamageCauser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KilledActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviousOwner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemComponent_OnAnyActorKilled_Statics::NewProp_KilledActor = { "KilledActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemComponent_eventOnAnyActorKilled_Parms, KilledActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemComponent_OnAnyActorKilled_Statics::NewProp_PreviousOwner = { "PreviousOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemComponent_eventOnAnyActorKilled_Parms, PreviousOwner), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemComponent_OnAnyActorKilled_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemComponent_eventOnAnyActorKilled_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemComponent_OnAnyActorKilled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemComponent_OnAnyActorKilled_Statics::NewProp_KilledActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemComponent_OnAnyActorKilled_Statics::NewProp_PreviousOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemComponent_OnAnyActorKilled_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_OnAnyActorKilled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemComponent_OnAnyActorKilled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemComponent, nullptr, "OnAnyActorKilled", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemComponent_OnAnyActorKilled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_OnAnyActorKilled_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemComponent_OnAnyActorKilled_Statics::RTSAbilitySystemComponent_eventOnAnyActorKilled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_OnAnyActorKilled_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemComponent_OnAnyActorKilled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemComponent_OnAnyActorKilled_Statics::RTSAbilitySystemComponent_eventOnAnyActorKilled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemComponent_OnAnyActorKilled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemComponent_OnAnyActorKilled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemComponent::execOnAnyActorKilled)
{
	P_GET_OBJECT(AActor,Z_Param_KilledActor);
	P_GET_OBJECT(AController,Z_Param_PreviousOwner);
	P_GET_OBJECT(AActor,Z_Param_DamageCauser);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAnyActorKilled(Z_Param_KilledActor,Z_Param_PreviousOwner,Z_Param_DamageCauser);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemComponent Function OnAnyActorKilled

// Begin Class URTSAbilitySystemComponent Function OnKilled
struct Z_Construct_UFunction_URTSAbilitySystemComponent_OnKilled_Statics
{
	struct RTSAbilitySystemComponent_eventOnKilled_Parms
	{
		AController* PreviousOwner;
		AActor* DamageCauser;
		AActor* KilledUnit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviousOwner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KilledUnit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemComponent_OnKilled_Statics::NewProp_PreviousOwner = { "PreviousOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemComponent_eventOnKilled_Parms, PreviousOwner), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemComponent_OnKilled_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemComponent_eventOnKilled_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemComponent_OnKilled_Statics::NewProp_KilledUnit = { "KilledUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemComponent_eventOnKilled_Parms, KilledUnit), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemComponent_OnKilled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemComponent_OnKilled_Statics::NewProp_PreviousOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemComponent_OnKilled_Statics::NewProp_DamageCauser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemComponent_OnKilled_Statics::NewProp_KilledUnit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_OnKilled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemComponent_OnKilled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemComponent, nullptr, "OnKilled", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemComponent_OnKilled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_OnKilled_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemComponent_OnKilled_Statics::RTSAbilitySystemComponent_eventOnKilled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_OnKilled_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemComponent_OnKilled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemComponent_OnKilled_Statics::RTSAbilitySystemComponent_eventOnKilled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemComponent_OnKilled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemComponent_OnKilled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemComponent::execOnKilled)
{
	P_GET_OBJECT(AController,Z_Param_PreviousOwner);
	P_GET_OBJECT(AActor,Z_Param_DamageCauser);
	P_GET_OBJECT(AActor,Z_Param_KilledUnit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnKilled(Z_Param_PreviousOwner,Z_Param_DamageCauser,Z_Param_KilledUnit);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemComponent Function OnKilled

// Begin Class URTSAbilitySystemComponent Function OnOwnerChanged
struct Z_Construct_UFunction_URTSAbilitySystemComponent_OnOwnerChanged_Statics
{
	struct RTSAbilitySystemComponent_eventOnOwnerChanged_Parms
	{
		APlayerState* PreviousOwner;
		APlayerState* NewOwner;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviousOwner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemComponent_OnOwnerChanged_Statics::NewProp_PreviousOwner = { "PreviousOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemComponent_eventOnOwnerChanged_Parms, PreviousOwner), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemComponent_OnOwnerChanged_Statics::NewProp_NewOwner = { "NewOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemComponent_eventOnOwnerChanged_Parms, NewOwner), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemComponent_OnOwnerChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemComponent_OnOwnerChanged_Statics::NewProp_PreviousOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemComponent_OnOwnerChanged_Statics::NewProp_NewOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_OnOwnerChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemComponent_OnOwnerChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemComponent, nullptr, "OnOwnerChanged", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemComponent_OnOwnerChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_OnOwnerChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemComponent_OnOwnerChanged_Statics::RTSAbilitySystemComponent_eventOnOwnerChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_OnOwnerChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemComponent_OnOwnerChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemComponent_OnOwnerChanged_Statics::RTSAbilitySystemComponent_eventOnOwnerChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemComponent_OnOwnerChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemComponent_OnOwnerChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemComponent::execOnOwnerChanged)
{
	P_GET_OBJECT(APlayerState,Z_Param_PreviousOwner);
	P_GET_OBJECT(APlayerState,Z_Param_NewOwner);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOwnerChanged(Z_Param_PreviousOwner,Z_Param_NewOwner);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemComponent Function OnOwnerChanged

// Begin Class URTSAbilitySystemComponent Function ReceivedAbilityPoints
struct Z_Construct_UFunction_URTSAbilitySystemComponent_ReceivedAbilityPoints_Statics
{
	struct RTSAbilitySystemComponent_eventReceivedAbilityPoints_Parms
	{
		int32 OldAbilityPoints;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OldAbilityPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSAbilitySystemComponent_ReceivedAbilityPoints_Statics::NewProp_OldAbilityPoints = { "OldAbilityPoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemComponent_eventReceivedAbilityPoints_Parms, OldAbilityPoints), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemComponent_ReceivedAbilityPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemComponent_ReceivedAbilityPoints_Statics::NewProp_OldAbilityPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_ReceivedAbilityPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemComponent_ReceivedAbilityPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemComponent, nullptr, "ReceivedAbilityPoints", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemComponent_ReceivedAbilityPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_ReceivedAbilityPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemComponent_ReceivedAbilityPoints_Statics::RTSAbilitySystemComponent_eventReceivedAbilityPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_ReceivedAbilityPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemComponent_ReceivedAbilityPoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemComponent_ReceivedAbilityPoints_Statics::RTSAbilitySystemComponent_eventReceivedAbilityPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemComponent_ReceivedAbilityPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemComponent_ReceivedAbilityPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemComponent::execReceivedAbilityPoints)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_OldAbilityPoints);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReceivedAbilityPoints(Z_Param_OldAbilityPoints);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemComponent Function ReceivedAbilityPoints

// Begin Class URTSAbilitySystemComponent Function ReceivedCollectedXP
struct Z_Construct_UFunction_URTSAbilitySystemComponent_ReceivedCollectedXP_Statics
{
	struct RTSAbilitySystemComponent_eventReceivedCollectedXP_Parms
	{
		float OldCollectedXP;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OldCollectedXP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTSAbilitySystemComponent_ReceivedCollectedXP_Statics::NewProp_OldCollectedXP = { "OldCollectedXP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemComponent_eventReceivedCollectedXP_Parms, OldCollectedXP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemComponent_ReceivedCollectedXP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemComponent_ReceivedCollectedXP_Statics::NewProp_OldCollectedXP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_ReceivedCollectedXP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemComponent_ReceivedCollectedXP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemComponent, nullptr, "ReceivedCollectedXP", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemComponent_ReceivedCollectedXP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_ReceivedCollectedXP_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemComponent_ReceivedCollectedXP_Statics::RTSAbilitySystemComponent_eventReceivedCollectedXP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_ReceivedCollectedXP_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemComponent_ReceivedCollectedXP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemComponent_ReceivedCollectedXP_Statics::RTSAbilitySystemComponent_eventReceivedCollectedXP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemComponent_ReceivedCollectedXP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemComponent_ReceivedCollectedXP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemComponent::execReceivedCollectedXP)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_OldCollectedXP);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReceivedCollectedXP(Z_Param_OldCollectedXP);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemComponent Function ReceivedCollectedXP

// Begin Class URTSAbilitySystemComponent Function SetLevel
struct Z_Construct_UFunction_URTSAbilitySystemComponent_SetLevel_Statics
{
	struct RTSAbilitySystemComponent_eventSetLevel_Parms
	{
		int32 NewLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the level of this actor. This might change the attributes of the actor. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the level of this actor. This might change the attributes of the actor." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSAbilitySystemComponent_SetLevel_Statics::NewProp_NewLevel = { "NewLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemComponent_eventSetLevel_Parms, NewLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemComponent_SetLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemComponent_SetLevel_Statics::NewProp_NewLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_SetLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemComponent_SetLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemComponent, nullptr, "SetLevel", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemComponent_SetLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_SetLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemComponent_SetLevel_Statics::RTSAbilitySystemComponent_eventSetLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemComponent_SetLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemComponent_SetLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemComponent_SetLevel_Statics::RTSAbilitySystemComponent_eventSetLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemComponent_SetLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemComponent_SetLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemComponent::execSetLevel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLevel(Z_Param_NewLevel);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemComponent Function SetLevel

// Begin Class URTSAbilitySystemComponent
void URTSAbilitySystemComponent::StaticRegisterNativesURTSAbilitySystemComponent()
{
	UClass* Class = URTSAbilitySystemComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddCollectedXP", &URTSAbilitySystemComponent::execAddCollectedXP },
		{ "CanLevelUp", &URTSAbilitySystemComponent::execCanLevelUp },
		{ "GetAbilityPoints", &URTSAbilitySystemComponent::execGetAbilityPoints },
		{ "GetCollectedXP", &URTSAbilitySystemComponent::execGetCollectedXP },
		{ "GetCurrentLevelXP", &URTSAbilitySystemComponent::execGetCurrentLevelXP },
		{ "GetCurrentLevelXPProgress", &URTSAbilitySystemComponent::execGetCurrentLevelXPProgress },
		{ "GetGrantedXP", &URTSAbilitySystemComponent::execGetGrantedXP },
		{ "GetInitialAndUnlockableAbilities", &URTSAbilitySystemComponent::execGetInitialAndUnlockableAbilities },
		{ "GetInitialTags", &URTSAbilitySystemComponent::execGetInitialTags },
		{ "GetLevel", &URTSAbilitySystemComponent::execGetLevel },
		{ "GetName", &URTSAbilitySystemComponent::execGetName },
		{ "GetNextLevelXP", &URTSAbilitySystemComponent::execGetNextLevelXP },
		{ "GetTotalXPRequiredForLevel", &URTSAbilitySystemComponent::execGetTotalXPRequiredForLevel },
		{ "IncreaseAbilityLevel", &URTSAbilitySystemComponent::execIncreaseAbilityLevel },
		{ "OnAnyActorKilled", &URTSAbilitySystemComponent::execOnAnyActorKilled },
		{ "OnKilled", &URTSAbilitySystemComponent::execOnKilled },
		{ "OnOwnerChanged", &URTSAbilitySystemComponent::execOnOwnerChanged },
		{ "ReceivedAbilityPoints", &URTSAbilitySystemComponent::execReceivedAbilityPoints },
		{ "ReceivedCollectedXP", &URTSAbilitySystemComponent::execReceivedCollectedXP },
		{ "SetLevel", &URTSAbilitySystemComponent::execSetLevel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URTSAbilitySystemComponent);
UClass* Z_Construct_UClass_URTSAbilitySystemComponent_NoRegister()
{
	return URTSAbilitySystemComponent::StaticClass();
}
struct Z_Construct_UClass_URTSAbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Custom ability system component. */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "AbilitySystem/RTSAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom ability system component." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCollectedXPChanged_MetaData[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Event when the lifetime collected XP of the actor have changed. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event when the lifetime collected XP of the actor have changed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAbilityPointsChanged_MetaData[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Event when ability points granted on level up and required to increase ability levels have changed. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event when ability points granted on level up and required to increase ability levels have changed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGameplayAbilityEnded_MetaData[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Event that is invoked when an ability of this ability system has ended. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event that is invoked when an ability of this ability system has ended." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Tag that is associated with the owner of this component. This is used to look up the attribute values inside the\n     * data tables. In this context the last name of the tag is describing the group inside the curve table.\n     *\n     * Example:\n     * NameTag:             Units.LordHouse.Builder\n     * Curve table row key: Builder.Health.MaxHealth\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tag that is associated with the owner of this component. This is used to look up the attribute values inside the\ndata tables. In this context the last name of the tag is describing the group inside the curve table.\n\nExample:\nNameTag:             Units.LordHouse.Builder\nCurve table row key: Builder.Health.MaxHealth" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Abilities_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Abilities to grant to the unit on begin play. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Abilities to grant to the unit on begin play." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnlockableAbilities_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Abilities the player can unlock later. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Abilities the player can unlock later." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialUnlockableAbilityLevels_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Initial levels of unlockable abilities the player can level up later. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initial levels of unlockable abilities the player can level up later." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemAbilities_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Abilities which are granted via items which can be bought in shops */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Abilities which are granted via items which can be bought in shops" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseAbilityOrder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS|Orders" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Order type that is used to issue a unit to activate an ability. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Order type that is used to issue a unit to activate an ability." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Tags that are granted on begin play.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags that are granted on begin play." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagsToAddOnDeath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Tags the are added when the owner dies (the actor might nor be destroyed yet because it is playing its death\n     * animation).\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags the are added when the owner dies (the actor might nor be destroyed yet because it is playing its death\nanimation)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagsToRemoveOnDeath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Tags the are removed when the owner dies (the actor might nor be destroyed yet because it is playing its death\n     * animation).\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags the are removed when the owner dies (the actor might nor be destroyed yet because it is playing its death\nanimation)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanLevelUp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS|Level" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether this actor can level up.  */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether this actor can level up." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS|Level" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current level of the actor. */" },
#endif
		{ "EditCondition", "bCanLevelUp" },
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current level of the actor." },
#endif
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS|Level" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Max level of the hero. */" },
#endif
		{ "EditCondition", "bCanLevelUp" },
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max level of the hero." },
#endif
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XPPerLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS|Level" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Collected XP needed to be on a certain level. */" },
#endif
		{ "EditCondition", "bCanLevelUp" },
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collected XP needed to be on a certain level." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelUpEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS|Level" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gameplay effect to fire on level up. */" },
#endif
		{ "EditCondition", "bCanLevelUp" },
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay effect to fire on level up." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollectedXP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS|Level" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Life time collected XP of the actor. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Life time collected XP of the actor." },
#endif
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedXP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS|Level" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** XP this actor grants to its killer. The curve table value depends on the level of this actor.  */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "XP this actor grants to its killer. The curve table value depends on the level of this actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS|Level" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Ability points granted on level up and required to increase ability levels. */" },
#endif
		{ "EditCondition", "bCanLevelUp" },
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ability points granted on level up and required to increase ability levels." },
#endif
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransferPlayerTags_MetaData[] = {
		{ "Categories", "Player" },
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tags of the player state that controls this actor that should be transfered (copied) to this actor. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags of the player state that controls this actor that should be transfered (copied) to this actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncreaseAbilityLevelPlayerTags_MetaData[] = {
		{ "Categories", "Player" },
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tags of the player state that controls this actor that increase ability levels of this actor. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags of the player state that controls this actor that increase ability levels of this actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLogTagChanges_MetaData[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If changes of the owning tags should be logged. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If changes of the owning tags should be logged." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCollectedXPChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityPointsChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameplayAbilityEnded;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NameTag;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Abilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Abilities;
	static const UECodeGen_Private::FClassPropertyParams NewProp_UnlockableAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UnlockableAbilities;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitialUnlockableAbilityLevels_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InitialUnlockableAbilityLevels_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_InitialUnlockableAbilityLevels;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemAbilities;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_UseAbilityOrder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagsToAddOnDeath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagsToRemoveOnDeath;
	static void NewProp_bCanLevelUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanLevelUp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_XPPerLevel;
	static const UECodeGen_Private::FClassPropertyParams NewProp_LevelUpEffect;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollectedXP;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedXP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AbilityPoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransferPlayerTags;
	static const UECodeGen_Private::FClassPropertyParams NewProp_IncreaseAbilityLevelPlayerTags_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IncreaseAbilityLevelPlayerTags_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_IncreaseAbilityLevelPlayerTags;
	static void NewProp_bLogTagChanges_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogTagChanges;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URTSAbilitySystemComponent_AddCollectedXP, "AddCollectedXP" }, // 4102370240
		{ &Z_Construct_UFunction_URTSAbilitySystemComponent_CanLevelUp, "CanLevelUp" }, // 2856103483
		{ &Z_Construct_UFunction_URTSAbilitySystemComponent_GetAbilityPoints, "GetAbilityPoints" }, // 1799597805
		{ &Z_Construct_UFunction_URTSAbilitySystemComponent_GetCollectedXP, "GetCollectedXP" }, // 4206776866
		{ &Z_Construct_UFunction_URTSAbilitySystemComponent_GetCurrentLevelXP, "GetCurrentLevelXP" }, // 412026952
		{ &Z_Construct_UFunction_URTSAbilitySystemComponent_GetCurrentLevelXPProgress, "GetCurrentLevelXPProgress" }, // 3965551079
		{ &Z_Construct_UFunction_URTSAbilitySystemComponent_GetGrantedXP, "GetGrantedXP" }, // 1518743393
		{ &Z_Construct_UFunction_URTSAbilitySystemComponent_GetInitialAndUnlockableAbilities, "GetInitialAndUnlockableAbilities" }, // 3589859062
		{ &Z_Construct_UFunction_URTSAbilitySystemComponent_GetInitialTags, "GetInitialTags" }, // 2225999067
		{ &Z_Construct_UFunction_URTSAbilitySystemComponent_GetLevel, "GetLevel" }, // 788622138
		{ &Z_Construct_UFunction_URTSAbilitySystemComponent_GetName, "GetName" }, // 3674348026
		{ &Z_Construct_UFunction_URTSAbilitySystemComponent_GetNextLevelXP, "GetNextLevelXP" }, // 3163370436
		{ &Z_Construct_UFunction_URTSAbilitySystemComponent_GetTotalXPRequiredForLevel, "GetTotalXPRequiredForLevel" }, // 1141460113
		{ &Z_Construct_UFunction_URTSAbilitySystemComponent_IncreaseAbilityLevel, "IncreaseAbilityLevel" }, // 2884653873
		{ &Z_Construct_UFunction_URTSAbilitySystemComponent_OnAnyActorKilled, "OnAnyActorKilled" }, // 2279474597
		{ &Z_Construct_UFunction_URTSAbilitySystemComponent_OnKilled, "OnKilled" }, // 641764815
		{ &Z_Construct_UFunction_URTSAbilitySystemComponent_OnOwnerChanged, "OnOwnerChanged" }, // 1654160670
		{ &Z_Construct_UFunction_URTSAbilitySystemComponent_ReceivedAbilityPoints, "ReceivedAbilityPoints" }, // 348952592
		{ &Z_Construct_UFunction_URTSAbilitySystemComponent_ReceivedCollectedXP, "ReceivedCollectedXP" }, // 3000221939
		{ &Z_Construct_UFunction_URTSAbilitySystemComponent_SetLevel, "SetLevel" }, // 833627491
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URTSAbilitySystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_OnCollectedXPChanged = { "OnCollectedXPChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSAbilitySystemComponent, OnCollectedXPChanged), Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentCollectedXPChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCollectedXPChanged_MetaData), NewProp_OnCollectedXPChanged_MetaData) }; // 4170240873
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_OnAbilityPointsChanged = { "OnAbilityPointsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSAbilitySystemComponent, OnAbilityPointsChanged), Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentAbilityPointsChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAbilityPointsChanged_MetaData), NewProp_OnAbilityPointsChanged_MetaData) }; // 2738133233
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_OnGameplayAbilityEnded = { "OnGameplayAbilityEnded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSAbilitySystemComponent, OnGameplayAbilityEnded), Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentAbilityEndedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGameplayAbilityEnded_MetaData), NewProp_OnGameplayAbilityEnded_MetaData) }; // 200207038
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_NameTag = { "NameTag", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSAbilitySystemComponent, NameTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameTag_MetaData), NewProp_NameTag_MetaData) }; // 1298103297
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_Abilities_Inner = { "Abilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_Abilities = { "Abilities", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSAbilitySystemComponent, Abilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Abilities_MetaData), NewProp_Abilities_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_UnlockableAbilities_Inner = { "UnlockableAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_UnlockableAbilities = { "UnlockableAbilities", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSAbilitySystemComponent, UnlockableAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnlockableAbilities_MetaData), NewProp_UnlockableAbilities_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_InitialUnlockableAbilityLevels_ValueProp = { "InitialUnlockableAbilityLevels", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_InitialUnlockableAbilityLevels_Key_KeyProp = { "InitialUnlockableAbilityLevels_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_InitialUnlockableAbilityLevels = { "InitialUnlockableAbilityLevels", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSAbilitySystemComponent, InitialUnlockableAbilityLevels), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialUnlockableAbilityLevels_MetaData), NewProp_InitialUnlockableAbilityLevels_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_ItemAbilities_Inner = { "ItemAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_ItemAbilities = { "ItemAbilities", nullptr, (EPropertyFlags)0x0044000000000035, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSAbilitySystemComponent, ItemAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemAbilities_MetaData), NewProp_ItemAbilities_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_UseAbilityOrder = { "UseAbilityOrder", nullptr, (EPropertyFlags)0x0044000000010015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSAbilitySystemComponent, UseAbilityOrder), Z_Construct_UClass_URTSUseAbilityOrder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseAbilityOrder_MetaData), NewProp_UseAbilityOrder_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_InitialTags = { "InitialTags", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSAbilitySystemComponent, InitialTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialTags_MetaData), NewProp_InitialTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_TagsToAddOnDeath = { "TagsToAddOnDeath", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSAbilitySystemComponent, TagsToAddOnDeath), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagsToAddOnDeath_MetaData), NewProp_TagsToAddOnDeath_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_TagsToRemoveOnDeath = { "TagsToRemoveOnDeath", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSAbilitySystemComponent, TagsToRemoveOnDeath), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagsToRemoveOnDeath_MetaData), NewProp_TagsToRemoveOnDeath_MetaData) }; // 3352185621
void Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_bCanLevelUp_SetBit(void* Obj)
{
	((URTSAbilitySystemComponent*)Obj)->bCanLevelUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_bCanLevelUp = { "bCanLevelUp", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URTSAbilitySystemComponent), &Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_bCanLevelUp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanLevelUp_MetaData), NewProp_bCanLevelUp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSAbilitySystemComponent, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_MaxLevel = { "MaxLevel", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSAbilitySystemComponent, MaxLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLevel_MetaData), NewProp_MaxLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_XPPerLevel = { "XPPerLevel", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSAbilitySystemComponent, XPPerLevel), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XPPerLevel_MetaData), NewProp_XPPerLevel_MetaData) }; // 703790095
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_LevelUpEffect = { "LevelUpEffect", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSAbilitySystemComponent, LevelUpEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelUpEffect_MetaData), NewProp_LevelUpEffect_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_CollectedXP = { "CollectedXP", "ReceivedCollectedXP", (EPropertyFlags)0x0040000100020835, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSAbilitySystemComponent, CollectedXP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollectedXP_MetaData), NewProp_CollectedXP_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_GrantedXP = { "GrantedXP", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSAbilitySystemComponent, GrantedXP), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedXP_MetaData), NewProp_GrantedXP_MetaData) }; // 703790095
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_AbilityPoints = { "AbilityPoints", "ReceivedAbilityPoints", (EPropertyFlags)0x0040000100000035, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSAbilitySystemComponent, AbilityPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityPoints_MetaData), NewProp_AbilityPoints_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_TransferPlayerTags = { "TransferPlayerTags", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSAbilitySystemComponent, TransferPlayerTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransferPlayerTags_MetaData), NewProp_TransferPlayerTags_MetaData) }; // 3352185621
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_IncreaseAbilityLevelPlayerTags_ValueProp = { "IncreaseAbilityLevelPlayerTags", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_IncreaseAbilityLevelPlayerTags_Key_KeyProp = { "IncreaseAbilityLevelPlayerTags_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_IncreaseAbilityLevelPlayerTags = { "IncreaseAbilityLevelPlayerTags", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSAbilitySystemComponent, IncreaseAbilityLevelPlayerTags), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncreaseAbilityLevelPlayerTags_MetaData), NewProp_IncreaseAbilityLevelPlayerTags_MetaData) }; // 1298103297
void Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_bLogTagChanges_SetBit(void* Obj)
{
	((URTSAbilitySystemComponent*)Obj)->bLogTagChanges = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_bLogTagChanges = { "bLogTagChanges", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URTSAbilitySystemComponent), &Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_bLogTagChanges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLogTagChanges_MetaData), NewProp_bLogTagChanges_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URTSAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_OnCollectedXPChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_OnAbilityPointsChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_OnGameplayAbilityEnded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_NameTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_Abilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_Abilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_UnlockableAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_UnlockableAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_InitialUnlockableAbilityLevels_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_InitialUnlockableAbilityLevels_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_InitialUnlockableAbilityLevels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_ItemAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_ItemAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_UseAbilityOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_InitialTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_TagsToAddOnDeath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_TagsToRemoveOnDeath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_bCanLevelUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_MaxLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_XPPerLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_LevelUpEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_CollectedXP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_GrantedXP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_AbilityPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_TransferPlayerTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_IncreaseAbilityLevelPlayerTags_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_IncreaseAbilityLevelPlayerTags_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_IncreaseAbilityLevelPlayerTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSAbilitySystemComponent_Statics::NewProp_bLogTagChanges,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTSAbilitySystemComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URTSAbilitySystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ColonyOrders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTSAbilitySystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_URTSAbilitySystemComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_URTSAutoOrderProvider_NoRegister, (int32)VTABLE_OFFSET(URTSAbilitySystemComponent, IRTSAutoOrderProvider), false },  // 3180751257
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_URTSAbilitySystemComponent_Statics::ClassParams = {
	&URTSAbilitySystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URTSAbilitySystemComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URTSAbilitySystemComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URTSAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_URTSAbilitySystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URTSAbilitySystemComponent()
{
	if (!Z_Registration_Info_UClass_URTSAbilitySystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URTSAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_URTSAbilitySystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URTSAbilitySystemComponent.OuterSingleton;
}
template<> COLONYORDERS_API UClass* StaticClass<URTSAbilitySystemComponent>()
{
	return URTSAbilitySystemComponent::StaticClass();
}
void URTSAbilitySystemComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_ItemAbilities(TEXT("ItemAbilities"));
	static const FName Name_CollectedXP(TEXT("CollectedXP"));
	static const FName Name_AbilityPoints(TEXT("AbilityPoints"));
	const bool bIsValid = true
		&& Name_ItemAbilities == ClassReps[(int32)ENetFields_Private::ItemAbilities].Property->GetFName()
		&& Name_CollectedXP == ClassReps[(int32)ENetFields_Private::CollectedXP].Property->GetFName()
		&& Name_AbilityPoints == ClassReps[(int32)ENetFields_Private::AbilityPoints].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in URTSAbilitySystemComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URTSAbilitySystemComponent);
URTSAbilitySystemComponent::~URTSAbilitySystemComponent() {}
// End Class URTSAbilitySystemComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAbilitySystemComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URTSAbilitySystemComponent, URTSAbilitySystemComponent::StaticClass, TEXT("URTSAbilitySystemComponent"), &Z_Registration_Info_UClass_URTSAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URTSAbilitySystemComponent), 3299454293U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAbilitySystemComponent_h_1656722539(TEXT("/Script/ColonyOrders"),
	Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAbilitySystemComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
