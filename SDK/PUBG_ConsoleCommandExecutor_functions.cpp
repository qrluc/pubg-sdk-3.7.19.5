// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ConsoleCommandExecutor_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConsoleCommandExecutor.ConsoleCommandExecutor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AConsoleCommandExecutor_C::UserConstructionScript()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(142039);

	AConsoleCommandExecutor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleCommandExecutor.ConsoleCommandExecutor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AConsoleCommandExecutor_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(142038);

	AConsoleCommandExecutor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleCommandExecutor.ConsoleCommandExecutor_C.ExecuteUbergraph_ConsoleCommandExecutor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AConsoleCommandExecutor_C::ExecuteUbergraph_ConsoleCommandExecutor(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(142029);

	AConsoleCommandExecutor_C_ExecuteUbergraph_ConsoleCommandExecutor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
