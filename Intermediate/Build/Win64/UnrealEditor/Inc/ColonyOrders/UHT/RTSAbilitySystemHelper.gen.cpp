// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ColonyOrders/Public/AbilitySystem/RTSAbilitySystemHelper.h"
#include "ColonyOrders/Public/Orders/RTSOrderTargetData.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTypes.h"
#include "GameplayAbilities/Public/AttributeSet.h"
#include "GameplayAbilities/Public/GameplayEffect.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
#include "GameplayAbilities/Public/ScalableFloat.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSAbilitySystemHelper() {}

// Begin Cross Module References
COLONYORDERS_API UClass* Z_Construct_UClass_URTSAbilitySystemHelper();
COLONYORDERS_API UClass* Z_Construct_UClass_URTSAbilitySystemHelper_NoRegister();
COLONYORDERS_API UEnum* Z_Construct_UEnum_ColonyOrders_ERTSAbilityProcessPolicy();
COLONYORDERS_API UEnum* Z_Construct_UEnum_ColonyOrders_ERTSTargetType();
COLONYORDERS_API UScriptStruct* Z_Construct_UScriptStruct_FRTSOrderTargetData();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueParameters();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpec();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_ColonyOrders();
// End Cross Module References

// Begin Class URTSAbilitySystemHelper Function CancelAbility
struct Z_Construct_UFunction_URTSAbilitySystemHelper_CancelAbility_Statics
{
	struct RTSAbilitySystemHelper_eventCancelAbility_Parms
	{
		UAbilitySystemComponent* AbilitySystem;
		TSubclassOf<UGameplayAbility> Ability;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cancels the ability of the specified type.  */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cancels the ability of the specified type." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystem;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_CancelAbility_Statics::NewProp_AbilitySystem = { "AbilitySystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventCancelAbility_Parms, AbilitySystem), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystem_MetaData), NewProp_AbilitySystem_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_CancelAbility_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventCancelAbility_Parms, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_CancelAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_CancelAbility_Statics::NewProp_AbilitySystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_CancelAbility_Statics::NewProp_Ability,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_CancelAbility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_CancelAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "CancelAbility", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_CancelAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_CancelAbility_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_CancelAbility_Statics::RTSAbilitySystemHelper_eventCancelAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_CancelAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_CancelAbility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_CancelAbility_Statics::RTSAbilitySystemHelper_eventCancelAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_CancelAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_CancelAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execCancelAbility)
{
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystem);
	P_GET_OBJECT(UClass,Z_Param_Ability);
	P_FINISH;
	P_NATIVE_BEGIN;
	URTSAbilitySystemHelper::CancelAbility(Z_Param_AbilitySystem,Z_Param_Ability);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function CancelAbility

