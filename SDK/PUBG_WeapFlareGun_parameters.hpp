#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_WeapFlareGun_classes.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeapFlareGun.WeapFlareGun_C.UserConstructionScript
struct AWeapFlareGun_C_UserConstructionScript_Params
{
};

// Function WeapFlareGun.WeapFlareGun_C.ReceiveBeginPlay
struct AWeapFlareGun_C_ReceiveBeginPlay_Params
{
};

// Function WeapFlareGun.WeapFlareGun_C.SimulateFire_BP
struct AWeapFlareGun_C_SimulateFire_BP_Params
{
};

// Function WeapFlareGun.WeapFlareGun_C.Server_ShootFlare
struct AWeapFlareGun_C_Server_ShootFlare_Params
{
	struct FVector                                     Loc;                                                      // (Parm, IsPlainOldData)
	struct FRotator                                    Rot;                                                      // (Parm, IsPlainOldData)
};

// Function WeapFlareGun.WeapFlareGun_C.ExecuteUbergraph_WeapFlareGun
struct AWeapFlareGun_C_ExecuteUbergraph_WeapFlareGun_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
