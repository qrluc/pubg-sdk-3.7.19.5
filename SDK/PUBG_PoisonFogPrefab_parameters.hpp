#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_PoisonFogPrefab_classes.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PoisonFogPrefab.PoisonFogPrefab_C.UserConstructionScript
struct APoisonFogPrefab_C_UserConstructionScript_Params
{
};

// Function PoisonFogPrefab.PoisonFogPrefab_C.Unknown3923
struct APoisonFogPrefab_C_Unknown5634_Params
{
};

// Function PoisonFogPrefab.PoisonFogPrefab_C.Unknown9051
struct APoisonFogPrefab_C_Unknown9314_Params
{
};

// Function PoisonFogPrefab.PoisonFogPrefab_C.ReceiveBeginPlay
struct APoisonFogPrefab_C_ReceiveBeginPlay_Params
{
};

// Function PoisonFogPrefab.PoisonFogPrefab_C.ReceiveTick
struct APoisonFogPrefab_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PoisonFogPrefab.PoisonFogPrefab_C.SetRadius
struct APoisonFogPrefab_C_SetRadius_Params
{
	float*                                             Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PoisonFogPrefab.PoisonFogPrefab_C.SetCenter
struct APoisonFogPrefab_C_SetCenter_Params
{
	struct FVector*                                    Center;                                                   // (Parm, IsPlainOldData)
};

// Function PoisonFogPrefab.PoisonFogPrefab_C.ExecuteUbergraph_PoisonFogPrefab
struct APoisonFogPrefab_C_ExecuteUbergraph_PoisonFogPrefab_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
