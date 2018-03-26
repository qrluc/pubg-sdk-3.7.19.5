#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_PoisonFogPrefab_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PoisonFogPrefab.PoisonFogPrefab_C
// 0x0058 (0x0410 - 0x03B8)
class APoisonFogPrefab_C : public APoisonEffectBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B8(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Toxic_Cylinder_outer_Depth;                               // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Toxic_Cylinder_outer;                                     // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Toxic_Cylinder_Inner_Depth;                               // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Toxic_Cylinder_Inner;                                     // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              _____0_Intensity_994F1CA04776742938FE4BBD159E80E3;        // 0x03E0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    _____0__Direction_994F1CA04776742938FE4BBD159E80E3;       // 0x03E4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03E5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Unknown8946_1;                                            // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Center;                                                   // 0x03F0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Radius;                                                   // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class APostProcessVolume*                          PPVolume;                                                 // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UMaterial*                                   PPMaterial;                                               // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x3a320ad5);
		return ptr;
	}


	void UserConstructionScript();
	void Unknown5634();
	void Unknown9314();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void SetRadius(float* Radius);
	void SetCenter(struct FVector* Center);
	void ExecuteUbergraph_PoisonFogPrefab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
