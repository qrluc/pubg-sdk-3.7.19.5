// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_Motorbike_04_SideCar_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.ProcessCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Motorbike_04_SideCar_C::ProcessCamera()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(120409);

	ABP_Motorbike_04_SideCar_C_ProcessCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.Process_FuelConsumption
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Motorbike_04_SideCar_C::Process_FuelConsumption()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(120396);

	ABP_Motorbike_04_SideCar_C_Process_FuelConsumption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.InitCache
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Motorbike_04_SideCar_C::InitCache()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(120393);

	ABP_Motorbike_04_SideCar_C_InitCache_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Motorbike_04_SideCar_C::UserConstructionScript()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(120392);

	ABP_Motorbike_04_SideCar_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Motorbike_04_SideCar_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(120391);

	ABP_Motorbike_04_SideCar_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Motorbike_04_SideCar_C::ReceiveTick(float* DeltaSeconds)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(120389);

	ABP_Motorbike_04_SideCar_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.InpAxisEvt_AirControlPitch_K2Node_InputAxisEvent_8
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Motorbike_04_SideCar_C::InpAxisEvt_AirControlPitch_K2Node_InputAxisEvent_8(float AxisValue)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(120387);

	ABP_Motorbike_04_SideCar_C_InpAxisEvt_AirControlPitch_K2Node_InputAxisEvent_8_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.InpAxisEvt_AirControlRoll_K2Node_InputAxisEvent_14
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Motorbike_04_SideCar_C::InpAxisEvt_AirControlRoll_K2Node_InputAxisEvent_14(float AxisValue)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(120385);

	ABP_Motorbike_04_SideCar_C_InpAxisEvt_AirControlRoll_K2Node_InputAxisEvent_14_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.OnDeath_Event_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (ConstParm, Parm, OutParm, ReferenceParm)
// class ATslPlayerState*         PlayerInstigator               (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Motorbike_04_SideCar_C::OnDeath_Event_1(float KillingDamage, const struct FDamageEvent& DamageEvent, class ATslPlayerState* PlayerInstigator, class AActor* DamageCauser)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(120380);

	ABP_Motorbike_04_SideCar_C_OnDeath_Event_1_Params params;
	params.KillingDamage = KillingDamage;
	params.DamageEvent = DamageEvent;
	params.PlayerInstigator = PlayerInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.ExecuteUbergraph_BP_Motorbike_04_SideCar
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Motorbike_04_SideCar_C::ExecuteUbergraph_BP_Motorbike_04_SideCar(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(120360);

	ABP_Motorbike_04_SideCar_C_ExecuteUbergraph_BP_Motorbike_04_SideCar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
