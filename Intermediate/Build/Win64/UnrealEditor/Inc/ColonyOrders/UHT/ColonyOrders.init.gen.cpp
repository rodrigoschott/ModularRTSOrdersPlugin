// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeColonyOrders_init() {}
	COLONYORDERS_API UFunction* Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentAbilityEndedSignature__DelegateSignature();
	COLONYORDERS_API UFunction* Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentAbilityPointsChangedSignature__DelegateSignature();
	COLONYORDERS_API UFunction* Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentCollectedXPChangedSignature__DelegateSignature();
	COLONYORDERS_API UFunction* Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderCallback__DelegateSignature();
	COLONYORDERS_API UFunction* Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderChangedSignature__DelegateSignature();
	COLONYORDERS_API UFunction* Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderEnqueuedSignature__DelegateSignature();
	COLONYORDERS_API UFunction* Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderQueueClearedSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ColonyOrders;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ColonyOrders()
	{
		if (!Z_Registration_Info_UPackage__Script_ColonyOrders.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentAbilityEndedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentAbilityPointsChangedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ColonyOrders_RTSAbilitySystemComponentCollectedXPChangedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderCallback__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderChangedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderEnqueuedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderComponentOrderQueueClearedSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ColonyOrders",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xE2219D68,
				0xE04B45BE,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ColonyOrders.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ColonyOrders.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ColonyOrders(Z_Construct_UPackage__Script_ColonyOrders, TEXT("/Script/ColonyOrders"), Z_Registration_Info_UPackage__Script_ColonyOrders, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE2219D68, 0xE04B45BE));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
