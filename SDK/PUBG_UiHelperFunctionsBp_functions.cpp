// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_UiHelperFunctionsBp_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.IsSelfputMode_Gamepad
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsSelfPut                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUiHelperFunctionsBp_C::IsSelfputMode_Gamepad(class UUserWidget* Widget, class UObject* __WorldContext, bool* bIsSelfPut)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(74703);

	UUiHelperFunctionsBp_C_IsSelfputMode_Gamepad_Params params;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsSelfPut != nullptr)
		*bIsSelfPut = params.bIsSelfPut;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetSelfPutAttachment
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// class UAttachableItem*         GamepadadSelectedAttachableItem (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUiHelperFunctionsBp_C::GetSelfPutAttachment(class UUserWidget* Widget, class UObject* __WorldContext, class UAttachableItem** GamepadadSelectedAttachableItem)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(74697);

	UUiHelperFunctionsBp_C_GetSelfPutAttachment_Params params;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GamepadadSelectedAttachableItem != nullptr)
		*GamepadadSelectedAttachableItem = params.GamepadadSelectedAttachableItem;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.CancelSelfAttachmentPutMode
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UUiHelperFunctionsBp_C::CancelSelfAttachmentPutMode(class UUserWidget* Widget, class UObject* __WorldContext)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(74692);

	UUiHelperFunctionsBp_C_CancelSelfAttachmentPutMode_Params params;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.IsSelfAttachmentPutMode
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUiHelperFunctionsBp_C::IsSelfAttachmentPutMode(class UUserWidget* Widget, class UObject* __WorldContext, bool* bResult)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(74683);

	UUiHelperFunctionsBp_C_IsSelfAttachmentPutMode_Params params;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetInventoryWidget
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryWidget_C*      InventoryWidget                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUiHelperFunctionsBp_C::GetInventoryWidget(class UUserWidget* Widget, class UObject* __WorldContext, class UInventoryWidget_C** InventoryWidget)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(74674);

	UUiHelperFunctionsBp_C_GetInventoryWidget_Params params;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InventoryWidget != nullptr)
		*InventoryWidget = params.InventoryWidget;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.InventoryFocusingColor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            NewParam                       (Parm, OutParm, IsPlainOldData)

void UUiHelperFunctionsBp_C::InventoryFocusingColor(class UObject* __WorldContext, struct FLinearColor* NewParam)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(74671);

	UUiHelperFunctionsBp_C_InventoryFocusingColor_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.IsXBoxOnePlatform
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUiHelperFunctionsBp_C::IsXBoxOnePlatform(class UObject* __WorldContext, bool* NewParam)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(74666);

	UUiHelperFunctionsBp_C_IsXBoxOnePlatform_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetCharacterLook
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Look                           (Parm, OutParm, IsPlainOldData)

void UUiHelperFunctionsBp_C::GetCharacterLook(class UUserWidget* Widget, class UObject* __WorldContext, struct FVector* Look)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(74643);

	UUiHelperFunctionsBp_C_GetCharacterLook_Params params;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Look != nullptr)
		*Look = params.Look;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetCharacterPosititon
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Position                       (Parm, OutParm, IsPlainOldData)

void UUiHelperFunctionsBp_C::GetCharacterPosititon(class UUserWidget* Widget, class UObject* __WorldContext, struct FVector* Position)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(74634);

	UUiHelperFunctionsBp_C_GetCharacterPosititon_Params params;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Position != nullptr)
		*Position = params.Position;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetCharacterAngle
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          Angle                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUiHelperFunctionsBp_C::GetCharacterAngle(class UUserWidget* Widget, class UObject* __WorldContext, float* Angle)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(74617);

	UUiHelperFunctionsBp_C_GetCharacterAngle_Params params;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Angle != nullptr)
		*Angle = params.Angle;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetBluezoneWarningTimeBp
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          WarningTime                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUiHelperFunctionsBp_C::GetBluezoneWarningTimeBp(class UObject* WorldContextObject, class UObject* __WorldContext, float* WarningTime)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(74610);

	UUiHelperFunctionsBp_C_GetBluezoneWarningTimeBp_Params params;
	params.WorldContextObject = WorldContextObject;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WarningTime != nullptr)
		*WarningTime = params.WarningTime;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetBluezoneReleaseTimeBp
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReleaseTime                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUiHelperFunctionsBp_C::GetBluezoneReleaseTimeBp(class UObject* WorldContextObject, class UObject* __WorldContext, float* ReleaseTime)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(74603);

	UUiHelperFunctionsBp_C_GetBluezoneReleaseTimeBp_Params params;
	params.WorldContextObject = WorldContextObject;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReleaseTime != nullptr)
		*ReleaseTime = params.ReleaseTime;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetDistanceColor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, OutParm, IsPlainOldData)

void UUiHelperFunctionsBp_C::GetDistanceColor(float Distance, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(74594);

	UUiHelperFunctionsBp_C_GetDistanceColor_Params params;
	params.Distance = Distance;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.IsLastSpectatorTeam
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, IsPlainOldData)
// class ATslCharacter*           Character                      (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsTeam                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUiHelperFunctionsBp_C::IsLastSpectatorTeam(class UUserWidget* Widget, class ATslCharacter* Character, class UObject* __WorldContext, bool* bIsTeam)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(74581);

	UUiHelperFunctionsBp_C_IsLastSpectatorTeam_Params params;
	params.Widget = Widget;
	params.Character = Character;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsTeam != nullptr)
		*bIsTeam = params.bIsTeam;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetTeamColor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, OutParm, IsPlainOldData)

