// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ColonyOrders/Public/AbilitySystem/RTSGameplayAbility.h"
#include "ColonyOrders/Public/Orders/RTSOrderPreviewData.h"
#include "ColonyOrders/Public/Orders/RTSOrderTargetData.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSGameplayAbility() {}

// Begin Cross Module References
COLONYORDERS_API UClass* Z_Construct_UClass_URTSGameplayAbility();
COLONYORDERS_API UClass* Z_Construct_UClass_URTSGameplayAbility_NoRegister();
COLONYORDERS_API UEnum* Z_Construct_UEnum_ColonyOrders_ERTSAbilityProcessPolicy();
COLONYORDERS_API UEnum* Z_Construct_UEnum_ColonyOrders_ERTSOrderGroupExecutionType();
COLONYORDERS_API UEnum* Z_Construct_UEnum_ColonyOrders_ERTSTargetType();
COLONYORDERS_API UScriptStruct* Z_Construct_UScriptStruct_FRTSOrderPreviewData();
COLONYORDERS_API UScriptStruct* Z_Construct_UScriptStruct_FRTSOrderTargetData();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_ColonyOrders();
// End Cross Module References

// Begin Enum ERTSAbilityProcessPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERTSAbilityProcessPolicy;
static UEnum* ERTSAbilityProcessPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERTSAbilityProcessPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERTSAbilityProcessPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ColonyOrders_ERTSAbilityProcessPolicy, (UObject*)Z_Construct_UPackage__Script_ColonyOrders(), TEXT("ERTSAbilityProcessPolicy"));
	}
	return Z_Registration_Info_UEnum_ERTSAbilityProcessPolicy.OuterSingleton;
}
template<> COLONYORDERS_API UEnum* StaticEnum<ERTSAbilityProcessPolicy>()
{
	return ERTSAbilityProcessPolicy_StaticEnum();
}
struct Z_Construct_UEnum_ColonyOrders_ERTSAbilityProcessPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CAN_BE_CANCELED.Comment", "/**\n     * The ability is considered to have a duration. The order system will wait until the ability has been finished\n     * ('EndAbility has been called') but will actively cancel the ability when another order is issued.\n     */" },
		{ "CAN_BE_CANCELED.DisplayName", "Can be Canceled" },
		{ "CAN_BE_CANCELED.Name", "ERTSAbilityProcessPolicy::CAN_BE_CANCELED" },
		{ "CAN_BE_CANCELED.ToolTip", "The ability is considered to have a duration. The order system will wait until the ability has been finished\n('EndAbility has been called') but will actively cancel the ability when another order is issued." },
		{ "CAN_BE_CANCELED_WHEN_NO_GAMEPLAY_TASK_IS_RUNNING.Comment", "/**\n     * Same as 'CanBeCanceled' with the only difference that the ability can not be canceled as long an an ability task\n     * is active (e.g. 'PlayMontageAndWaitWithNotify').\n     */" },
		{ "CAN_BE_CANCELED_WHEN_NO_GAMEPLAY_TASK_IS_RUNNING.DisplayName", "Can be Canceled when no Gameplay Task is running" },
		{ "CAN_BE_CANCELED_WHEN_NO_GAMEPLAY_TASK_IS_RUNNING.Name", "ERTSAbilityProcessPolicy::CAN_BE_CANCELED_WHEN_NO_GAMEPLAY_TASK_IS_RUNNING" },
		{ "CAN_BE_CANCELED_WHEN_NO_GAMEPLAY_TASK_IS_RUNNING.ToolTip", "Same as 'CanBeCanceled' with the only difference that the ability can not be canceled as long an an ability task\nis active (e.g. 'PlayMontageAndWaitWithNotify')." },
		{ "CAN_NOT_BE_CANCELED.Comment", "/**\n     * The ability is considered to have a duration. The order system will wait until the ability has been finished\n     * ('EndAbility has been called') regardless whether another order has been issued.\n     */" },
		{ "CAN_NOT_BE_CANCELED.DisplayName", "Can not be Canceled" },
		{ "CAN_NOT_BE_CANCELED.Name", "ERTSAbilityProcessPolicy::CAN_NOT_BE_CANCELED" },
		{ "CAN_NOT_BE_CANCELED.ToolTip", "The ability is considered to have a duration. The order system will wait until the ability has been finished\n('EndAbility has been called') regardless whether another order has been issued." },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Describes how an ability is executed. This might determine how the ability is displayed in the UI and it determines\n * how the ability is handled by the order system.\n * Note that this has nothing todo with the effects an ability might apply to a target. This has also nothing todo with\n * the cooldown of the ability.\n */" },
