#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_VaultHelperActor_classes.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_VaultHelperActor.BP_VaultHelperActor_C.InitCancel
struct ABP_VaultHelperActor_C_InitCancel_Params
{
};

// Function BP_VaultHelperActor.BP_VaultHelperActor_C.Init
struct ABP_VaultHelperActor_C_Init_Params
{
	struct FVector                                     V_Start;                                                  // (Parm, IsPlainOldData)
	struct FVector                                     V_Apex;                                                   // (Parm, IsPlainOldData)
	struct FVector                                     V_ApexAdditive;                                           // (Parm, IsPlainOldData)
	struct FVector                                     V_End;                                                    // (Parm, IsPlainOldData)
	class ATslCharacter*                               CharRef;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsClimbing;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EVaultAnimType                                     InVaultType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEndToFall;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayerSpeed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DistanceFromObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VaultHelperActor.BP_VaultHelperActor_C.UserConstructionScript
struct ABP_VaultHelperActor_C_UserConstructionScript_Params
{
};

// Function BP_VaultHelperActor.BP_VaultHelperActor_C.ReceiveTick
struct ABP_VaultHelperActor_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VaultHelperActor.BP_VaultHelperActor_C.ExecuteUbergraph_BP_VaultHelperActor
struct ABP_VaultHelperActor_C_ExecuteUbergraph_BP_VaultHelperActor_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
