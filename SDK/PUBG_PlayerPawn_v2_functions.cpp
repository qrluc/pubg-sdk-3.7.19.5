// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_PlayerPawn_v2_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerPawn_v2.PlayerPawn_v2_C.BlurScopeOutside
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_v2_C::BlurScopeOutside()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(109325);

	APlayerPawn_v2_C_BlurScopeOutside_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_JumpFromWater
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerPawn_v2_C::TEMP_JumpFromWater()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(109266);

	APlayerPawn_v2_C_TEMP_JumpFromWater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_TryToVaultBP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerPawn_v2_C::TEMP_TryToVaultBP()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(109260);

	APlayerPawn_v2_C_TEMP_TryToVaultBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_VaultDebug
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerPawn_v2_C::TEMP_VaultDebug()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(109254);

	APlayerPawn_v2_C_TEMP_VaultDebug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_VaultScan
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerPawn_v2_C::TEMP_VaultScan()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(109240);

	APlayerPawn_v2_C_TEMP_VaultScan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.Tick_PhysicalAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerPawn_v2_C::Tick_PhysicalAnimation()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(109231);

	APlayerPawn_v2_C_Tick_PhysicalAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_WeapMenu_InitShow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ForceClose                     (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_v2_C::TEMP_WeapMenu_InitShow(bool ForceClose)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(109225);

	APlayerPawn_v2_C_TEMP_WeapMenu_InitShow_Params params;
	params.ForceClose = ForceClose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.FixupThirdPersonCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         AttachComponent                (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_v2_C::FixupThirdPersonCamera(class USceneComponent* AttachComponent)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(109223);

	APlayerPawn_v2_C_FixupThirdPersonCamera_Params params;
	params.AttachComponent = AttachComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.SpawnDBNOEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DBNOHealth                     (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_v2_C::SpawnDBNOEffect(float DBNOHealth)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(109214);

	APlayerPawn_v2_C_SpawnDBNOEffect_Params params;
	params.DBNOHealth = DBNOHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_HandleVaultActorEnd
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 V_EndVelocity                  (Parm, IsPlainOldData)
// bool                           ForceEndToFall                 (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_v2_C::TEMP_HandleVaultActorEnd(const struct FVector& V_EndVelocity, bool ForceEndToFall)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(109197);

	APlayerPawn_v2_C_TEMP_HandleVaultActorEnd_Params params;
	params.V_EndVelocity = V_EndVelocity;
	params.ForceEndToFall = ForceEndToFall;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_HandleVaultActorStart
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 V_Start                        (Parm, IsPlainOldData)
// struct FVector                 V_Apex                         (Parm, IsPlainOldData)
// struct FVector                 V_ApexAdditive                 (Parm, IsPlainOldData)
// struct FVector                 V_End                          (Parm, IsPlainOldData)
// bool                           IsClimbing                     (Parm, ZeroConstructor, IsPlainOldData)
// EVaultAnimType                 InVaultType                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           EndToFall                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          PlayerSpeed                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          DistanceFromObject             (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_v2_C::TEMP_HandleVaultActorStart(const struct FVector& V_Start, const struct FVector& V_Apex, const struct FVector& V_ApexAdditive, const struct FVector& V_End, bool IsClimbing, EVaultAnimType InVaultType, bool EndToFall, float Direction, float PlayerSpeed, float DistanceFromObject)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(109178);

	APlayerPawn_v2_C_TEMP_HandleVaultActorStart_Params params;
	params.V_Start = V_Start;
	params.V_Apex = V_Apex;
	params.V_ApexAdditive = V_ApexAdditive;
	params.V_End = V_End;
	params.IsClimbing = IsClimbing;
	params.InVaultType = InVaultType;
	params.EndToFall = EndToFall;
	params.Direction = Direction;
	params.PlayerSpeed = PlayerSpeed;
	params.DistanceFromObject = DistanceFromObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_TickVaulting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerPawn_v2_C::TEMP_TickVaulting()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(109160);

	APlayerPawn_v2_C_TEMP_TickVaulting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_HandleVaulting
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ImpactLocation                 (Parm, IsPlainOldData)
// struct FVector                 CapsulePredictedLocation       (Parm, IsPlainOldData)
// struct FVector                 Normal2D                       (Parm, IsPlainOldData)
// struct FVector                 DirectionVector                (Parm, IsPlainOldData)
// bool                           ForceVault                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          JumpDistance                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBlockVault                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBlockClimb                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsPassed                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 V_Start                        (Parm, OutParm, IsPlainOldData)
// struct FVector                 V_Apex                         (Parm, OutParm, IsPlainOldData)
// struct FVector                 V_End                          (Parm, OutParm, IsPlainOldData)
// bool                           IsClimbing                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 V_ApexAdditive                 (Parm, OutParm, IsPlainOldData)
// EVaultAnimType                 VaultType                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           EndToFall                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Direction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          PlayerVelocity2D               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          DistanceFromObject             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_v2_C::TEMP_HandleVaulting(const struct FVector& ImpactLocation, const struct FVector& CapsulePredictedLocation, const struct FVector& Normal2D, const struct FVector& DirectionVector, bool ForceVault, float JumpDistance, bool bBlockVault, bool bBlockClimb, bool* IsPassed, struct FVector* V_Start, struct FVector* V_Apex, struct FVector* V_End, bool* IsClimbing, struct FVector* V_ApexAdditive, EVaultAnimType* VaultType, bool* EndToFall, float* Direction, float* PlayerVelocity2D, float* DistanceFromObject)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(108608);

	APlayerPawn_v2_C_TEMP_HandleVaulting_Params params;
	params.ImpactLocation = ImpactLocation;
	params.CapsulePredictedLocation = CapsulePredictedLocation;
	params.Normal2D = Normal2D;
	params.DirectionVector = DirectionVector;
	params.ForceVault = ForceVault;
	params.JumpDistance = JumpDistance;
	params.bBlockVault = bBlockVault;
	params.bBlockClimb = bBlockClimb;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPassed != nullptr)
		*IsPassed = params.IsPassed;
	if (V_Start != nullptr)
		*V_Start = params.V_Start;
	if (V_Apex != nullptr)
		*V_Apex = params.V_Apex;
	if (V_End != nullptr)
		*V_End = params.V_End;
	if (IsClimbing != nullptr)
		*IsClimbing = params.IsClimbing;
	if (V_ApexAdditive != nullptr)
		*V_ApexAdditive = params.V_ApexAdditive;
	if (VaultType != nullptr)
		*VaultType = params.VaultType;
	if (EndToFall != nullptr)
		*EndToFall = params.EndToFall;
	if (Direction != nullptr)
		*Direction = params.Direction;
	if (PlayerVelocity2D != nullptr)
		*PlayerVelocity2D = params.PlayerVelocity2D;
	if (DistanceFromObject != nullptr)
		*DistanceFromObject = params.DistanceFromObject;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_StartJump
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bForceVelocity                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InForcedVelocity               (Parm, IsPlainOldData)

void APlayerPawn_v2_C::TEMP_StartJump(bool bForceVelocity, const struct FVector& InForcedVelocity)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(108379);

	APlayerPawn_v2_C_TEMP_StartJump_Params params;
	params.bForceVelocity = bForceVelocity;
	params.InForcedVelocity = InForcedVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InitBulletCam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerPawn_v2_C::InitBulletCam()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(108367);

	APlayerPawn_v2_C_InitBulletCam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessADSDebuff
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_v2_C::ProcessADSDebuff()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(108357);

	APlayerPawn_v2_C_ProcessADSDebuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessMPC
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerPawn_v2_C::ProcessMPC()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(108342);

	APlayerPawn_v2_C_ProcessMPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.TestInspectObject
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerPawn_v2_C::TestInspectObject()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(108299);

	APlayerPawn_v2_C_TestInspectObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.TickSimulatePhysicsForAccessories
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_v2_C::TickSimulatePhysicsForAccessories()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(108297);

	APlayerPawn_v2_C_TickSimulatePhysicsForAccessories_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.LocalMagDrop
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Velocity                       (Parm, IsPlainOldData)

void APlayerPawn_v2_C::LocalMagDrop(const struct FVector& Velocity)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(108276);

	APlayerPawn_v2_C_LocalMagDrop_Params params;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessPhysicalAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_v2_C::ProcessPhysicalAnimation()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(108272);

	APlayerPawn_v2_C_ProcessPhysicalAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessLocalOnlyFunctions
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_v2_C::ProcessLocalOnlyFunctions()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(108269);

	APlayerPawn_v2_C_ProcessLocalOnlyFunctions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.TEMPORARY_ProcessSprintBar
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_v2_C::TEMPORARY_ProcessSprintBar()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(108262);

	APlayerPawn_v2_C_TEMPORARY_ProcessSprintBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InitializePhysicsForAccessories
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_v2_C::InitializePhysicsForAccessories()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(108260);

	APlayerPawn_v2_C_InitializePhysicsForAccessories_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.CheckWeaponCollision
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerPawn_v2_C::CheckWeaponCollision()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(108234);

	APlayerPawn_v2_C_CheckWeaponCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.HandleMovementParameters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerPawn_v2_C::HandleMovementParameters()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(108224);

	APlayerPawn_v2_C_HandleMovementParameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessAdaptiveCrosshair
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerPawn_v2_C::ProcessAdaptiveCrosshair()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(108121);

	APlayerPawn_v2_C_ProcessAdaptiveCrosshair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.CheckCameraUnderwater
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerPawn_v2_C::CheckCameraUnderwater()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(108113);

	APlayerPawn_v2_C_CheckCameraUnderwater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessHitReaction_Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitLocation                    (Parm, IsPlainOldData)

void APlayerPawn_v2_C::ProcessHitReaction_Init(const struct FVector& HitLocation)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(108085);

	APlayerPawn_v2_C_ProcessHitReaction_Init_Params params;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessHitReaction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerPawn_v2_C::ProcessHitReaction()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(108074);

	APlayerPawn_v2_C_ProcessHitReaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.SetInertia
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerPawn_v2_C::SetInertia()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(108066);

	APlayerPawn_v2_C_SetInertia_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.SetCameraDOF
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerPawn_v2_C::SetCameraDOF()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(108055);

	APlayerPawn_v2_C_SetCameraDOF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.ScopingSocketOffsetMoving
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerPawn_v2_C::ScopingSocketOffsetMoving()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(108019);

	APlayerPawn_v2_C_ScopingSocketOffsetMoving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.AdjustCameraSwitching
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerPawn_v2_C::AdjustCameraSwitching()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(108012);

	APlayerPawn_v2_C_AdjustCameraSwitching_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.CheckForScoping
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_v2_C::CheckForScoping()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(108002);

	APlayerPawn_v2_C_CheckForScoping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.push
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Delta_Location                 (Parm, IsPlainOldData)

void APlayerPawn_v2_C::push(const struct FVector& Delta_Location)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107996);

	APlayerPawn_v2_C_push_Params params;
	params.Delta_Location = Delta_Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_v2_C::UserConstructionScript()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107994);

	APlayerPawn_v2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.Unknown2163
