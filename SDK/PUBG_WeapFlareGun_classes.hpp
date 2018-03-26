#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_WeapFlareGun_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapFlareGun.WeapFlareGun_C
// 0x0008 (0x0BC0 - 0x0BB8)
class AWeapFlareGun_C : public ATslWeapon_Gun_Projectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0BB8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x9f855bd7);
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SimulateFire_BP();
	void Server_ShootFlare(const struct FVector& Loc, const struct FRotator& Rot);
	void ExecuteUbergraph_WeapFlareGun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
