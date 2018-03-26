#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_Motorbike_04_SideCar_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C
// 0x006C (0x0A6C - 0x0A00)
class ABP_Motorbike_04_SideCar_C : public ATslMotorbikeVehicle_Sidecar
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A00(0x0008) (Transient, DuplicateTransient)
	class USphereComponent*                            Sphere2;                                                  // 0x0A08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMotorbikeVehicleSeatInteraction*            SideCarSeat;                                              // 0x0A10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Sphere1;                                                  // 0x0A18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMotorbikeVehicleSeatInteraction*            PassengerSeat;                                            // 0x0A20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x0A28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMotorbikeVehicleSeatInteraction*            DirverSeat;                                               // 0x0A30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URadialForceComponent*                       RadialForce;                                              // 0x0A38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            ThirdPersonCameraInVehicle;                               // 0x0A40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpringArmInVehicleComponent*                ThirdPersonSpringArmInVehicle;                            // 0x0A48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            FirstPersonCameraInVehicle;                               // 0x0A50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpringArmInVehicleComponent*                FirstPersonSpringArmInVehicle;                            // 0x0A58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTslWheeledVehicleMovement*                  TslMovementRef;                                           // 0x0A60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FuelEfficiency;                                           // 0x0A68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xf71624f5);
		return ptr;
	}


	void ProcessCamera();
	void Process_FuelConsumption();
	void InitCache();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void InpAxisEvt_AirControlPitch_K2Node_InputAxisEvent_8(float AxisValue);
	void InpAxisEvt_AirControlRoll_K2Node_InputAxisEvent_14(float AxisValue);
	void OnDeath_Event_1(float KillingDamage, const struct FDamageEvent& DamageEvent, class ATslPlayerState* PlayerInstigator, class AActor* DamageCauser);
	void ExecuteUbergraph_BP_Motorbike_04_SideCar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
