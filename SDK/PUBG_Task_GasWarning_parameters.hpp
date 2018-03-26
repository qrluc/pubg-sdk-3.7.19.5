#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Task_GasWarning_classes.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_GasWarning.Task_GasWarning_C.GetMinSecText
struct UTask_GasWarning_C_GetMinSecText_Params
{
	float                                              Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Full_text_for_MIN_SEC;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       formatted_text;                                           // (Parm, OutParm)
};

// Function Task_GasWarning.Task_GasWarning_C.PoisionWarningBroadcast
struct UTask_GasWarning_C_PoisionWarningBroadcast_Params
{
	class ABattleRoyaleModeController*                 ModeController;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_GasWarning.Task_GasWarning_C.InitPoisonWarningTimeIndex
struct UTask_GasWarning_C_InitPoisonWarningTimeIndex_Params
{
	class ABattleRoyaleModeController*                 ModeController;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_GasWarning.Task_GasWarning_C.ReceiveTick
struct UTask_GasWarning_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_GasWarning.Task_GasWarning_C.ReceiveExecute
struct UTask_GasWarning_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_GasWarning.Task_GasWarning_C.ExecuteUbergraph_Task_GasWarning
struct UTask_GasWarning_C_ExecuteUbergraph_Task_GasWarning_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