#endif
		{ "INSTANT.Comment", "/**\n     * The ability has no duration. If it has been activated it is considered to be finished instantly. Note that this\n     * does not necessarily mean that 'EndAbility' has already been called. It only means that the order system will not\n     * wait until this ability is really finished before it proceeds and it will not actively cancel the ability if\n     * another order is issued.\n     */" },
		{ "INSTANT.DisplayName", "Instant" },
		{ "INSTANT.Name", "ERTSAbilityProcessPolicy::INSTANT" },
		{ "INSTANT.ToolTip", "The ability has no duration. If it has been activated it is considered to be finished instantly. Note that this\ndoes not necessarily mean that 'EndAbility' has already been called. It only means that the order system will not\nwait until this ability is really finished before it proceeds and it will not actively cancel the ability if\nanother order is issued." },
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Describes how an ability is executed. This might determine how the ability is displayed in the UI and it determines\nhow the ability is handled by the order system.\nNote that this has nothing todo with the effects an ability might apply to a target. This has also nothing todo with\nthe cooldown of the ability." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERTSAbilityProcessPolicy::INSTANT", (int64)ERTSAbilityProcessPolicy::INSTANT },
		{ "ERTSAbilityProcessPolicy::CAN_BE_CANCELED", (int64)ERTSAbilityProcessPolicy::CAN_BE_CANCELED },
		{ "ERTSAbilityProcessPolicy::CAN_NOT_BE_CANCELED", (int64)ERTSAbilityProcessPolicy::CAN_NOT_BE_CANCELED },
		{ "ERTSAbilityProcessPolicy::CAN_BE_CANCELED_WHEN_NO_GAMEPLAY_TASK_IS_RUNNING", (int64)ERTSAbilityProcessPolicy::CAN_BE_CANCELED_WHEN_NO_GAMEPLAY_TASK_IS_RUNNING },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ColonyOrders_ERTSAbilityProcessPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ColonyOrders,
	nullptr,
	"ERTSAbilityProcessPolicy",
	"ERTSAbilityProcessPolicy",
	Z_Construct_UEnum_ColonyOrders_ERTSAbilityProcessPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ColonyOrders_ERTSAbilityProcessPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ColonyOrders_ERTSAbilityProcessPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ColonyOrders_ERTSAbilityProcessPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ColonyOrders_ERTSAbilityProcessPolicy()
{
	if (!Z_Registration_Info_UEnum_ERTSAbilityProcessPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERTSAbilityProcessPolicy.InnerSingleton, Z_Construct_UEnum_ColonyOrders_ERTSAbilityProcessPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERTSAbilityProcessPolicy.InnerSingleton;
}
// End Enum ERTSAbilityProcessPolicy

// Begin Class URTSGameplayAbility Function FormatDescription
struct RTSGameplayAbility_eventFormatDescription_Parms
{
	FText InDescription;
	const AActor* Actor;
	FText OutDescription;
};
static const FName NAME_URTSGameplayAbility_FormatDescription = FName(TEXT("FormatDescription"));
void URTSGameplayAbility::FormatDescription(FText const& InDescription, const AActor* Actor, FText& OutDescription) const
{
	UFunction* Func = FindFunctionChecked(NAME_URTSGameplayAbility_FormatDescription);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		RTSGameplayAbility_eventFormatDescription_Parms Parms;
		Parms.InDescription=InDescription;
		Parms.Actor=Actor;
		Parms.OutDescription=OutDescription;
		const_cast<URTSGameplayAbility*>(this)->ProcessEvent(Func,&Parms);
		OutDescription=Parms.OutDescription;
	}
	else
	{
		const_cast<URTSGameplayAbility*>(this)->FormatDescription_Implementation(InDescription, Actor, OutDescription);
	}
}
struct Z_Construct_UFunction_URTSGameplayAbility_FormatDescription_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Formats the description by replacing any placeholders by actual values. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Formats the description by replacing any placeholders by actual values." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDescription_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_InDescription;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FTextPropertyParams NewProp_OutDescription;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_URTSGameplayAbility_FormatDescription_Statics::NewProp_InDescription = { "InDescription", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSGameplayAbility_eventFormatDescription_Parms, InDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDescription_MetaData), NewProp_InDescription_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSGameplayAbility_FormatDescription_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSGameplayAbility_eventFormatDescription_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_URTSGameplayAbility_FormatDescription_Statics::NewProp_OutDescription = { "OutDescription", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSGameplayAbility_eventFormatDescription_Parms, OutDescription), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSGameplayAbility_FormatDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSGameplayAbility_FormatDescription_Statics::NewProp_InDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSGameplayAbility_FormatDescription_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSGameplayAbility_FormatDescription_Statics::NewProp_OutDescription,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSGameplayAbility_FormatDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSGameplayAbility_FormatDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSGameplayAbility, nullptr, "FormatDescription", nullptr, nullptr, Z_Construct_UFunction_URTSGameplayAbility_FormatDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSGameplayAbility_FormatDescription_Statics::PropPointers), sizeof(RTSGameplayAbility_eventFormatDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSGameplayAbility_FormatDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSGameplayAbility_FormatDescription_Statics::Function_MetaDataParams) };
static_assert(sizeof(RTSGameplayAbility_eventFormatDescription_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSGameplayAbility_FormatDescription()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSGameplayAbility_FormatDescription_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSGameplayAbility::execFormatDescription)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InDescription);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutDescription);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FormatDescription_Implementation(Z_Param_Out_InDescription,Z_Param_Actor,Z_Param_Out_OutDescription);
	P_NATIVE_END;
}
// End Class URTSGameplayAbility Function FormatDescription

