#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Buff_ADSHoldingBreathCooldown_classes.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_ADSHoldingBreathCooldown.Buff_ADSHoldingBreathCooldown_C.UserConstructionScript
struct ABuff_ADSHoldingBreathCooldown_C_UserConstructionScript_Params
{
};

// Function Buff_ADSHoldingBreathCooldown.Buff_ADSHoldingBreathCooldown_C.StopBuffBlueprint
struct ABuff_ADSHoldingBreathCooldown_C_StopBuffBlueprint_Params
{
	bool*                                              bCanceled;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ADSHoldingBreathCooldown.Buff_ADSHoldingBreathCooldown_C.StartBuffBlueprint
struct ABuff_ADSHoldingBreathCooldown_C_StartBuffBlueprint_Params
{
};

// Function Buff_ADSHoldingBreathCooldown.Buff_ADSHoldingBreathCooldown_C.TickBuff
struct ABuff_ADSHoldingBreathCooldown_C_TickBuff_Params
{
};

// Function Buff_ADSHoldingBreathCooldown.Buff_ADSHoldingBreathCooldown_C.ReceiveTick
struct ABuff_ADSHoldingBreathCooldown_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ADSHoldingBreathCooldown.Buff_ADSHoldingBreathCooldown_C.ExecuteUbergraph_Buff_ADSHoldingBreathCooldown
struct ABuff_ADSHoldingBreathCooldown_C_ExecuteUbergraph_Buff_ADSHoldingBreathCooldown_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
