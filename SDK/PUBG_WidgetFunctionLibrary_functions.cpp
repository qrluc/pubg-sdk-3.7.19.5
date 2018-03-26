// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_WidgetFunctionLibrary_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WidgetFunctionLibrary.WidgetFunctionLibrary_C.GetOwningShooterCharacter
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             UserWidget                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// class ATslCharacter*           ShooterCharacter               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidgetFunctionLibrary_C::GetOwningShooterCharacter(class UUserWidget* UserWidget, class UObject* __WorldContext, class ATslCharacter** ShooterCharacter)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(62807);

	UWidgetFunctionLibrary_C_GetOwningShooterCharacter_Params params;
	params.UserWidget = UserWidget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShooterCharacter != nullptr)
		*ShooterCharacter = params.ShooterCharacter;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