// Begin Class URTSGameplayAbility Function GetActivationRequiredTags
struct Z_Construct_UFunction_URTSGameplayAbility_GetActivationRequiredTags_Statics
{
	struct RTSGameplayAbility_eventGetActivationRequiredTags_Parms
	{
		FGameplayTagContainer ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the tags the activating actor needs to have in order to activate the ability. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the tags the activating actor needs to have in order to activate the ability." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSGameplayAbility_GetActivationRequiredTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSGameplayAbility_eventGetActivationRequiredTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSGameplayAbility_GetActivationRequiredTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSGameplayAbility_GetActivationRequiredTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSGameplayAbility_GetActivationRequiredTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSGameplayAbility_GetActivationRequiredTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSGameplayAbility, nullptr, "GetActivationRequiredTags", nullptr, nullptr, Z_Construct_UFunction_URTSGameplayAbility_GetActivationRequiredTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSGameplayAbility_GetActivationRequiredTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSGameplayAbility_GetActivationRequiredTags_Statics::RTSGameplayAbility_eventGetActivationRequiredTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSGameplayAbility_GetActivationRequiredTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSGameplayAbility_GetActivationRequiredTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSGameplayAbility_GetActivationRequiredTags_Statics::RTSGameplayAbility_eventGetActivationRequiredTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSGameplayAbility_GetActivationRequiredTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSGameplayAbility_GetActivationRequiredTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSGameplayAbility::execGetActivationRequiredTags)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetActivationRequiredTags();
	P_NATIVE_END;
}
// End Class URTSGameplayAbility Function GetActivationRequiredTags

// Begin Class URTSGameplayAbility Function GetDescription
struct Z_Construct_UFunction_URTSGameplayAbility_GetDescription_Statics
{
	struct RTSGameplayAbility_eventGetDescription_Parms
	{
		const AActor* Actor;
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the description of this ability. Can be shown in the UI. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the description of this ability. Can be shown in the UI." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSGameplayAbility_GetDescription_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSGameplayAbility_eventGetDescription_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_URTSGameplayAbility_GetDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSGameplayAbility_eventGetDescription_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSGameplayAbility_GetDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSGameplayAbility_GetDescription_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSGameplayAbility_GetDescription_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSGameplayAbility_GetDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSGameplayAbility_GetDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSGameplayAbility, nullptr, "GetDescription", nullptr, nullptr, Z_Construct_UFunction_URTSGameplayAbility_GetDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSGameplayAbility_GetDescription_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSGameplayAbility_GetDescription_Statics::RTSGameplayAbility_eventGetDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSGameplayAbility_GetDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSGameplayAbility_GetDescription_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSGameplayAbility_GetDescription_Statics::RTSGameplayAbility_eventGetDescription_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSGameplayAbility_GetDescription()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSGameplayAbility_GetDescription_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSGameplayAbility::execGetDescription)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetDescription(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class URTSGameplayAbility Function GetDescription

// Begin Class URTSGameplayAbility Function GetEventTriggerTag
struct Z_Construct_UFunction_URTSGameplayAbility_GetEventTriggerTag_Statics
{
	struct RTSGameplayAbility_eventGetEventTriggerTag_Parms
	{
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Gets the event trigger tag of this ability is triggered with. Note that this just returns the first event tag\n     * found in AbilityTriggers.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the event trigger tag of this ability is triggered with. Note that this just returns the first event tag\nfound in AbilityTriggers." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSGameplayAbility_GetEventTriggerTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSGameplayAbility_eventGetEventTriggerTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSGameplayAbility_GetEventTriggerTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSGameplayAbility_GetEventTriggerTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSGameplayAbility_GetEventTriggerTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSGameplayAbility_GetEventTriggerTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSGameplayAbility, nullptr, "GetEventTriggerTag", nullptr, nullptr, Z_Construct_UFunction_URTSGameplayAbility_GetEventTriggerTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSGameplayAbility_GetEventTriggerTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSGameplayAbility_GetEventTriggerTag_Statics::RTSGameplayAbility_eventGetEventTriggerTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSGameplayAbility_GetEventTriggerTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSGameplayAbility_GetEventTriggerTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSGameplayAbility_GetEventTriggerTag_Statics::RTSGameplayAbility_eventGetEventTriggerTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSGameplayAbility_GetEventTriggerTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSGameplayAbility_GetEventTriggerTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSGameplayAbility::execGetEventTriggerTag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=P_THIS->GetEventTriggerTag();
	P_NATIVE_END;
}
// End Class URTSGameplayAbility Function GetEventTriggerTag

// Begin Class URTSGameplayAbility Function GetIcon
struct Z_Construct_UFunction_URTSGameplayAbility_GetIcon_Statics
{
	struct RTSGameplayAbility_eventGetIcon_Parms
	{
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the icon of this ability. Can be shown in the UI. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the icon of this ability. Can be shown in the UI." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSGameplayAbility_GetIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSGameplayAbility_eventGetIcon_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSGameplayAbility_GetIcon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSGameplayAbility_GetIcon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSGameplayAbility_GetIcon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSGameplayAbility_GetIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSGameplayAbility, nullptr, "GetIcon", nullptr, nullptr, Z_Construct_UFunction_URTSGameplayAbility_GetIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSGameplayAbility_GetIcon_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSGameplayAbility_GetIcon_Statics::RTSGameplayAbility_eventGetIcon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSGameplayAbility_GetIcon_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSGameplayAbility_GetIcon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSGameplayAbility_GetIcon_Statics::RTSGameplayAbility_eventGetIcon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSGameplayAbility_GetIcon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSGameplayAbility_GetIcon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSGameplayAbility::execGetIcon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=P_THIS->GetIcon();
	P_NATIVE_END;
}
// End Class URTSGameplayAbility Function GetIcon

// Begin Class URTSGameplayAbility Function GetMaxLevel
struct Z_Construct_UFunction_URTSGameplayAbility_GetMaxLevel_Statics
{
	struct RTSGameplayAbility_eventGetMaxLevel_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the maximum level of the ability. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the maximum level of the ability." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSGameplayAbility_GetMaxLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSGameplayAbility_eventGetMaxLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSGameplayAbility_GetMaxLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSGameplayAbility_GetMaxLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSGameplayAbility_GetMaxLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSGameplayAbility_GetMaxLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSGameplayAbility, nullptr, "GetMaxLevel", nullptr, nullptr, Z_Construct_UFunction_URTSGameplayAbility_GetMaxLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSGameplayAbility_GetMaxLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSGameplayAbility_GetMaxLevel_Statics::RTSGameplayAbility_eventGetMaxLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSGameplayAbility_GetMaxLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSGameplayAbility_GetMaxLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSGameplayAbility_GetMaxLevel_Statics::RTSGameplayAbility_eventGetMaxLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSGameplayAbility_GetMaxLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSGameplayAbility_GetMaxLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSGameplayAbility::execGetMaxLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMaxLevel();
	P_NATIVE_END;
}
// End Class URTSGameplayAbility Function GetMaxLevel

// Begin Class URTSGameplayAbility Function GetName
struct Z_Construct_UFunction_URTSGameplayAbility_GetName_Statics
{
	struct RTSGameplayAbility_eventGetName_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the name of this ability. Can be shown in the UI. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the name of this ability. Can be shown in the UI." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_URTSGameplayAbility_GetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSGameplayAbility_eventGetName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSGameplayAbility_GetName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSGameplayAbility_GetName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSGameplayAbility_GetName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSGameplayAbility_GetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSGameplayAbility, nullptr, "GetName", nullptr, nullptr, Z_Construct_UFunction_URTSGameplayAbility_GetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSGameplayAbility_GetName_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSGameplayAbility_GetName_Statics::RTSGameplayAbility_eventGetName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSGameplayAbility_GetName_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSGameplayAbility_GetName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSGameplayAbility_GetName_Statics::RTSGameplayAbility_eventGetName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSGameplayAbility_GetName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSGameplayAbility_GetName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSGameplayAbility::execGetName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetName();
	P_NATIVE_END;
}
// End Class URTSGameplayAbility Function GetName

// Begin Class URTSGameplayAbility Function GetRange
struct RTSGameplayAbility_eventGetRange_Parms
{
	float ReturnValue;

