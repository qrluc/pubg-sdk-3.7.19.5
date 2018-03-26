// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_TN_MagDrop_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TN_MagDrop.TN_MagDrop_C.SetSM
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*             NewSM                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CharacterVelocity              (Parm, IsPlainOldData)
// struct FRotator                CharacterRotation              (Parm, IsPlainOldData)
// struct FVector                 LinearVelocity                 (Parm, IsPlainOldData)
// struct FVector                 AngularVelocity                (Parm, IsPlainOldData)

void ATN_MagDrop_C::SetSM(class UStaticMesh* NewSM, const struct FVector& CharacterVelocity, const struct FRotator& CharacterRotation, const struct FVector& LinearVelocity, const struct FVector& AngularVelocity)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(134454);

	ATN_MagDrop_C_SetSM_Params params;
	params.NewSM = NewSM;
	params.CharacterVelocity = CharacterVelocity;
	params.CharacterRotation = CharacterRotation;
	params.LinearVelocity = LinearVelocity;
	params.AngularVelocity = AngularVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TN_MagDrop.TN_MagDrop_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATN_MagDrop_C::UserConstructionScript()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(134453);

	ATN_MagDrop_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
