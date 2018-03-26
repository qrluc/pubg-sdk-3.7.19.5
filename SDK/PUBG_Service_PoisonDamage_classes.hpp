#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Service_PoisonDamage_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Service_PoisonDamage.Service_PoisonDamage_C
// 0x0018 (0x00B0 - 0x0098)
class UService_PoisonDamage_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (Transient, DuplicateTransient)
	struct FTimerHandle                                EverySecondTimer;                                         // 0x00A0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ABattleRoyaleModeController*                 ModeController;                                           // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x759f5ec7);
		return ptr;
	}


	void TakeDamageToCharacter(class ATslCharacter* Character, float SafetyRadius, const struct FVector& SafetyPosition);
	void EverySecond();
	void ReceiveActivation(class AActor** OwnerActor);
	void ExecuteUbergraph_Service_PoisonDamage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