// (BlueprintEvent)

void APlayerPawn_v2_C::Unknown1527()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107993);

	APlayerPawn_v2_C_Unknown1527_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.Unknown9702
// (BlueprintEvent)

void APlayerPawn_v2_C::Unknown1954()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107992);

	APlayerPawn_v2_C_Unknown1954_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadZero_K2Node_InputKeyEvent_38
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void APlayerPawn_v2_C::InpActEvt_NumPadZero_K2Node_InputKeyEvent_38(const struct FKey& Key)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107990);

	APlayerPawn_v2_C_InpActEvt_NumPadZero_K2Node_InputKeyEvent_38_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Multiply_K2Node_InputKeyEvent_37
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void APlayerPawn_v2_C::InpActEvt_Multiply_K2Node_InputKeyEvent_37(const struct FKey& Key)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107988);

	APlayerPawn_v2_C_InpActEvt_Multiply_K2Node_InputKeyEvent_37_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadSix_K2Node_InputKeyEvent_36
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void APlayerPawn_v2_C::InpActEvt_NumPadSix_K2Node_InputKeyEvent_36(const struct FKey& Key)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107986);

	APlayerPawn_v2_C_InpActEvt_NumPadSix_K2Node_InputKeyEvent_36_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadSix_K2Node_InputKeyEvent_35
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void APlayerPawn_v2_C::InpActEvt_NumPadSix_K2Node_InputKeyEvent_35(const struct FKey& Key)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107984);

	APlayerPawn_v2_C_InpActEvt_NumPadSix_K2Node_InputKeyEvent_35_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadFour_K2Node_InputKeyEvent_34
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void APlayerPawn_v2_C::InpActEvt_NumPadFour_K2Node_InputKeyEvent_34(const struct FKey& Key)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107982);

	APlayerPawn_v2_C_InpActEvt_NumPadFour_K2Node_InputKeyEvent_34_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadFour_K2Node_InputKeyEvent_33
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void APlayerPawn_v2_C::InpActEvt_NumPadFour_K2Node_InputKeyEvent_33(const struct FKey& Key)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107980);

	APlayerPawn_v2_C_InpActEvt_NumPadFour_K2Node_InputKeyEvent_33_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadOne_K2Node_InputKeyEvent_32
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void APlayerPawn_v2_C::InpActEvt_NumPadOne_K2Node_InputKeyEvent_32(const struct FKey& Key)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107978);

	APlayerPawn_v2_C_InpActEvt_NumPadOne_K2Node_InputKeyEvent_32_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Add_K2Node_InputKeyEvent_31
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void APlayerPawn_v2_C::InpActEvt_Add_K2Node_InputKeyEvent_31(const struct FKey& Key)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107976);

	APlayerPawn_v2_C_InpActEvt_Add_K2Node_InputKeyEvent_31_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Subtract_K2Node_InputKeyEvent_30
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void APlayerPawn_v2_C::InpActEvt_Subtract_K2Node_InputKeyEvent_30(const struct FKey& Key)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107974);

	APlayerPawn_v2_C_InpActEvt_Subtract_K2Node_InputKeyEvent_30_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadThree_K2Node_InputKeyEvent_29
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void APlayerPawn_v2_C::InpActEvt_NumPadThree_K2Node_InputKeyEvent_29(const struct FKey& Key)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107972);

	APlayerPawn_v2_C_InpActEvt_NumPadThree_K2Node_InputKeyEvent_29_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadSeven_K2Node_InputKeyEvent_28
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void APlayerPawn_v2_C::InpActEvt_NumPadSeven_K2Node_InputKeyEvent_28(const struct FKey& Key)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107970);

	APlayerPawn_v2_C_InpActEvt_NumPadSeven_K2Node_InputKeyEvent_28_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadNine_K2Node_InputKeyEvent_27
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void APlayerPawn_v2_C::InpActEvt_NumPadNine_K2Node_InputKeyEvent_27(const struct FKey& Key)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107968);

	APlayerPawn_v2_C_InpActEvt_NumPadNine_K2Node_InputKeyEvent_27_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadEight_K2Node_InputKeyEvent_26
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void APlayerPawn_v2_C::InpActEvt_NumPadEight_K2Node_InputKeyEvent_26(const struct FKey& Key)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107966);

	APlayerPawn_v2_C_InpActEvt_NumPadEight_K2Node_InputKeyEvent_26_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadTwo_K2Node_InputKeyEvent_25
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void APlayerPawn_v2_C::InpActEvt_NumPadTwo_K2Node_InputKeyEvent_25(const struct FKey& Key)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107964);

	APlayerPawn_v2_C_InpActEvt_NumPadTwo_K2Node_InputKeyEvent_25_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadFive_K2Node_InputKeyEvent_24
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void APlayerPawn_v2_C::InpActEvt_NumPadFive_K2Node_InputKeyEvent_24(const struct FKey& Key)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107962);

	APlayerPawn_v2_C_InpActEvt_NumPadFive_K2Node_InputKeyEvent_24_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Decimal_K2Node_InputKeyEvent_23
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void APlayerPawn_v2_C::InpActEvt_Decimal_K2Node_InputKeyEvent_23(const struct FKey& Key)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107960);

	APlayerPawn_v2_C_InpActEvt_Decimal_K2Node_InputKeyEvent_23_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Divide_K2Node_InputKeyEvent_22
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void APlayerPawn_v2_C::InpActEvt_Divide_K2Node_InputKeyEvent_22(const struct FKey& Key)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107958);

	APlayerPawn_v2_C_InpActEvt_Divide_K2Node_InputKeyEvent_22_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Comma_K2Node_InputKeyEvent_21
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void APlayerPawn_v2_C::InpActEvt_Comma_K2Node_InputKeyEvent_21(const struct FKey& Key)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107956);

	APlayerPawn_v2_C_InpActEvt_Comma_K2Node_InputKeyEvent_21_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Period_K2Node_InputKeyEvent_20
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void APlayerPawn_v2_C::InpActEvt_Period_K2Node_InputKeyEvent_20(const struct FKey& Key)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107954);

	APlayerPawn_v2_C_InpActEvt_Period_K2Node_InputKeyEvent_20_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_v2_C::ReceiveTick(float* DeltaSeconds)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107952);

	APlayerPawn_v2_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.SetupWeaponBlueprint
