// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Orders/RTSOrderResult.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COLONYORDERS_RTSOrderResult_generated_h
#error "RTSOrderResult.generated.h already included, missing '#pragma once' in RTSOrderResult.h"
#endif
#define COLONYORDERS_RTSOrderResult_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderResult_h


#define FOREACH_ENUM_ERTSORDERRESULT(op) \
	op(ERTSOrderResult::SUCCEEDED) \
	op(ERTSOrderResult::CANCELED) \
	op(ERTSOrderResult::FAILED) 

enum class ERTSOrderResult : uint8;
template<> struct TIsUEnumClass<ERTSOrderResult> { enum { Value = true }; };
template<> COLONYORDERS_API UEnum* StaticEnum<ERTSOrderResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
