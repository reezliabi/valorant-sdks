// BlueprintGeneratedClass SprayWall_BP.SprayWall_BP_C
// Size: 0x5a8 (Inherited: 0x4b0)
struct ASprayWall_BP_C : AGameObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct UStaticMeshComponent* BullseyeCameraMesh; // 0x4b8(0x08)
	struct USceneComponent* BullseyeCameraScene; // 0x4c0(0x08)
	struct UStaticMeshComponent* BullseyeHighlight; // 0x4c8(0x08)
	struct USceneComponent* BullseyeScene; // 0x4d0(0x08)
	struct UTextRenderComponent* BillboardTextRender; // 0x4d8(0x08)
	struct UStaticMeshComponent* BillboardMesh; // 0x4e0(0x08)
	struct UStaticMeshComponent* SprayCameraMesh; // 0x4e8(0x08)
	struct UChildActorComponent* TargetPracticeDummy; // 0x4f0(0x08)
	float WallMovementTimeline_Forward_264263314DE4261CBB9F3880F63D6BC0; // 0x4f8(0x04)
	enum class ETimelineDirection WallMovementTimeline__Direction_264263314DE4261CBB9F3880F63D6BC0; // 0x4fc(0x01)
	char pad_4FD[0x3]; // 0x4fd(0x03)
	struct UTimelineComponent* WallMovementTimeline; // 0x500(0x08)
	struct FVector OriginalLocation; // 0x508(0x18)
	struct FVector StartingLocation; // 0x520(0x18)
	struct FEffectID FXC_ID_WallMoving; // 0x538(0x20)
	struct FVector DesiredLocation; // 0x558(0x18)
	struct FMulticastInlineDelegate OnWallStoppedMoving; // 0x570(0x10)
	struct FMulticastInlineDelegate OnHitTarget; // 0x580(0x10)
	bool TargetDummyActive; // 0x590(0x01)
	char pad_591[0x7]; // 0x591(0x07)
	struct FMulticastInlineDelegate OnTargetDummyActiveChanged; // 0x598(0x10)

	void ActivateTargetDummy(bool PlayDummyEffect); // Function SprayWall_BP.SprayWall_BP_C.ActivateTargetDummy // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DeactivateTargetDummy(bool IsTemporary, bool PlayDummyEffect); // Function SprayWall_BP.SprayWall_BP_C.DeactivateTargetDummy // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CalculatePlayRate(struct FVector StartingLocation, struct FVector DesiredLocation, double Speed, bool& HasAlreadyArrived, double& PlayRate); // Function SprayWall_BP.SprayWall_BP_C.CalculatePlayRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetOriginalLocation(struct FVector& OriginalLocation); // Function SprayWall_BP.SprayWall_BP_C.GetOriginalLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CheckForBullseyeHit(struct UDamageResponse* Response); // Function SprayWall_BP.SprayWall_BP_C.CheckForBullseyeHit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DrawImpactOnTV(struct UDamageResponse* Response); // Function SprayWall_BP.SprayWall_BP_C.DrawImpactOnTV // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void WallMovementTimeline__FinishedFunc(); // Function SprayWall_BP.SprayWall_BP_C.WallMovementTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x19be2f0
	void WallMovementTimeline__UpdateFunc(); // Function SprayWall_BP.SprayWall_BP_C.WallMovementTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function SprayWall_BP.SprayWall_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__DamageHandler_K2Node_ComponentBoundEvent_4_OnDamagedSignature__DelegateSignature(struct UDamageResponse* Response); // Function SprayWall_BP.SprayWall_BP_C.BndEvt__DamageHandler_K2Node_ComponentBoundEvent_4_OnDamagedSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void Multicast Set Bullseye Enabled(bool IsEnabled); // Function SprayWall_BP.SprayWall_BP_C.Multicast Set Bullseye Enabled // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Move Wall To Distance(double Distance, double Speed); // Function SprayWall_BP.SprayWall_BP_C.Move Wall To Distance // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Multicast Move Wall To Distance(double Distance, double Speed); // Function SprayWall_BP.SprayWall_BP_C.Multicast Move Wall To Distance // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Stop Wall Movement(); // Function SprayWall_BP.SprayWall_BP_C.Stop Wall Movement // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Multicast Clear Decals(); // Function SprayWall_BP.SprayWall_BP_C.Multicast Clear Decals // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Multicast Update Billboard(struct FText& Value); // Function SprayWall_BP.SprayWall_BP_C.Multicast Update Billboard // (Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Multicast Disable Billboard(); // Function SprayWall_BP.SprayWall_BP_C.Multicast Disable Billboard // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Multicast Update Bullseye Properties(double Scale, double MaterialIntensity); // Function SprayWall_BP.SprayWall_BP_C.Multicast Update Bullseye Properties // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Multicast Reset Bullseye Properties(); // Function SprayWall_BP.SprayWall_BP_C.Multicast Reset Bullseye Properties // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_SprayWall_BP(int32_t EntryPoint); // Function SprayWall_BP.SprayWall_BP_C.ExecuteUbergraph_SprayWall_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnTargetDummyActiveChanged__DelegateSignature(bool NewIsActive, struct ATargetPracticeTrainingBot_C* BOT); // Function SprayWall_BP.SprayWall_BP_C.OnTargetDummyActiveChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnHitTarget__DelegateSignature(struct UDamageResponse* DamageResponse, bool IsBullseye); // Function SprayWall_BP.SprayWall_BP_C.OnHitTarget__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnWallStoppedMoving__DelegateSignature(); // Function SprayWall_BP.SprayWall_BP_C.OnWallStoppedMoving__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