// (Event, Public, BlueprintEvent)

void APlayerPawn_v2_C::SetupWeaponBlueprint()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107951);

	APlayerPawn_v2_C_SetupWeaponBlueprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.OnDecreaseMaxFlyAccerleration
// (Event, Public, BlueprintEvent)

void APlayerPawn_v2_C::OnDecreaseMaxFlyAccerleration()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107950);

	APlayerPawn_v2_C_OnDecreaseMaxFlyAccerleration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.OnIncreaseMaxFlyAccerleration
// (Event, Public, BlueprintEvent)

void APlayerPawn_v2_C::OnIncreaseMaxFlyAccerleration()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107949);

	APlayerPawn_v2_C_OnIncreaseMaxFlyAccerleration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.OnFreeMoveMode
// (Event, Public, BlueprintEvent)

void APlayerPawn_v2_C::OnFreeMoveMode()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107948);

	APlayerPawn_v2_C_OnFreeMoveMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.OnTest_InspectObject
// (Event, Public, BlueprintEvent)

void APlayerPawn_v2_C::OnTest_InspectObject()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107947);

	APlayerPawn_v2_C_OnTest_InspectObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.OnTest_SetupWeapon
// (Event, Public, BlueprintEvent)

void APlayerPawn_v2_C::OnTest_SetupWeapon()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107946);

	APlayerPawn_v2_C_OnTest_SetupWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.OnInvulnerable