	/** Constructor, initializes return property only **/
	RTSGameplayAbility_eventGetRange_Parms()
		: ReturnValue(0)
	{
	}
};
static const FName NAME_URTSGameplayAbility_GetRange = FName(TEXT("GetRange"));
float URTSGameplayAbility::GetRange() const
{
	RTSGameplayAbility_eventGetRange_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_URTSGameplayAbility_GetRange);
		const_cast<URTSGameplayAbility*>(this)->ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_URTSGameplayAbility_GetRange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Gets the minimum range between the caster and the target that is needed to activate the ability.\n     * '0' value is returned if the ability has no range.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the minimum range between the caster and the target that is needed to activate the ability.\n'0' value is returned if the ability has no range." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTSGameplayAbility_GetRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSGameplayAbility_eventGetRange_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSGameplayAbility_GetRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSGameplayAbility_GetRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSGameplayAbility_GetRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSGameplayAbility_GetRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSGameplayAbility, nullptr, "GetRange", nullptr, nullptr, Z_Construct_UFunction_URTSGameplayAbility_GetRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSGameplayAbility_GetRange_Statics::PropPointers), sizeof(RTSGameplayAbility_eventGetRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSGameplayAbility_GetRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSGameplayAbility_GetRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(RTSGameplayAbility_eventGetRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSGameplayAbility_GetRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSGameplayAbility_GetRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class URTSGameplayAbility Function GetRange

// Begin Class URTSGameplayAbility Function GetTargetScore
struct RTSGameplayAbility_eventGetTargetScore_Parms
{
	const AActor* OrderedActor;
	FRTSOrderTargetData TargetData;
	int32 Index;
	float OutScore;
};
static const FName NAME_URTSGameplayAbility_GetTargetScore = FName(TEXT("GetTargetScore"));
void URTSGameplayAbility::GetTargetScore(const AActor* OrderedActor, FRTSOrderTargetData const& TargetData, int32 Index, float& OutScore) const
{
	UFunction* Func = FindFunctionChecked(NAME_URTSGameplayAbility_GetTargetScore);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		RTSGameplayAbility_eventGetTargetScore_Parms Parms;
		Parms.OrderedActor=OrderedActor;
		Parms.TargetData=TargetData;
		Parms.Index=Index;
		Parms.OutScore=OutScore;
		const_cast<URTSGameplayAbility*>(this)->ProcessEvent(Func,&Parms);
		OutScore=Parms.OutScore;
	}
	else
	{
		const_cast<URTSGameplayAbility*>(this)->GetTargetScore_Implementation(OrderedActor, TargetData, Index, OutScore);
	}
}
struct Z_Construct_UFunction_URTSGameplayAbility_GetTargetScore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Evaluates the target and returns a score that can be used to compare the different targets. A higher score means\n     * a better target for the ability.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Evaluates the target and returns a score that can be used to compare the different targets. A higher score means\na better target for the ability." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderedActor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrderedActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSGameplayAbility_GetTargetScore_Statics::NewProp_OrderedActor = { "OrderedActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSGameplayAbility_eventGetTargetScore_Parms, OrderedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderedActor_MetaData), NewProp_OrderedActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSGameplayAbility_GetTargetScore_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSGameplayAbility_eventGetTargetScore_Parms, TargetData), Z_Construct_UScriptStruct_FRTSOrderTargetData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetData_MetaData), NewProp_TargetData_MetaData) }; // 2315840092
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSGameplayAbility_GetTargetScore_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSGameplayAbility_eventGetTargetScore_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTSGameplayAbility_GetTargetScore_Statics::NewProp_OutScore = { "OutScore", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSGameplayAbility_eventGetTargetScore_Parms, OutScore), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSGameplayAbility_GetTargetScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSGameplayAbility_GetTargetScore_Statics::NewProp_OrderedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSGameplayAbility_GetTargetScore_Statics::NewProp_TargetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSGameplayAbility_GetTargetScore_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSGameplayAbility_GetTargetScore_Statics::NewProp_OutScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSGameplayAbility_GetTargetScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSGameplayAbility_GetTargetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSGameplayAbility, nullptr, "GetTargetScore", nullptr, nullptr, Z_Construct_UFunction_URTSGameplayAbility_GetTargetScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSGameplayAbility_GetTargetScore_Statics::PropPointers), sizeof(RTSGameplayAbility_eventGetTargetScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSGameplayAbility_GetTargetScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSGameplayAbility_GetTargetScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(RTSGameplayAbility_eventGetTargetScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSGameplayAbility_GetTargetScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSGameplayAbility_GetTargetScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSGameplayAbility::execGetTargetScore)
{
	P_GET_OBJECT(AActor,Z_Param_OrderedActor);
	P_GET_STRUCT_REF(FRTSOrderTargetData,Z_Param_Out_TargetData);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutScore);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetTargetScore_Implementation(Z_Param_OrderedActor,Z_Param_Out_TargetData,Z_Param_Index,Z_Param_Out_OutScore);
	P_NATIVE_END;
}
// End Class URTSGameplayAbility Function GetTargetScore

