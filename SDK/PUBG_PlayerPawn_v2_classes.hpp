#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_PlayerPawn_v2_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerPawn_v2.PlayerPawn_v2_C
// 0x0295 (0x1A25 - 0x1790)
class APlayerPawn_v2_C : public ATslCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1790(0x0008) (Transient, DuplicateTransient)
	class UTslCameraComponent*                         ScopingCamera;                                            // 0x1798(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTslCharacterSpringArmComponent*             ThirdPersonSpringArm;                                     // 0x17A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTslCameraComponent*                         FirstPersonCamera;                                        // 0x17A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            ThirdPersonCamera;                                        // 0x17B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPhysicalAnimationComponent*                 PhysicalAnimation;                                        // 0x17B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTslAccessoryComponent*                      Slot_Thrown;                                              // 0x17C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTslAccessoryComponent*                      slot_melee;                                               // 0x17C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTslAccessoryComponent*                      slot_sidearm;                                             // 0x17D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTslAccessoryComponent*                      slot_secondary;                                           // 0x17D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTslAccessoryComponent*                      slot_primary;                                             // 0x17E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             WeaponCollisionArrow;                                     // 0x17E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             AudioListener;                                            // 0x17F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            BulletEffect_Sphere;                                      // 0x17F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpringArmComponent*                         ScopingSpringArm;                                         // 0x1800(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            ThirdPersonCameraInVehicle;                               // 0x1808(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpringArmInVehicleComponent*                ThirdPersonSpringArmInVehicle;                            // 0x1810(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            FirstPersonCameraInVehicle;                               // 0x1818(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpringArmInVehicleComponent*                FirstPersonSpringArmInVehicle;                            // 0x1820(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpringArmComponent*                         FirstPersonSpringArm;                                     // 0x1828(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              _____0______0_DEE66D884AF1FD2B9A26539D66F76F92;           // 0x1830(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    _____0__Direction_DEE66D884AF1FD2B9A26539D66F76F92;       // 0x1834(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1835(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Unknown1931_1;                                            // 0x1838(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTimerHandle                                TestInspectHandle;                                        // 0x1840(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimInstance*                               BaseAnimInstance;                                         // 0x1848(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AudioListenerIsSet;                                       // 0x1850(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1851(0x0003) MISSED OFFSET
	float                                              MinVCut;                                                  // 0x1854(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinZVCut;                                                 // 0x1858(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DmgFactor;                                                // 0x185C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VDampingZ;                                                // 0x1860(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x1864(0x0004) MISSED OFFSET
	class UClass*                                      TestWeaponItemClass;                                      // 0x1868(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      TestAmmoItemClass;                                        // 0x1870(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RagdollBone;                                              // 0x1878(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RagdollBone_1;                                            // 0x1880(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RagdollBone_2;                                            // 0x1888(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RagdollBone_3;                                            // 0x1890(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RagdollBone_4;                                            // 0x1898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RagdollBone_5;                                            // 0x18A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RagdollBone_6;                                            // 0x18A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxJumpZVelocity;                                         // 0x18B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovementAfterJumpCounter;                                 // 0x18B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinJumpZVelocity;                                         // 0x18B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovementAfterJumpCounterDecrease;                         // 0x18BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxMovementAfterJumpCounter;                              // 0x18C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x18C4(0x0004) MISSED OFFSET
	class UCurveVector*                                Curve_TPP2FPP;                                            // 0x18C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                Curve_FPP2TPP;                                            // 0x18D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                Curve_TPP2FPP_Pitch;                                      // 0x18D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                Curve_FPP2TPP_Pitch;                                      // 0x18E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsWeaponShoulderAttached;                                // 0x18E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x18E9(0x0003) MISSED OFFSET
	float                                              ADS_ReadyAngle;                                           // 0x18EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SocketOffset_YZ;                                          // 0x18F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    DirectionInertia;                                         // 0x18F4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bProcessHitReaction;                                      // 0x1900(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x1901(0x0003) MISSED OFFSET
	struct FRotator                                    HitReaction_Direction;                                    // 0x1904(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 HitReaction_Curve;                                        // 0x1910(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HitReaction_Time;                                         // 0x1918(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasVest;                                                 // 0x191C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x191D(0x0003) MISSED OFFSET
	class ATslWeapon_Gun*                              ActiveGunRef;                                             // 0x1920(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCameraUnderWater;                                        // 0x1928(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x1929(0x0007) MISSED OFFSET
	class UW_AdaptiveCrosshair_C*                      CrosshairWidget;                                          // 0x1930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastTraceCache;                                           // 0x1938(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              LastDistanceCache;                                        // 0x1944(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastDistanceCacheAlpha;                                   // 0x1948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x194C(0x0004) MISSED OFFSET
	class ABP_CameraMan_C*                             CameraManRef;                                             // 0x1950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              YawTarget;                                                // 0x1958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              YawStep;                                                  // 0x195C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GameTime;                                                 // 0x1960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x1964(0x0004) MISSED OFFSET
	class UCameraModifier_CameraShake*                 Shake;                                                    // 0x1968(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponCollisionAlpha;                                     // 0x1970(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x1974(0x0004) MISSED OFFSET
	class UW_SprintBar_C*                              SprintBarWidget;                                          // 0x1978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        ImpactMeshRef;                                            // 0x1980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HeavyFallStarted;                                         // 0x1988(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PhysicalAnimationInitialized;                             // 0x1989(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsCrosshairObstructed;                                   // 0x198A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInMenu;                                                // 0x198B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x198C(0x0004) MISSED OFFSET
	class ATN_AudioTestActor_V2_C*                     AudioActorRef;                                            // 0x1990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               ADSDebuff;                                                // 0x1998(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x1999(0x0003) MISSED OFFSET
	float                                              ADSDebuffValue;                                           // 0x199C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_EjectDamage;                                        // 0x19A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_BulletCamActor_C*                        WeaponBulletCamRef;                                       // 0x19A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsVaulting;                                              // 0x19B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x19B1(0x0003) MISSED OFFSET
	float                                              VaultingTimer;                                            // 0x19B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawDebugVault;                                          // 0x19B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x19B9(0x0007) MISSED OFFSET
	class ABP_VaultHelperActor_C*                      VaultHelperRef;                                           // 0x19C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	EVaultAnimType                                     CurrentVaultType;                                         // 0x19C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x19C9(0x0003) MISSED OFFSET
	struct FVector                                     VaultEndVelocity;                                         // 0x19CC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     VaultLastLocation;                                        // 0x19D8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsClimbing;                                              // 0x19E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEndVaultToFall;                                          // 0x19E5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x2];                                       // 0x19E6(0x0002) MISSED OFFSET
	float                                              VaultingDirection;                                        // 0x19E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x19EC(0x0004) MISSED OFFSET
	class UW_WeaponMenu_C*                             WeapMenuRef;                                              // 0x19F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_ActiveRagdollActor_C*                    RagdollActorRef;                                          // 0x19F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RagdollActorPos;                                          // 0x1A00(0x000C) (Edit, BlueprintVisible, Net, IsPlainOldData)
	float                                              VaultCapsuleGroundOffset;                                 // 0x1A0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVaultingData*                               CurrentVaultData;                                         // 0x1A10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTslAdaptiveCrosshairWidget*                 AdaptiveCrosshairWidget;                                  // 0x1A18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastVaultScanTime;                                        // 0x1A20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTestVault;                                               // 0x1A24(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x34298d0d);
		return ptr;
	}


	void BlurScopeOutside();
	void TEMP_JumpFromWater();
	void TEMP_TryToVaultBP();
	void TEMP_VaultDebug();
	void TEMP_VaultScan();
	void Tick_PhysicalAnimation();
	void TEMP_WeapMenu_InitShow(bool ForceClose);
	void FixupThirdPersonCamera(class USceneComponent* AttachComponent);
	void SpawnDBNOEffect(float DBNOHealth);
	void TEMP_HandleVaultActorEnd(const struct FVector& V_EndVelocity, bool ForceEndToFall);
	void TEMP_HandleVaultActorStart(const struct FVector& V_Start, const struct FVector& V_Apex, const struct FVector& V_ApexAdditive, const struct FVector& V_End, bool IsClimbing, EVaultAnimType InVaultType, bool EndToFall, float Direction, float PlayerSpeed, float DistanceFromObject);
	void TEMP_TickVaulting();
	void TEMP_HandleVaulting(const struct FVector& ImpactLocation, const struct FVector& CapsulePredictedLocation, const struct FVector& Normal2D, const struct FVector& DirectionVector, bool ForceVault, float JumpDistance, bool bBlockVault, bool bBlockClimb, bool* IsPassed, struct FVector* V_Start, struct FVector* V_Apex, struct FVector* V_End, bool* IsClimbing, struct FVector* V_ApexAdditive, EVaultAnimType* VaultType, bool* EndToFall, float* Direction, float* PlayerVelocity2D, float* DistanceFromObject);
	void TEMP_StartJump(bool bForceVelocity, const struct FVector& InForcedVelocity);
	void InitBulletCam();
	void ProcessADSDebuff();
	void ProcessMPC();
	void TestInspectObject();
	void TickSimulatePhysicsForAccessories();
	void LocalMagDrop(const struct FVector& Velocity);
	void ProcessPhysicalAnimation();
	void ProcessLocalOnlyFunctions();
	void TEMPORARY_ProcessSprintBar();
	void InitializePhysicsForAccessories();
	void CheckWeaponCollision();
	void HandleMovementParameters();
	void ProcessAdaptiveCrosshair();
	void CheckCameraUnderwater();
	void ProcessHitReaction_Init(const struct FVector& HitLocation);
	void ProcessHitReaction();
	void SetInertia();
	void SetCameraDOF();
	void ScopingSocketOffsetMoving();
	void AdjustCameraSwitching();
	void CheckForScoping();
	void push(const struct FVector& Delta_Location);
	void UserConstructionScript();
	void Unknown1527();
	void Unknown1954();
	void InpActEvt_NumPadZero_K2Node_InputKeyEvent_38(const struct FKey& Key);
	void InpActEvt_Multiply_K2Node_InputKeyEvent_37(const struct FKey& Key);
	void InpActEvt_NumPadSix_K2Node_InputKeyEvent_36(const struct FKey& Key);
	void InpActEvt_NumPadSix_K2Node_InputKeyEvent_35(const struct FKey& Key);
	void InpActEvt_NumPadFour_K2Node_InputKeyEvent_34(const struct FKey& Key);
	void InpActEvt_NumPadFour_K2Node_InputKeyEvent_33(const struct FKey& Key);
	void InpActEvt_NumPadOne_K2Node_InputKeyEvent_32(const struct FKey& Key);
	void InpActEvt_Add_K2Node_InputKeyEvent_31(const struct FKey& Key);
	void InpActEvt_Subtract_K2Node_InputKeyEvent_30(const struct FKey& Key);
	void InpActEvt_NumPadThree_K2Node_InputKeyEvent_29(const struct FKey& Key);
	void InpActEvt_NumPadSeven_K2Node_InputKeyEvent_28(const struct FKey& Key);
	void InpActEvt_NumPadNine_K2Node_InputKeyEvent_27(const struct FKey& Key);
	void InpActEvt_NumPadEight_K2Node_InputKeyEvent_26(const struct FKey& Key);
	void InpActEvt_NumPadTwo_K2Node_InputKeyEvent_25(const struct FKey& Key);
	void InpActEvt_NumPadFive_K2Node_InputKeyEvent_24(const struct FKey& Key);
	void InpActEvt_Decimal_K2Node_InputKeyEvent_23(const struct FKey& Key);
	void InpActEvt_Divide_K2Node_InputKeyEvent_22(const struct FKey& Key);
	void InpActEvt_Comma_K2Node_InputKeyEvent_21(const struct FKey& Key);
	void InpActEvt_Period_K2Node_InputKeyEvent_20(const struct FKey& Key);
	void ReceiveTick(float* DeltaSeconds);
	void SetupWeaponBlueprint();
	void OnDecreaseMaxFlyAccerleration();
	void OnIncreaseMaxFlyAccerleration();
	void OnFreeMoveMode();
	void OnTest_InspectObject();
	void OnTest_SetupWeapon();
	void OnInvulnerable();
	void ServerSetInvulnerability();
	void SpawnBulletPassByEffect(struct FVector* Location, float* BulletVelocity);
	void Client_HitReaction(const struct FVector& HitLocation);
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void NotHaveHealItemNotifyMessage(struct FText* ItemName);
	void NotHaveBoostItemNotifyMessage();
	void ActivateADS_Debuff();
	void Server_HandleVault(const struct FVector& VaultStart, const struct FVector& VaultApex, const struct FVector& VaultApexAdditive, const struct FVector& VaultEnd, bool IsClimbing, EVaultAnimType InVaultType, bool EndToFall, float Direction, float PlayerVelocity, float DistanceFromObject);
	void HandleVaultEnd(const struct FVector& InVaultEndVelocity);
	void OnJumped();
	void ServerFreeMove();
	void Local_HandleVault(const struct FVector& VaultStart, const struct FVector& VaultApex, const struct FVector& VaultApexAdditive, const struct FVector& VaultEnd, bool IsClimbing, EVaultAnimType InVaultType, bool EndToFall, float Direction, float PlayerVelocity, float DistanceFromObject);
	void Client_HandleVault(const struct FVector& VaultStart, const struct FVector& VaultApex, const struct FVector& VaultApexAdditive, const struct FVector& VaultEnd, bool IsClimbing, EVaultAnimType InVaultType, bool EndToFall, float Direction, float PlayerVelocity, float DistanceFromObject);
	void HandleVaultEnd_CP(struct FVector* InVaultEndVelocity);
	void ProcessDBNO(float* GroggyHealthPercent);
	void ProcessRevive(float* RemainGroggyHealthPercent);
	void Cheat_GiveItem(class UClass* ItemRef);
	void Cheat_Server_GiveItem(class UClass* ItemRef);
	void Cheat_Give_Current_Ammo();
	void Cheat_RevivePlayer();
	void NotHaveThrowItemNotifyMessage(struct FText* ItemName);
	void Server_SetActiveRagdoll(bool InActivate);
	void Client_ResetMesh();
	void Server_HandleRagdollActor(bool bSpawn);
	void ServerSetupWeapon();
	void Server_setRagdollActorPos(const struct FVector& InPos);
	void SimulateHeadShot(struct FTransform* SpawnTransform, struct FTransform* ImpactTransform);
	void Server_InitVaultCancel();
	void Client_InitVaultCancel();
	void HaveNotAnyHealItemNotifyMessage();
	void RunVaultCheck_BP();
	void RemoveCrosshair();
	void HandleVaulting_BP(struct FVector* ImpactLocation, struct FVector* CapsulePredictedLocation, struct FVector* Normal2D, struct FVector* DirectionVecotor, bool* bForceVault, float* JumpDistance, bool* bBlockVault, bool* bBlockClimb);
	void LocalHandleVault_CP(struct FVector* V_Start, struct FVector* V_Apex, struct FVector* V_ApexAdditive, struct FVector* V_End, bool* bIsClimb, EVaultAnimType* InVaultType, bool* bEndToFall, float* Direction, float* PlayerVelocity, float* DistanceFromObject);
	void OnWeaponChanged();
	void OnShowDynamicCrosshair(bool* bShow);
	void OnLanded(struct FHitResult* Hit);
	void ReceiveBeginPlay();
	void ToggleFreeMode();
	void ToggleInvincibility();
	void ExecuteUbergraph_PlayerPawn_v2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