// (Event, Public, BlueprintEvent)

void APlayerPawn_v2_C::OnInvulnerable()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107945);

	APlayerPawn_v2_C_OnInvulnerable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.ServerSetInvulnerability
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void APlayerPawn_v2_C::ServerSetInvulnerability()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107944);

	APlayerPawn_v2_C_ServerSetInvulnerability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.SpawnBulletPassByEffect
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (Parm, IsPlainOldData)
// float*                         BulletVelocity                 (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_v2_C::SpawnBulletPassByEffect(struct FVector* Location, float* BulletVelocity)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107941);

	APlayerPawn_v2_C_SpawnBulletPassByEffect_Params params;
	params.Location = Location;
	params.BulletVelocity = BulletVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.Client_HitReaction
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitLocation                    (Parm, IsPlainOldData)

void APlayerPawn_v2_C::Client_HitReaction(const struct FVector& HitLocation)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107939);

	APlayerPawn_v2_C_Client_HitReaction_Params params;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_v2_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107934);

	APlayerPawn_v2_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APlayerPawn_v2_C::BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107928);

	APlayerPawn_v2_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.NotHaveHealItemNotifyMessage
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  ItemName                       (ConstParm, Parm, OutParm, ReferenceParm)

void APlayerPawn_v2_C::NotHaveHealItemNotifyMessage(struct FText* ItemName)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107926);

	APlayerPawn_v2_C_NotHaveHealItemNotifyMessage_Params params;
	params.ItemName = ItemName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.NotHaveBoostItemNotifyMessage