// Begin Class URTSGameplayAbility Function OnAbilityLevelChanged
struct RTSGameplayAbility_eventOnAbilityLevelChanged_Parms
{
	int32 NewLevel;
};
static const FName NAME_URTSGameplayAbility_OnAbilityLevelChanged = FName(TEXT("OnAbilityLevelChanged"));
void URTSGameplayAbility::OnAbilityLevelChanged(int32 NewLevel)
{
	UFunction* Func = FindFunctionChecked(NAME_URTSGameplayAbility_OnAbilityLevelChanged);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		RTSGameplayAbility_eventOnAbilityLevelChanged_Parms Parms;
		Parms.NewLevel=NewLevel;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnAbilityLevelChanged_Implementation(NewLevel);
	}
}
struct Z_Construct_UFunction_URTSGameplayAbility_OnAbilityLevelChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Called by the owning gameplay ability system when the level of the owner has been changed. Note that this is not\n     * called on non instanced abilities.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called by the owning gameplay ability system when the level of the owner has been changed. Note that this is not\ncalled on non instanced abilities." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URTSGameplayAbility_OnAbilityLevelChanged_Statics::NewProp_NewLevel = { "NewLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSGameplayAbility_eventOnAbilityLevelChanged_Parms, NewLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSGameplayAbility_OnAbilityLevelChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSGameplayAbility_OnAbilityLevelChanged_Statics::NewProp_NewLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSGameplayAbility_OnAbilityLevelChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSGameplayAbility_OnAbilityLevelChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSGameplayAbility, nullptr, "OnAbilityLevelChanged", nullptr, nullptr, Z_Construct_UFunction_URTSGameplayAbility_OnAbilityLevelChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSGameplayAbility_OnAbilityLevelChanged_Statics::PropPointers), sizeof(RTSGameplayAbility_eventOnAbilityLevelChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSGameplayAbility_OnAbilityLevelChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSGameplayAbility_OnAbilityLevelChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(RTSGameplayAbility_eventOnAbilityLevelChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSGameplayAbility_OnAbilityLevelChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSGameplayAbility_OnAbilityLevelChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSGameplayAbility::execOnAbilityLevelChanged)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAbilityLevelChanged_Implementation(Z_Param_NewLevel);
	P_NATIVE_END;
}
// End Class URTSGameplayAbility Function OnAbilityLevelChanged

