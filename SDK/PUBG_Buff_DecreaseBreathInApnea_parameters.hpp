#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Buff_DecreaseBreathInApnea_classes.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C.DecreaseHealth
struct ABuff_DecreaseBreathInApnea_C_DecreaseHealth_Params
{
	class ATslCharacter*                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C.UserConstructionScript
struct ABuff_DecreaseBreathInApnea_C_UserConstructionScript_Params
{
};

// Function Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C.ReceiveTick
struct ABuff_DecreaseBreathInApnea_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C.TickBuff
struct ABuff_DecreaseBreathInApnea_C_TickBuff_Params
{
};

// Function Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C.ExecuteUbergraph_Buff_DecreaseBreathInApnea
struct ABuff_DecreaseBreathInApnea_C_ExecuteUbergraph_Buff_DecreaseBreathInApnea_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