// (Event, Public, BlueprintEvent)

void APlayerPawn_v2_C::NotHaveBoostItemNotifyMessage()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107925);

	APlayerPawn_v2_C_NotHaveBoostItemNotifyMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.ActivateADS_Debuff
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void APlayerPawn_v2_C::ActivateADS_Debuff()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107924);

	APlayerPawn_v2_C_ActivateADS_Debuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.Server_HandleVault
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 VaultStart                     (Parm, IsPlainOldData)
// struct FVector                 VaultApex                      (Parm, IsPlainOldData)
// struct FVector                 VaultApexAdditive              (Parm, IsPlainOldData)
// struct FVector                 VaultEnd                       (Parm, IsPlainOldData)
// bool                           IsClimbing                     (Parm, ZeroConstructor, IsPlainOldData)
// EVaultAnimType                 InVaultType                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           EndToFall                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          PlayerVelocity                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          DistanceFromObject             (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_v2_C::Server_HandleVault(const struct FVector& VaultStart, const struct FVector& VaultApex, const struct FVector& VaultApexAdditive, const struct FVector& VaultEnd, bool IsClimbing, EVaultAnimType InVaultType, bool EndToFall, float Direction, float PlayerVelocity, float DistanceFromObject)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107912);

	APlayerPawn_v2_C_Server_HandleVault_Params params;
	params.VaultStart = VaultStart;
	params.VaultApex = VaultApex;
	params.VaultApexAdditive = VaultApexAdditive;
	params.VaultEnd = VaultEnd;
	params.IsClimbing = IsClimbing;
	params.InVaultType = InVaultType;
	params.EndToFall = EndToFall;
	params.Direction = Direction;
	params.PlayerVelocity = PlayerVelocity;
	params.DistanceFromObject = DistanceFromObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.HandleVaultEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 InVaultEndVelocity             (Parm, IsPlainOldData)

