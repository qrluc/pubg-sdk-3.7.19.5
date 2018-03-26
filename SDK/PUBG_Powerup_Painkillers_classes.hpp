#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Powerup_Painkillers_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Powerup_Painkillers.Powerup_Painkillers_C
// 0x0010 (0x0408 - 0x03F8)
class APowerup_Painkillers_C : public APowerup_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F8(0x0008) (Transient, DuplicateTransient)
	struct FTimerHandle                                Timer2Handle;                                             // 0x0400(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x646c4bf9);
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void CustomEvent_1();
	void ReceiveDestroyed();
	void ExecuteUbergraph_Powerup_Painkillers(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
