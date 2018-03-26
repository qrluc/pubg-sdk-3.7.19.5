#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Powerup_AidKit_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Powerup_AidKit.Powerup_AidKit_C
// 0x0010 (0x0408 - 0x03F8)
class APowerup_AidKit_C : public APowerup_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F8(0x0008) (Transient, DuplicateTransient)
	struct FTimerHandle                                Timer2Handle;                                             // 0x0400(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xcd7d3def);
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void CustomEvent_1();
	void ExecuteUbergraph_Powerup_AidKit(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