void APlayerPawn_v2_C::HandleVaultEnd(const struct FVector& InVaultEndVelocity)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107910);

	APlayerPawn_v2_C_HandleVaultEnd_Params params;
	params.InVaultEndVelocity = InVaultEndVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.OnJumped
// (Event, Public, BlueprintEvent)

void APlayerPawn_v2_C::OnJumped()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107909);

	APlayerPawn_v2_C_OnJumped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.ServerFreeMove
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void APlayerPawn_v2_C::ServerFreeMove()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107908);

	APlayerPawn_v2_C_ServerFreeMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.Local_HandleVault
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 VaultStart                     (Parm, IsPlainOldData)
// struct FVector                 VaultApex                      (Parm, IsPlainOldData)
// struct FVector                 VaultApexAdditive              (Parm, IsPlainOldData)
// struct FVector                 VaultEnd                       (Parm, IsPlainOldData)
// bool                           IsClimbing                     (Parm, ZeroConstructor, IsPlainOldData)
// EVaultAnimType                 InVaultType                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           EndToFall                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          PlayerVelocity                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          DistanceFromObject             (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_v2_C::Local_HandleVault(const struct FVector& VaultStart, const struct FVector& VaultApex, const struct FVector& VaultApexAdditive, const struct FVector& VaultEnd, bool IsClimbing, EVaultAnimType InVaultType, bool EndToFall, float Direction, float PlayerVelocity, float DistanceFromObject)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107896);

	APlayerPawn_v2_C_Local_HandleVault_Params params;
	params.VaultStart = VaultStart;
	params.VaultApex = VaultApex;
	params.VaultApexAdditive = VaultApexAdditive;
	params.VaultEnd = VaultEnd;
	params.IsClimbing = IsClimbing;
	params.InVaultType = InVaultType;
	params.EndToFall = EndToFall;
	params.Direction = Direction;
	params.PlayerVelocity = PlayerVelocity;
	params.DistanceFromObject = DistanceFromObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.Client_HandleVault
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 VaultStart                     (Parm, IsPlainOldData)
// struct FVector                 VaultApex                      (Parm, IsPlainOldData)
// struct FVector                 VaultApexAdditive              (Parm, IsPlainOldData)
// struct FVector                 VaultEnd                       (Parm, IsPlainOldData)
// bool                           IsClimbing                     (Parm, ZeroConstructor, IsPlainOldData)
// EVaultAnimType                 InVaultType                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           EndToFall                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          PlayerVelocity                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          DistanceFromObject             (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_v2_C::Client_HandleVault(const struct FVector& VaultStart, const struct FVector& VaultApex, const struct FVector& VaultApexAdditive, const struct FVector& VaultEnd, bool IsClimbing, EVaultAnimType InVaultType, bool EndToFall, float Direction, float PlayerVelocity, float DistanceFromObject)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107884);

	APlayerPawn_v2_C_Client_HandleVault_Params params;
	params.VaultStart = VaultStart;
	params.VaultApex = VaultApex;
	params.VaultApexAdditive = VaultApexAdditive;
	params.VaultEnd = VaultEnd;
	params.IsClimbing = IsClimbing;
	params.InVaultType = InVaultType;
	params.EndToFall = EndToFall;
	params.Direction = Direction;
	params.PlayerVelocity = PlayerVelocity;
	params.DistanceFromObject = DistanceFromObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.HandleVaultEnd_CP
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector*                InVaultEndVelocity             (Parm, IsPlainOldData)

