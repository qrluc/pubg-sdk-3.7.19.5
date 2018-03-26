#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_PlaneStanceWidget_classes.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PlaneStanceWidget.PlaneStanceWidget_C.UpdateSeats
struct UPlaneStanceWidget_C_UpdateSeats_Params
{
	int                                                RideNum;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlaneStanceWidget.PlaneStanceWidget_C.Construct
struct UPlaneStanceWidget_C_Construct_Params
{
};

// Function PlaneStanceWidget.PlaneStanceWidget_C.Tick
struct UPlaneStanceWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlaneStanceWidget.PlaneStanceWidget_C.ExecuteUbergraph_PlaneStanceWidget
struct UPlaneStanceWidget_C_ExecuteUbergraph_PlaneStanceWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
