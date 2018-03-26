#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_PlaneSeatInfoWidget_classes.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PlaneSeatInfoWidget.PlaneSeatInfoWidget_C.Ride
struct UPlaneSeatInfoWidget_C_Ride_Params
{
};

// Function PlaneSeatInfoWidget.PlaneSeatInfoWidget_C.GetSeatState
struct UPlaneSeatInfoWidget_C_GetSeatState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlaneSeatInfoWidget.PlaneSeatInfoWidget_C.Empty
struct UPlaneSeatInfoWidget_C_Empty_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
