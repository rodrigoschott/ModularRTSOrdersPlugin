// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ColonyOrders/Public/AbilitySystem/RTSAttackAttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSAttackAttributeSet() {}

// Begin Cross Module References
COLONYORDERS_API UClass* Z_Construct_UClass_URTSAttackAttributeSet();
COLONYORDERS_API UClass* Z_Construct_UClass_URTSAttackAttributeSet_NoRegister();
COLONYORDERS_API UClass* Z_Construct_UClass_URTSAttributeSet();
UPackage* Z_Construct_UPackage__Script_ColonyOrders();
// End Cross Module References

// Begin Class URTSAttackAttributeSet Function OnRep_Cooldown
struct Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_Cooldown_Statics
{
	struct RTSAttackAttributeSet_eventOnRep_Cooldown_Parms
	{
		float OldCooldown;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// REVERTED: Parameter type for OnRep_Cooldown must be float\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAttackAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "REVERTED: Parameter type for OnRep_Cooldown must be float" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldCooldown_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OldCooldown;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_Cooldown_Statics::NewProp_OldCooldown = { "OldCooldown", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAttackAttributeSet_eventOnRep_Cooldown_Parms, OldCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldCooldown_MetaData), NewProp_OldCooldown_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_Cooldown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_Cooldown_Statics::NewProp_OldCooldown,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_Cooldown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_Cooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAttackAttributeSet, nullptr, "OnRep_Cooldown", nullptr, nullptr, Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_Cooldown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_Cooldown_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_Cooldown_Statics::RTSAttackAttributeSet_eventOnRep_Cooldown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_Cooldown_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_Cooldown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_Cooldown_Statics::RTSAttackAttributeSet_eventOnRep_Cooldown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_Cooldown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_Cooldown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAttackAttributeSet::execOnRep_Cooldown)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_OldCooldown);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Cooldown(Z_Param_OldCooldown);
	P_NATIVE_END;
}
// End Class URTSAttackAttributeSet Function OnRep_Cooldown

// Begin Class URTSAttackAttributeSet Function OnRep_Damage
struct Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_Damage_Statics
{
	struct RTSAttackAttributeSet_eventOnRep_Damage_Parms
	{
		float OldDamage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// REVERTED: Parameter type for OnRep_Damage must be float\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAttackAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "REVERTED: Parameter type for OnRep_Damage must be float" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldDamage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OldDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_Damage_Statics::NewProp_OldDamage = { "OldDamage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAttackAttributeSet_eventOnRep_Damage_Parms, OldDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldDamage_MetaData), NewProp_OldDamage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_Damage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_Damage_Statics::NewProp_OldDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_Damage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_Damage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAttackAttributeSet, nullptr, "OnRep_Damage", nullptr, nullptr, Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_Damage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_Damage_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_Damage_Statics::RTSAttackAttributeSet_eventOnRep_Damage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_Damage_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_Damage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_Damage_Statics::RTSAttackAttributeSet_eventOnRep_Damage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_Damage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_Damage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAttackAttributeSet::execOnRep_Damage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_OldDamage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Damage(Z_Param_OldDamage);
	P_NATIVE_END;
}
// End Class URTSAttackAttributeSet Function OnRep_Damage

// Begin Class URTSAttackAttributeSet Function OnRep_OutgoingDamageMultiplier
struct Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_OutgoingDamageMultiplier_Statics
{
	struct RTSAttackAttributeSet_eventOnRep_OutgoingDamageMultiplier_Parms
	{
		float OldOutgoingDamageMultiplier;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// REVERTED: Parameter type for OnRep_OutgoingDamageMultiplier must be float\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAttackAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "REVERTED: Parameter type for OnRep_OutgoingDamageMultiplier must be float" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldOutgoingDamageMultiplier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OldOutgoingDamageMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_OutgoingDamageMultiplier_Statics::NewProp_OldOutgoingDamageMultiplier = { "OldOutgoingDamageMultiplier", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAttackAttributeSet_eventOnRep_OutgoingDamageMultiplier_Parms, OldOutgoingDamageMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldOutgoingDamageMultiplier_MetaData), NewProp_OldOutgoingDamageMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_OutgoingDamageMultiplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_OutgoingDamageMultiplier_Statics::NewProp_OldOutgoingDamageMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_OutgoingDamageMultiplier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_OutgoingDamageMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAttackAttributeSet, nullptr, "OnRep_OutgoingDamageMultiplier", nullptr, nullptr, Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_OutgoingDamageMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_OutgoingDamageMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_OutgoingDamageMultiplier_Statics::RTSAttackAttributeSet_eventOnRep_OutgoingDamageMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_OutgoingDamageMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_OutgoingDamageMultiplier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_OutgoingDamageMultiplier_Statics::RTSAttackAttributeSet_eventOnRep_OutgoingDamageMultiplier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_OutgoingDamageMultiplier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_OutgoingDamageMultiplier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAttackAttributeSet::execOnRep_OutgoingDamageMultiplier)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_OldOutgoingDamageMultiplier);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_OutgoingDamageMultiplier(Z_Param_OldOutgoingDamageMultiplier);
	P_NATIVE_END;
}
// End Class URTSAttackAttributeSet Function OnRep_OutgoingDamageMultiplier

// Begin Class URTSAttackAttributeSet Function OnRep_Range
struct Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_Range_Statics
{
	struct RTSAttackAttributeSet_eventOnRep_Range_Parms
	{
		float OldRange;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// REVERTED: Parameter type for OnRep_Range must be float\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAttackAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "REVERTED: Parameter type for OnRep_Range must be float" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OldRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_Range_Statics::NewProp_OldRange = { "OldRange", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAttackAttributeSet_eventOnRep_Range_Parms, OldRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldRange_MetaData), NewProp_OldRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_Range_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_Range_Statics::NewProp_OldRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_Range_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_Range_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAttackAttributeSet, nullptr, "OnRep_Range", nullptr, nullptr, Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_Range_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_Range_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_Range_Statics::RTSAttackAttributeSet_eventOnRep_Range_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_Range_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_Range_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_Range_Statics::RTSAttackAttributeSet_eventOnRep_Range_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_Range()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_Range_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSAttackAttributeSet::execOnRep_Range)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_OldRange);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Range(Z_Param_OldRange);
	P_NATIVE_END;
}
// End Class URTSAttackAttributeSet Function OnRep_Range

// Begin Class URTSAttackAttributeSet
void URTSAttackAttributeSet::StaticRegisterNativesURTSAttackAttributeSet()
{
	UClass* Class = URTSAttackAttributeSet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_Cooldown", &URTSAttackAttributeSet::execOnRep_Cooldown },
		{ "OnRep_Damage", &URTSAttackAttributeSet::execOnRep_Damage },
		{ "OnRep_OutgoingDamageMultiplier", &URTSAttackAttributeSet::execOnRep_OutgoingDamageMultiplier },
		{ "OnRep_Range", &URTSAttackAttributeSet::execOnRep_Range },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URTSAttackAttributeSet);
UClass* Z_Construct_UClass_URTSAttackAttributeSet_NoRegister()
{
	return URTSAttackAttributeSet::StaticClass();
}
struct Z_Construct_UClass_URTSAttackAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Contains attributes about the attack of a unit or building.\n */" },
#endif
		{ "IncludePath", "AbilitySystem/RTSAttackAttributeSet.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAttackAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains attributes about the attack of a unit or building." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "Attributes|Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default attack damage. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAttackAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default attack damage." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cooldown_MetaData[] = {
		{ "Category", "Attributes|Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time before the attack can be used again, in seconds. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAttackAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time before the attack can be used again, in seconds." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[] = {
		{ "Category", "Attributes|Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Attack range, in cm. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAttackAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attack range, in cm." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutgoingDamageMultiplier_MetaData[] = {
		{ "Category", "Attributes|Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The OutgoingDamageMultiplier of a target is multiplied with incoming damage to modify the loss of hit points of\n     * the attacked unit.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSAttackAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The OutgoingDamageMultiplier of a target is multiplied with incoming damage to modify the loss of hit points of\nthe attacked unit." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Cooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Range;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutgoingDamageMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_Cooldown, "OnRep_Cooldown" }, // 1885520338
		{ &Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_Damage, "OnRep_Damage" }, // 1115834728
		{ &Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_OutgoingDamageMultiplier, "OnRep_OutgoingDamageMultiplier" }, // 659561033
		{ &Z_Construct_UFunction_URTSAttackAttributeSet_OnRep_Range, "OnRep_Range" }, // 2912720501
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URTSAttackAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URTSAttackAttributeSet_Statics::NewProp_Damage = { "Damage", "OnRep_Damage", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSAttackAttributeSet, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URTSAttackAttributeSet_Statics::NewProp_Cooldown = { "Cooldown", "OnRep_Cooldown", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSAttackAttributeSet, Cooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cooldown_MetaData), NewProp_Cooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URTSAttackAttributeSet_Statics::NewProp_Range = { "Range", "OnRep_Range", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSAttackAttributeSet, Range), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_MetaData), NewProp_Range_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URTSAttackAttributeSet_Statics::NewProp_OutgoingDamageMultiplier = { "OutgoingDamageMultiplier", "OnRep_OutgoingDamageMultiplier", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSAttackAttributeSet, OutgoingDamageMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutgoingDamageMultiplier_MetaData), NewProp_OutgoingDamageMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URTSAttackAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSAttackAttributeSet_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSAttackAttributeSet_Statics::NewProp_Cooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSAttackAttributeSet_Statics::NewProp_Range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSAttackAttributeSet_Statics::NewProp_OutgoingDamageMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTSAttackAttributeSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URTSAttackAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URTSAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_ColonyOrders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTSAttackAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URTSAttackAttributeSet_Statics::ClassParams = {
	&URTSAttackAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URTSAttackAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URTSAttackAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URTSAttackAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_URTSAttackAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URTSAttackAttributeSet()
{
	if (!Z_Registration_Info_UClass_URTSAttackAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URTSAttackAttributeSet.OuterSingleton, Z_Construct_UClass_URTSAttackAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URTSAttackAttributeSet.OuterSingleton;
}
template<> COLONYORDERS_API UClass* StaticClass<URTSAttackAttributeSet>()
{
	return URTSAttackAttributeSet::StaticClass();
}
void URTSAttackAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Damage(TEXT("Damage"));
	static const FName Name_Cooldown(TEXT("Cooldown"));
	static const FName Name_Range(TEXT("Range"));
	static const FName Name_OutgoingDamageMultiplier(TEXT("OutgoingDamageMultiplier"));
	const bool bIsValid = true
		&& Name_Damage == ClassReps[(int32)ENetFields_Private::Damage].Property->GetFName()
		&& Name_Cooldown == ClassReps[(int32)ENetFields_Private::Cooldown].Property->GetFName()
		&& Name_Range == ClassReps[(int32)ENetFields_Private::Range].Property->GetFName()
		&& Name_OutgoingDamageMultiplier == ClassReps[(int32)ENetFields_Private::OutgoingDamageMultiplier].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in URTSAttackAttributeSet"));
}
URTSAttackAttributeSet::URTSAttackAttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URTSAttackAttributeSet);
URTSAttackAttributeSet::~URTSAttackAttributeSet() {}
// End Class URTSAttackAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAttackAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URTSAttackAttributeSet, URTSAttackAttributeSet::StaticClass, TEXT("URTSAttackAttributeSet"), &Z_Registration_Info_UClass_URTSAttackAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URTSAttackAttributeSet), 2452359223U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAttackAttributeSet_h_2887008790(TEXT("/Script/ColonyOrders"),
	Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAttackAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAttackAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
