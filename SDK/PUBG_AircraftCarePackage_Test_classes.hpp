#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_AircraftCarePackage_Test_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AircraftCarePackage_Test.AircraftCarePackage_Test_C
// 0x002C (0x053C - 0x0510)
class AAircraftCarePackage_Test_C : public AAircraftCarePackage
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_AircraftRotor;                                          // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProjectileMovementComponent*                ProjectileMovement;                                       // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkComponent*                                Ak;                                                       // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Sound_InterptTime;                                        // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Sound_TargetValue;                                        // 0x0534(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Sound_CurrentValue;                                       // 0x0538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xf228f3b5);
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_AircraftCarePackage_Test(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
