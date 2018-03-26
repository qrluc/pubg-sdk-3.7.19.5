// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_WeapFlareGun_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapFlareGun.WeapFlareGun_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWeapFlareGun_C::UserConstructionScript()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(123079);

	AWeapFlareGun_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFlareGun.WeapFlareGun_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWeapFlareGun_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(123078);

	AWeapFlareGun_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFlareGun.WeapFlareGun_C.SimulateFire_BP
// (Event, Public, BlueprintEvent)

void AWeapFlareGun_C::SimulateFire_BP()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(123077);

	AWeapFlareGun_C_SimulateFire_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFlareGun.WeapFlareGun_C.Server_ShootFlare
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Loc                            (Parm, IsPlainOldData)
// struct FRotator                Rot                            (Parm, IsPlainOldData)

void AWeapFlareGun_C::Server_ShootFlare(const struct FVector& Loc, const struct FRotator& Rot)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(123074);

	AWeapFlareGun_C_Server_ShootFlare_Params params;
	params.Loc = Loc;
	params.Rot = Rot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFlareGun.WeapFlareGun_C.ExecuteUbergraph_WeapFlareGun
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFlareGun_C::ExecuteUbergraph_WeapFlareGun(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(123062);

	AWeapFlareGun_C_ExecuteUbergraph_WeapFlareGun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
