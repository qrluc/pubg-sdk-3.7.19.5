// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_RedZoneController_Def_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RedZoneController_Def.RedZoneController_Def_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ARedZoneController_Def_C::UserConstructionScript()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(129551);

	ARedZoneController_Def_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedZoneController_Def.RedZoneController_Def_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ARedZoneController_Def_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(129550);

	ARedZoneController_Def_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedZoneController_Def.RedZoneController_Def_C.ExecuteUbergraph_RedZoneController_Def
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARedZoneController_Def_C::ExecuteUbergraph_RedZoneController_Def(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(129547);

	ARedZoneController_Def_C_ExecuteUbergraph_RedZoneController_Def_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
