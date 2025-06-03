// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Orders/RTSOrderPreviewSnapMode.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COLONYORDERS_RTSOrderPreviewSnapMode_generated_h
#error "RTSOrderPreviewSnapMode.generated.h already included, missing '#pragma once' in RTSOrderPreviewSnapMode.h"
#endif
#define COLONYORDERS_RTSOrderPreviewSnapMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderPreviewSnapMode_h


#define FOREACH_ENUM_ERTSORDERPREVIEWSNAPMODE(op) \
	op(ERTSOrderPreviewSnapMode::ORDERPREVIEW_DontSnap) \
	op(ERTSOrderPreviewSnapMode::ORDERPREVIEW_SnapToOwner) \
	op(ERTSOrderPreviewSnapMode::ORDERPREVIEW_SnapToCursor) 

enum class ERTSOrderPreviewSnapMode : uint8;
template<> struct TIsUEnumClass<ERTSOrderPreviewSnapMode> { enum { Value = true }; };
template<> COLONYORDERS_API UEnum* StaticEnum<ERTSOrderPreviewSnapMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
