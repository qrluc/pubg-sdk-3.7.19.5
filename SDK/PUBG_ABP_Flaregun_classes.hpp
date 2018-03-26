#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Flaregun_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Flaregun.ABP_Flaregun_C
// 0x00E8 (0x0538 - 0x0450)
class UABP_Flaregun_C : public UTslGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E6EC57BE4D86D306B4BE1096BAB11152;      // 0x0458(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_45E95D194E4914DA3736EF873FED6CE5;// 0x04A0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_39BD47FB48CFB1DB82DBA69EEDB69EF1;      // 0x04D8(0x0060)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xa42a8154);
		return ptr;
	}


	void BlueprintInitializeAnimation();
	void WeaponFire_Event_1();
	void Reload2_Event_1();
	void ExecuteUbergraph_ABP_Flaregun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
