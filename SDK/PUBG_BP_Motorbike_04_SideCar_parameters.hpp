#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_Motorbike_04_SideCar_classes.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.ProcessCamera
struct ABP_Motorbike_04_SideCar_C_ProcessCamera_Params
{
};

// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.Process_FuelConsumption
struct ABP_Motorbike_04_SideCar_C_Process_FuelConsumption_Params
{
};

// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.InitCache
struct ABP_Motorbike_04_SideCar_C_InitCache_Params
{
};

// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.UserConstructionScript
struct ABP_Motorbike_04_SideCar_C_UserConstructionScript_Params
{
};

// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.ReceiveBeginPlay
struct ABP_Motorbike_04_SideCar_C_ReceiveBeginPlay_Params
{
};

// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.ReceiveTick
struct ABP_Motorbike_04_SideCar_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.InpAxisEvt_AirControlPitch_K2Node_InputAxisEvent_8
struct ABP_Motorbike_04_SideCar_C_InpAxisEvt_AirControlPitch_K2Node_InputAxisEvent_8_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.InpAxisEvt_AirControlRoll_K2Node_InputAxisEvent_14
struct ABP_Motorbike_04_SideCar_C_InpAxisEvt_AirControlRoll_K2Node_InputAxisEvent_14_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.OnDeath_Event_1
struct ABP_Motorbike_04_SideCar_C_OnDeath_Event_1_Params
{
	float                                              KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class ATslPlayerState*                             PlayerInstigator;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.ExecuteUbergraph_BP_Motorbike_04_SideCar
struct ABP_Motorbike_04_SideCar_C_ExecuteUbergraph_BP_Motorbike_04_SideCar_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