// Begin Class URTSGameplayAbility Function ShouldShowAsOrderInUI
struct Z_Construct_UFunction_URTSGameplayAbility_ShouldShowAsOrderInUI_Statics
{
	struct RTSGameplayAbility_eventShouldShowAsOrderInUI_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to show this ability as a default order in the UI, instead of as an ability. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to show this ability as a default order in the UI, instead of as an ability." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_URTSGameplayAbility_ShouldShowAsOrderInUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTSGameplayAbility_eventShouldShowAsOrderInUI_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTSGameplayAbility_ShouldShowAsOrderInUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTSGameplayAbility_eventShouldShowAsOrderInUI_Parms), &Z_Construct_UFunction_URTSGameplayAbility_ShouldShowAsOrderInUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSGameplayAbility_ShouldShowAsOrderInUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSGameplayAbility_ShouldShowAsOrderInUI_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSGameplayAbility_ShouldShowAsOrderInUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSGameplayAbility_ShouldShowAsOrderInUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSGameplayAbility, nullptr, "ShouldShowAsOrderInUI", nullptr, nullptr, Z_Construct_UFunction_URTSGameplayAbility_ShouldShowAsOrderInUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSGameplayAbility_ShouldShowAsOrderInUI_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSGameplayAbility_ShouldShowAsOrderInUI_Statics::RTSGameplayAbility_eventShouldShowAsOrderInUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSGameplayAbility_ShouldShowAsOrderInUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSGameplayAbility_ShouldShowAsOrderInUI_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSGameplayAbility_ShouldShowAsOrderInUI_Statics::RTSGameplayAbility_eventShouldShowAsOrderInUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSGameplayAbility_ShouldShowAsOrderInUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSGameplayAbility_ShouldShowAsOrderInUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSGameplayAbility::execShouldShowAsOrderInUI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldShowAsOrderInUI();
	P_NATIVE_END;
}
// End Class URTSGameplayAbility Function ShouldShowAsOrderInUI

// Begin Class URTSGameplayAbility
void URTSGameplayAbility::StaticRegisterNativesURTSGameplayAbility()
{
	UClass* Class = URTSGameplayAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FormatDescription", &URTSGameplayAbility::execFormatDescription },
		{ "GetActivationRequiredTags", &URTSGameplayAbility::execGetActivationRequiredTags },
		{ "GetDescription", &URTSGameplayAbility::execGetDescription },
		{ "GetEventTriggerTag", &URTSGameplayAbility::execGetEventTriggerTag },
		{ "GetIcon", &URTSGameplayAbility::execGetIcon },
		{ "GetMaxLevel", &URTSGameplayAbility::execGetMaxLevel },
		{ "GetName", &URTSGameplayAbility::execGetName },
		{ "GetTargetScore", &URTSGameplayAbility::execGetTargetScore },
		{ "OnAbilityLevelChanged", &URTSGameplayAbility::execOnAbilityLevelChanged },
		{ "ShouldShowAsOrderInUI", &URTSGameplayAbility::execShouldShowAsOrderInUI },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URTSGameplayAbility);
UClass* Z_Construct_UClass_URTSGameplayAbility_NoRegister()
{
	return URTSGameplayAbility::StaticClass();
}
struct Z_Construct_UClass_URTSGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Custom game play ability. */" },
#endif
		{ "HideCategories", "Advanced Input" },
		{ "IncludePath", "AbilitySystem/RTSGameplayAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSGameplayAbility.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom game play ability." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityProcessPolicy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Describes how this ability is executed. This might determine how the ability is displayed in the UI and it\n     * determines how the ability is handled by the order system. Note that this has nothing todo with the effects an\n     * ability might apply to a target. This has also nothing todo with the cooldown of the ability.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Describes how this ability is executed. This might determine how the ability is displayed in the UI and it\ndetermines how the ability is handled by the order system. Note that this has nothing todo with the effects an\nability might apply to a target. This has also nothing todo with the cooldown of the ability." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupExecutionType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * To how many and which of the selected units should this order be issued to.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "To how many and which of the selected units should this order be issued to." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The target type of this ability.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The target type of this ability." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityPreviewData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Details about the preview for this ability while choosing a target. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Details about the preview for this ability while choosing a target." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS Display" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Icon of the ability. Can be shown in the UI. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Icon of the ability. Can be shown in the UI." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS Display" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the ability. Can be shown in the UI. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the ability. Can be shown in the UI." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS Display" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Description of the ability. Can be shown in the UI. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Description of the ability. Can be shown in the UI." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS Level" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum level of this ability. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum level of this ability." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldShowAsOrderInUI_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS Display" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to show this ability as a default order in the UI, instead of as an ability. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to show this ability as a default order in the UI, instead of as an ability." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcquisitionRadiusOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS Auto Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The specific acquisition radius for this ability. */" },
