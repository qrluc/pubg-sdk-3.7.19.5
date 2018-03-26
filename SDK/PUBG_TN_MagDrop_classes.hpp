#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_TN_MagDrop_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TN_MagDrop.TN_MagDrop_C
// 0x0008 (0x03B8 - 0x03B0)
class ATN_MagDrop_C : public AActor
{
public:
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x31d208a7);
		return ptr;
	}


	void SetSM(class UStaticMesh* NewSM, const struct FVector& CharacterVelocity, const struct FRotator& CharacterRotation, const struct FVector& LinearVelocity, const struct FVector& AngularVelocity);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
