#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Task_GasWarning_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Task_GasWarning.Task_GasWarning_C
// 0x00B4 (0x0154 - 0x00A0)
class UTask_GasWarning_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      WarningPosition;                                          // 0x00A8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      WarningRadius;                                            // 0x00D0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      WarningDuration;                                          // 0x00F8(0x0028) (Edit, BlueprintVisible)
	float                                              RemainDuration;                                           // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PoisonWarningTimeIndex;                                   // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FBlackboardKeySelector                      ReleaseDuration;                                          // 0x0128(0x0028) (Edit, BlueprintVisible)
	float                                              TotalRemainDuration;                                      // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x49689139);
		return ptr;
	}


	void GetMinSecText(float Seconds, bool Full_text_for_MIN_SEC, struct FText* formatted_text);
	void PoisionWarningBroadcast(class ABattleRoyaleModeController* ModeController);
	void InitPoisonWarningTimeIndex(class ABattleRoyaleModeController* ModeController);
	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_Task_GasWarning(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
