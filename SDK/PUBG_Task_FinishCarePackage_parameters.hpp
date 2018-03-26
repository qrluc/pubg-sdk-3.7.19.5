#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Task_FinishCarePackage_classes.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_FinishCarePackage.Task_FinishCarePackage_C.ReceiveExecute
struct UTask_FinishCarePackage_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_FinishCarePackage.Task_FinishCarePackage_C.ExecuteUbergraph_Task_FinishCarePackage
struct UTask_FinishCarePackage_C_ExecuteUbergraph_Task_FinishCarePackage_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
