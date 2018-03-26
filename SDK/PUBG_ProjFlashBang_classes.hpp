#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ProjFlashBang_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjFlashBang.ProjFlashBang_C
// 0x0060 (0x0548 - 0x04E8)
class AProjFlashBang_C : public ATslProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E8(0x0008) (Transient, DuplicateTransient)
	class UAudioComponent*                             Audio1;                                                   // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ATslCharacter*                               LocalShooterCharacter;                                    // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ExplodeLocation;                                          // 0x0500(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x050C(0x0004) MISSED OFFSET
	class UClass*                                      FlashbangEffectClass;                                     // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UAkAudioEvent*>                       TinnitusSoundAks;                                         // 0x0518(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              MinPower;                                                 // 0x0528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x052C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 AnglePower;                                               // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 DistancePower;                                            // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCanvasRenderTarget2D*                       NewVar_2;                                                 // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x9f6a2789);
		return ptr;
	}


	void GetFlashBangDistance(float* FlashBangDistance);
	void GetCameraToFlashBangAngle(float* Angle);
	void GetTinnitusSoundIndex(int* Index);
	void SpawnFlashBangCaputeEffect(class ACharacter* ShooterCharacter);
	void SpawnFlashBangEffect(float FlashBangDistance);
	void PlayTinnitusSound(int Index);
	void UserConstructionScript();
	void OnTakeAnyDamage_Event(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void ExplodeBP(struct FVector* Location, struct FRotator* Rotation, struct FHitResult* Impact, float* Radius);
	void BreakLoop();
	void ExecuteUbergraph_ProjFlashBang(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
