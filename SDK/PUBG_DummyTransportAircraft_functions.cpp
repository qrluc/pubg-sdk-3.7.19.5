// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_DummyTransportAircraft_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DummyTransportAircraft.DummyTransportAircraft_C.SetAllCloudParticleActivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (Parm, ZeroConstructor, IsPlainOldData)

void ADummyTransportAircraft_C::SetAllCloudParticleActivate(bool Active)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(145382);

	ADummyTransportAircraft_C_SetAllCloudParticleActivate_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DummyTransportAircraft.DummyTransportAircraft_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADummyTransportAircraft_C::UserConstructionScript()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(145381);

	ADummyTransportAircraft_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DummyTransportAircraft.DummyTransportAircraft_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADummyTransportAircraft_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(145380);

	ADummyTransportAircraft_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DummyTransportAircraft.DummyTransportAircraft_C.OnLocalPlayerRide
// (Event, Public, BlueprintEvent)

void ADummyTransportAircraft_C::OnLocalPlayerRide()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(145379);

	ADummyTransportAircraft_C_OnLocalPlayerRide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DummyTransportAircraft.DummyTransportAircraft_C.OnLocalPlayerLeave
// (Event, Public, BlueprintEvent)

void ADummyTransportAircraft_C::OnLocalPlayerLeave()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(145378);

	ADummyTransportAircraft_C_OnLocalPlayerLeave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DummyTransportAircraft.DummyTransportAircraft_C.ExecuteUbergraph_DummyTransportAircraft
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADummyTransportAircraft_C::ExecuteUbergraph_DummyTransportAircraft(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(145376);

	ADummyTransportAircraft_C_ExecuteUbergraph_DummyTransportAircraft_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
