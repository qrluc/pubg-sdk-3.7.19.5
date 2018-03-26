#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Weapon_Vector_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Weapon_Vector.ABP_Weapon_Vector_C
// 0x00E8 (0x0538 - 0x0450)
class UABP_Weapon_Vector_C : public UTslGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_98C7A344460FDE075E400EB28D4544FA;      // 0x0458(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_114AEB214281FB5156E3FD8767C271ED;// 0x04A0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D07B38A14E3F6FAEB9E92897AA81319B;      // 0x04D8(0x0060)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x56809b00);
		return ptr;
	}


	void BlueprintInitializeAnimation();
	void WeaponFire_Event_1();
	void ExecuteUbergraph_ABP_Weapon_Vector(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
