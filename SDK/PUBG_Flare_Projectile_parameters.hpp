#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Flare_Projectile_classes.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Flare_Projectile.Flare_Projectile_C.CheckTrace
struct AFlare_Projectile_C_CheckTrace_Params
{
};

// Function Flare_Projectile.Flare_Projectile_C.CheckBurn
struct AFlare_Projectile_C_CheckBurn_Params
{
};

// Function Flare_Projectile.Flare_Projectile_C.ActivateFlare
struct AFlare_Projectile_C_ActivateFlare_Params
{
};

// Function Flare_Projectile.Flare_Projectile_C.UserConstructionScript
struct AFlare_Projectile_C_UserConstructionScript_Params
{
};

// Function Flare_Projectile.Flare_Projectile_C.ReceiveDestroyed
struct AFlare_Projectile_C_ReceiveDestroyed_Params
{
};

// Function Flare_Projectile.Flare_Projectile_C.ReceiveBeginPlay
struct AFlare_Projectile_C_ReceiveBeginPlay_Params
{
};

// Function Flare_Projectile.Flare_Projectile_C.ReceiveTick
struct AFlare_Projectile_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Flare_Projectile.Flare_Projectile_C.ExecuteUbergraph_Flare_Projectile
struct AFlare_Projectile_C_ExecuteUbergraph_Flare_Projectile_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
