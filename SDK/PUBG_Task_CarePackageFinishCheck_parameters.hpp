#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Task_CarePackageFinishCheck_classes.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_CarePackageFinishCheck.Task_CarePackageFinishCheck_C.ReceiveTick
struct UTask_CarePackageFinishCheck_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_CarePackageFinishCheck.Task_CarePackageFinishCheck_C.ExecuteUbergraph_Task_CarePackageFinishCheck
struct UTask_CarePackageFinishCheck_C_ExecuteUbergraph_Task_CarePackageFinishCheck_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