void UUiHelperFunctionsBp_C::GetTeamColor(class UObject* __WorldContext, struct FLinearColor* Color)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(74578);

	UUiHelperFunctionsBp_C_GetTeamColor_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.IsSpectatorTeam
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, IsPlainOldData)
// class ATslCharacter*           Character                      (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsTeam                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUiHelperFunctionsBp_C::IsSpectatorTeam(class UUserWidget* Widget, class ATslCharacter* Character, class UObject* __WorldContext, bool* bIsTeam)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(74565);

	UUiHelperFunctionsBp_C_IsSpectatorTeam_Params params;
	params.Widget = Widget;
	params.Character = Character;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsTeam != nullptr)
		*bIsTeam = params.bIsTeam;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetStateByTeam
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ATeam*                   Team                           (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            State                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUiHelperFunctionsBp_C::GetStateByTeam(class ATeam* Team, class UObject* __WorldContext, int* State)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(74555);

	UUiHelperFunctionsBp_C_GetStateByTeam_Params params;
	params.Team = Team;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetStateByCharacter
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ATslCharacter*           Character                      (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            OutState                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUiHelperFunctionsBp_C::GetStateByCharacter(class ATslCharacter* Character, class UObject* __WorldContext, int* OutState)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(74543);

	UUiHelperFunctionsBp_C_GetStateByCharacter_Params params;
	params.Character = Character;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutState != nullptr)
		*OutState = params.OutState;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetSpectatorColor
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bISpectator                    (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, OutParm, IsPlainOldData)

void UUiHelperFunctionsBp_C::GetSpectatorColor(bool bISpectator, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(74538);

	UUiHelperFunctionsBp_C_GetSpectatorColor_Params params;
	params.bISpectator = bISpectator;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetCharacterStateIcon
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            State                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUiHelperFunctionsBp_C::GetCharacterStateIcon(int State, class UObject* __WorldContext, class UTexture2D** NewParam)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(74533);

	UUiHelperFunctionsBp_C_GetCharacterStateIcon_Params params;
	params.State = State;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetTslCharacters_Bp
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ATslCharacter*>   OutActors                      (Parm, OutParm, ZeroConstructor)

void UUiHelperFunctionsBp_C::GetTslCharacters_Bp(class UObject* WorldContextObject, class UObject* __WorldContext, TArray<class ATslCharacter*>* OutActors)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(74526);

	UUiHelperFunctionsBp_C_GetTslCharacters_Bp_Params params;
	params.WorldContextObject = WorldContextObject;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.NotifyWidgetShowed
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 WidgetName                     (Parm, ZeroConstructor)
// bool                           bShow                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UUiHelperFunctionsBp_C::NotifyWidgetShowed(class UUserWidget* Widget, const struct FString& WidgetName, bool bShow, class UObject* __WorldContext)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(74521);

	UUiHelperFunctionsBp_C_NotifyWidgetShowed_Params params;
	params.Widget = Widget;
	params.WidgetName = WidgetName;
	params.bShow = bShow;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetTeamMarkerColor
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            MemberNumber                   (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            NewParam                       (Parm, OutParm, IsPlainOldData)

void UUiHelperFunctionsBp_C::GetTeamMarkerColor(int MemberNumber, class UObject* __WorldContext, struct FLinearColor* NewParam)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(61822);

	UUiHelperFunctionsBp_C_GetTeamMarkerColor_Params params;
	params.MemberNumber = MemberNumber;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.CreateAndSetMaterial
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstance*       Material                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* DynamicMaterial                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUiHelperFunctionsBp_C::CreateAndSetMaterial(class UWidget* Widget, class UMaterialInstance* Material, class UObject* __WorldContext, class UMaterialInstanceDynamic** DynamicMaterial)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(61811);

	UUiHelperFunctionsBp_C_CreateAndSetMaterial_Params params;
	params.Widget = Widget;
	params.Material = Material;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DynamicMaterial != nullptr)
		*DynamicMaterial = params.DynamicMaterial;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetDynamicMaterial
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* DynamicMaterial                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUiHelperFunctionsBp_C::GetDynamicMaterial(class UWidget* Widget, class UObject* __WorldContext, class UMaterialInstanceDynamic** DynamicMaterial)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(61801);

	UUiHelperFunctionsBp_C_GetDynamicMaterial_Params params;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DynamicMaterial != nullptr)
		*DynamicMaterial = params.DynamicMaterial;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.SortItemBp
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<TScriptInterface<class USlotInterface>> InItemList                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bSort                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<TScriptInterface<class USlotInterface>> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<TScriptInterface<class USlotInterface>> UUiHelperFunctionsBp_C::SortItemBp(bool bSort, class UObject* __WorldContext, TArray<TScriptInterface<class USlotInterface>>* InItemList)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(61792);

	UUiHelperFunctionsBp_C_SortItemBp_Params params;
	params.bSort = bSort;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InItemList != nullptr)
		*InItemList = params.InItemList;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
