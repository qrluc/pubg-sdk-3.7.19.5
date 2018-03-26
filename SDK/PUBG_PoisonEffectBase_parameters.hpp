#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_PoisonEffectBase_classes.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PoisonEffectBase.PoisonEffectBase_C.SetRadius
struct APoisonEffectBase_C_SetRadius_Params
{
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PoisonEffectBase.PoisonEffectBase_C.SetCenter
struct APoisonEffectBase_C_SetCenter_Params
{
	struct FVector                                     Center;                                                   // (Parm, IsPlainOldData)
};

// Function PoisonEffectBase.PoisonEffectBase_C.UserConstructionScript
struct APoisonEffectBase_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
