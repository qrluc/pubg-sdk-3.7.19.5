#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_FogEffectController_classes.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function FogEffectController.FogEffectController_C.DestroyEffect
struct AFogEffectController_C_DestroyEffect_Params
{
};

// Function FogEffectController.FogEffectController_C.CreateEffect
struct AFogEffectController_C_CreateEffect_Params
{
};

// Function FogEffectController.FogEffectController_C.UpdateEffect
struct AFogEffectController_C_UpdateEffect_Params
{
};

// Function FogEffectController.FogEffectController_C.UserConstructionScript
struct AFogEffectController_C_UserConstructionScript_Params
{
};

// Function FogEffectController.FogEffectController_C.ReceiveBeginPlay
struct AFogEffectController_C_ReceiveBeginPlay_Params
{
};

// Function FogEffectController.FogEffectController_C.ReceiveTick
struct AFogEffectController_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FogEffectController.FogEffectController_C.ExecuteUbergraph_FogEffectController
struct AFogEffectController_C_ExecuteUbergraph_FogEffectController_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