// Begin Class URTSAbilitySystemHelper Function ChangeTag
struct Z_Construct_UFunction_URTSAbilitySystemHelper_ChangeTag_Statics
{
	struct RTSAbilitySystemHelper_eventChangeTag_Parms
	{
		AActor* Actor;
		FGameplayTag Tag;
		bool bExistence;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Changes the state of a single gameplay tag on the specified actor. If 'bExistence' is true the tag is added if it\n     * does not already exist. If 'bExistence' is false the tag is removed if it exists.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Changes the state of a single gameplay tag on the specified actor. If 'bExistence' is true the tag is added if it\ndoes not already exist. If 'bExistence' is false the tag is removed if it exists." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static void NewProp_bExistence_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExistence;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_ChangeTag_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventChangeTag_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_ChangeTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventChangeTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 1298103297
void Z_Construct_UFunction_URTSAbilitySystemHelper_ChangeTag_Statics::NewProp_bExistence_SetBit(void* Obj)
{
	((RTSAbilitySystemHelper_eventChangeTag_Parms*)Obj)->bExistence = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_ChangeTag_Statics::NewProp_bExistence = { "bExistence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTSAbilitySystemHelper_eventChangeTag_Parms), &Z_Construct_UFunction_URTSAbilitySystemHelper_ChangeTag_Statics::NewProp_bExistence_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_ChangeTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_ChangeTag_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_ChangeTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_ChangeTag_Statics::NewProp_bExistence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_ChangeTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_ChangeTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "ChangeTag", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_ChangeTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_ChangeTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_ChangeTag_Statics::RTSAbilitySystemHelper_eventChangeTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_ChangeTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_ChangeTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_ChangeTag_Statics::RTSAbilitySystemHelper_eventChangeTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_ChangeTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_ChangeTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execChangeTag)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
	P_GET_UBOOL(Z_Param_bExistence);
	P_FINISH;
	P_NATIVE_BEGIN;
	URTSAbilitySystemHelper::ChangeTag(Z_Param_Actor,Z_Param_Out_Tag,Z_Param_bExistence);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function ChangeTag

// Begin Class URTSAbilitySystemHelper Function CreateGameplayEventData
struct Z_Construct_UFunction_URTSAbilitySystemHelper_CreateGameplayEventData_Statics
{
	struct RTSAbilitySystemHelper_eventCreateGameplayEventData_Parms
	{
		AActor* Source;
		FRTSOrderTargetData TargetData;
		TSubclassOf<UGameplayAbility> Ability;
		FGameplayEventData OutEventData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fills a 'FGameplayEventData' with values from the specified ability and order target data. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fills a 'FGameplayEventData' with values from the specified ability and order target data." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetData;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutEventData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_CreateGameplayEventData_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventCreateGameplayEventData_Parms, Source), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_CreateGameplayEventData_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventCreateGameplayEventData_Parms, TargetData), Z_Construct_UScriptStruct_FRTSOrderTargetData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetData_MetaData), NewProp_TargetData_MetaData) }; // 2315840092
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_CreateGameplayEventData_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventCreateGameplayEventData_Parms, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_CreateGameplayEventData_Statics::NewProp_OutEventData = { "OutEventData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventCreateGameplayEventData_Parms, OutEventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(0, nullptr) }; // 1231635826
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_CreateGameplayEventData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_CreateGameplayEventData_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_CreateGameplayEventData_Statics::NewProp_TargetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_CreateGameplayEventData_Statics::NewProp_Ability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_CreateGameplayEventData_Statics::NewProp_OutEventData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_CreateGameplayEventData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_CreateGameplayEventData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "CreateGameplayEventData", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_CreateGameplayEventData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_CreateGameplayEventData_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_CreateGameplayEventData_Statics::RTSAbilitySystemHelper_eventCreateGameplayEventData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_CreateGameplayEventData_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_CreateGameplayEventData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_CreateGameplayEventData_Statics::RTSAbilitySystemHelper_eventCreateGameplayEventData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_CreateGameplayEventData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_CreateGameplayEventData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execCreateGameplayEventData)
{
	P_GET_OBJECT(AActor,Z_Param_Source);
	P_GET_STRUCT_REF(FRTSOrderTargetData,Z_Param_Out_TargetData);
	P_GET_OBJECT(UClass,Z_Param_Ability);
	P_GET_STRUCT_REF(FGameplayEventData,Z_Param_Out_OutEventData);
	P_FINISH;
	P_NATIVE_BEGIN;
	URTSAbilitySystemHelper::CreateGameplayEventData(Z_Param_Source,Z_Param_Out_TargetData,Z_Param_Ability,Z_Param_Out_OutEventData);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function CreateGameplayEventData

// Begin Class URTSAbilitySystemHelper Function CreateGameplayEventDataWithEventTag
struct Z_Construct_UFunction_URTSAbilitySystemHelper_CreateGameplayEventDataWithEventTag_Statics
{
	struct RTSAbilitySystemHelper_eventCreateGameplayEventDataWithEventTag_Parms
	{
		AActor* Source;
		AActor* Target;
		FGameplayTag EventTag;
		FGameplayEventData OutEventData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fills a 'FGameplayEventData' with values from the specified Event-Tag without EventData. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fills a 'FGameplayEventData' with values from the specified Event-Tag without EventData." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutEventData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_CreateGameplayEventDataWithEventTag_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventCreateGameplayEventDataWithEventTag_Parms, Source), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_CreateGameplayEventDataWithEventTag_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventCreateGameplayEventDataWithEventTag_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_CreateGameplayEventDataWithEventTag_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventCreateGameplayEventDataWithEventTag_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_CreateGameplayEventDataWithEventTag_Statics::NewProp_OutEventData = { "OutEventData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventCreateGameplayEventDataWithEventTag_Parms, OutEventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(0, nullptr) }; // 1231635826
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_CreateGameplayEventDataWithEventTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_CreateGameplayEventDataWithEventTag_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_CreateGameplayEventDataWithEventTag_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_CreateGameplayEventDataWithEventTag_Statics::NewProp_EventTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_CreateGameplayEventDataWithEventTag_Statics::NewProp_OutEventData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_CreateGameplayEventDataWithEventTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_CreateGameplayEventDataWithEventTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "CreateGameplayEventDataWithEventTag", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_CreateGameplayEventDataWithEventTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_CreateGameplayEventDataWithEventTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_CreateGameplayEventDataWithEventTag_Statics::RTSAbilitySystemHelper_eventCreateGameplayEventDataWithEventTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_CreateGameplayEventDataWithEventTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_CreateGameplayEventDataWithEventTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_CreateGameplayEventDataWithEventTag_Statics::RTSAbilitySystemHelper_eventCreateGameplayEventDataWithEventTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_CreateGameplayEventDataWithEventTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_CreateGameplayEventDataWithEventTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execCreateGameplayEventDataWithEventTag)
{
	P_GET_OBJECT(AActor,Z_Param_Source);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_STRUCT(FGameplayTag,Z_Param_EventTag);
	P_GET_STRUCT_REF(FGameplayEventData,Z_Param_Out_OutEventData);
	P_FINISH;
	P_NATIVE_BEGIN;
	URTSAbilitySystemHelper::CreateGameplayEventDataWithEventTag(Z_Param_Source,Z_Param_Target,Z_Param_EventTag,Z_Param_Out_OutEventData);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function CreateGameplayEventDataWithEventTag

// Begin Class URTSAbilitySystemHelper Function DoesSatisfyTagRequirements
struct Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirements_Statics
{
	struct RTSAbilitySystemHelper_eventDoesSatisfyTagRequirements_Parms
	{
		FGameplayTagContainer Tags;
		FGameplayTagContainer RequiredTags;
		FGameplayTagContainer BlockedTags;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Checks if the specified tags has all of the specified required tags and none of the specified blocked tags. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the specified tags has all of the specified required tags and none of the specified blocked tags." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredTags_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockedTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlockedTags;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirements_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventDoesSatisfyTagRequirements_Parms, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirements_Statics::NewProp_RequiredTags = { "RequiredTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventDoesSatisfyTagRequirements_Parms, RequiredTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredTags_MetaData), NewProp_RequiredTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirements_Statics::NewProp_BlockedTags = { "BlockedTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventDoesSatisfyTagRequirements_Parms, BlockedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockedTags_MetaData), NewProp_BlockedTags_MetaData) }; // 3352185621
void Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirements_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTSAbilitySystemHelper_eventDoesSatisfyTagRequirements_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTSAbilitySystemHelper_eventDoesSatisfyTagRequirements_Parms), &Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirements_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirements_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirements_Statics::NewProp_RequiredTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirements_Statics::NewProp_BlockedTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirements_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirements_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "DoesSatisfyTagRequirements", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirements_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirements_Statics::RTSAbilitySystemHelper_eventDoesSatisfyTagRequirements_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirements_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirements_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirements_Statics::RTSAbilitySystemHelper_eventDoesSatisfyTagRequirements_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirements()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirements_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execDoesSatisfyTagRequirements)
{
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_Tags);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_RequiredTags);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_BlockedTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URTSAbilitySystemHelper::DoesSatisfyTagRequirements(Z_Param_Out_Tags,Z_Param_Out_RequiredTags,Z_Param_Out_BlockedTags);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function DoesSatisfyTagRequirements

// Begin Class URTSAbilitySystemHelper Function DoesSatisfyTagRequirementsWithResult
struct Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirementsWithResult_Statics
{
	struct RTSAbilitySystemHelper_eventDoesSatisfyTagRequirementsWithResult_Parms
	{
		FGameplayTagContainer Tags;
		FGameplayTagContainer InRequiredTags;
		FGameplayTagContainer InBlockedTags;
		FGameplayTagContainer OutMissingTags;
		FGameplayTagContainer OutBlockingTags;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Checks if the specified tags has all of the specified required tags and none of the specified blocked tags. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the specified tags has all of the specified required tags and none of the specified blocked tags." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InRequiredTags_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBlockedTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InRequiredTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InBlockedTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutMissingTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutBlockingTags;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirementsWithResult_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventDoesSatisfyTagRequirementsWithResult_Parms, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirementsWithResult_Statics::NewProp_InRequiredTags = { "InRequiredTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventDoesSatisfyTagRequirementsWithResult_Parms, InRequiredTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InRequiredTags_MetaData), NewProp_InRequiredTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirementsWithResult_Statics::NewProp_InBlockedTags = { "InBlockedTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventDoesSatisfyTagRequirementsWithResult_Parms, InBlockedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBlockedTags_MetaData), NewProp_InBlockedTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirementsWithResult_Statics::NewProp_OutMissingTags = { "OutMissingTags", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventDoesSatisfyTagRequirementsWithResult_Parms, OutMissingTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirementsWithResult_Statics::NewProp_OutBlockingTags = { "OutBlockingTags", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventDoesSatisfyTagRequirementsWithResult_Parms, OutBlockingTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
void Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirementsWithResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTSAbilitySystemHelper_eventDoesSatisfyTagRequirementsWithResult_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirementsWithResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTSAbilitySystemHelper_eventDoesSatisfyTagRequirementsWithResult_Parms), &Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirementsWithResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirementsWithResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirementsWithResult_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirementsWithResult_Statics::NewProp_InRequiredTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirementsWithResult_Statics::NewProp_InBlockedTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirementsWithResult_Statics::NewProp_OutMissingTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirementsWithResult_Statics::NewProp_OutBlockingTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirementsWithResult_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirementsWithResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirementsWithResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "DoesSatisfyTagRequirementsWithResult", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirementsWithResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirementsWithResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirementsWithResult_Statics::RTSAbilitySystemHelper_eventDoesSatisfyTagRequirementsWithResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirementsWithResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirementsWithResult_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirementsWithResult_Statics::RTSAbilitySystemHelper_eventDoesSatisfyTagRequirementsWithResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirementsWithResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirementsWithResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execDoesSatisfyTagRequirementsWithResult)
{
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_Tags);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_InRequiredTags);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_InBlockedTags);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_OutMissingTags);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_OutBlockingTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URTSAbilitySystemHelper::DoesSatisfyTagRequirementsWithResult(Z_Param_Out_Tags,Z_Param_Out_InRequiredTags,Z_Param_Out_InBlockedTags,Z_Param_Out_OutMissingTags,Z_Param_Out_OutBlockingTags);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function DoesSatisfyTagRequirementsWithResult

// Begin Class URTSAbilitySystemHelper Function ExecuteGameplayCueWithParamsUnattached
struct Z_Construct_UFunction_URTSAbilitySystemHelper_ExecuteGameplayCueWithParamsUnattached_Statics
{
	struct RTSAbilitySystemHelper_eventExecuteGameplayCueWithParamsUnattached_Parms
	{
		AActor* Actor;
		FGameplayTag AreaOfEffectGameplayCue;
		FGameplayCueParameters GameplayCueParameters;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|GameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Executes GameplayCues without being attached to a GameplayAbilityObject.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Executes GameplayCues without being attached to a GameplayAbilityObject." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AreaOfEffectGameplayCue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueParameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_ExecuteGameplayCueWithParamsUnattached_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventExecuteGameplayCueWithParamsUnattached_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_ExecuteGameplayCueWithParamsUnattached_Statics::NewProp_AreaOfEffectGameplayCue = { "AreaOfEffectGameplayCue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventExecuteGameplayCueWithParamsUnattached_Parms, AreaOfEffectGameplayCue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_ExecuteGameplayCueWithParamsUnattached_Statics::NewProp_GameplayCueParameters = { "GameplayCueParameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventExecuteGameplayCueWithParamsUnattached_Parms, GameplayCueParameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayCueParameters_MetaData), NewProp_GameplayCueParameters_MetaData) }; // 98506619
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_ExecuteGameplayCueWithParamsUnattached_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_ExecuteGameplayCueWithParamsUnattached_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_ExecuteGameplayCueWithParamsUnattached_Statics::NewProp_AreaOfEffectGameplayCue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_ExecuteGameplayCueWithParamsUnattached_Statics::NewProp_GameplayCueParameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_ExecuteGameplayCueWithParamsUnattached_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_ExecuteGameplayCueWithParamsUnattached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "ExecuteGameplayCueWithParamsUnattached", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_ExecuteGameplayCueWithParamsUnattached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_ExecuteGameplayCueWithParamsUnattached_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_ExecuteGameplayCueWithParamsUnattached_Statics::RTSAbilitySystemHelper_eventExecuteGameplayCueWithParamsUnattached_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_ExecuteGameplayCueWithParamsUnattached_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_ExecuteGameplayCueWithParamsUnattached_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_ExecuteGameplayCueWithParamsUnattached_Statics::RTSAbilitySystemHelper_eventExecuteGameplayCueWithParamsUnattached_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_ExecuteGameplayCueWithParamsUnattached()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_ExecuteGameplayCueWithParamsUnattached_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execExecuteGameplayCueWithParamsUnattached)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT(FGameplayTag,Z_Param_AreaOfEffectGameplayCue);
	P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_GameplayCueParameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	URTSAbilitySystemHelper::ExecuteGameplayCueWithParamsUnattached(Z_Param_Actor,Z_Param_AreaOfEffectGameplayCue,Z_Param_Out_GameplayCueParameters);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function ExecuteGameplayCueWithParamsUnattached

// Begin Class URTSAbilitySystemHelper Function FilterForTagsWithParentTag
struct Z_Construct_UFunction_URTSAbilitySystemHelper_FilterForTagsWithParentTag_Statics
{
	struct RTSAbilitySystemHelper_eventFilterForTagsWithParentTag_Parms
	{
		FGameplayTagContainer TagContainer;
		FGameplayTag ParentTag;
		FGameplayTagContainer ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Returns a tag container with all tags from the specified tag container that are derived from the specified\n     * parent tag.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a tag container with all tags from the specified tag container that are derived from the specified\nparent tag." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParentTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_FilterForTagsWithParentTag_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventFilterForTagsWithParentTag_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagContainer_MetaData), NewProp_TagContainer_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_FilterForTagsWithParentTag_Statics::NewProp_ParentTag = { "ParentTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventFilterForTagsWithParentTag_Parms, ParentTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_FilterForTagsWithParentTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventFilterForTagsWithParentTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_FilterForTagsWithParentTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_FilterForTagsWithParentTag_Statics::NewProp_TagContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_FilterForTagsWithParentTag_Statics::NewProp_ParentTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_FilterForTagsWithParentTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_FilterForTagsWithParentTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_FilterForTagsWithParentTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "FilterForTagsWithParentTag", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_FilterForTagsWithParentTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_FilterForTagsWithParentTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_FilterForTagsWithParentTag_Statics::RTSAbilitySystemHelper_eventFilterForTagsWithParentTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_FilterForTagsWithParentTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_FilterForTagsWithParentTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_FilterForTagsWithParentTag_Statics::RTSAbilitySystemHelper_eventFilterForTagsWithParentTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_FilterForTagsWithParentTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_FilterForTagsWithParentTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execFilterForTagsWithParentTag)
{
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer);
	P_GET_STRUCT(FGameplayTag,Z_Param_ParentTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTagContainer*)Z_Param__Result=URTSAbilitySystemHelper::FilterForTagsWithParentTag(Z_Param_Out_TagContainer,Z_Param_ParentTag);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function FilterForTagsWithParentTag

// Begin Class URTSAbilitySystemHelper Function FindDefaultComponentByClass
struct Z_Construct_UFunction_URTSAbilitySystemHelper_FindDefaultComponentByClass_Statics
{
	struct RTSAbilitySystemHelper_eventFindDefaultComponentByClass_Parms
	{
		const TSubclassOf<AActor> InActorClass;
		const TSubclassOf<UActorComponent> InComponentClass;
		UActorComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Searches the components attached to the specified actor class and returns the first encountered component of the\n     * specified class. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Searches the components attached to the specified actor class and returns the first encountered component of the\nspecified class." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InActorClass_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InComponentClass_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InActorClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InComponentClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_FindDefaultComponentByClass_Statics::NewProp_InActorClass = { "InActorClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventFindDefaultComponentByClass_Parms, InActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InActorClass_MetaData), NewProp_InActorClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_FindDefaultComponentByClass_Statics::NewProp_InComponentClass = { "InComponentClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventFindDefaultComponentByClass_Parms, InComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InComponentClass_MetaData), NewProp_InComponentClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_FindDefaultComponentByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventFindDefaultComponentByClass_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_FindDefaultComponentByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_FindDefaultComponentByClass_Statics::NewProp_InActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_FindDefaultComponentByClass_Statics::NewProp_InComponentClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_FindDefaultComponentByClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_FindDefaultComponentByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_FindDefaultComponentByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "FindDefaultComponentByClass", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_FindDefaultComponentByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_FindDefaultComponentByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_FindDefaultComponentByClass_Statics::RTSAbilitySystemHelper_eventFindDefaultComponentByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_FindDefaultComponentByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_FindDefaultComponentByClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_FindDefaultComponentByClass_Statics::RTSAbilitySystemHelper_eventFindDefaultComponentByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_FindDefaultComponentByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_FindDefaultComponentByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execFindDefaultComponentByClass)
{
	P_GET_OBJECT(UClass,Z_Param_InActorClass);
	P_GET_OBJECT(UClass,Z_Param_InComponentClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=URTSAbilitySystemHelper::FindDefaultComponentByClass(Z_Param_InActorClass,Z_Param_InComponentClass);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function FindDefaultComponentByClass

// Begin Class URTSAbilitySystemHelper Function GetAbilities
struct Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilities_Statics
{
	struct RTSAbilitySystemHelper_eventGetAbilities_Parms
	{
		const UAbilitySystemComponent* AbilitySystem;
		TArray<TSubclassOf<UGameplayAbility> > ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the list of all abilities of the given ability system component. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the list of all abilities of the given ability system component." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystem_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystem;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilities_Statics::NewProp_AbilitySystem = { "AbilitySystem", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetAbilities_Parms, AbilitySystem), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystem_MetaData), NewProp_AbilitySystem_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilities_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilities_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetAbilities_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilities_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilities_Statics::NewProp_AbilitySystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilities_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilities_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilities_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "GetAbilities", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilities_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilities_Statics::RTSAbilitySystemHelper_eventGetAbilities_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilities_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilities_Statics::RTSAbilitySystemHelper_eventGetAbilities_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilities()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilities_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execGetAbilities)
{
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystem);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<TSubclassOf<UGameplayAbility> >*)Z_Param__Result=URTSAbilitySystemHelper::GetAbilities(Z_Param_AbilitySystem);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function GetAbilities

// Begin Class URTSAbilitySystemHelper Function GetAbilityDescription
struct Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityDescription_Statics
{
	struct RTSAbilitySystemHelper_eventGetAbilityDescription_Parms
	{
		TSubclassOf<UGameplayAbility> Ability;
		AActor* Actor;
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the name of the ability. Can be shown in the UI. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the name of the ability. Can be shown in the UI." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityDescription_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetAbilityDescription_Parms, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityDescription_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetAbilityDescription_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetAbilityDescription_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityDescription_Statics::NewProp_Ability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityDescription_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityDescription_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "GetAbilityDescription", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityDescription_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityDescription_Statics::RTSAbilitySystemHelper_eventGetAbilityDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityDescription_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityDescription_Statics::RTSAbilitySystemHelper_eventGetAbilityDescription_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityDescription()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityDescription_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execGetAbilityDescription)
{
	P_GET_OBJECT(UClass,Z_Param_Ability);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=URTSAbilitySystemHelper::GetAbilityDescription(Z_Param_Ability,Z_Param_Actor);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function GetAbilityDescription

// Begin Class URTSAbilitySystemHelper Function GetAbilityIcon
struct Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityIcon_Statics
{
	struct RTSAbilitySystemHelper_eventGetAbilityIcon_Parms
	{
		TSubclassOf<UGameplayAbility> Ability;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the icon of the specified gameplay ability class. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the icon of the specified gameplay ability class." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityIcon_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetAbilityIcon_Parms, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetAbilityIcon_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityIcon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityIcon_Statics::NewProp_Ability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityIcon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityIcon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "GetAbilityIcon", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityIcon_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityIcon_Statics::RTSAbilitySystemHelper_eventGetAbilityIcon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityIcon_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityIcon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityIcon_Statics::RTSAbilitySystemHelper_eventGetAbilityIcon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityIcon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityIcon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execGetAbilityIcon)
{
	P_GET_OBJECT(UClass,Z_Param_Ability);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=URTSAbilitySystemHelper::GetAbilityIcon(Z_Param_Ability);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function GetAbilityIcon

// Begin Class URTSAbilitySystemHelper Function GetAbilityLevel
struct Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityLevel_Statics
{
	struct RTSAbilitySystemHelper_eventGetAbilityLevel_Parms
	{
		TSubclassOf<UGameplayAbility> Ability;
		AActor* Actor;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the current level of an ability. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current level of an ability." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityLevel_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetAbilityLevel_Parms, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityLevel_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetAbilityLevel_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetAbilityLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityLevel_Statics::NewProp_Ability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityLevel_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "GetAbilityLevel", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityLevel_Statics::RTSAbilitySystemHelper_eventGetAbilityLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityLevel_Statics::RTSAbilitySystemHelper_eventGetAbilityLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execGetAbilityLevel)
{
	P_GET_OBJECT(UClass,Z_Param_Ability);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=URTSAbilitySystemHelper::GetAbilityLevel(Z_Param_Ability,Z_Param_Actor);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function GetAbilityLevel

// Begin Class URTSAbilitySystemHelper Function GetAbilityMaxLevel
struct Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityMaxLevel_Statics
{
	struct RTSAbilitySystemHelper_eventGetAbilityMaxLevel_Parms
	{
		UObject* WorldContextObject;
		TSubclassOf<UGameplayAbility> Ability;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the maximum level of the ability. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the maximum level of the ability." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityMaxLevel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetAbilityMaxLevel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityMaxLevel_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetAbilityMaxLevel_Parms, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityMaxLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetAbilityMaxLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityMaxLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityMaxLevel_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityMaxLevel_Statics::NewProp_Ability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityMaxLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityMaxLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityMaxLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "GetAbilityMaxLevel", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityMaxLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityMaxLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityMaxLevel_Statics::RTSAbilitySystemHelper_eventGetAbilityMaxLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityMaxLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityMaxLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityMaxLevel_Statics::RTSAbilitySystemHelper_eventGetAbilityMaxLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityMaxLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityMaxLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execGetAbilityMaxLevel)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UClass,Z_Param_Ability);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=URTSAbilitySystemHelper::GetAbilityMaxLevel(Z_Param_WorldContextObject,Z_Param_Ability);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function GetAbilityMaxLevel

// Begin Class URTSAbilitySystemHelper Function GetAbilityName
struct Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityName_Statics
{
	struct RTSAbilitySystemHelper_eventGetAbilityName_Parms
	{
		TSubclassOf<UGameplayAbility> Ability;
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the name of the ability. Can be shown in the UI. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the name of the ability. Can be shown in the UI." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityName_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetAbilityName_Parms, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetAbilityName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityName_Statics::NewProp_Ability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "GetAbilityName", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityName_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityName_Statics::RTSAbilitySystemHelper_eventGetAbilityName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityName_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityName_Statics::RTSAbilitySystemHelper_eventGetAbilityName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execGetAbilityName)
{
	P_GET_OBJECT(UClass,Z_Param_Ability);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=URTSAbilitySystemHelper::GetAbilityName(Z_Param_Ability);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function GetAbilityName

// Begin Class URTSAbilitySystemHelper Function GetAbilityProcessPolicy
struct Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityProcessPolicy_Statics
{
	struct RTSAbilitySystemHelper_eventGetAbilityProcessPolicy_Parms
	{
		TSubclassOf<UGameplayAbility> Ability;
		ERTSAbilityProcessPolicy ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the ability process policy of the specified ability. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the ability process policy of the specified ability." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityProcessPolicy_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetAbilityProcessPolicy_Parms, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityProcessPolicy_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityProcessPolicy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetAbilityProcessPolicy_Parms, ReturnValue), Z_Construct_UEnum_ColonyOrders_ERTSAbilityProcessPolicy, METADATA_PARAMS(0, nullptr) }; // 2443064150
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityProcessPolicy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityProcessPolicy_Statics::NewProp_Ability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityProcessPolicy_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityProcessPolicy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityProcessPolicy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityProcessPolicy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "GetAbilityProcessPolicy", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityProcessPolicy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityProcessPolicy_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityProcessPolicy_Statics::RTSAbilitySystemHelper_eventGetAbilityProcessPolicy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityProcessPolicy_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityProcessPolicy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityProcessPolicy_Statics::RTSAbilitySystemHelper_eventGetAbilityProcessPolicy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityProcessPolicy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityProcessPolicy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execGetAbilityProcessPolicy)
{
	P_GET_OBJECT(UClass,Z_Param_Ability);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ERTSAbilityProcessPolicy*)Z_Param__Result=URTSAbilitySystemHelper::GetAbilityProcessPolicy(Z_Param_Ability);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function GetAbilityProcessPolicy

// Begin Class URTSAbilitySystemHelper Function GetAbilityRange
struct Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityRange_Statics
{
	struct RTSAbilitySystemHelper_eventGetAbilityRange_Parms
	{
		UAbilitySystemComponent* AbilitySystem;
		TSubclassOf<UGameplayAbility> Ability;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Gets the minimum range between the caster and the target that is needed to activate the specified ability.\n     * '0' value is returned if the ability has no range.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the minimum range between the caster and the target that is needed to activate the specified ability.\n'0' value is returned if the ability has no range." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystem;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityRange_Statics::NewProp_AbilitySystem = { "AbilitySystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetAbilityRange_Parms, AbilitySystem), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystem_MetaData), NewProp_AbilitySystem_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityRange_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetAbilityRange_Parms, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetAbilityRange_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityRange_Statics::NewProp_AbilitySystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityRange_Statics::NewProp_Ability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "GetAbilityRange", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityRange_Statics::RTSAbilitySystemHelper_eventGetAbilityRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityRange_Statics::RTSAbilitySystemHelper_eventGetAbilityRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execGetAbilityRange)
{
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystem);
	P_GET_OBJECT(UClass,Z_Param_Ability);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=URTSAbilitySystemHelper::GetAbilityRange(Z_Param_AbilitySystem,Z_Param_Ability);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function GetAbilityRange

// Begin Class URTSAbilitySystemHelper Function GetAbilitySourceTagRequirements
struct Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilitySourceTagRequirements_Statics
{
	struct RTSAbilitySystemHelper_eventGetAbilitySourceTagRequirements_Parms
	{
		TSubclassOf<UGameplayAbility> Ability;
		FGameplayTagContainer OutRequiredTags;
		FGameplayTagContainer OutBlockedTags;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets source tag requirements of the specified ability. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets source tag requirements of the specified ability." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutRequiredTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutBlockedTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilitySourceTagRequirements_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetAbilitySourceTagRequirements_Parms, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilitySourceTagRequirements_Statics::NewProp_OutRequiredTags = { "OutRequiredTags", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetAbilitySourceTagRequirements_Parms, OutRequiredTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilitySourceTagRequirements_Statics::NewProp_OutBlockedTags = { "OutBlockedTags", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetAbilitySourceTagRequirements_Parms, OutBlockedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilitySourceTagRequirements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilitySourceTagRequirements_Statics::NewProp_Ability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilitySourceTagRequirements_Statics::NewProp_OutRequiredTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilitySourceTagRequirements_Statics::NewProp_OutBlockedTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilitySourceTagRequirements_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilitySourceTagRequirements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "GetAbilitySourceTagRequirements", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilitySourceTagRequirements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilitySourceTagRequirements_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilitySourceTagRequirements_Statics::RTSAbilitySystemHelper_eventGetAbilitySourceTagRequirements_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilitySourceTagRequirements_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilitySourceTagRequirements_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilitySourceTagRequirements_Statics::RTSAbilitySystemHelper_eventGetAbilitySourceTagRequirements_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilitySourceTagRequirements()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilitySourceTagRequirements_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execGetAbilitySourceTagRequirements)
{
	P_GET_OBJECT(UClass,Z_Param_Ability);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_OutRequiredTags);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_OutBlockedTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	URTSAbilitySystemHelper::GetAbilitySourceTagRequirements(Z_Param_Ability,Z_Param_Out_OutRequiredTags,Z_Param_Out_OutBlockedTags);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function GetAbilitySourceTagRequirements

// Begin Class URTSAbilitySystemHelper Function GetAbilityTargetTagRequirements
struct Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityTargetTagRequirements_Statics
{
	struct RTSAbilitySystemHelper_eventGetAbilityTargetTagRequirements_Parms
	{
		TSubclassOf<UGameplayAbility> Ability;
		FGameplayTagContainer OutRequiredTags;
		FGameplayTagContainer OutBlockedTags;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets target tag requirements of the specified ability. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets target tag requirements of the specified ability." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutRequiredTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutBlockedTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityTargetTagRequirements_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetAbilityTargetTagRequirements_Parms, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityTargetTagRequirements_Statics::NewProp_OutRequiredTags = { "OutRequiredTags", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetAbilityTargetTagRequirements_Parms, OutRequiredTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityTargetTagRequirements_Statics::NewProp_OutBlockedTags = { "OutBlockedTags", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetAbilityTargetTagRequirements_Parms, OutBlockedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityTargetTagRequirements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityTargetTagRequirements_Statics::NewProp_Ability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityTargetTagRequirements_Statics::NewProp_OutRequiredTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityTargetTagRequirements_Statics::NewProp_OutBlockedTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityTargetTagRequirements_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityTargetTagRequirements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "GetAbilityTargetTagRequirements", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityTargetTagRequirements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityTargetTagRequirements_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityTargetTagRequirements_Statics::RTSAbilitySystemHelper_eventGetAbilityTargetTagRequirements_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityTargetTagRequirements_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityTargetTagRequirements_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityTargetTagRequirements_Statics::RTSAbilitySystemHelper_eventGetAbilityTargetTagRequirements_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityTargetTagRequirements()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityTargetTagRequirements_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execGetAbilityTargetTagRequirements)
{
	P_GET_OBJECT(UClass,Z_Param_Ability);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_OutRequiredTags);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_OutBlockedTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	URTSAbilitySystemHelper::GetAbilityTargetTagRequirements(Z_Param_Ability,Z_Param_Out_OutRequiredTags,Z_Param_Out_OutBlockedTags);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function GetAbilityTargetTagRequirements

// Begin Class URTSAbilitySystemHelper Function GetAbilityTargetType
struct Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityTargetType_Statics
{
	struct RTSAbilitySystemHelper_eventGetAbilityTargetType_Parms
	{
		TSubclassOf<UGameplayAbility> Ability;
		ERTSTargetType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the target type of the specified gameplay ability class. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the target type of the specified gameplay ability class." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityTargetType_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetAbilityTargetType_Parms, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityTargetType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityTargetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetAbilityTargetType_Parms, ReturnValue), Z_Construct_UEnum_ColonyOrders_ERTSTargetType, METADATA_PARAMS(0, nullptr) }; // 406532435
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityTargetType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityTargetType_Statics::NewProp_Ability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityTargetType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityTargetType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityTargetType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityTargetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "GetAbilityTargetType", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityTargetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityTargetType_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityTargetType_Statics::RTSAbilitySystemHelper_eventGetAbilityTargetType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityTargetType_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityTargetType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityTargetType_Statics::RTSAbilitySystemHelper_eventGetAbilityTargetType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityTargetType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityTargetType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execGetAbilityTargetType)
{
	P_GET_OBJECT(UClass,Z_Param_Ability);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ERTSTargetType*)Z_Param__Result=URTSAbilitySystemHelper::GetAbilityTargetType(Z_Param_Ability);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function GetAbilityTargetType

// Begin Class URTSAbilitySystemHelper Function GetActiveEffectDuration
struct Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectDuration_Statics
{
	struct RTSAbilitySystemHelper_eventGetActiveEffectDuration_Parms
	{
		const UAbilitySystemComponent* AbilitySystem;
		TSubclassOf<UGameplayEffect> Effect;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Gets the duration of the gameplay effect that is currently active on the ability system component. Returns 0 if\n     * the effect is not active on this ability system.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the duration of the gameplay effect that is currently active on the ability system component. Returns 0 if\nthe effect is not active on this ability system." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystem_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystem;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Effect;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectDuration_Statics::NewProp_AbilitySystem = { "AbilitySystem", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetActiveEffectDuration_Parms, AbilitySystem), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystem_MetaData), NewProp_AbilitySystem_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectDuration_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetActiveEffectDuration_Parms, Effect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetActiveEffectDuration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectDuration_Statics::NewProp_AbilitySystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectDuration_Statics::NewProp_Effect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectDuration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "GetActiveEffectDuration", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectDuration_Statics::RTSAbilitySystemHelper_eventGetActiveEffectDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectDuration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectDuration_Statics::RTSAbilitySystemHelper_eventGetActiveEffectDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execGetActiveEffectDuration)
{
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystem);
	P_GET_OBJECT(UClass,Z_Param_Effect);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=URTSAbilitySystemHelper::GetActiveEffectDuration(Z_Param_AbilitySystem,Z_Param_Effect);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function GetActiveEffectDuration

// Begin Class URTSAbilitySystemHelper Function GetActiveEffectTimeRemaining
struct Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectTimeRemaining_Statics
{
	struct RTSAbilitySystemHelper_eventGetActiveEffectTimeRemaining_Parms
	{
		const UAbilitySystemComponent* AbilitySystem;
		TSubclassOf<UGameplayEffect> Effect;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Gets the remaining time of the specified effect.  Returns 0 if the effect is not active on this ability\n     * system.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the remaining time of the specified effect.  Returns 0 if the effect is not active on this ability\nsystem." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystem_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystem;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Effect;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectTimeRemaining_Statics::NewProp_AbilitySystem = { "AbilitySystem", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetActiveEffectTimeRemaining_Parms, AbilitySystem), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystem_MetaData), NewProp_AbilitySystem_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectTimeRemaining_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetActiveEffectTimeRemaining_Parms, Effect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectTimeRemaining_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetActiveEffectTimeRemaining_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectTimeRemaining_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectTimeRemaining_Statics::NewProp_AbilitySystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectTimeRemaining_Statics::NewProp_Effect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectTimeRemaining_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectTimeRemaining_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectTimeRemaining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "GetActiveEffectTimeRemaining", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectTimeRemaining_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectTimeRemaining_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectTimeRemaining_Statics::RTSAbilitySystemHelper_eventGetActiveEffectTimeRemaining_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectTimeRemaining_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectTimeRemaining_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectTimeRemaining_Statics::RTSAbilitySystemHelper_eventGetActiveEffectTimeRemaining_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectTimeRemaining()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectTimeRemaining_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execGetActiveEffectTimeRemaining)
{
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystem);
	P_GET_OBJECT(UClass,Z_Param_Effect);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=URTSAbilitySystemHelper::GetActiveEffectTimeRemaining(Z_Param_AbilitySystem,Z_Param_Effect);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function GetActiveEffectTimeRemaining

// Begin Class URTSAbilitySystemHelper Function GetActiveEffectTimeRemainingAndDuration
struct Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectTimeRemainingAndDuration_Statics
{
	struct RTSAbilitySystemHelper_eventGetActiveEffectTimeRemainingAndDuration_Parms
	{
		const UAbilitySystemComponent* AbilitySystem;
		TSubclassOf<UGameplayEffect> Effect;
		float OutRemainingTime;
		float OutDuration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the cool down time and duration. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the cool down time and duration." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystem_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystem;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Effect;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutRemainingTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectTimeRemainingAndDuration_Statics::NewProp_AbilitySystem = { "AbilitySystem", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetActiveEffectTimeRemainingAndDuration_Parms, AbilitySystem), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystem_MetaData), NewProp_AbilitySystem_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectTimeRemainingAndDuration_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetActiveEffectTimeRemainingAndDuration_Parms, Effect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectTimeRemainingAndDuration_Statics::NewProp_OutRemainingTime = { "OutRemainingTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetActiveEffectTimeRemainingAndDuration_Parms, OutRemainingTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectTimeRemainingAndDuration_Statics::NewProp_OutDuration = { "OutDuration", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetActiveEffectTimeRemainingAndDuration_Parms, OutDuration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectTimeRemainingAndDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectTimeRemainingAndDuration_Statics::NewProp_AbilitySystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectTimeRemainingAndDuration_Statics::NewProp_Effect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectTimeRemainingAndDuration_Statics::NewProp_OutRemainingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectTimeRemainingAndDuration_Statics::NewProp_OutDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectTimeRemainingAndDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectTimeRemainingAndDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "GetActiveEffectTimeRemainingAndDuration", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectTimeRemainingAndDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectTimeRemainingAndDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectTimeRemainingAndDuration_Statics::RTSAbilitySystemHelper_eventGetActiveEffectTimeRemainingAndDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectTimeRemainingAndDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectTimeRemainingAndDuration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectTimeRemainingAndDuration_Statics::RTSAbilitySystemHelper_eventGetActiveEffectTimeRemainingAndDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectTimeRemainingAndDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectTimeRemainingAndDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execGetActiveEffectTimeRemainingAndDuration)
{
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystem);
	P_GET_OBJECT(UClass,Z_Param_Effect);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutRemainingTime);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutDuration);
	P_FINISH;
	P_NATIVE_BEGIN;
	URTSAbilitySystemHelper::GetActiveEffectTimeRemainingAndDuration(Z_Param_AbilitySystem,Z_Param_Effect,Z_Param_Out_OutRemainingTime,Z_Param_Out_OutDuration);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function GetActiveEffectTimeRemainingAndDuration

// Begin Class URTSAbilitySystemHelper Function GetActiveGameplayEffects
struct Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveGameplayEffects_Statics
{
	struct RTSAbilitySystemHelper_eventGetActiveGameplayEffects_Parms
	{
		const UAbilitySystemComponent* AbilitySystem;
		TArray<TSubclassOf<UGameplayEffect> > ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the list of all gameplay effects that are currently active for the given ability system component. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the list of all gameplay effects that are currently active for the given ability system component." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystem_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystem;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveGameplayEffects_Statics::NewProp_AbilitySystem = { "AbilitySystem", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetActiveGameplayEffects_Parms, AbilitySystem), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystem_MetaData), NewProp_AbilitySystem_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveGameplayEffects_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveGameplayEffects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetActiveGameplayEffects_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveGameplayEffects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveGameplayEffects_Statics::NewProp_AbilitySystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveGameplayEffects_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveGameplayEffects_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveGameplayEffects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveGameplayEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "GetActiveGameplayEffects", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveGameplayEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveGameplayEffects_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveGameplayEffects_Statics::RTSAbilitySystemHelper_eventGetActiveGameplayEffects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveGameplayEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveGameplayEffects_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveGameplayEffects_Statics::RTSAbilitySystemHelper_eventGetActiveGameplayEffects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveGameplayEffects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveGameplayEffects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execGetActiveGameplayEffects)
{
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystem);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<TSubclassOf<UGameplayEffect> >*)Z_Param__Result=URTSAbilitySystemHelper::GetActiveGameplayEffects(Z_Param_AbilitySystem);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function GetActiveGameplayEffects

// Begin Class URTSAbilitySystemHelper Function GetActiveGameplayEffectSpecs
struct Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveGameplayEffectSpecs_Statics
{
	struct RTSAbilitySystemHelper_eventGetActiveGameplayEffectSpecs_Parms
	{
		const UAbilitySystemComponent* AbilitySystem;
		TArray<FGameplayEffectSpec> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the list of all gameplay effects that are currently active for the given ability system component, along\n     * with additional data such as duration and stacks. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the list of all gameplay effects that are currently active for the given ability system component, along\nwith additional data such as duration and stacks." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystem_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystem;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveGameplayEffectSpecs_Statics::NewProp_AbilitySystem = { "AbilitySystem", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetActiveGameplayEffectSpecs_Parms, AbilitySystem), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystem_MetaData), NewProp_AbilitySystem_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveGameplayEffectSpecs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(0, nullptr) }; // 1577102320
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveGameplayEffectSpecs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetActiveGameplayEffectSpecs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1577102320
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveGameplayEffectSpecs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveGameplayEffectSpecs_Statics::NewProp_AbilitySystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveGameplayEffectSpecs_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveGameplayEffectSpecs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveGameplayEffectSpecs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveGameplayEffectSpecs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "GetActiveGameplayEffectSpecs", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveGameplayEffectSpecs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveGameplayEffectSpecs_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveGameplayEffectSpecs_Statics::RTSAbilitySystemHelper_eventGetActiveGameplayEffectSpecs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveGameplayEffectSpecs_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveGameplayEffectSpecs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveGameplayEffectSpecs_Statics::RTSAbilitySystemHelper_eventGetActiveGameplayEffectSpecs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveGameplayEffectSpecs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveGameplayEffectSpecs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execGetActiveGameplayEffectSpecs)
{
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystem);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FGameplayEffectSpec>*)Z_Param__Result=URTSAbilitySystemHelper::GetActiveGameplayEffectSpecs(Z_Param_AbilitySystem);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function GetActiveGameplayEffectSpecs

// Begin Class URTSAbilitySystemHelper Function GetBasicAttackAbilities
struct Z_Construct_UFunction_URTSAbilitySystemHelper_GetBasicAttackAbilities_Statics
{
	struct RTSAbilitySystemHelper_eventGetBasicAttackAbilities_Parms
	{
		const UAbilitySystemComponent* AbilitySystem;
		TArray<TSubclassOf<UGameplayAbility> > ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets all melee or ranged attack ability of the given ability system component. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets all melee or ranged attack ability of the given ability system component." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystem_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystem;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetBasicAttackAbilities_Statics::NewProp_AbilitySystem = { "AbilitySystem", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetBasicAttackAbilities_Parms, AbilitySystem), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystem_MetaData), NewProp_AbilitySystem_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetBasicAttackAbilities_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetBasicAttackAbilities_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetBasicAttackAbilities_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_GetBasicAttackAbilities_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetBasicAttackAbilities_Statics::NewProp_AbilitySystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetBasicAttackAbilities_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetBasicAttackAbilities_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetBasicAttackAbilities_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetBasicAttackAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "GetBasicAttackAbilities", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_GetBasicAttackAbilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetBasicAttackAbilities_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetBasicAttackAbilities_Statics::RTSAbilitySystemHelper_eventGetBasicAttackAbilities_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetBasicAttackAbilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_GetBasicAttackAbilities_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetBasicAttackAbilities_Statics::RTSAbilitySystemHelper_eventGetBasicAttackAbilities_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_GetBasicAttackAbilities()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_GetBasicAttackAbilities_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execGetBasicAttackAbilities)
{
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystem);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<TSubclassOf<UGameplayAbility> >*)Z_Param__Result=URTSAbilitySystemHelper::GetBasicAttackAbilities(Z_Param_AbilitySystem);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function GetBasicAttackAbilities

// Begin Class URTSAbilitySystemHelper Function GetCooldownEffect
struct Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownEffect_Statics
{
	struct RTSAbilitySystemHelper_eventGetCooldownEffect_Parms
	{
		TSubclassOf<UGameplayAbility> Ability;
		TSubclassOf<UGameplayEffect> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the cool down effect class of the specified gameplay ability class. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the cool down effect class of the specified gameplay ability class." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownEffect_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetCooldownEffect_Parms, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetCooldownEffect_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownEffect_Statics::NewProp_Ability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownEffect_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "GetCooldownEffect", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownEffect_Statics::RTSAbilitySystemHelper_eventGetCooldownEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownEffect_Statics::RTSAbilitySystemHelper_eventGetCooldownEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execGetCooldownEffect)
{
	P_GET_OBJECT(UClass,Z_Param_Ability);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<UGameplayEffect>*)Z_Param__Result=URTSAbilitySystemHelper::GetCooldownEffect(Z_Param_Ability);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function GetCooldownEffect

// Begin Class URTSAbilitySystemHelper Function GetCooldownTimeDuration
struct Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeDuration_Statics
{
	struct RTSAbilitySystemHelper_eventGetCooldownTimeDuration_Parms
	{
		const UAbilitySystemComponent* AbilitySystem;
		TSubclassOf<UGameplayAbility> Ability;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the cool down duration. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the cool down duration." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystem_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystem;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeDuration_Statics::NewProp_AbilitySystem = { "AbilitySystem", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetCooldownTimeDuration_Parms, AbilitySystem), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystem_MetaData), NewProp_AbilitySystem_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeDuration_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetCooldownTimeDuration_Parms, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetCooldownTimeDuration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeDuration_Statics::NewProp_AbilitySystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeDuration_Statics::NewProp_Ability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeDuration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "GetCooldownTimeDuration", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeDuration_Statics::RTSAbilitySystemHelper_eventGetCooldownTimeDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeDuration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeDuration_Statics::RTSAbilitySystemHelper_eventGetCooldownTimeDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execGetCooldownTimeDuration)
{
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystem);
	P_GET_OBJECT(UClass,Z_Param_Ability);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=URTSAbilitySystemHelper::GetCooldownTimeDuration(Z_Param_AbilitySystem,Z_Param_Ability);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function GetCooldownTimeDuration

// Begin Class URTSAbilitySystemHelper Function GetCooldownTimeRemaining
struct Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeRemaining_Statics
{
	struct RTSAbilitySystemHelper_eventGetCooldownTimeRemaining_Parms
	{
		const UAbilitySystemComponent* AbilitySystem;
		TSubclassOf<UGameplayAbility> Ability;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the remaining cool down time. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the remaining cool down time." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystem_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystem;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeRemaining_Statics::NewProp_AbilitySystem = { "AbilitySystem", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetCooldownTimeRemaining_Parms, AbilitySystem), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystem_MetaData), NewProp_AbilitySystem_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeRemaining_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetCooldownTimeRemaining_Parms, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeRemaining_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetCooldownTimeRemaining_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeRemaining_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeRemaining_Statics::NewProp_AbilitySystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeRemaining_Statics::NewProp_Ability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeRemaining_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeRemaining_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeRemaining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "GetCooldownTimeRemaining", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeRemaining_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeRemaining_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeRemaining_Statics::RTSAbilitySystemHelper_eventGetCooldownTimeRemaining_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeRemaining_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeRemaining_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeRemaining_Statics::RTSAbilitySystemHelper_eventGetCooldownTimeRemaining_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeRemaining()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeRemaining_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execGetCooldownTimeRemaining)
{
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystem);
	P_GET_OBJECT(UClass,Z_Param_Ability);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=URTSAbilitySystemHelper::GetCooldownTimeRemaining(Z_Param_AbilitySystem,Z_Param_Ability);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function GetCooldownTimeRemaining

// Begin Class URTSAbilitySystemHelper Function GetCooldownTimeRemainingAndDuration
struct Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeRemainingAndDuration_Statics
{
	struct RTSAbilitySystemHelper_eventGetCooldownTimeRemainingAndDuration_Parms
	{
		const UAbilitySystemComponent* AbilitySystem;
		TSubclassOf<UGameplayAbility> Ability;
		float OutRemainingCooldownTime;
		float OutCooldownDuration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the cool down time and duration. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the cool down time and duration." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystem_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystem;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutRemainingCooldownTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutCooldownDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeRemainingAndDuration_Statics::NewProp_AbilitySystem = { "AbilitySystem", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetCooldownTimeRemainingAndDuration_Parms, AbilitySystem), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystem_MetaData), NewProp_AbilitySystem_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeRemainingAndDuration_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetCooldownTimeRemainingAndDuration_Parms, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeRemainingAndDuration_Statics::NewProp_OutRemainingCooldownTime = { "OutRemainingCooldownTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetCooldownTimeRemainingAndDuration_Parms, OutRemainingCooldownTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeRemainingAndDuration_Statics::NewProp_OutCooldownDuration = { "OutCooldownDuration", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetCooldownTimeRemainingAndDuration_Parms, OutCooldownDuration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeRemainingAndDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeRemainingAndDuration_Statics::NewProp_AbilitySystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeRemainingAndDuration_Statics::NewProp_Ability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeRemainingAndDuration_Statics::NewProp_OutRemainingCooldownTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeRemainingAndDuration_Statics::NewProp_OutCooldownDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeRemainingAndDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeRemainingAndDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "GetCooldownTimeRemainingAndDuration", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeRemainingAndDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeRemainingAndDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeRemainingAndDuration_Statics::RTSAbilitySystemHelper_eventGetCooldownTimeRemainingAndDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeRemainingAndDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeRemainingAndDuration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeRemainingAndDuration_Statics::RTSAbilitySystemHelper_eventGetCooldownTimeRemainingAndDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeRemainingAndDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeRemainingAndDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execGetCooldownTimeRemainingAndDuration)
{
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystem);
	P_GET_OBJECT(UClass,Z_Param_Ability);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutRemainingCooldownTime);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutCooldownDuration);
	P_FINISH;
	P_NATIVE_BEGIN;
	URTSAbilitySystemHelper::GetCooldownTimeRemainingAndDuration(Z_Param_AbilitySystem,Z_Param_Ability,Z_Param_Out_OutRemainingCooldownTime,Z_Param_Out_OutCooldownDuration);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function GetCooldownTimeRemainingAndDuration

// Begin Class URTSAbilitySystemHelper Function GetEffectDescription
struct Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectDescription_Statics
{
	struct RTSAbilitySystemHelper_eventGetEffectDescription_Parms
	{
		TSubclassOf<UGameplayEffect> Effect;
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the description of the specified gameplay effect class. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the description of the specified gameplay effect class." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Effect;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectDescription_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetEffectDescription_Parms, Effect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetEffectDescription_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectDescription_Statics::NewProp_Effect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectDescription_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "GetEffectDescription", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectDescription_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectDescription_Statics::RTSAbilitySystemHelper_eventGetEffectDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectDescription_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectDescription_Statics::RTSAbilitySystemHelper_eventGetEffectDescription_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectDescription()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectDescription_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execGetEffectDescription)
{
	P_GET_OBJECT(UClass,Z_Param_Effect);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=URTSAbilitySystemHelper::GetEffectDescription(Z_Param_Effect);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function GetEffectDescription

// Begin Class URTSAbilitySystemHelper Function GetEffectIcon
struct Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectIcon_Statics
{
	struct RTSAbilitySystemHelper_eventGetEffectIcon_Parms
	{
		TSubclassOf<UGameplayEffect> Effect;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the icon of the specified gameplay effect class. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the icon of the specified gameplay effect class." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Effect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectIcon_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetEffectIcon_Parms, Effect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetEffectIcon_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectIcon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectIcon_Statics::NewProp_Effect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectIcon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectIcon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "GetEffectIcon", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectIcon_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectIcon_Statics::RTSAbilitySystemHelper_eventGetEffectIcon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectIcon_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectIcon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectIcon_Statics::RTSAbilitySystemHelper_eventGetEffectIcon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectIcon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectIcon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execGetEffectIcon)
{
	P_GET_OBJECT(UClass,Z_Param_Effect);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=URTSAbilitySystemHelper::GetEffectIcon(Z_Param_Effect);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function GetEffectIcon

// Begin Class URTSAbilitySystemHelper Function GetEffectName
struct Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectName_Statics
{
	struct RTSAbilitySystemHelper_eventGetEffectName_Parms
	{
		TSubclassOf<UGameplayEffect> Effect;
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the name of the specified gameplay effect class. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the name of the specified gameplay effect class." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Effect;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectName_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetEffectName_Parms, Effect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetEffectName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectName_Statics::NewProp_Effect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "GetEffectName", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectName_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectName_Statics::RTSAbilitySystemHelper_eventGetEffectName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectName_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectName_Statics::RTSAbilitySystemHelper_eventGetEffectName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execGetEffectName)
{
	P_GET_OBJECT(UClass,Z_Param_Effect);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=URTSAbilitySystemHelper::GetEffectName(Z_Param_Effect);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function GetEffectName

// Begin Class URTSAbilitySystemHelper Function GetGameplayAttributes
struct Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayAttributes_Statics
{
	struct RTSAbilitySystemHelper_eventGetGameplayAttributes_Parms
	{
		TArray<FGameplayAttribute> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Gets all game play attributes of all attribute sets (attributes declared in'UAbilitySystemComponent' not\n     * included).\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets all game play attributes of all attribute sets (attributes declared in'UAbilitySystemComponent' not\nincluded)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayAttributes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(0, nullptr) }; // 2792951819
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayAttributes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetGameplayAttributes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2792951819
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayAttributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayAttributes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayAttributes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayAttributes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "GetGameplayAttributes", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayAttributes_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayAttributes_Statics::RTSAbilitySystemHelper_eventGetGameplayAttributes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayAttributes_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayAttributes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayAttributes_Statics::RTSAbilitySystemHelper_eventGetGameplayAttributes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayAttributes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayAttributes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execGetGameplayAttributes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FGameplayAttribute>*)Z_Param__Result=URTSAbilitySystemHelper::GetGameplayAttributes();
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function GetGameplayAttributes

// Begin Class URTSAbilitySystemHelper Function GetGameplayEffectSpecClass
struct Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayEffectSpecClass_Statics
{
	struct RTSAbilitySystemHelper_eventGetGameplayEffectSpecClass_Parms
	{
		FGameplayEffectSpec GameplayEffectSpec;
		TSubclassOf<UGameplayEffect> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the gameplay effect class of the specified gameplay effect spec. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the gameplay effect class of the specified gameplay effect spec." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffectSpec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayEffectSpec;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayEffectSpecClass_Statics::NewProp_GameplayEffectSpec = { "GameplayEffectSpec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetGameplayEffectSpecClass_Parms, GameplayEffectSpec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayEffectSpec_MetaData), NewProp_GameplayEffectSpec_MetaData) }; // 1577102320
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayEffectSpecClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetGameplayEffectSpecClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayEffectSpecClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayEffectSpecClass_Statics::NewProp_GameplayEffectSpec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayEffectSpecClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayEffectSpecClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayEffectSpecClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "GetGameplayEffectSpecClass", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayEffectSpecClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayEffectSpecClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayEffectSpecClass_Statics::RTSAbilitySystemHelper_eventGetGameplayEffectSpecClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayEffectSpecClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayEffectSpecClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayEffectSpecClass_Statics::RTSAbilitySystemHelper_eventGetGameplayEffectSpecClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayEffectSpecClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayEffectSpecClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execGetGameplayEffectSpecClass)
{
	P_GET_STRUCT_REF(FGameplayEffectSpec,Z_Param_Out_GameplayEffectSpec);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<UGameplayEffect>*)Z_Param__Result=URTSAbilitySystemHelper::GetGameplayEffectSpecClass(Z_Param_Out_GameplayEffectSpec);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function GetGameplayEffectSpecClass

// Begin Class URTSAbilitySystemHelper Function GetGameplayEffectSpecStackCount
struct Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayEffectSpecStackCount_Statics
{
	struct RTSAbilitySystemHelper_eventGetGameplayEffectSpecStackCount_Parms
	{
		FGameplayEffectSpec GameplayEffectSpec;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the number of stacks of the specified gameplay effect spec. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the number of stacks of the specified gameplay effect spec." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffectSpec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayEffectSpec;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayEffectSpecStackCount_Statics::NewProp_GameplayEffectSpec = { "GameplayEffectSpec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetGameplayEffectSpecStackCount_Parms, GameplayEffectSpec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayEffectSpec_MetaData), NewProp_GameplayEffectSpec_MetaData) }; // 1577102320
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayEffectSpecStackCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetGameplayEffectSpecStackCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayEffectSpecStackCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayEffectSpecStackCount_Statics::NewProp_GameplayEffectSpec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayEffectSpecStackCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayEffectSpecStackCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayEffectSpecStackCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "GetGameplayEffectSpecStackCount", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayEffectSpecStackCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayEffectSpecStackCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayEffectSpecStackCount_Statics::RTSAbilitySystemHelper_eventGetGameplayEffectSpecStackCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayEffectSpecStackCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayEffectSpecStackCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayEffectSpecStackCount_Statics::RTSAbilitySystemHelper_eventGetGameplayEffectSpecStackCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayEffectSpecStackCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayEffectSpecStackCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execGetGameplayEffectSpecStackCount)
{
	P_GET_STRUCT_REF(FGameplayEffectSpec,Z_Param_Out_GameplayEffectSpec);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=URTSAbilitySystemHelper::GetGameplayEffectSpecStackCount(Z_Param_Out_GameplayEffectSpec);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function GetGameplayEffectSpecStackCount

// Begin Class URTSAbilitySystemHelper Function GetGameplayTagCount
struct Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayTagCount_Statics
{
	struct RTSAbilitySystemHelper_eventGetGameplayTagCount_Parms
	{
		const UAbilitySystemComponent* AbilitySystem;
		FGameplayTag TagToCheck;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the tag count of the specified  gameplay tag from the specified ability system. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the tag count of the specified  gameplay tag from the specified ability system." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystem_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystem;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagToCheck;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayTagCount_Statics::NewProp_AbilitySystem = { "AbilitySystem", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetGameplayTagCount_Parms, AbilitySystem), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystem_MetaData), NewProp_AbilitySystem_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayTagCount_Statics::NewProp_TagToCheck = { "TagToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetGameplayTagCount_Parms, TagToCheck), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayTagCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetGameplayTagCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayTagCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayTagCount_Statics::NewProp_AbilitySystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayTagCount_Statics::NewProp_TagToCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayTagCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayTagCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayTagCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "GetGameplayTagCount", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayTagCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayTagCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayTagCount_Statics::RTSAbilitySystemHelper_eventGetGameplayTagCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayTagCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayTagCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayTagCount_Statics::RTSAbilitySystemHelper_eventGetGameplayTagCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayTagCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayTagCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execGetGameplayTagCount)
{
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystem);
	P_GET_STRUCT(FGameplayTag,Z_Param_TagToCheck);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=URTSAbilitySystemHelper::GetGameplayTagCount(Z_Param_AbilitySystem,Z_Param_TagToCheck);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function GetGameplayTagCount

// Begin Class URTSAbilitySystemHelper Function GetGameplayTags
struct Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayTags_Statics
{
	struct RTSAbilitySystemHelper_eventGetGameplayTags_Parms
	{
		const UAbilitySystemComponent* AbilitySystem;
		FGameplayTagContainer ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets all gameplay tags from the specified ability system. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets all gameplay tags from the specified ability system." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystem_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystem;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayTags_Statics::NewProp_AbilitySystem = { "AbilitySystem", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetGameplayTags_Parms, AbilitySystem), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystem_MetaData), NewProp_AbilitySystem_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetGameplayTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayTags_Statics::NewProp_AbilitySystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "GetGameplayTags", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayTags_Statics::RTSAbilitySystemHelper_eventGetGameplayTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayTags_Statics::RTSAbilitySystemHelper_eventGetGameplayTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execGetGameplayTags)
{
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystem);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTagContainer*)Z_Param__Result=URTSAbilitySystemHelper::GetGameplayTags(Z_Param_AbilitySystem);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function GetGameplayTags

// Begin Class URTSAbilitySystemHelper Function GetGrantedAbilitiesFromGameplayEffect
struct Z_Construct_UFunction_URTSAbilitySystemHelper_GetGrantedAbilitiesFromGameplayEffect_Statics
{
	struct RTSAbilitySystemHelper_eventGetGrantedAbilitiesFromGameplayEffect_Parms
	{
		TSubclassOf<UGameplayEffect> GameplayEffect;
		TArray<TSubclassOf<UGameplayAbility> > ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Gameplay Effects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameplayEffect;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetGrantedAbilitiesFromGameplayEffect_Statics::NewProp_GameplayEffect = { "GameplayEffect", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetGrantedAbilitiesFromGameplayEffect_Parms, GameplayEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetGrantedAbilitiesFromGameplayEffect_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetGrantedAbilitiesFromGameplayEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetGrantedAbilitiesFromGameplayEffect_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_GetGrantedAbilitiesFromGameplayEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetGrantedAbilitiesFromGameplayEffect_Statics::NewProp_GameplayEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetGrantedAbilitiesFromGameplayEffect_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetGrantedAbilitiesFromGameplayEffect_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetGrantedAbilitiesFromGameplayEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetGrantedAbilitiesFromGameplayEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "GetGrantedAbilitiesFromGameplayEffect", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_GetGrantedAbilitiesFromGameplayEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetGrantedAbilitiesFromGameplayEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetGrantedAbilitiesFromGameplayEffect_Statics::RTSAbilitySystemHelper_eventGetGrantedAbilitiesFromGameplayEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetGrantedAbilitiesFromGameplayEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_GetGrantedAbilitiesFromGameplayEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetGrantedAbilitiesFromGameplayEffect_Statics::RTSAbilitySystemHelper_eventGetGrantedAbilitiesFromGameplayEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_GetGrantedAbilitiesFromGameplayEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_GetGrantedAbilitiesFromGameplayEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execGetGrantedAbilitiesFromGameplayEffect)
{
	P_GET_OBJECT(UClass,Z_Param_GameplayEffect);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<TSubclassOf<UGameplayAbility> >*)Z_Param__Result=URTSAbilitySystemHelper::GetGrantedAbilitiesFromGameplayEffect(Z_Param_GameplayEffect);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function GetGrantedAbilitiesFromGameplayEffect

// Begin Class URTSAbilitySystemHelper Function GetItemAbilityIndex
struct Z_Construct_UFunction_URTSAbilitySystemHelper_GetItemAbilityIndex_Statics
{
	struct RTSAbilitySystemHelper_eventGetItemAbilityIndex_Parms
	{
		UAbilitySystemComponent* AbilitySystem;
		TSubclassOf<UGameplayAbility> AbilityClass;
		int32 OutIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Gameplay Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the index of the ItemAbilities Array in the GameplayAbilitySystem */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the index of the ItemAbilities Array in the GameplayAbilitySystem" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystem;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetItemAbilityIndex_Statics::NewProp_AbilitySystem = { "AbilitySystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetItemAbilityIndex_Parms, AbilitySystem), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystem_MetaData), NewProp_AbilitySystem_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetItemAbilityIndex_Statics::NewProp_AbilityClass = { "AbilityClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetItemAbilityIndex_Parms, AbilityClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetItemAbilityIndex_Statics::NewProp_OutIndex = { "OutIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetItemAbilityIndex_Parms, OutIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URTSAbilitySystemHelper_GetItemAbilityIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTSAbilitySystemHelper_eventGetItemAbilityIndex_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetItemAbilityIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTSAbilitySystemHelper_eventGetItemAbilityIndex_Parms), &Z_Construct_UFunction_URTSAbilitySystemHelper_GetItemAbilityIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_GetItemAbilityIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetItemAbilityIndex_Statics::NewProp_AbilitySystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetItemAbilityIndex_Statics::NewProp_AbilityClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetItemAbilityIndex_Statics::NewProp_OutIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetItemAbilityIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetItemAbilityIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetItemAbilityIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "GetItemAbilityIndex", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_GetItemAbilityIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetItemAbilityIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetItemAbilityIndex_Statics::RTSAbilitySystemHelper_eventGetItemAbilityIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetItemAbilityIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_GetItemAbilityIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetItemAbilityIndex_Statics::RTSAbilitySystemHelper_eventGetItemAbilityIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_GetItemAbilityIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_GetItemAbilityIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execGetItemAbilityIndex)
{
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystem);
	P_GET_OBJECT(UClass,Z_Param_AbilityClass);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URTSAbilitySystemHelper::GetItemAbilityIndex(Z_Param_AbilitySystem,Z_Param_AbilityClass,Z_Param_Out_OutIndex);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function GetItemAbilityIndex

// Begin Class URTSAbilitySystemHelper Function GetLastTagName
struct Z_Construct_UFunction_URTSAbilitySystemHelper_GetLastTagName_Statics
{
	struct RTSAbilitySystemHelper_eventGetLastTagName_Parms
	{
		FGameplayTag Tag;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the last single name of the specified Tag. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the last single name of the specified Tag." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetLastTagName_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetLastTagName_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetLastTagName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetLastTagName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_GetLastTagName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetLastTagName_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetLastTagName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetLastTagName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetLastTagName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "GetLastTagName", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_GetLastTagName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetLastTagName_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetLastTagName_Statics::RTSAbilitySystemHelper_eventGetLastTagName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetLastTagName_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_GetLastTagName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetLastTagName_Statics::RTSAbilitySystemHelper_eventGetLastTagName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_GetLastTagName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_GetLastTagName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execGetLastTagName)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=URTSAbilitySystemHelper::GetLastTagName(Z_Param_Tag);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function GetLastTagName

// Begin Class URTSAbilitySystemHelper Function GetPlayerOwnerTags
struct Z_Construct_UFunction_URTSAbilitySystemHelper_GetPlayerOwnerTags_Statics
{
	struct RTSAbilitySystemHelper_eventGetPlayerOwnerTags_Parms
	{
		const AActor* Actor;
		FGameplayTagContainer OutGameplayTags;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the gameplay tags of the player owner of the specified actor. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the gameplay tags of the player owner of the specified actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutGameplayTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetPlayerOwnerTags_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetPlayerOwnerTags_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetPlayerOwnerTags_Statics::NewProp_OutGameplayTags = { "OutGameplayTags", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetPlayerOwnerTags_Parms, OutGameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_GetPlayerOwnerTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetPlayerOwnerTags_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetPlayerOwnerTags_Statics::NewProp_OutGameplayTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetPlayerOwnerTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetPlayerOwnerTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "GetPlayerOwnerTags", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_GetPlayerOwnerTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetPlayerOwnerTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetPlayerOwnerTags_Statics::RTSAbilitySystemHelper_eventGetPlayerOwnerTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetPlayerOwnerTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_GetPlayerOwnerTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetPlayerOwnerTags_Statics::RTSAbilitySystemHelper_eventGetPlayerOwnerTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_GetPlayerOwnerTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_GetPlayerOwnerTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execGetPlayerOwnerTags)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_OutGameplayTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	URTSAbilitySystemHelper::GetPlayerOwnerTags(Z_Param_Actor,Z_Param_Out_OutGameplayTags);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function GetPlayerOwnerTags

// Begin Class URTSAbilitySystemHelper Function GetRelationshipTags
struct Z_Construct_UFunction_URTSAbilitySystemHelper_GetRelationshipTags_Statics
{
	struct RTSAbilitySystemHelper_eventGetRelationshipTags_Parms
	{
		const AActor* Actor;
		const AActor* Other;
		FGameplayTagContainer ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Gets the tags describing the relationship of the first actor to the other (friendly, hostile, neutral, same\n     * player, visibility.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the tags describing the relationship of the first actor to the other (friendly, hostile, neutral, same\nplayer, visibility." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Other_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Other;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetRelationshipTags_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetRelationshipTags_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetRelationshipTags_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetRelationshipTags_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Other_MetaData), NewProp_Other_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetRelationshipTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetRelationshipTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_GetRelationshipTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetRelationshipTags_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetRelationshipTags_Statics::NewProp_Other,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetRelationshipTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetRelationshipTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetRelationshipTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "GetRelationshipTags", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_GetRelationshipTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetRelationshipTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetRelationshipTags_Statics::RTSAbilitySystemHelper_eventGetRelationshipTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetRelationshipTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_GetRelationshipTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetRelationshipTags_Statics::RTSAbilitySystemHelper_eventGetRelationshipTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_GetRelationshipTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_GetRelationshipTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execGetRelationshipTags)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_OBJECT(AActor,Z_Param_Other);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTagContainer*)Z_Param__Result=URTSAbilitySystemHelper::GetRelationshipTags(Z_Param_Actor,Z_Param_Other);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function GetRelationshipTags

// Begin Class URTSAbilitySystemHelper Function GetRequiredLevelToIncreaseAbilityLevel
struct Z_Construct_UFunction_URTSAbilitySystemHelper_GetRequiredLevelToIncreaseAbilityLevel_Statics
{
	struct RTSAbilitySystemHelper_eventGetRequiredLevelToIncreaseAbilityLevel_Parms
	{
		UObject* WorldContextObject;
		AActor* Actor;
		TSubclassOf<UGameplayAbility> Ability;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the hero level required to increase the level of the specified ability. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the hero level required to increase the level of the specified ability." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetRequiredLevelToIncreaseAbilityLevel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetRequiredLevelToIncreaseAbilityLevel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetRequiredLevelToIncreaseAbilityLevel_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetRequiredLevelToIncreaseAbilityLevel_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetRequiredLevelToIncreaseAbilityLevel_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetRequiredLevelToIncreaseAbilityLevel_Parms, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetRequiredLevelToIncreaseAbilityLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetRequiredLevelToIncreaseAbilityLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_GetRequiredLevelToIncreaseAbilityLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetRequiredLevelToIncreaseAbilityLevel_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetRequiredLevelToIncreaseAbilityLevel_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetRequiredLevelToIncreaseAbilityLevel_Statics::NewProp_Ability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetRequiredLevelToIncreaseAbilityLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetRequiredLevelToIncreaseAbilityLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetRequiredLevelToIncreaseAbilityLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "GetRequiredLevelToIncreaseAbilityLevel", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_GetRequiredLevelToIncreaseAbilityLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetRequiredLevelToIncreaseAbilityLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetRequiredLevelToIncreaseAbilityLevel_Statics::RTSAbilitySystemHelper_eventGetRequiredLevelToIncreaseAbilityLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetRequiredLevelToIncreaseAbilityLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_GetRequiredLevelToIncreaseAbilityLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetRequiredLevelToIncreaseAbilityLevel_Statics::RTSAbilitySystemHelper_eventGetRequiredLevelToIncreaseAbilityLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_GetRequiredLevelToIncreaseAbilityLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_GetRequiredLevelToIncreaseAbilityLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execGetRequiredLevelToIncreaseAbilityLevel)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_OBJECT(UClass,Z_Param_Ability);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=URTSAbilitySystemHelper::GetRequiredLevelToIncreaseAbilityLevel(Z_Param_WorldContextObject,Z_Param_Actor,Z_Param_Ability);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function GetRequiredLevelToIncreaseAbilityLevel

// Begin Class URTSAbilitySystemHelper Function GetSourceAndTargetTags
struct Z_Construct_UFunction_URTSAbilitySystemHelper_GetSourceAndTargetTags_Statics
{
	struct RTSAbilitySystemHelper_eventGetSourceAndTargetTags_Parms
	{
		const AActor* SourceActor;
		const AActor* TargetActor;
		FGameplayTagContainer OutSourceTags;
		FGameplayTagContainer OutTargetTags;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Gets the gameplay tags of the specified actors, including relationship tags.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the gameplay tags of the specified actors, including relationship tags." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceActor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSourceTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTargetTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetSourceAndTargetTags_Statics::NewProp_SourceActor = { "SourceActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetSourceAndTargetTags_Parms, SourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceActor_MetaData), NewProp_SourceActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetSourceAndTargetTags_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetSourceAndTargetTags_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetSourceAndTargetTags_Statics::NewProp_OutSourceTags = { "OutSourceTags", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetSourceAndTargetTags_Parms, OutSourceTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetSourceAndTargetTags_Statics::NewProp_OutTargetTags = { "OutTargetTags", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetSourceAndTargetTags_Parms, OutTargetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_GetSourceAndTargetTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetSourceAndTargetTags_Statics::NewProp_SourceActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetSourceAndTargetTags_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetSourceAndTargetTags_Statics::NewProp_OutSourceTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetSourceAndTargetTags_Statics::NewProp_OutTargetTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetSourceAndTargetTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetSourceAndTargetTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "GetSourceAndTargetTags", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_GetSourceAndTargetTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetSourceAndTargetTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetSourceAndTargetTags_Statics::RTSAbilitySystemHelper_eventGetSourceAndTargetTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetSourceAndTargetTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_GetSourceAndTargetTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetSourceAndTargetTags_Statics::RTSAbilitySystemHelper_eventGetSourceAndTargetTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_GetSourceAndTargetTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_GetSourceAndTargetTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execGetSourceAndTargetTags)
{
	P_GET_OBJECT(AActor,Z_Param_SourceActor);
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_OutSourceTags);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_OutTargetTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	URTSAbilitySystemHelper::GetSourceAndTargetTags(Z_Param_SourceActor,Z_Param_TargetActor,Z_Param_Out_OutSourceTags,Z_Param_Out_OutTargetTags);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function GetSourceAndTargetTags

// Begin Class URTSAbilitySystemHelper Function GetTags
struct Z_Construct_UFunction_URTSAbilitySystemHelper_GetTags_Statics
{
	struct RTSAbilitySystemHelper_eventGetTags_Parms
	{
		const AActor* Actor;
		FGameplayTagContainer OutGameplayTags;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the gameplay tags of the specified actor. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the gameplay tags of the specified actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutGameplayTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetTags_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetTags_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetTags_Statics::NewProp_OutGameplayTags = { "OutGameplayTags", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetTags_Parms, OutGameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_GetTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetTags_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetTags_Statics::NewProp_OutGameplayTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "GetTags", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_GetTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetTags_Statics::RTSAbilitySystemHelper_eventGetTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_GetTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetTags_Statics::RTSAbilitySystemHelper_eventGetTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_GetTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_GetTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execGetTags)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_OutGameplayTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	URTSAbilitySystemHelper::GetTags(Z_Param_Actor,Z_Param_Out_OutGameplayTags);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function GetTags

// Begin Class URTSAbilitySystemHelper Function GetValueAtLevel
struct Z_Construct_UFunction_URTSAbilitySystemHelper_GetValueAtLevel_Statics
{
	struct RTSAbilitySystemHelper_eventGetValueAtLevel_Parms
	{
		FScalableFloat ScalableFloat;
		float Level;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Curve Tables" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Gets the value at the specified level of the specified scalable float or the constant value if no curve table\n     * row has been specified.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the value at the specified level of the specified scalable float or the constant value if no curve table\nrow has been specified." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScalableFloat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScalableFloat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Level;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetValueAtLevel_Statics::NewProp_ScalableFloat = { "ScalableFloat", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetValueAtLevel_Parms, ScalableFloat), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScalableFloat_MetaData), NewProp_ScalableFloat_MetaData) }; // 703790095
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetValueAtLevel_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetValueAtLevel_Parms, Level), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetValueAtLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventGetValueAtLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_GetValueAtLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetValueAtLevel_Statics::NewProp_ScalableFloat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetValueAtLevel_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_GetValueAtLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetValueAtLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_GetValueAtLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "GetValueAtLevel", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_GetValueAtLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetValueAtLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetValueAtLevel_Statics::RTSAbilitySystemHelper_eventGetValueAtLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_GetValueAtLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_GetValueAtLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_GetValueAtLevel_Statics::RTSAbilitySystemHelper_eventGetValueAtLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_GetValueAtLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_GetValueAtLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execGetValueAtLevel)
{
	P_GET_STRUCT_REF(FScalableFloat,Z_Param_Out_ScalableFloat);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=URTSAbilitySystemHelper::GetValueAtLevel(Z_Param_Out_ScalableFloat,Z_Param_Level);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function GetValueAtLevel

// Begin Class URTSAbilitySystemHelper Function HasActorAllMatchingGameplayTags
struct Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorAllMatchingGameplayTags_Statics
{
	struct RTSAbilitySystemHelper_eventHasActorAllMatchingGameplayTags_Parms
	{
		const AActor* Actor;
		FGameplayTagContainer TagContainer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the specified actor has all specified tags. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the specified actor has all specified tags." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorAllMatchingGameplayTags_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventHasActorAllMatchingGameplayTags_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorAllMatchingGameplayTags_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventHasActorAllMatchingGameplayTags_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagContainer_MetaData), NewProp_TagContainer_MetaData) }; // 3352185621
void Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorAllMatchingGameplayTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTSAbilitySystemHelper_eventHasActorAllMatchingGameplayTags_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorAllMatchingGameplayTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTSAbilitySystemHelper_eventHasActorAllMatchingGameplayTags_Parms), &Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorAllMatchingGameplayTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorAllMatchingGameplayTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorAllMatchingGameplayTags_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorAllMatchingGameplayTags_Statics::NewProp_TagContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorAllMatchingGameplayTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorAllMatchingGameplayTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorAllMatchingGameplayTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "HasActorAllMatchingGameplayTags", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorAllMatchingGameplayTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorAllMatchingGameplayTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorAllMatchingGameplayTags_Statics::RTSAbilitySystemHelper_eventHasActorAllMatchingGameplayTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorAllMatchingGameplayTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorAllMatchingGameplayTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorAllMatchingGameplayTags_Statics::RTSAbilitySystemHelper_eventHasActorAllMatchingGameplayTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorAllMatchingGameplayTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorAllMatchingGameplayTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execHasActorAllMatchingGameplayTags)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URTSAbilitySystemHelper::HasActorAllMatchingGameplayTags(Z_Param_Actor,Z_Param_Out_TagContainer);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function HasActorAllMatchingGameplayTags

// Begin Class URTSAbilitySystemHelper Function HasActorAnyMatchingGameplayTags
struct Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorAnyMatchingGameplayTags_Statics
{
	struct RTSAbilitySystemHelper_eventHasActorAnyMatchingGameplayTags_Parms
	{
		const AActor* Actor;
		FGameplayTagContainer TagContainer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the specified actor has any of the specified tags. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the specified actor has any of the specified tags." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorAnyMatchingGameplayTags_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventHasActorAnyMatchingGameplayTags_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorAnyMatchingGameplayTags_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventHasActorAnyMatchingGameplayTags_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagContainer_MetaData), NewProp_TagContainer_MetaData) }; // 3352185621
void Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorAnyMatchingGameplayTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTSAbilitySystemHelper_eventHasActorAnyMatchingGameplayTags_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorAnyMatchingGameplayTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTSAbilitySystemHelper_eventHasActorAnyMatchingGameplayTags_Parms), &Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorAnyMatchingGameplayTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorAnyMatchingGameplayTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorAnyMatchingGameplayTags_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorAnyMatchingGameplayTags_Statics::NewProp_TagContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorAnyMatchingGameplayTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorAnyMatchingGameplayTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorAnyMatchingGameplayTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "HasActorAnyMatchingGameplayTags", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorAnyMatchingGameplayTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorAnyMatchingGameplayTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorAnyMatchingGameplayTags_Statics::RTSAbilitySystemHelper_eventHasActorAnyMatchingGameplayTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorAnyMatchingGameplayTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorAnyMatchingGameplayTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorAnyMatchingGameplayTags_Statics::RTSAbilitySystemHelper_eventHasActorAnyMatchingGameplayTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorAnyMatchingGameplayTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorAnyMatchingGameplayTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execHasActorAnyMatchingGameplayTags)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URTSAbilitySystemHelper::HasActorAnyMatchingGameplayTags(Z_Param_Actor,Z_Param_Out_TagContainer);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function HasActorAnyMatchingGameplayTags

// Begin Class URTSAbilitySystemHelper Function HasActorClassMatchingGameplayTag
struct Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorClassMatchingGameplayTag_Statics
{
	struct RTSAbilitySystemHelper_eventHasActorClassMatchingGameplayTag_Parms
	{
		TSubclassOf<AActor> ActorClass;
		FGameplayTag TagToCheck;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the specified actor has the specified tag. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the specified actor has the specified tag." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagToCheck;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorClassMatchingGameplayTag_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventHasActorClassMatchingGameplayTag_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorClassMatchingGameplayTag_Statics::NewProp_TagToCheck = { "TagToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventHasActorClassMatchingGameplayTag_Parms, TagToCheck), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
void Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorClassMatchingGameplayTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTSAbilitySystemHelper_eventHasActorClassMatchingGameplayTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorClassMatchingGameplayTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTSAbilitySystemHelper_eventHasActorClassMatchingGameplayTag_Parms), &Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorClassMatchingGameplayTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorClassMatchingGameplayTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorClassMatchingGameplayTag_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorClassMatchingGameplayTag_Statics::NewProp_TagToCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorClassMatchingGameplayTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorClassMatchingGameplayTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorClassMatchingGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "HasActorClassMatchingGameplayTag", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorClassMatchingGameplayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorClassMatchingGameplayTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorClassMatchingGameplayTag_Statics::RTSAbilitySystemHelper_eventHasActorClassMatchingGameplayTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorClassMatchingGameplayTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorClassMatchingGameplayTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorClassMatchingGameplayTag_Statics::RTSAbilitySystemHelper_eventHasActorClassMatchingGameplayTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorClassMatchingGameplayTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorClassMatchingGameplayTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execHasActorClassMatchingGameplayTag)
{
	P_GET_OBJECT(UClass,Z_Param_ActorClass);
	P_GET_STRUCT(FGameplayTag,Z_Param_TagToCheck);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URTSAbilitySystemHelper::HasActorClassMatchingGameplayTag(Z_Param_ActorClass,Z_Param_TagToCheck);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function HasActorClassMatchingGameplayTag

// Begin Class URTSAbilitySystemHelper Function HasActorMatchingGameplayTag
struct Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorMatchingGameplayTag_Statics
{
	struct RTSAbilitySystemHelper_eventHasActorMatchingGameplayTag_Parms
	{
		const AActor* Actor;
		FGameplayTag TagToCheck;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the specified actor has the specified tag. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the specified actor has the specified tag." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagToCheck;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorMatchingGameplayTag_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventHasActorMatchingGameplayTag_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorMatchingGameplayTag_Statics::NewProp_TagToCheck = { "TagToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventHasActorMatchingGameplayTag_Parms, TagToCheck), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
void Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorMatchingGameplayTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTSAbilitySystemHelper_eventHasActorMatchingGameplayTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorMatchingGameplayTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTSAbilitySystemHelper_eventHasActorMatchingGameplayTag_Parms), &Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorMatchingGameplayTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorMatchingGameplayTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorMatchingGameplayTag_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorMatchingGameplayTag_Statics::NewProp_TagToCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorMatchingGameplayTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorMatchingGameplayTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorMatchingGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "HasActorMatchingGameplayTag", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorMatchingGameplayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorMatchingGameplayTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorMatchingGameplayTag_Statics::RTSAbilitySystemHelper_eventHasActorMatchingGameplayTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorMatchingGameplayTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorMatchingGameplayTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorMatchingGameplayTag_Statics::RTSAbilitySystemHelper_eventHasActorMatchingGameplayTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorMatchingGameplayTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorMatchingGameplayTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execHasActorMatchingGameplayTag)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT(FGameplayTag,Z_Param_TagToCheck);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URTSAbilitySystemHelper::HasActorMatchingGameplayTag(Z_Param_Actor,Z_Param_TagToCheck);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function HasActorMatchingGameplayTag

// Begin Class URTSAbilitySystemHelper Function HasAllMatchingGameplayTags
struct Z_Construct_UFunction_URTSAbilitySystemHelper_HasAllMatchingGameplayTags_Statics
{
	struct RTSAbilitySystemHelper_eventHasAllMatchingGameplayTags_Parms
	{
		const UAbilitySystemComponent* AbilitySystem;
		FGameplayTagContainer TagContainer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the specified ability system has all specified tags. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the specified ability system has all specified tags." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystem_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystem;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_HasAllMatchingGameplayTags_Statics::NewProp_AbilitySystem = { "AbilitySystem", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventHasAllMatchingGameplayTags_Parms, AbilitySystem), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystem_MetaData), NewProp_AbilitySystem_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_HasAllMatchingGameplayTags_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventHasAllMatchingGameplayTags_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagContainer_MetaData), NewProp_TagContainer_MetaData) }; // 3352185621
void Z_Construct_UFunction_URTSAbilitySystemHelper_HasAllMatchingGameplayTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTSAbilitySystemHelper_eventHasAllMatchingGameplayTags_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_HasAllMatchingGameplayTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTSAbilitySystemHelper_eventHasAllMatchingGameplayTags_Parms), &Z_Construct_UFunction_URTSAbilitySystemHelper_HasAllMatchingGameplayTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_HasAllMatchingGameplayTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_HasAllMatchingGameplayTags_Statics::NewProp_AbilitySystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_HasAllMatchingGameplayTags_Statics::NewProp_TagContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_HasAllMatchingGameplayTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_HasAllMatchingGameplayTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_HasAllMatchingGameplayTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "HasAllMatchingGameplayTags", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_HasAllMatchingGameplayTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_HasAllMatchingGameplayTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_HasAllMatchingGameplayTags_Statics::RTSAbilitySystemHelper_eventHasAllMatchingGameplayTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_HasAllMatchingGameplayTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_HasAllMatchingGameplayTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_HasAllMatchingGameplayTags_Statics::RTSAbilitySystemHelper_eventHasAllMatchingGameplayTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_HasAllMatchingGameplayTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_HasAllMatchingGameplayTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execHasAllMatchingGameplayTags)
{
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystem);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URTSAbilitySystemHelper::HasAllMatchingGameplayTags(Z_Param_AbilitySystem,Z_Param_Out_TagContainer);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function HasAllMatchingGameplayTags

// Begin Class URTSAbilitySystemHelper Function HasAnyMatchingGameplayTags
struct Z_Construct_UFunction_URTSAbilitySystemHelper_HasAnyMatchingGameplayTags_Statics
{
	struct RTSAbilitySystemHelper_eventHasAnyMatchingGameplayTags_Parms
	{
		const UAbilitySystemComponent* AbilitySystem;
		FGameplayTagContainer TagContainer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the specified ability system has any of the specified tags. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the specified ability system has any of the specified tags." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystem_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystem;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_HasAnyMatchingGameplayTags_Statics::NewProp_AbilitySystem = { "AbilitySystem", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventHasAnyMatchingGameplayTags_Parms, AbilitySystem), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystem_MetaData), NewProp_AbilitySystem_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_HasAnyMatchingGameplayTags_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventHasAnyMatchingGameplayTags_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagContainer_MetaData), NewProp_TagContainer_MetaData) }; // 3352185621
void Z_Construct_UFunction_URTSAbilitySystemHelper_HasAnyMatchingGameplayTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTSAbilitySystemHelper_eventHasAnyMatchingGameplayTags_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_HasAnyMatchingGameplayTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTSAbilitySystemHelper_eventHasAnyMatchingGameplayTags_Parms), &Z_Construct_UFunction_URTSAbilitySystemHelper_HasAnyMatchingGameplayTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_HasAnyMatchingGameplayTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_HasAnyMatchingGameplayTags_Statics::NewProp_AbilitySystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_HasAnyMatchingGameplayTags_Statics::NewProp_TagContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_HasAnyMatchingGameplayTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_HasAnyMatchingGameplayTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_HasAnyMatchingGameplayTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "HasAnyMatchingGameplayTags", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_HasAnyMatchingGameplayTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_HasAnyMatchingGameplayTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_HasAnyMatchingGameplayTags_Statics::RTSAbilitySystemHelper_eventHasAnyMatchingGameplayTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_HasAnyMatchingGameplayTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_HasAnyMatchingGameplayTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_HasAnyMatchingGameplayTags_Statics::RTSAbilitySystemHelper_eventHasAnyMatchingGameplayTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_HasAnyMatchingGameplayTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_HasAnyMatchingGameplayTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execHasAnyMatchingGameplayTags)
{
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystem);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URTSAbilitySystemHelper::HasAnyMatchingGameplayTags(Z_Param_AbilitySystem,Z_Param_Out_TagContainer);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function HasAnyMatchingGameplayTags

// Begin Class URTSAbilitySystemHelper Function HasMatchingGameplayTag
struct Z_Construct_UFunction_URTSAbilitySystemHelper_HasMatchingGameplayTag_Statics
{
	struct RTSAbilitySystemHelper_eventHasMatchingGameplayTag_Parms
	{
		const UAbilitySystemComponent* AbilitySystem;
		FGameplayTag TagToCheck;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the specified ability system has the specified tag. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the specified ability system has the specified tag." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystem_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystem;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagToCheck;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_HasMatchingGameplayTag_Statics::NewProp_AbilitySystem = { "AbilitySystem", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventHasMatchingGameplayTag_Parms, AbilitySystem), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystem_MetaData), NewProp_AbilitySystem_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_HasMatchingGameplayTag_Statics::NewProp_TagToCheck = { "TagToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventHasMatchingGameplayTag_Parms, TagToCheck), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
void Z_Construct_UFunction_URTSAbilitySystemHelper_HasMatchingGameplayTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTSAbilitySystemHelper_eventHasMatchingGameplayTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_HasMatchingGameplayTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTSAbilitySystemHelper_eventHasMatchingGameplayTag_Parms), &Z_Construct_UFunction_URTSAbilitySystemHelper_HasMatchingGameplayTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_HasMatchingGameplayTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_HasMatchingGameplayTag_Statics::NewProp_AbilitySystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_HasMatchingGameplayTag_Statics::NewProp_TagToCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_HasMatchingGameplayTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_HasMatchingGameplayTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_HasMatchingGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "HasMatchingGameplayTag", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_HasMatchingGameplayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_HasMatchingGameplayTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_HasMatchingGameplayTag_Statics::RTSAbilitySystemHelper_eventHasMatchingGameplayTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_HasMatchingGameplayTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_HasMatchingGameplayTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_HasMatchingGameplayTag_Statics::RTSAbilitySystemHelper_eventHasMatchingGameplayTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_HasMatchingGameplayTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_HasMatchingGameplayTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execHasMatchingGameplayTag)
{
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystem);
	P_GET_STRUCT(FGameplayTag,Z_Param_TagToCheck);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URTSAbilitySystemHelper::HasMatchingGameplayTag(Z_Param_AbilitySystem,Z_Param_TagToCheck);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function HasMatchingGameplayTag

// Begin Class URTSAbilitySystemHelper Function IsAbilityActive
struct Z_Construct_UFunction_URTSAbilitySystemHelper_IsAbilityActive_Statics
{
	struct RTSAbilitySystemHelper_eventIsAbilityActive_Parms
	{
		UAbilitySystemComponent* AbilitySystem;
		TSubclassOf<UGameplayAbility> Ability;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the specified ability is currently active. Returns always false for clients.  */" },
#endif
		{ "DisplayName", "IsAbilityActive (Server only)" },
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the specified ability is currently active. Returns always false for clients." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystem;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_IsAbilityActive_Statics::NewProp_AbilitySystem = { "AbilitySystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventIsAbilityActive_Parms, AbilitySystem), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystem_MetaData), NewProp_AbilitySystem_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_IsAbilityActive_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventIsAbilityActive_Parms, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URTSAbilitySystemHelper_IsAbilityActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTSAbilitySystemHelper_eventIsAbilityActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_IsAbilityActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTSAbilitySystemHelper_eventIsAbilityActive_Parms), &Z_Construct_UFunction_URTSAbilitySystemHelper_IsAbilityActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_IsAbilityActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_IsAbilityActive_Statics::NewProp_AbilitySystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_IsAbilityActive_Statics::NewProp_Ability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_IsAbilityActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_IsAbilityActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_IsAbilityActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "IsAbilityActive", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_IsAbilityActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_IsAbilityActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_IsAbilityActive_Statics::RTSAbilitySystemHelper_eventIsAbilityActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_IsAbilityActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_IsAbilityActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_IsAbilityActive_Statics::RTSAbilitySystemHelper_eventIsAbilityActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_IsAbilityActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_IsAbilityActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execIsAbilityActive)
{
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystem);
	P_GET_OBJECT(UClass,Z_Param_Ability);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URTSAbilitySystemHelper::IsAbilityActive(Z_Param_AbilitySystem,Z_Param_Ability);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function IsAbilityActive

// Begin Class URTSAbilitySystemHelper Function IsHumanPlayerAutoAbility
struct Z_Construct_UFunction_URTSAbilitySystemHelper_IsHumanPlayerAutoAbility_Statics
{
	struct RTSAbilitySystemHelper_eventIsHumanPlayerAutoAbility_Parms
	{
		TSubclassOf<UGameplayAbility> Ability;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the ability is an auto ability for the human player. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the ability is an auto ability for the human player." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_IsHumanPlayerAutoAbility_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventIsHumanPlayerAutoAbility_Parms, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URTSAbilitySystemHelper_IsHumanPlayerAutoAbility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTSAbilitySystemHelper_eventIsHumanPlayerAutoAbility_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_IsHumanPlayerAutoAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTSAbilitySystemHelper_eventIsHumanPlayerAutoAbility_Parms), &Z_Construct_UFunction_URTSAbilitySystemHelper_IsHumanPlayerAutoAbility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_IsHumanPlayerAutoAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_IsHumanPlayerAutoAbility_Statics::NewProp_Ability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_IsHumanPlayerAutoAbility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_IsHumanPlayerAutoAbility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_IsHumanPlayerAutoAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "IsHumanPlayerAutoAbility", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_IsHumanPlayerAutoAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_IsHumanPlayerAutoAbility_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_IsHumanPlayerAutoAbility_Statics::RTSAbilitySystemHelper_eventIsHumanPlayerAutoAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_IsHumanPlayerAutoAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_IsHumanPlayerAutoAbility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_IsHumanPlayerAutoAbility_Statics::RTSAbilitySystemHelper_eventIsHumanPlayerAutoAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_IsHumanPlayerAutoAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_IsHumanPlayerAutoAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execIsHumanPlayerAutoAbility)
{
	P_GET_OBJECT(UClass,Z_Param_Ability);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URTSAbilitySystemHelper::IsHumanPlayerAutoAbility(Z_Param_Ability);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function IsHumanPlayerAutoAbility

// Begin Class URTSAbilitySystemHelper Function IsPassiveAbilityUnlocked
struct Z_Construct_UFunction_URTSAbilitySystemHelper_IsPassiveAbilityUnlocked_Statics
{
	struct RTSAbilitySystemHelper_eventIsPassiveAbilityUnlocked_Parms
	{
		const UAbilitySystemComponent* AbilitySystem;
		TSubclassOf<UGameplayAbility> Ability;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the specified passive ability is unlocked and active.  */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the specified passive ability is unlocked and active." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystem_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystem;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_IsPassiveAbilityUnlocked_Statics::NewProp_AbilitySystem = { "AbilitySystem", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventIsPassiveAbilityUnlocked_Parms, AbilitySystem), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystem_MetaData), NewProp_AbilitySystem_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_IsPassiveAbilityUnlocked_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventIsPassiveAbilityUnlocked_Parms, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URTSAbilitySystemHelper_IsPassiveAbilityUnlocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTSAbilitySystemHelper_eventIsPassiveAbilityUnlocked_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_IsPassiveAbilityUnlocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTSAbilitySystemHelper_eventIsPassiveAbilityUnlocked_Parms), &Z_Construct_UFunction_URTSAbilitySystemHelper_IsPassiveAbilityUnlocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_IsPassiveAbilityUnlocked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_IsPassiveAbilityUnlocked_Statics::NewProp_AbilitySystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_IsPassiveAbilityUnlocked_Statics::NewProp_Ability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_IsPassiveAbilityUnlocked_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_IsPassiveAbilityUnlocked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_IsPassiveAbilityUnlocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "IsPassiveAbilityUnlocked", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_IsPassiveAbilityUnlocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_IsPassiveAbilityUnlocked_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_IsPassiveAbilityUnlocked_Statics::RTSAbilitySystemHelper_eventIsPassiveAbilityUnlocked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_IsPassiveAbilityUnlocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_IsPassiveAbilityUnlocked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_IsPassiveAbilityUnlocked_Statics::RTSAbilitySystemHelper_eventIsPassiveAbilityUnlocked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_IsPassiveAbilityUnlocked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_IsPassiveAbilityUnlocked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execIsPassiveAbilityUnlocked)
{
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystem);
	P_GET_OBJECT(UClass,Z_Param_Ability);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URTSAbilitySystemHelper::IsPassiveAbilityUnlocked(Z_Param_AbilitySystem,Z_Param_Ability);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function IsPassiveAbilityUnlocked

// Begin Class URTSAbilitySystemHelper Function IsVisibleForActor
struct Z_Construct_UFunction_URTSAbilitySystemHelper_IsVisibleForActor_Statics
{
	struct RTSAbilitySystemHelper_eventIsVisibleForActor_Parms
	{
		const AActor* Actor;
		const AActor* Other;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether 'Other' is visible for 'Actor'. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether 'Other' is visible for 'Actor'." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Other_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Other;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_IsVisibleForActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventIsVisibleForActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_IsVisibleForActor_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventIsVisibleForActor_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Other_MetaData), NewProp_Other_MetaData) };
void Z_Construct_UFunction_URTSAbilitySystemHelper_IsVisibleForActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTSAbilitySystemHelper_eventIsVisibleForActor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_IsVisibleForActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTSAbilitySystemHelper_eventIsVisibleForActor_Parms), &Z_Construct_UFunction_URTSAbilitySystemHelper_IsVisibleForActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_IsVisibleForActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_IsVisibleForActor_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_IsVisibleForActor_Statics::NewProp_Other,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_IsVisibleForActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_IsVisibleForActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_IsVisibleForActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "IsVisibleForActor", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_IsVisibleForActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_IsVisibleForActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_IsVisibleForActor_Statics::RTSAbilitySystemHelper_eventIsVisibleForActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_IsVisibleForActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_IsVisibleForActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_IsVisibleForActor_Statics::RTSAbilitySystemHelper_eventIsVisibleForActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_IsVisibleForActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_IsVisibleForActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execIsVisibleForActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_OBJECT(AActor,Z_Param_Other);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URTSAbilitySystemHelper::IsVisibleForActor(Z_Param_Actor,Z_Param_Other);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function IsVisibleForActor

// Begin Class URTSAbilitySystemHelper Function SendGameplayEvent
struct Z_Construct_UFunction_URTSAbilitySystemHelper_SendGameplayEvent_Statics
{
	struct RTSAbilitySystemHelper_eventSendGameplayEvent_Parms
	{
		AActor* Actor;
		FGameplayEventData Payload;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Sends a gameplay event to the specified actor. Returns the number of successful ability activations triggered by\n     * the event.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sends a gameplay event to the specified actor. Returns the number of successful ability activations triggered by\nthe event." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_SendGameplayEvent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventSendGameplayEvent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_SendGameplayEvent_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventSendGameplayEvent_Parms, Payload), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(0, nullptr) }; // 1231635826
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_SendGameplayEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventSendGameplayEvent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_SendGameplayEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_SendGameplayEvent_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_SendGameplayEvent_Statics::NewProp_Payload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_SendGameplayEvent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_SendGameplayEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_SendGameplayEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "SendGameplayEvent", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_SendGameplayEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_SendGameplayEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_SendGameplayEvent_Statics::RTSAbilitySystemHelper_eventSendGameplayEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_SendGameplayEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_SendGameplayEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_SendGameplayEvent_Statics::RTSAbilitySystemHelper_eventSendGameplayEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_SendGameplayEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_SendGameplayEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execSendGameplayEvent)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT(FGameplayEventData,Z_Param_Payload);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=URTSAbilitySystemHelper::SendGameplayEvent(Z_Param_Actor,Z_Param_Payload);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function SendGameplayEvent

// Begin Class URTSAbilitySystemHelper Function ShouldShowAbilityAsOrderInUI
struct Z_Construct_UFunction_URTSAbilitySystemHelper_ShouldShowAbilityAsOrderInUI_Statics
{
	struct RTSAbilitySystemHelper_eventShouldShowAbilityAsOrderInUI_Parms
	{
		TSubclassOf<UGameplayAbility> Ability;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to show abilities of the specified class as default orders in the UI, instead of as abilities. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to show abilities of the specified class as default orders in the UI, instead of as abilities." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_ShouldShowAbilityAsOrderInUI_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventShouldShowAbilityAsOrderInUI_Parms, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URTSAbilitySystemHelper_ShouldShowAbilityAsOrderInUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTSAbilitySystemHelper_eventShouldShowAbilityAsOrderInUI_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_ShouldShowAbilityAsOrderInUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTSAbilitySystemHelper_eventShouldShowAbilityAsOrderInUI_Parms), &Z_Construct_UFunction_URTSAbilitySystemHelper_ShouldShowAbilityAsOrderInUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_ShouldShowAbilityAsOrderInUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_ShouldShowAbilityAsOrderInUI_Statics::NewProp_Ability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_ShouldShowAbilityAsOrderInUI_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_ShouldShowAbilityAsOrderInUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_ShouldShowAbilityAsOrderInUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "ShouldShowAbilityAsOrderInUI", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_ShouldShowAbilityAsOrderInUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_ShouldShowAbilityAsOrderInUI_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_ShouldShowAbilityAsOrderInUI_Statics::RTSAbilitySystemHelper_eventShouldShowAbilityAsOrderInUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_ShouldShowAbilityAsOrderInUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_ShouldShowAbilityAsOrderInUI_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_ShouldShowAbilityAsOrderInUI_Statics::RTSAbilitySystemHelper_eventShouldShowAbilityAsOrderInUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_ShouldShowAbilityAsOrderInUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_ShouldShowAbilityAsOrderInUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execShouldShowAbilityAsOrderInUI)
{
	P_GET_OBJECT(UClass,Z_Param_Ability);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URTSAbilitySystemHelper::ShouldShowAbilityAsOrderInUI(Z_Param_Ability);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function ShouldShowAbilityAsOrderInUI

// Begin Class URTSAbilitySystemHelper Function UnionGameplayTagContainers
struct Z_Construct_UFunction_URTSAbilitySystemHelper_UnionGameplayTagContainers_Statics
{
	struct RTSAbilitySystemHelper_eventUnionGameplayTagContainers_Parms
	{
		FGameplayTagContainer FirstTagContainer;
		FGameplayTagContainer SecondTagContainer;
		FGameplayTagContainer ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Ability|Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Creates a gameplay tag container that has all tags that are present in the specified container.*/" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a gameplay tag container that has all tags that are present in the specified container." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstTagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondTagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FirstTagContainer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SecondTagContainer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_UnionGameplayTagContainers_Statics::NewProp_FirstTagContainer = { "FirstTagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventUnionGameplayTagContainers_Parms, FirstTagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstTagContainer_MetaData), NewProp_FirstTagContainer_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_UnionGameplayTagContainers_Statics::NewProp_SecondTagContainer = { "SecondTagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventUnionGameplayTagContainers_Parms, SecondTagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondTagContainer_MetaData), NewProp_SecondTagContainer_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAbilitySystemHelper_UnionGameplayTagContainers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAbilitySystemHelper_eventUnionGameplayTagContainers_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAbilitySystemHelper_UnionGameplayTagContainers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_UnionGameplayTagContainers_Statics::NewProp_FirstTagContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_UnionGameplayTagContainers_Statics::NewProp_SecondTagContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAbilitySystemHelper_UnionGameplayTagContainers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_UnionGameplayTagContainers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAbilitySystemHelper_UnionGameplayTagContainers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAbilitySystemHelper, nullptr, "UnionGameplayTagContainers", nullptr, nullptr, Z_Construct_UFunction_URTSAbilitySystemHelper_UnionGameplayTagContainers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_UnionGameplayTagContainers_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_UnionGameplayTagContainers_Statics::RTSAbilitySystemHelper_eventUnionGameplayTagContainers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAbilitySystemHelper_UnionGameplayTagContainers_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAbilitySystemHelper_UnionGameplayTagContainers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAbilitySystemHelper_UnionGameplayTagContainers_Statics::RTSAbilitySystemHelper_eventUnionGameplayTagContainers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAbilitySystemHelper_UnionGameplayTagContainers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAbilitySystemHelper_UnionGameplayTagContainers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAbilitySystemHelper::execUnionGameplayTagContainers)
{
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_FirstTagContainer);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_SecondTagContainer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTagContainer*)Z_Param__Result=URTSAbilitySystemHelper::UnionGameplayTagContainers(Z_Param_Out_FirstTagContainer,Z_Param_Out_SecondTagContainer);
	P_NATIVE_END;
}
// End Class URTSAbilitySystemHelper Function UnionGameplayTagContainers

// Begin Class URTSAbilitySystemHelper
void URTSAbilitySystemHelper::StaticRegisterNativesURTSAbilitySystemHelper()
{
	UClass* Class = URTSAbilitySystemHelper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CancelAbility", &URTSAbilitySystemHelper::execCancelAbility },
		{ "ChangeTag", &URTSAbilitySystemHelper::execChangeTag },
		{ "CreateGameplayEventData", &URTSAbilitySystemHelper::execCreateGameplayEventData },
		{ "CreateGameplayEventDataWithEventTag", &URTSAbilitySystemHelper::execCreateGameplayEventDataWithEventTag },
		{ "DoesSatisfyTagRequirements", &URTSAbilitySystemHelper::execDoesSatisfyTagRequirements },
		{ "DoesSatisfyTagRequirementsWithResult", &URTSAbilitySystemHelper::execDoesSatisfyTagRequirementsWithResult },
		{ "ExecuteGameplayCueWithParamsUnattached", &URTSAbilitySystemHelper::execExecuteGameplayCueWithParamsUnattached },
		{ "FilterForTagsWithParentTag", &URTSAbilitySystemHelper::execFilterForTagsWithParentTag },
		{ "FindDefaultComponentByClass", &URTSAbilitySystemHelper::execFindDefaultComponentByClass },
		{ "GetAbilities", &URTSAbilitySystemHelper::execGetAbilities },
		{ "GetAbilityDescription", &URTSAbilitySystemHelper::execGetAbilityDescription },
		{ "GetAbilityIcon", &URTSAbilitySystemHelper::execGetAbilityIcon },
		{ "GetAbilityLevel", &URTSAbilitySystemHelper::execGetAbilityLevel },
		{ "GetAbilityMaxLevel", &URTSAbilitySystemHelper::execGetAbilityMaxLevel },
		{ "GetAbilityName", &URTSAbilitySystemHelper::execGetAbilityName },
		{ "GetAbilityProcessPolicy", &URTSAbilitySystemHelper::execGetAbilityProcessPolicy },
		{ "GetAbilityRange", &URTSAbilitySystemHelper::execGetAbilityRange },
		{ "GetAbilitySourceTagRequirements", &URTSAbilitySystemHelper::execGetAbilitySourceTagRequirements },
		{ "GetAbilityTargetTagRequirements", &URTSAbilitySystemHelper::execGetAbilityTargetTagRequirements },
		{ "GetAbilityTargetType", &URTSAbilitySystemHelper::execGetAbilityTargetType },
		{ "GetActiveEffectDuration", &URTSAbilitySystemHelper::execGetActiveEffectDuration },
		{ "GetActiveEffectTimeRemaining", &URTSAbilitySystemHelper::execGetActiveEffectTimeRemaining },
		{ "GetActiveEffectTimeRemainingAndDuration", &URTSAbilitySystemHelper::execGetActiveEffectTimeRemainingAndDuration },
		{ "GetActiveGameplayEffects", &URTSAbilitySystemHelper::execGetActiveGameplayEffects },
		{ "GetActiveGameplayEffectSpecs", &URTSAbilitySystemHelper::execGetActiveGameplayEffectSpecs },
		{ "GetBasicAttackAbilities", &URTSAbilitySystemHelper::execGetBasicAttackAbilities },
		{ "GetCooldownEffect", &URTSAbilitySystemHelper::execGetCooldownEffect },
		{ "GetCooldownTimeDuration", &URTSAbilitySystemHelper::execGetCooldownTimeDuration },
		{ "GetCooldownTimeRemaining", &URTSAbilitySystemHelper::execGetCooldownTimeRemaining },
		{ "GetCooldownTimeRemainingAndDuration", &URTSAbilitySystemHelper::execGetCooldownTimeRemainingAndDuration },
		{ "GetEffectDescription", &URTSAbilitySystemHelper::execGetEffectDescription },
		{ "GetEffectIcon", &URTSAbilitySystemHelper::execGetEffectIcon },
		{ "GetEffectName", &URTSAbilitySystemHelper::execGetEffectName },
		{ "GetGameplayAttributes", &URTSAbilitySystemHelper::execGetGameplayAttributes },
		{ "GetGameplayEffectSpecClass", &URTSAbilitySystemHelper::execGetGameplayEffectSpecClass },
		{ "GetGameplayEffectSpecStackCount", &URTSAbilitySystemHelper::execGetGameplayEffectSpecStackCount },
		{ "GetGameplayTagCount", &URTSAbilitySystemHelper::execGetGameplayTagCount },
		{ "GetGameplayTags", &URTSAbilitySystemHelper::execGetGameplayTags },
		{ "GetGrantedAbilitiesFromGameplayEffect", &URTSAbilitySystemHelper::execGetGrantedAbilitiesFromGameplayEffect },
		{ "GetItemAbilityIndex", &URTSAbilitySystemHelper::execGetItemAbilityIndex },
		{ "GetLastTagName", &URTSAbilitySystemHelper::execGetLastTagName },
		{ "GetPlayerOwnerTags", &URTSAbilitySystemHelper::execGetPlayerOwnerTags },
		{ "GetRelationshipTags", &URTSAbilitySystemHelper::execGetRelationshipTags },
		{ "GetRequiredLevelToIncreaseAbilityLevel", &URTSAbilitySystemHelper::execGetRequiredLevelToIncreaseAbilityLevel },
		{ "GetSourceAndTargetTags", &URTSAbilitySystemHelper::execGetSourceAndTargetTags },
		{ "GetTags", &URTSAbilitySystemHelper::execGetTags },
		{ "GetValueAtLevel", &URTSAbilitySystemHelper::execGetValueAtLevel },
		{ "HasActorAllMatchingGameplayTags", &URTSAbilitySystemHelper::execHasActorAllMatchingGameplayTags },
		{ "HasActorAnyMatchingGameplayTags", &URTSAbilitySystemHelper::execHasActorAnyMatchingGameplayTags },
		{ "HasActorClassMatchingGameplayTag", &URTSAbilitySystemHelper::execHasActorClassMatchingGameplayTag },
		{ "HasActorMatchingGameplayTag", &URTSAbilitySystemHelper::execHasActorMatchingGameplayTag },
		{ "HasAllMatchingGameplayTags", &URTSAbilitySystemHelper::execHasAllMatchingGameplayTags },
		{ "HasAnyMatchingGameplayTags", &URTSAbilitySystemHelper::execHasAnyMatchingGameplayTags },
		{ "HasMatchingGameplayTag", &URTSAbilitySystemHelper::execHasMatchingGameplayTag },
		{ "IsAbilityActive", &URTSAbilitySystemHelper::execIsAbilityActive },
		{ "IsHumanPlayerAutoAbility", &URTSAbilitySystemHelper::execIsHumanPlayerAutoAbility },
		{ "IsPassiveAbilityUnlocked", &URTSAbilitySystemHelper::execIsPassiveAbilityUnlocked },
		{ "IsVisibleForActor", &URTSAbilitySystemHelper::execIsVisibleForActor },
		{ "SendGameplayEvent", &URTSAbilitySystemHelper::execSendGameplayEvent },
		{ "ShouldShowAbilityAsOrderInUI", &URTSAbilitySystemHelper::execShouldShowAbilityAsOrderInUI },
		{ "UnionGameplayTagContainers", &URTSAbilitySystemHelper::execUnionGameplayTagContainers },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URTSAbilitySystemHelper);
UClass* Z_Construct_UClass_URTSAbilitySystemHelper_NoRegister()
{
	return URTSAbilitySystemHelper::StaticClass();
}
struct Z_Construct_UClass_URTSAbilitySystemHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Helper function for the ability system. */" },
#endif
		{ "IncludePath", "AbilitySystem/RTSAbilitySystemHelper.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAbilitySystemHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helper function for the ability system." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_CancelAbility, "CancelAbility" }, // 270806187
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_ChangeTag, "ChangeTag" }, // 12820046
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_CreateGameplayEventData, "CreateGameplayEventData" }, // 2041862484
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_CreateGameplayEventDataWithEventTag, "CreateGameplayEventDataWithEventTag" }, // 346976668
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirements, "DoesSatisfyTagRequirements" }, // 2563058042
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_DoesSatisfyTagRequirementsWithResult, "DoesSatisfyTagRequirementsWithResult" }, // 134889922
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_ExecuteGameplayCueWithParamsUnattached, "ExecuteGameplayCueWithParamsUnattached" }, // 26460012
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_FilterForTagsWithParentTag, "FilterForTagsWithParentTag" }, // 3180567470
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_FindDefaultComponentByClass, "FindDefaultComponentByClass" }, // 1664218935
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilities, "GetAbilities" }, // 3312523982
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityDescription, "GetAbilityDescription" }, // 1021716705
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityIcon, "GetAbilityIcon" }, // 125726178
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityLevel, "GetAbilityLevel" }, // 2321678879
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityMaxLevel, "GetAbilityMaxLevel" }, // 374133522
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityName, "GetAbilityName" }, // 3326501739
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityProcessPolicy, "GetAbilityProcessPolicy" }, // 2959298275
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityRange, "GetAbilityRange" }, // 1183012635
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilitySourceTagRequirements, "GetAbilitySourceTagRequirements" }, // 2579808508
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityTargetTagRequirements, "GetAbilityTargetTagRequirements" }, // 2263387582
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_GetAbilityTargetType, "GetAbilityTargetType" }, // 2454083210
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectDuration, "GetActiveEffectDuration" }, // 4036983517
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectTimeRemaining, "GetActiveEffectTimeRemaining" }, // 1646140421
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveEffectTimeRemainingAndDuration, "GetActiveEffectTimeRemainingAndDuration" }, // 116689411
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveGameplayEffects, "GetActiveGameplayEffects" }, // 4276266414
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_GetActiveGameplayEffectSpecs, "GetActiveGameplayEffectSpecs" }, // 2604540313
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_GetBasicAttackAbilities, "GetBasicAttackAbilities" }, // 3211822142
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownEffect, "GetCooldownEffect" }, // 2181827837
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeDuration, "GetCooldownTimeDuration" }, // 733961037
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeRemaining, "GetCooldownTimeRemaining" }, // 2736126954
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_GetCooldownTimeRemainingAndDuration, "GetCooldownTimeRemainingAndDuration" }, // 2558504784
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectDescription, "GetEffectDescription" }, // 1087091317
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectIcon, "GetEffectIcon" }, // 2073327722
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_GetEffectName, "GetEffectName" }, // 1602654876
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayAttributes, "GetGameplayAttributes" }, // 2947996771
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayEffectSpecClass, "GetGameplayEffectSpecClass" }, // 1194199397
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayEffectSpecStackCount, "GetGameplayEffectSpecStackCount" }, // 2711885462
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayTagCount, "GetGameplayTagCount" }, // 1043600985
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_GetGameplayTags, "GetGameplayTags" }, // 4074264500
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_GetGrantedAbilitiesFromGameplayEffect, "GetGrantedAbilitiesFromGameplayEffect" }, // 1521893131
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_GetItemAbilityIndex, "GetItemAbilityIndex" }, // 931003083
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_GetLastTagName, "GetLastTagName" }, // 3408738745
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_GetPlayerOwnerTags, "GetPlayerOwnerTags" }, // 4052032387
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_GetRelationshipTags, "GetRelationshipTags" }, // 3142727768
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_GetRequiredLevelToIncreaseAbilityLevel, "GetRequiredLevelToIncreaseAbilityLevel" }, // 3958007534
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_GetSourceAndTargetTags, "GetSourceAndTargetTags" }, // 3872830163
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_GetTags, "GetTags" }, // 45291091
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_GetValueAtLevel, "GetValueAtLevel" }, // 1682958633
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorAllMatchingGameplayTags, "HasActorAllMatchingGameplayTags" }, // 2007021144
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorAnyMatchingGameplayTags, "HasActorAnyMatchingGameplayTags" }, // 1176421549
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorClassMatchingGameplayTag, "HasActorClassMatchingGameplayTag" }, // 1219608877
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_HasActorMatchingGameplayTag, "HasActorMatchingGameplayTag" }, // 245981374
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_HasAllMatchingGameplayTags, "HasAllMatchingGameplayTags" }, // 4190975114
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_HasAnyMatchingGameplayTags, "HasAnyMatchingGameplayTags" }, // 3853442518
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_HasMatchingGameplayTag, "HasMatchingGameplayTag" }, // 1944968924
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_IsAbilityActive, "IsAbilityActive" }, // 4013176952
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_IsHumanPlayerAutoAbility, "IsHumanPlayerAutoAbility" }, // 3583041920
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_IsPassiveAbilityUnlocked, "IsPassiveAbilityUnlocked" }, // 2369376647
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_IsVisibleForActor, "IsVisibleForActor" }, // 1560329039
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_SendGameplayEvent, "SendGameplayEvent" }, // 2371039776
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_ShouldShowAbilityAsOrderInUI, "ShouldShowAbilityAsOrderInUI" }, // 3824608960
		{ &Z_Construct_UFunction_URTSAbilitySystemHelper_UnionGameplayTagContainers, "UnionGameplayTagContainers" }, // 3305448170
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URTSAbilitySystemHelper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URTSAbilitySystemHelper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ColonyOrders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTSAbilitySystemHelper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URTSAbilitySystemHelper_Statics::ClassParams = {
	&URTSAbilitySystemHelper::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URTSAbilitySystemHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_URTSAbilitySystemHelper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URTSAbilitySystemHelper()
{
	if (!Z_Registration_Info_UClass_URTSAbilitySystemHelper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URTSAbilitySystemHelper.OuterSingleton, Z_Construct_UClass_URTSAbilitySystemHelper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URTSAbilitySystemHelper.OuterSingleton;
}
template<> COLONYORDERS_API UClass* StaticClass<URTSAbilitySystemHelper>()
{
	return URTSAbilitySystemHelper::StaticClass();
}
URTSAbilitySystemHelper::URTSAbilitySystemHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URTSAbilitySystemHelper);
URTSAbilitySystemHelper::~URTSAbilitySystemHelper() {}
// End Class URTSAbilitySystemHelper

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAbilitySystemHelper_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URTSAbilitySystemHelper, URTSAbilitySystemHelper::StaticClass, TEXT("URTSAbilitySystemHelper"), &Z_Registration_Info_UClass_URTSAbilitySystemHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URTSAbilitySystemHelper), 2485825593U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAbilitySystemHelper_h_2066111697(TEXT("/Script/ColonyOrders"),
	Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAbilitySystemHelper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAbilitySystemHelper_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
