#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_PlayerPawn_v2_classes.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PlayerPawn_v2.PlayerPawn_v2_C.BlurScopeOutside
struct APlayerPawn_v2_C_BlurScopeOutside_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_JumpFromWater
struct APlayerPawn_v2_C_TEMP_JumpFromWater_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_TryToVaultBP
struct APlayerPawn_v2_C_TEMP_TryToVaultBP_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_VaultDebug
struct APlayerPawn_v2_C_TEMP_VaultDebug_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_VaultScan
struct APlayerPawn_v2_C_TEMP_VaultScan_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.Tick_PhysicalAnimation
struct APlayerPawn_v2_C_Tick_PhysicalAnimation_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_WeapMenu_InitShow
struct APlayerPawn_v2_C_TEMP_WeapMenu_InitShow_Params
{
	bool                                               ForceClose;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.FixupThirdPersonCamera
struct APlayerPawn_v2_C_FixupThirdPersonCamera_Params
{
	class USceneComponent*                             AttachComponent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.SpawnDBNOEffect
struct APlayerPawn_v2_C_SpawnDBNOEffect_Params
{
	float                                              DBNOHealth;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_HandleVaultActorEnd
struct APlayerPawn_v2_C_TEMP_HandleVaultActorEnd_Params
{
	struct FVector                                     V_EndVelocity;                                            // (Parm, IsPlainOldData)
	bool                                               ForceEndToFall;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_HandleVaultActorStart
struct APlayerPawn_v2_C_TEMP_HandleVaultActorStart_Params
{
	struct FVector                                     V_Start;                                                  // (Parm, IsPlainOldData)
	struct FVector                                     V_Apex;                                                   // (Parm, IsPlainOldData)
	struct FVector                                     V_ApexAdditive;                                           // (Parm, IsPlainOldData)
	struct FVector                                     V_End;                                                    // (Parm, IsPlainOldData)
	bool                                               IsClimbing;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EVaultAnimType                                     InVaultType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EndToFall;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayerSpeed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DistanceFromObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_TickVaulting
struct APlayerPawn_v2_C_TEMP_TickVaulting_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_HandleVaulting
struct APlayerPawn_v2_C_TEMP_HandleVaulting_Params
{
	struct FVector                                     ImpactLocation;                                           // (Parm, IsPlainOldData)
	struct FVector                                     CapsulePredictedLocation;                                 // (Parm, IsPlainOldData)
	struct FVector                                     Normal2D;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     DirectionVector;                                          // (Parm, IsPlainOldData)
	bool                                               ForceVault;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              JumpDistance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBlockVault;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBlockClimb;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsPassed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     V_Start;                                                  // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     V_Apex;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     V_End;                                                    // (Parm, OutParm, IsPlainOldData)
	bool                                               IsClimbing;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     V_ApexAdditive;                                           // (Parm, OutParm, IsPlainOldData)
	EVaultAnimType                                     VaultType;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               EndToFall;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Direction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              PlayerVelocity2D;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              DistanceFromObject;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_StartJump
struct APlayerPawn_v2_C_TEMP_StartJump_Params
{
	bool                                               bForceVelocity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InForcedVelocity;                                         // (Parm, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InitBulletCam
struct APlayerPawn_v2_C_InitBulletCam_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessADSDebuff
struct APlayerPawn_v2_C_ProcessADSDebuff_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessMPC
struct APlayerPawn_v2_C_ProcessMPC_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.TestInspectObject
struct APlayerPawn_v2_C_TestInspectObject_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.TickSimulatePhysicsForAccessories
struct APlayerPawn_v2_C_TickSimulatePhysicsForAccessories_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.LocalMagDrop
struct APlayerPawn_v2_C_LocalMagDrop_Params
{
	struct FVector                                     Velocity;                                                 // (Parm, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessPhysicalAnimation
struct APlayerPawn_v2_C_ProcessPhysicalAnimation_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessLocalOnlyFunctions
struct APlayerPawn_v2_C_ProcessLocalOnlyFunctions_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.TEMPORARY_ProcessSprintBar
struct APlayerPawn_v2_C_TEMPORARY_ProcessSprintBar_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InitializePhysicsForAccessories
struct APlayerPawn_v2_C_InitializePhysicsForAccessories_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.CheckWeaponCollision
struct APlayerPawn_v2_C_CheckWeaponCollision_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.HandleMovementParameters
struct APlayerPawn_v2_C_HandleMovementParameters_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessAdaptiveCrosshair
struct APlayerPawn_v2_C_ProcessAdaptiveCrosshair_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.CheckCameraUnderwater
struct APlayerPawn_v2_C_CheckCameraUnderwater_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessHitReaction_Init
struct APlayerPawn_v2_C_ProcessHitReaction_Init_Params
{
	struct FVector                                     HitLocation;                                              // (Parm, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessHitReaction
struct APlayerPawn_v2_C_ProcessHitReaction_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.SetInertia
struct APlayerPawn_v2_C_SetInertia_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.SetCameraDOF
struct APlayerPawn_v2_C_SetCameraDOF_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ScopingSocketOffsetMoving
struct APlayerPawn_v2_C_ScopingSocketOffsetMoving_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.AdjustCameraSwitching
struct APlayerPawn_v2_C_AdjustCameraSwitching_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.CheckForScoping
struct APlayerPawn_v2_C_CheckForScoping_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.push
struct APlayerPawn_v2_C_push_Params
{
	struct FVector                                     Delta_Location;                                           // (Parm, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.UserConstructionScript
struct APlayerPawn_v2_C_UserConstructionScript_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.Unknown2163
struct APlayerPawn_v2_C_Unknown1527_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.Unknown9702
struct APlayerPawn_v2_C_Unknown1954_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadZero_K2Node_InputKeyEvent_38
struct APlayerPawn_v2_C_InpActEvt_NumPadZero_K2Node_InputKeyEvent_38_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Multiply_K2Node_InputKeyEvent_37
struct APlayerPawn_v2_C_InpActEvt_Multiply_K2Node_InputKeyEvent_37_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadSix_K2Node_InputKeyEvent_36
struct APlayerPawn_v2_C_InpActEvt_NumPadSix_K2Node_InputKeyEvent_36_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadSix_K2Node_InputKeyEvent_35
struct APlayerPawn_v2_C_InpActEvt_NumPadSix_K2Node_InputKeyEvent_35_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadFour_K2Node_InputKeyEvent_34
struct APlayerPawn_v2_C_InpActEvt_NumPadFour_K2Node_InputKeyEvent_34_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadFour_K2Node_InputKeyEvent_33
struct APlayerPawn_v2_C_InpActEvt_NumPadFour_K2Node_InputKeyEvent_33_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadOne_K2Node_InputKeyEvent_32
struct APlayerPawn_v2_C_InpActEvt_NumPadOne_K2Node_InputKeyEvent_32_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Add_K2Node_InputKeyEvent_31
struct APlayerPawn_v2_C_InpActEvt_Add_K2Node_InputKeyEvent_31_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Subtract_K2Node_InputKeyEvent_30
struct APlayerPawn_v2_C_InpActEvt_Subtract_K2Node_InputKeyEvent_30_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadThree_K2Node_InputKeyEvent_29
struct APlayerPawn_v2_C_InpActEvt_NumPadThree_K2Node_InputKeyEvent_29_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadSeven_K2Node_InputKeyEvent_28
struct APlayerPawn_v2_C_InpActEvt_NumPadSeven_K2Node_InputKeyEvent_28_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadNine_K2Node_InputKeyEvent_27
struct APlayerPawn_v2_C_InpActEvt_NumPadNine_K2Node_InputKeyEvent_27_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadEight_K2Node_InputKeyEvent_26
struct APlayerPawn_v2_C_InpActEvt_NumPadEight_K2Node_InputKeyEvent_26_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadTwo_K2Node_InputKeyEvent_25
struct APlayerPawn_v2_C_InpActEvt_NumPadTwo_K2Node_InputKeyEvent_25_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadFive_K2Node_InputKeyEvent_24
struct APlayerPawn_v2_C_InpActEvt_NumPadFive_K2Node_InputKeyEvent_24_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Decimal_K2Node_InputKeyEvent_23
struct APlayerPawn_v2_C_InpActEvt_Decimal_K2Node_InputKeyEvent_23_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Divide_K2Node_InputKeyEvent_22
struct APlayerPawn_v2_C_InpActEvt_Divide_K2Node_InputKeyEvent_22_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Comma_K2Node_InputKeyEvent_21
struct APlayerPawn_v2_C_InpActEvt_Comma_K2Node_InputKeyEvent_21_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Period_K2Node_InputKeyEvent_20
struct APlayerPawn_v2_C_InpActEvt_Period_K2Node_InputKeyEvent_20_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ReceiveTick
struct APlayerPawn_v2_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.SetupWeaponBlueprint
struct APlayerPawn_v2_C_SetupWeaponBlueprint_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.OnDecreaseMaxFlyAccerleration
struct APlayerPawn_v2_C_OnDecreaseMaxFlyAccerleration_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.OnIncreaseMaxFlyAccerleration
struct APlayerPawn_v2_C_OnIncreaseMaxFlyAccerleration_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.OnFreeMoveMode
struct APlayerPawn_v2_C_OnFreeMoveMode_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.OnTest_InspectObject
struct APlayerPawn_v2_C_OnTest_InspectObject_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.OnTest_SetupWeapon
struct APlayerPawn_v2_C_OnTest_SetupWeapon_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.OnInvulnerable
struct APlayerPawn_v2_C_OnInvulnerable_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ServerSetInvulnerability
struct APlayerPawn_v2_C_ServerSetInvulnerability_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.SpawnBulletPassByEffect
struct APlayerPawn_v2_C_SpawnBulletPassByEffect_Params
{
	struct FVector*                                    Location;                                                 // (Parm, IsPlainOldData)
	float*                                             BulletVelocity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.Client_HitReaction
struct APlayerPawn_v2_C_Client_HitReaction_Params
{
	struct FVector                                     HitLocation;                                              // (Parm, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ReceiveAnyDamage
struct APlayerPawn_v2_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
struct APlayerPawn_v2_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.NotHaveHealItemNotifyMessage
struct APlayerPawn_v2_C_NotHaveHealItemNotifyMessage_Params
{
	struct FText*                                      ItemName;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.NotHaveBoostItemNotifyMessage
struct APlayerPawn_v2_C_NotHaveBoostItemNotifyMessage_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ActivateADS_Debuff
struct APlayerPawn_v2_C_ActivateADS_Debuff_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.Server_HandleVault
struct APlayerPawn_v2_C_Server_HandleVault_Params
{
	struct FVector                                     VaultStart;                                               // (Parm, IsPlainOldData)
	struct FVector                                     VaultApex;                                                // (Parm, IsPlainOldData)
	struct FVector                                     VaultApexAdditive;                                        // (Parm, IsPlainOldData)
	struct FVector                                     VaultEnd;                                                 // (Parm, IsPlainOldData)
	bool                                               IsClimbing;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EVaultAnimType                                     InVaultType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EndToFall;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayerVelocity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DistanceFromObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.HandleVaultEnd
struct APlayerPawn_v2_C_HandleVaultEnd_Params
{
	struct FVector                                     InVaultEndVelocity;                                       // (Parm, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.OnJumped
struct APlayerPawn_v2_C_OnJumped_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ServerFreeMove
struct APlayerPawn_v2_C_ServerFreeMove_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.Local_HandleVault
struct APlayerPawn_v2_C_Local_HandleVault_Params
{
	struct FVector                                     VaultStart;                                               // (Parm, IsPlainOldData)
	struct FVector                                     VaultApex;                                                // (Parm, IsPlainOldData)
	struct FVector                                     VaultApexAdditive;                                        // (Parm, IsPlainOldData)
	struct FVector                                     VaultEnd;                                                 // (Parm, IsPlainOldData)
	bool                                               IsClimbing;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EVaultAnimType                                     InVaultType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EndToFall;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayerVelocity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DistanceFromObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.Client_HandleVault
struct APlayerPawn_v2_C_Client_HandleVault_Params
{
	struct FVector                                     VaultStart;                                               // (Parm, IsPlainOldData)
	struct FVector                                     VaultApex;                                                // (Parm, IsPlainOldData)
	struct FVector                                     VaultApexAdditive;                                        // (Parm, IsPlainOldData)
	struct FVector                                     VaultEnd;                                                 // (Parm, IsPlainOldData)
	bool                                               IsClimbing;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EVaultAnimType                                     InVaultType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EndToFall;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayerVelocity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DistanceFromObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.HandleVaultEnd_CP
struct APlayerPawn_v2_C_HandleVaultEnd_CP_Params
{
	struct FVector*                                    InVaultEndVelocity;                                       // (Parm, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessDBNO
struct APlayerPawn_v2_C_ProcessDBNO_Params
{
	float*                                             GroggyHealthPercent;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessRevive
struct APlayerPawn_v2_C_ProcessRevive_Params
{
	float*                                             RemainGroggyHealthPercent;                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_GiveItem
struct APlayerPawn_v2_C_Cheat_GiveItem_Params
{
	class UClass*                                      ItemRef;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_Server_GiveItem
struct APlayerPawn_v2_C_Cheat_Server_GiveItem_Params
{
	class UClass*                                      ItemRef;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_Give_Current_Ammo
struct APlayerPawn_v2_C_Cheat_Give_Current_Ammo_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_RevivePlayer
struct APlayerPawn_v2_C_Cheat_RevivePlayer_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.NotHaveThrowItemNotifyMessage
struct APlayerPawn_v2_C_NotHaveThrowItemNotifyMessage_Params
{
	struct FText*                                      ItemName;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.Server_SetActiveRagdoll
struct APlayerPawn_v2_C_Server_SetActiveRagdoll_Params
{
	bool                                               InActivate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.Client_ResetMesh
struct APlayerPawn_v2_C_Client_ResetMesh_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.Server_HandleRagdollActor
struct APlayerPawn_v2_C_Server_HandleRagdollActor_Params
{
	bool                                               bSpawn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ServerSetupWeapon
struct APlayerPawn_v2_C_ServerSetupWeapon_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.Server_setRagdollActorPos
struct APlayerPawn_v2_C_Server_setRagdollActorPos_Params
{
	struct FVector                                     InPos;                                                    // (Parm, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.SimulateHeadShot
struct APlayerPawn_v2_C_SimulateHeadShot_Params
{
	struct FTransform*                                 SpawnTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FTransform*                                 ImpactTransform;                                          // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.Server_InitVaultCancel
struct APlayerPawn_v2_C_Server_InitVaultCancel_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.Client_InitVaultCancel
struct APlayerPawn_v2_C_Client_InitVaultCancel_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.HaveNotAnyHealItemNotifyMessage
struct APlayerPawn_v2_C_HaveNotAnyHealItemNotifyMessage_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.RunVaultCheck_BP
struct APlayerPawn_v2_C_RunVaultCheck_BP_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.RemoveCrosshair
struct APlayerPawn_v2_C_RemoveCrosshair_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.HandleVaulting_BP
struct APlayerPawn_v2_C_HandleVaulting_BP_Params
{
	struct FVector*                                    ImpactLocation;                                           // (Parm, IsPlainOldData)
	struct FVector*                                    CapsulePredictedLocation;                                 // (Parm, IsPlainOldData)
	struct FVector*                                    Normal2D;                                                 // (Parm, IsPlainOldData)
	struct FVector*                                    DirectionVecotor;                                         // (Parm, IsPlainOldData)
	bool*                                              bForceVault;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             JumpDistance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bBlockVault;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bBlockClimb;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.LocalHandleVault_CP
struct APlayerPawn_v2_C_LocalHandleVault_CP_Params
{
	struct FVector*                                    V_Start;                                                  // (Parm, IsPlainOldData)
	struct FVector*                                    V_Apex;                                                   // (Parm, IsPlainOldData)
	struct FVector*                                    V_ApexAdditive;                                           // (Parm, IsPlainOldData)
	struct FVector*                                    V_End;                                                    // (Parm, IsPlainOldData)
	bool*                                              bIsClimb;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EVaultAnimType*                                    InVaultType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEndToFall;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PlayerVelocity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DistanceFromObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.OnWeaponChanged
struct APlayerPawn_v2_C_OnWeaponChanged_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.OnShowDynamicCrosshair
struct APlayerPawn_v2_C_OnShowDynamicCrosshair_Params
{
	bool*                                              bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.OnLanded
struct APlayerPawn_v2_C_OnLanded_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ReceiveBeginPlay
struct APlayerPawn_v2_C_ReceiveBeginPlay_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ToggleFreeMode
struct APlayerPawn_v2_C_ToggleFreeMode_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ToggleInvincibility
struct APlayerPawn_v2_C_ToggleInvincibility_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ExecuteUbergraph_PlayerPawn_v2
struct APlayerPawn_v2_C_ExecuteUbergraph_PlayerPawn_v2_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
