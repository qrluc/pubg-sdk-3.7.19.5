#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Weapon_Saiga_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Weapon_Saiga.ABP_Weapon_Saiga_C
// 0x01A8 (0x05F8 - 0x0450)
class UABP_Weapon_Saiga_C : public UTslGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_7C2D6C3B459FAEFC5E9CA4BE205E510A;      // 0x0458(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_2CFAC9B74031412DC01F24A4EE350778;// 0x04A0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_CC5186664712D4C59F3AABA80EC8B0DE;      // 0x04D8(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B80D3FAE4774937A895219B5450320E0;      // 0x0538(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_FACECDA04E385A9FC12474ACC63D5CE6;      // 0x0598(0x0060)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xa36d6208);
		return ptr;
	}


	void BlueprintInitializeAnimation();
	void WeaponFire_Event_1();
	void Reload1_Event_1();
	void Reload2_Event_1();
	void CancelReload_Event_1();
	void ExecuteUbergraph_ABP_Weapon_Saiga(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
