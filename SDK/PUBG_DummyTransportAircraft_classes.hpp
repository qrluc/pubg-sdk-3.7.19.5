#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_DummyTransportAircraft_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DummyTransportAircraft.DummyTransportAircraft_C
// 0x03A4 (0x08C4 - 0x0520)
class ADummyTransportAircraft_C : public ATransportAircraftVehicle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0520(0x0008) (Transient, DuplicateTransient)
	class UVehicleSeatInteractionComponent*            Seat35;                                                   // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        c130_CargoDoor_02;                                        // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        c130_CargoDoor_01;                                        // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat103;                                                  // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat102;                                                  // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat101;                                                  // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat100;                                                  // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat99;                                                   // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat98;                                                   // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat97;                                                   // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat96;                                                   // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat95;                                                   // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat94;                                                   // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat93;                                                   // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat92;                                                   // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat91;                                                   // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat90;                                                   // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat89;                                                   // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat88;                                                   // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat87;                                                   // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat86;                                                   // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat85;                                                   // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat84;                                                   // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat83;                                                   // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat82;                                                   // 0x05E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat81;                                                   // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat80;                                                   // 0x05F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat79;                                                   // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat78;                                                   // 0x0608(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat77;                                                   // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat76;                                                   // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat75;                                                   // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat74;                                                   // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat73;                                                   // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat72;                                                   // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat71;                                                   // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat70;                                                   // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat69;                                                   // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat68;                                                   // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat67;                                                   // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat66;                                                   // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat65;                                                   // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat64;                                                   // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat63;                                                   // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat62;                                                   // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat61;                                                   // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat60;                                                   // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat59;                                                   // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat58;                                                   // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat57;                                                   // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat56;                                                   // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat55;                                                   // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat54;                                                   // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat53;                                                   // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat52;                                                   // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat51;                                                   // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat50;                                                   // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat49;                                                   // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat48;                                                   // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat47;                                                   // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat46;                                                   // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat45;                                                   // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat44;                                                   // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat43;                                                   // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat42;                                                   // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat41;                                                   // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat40;                                                   // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat39;                                                   // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat38;                                                   // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat37;                                                   // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat36;                                                   // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat34;                                                   // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat33;                                                   // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat32;                                                   // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat31;                                                   // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat30;                                                   // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat29;                                                   // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat28;                                                   // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat27;                                                   // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat26;                                                   // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat25;                                                   // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat24;                                                   // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat23;                                                   // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat22;                                                   // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat21;                                                   // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat20;                                                   // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat19;                                                   // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat18;                                                   // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat17;                                                   // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat16;                                                   // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat15;                                                   // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat14;                                                   // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat13;                                                   // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat12;                                                   // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat11;                                                   // 0x0818(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat10;                                                   // 0x0820(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat9;                                                    // 0x0828(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat8;                                                    // 0x0830(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat7;                                                    // 0x0838(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat6;                                                    // 0x0840(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat5;                                                    // 0x0848(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat4;                                                    // 0x0850(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat3;                                                    // 0x0858(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat2;                                                    // 0x0860(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat1;                                                    // 0x0868(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat0;                                                    // 0x0870(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            ThirdPersonCameraInVehicle;                               // 0x0878(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpringArmInVehicleComponent*                ThirdPersonVehicleSpringArm;                              // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Rotors;                                                   // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialBillboardComponent*                 Light_CenterFrontLow;                                     // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialBillboardComponent*                 Light_CenterBack;                                         // 0x0898(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialBillboardComponent*                 Light_CenterFrontHigh;                                    // 0x08A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialBillboardComponent*                 Light_RightWing;                                          // 0x08A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialBillboardComponent*                 Light_LeftWing;                                           // 0x08B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTslVehicleCommonComponent*                  TslVehicleCommon;                                         // 0x08B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DoorAlpha;                                                // 0x08C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xa9eaf82f);
		return ptr;
	}


	void SetAllCloudParticleActivate(bool Active);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnLocalPlayerRide();
	void OnLocalPlayerLeave();
	void ExecuteUbergraph_DummyTransportAircraft(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
