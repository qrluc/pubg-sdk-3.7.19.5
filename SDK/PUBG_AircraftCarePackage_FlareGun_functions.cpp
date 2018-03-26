// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_AircraftCarePackage_FlareGun_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AircraftCarePackage_FlareGun.AircraftCarePackage_FlareGun_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAircraftCarePackage_FlareGun_C::UserConstructionScript()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(110197);

	AAircraftCarePackage_FlareGun_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AircraftCarePackage_FlareGun.AircraftCarePackage_FlareGun_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAircraftCarePackage_FlareGun_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(110196);

	AAircraftCarePackage_FlareGun_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AircraftCarePackage_FlareGun.AircraftCarePackage_FlareGun_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AAircraftCarePackage_FlareGun_C::ReceiveTick(float* DeltaSeconds)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(110194);

	AAircraftCarePackage_FlareGun_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AircraftCarePackage_FlareGun.AircraftCarePackage_FlareGun_C.ExecuteUbergraph_AircraftCarePackage_FlareGun
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AAircraftCarePackage_FlareGun_C::ExecuteUbergraph_AircraftCarePackage_FlareGun(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(110190);

	AAircraftCarePackage_FlareGun_C_ExecuteUbergraph_AircraftCarePackage_FlareGun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
