#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_UiHelperFunctionsBp_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass UiHelperFunctionsBp.UiHelperFunctionsBp_C
// 0x0000 (0x0028 - 0x0028)
class UUiHelperFunctionsBp_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x6b618965);
		return ptr;
	}


	static void IsSelfputMode_Gamepad(class UUserWidget* Widget, class UObject* __WorldContext, bool* bIsSelfPut);
	static void GetSelfPutAttachment(class UUserWidget* Widget, class UObject* __WorldContext, class UAttachableItem** GamepadadSelectedAttachableItem);
	static void CancelSelfAttachmentPutMode(class UUserWidget* Widget, class UObject* __WorldContext);
	static void IsSelfAttachmentPutMode(class UUserWidget* Widget, class UObject* __WorldContext, bool* bResult);
	static void GetInventoryWidget(class UUserWidget* Widget, class UObject* __WorldContext, class UInventoryWidget_C** InventoryWidget);
	static void InventoryFocusingColor(class UObject* __WorldContext, struct FLinearColor* NewParam);
	static void IsXBoxOnePlatform(class UObject* __WorldContext, bool* NewParam);
	static void GetCharacterLook(class UUserWidget* Widget, class UObject* __WorldContext, struct FVector* Look);
	static void GetCharacterPosititon(class UUserWidget* Widget, class UObject* __WorldContext, struct FVector* Position);
	static void GetCharacterAngle(class UUserWidget* Widget, class UObject* __WorldContext, float* Angle);
	static void GetBluezoneWarningTimeBp(class UObject* WorldContextObject, class UObject* __WorldContext, float* WarningTime);
	static void GetBluezoneReleaseTimeBp(class UObject* WorldContextObject, class UObject* __WorldContext, float* ReleaseTime);
	static void GetDistanceColor(float Distance, class UObject* __WorldContext, struct FLinearColor* Color);
	static void IsLastSpectatorTeam(class UUserWidget* Widget, class ATslCharacter* Character, class UObject* __WorldContext, bool* bIsTeam);
	static void GetTeamColor(class UObject* __WorldContext, struct FLinearColor* Color);
	static void IsSpectatorTeam(class UUserWidget* Widget, class ATslCharacter* Character, class UObject* __WorldContext, bool* bIsTeam);
	static void GetStateByTeam(class ATeam* Team, class UObject* __WorldContext, int* State);
	static void GetStateByCharacter(class ATslCharacter* Character, class UObject* __WorldContext, int* OutState);
	static void GetSpectatorColor(bool bISpectator, class UObject* __WorldContext, struct FLinearColor* Color);
	static void GetCharacterStateIcon(int State, class UObject* __WorldContext, class UTexture2D** NewParam);
	static void GetTslCharacters_Bp(class UObject* WorldContextObject, class UObject* __WorldContext, TArray<class ATslCharacter*>* OutActors);
	static void NotifyWidgetShowed(class UUserWidget* Widget, const struct FString& WidgetName, bool bShow, class UObject* __WorldContext);
	static void GetTeamMarkerColor(int MemberNumber, class UObject* __WorldContext, struct FLinearColor* NewParam);
	static void CreateAndSetMaterial(class UWidget* Widget, class UMaterialInstance* Material, class UObject* __WorldContext, class UMaterialInstanceDynamic** DynamicMaterial);
	static void GetDynamicMaterial(class UWidget* Widget, class UObject* __WorldContext, class UMaterialInstanceDynamic** DynamicMaterial);
	static TArray<TScriptInterface<class USlotInterface>> SortItemBp(bool bSort, class UObject* __WorldContext, TArray<TScriptInterface<class USlotInterface>>* InItemList);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
