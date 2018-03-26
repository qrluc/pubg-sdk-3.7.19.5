#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Task_FinishRedZone_classes.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_FinishRedZone.Task_FinishRedZone_C.ReceiveExecute
struct UTask_FinishRedZone_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_FinishRedZone.Task_FinishRedZone_C.ExecuteUbergraph_Task_FinishRedZone
struct UTask_FinishRedZone_C_ExecuteUbergraph_Task_FinishRedZone_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