void APlayerPawn_v2_C::HandleVaultEnd_CP(struct FVector* InVaultEndVelocity)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107882);

	APlayerPawn_v2_C_HandleVaultEnd_CP_Params params;
	params.InVaultEndVelocity = InVaultEndVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessDBNO
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         GroggyHealthPercent            (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_v2_C::ProcessDBNO(float* GroggyHealthPercent)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107880);

	APlayerPawn_v2_C_ProcessDBNO_Params params;
	params.GroggyHealthPercent = GroggyHealthPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessRevive
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         RemainGroggyHealthPercent      (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_v2_C::ProcessRevive(float* RemainGroggyHealthPercent)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107878);

	APlayerPawn_v2_C_ProcessRevive_Params params;
	params.RemainGroggyHealthPercent = RemainGroggyHealthPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_GiveItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ItemRef                        (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_v2_C::Cheat_GiveItem(class UClass* ItemRef)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107876);

	APlayerPawn_v2_C_Cheat_GiveItem_Params params;
	params.ItemRef = ItemRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_Server_GiveItem
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ItemRef                        (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_v2_C::Cheat_Server_GiveItem(class UClass* ItemRef)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107874);

	APlayerPawn_v2_C_Cheat_Server_GiveItem_Params params;
	params.ItemRef = ItemRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_Give_Current_Ammo
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_v2_C::Cheat_Give_Current_Ammo()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107873);

	APlayerPawn_v2_C_Cheat_Give_Current_Ammo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_RevivePlayer
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_v2_C::Cheat_RevivePlayer()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107872);

	APlayerPawn_v2_C_Cheat_RevivePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.NotHaveThrowItemNotifyMessage
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  ItemName                       (ConstParm, Parm, OutParm, ReferenceParm)

void APlayerPawn_v2_C::NotHaveThrowItemNotifyMessage(struct FText* ItemName)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107870);

	APlayerPawn_v2_C_NotHaveThrowItemNotifyMessage_Params params;
	params.ItemName = ItemName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.Server_SetActiveRagdoll
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InActivate                     (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_v2_C::Server_SetActiveRagdoll(bool InActivate)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107868);

	APlayerPawn_v2_C_Server_SetActiveRagdoll_Params params;
	params.InActivate = InActivate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.Client_ResetMesh
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void APlayerPawn_v2_C::Client_ResetMesh()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107867);

	APlayerPawn_v2_C_Client_ResetMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.Server_HandleRagdollActor
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSpawn                         (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_v2_C::Server_HandleRagdollActor(bool bSpawn)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107865);

	APlayerPawn_v2_C_Server_HandleRagdollActor_Params params;
	params.bSpawn = bSpawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.ServerSetupWeapon
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void APlayerPawn_v2_C::ServerSetupWeapon()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107864);

	APlayerPawn_v2_C_ServerSetupWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.Server_setRagdollActorPos
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 InPos                          (Parm, IsPlainOldData)

void APlayerPawn_v2_C::Server_setRagdollActorPos(const struct FVector& InPos)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107862);

	APlayerPawn_v2_C_Server_setRagdollActorPos_Params params;
	params.InPos = InPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.SimulateHeadShot
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FTransform*             SpawnTransform                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FTransform*             ImpactTransform                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APlayerPawn_v2_C::SimulateHeadShot(struct FTransform* SpawnTransform, struct FTransform* ImpactTransform)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107859);

	APlayerPawn_v2_C_SimulateHeadShot_Params params;
	params.SpawnTransform = SpawnTransform;
	params.ImpactTransform = ImpactTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.Server_InitVaultCancel
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void APlayerPawn_v2_C::Server_InitVaultCancel()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107858);

	APlayerPawn_v2_C_Server_InitVaultCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.Client_InitVaultCancel
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void APlayerPawn_v2_C::Client_InitVaultCancel()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107857);

	APlayerPawn_v2_C_Client_InitVaultCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.HaveNotAnyHealItemNotifyMessage
// (Event, Public, BlueprintEvent)

void APlayerPawn_v2_C::HaveNotAnyHealItemNotifyMessage()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107856);

	APlayerPawn_v2_C_HaveNotAnyHealItemNotifyMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.RunVaultCheck_BP
// (Event, Public, BlueprintEvent)

