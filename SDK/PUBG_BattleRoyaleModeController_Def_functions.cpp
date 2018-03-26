// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BattleRoyaleModeController_Def_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BattleRoyaleModeController_Def.BattleRoyaleModeController_Def_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABattleRoyaleModeController_Def_C::UserConstructionScript()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(129576);

	ABattleRoyaleModeController_Def_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleRoyaleModeController_Def.BattleRoyaleModeController_Def_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABattleRoyaleModeController_Def_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(129575);

	ABattleRoyaleModeController_Def_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleRoyaleModeController_Def.BattleRoyaleModeController_Def_C.ExecuteUbergraph_BattleRoyaleModeController_Def
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABattleRoyaleModeController_Def_C::ExecuteUbergraph_BattleRoyaleModeController_Def(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(129572);

	ABattleRoyaleModeController_Def_C_ExecuteUbergraph_BattleRoyaleModeController_Def_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
