#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_AircraftCarePackage_FlareGun_classes.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AircraftCarePackage_FlareGun.AircraftCarePackage_FlareGun_C.UserConstructionScript
struct AAircraftCarePackage_FlareGun_C_UserConstructionScript_Params
{
};

// Function AircraftCarePackage_FlareGun.AircraftCarePackage_FlareGun_C.ReceiveBeginPlay
struct AAircraftCarePackage_FlareGun_C_ReceiveBeginPlay_Params
{
};

// Function AircraftCarePackage_FlareGun.AircraftCarePackage_FlareGun_C.ReceiveTick
struct AAircraftCarePackage_FlareGun_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AircraftCarePackage_FlareGun.AircraftCarePackage_FlareGun_C.ExecuteUbergraph_AircraftCarePackage_FlareGun
struct AAircraftCarePackage_FlareGun_C_ExecuteUbergraph_AircraftCarePackage_FlareGun_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