void APlayerPawn_v2_C::RunVaultCheck_BP()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107855);

	APlayerPawn_v2_C_RunVaultCheck_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.RemoveCrosshair
// (Event, Public, BlueprintEvent)

void APlayerPawn_v2_C::RemoveCrosshair()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107854);

	APlayerPawn_v2_C_RemoveCrosshair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.HandleVaulting_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector*                ImpactLocation                 (Parm, IsPlainOldData)
// struct FVector*                CapsulePredictedLocation       (Parm, IsPlainOldData)
// struct FVector*                Normal2D                       (Parm, IsPlainOldData)
// struct FVector*                DirectionVecotor               (Parm, IsPlainOldData)
// bool*                          bForceVault                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         JumpDistance                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bBlockVault                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bBlockClimb                    (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_v2_C::HandleVaulting_BP(struct FVector* ImpactLocation, struct FVector* CapsulePredictedLocation, struct FVector* Normal2D, struct FVector* DirectionVecotor, bool* bForceVault, float* JumpDistance, bool* bBlockVault, bool* bBlockClimb)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107845);

	APlayerPawn_v2_C_HandleVaulting_BP_Params params;
	params.ImpactLocation = ImpactLocation;
	params.CapsulePredictedLocation = CapsulePredictedLocation;
	params.Normal2D = Normal2D;
	params.DirectionVecotor = DirectionVecotor;
	params.bForceVault = bForceVault;
	params.JumpDistance = JumpDistance;
	params.bBlockVault = bBlockVault;
	params.bBlockClimb = bBlockClimb;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.LocalHandleVault_CP
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector*                V_Start                        (Parm, IsPlainOldData)
// struct FVector*                V_Apex                         (Parm, IsPlainOldData)
// struct FVector*                V_ApexAdditive                 (Parm, IsPlainOldData)
// struct FVector*                V_End                          (Parm, IsPlainOldData)
// bool*                          bIsClimb                       (Parm, ZeroConstructor, IsPlainOldData)
// EVaultAnimType*                InVaultType                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEndToFall                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         PlayerVelocity                 (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DistanceFromObject             (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_v2_C::LocalHandleVault_CP(struct FVector* V_Start, struct FVector* V_Apex, struct FVector* V_ApexAdditive, struct FVector* V_End, bool* bIsClimb, EVaultAnimType* InVaultType, bool* bEndToFall, float* Direction, float* PlayerVelocity, float* DistanceFromObject)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107833);

	APlayerPawn_v2_C_LocalHandleVault_CP_Params params;
	params.V_Start = V_Start;
	params.V_Apex = V_Apex;
	params.V_ApexAdditive = V_ApexAdditive;
	params.V_End = V_End;
	params.bIsClimb = bIsClimb;
	params.InVaultType = InVaultType;
	params.bEndToFall = bEndToFall;
	params.Direction = Direction;
	params.PlayerVelocity = PlayerVelocity;
	params.DistanceFromObject = DistanceFromObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.OnWeaponChanged
// (Event, Protected, BlueprintEvent)

void APlayerPawn_v2_C::OnWeaponChanged()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107832);

	APlayerPawn_v2_C_OnWeaponChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.OnShowDynamicCrosshair
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bShow                          (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_v2_C::OnShowDynamicCrosshair(bool* bShow)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107830);

	APlayerPawn_v2_C_OnShowDynamicCrosshair_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.OnLanded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APlayerPawn_v2_C::OnLanded(struct FHitResult* Hit)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107828);

	APlayerPawn_v2_C_OnLanded_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APlayerPawn_v2_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107827);

	APlayerPawn_v2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.ToggleFreeMode
// (Event, Public, BlueprintEvent)

void APlayerPawn_v2_C::ToggleFreeMode()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107826);

	APlayerPawn_v2_C_ToggleFreeMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.ToggleInvincibility
// (Event, Public, BlueprintEvent)

void APlayerPawn_v2_C::ToggleInvincibility()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107825);

	APlayerPawn_v2_C_ToggleInvincibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_v2.PlayerPawn_v2_C.ExecuteUbergraph_PlayerPawn_v2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_v2_C::ExecuteUbergraph_PlayerPawn_v2(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(107393);

	APlayerPawn_v2_C_ExecuteUbergraph_PlayerPawn_v2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
