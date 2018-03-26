#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_Motorbike_04_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Motorbike_04.BP_Motorbike_04_C
// 0x00F0 (0x0AE0 - 0x09F0)
class ABP_Motorbike_04_C : public ATslMotorbikeVehicle_Standalone
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09F0(0x0008) (Transient, DuplicateTransient)
	class USphereComponent*                            Sphere1;                                                  // 0x09F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMotorbikeVehicleSeatInteraction*            PassengerSeat;                                            // 0x0A00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x0A08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMotorbikeVehicleSeatInteraction*            DriverSeat;                                               // 0x0A10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URadialForceComponent*                       RadialForce;                                              // 0x0A18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            FirstPersonCameraInVehicle;                               // 0x0A20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpringArmInVehicleComponent*                FirstPersonSpringArmInVehicle;                            // 0x0A28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            ThirdPersonCameraInVehicle;                               // 0x0A30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpringArmInVehicleComponent*                ThirdPersonSpringArmInVehicle;                            // 0x0A38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              COM_Offset_Steer;                                         // 0x0A40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              COM_Offset_Yaw;                                           // 0x0A44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              COM_Offset_Roll;                                          // 0x0A48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              COM_Boost;                                                // 0x0A4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 RollCurve;                                                // 0x0A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 ReturnClampCurve;                                         // 0x0A58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 SteerCurve;                                               // 0x0A60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 YawCurve;                                                 // 0x0A68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 TorqueStabilizeCurve;                                     // 0x0A70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasContact;                                              // 0x0A78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0A79(0x0003) MISSED OFFSET
	float                                              GameTime;                                                 // 0x0A7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_CameraMan_C*                             CameraManRef;                                             // 0x0A80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              AIrControl_F;                                             // 0x0A88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AIrControl_R;                                             // 0x0A8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasSideCart;                                             // 0x0A90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0A91(0x0007) MISSED OFFSET
	class UCurveFloat*                                 RollCurve_Cart;                                           // 0x0A98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 ReturnClampCurve_Cart;                                    // 0x0AA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 SteerCurve_Cart;                                          // 0x0AA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 YawCurve_Cart;                                            // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 TorqueStabilizeCurve_Cart;                                // 0x0AB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 EngineAudioCurve;                                         // 0x0AC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTslWheeledVehicleMovement*                  TslMovementRef;                                           // 0x0AC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FuelEfficiency;                                           // 0x0AD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0AD4(0x0004) MISSED OFFSET
	class UObject*                                     Constraint;                                               // 0x0AD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x37388b05);
		return ptr;
	}


	void Init_Cache();
	void Process_FuelConsumption();
	void Process_Audio();
	void Process_Boost();
	void StabilizeMotorbikeSidecart();
	void StablizeMotorbike();
	void Process_Camera();
	void Process_AirControl();
	void Process_Eject();
	void Process_Contact();
	void Process_Stabilize();
	void UserConstructionScript();
	void InpActEvt_Decimal_K2Node_InputKeyEvent_34(const struct FKey& Key);
	void InpActEvt_NumPadFive_K2Node_InputKeyEvent_33(const struct FKey& Key);
	void InpActEvt_NumPadTwo_K2Node_InputKeyEvent_32(const struct FKey& Key);
	void InpActEvt_NumPadEight_K2Node_InputKeyEvent_31(const struct FKey& Key);
	void InpActEvt_NumPadNine_K2Node_InputKeyEvent_30(const struct FKey& Key);
	void InpActEvt_NumPadSeven_K2Node_InputKeyEvent_29(const struct FKey& Key);
	void InpActEvt_NumPadThree_K2Node_InputKeyEvent_28(const struct FKey& Key);
	void InpActEvt_Subtract_K2Node_InputKeyEvent_27(const struct FKey& Key);
	void InpActEvt_Add_K2Node_InputKeyEvent_26(const struct FKey& Key);
	void InpActEvt_NumPadZero_K2Node_InputKeyEvent_25(const struct FKey& Key);
	void InpActEvt_NumPadOne_K2Node_InputKeyEvent_24(const struct FKey& Key);
	void InpActEvt_Multiply_K2Node_InputKeyEvent_23(const struct FKey& Key);
	void InpActEvt_NumPadFour_K2Node_InputKeyEvent_22(const struct FKey& Key);
	void InpActEvt_NumPadFour_K2Node_InputKeyEvent_21(const struct FKey& Key);
	void InpActEvt_NumPadSix_K2Node_InputKeyEvent_20(const struct FKey& Key);
	void InpActEvt_NumPadSix_K2Node_InputKeyEvent_19(const struct FKey& Key);
	void InpActEvt_Delete_K2Node_InputKeyEvent_18(const struct FKey& Key);
	void InpAxisEvt_AirControlPitch_K2Node_InputAxisEvent_8(float AxisValue);
	void InpAxisEvt_AirControlRoll_K2Node_InputAxisEvent_14(float AxisValue);
	void ReceiveBeginPlay();
	void OnDeath_Event_1(float KillingDamage, const struct FDamageEvent& DamageEvent, class ATslPlayerState* PlayerInstigator, class AActor* DamageCauser);
	void ReceiveTick(float* DeltaSeconds);
	void SpawnAnchor();
	void OnComponentHit_Event_1(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void DeleteAnchor();
	void ExecuteUbergraph_BP_Motorbike_04(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
