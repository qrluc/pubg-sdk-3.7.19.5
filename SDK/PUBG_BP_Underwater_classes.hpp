#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_Underwater_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Underwater.BP_Underwater_C
// 0x0089 (0x0439 - 0x03B0)
class ABP_Underwater_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (Transient, DuplicateTransient)
	class UDirectionalLightComponent*                  CausticsDirectionalLight;                                 // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBillboardComponent*                         Billboard;                                                // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WetLensBlurFade_Blur_B2C70C3E4A4917173B3F64B8E8588721;    // 0x03C8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    WetLensBlurFade__Direction_B2C70C3E4A4917173B3F64B8E8588721;// 0x03CC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03CD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          WetLensBlurFade;                                          // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WetLensDistortFade_Distort_DB03BB894275DA67C2B7AE9C6381C460;// 0x03D8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    WetLensDistortFade__Direction_DB03BB894275DA67C2B7AE9C6381C460;// 0x03DC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03DD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          WetLensDistortFade;                                       // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ADirectionalLight*                           SunLightRef;                                              // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class APostProcessVolume*                          UnderwaterPPVolumeRef;                                    // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class APostProcessVolume*                          MainPPVolumeRef;                                          // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UMaterialInstanceDynamic*                    LightFunctionInstance;                                    // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_Ocean_C*                                 BP_OceanRef;                                              // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class APhysicsVolume*                              SwimVolumeRef;                                            // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               Tick;                                                     // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0419(0x0003) MISSED OFFSET
	struct FVector                                     LL;                                                       // 0x041C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableCausticsLight;                                      // 0x0428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UpdateUnderwaterPP;                                       // 0x0429(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableWetLensPP;                                          // 0x042A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SwimVolumeFollowsChar;                                    // 0x042B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowDebugVolumes;                                         // 0x042C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x042D(0x0003) MISSED OFFSET
	class UMaterialInstanceDynamic*                    WetLensMatInst;                                           // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsUnder;                                                  // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x12dda635);
		return ptr;
	}


	void UserConstructionScript();
	void WetLensBlurFade__FinishedFunc();
	void WetLensBlurFade__UpdateFunc();
	void WetLensDistortFade__FinishedFunc();
	void WetLensDistortFade__UpdateFunc();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void UnderWater();
	void OutOfWater();
	void ExecuteUbergraph_BP_Underwater(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
