#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_GunImpact_Arrow_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GunImpact_Arrow.GunImpact_Arrow_C
// 0x0008 (0x0768 - 0x0760)
class AGunImpact_Arrow_C : public ATslImpactEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0760(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x1ea177f5);
		return ptr;
	}


	void CheckParentValidity();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void WakeUp_BP(struct FTransform* InitialTransform);
	void PutToSleep_BP();
	void ExecuteUbergraph_GunImpact_Arrow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
