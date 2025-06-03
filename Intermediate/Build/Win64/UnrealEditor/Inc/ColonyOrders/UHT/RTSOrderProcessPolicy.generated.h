// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Orders/RTSOrderProcessPolicy.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COLONYORDERS_RTSOrderProcessPolicy_generated_h
#error "RTSOrderProcessPolicy.generated.h already included, missing '#pragma once' in RTSOrderProcessPolicy.h"
#endif
#define COLONYORDERS_RTSOrderProcessPolicy_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderProcessPolicy_h


#define FOREACH_ENUM_ERTSORDERPROCESSPOLICY(op) \
	op(ERTSOrderProcessPolicy::INSTANT) \
	op(ERTSOrderProcessPolicy::CAN_BE_CANCELED) \
	op(ERTSOrderProcessPolicy::CAN_NOT_BE_CANCELED) 

enum class ERTSOrderProcessPolicy : uint8;
template<> struct TIsUEnumClass<ERTSOrderProcessPolicy> { enum { Value = true }; };
template<> COLONYORDERS_API UEnum* StaticEnum<ERTSOrderProcessPolicy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
