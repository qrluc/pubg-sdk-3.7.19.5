#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_TN_AudioTestActor_V2_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TN_AudioTestActor_V2.TN_AudioTestActor_V2_C
// 0x0050 (0x0400 - 0x03B0)
class ATN_AudioTestActor_V2_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (Transient, DuplicateTransient)
	class UAkComponent*                                Ak;                                                       // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             Arrow;                                                    // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBillboardComponent*                         Billboard;                                                // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class APlayerPawn_v2_C*                            ParentRef;                                                // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class UAkAudioEvent*>                       AkEventTable;                                             // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UW_AudioTest_C*                              WidgetRef;                                                // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SelectIndex;                                              // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TriggerRate;                                              // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xb66a1d7f);
		return ptr;
	}


	void PrintDistance(float DistanceInMeters);
	void PlayAudioRetrigger();
	void Retrigger();
	void PrintText(const struct FString& InText);
	void SetSwitch(const struct FString& Group, const struct FString& Param);
	void SetNextSound(bool bForward);
	void Destroy();
	void PlayAudio();
	void Initialize(class APlayerPawn_v2_C* Parent);
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_TN_AudioTestActor_V2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
