#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_TN_MagDrop_classes.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TN_MagDrop.TN_MagDrop_C.SetSM
struct ATN_MagDrop_C_SetSM_Params
{
	class UStaticMesh*                                 NewSM;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CharacterVelocity;                                        // (Parm, IsPlainOldData)
	struct FRotator                                    CharacterRotation;                                        // (Parm, IsPlainOldData)
	struct FVector                                     LinearVelocity;                                           // (Parm, IsPlainOldData)
	struct FVector                                     AngularVelocity;                                          // (Parm, IsPlainOldData)
};

// Function TN_MagDrop.TN_MagDrop_C.UserConstructionScript
struct ATN_MagDrop_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
