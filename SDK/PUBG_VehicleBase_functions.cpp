// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_VehicleBase_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VehicleBase.VehicleBase_C.TickIndicators
// (Public, BlueprintCallable, BlueprintEvent)

void AVehicleBase_C::TickIndicators()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(133407);

	AVehicleBase_C_TickIndicators_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.TickDynamicCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AVehicleBase_C::TickDynamicCamera()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(133377);

	AVehicleBase_C_TickDynamicCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.TickBrakeSoundTest
// (Public, BlueprintCallable, BlueprintEvent)

void AVehicleBase_C::TickBrakeSoundTest()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(133369);

	AVehicleBase_C_TickBrakeSoundTest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.TickThrottleSoundTest
// (Public, BlueprintCallable, BlueprintEvent)

void AVehicleBase_C::TickThrottleSoundTest()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(133363);

	AVehicleBase_C_TickThrottleSoundTest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.TickBoostSoundTest
// (Public, BlueprintCallable, BlueprintEvent)

void AVehicleBase_C::TickBoostSoundTest()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(120037);

	AVehicleBase_C_TickBoostSoundTest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.TickFuelConsumption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AVehicleBase_C::TickFuelConsumption(float DeltaSeconds)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(120021);

	AVehicleBase_C_TickFuelConsumption_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.TickBasicInfoCaching
// (Public, BlueprintCallable, BlueprintEvent)

void AVehicleBase_C::TickBasicInfoCaching()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(120014);

	AVehicleBase_C_TickBasicInfoCaching_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.TickWheelCaching
// (Public, BlueprintCallable, BlueprintEvent)

void AVehicleBase_C::TickWheelCaching()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(119945);

	AVehicleBase_C_TickWheelCaching_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.TickWheelSound
// (Public, BlueprintCallable, BlueprintEvent)

void AVehicleBase_C::TickWheelSound()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(119937);

	AVehicleBase_C_TickWheelSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.OnRep_IsBrakeEngaged
// (BlueprintCallable, BlueprintEvent)

void AVehicleBase_C::OnRep_IsBrakeEngaged()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(119933);

	AVehicleBase_C_OnRep_IsBrakeEngaged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.OnRep_IsLightsOn
// (BlueprintCallable, BlueprintEvent)

void AVehicleBase_C::OnRep_IsLightsOn()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(119926);

	AVehicleBase_C_OnRep_IsLightsOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AVehicleBase_C::UserConstructionScript()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(119924);

	AVehicleBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AVehicleBase_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(119923);

	AVehicleBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_8
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void AVehicleBase_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_8(float AxisValue)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(119921);

	AVehicleBase_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_8_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_16
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void AVehicleBase_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_16(float AxisValue)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(119919);

	AVehicleBase_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_16_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.TurnOffLight
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (ConstParm, Parm, OutParm, ReferenceParm)
// class ATslPlayerState*         PlayerInstigator               (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AVehicleBase_C::TurnOffLight(float KillingDamage, const struct FDamageEvent& DamageEvent, class ATslPlayerState* PlayerInstigator, class AActor* DamageCauser)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(119914);

	AVehicleBase_C_TurnOffLight_Params params;
	params.KillingDamage = KillingDamage;
	params.DamageEvent = DamageEvent;
	params.PlayerInstigator = PlayerInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.EventFuelConsumption
// (BlueprintCallable, BlueprintEvent)

void AVehicleBase_C::EventFuelConsumption()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(119913);

	AVehicleBase_C_EventFuelConsumption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.BrakeLampOff
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void AVehicleBase_C::BrakeLampOff()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(119912);

	AVehicleBase_C_BrakeLampOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.BrakeLampOn
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void AVehicleBase_C::BrakeLampOn()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(119911);

	AVehicleBase_C_BrakeLampOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.ToggleLights
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void AVehicleBase_C::ToggleLights()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(119910);

	AVehicleBase_C_ToggleLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AVehicleBase_C::ReceiveTick(float* DeltaSeconds)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(119908);

	AVehicleBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.NotifyHandbrake
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bPressed                       (Parm, ZeroConstructor, IsPlainOldData)

void AVehicleBase_C::NotifyHandbrake(bool* bPressed)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(119906);

	AVehicleBase_C_NotifyHandbrake_Params params;
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.ExecuteUbergraph_VehicleBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AVehicleBase_C::ExecuteUbergraph_VehicleBase(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(119876);

	AVehicleBase_C_ExecuteUbergraph_VehicleBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
