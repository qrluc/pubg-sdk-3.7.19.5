#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ListBaseGroupWidget_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ListBaseGroupWidget.ListBaseGroupWidget_C
// 0x0008 (0x0248 - 0x0240)
class UListBaseGroupWidget_C : public UUserWidget
{
public:
	class UVerticalBox*                                List;                                                     // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xa913fe95);
		return ptr;
	}


	void GetChilderenCount(int* Count);
	void AddChild(class UWidget** Content);
	void Clear();
	void On_List_Prepass_1(class UWidget* BoundWidget);
	void AddCategoryGroup(class UCategoryGroupWidget_C* CategoryGroup);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
