#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_W_AdaptiveCrosshair_classes.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.DecideAdaptiveCrosshairColor
struct UW_AdaptiveCrosshair_C_DecideAdaptiveCrosshairColor_Params
{
};

// Function W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.On_CanvasBase_Prepass_1
struct UW_AdaptiveCrosshair_C_On_CanvasBase_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.SetShowCrosshairWidget
struct UW_AdaptiveCrosshair_C_SetShowCrosshairWidget_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.SetCenterCrosshairClass
struct UW_AdaptiveCrosshair_C_SetCenterCrosshairClass_Params
{
	EWeaponClass                                       InClass;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasWeapon;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.SetCenterCrosshairVisibility
struct UW_AdaptiveCrosshair_C_SetCenterCrosshairVisibility_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.SetCenterCrosshairDeviation
struct UW_AdaptiveCrosshair_C_SetCenterCrosshairDeviation_Params
{
	float                                              InDeviation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.SetAdaptiveCrosshairVisibility
struct UW_AdaptiveCrosshair_C_SetAdaptiveCrosshairVisibility_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.SetAdaptiveCrosshairPosition
struct UW_AdaptiveCrosshair_C_SetAdaptiveCrosshairPosition_Params
{
	struct FVector2D                                   ScreenPosition;                                           // (Parm, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
