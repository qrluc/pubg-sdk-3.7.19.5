#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_Motorbike_03_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Motorbike_03.BP_Motorbike_03_C
// 0x00C4 (0x08A4 - 0x07E0)
class ABP_Motorbike_03_C : public ATslWheeledVehicle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07E0(0x0008) (Transient, DuplicateTransient)
	class UCameraComponent*                            FirstPersonCameraInVehicle;                               // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpringArmInVehicleComponent*                FirstPersonSpringArmInVehicle;                            // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             Arrow;                                                    // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            ThirdPersonCameraInVehicle;                               // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpringArmInVehicleComponent*                ThirdPersonSpringArmInVehicle;                            // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              COM_Offset_Steer;                                         // 0x0810(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              COM_Offset_Yaw;                                           // 0x0814(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              COM_Offset_Roll;                                          // 0x0818(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              COM_Boost;                                                // 0x081C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 RollCurve;                                                // 0x0820(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 ReturnClampCurve;                                         // 0x0828(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 SteerCurve;                                               // 0x0830(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 YawCurve;                                                 // 0x0838(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 TorqueStabilizeCurve;                                     // 0x0840(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasContact;                                              // 0x0848(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0849(0x0003) MISSED OFFSET
	float                                              GameTime;                                                 // 0x084C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_CameraMan_C*                             CameraManRef;                                             // 0x0850(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              AIrControl_F;                                             // 0x0858(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AIrControl_R;                                             // 0x085C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasSideCart;                                             // 0x0860(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0861(0x0007) MISSED OFFSET
	class UCurveFloat*                                 RollCurve_Cart;                                           // 0x0868(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 ReturnClampCurve_Cart;                                    // 0x0870(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 SteerCurve_Cart;                                          // 0x0878(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 YawCurve_Cart;                                            // 0x0880(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 TorqueStabilizeCurve_Cart;                                // 0x0888(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 EngineAudioCurve;                                         // 0x0890(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTslWheeledVehicleMovement*                  TslMovementRef;                                           // 0x0898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FuelEfficiency;                                           // 0x08A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xe499fc55);
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
	void InpActEvt_NumPadZero_K2Node_InputKeyEvent_32(const struct FKey& Key);
	void InpActEvt_Multiply_K2Node_InputKeyEvent_31(const struct FKey& Key);
	void InpActEvt_NumPadSix_K2Node_InputKeyEvent_30(const struct FKey& Key);
	void InpActEvt_NumPadSix_K2Node_InputKeyEvent_29(const struct FKey& Key);
	void InpActEvt_NumPadFour_K2Node_InputKeyEvent_28(const struct FKey& Key);
	void InpActEvt_NumPadFour_K2Node_InputKeyEvent_27(const struct FKey& Key);
	void InpActEvt_NumPadOne_K2Node_InputKeyEvent_26(const struct FKey& Key);
	void InpActEvt_Add_K2Node_InputKeyEvent_25(const struct FKey& Key);
	void InpActEvt_Subtract_K2Node_InputKeyEvent_24(const struct FKey& Key);
	void InpActEvt_NumPadThree_K2Node_InputKeyEvent_23(const struct FKey& Key);
	void InpActEvt_NumPadSeven_K2Node_InputKeyEvent_22(const struct FKey& Key);
	void InpActEvt_NumPadNine_K2Node_InputKeyEvent_21(const struct FKey& Key);
	void InpActEvt_NumPadEight_K2Node_InputKeyEvent_20(const struct FKey& Key);
	void InpActEvt_NumPadTwo_K2Node_InputKeyEvent_19(const struct FKey& Key);
	void InpActEvt_NumPadFive_K2Node_InputKeyEvent_18(const struct FKey& Key);
	void InpActEvt_Decimal_K2Node_InputKeyEvent_17(const struct FKey& Key);
	void InpActEvt_PeekLeft_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_PeekLeft_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_PeekRight_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_PeekRight_K2Node_InputActionEvent_5(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_Motorbike_03(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
