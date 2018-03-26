// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Item_JerryCan_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Item_JerryCan.Item_JerryCan_C.SendSystemMessage
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ATslCharacter*           PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Message                        (Parm)

void UItem_JerryCan_C::SendSystemMessage(class ATslCharacter* PlayerController, const struct FText& Message)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(113375);

	UItem_JerryCan_C_SendSystemMessage_Params params;
	params.PlayerController = PlayerController;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_JerryCan.Item_JerryCan_C.IsCastable
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ATslCharacter**          Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItem_JerryCan_C::IsCastable(class ATslCharacter** Character)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(113366);

	UItem_JerryCan_C_IsCastable_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Item_JerryCan.Item_JerryCan_C.Refule
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Vehicle                        (Parm, ZeroConstructor, IsPlainOldData)

void UItem_JerryCan_C::Refule(class APawn* Vehicle)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(113362);

	UItem_JerryCan_C_Refule_Params params;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_JerryCan.Item_JerryCan_C.UseBy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATslCharacter**          Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItem_JerryCan_C::UseBy(class ATslCharacter** Character)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(113356);

	UItem_JerryCan_C_UseBy_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
