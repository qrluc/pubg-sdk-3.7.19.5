#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Item_JerryCan_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Item_JerryCan.Item_JerryCan_C
// 0x0008 (0x0208 - 0x0200)
class UItem_JerryCan_C : public UCastableItem
{
public:
	bool                                               bIsProcessing;                                            // 0x0200(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0201(0x0003) MISSED OFFSET
	float                                              Fuel;                                                     // 0x0204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x6ee54835);
		return ptr;
	}


	void SendSystemMessage(class ATslCharacter* PlayerController, const struct FText& Message);
	bool IsCastable(class ATslCharacter** Character);
	void Refule(class APawn* Vehicle);
	bool UseBy(class ATslCharacter** Character);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