#endif
		{ "EditCondition", "bIsAcquisitionRadiusOverridden" },
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The specific acquisition radius for this ability." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAcquisitionRadiusOverridden_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS Auto Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether this ability uses a specific acquisition radius. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether this ability uses a specific acquisition radius." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHumanPlayerAutoAbility_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS Auto Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether this ability is an auto ability for the human player. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether this ability is an auto ability for the human player." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHumanPlayerAutoAutoAbilityInitialState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS Auto Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When this ability is an auto ability, this value indicates whether it is active by default. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When this ability is an auto ability, this value indicates whether it is active by default." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAIPlayerAutoAbility_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS Auto Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether this ability is an auto ability for AI players. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether this ability is an auto ability for AI players." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTargetScoreOverridden_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS Auto Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether this ability uses a specific target score. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether this ability uses a specific target score." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AbilityProcessPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AbilityProcessPolicy;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GroupExecutionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GroupExecutionType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityPreviewData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLevel;
	static void NewProp_bShouldShowAsOrderInUI_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldShowAsOrderInUI;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AcquisitionRadiusOverride;
	static void NewProp_bIsAcquisitionRadiusOverridden_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAcquisitionRadiusOverridden;
	static void NewProp_bHumanPlayerAutoAbility_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHumanPlayerAutoAbility;
	static void NewProp_bHumanPlayerAutoAutoAbilityInitialState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHumanPlayerAutoAutoAbilityInitialState;
	static void NewProp_bAIPlayerAutoAbility_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAIPlayerAutoAbility;
	static void NewProp_bIsTargetScoreOverridden_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTargetScoreOverridden;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URTSGameplayAbility_FormatDescription, "FormatDescription" }, // 352045107
		{ &Z_Construct_UFunction_URTSGameplayAbility_GetActivationRequiredTags, "GetActivationRequiredTags" }, // 2732349190
		{ &Z_Construct_UFunction_URTSGameplayAbility_GetDescription, "GetDescription" }, // 2374065663
		{ &Z_Construct_UFunction_URTSGameplayAbility_GetEventTriggerTag, "GetEventTriggerTag" }, // 3724324417
		{ &Z_Construct_UFunction_URTSGameplayAbility_GetIcon, "GetIcon" }, // 607734692
		{ &Z_Construct_UFunction_URTSGameplayAbility_GetMaxLevel, "GetMaxLevel" }, // 1156642914
		{ &Z_Construct_UFunction_URTSGameplayAbility_GetName, "GetName" }, // 3242630965
		{ &Z_Construct_UFunction_URTSGameplayAbility_GetRange, "GetRange" }, // 251836540
		{ &Z_Construct_UFunction_URTSGameplayAbility_GetTargetScore, "GetTargetScore" }, // 735874165
		{ &Z_Construct_UFunction_URTSGameplayAbility_OnAbilityLevelChanged, "OnAbilityLevelChanged" }, // 3140466284
		{ &Z_Construct_UFunction_URTSGameplayAbility_ShouldShowAsOrderInUI, "ShouldShowAsOrderInUI" }, // 1916543942
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URTSGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_AbilityProcessPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_AbilityProcessPolicy = { "AbilityProcessPolicy", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSGameplayAbility, AbilityProcessPolicy), Z_Construct_UEnum_ColonyOrders_ERTSAbilityProcessPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityProcessPolicy_MetaData), NewProp_AbilityProcessPolicy_MetaData) }; // 2443064150
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_GroupExecutionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_GroupExecutionType = { "GroupExecutionType", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSGameplayAbility, GroupExecutionType), Z_Construct_UEnum_ColonyOrders_ERTSOrderGroupExecutionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupExecutionType_MetaData), NewProp_GroupExecutionType_MetaData) }; // 286734233
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_TargetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_TargetType = { "TargetType", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSGameplayAbility, TargetType), Z_Construct_UEnum_ColonyOrders_ERTSTargetType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetType_MetaData), NewProp_TargetType_MetaData) }; // 406532435
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_AbilityPreviewData = { "AbilityPreviewData", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSGameplayAbility, AbilityPreviewData), Z_Construct_UScriptStruct_FRTSOrderPreviewData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityPreviewData_MetaData), NewProp_AbilityPreviewData_MetaData) }; // 2497024495
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSGameplayAbility, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSGameplayAbility, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSGameplayAbility, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_MaxLevel = { "MaxLevel", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSGameplayAbility, MaxLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLevel_MetaData), NewProp_MaxLevel_MetaData) };
void Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_bShouldShowAsOrderInUI_SetBit(void* Obj)
{
	((URTSGameplayAbility*)Obj)->bShouldShowAsOrderInUI = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_bShouldShowAsOrderInUI = { "bShouldShowAsOrderInUI", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URTSGameplayAbility), &Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_bShouldShowAsOrderInUI_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldShowAsOrderInUI_MetaData), NewProp_bShouldShowAsOrderInUI_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_AcquisitionRadiusOverride = { "AcquisitionRadiusOverride", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSGameplayAbility, AcquisitionRadiusOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcquisitionRadiusOverride_MetaData), NewProp_AcquisitionRadiusOverride_MetaData) };
void Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_bIsAcquisitionRadiusOverridden_SetBit(void* Obj)
{
	((URTSGameplayAbility*)Obj)->bIsAcquisitionRadiusOverridden = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_bIsAcquisitionRadiusOverridden = { "bIsAcquisitionRadiusOverridden", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URTSGameplayAbility), &Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_bIsAcquisitionRadiusOverridden_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAcquisitionRadiusOverridden_MetaData), NewProp_bIsAcquisitionRadiusOverridden_MetaData) };
void Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_bHumanPlayerAutoAbility_SetBit(void* Obj)
{
	((URTSGameplayAbility*)Obj)->bHumanPlayerAutoAbility = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_bHumanPlayerAutoAbility = { "bHumanPlayerAutoAbility", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URTSGameplayAbility), &Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_bHumanPlayerAutoAbility_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHumanPlayerAutoAbility_MetaData), NewProp_bHumanPlayerAutoAbility_MetaData) };
void Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_bHumanPlayerAutoAutoAbilityInitialState_SetBit(void* Obj)
{
	((URTSGameplayAbility*)Obj)->bHumanPlayerAutoAutoAbilityInitialState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_bHumanPlayerAutoAutoAbilityInitialState = { "bHumanPlayerAutoAutoAbilityInitialState", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URTSGameplayAbility), &Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_bHumanPlayerAutoAutoAbilityInitialState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHumanPlayerAutoAutoAbilityInitialState_MetaData), NewProp_bHumanPlayerAutoAutoAbilityInitialState_MetaData) };
void Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_bAIPlayerAutoAbility_SetBit(void* Obj)
{
	((URTSGameplayAbility*)Obj)->bAIPlayerAutoAbility = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_bAIPlayerAutoAbility = { "bAIPlayerAutoAbility", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URTSGameplayAbility), &Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_bAIPlayerAutoAbility_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAIPlayerAutoAbility_MetaData), NewProp_bAIPlayerAutoAbility_MetaData) };
void Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_bIsTargetScoreOverridden_SetBit(void* Obj)
{
	((URTSGameplayAbility*)Obj)->bIsTargetScoreOverridden = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_bIsTargetScoreOverridden = { "bIsTargetScoreOverridden", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URTSGameplayAbility), &Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_bIsTargetScoreOverridden_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTargetScoreOverridden_MetaData), NewProp_bIsTargetScoreOverridden_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URTSGameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_AbilityProcessPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_AbilityProcessPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_GroupExecutionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_GroupExecutionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_TargetType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_TargetType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_AbilityPreviewData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_MaxLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_bShouldShowAsOrderInUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_AcquisitionRadiusOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_bIsAcquisitionRadiusOverridden,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_bHumanPlayerAutoAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_bHumanPlayerAutoAutoAbilityInitialState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_bAIPlayerAutoAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSGameplayAbility_Statics::NewProp_bIsTargetScoreOverridden,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTSGameplayAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URTSGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_ColonyOrders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTSGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URTSGameplayAbility_Statics::ClassParams = {
	&URTSGameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URTSGameplayAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URTSGameplayAbility_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URTSGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_URTSGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URTSGameplayAbility()
{
	if (!Z_Registration_Info_UClass_URTSGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URTSGameplayAbility.OuterSingleton, Z_Construct_UClass_URTSGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URTSGameplayAbility.OuterSingleton;
}
template<> COLONYORDERS_API UClass* StaticClass<URTSGameplayAbility>()
{
	return URTSGameplayAbility::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URTSGameplayAbility);
URTSGameplayAbility::~URTSGameplayAbility() {}
// End Class URTSGameplayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSGameplayAbility_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERTSAbilityProcessPolicy_StaticEnum, TEXT("ERTSAbilityProcessPolicy"), &Z_Registration_Info_UEnum_ERTSAbilityProcessPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2443064150U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URTSGameplayAbility, URTSGameplayAbility::StaticClass, TEXT("URTSGameplayAbility"), &Z_Registration_Info_UClass_URTSGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URTSGameplayAbility), 2763707259U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSGameplayAbility_h_3851204147(TEXT("/Script/ColonyOrders"),
	Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSGameplayAbility_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSGameplayAbility_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSGameplayAbility_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
