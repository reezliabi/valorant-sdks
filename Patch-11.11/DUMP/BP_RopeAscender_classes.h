// BlueprintGeneratedClass BP_RopeAscender.BP_RopeAscender_C
// Size: 0x6c0 (Inherited: 0x460)
struct ABP_RopeAscender_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x460(0x08)
	struct UComp_Actor_Usable_Ascenders_C* Comp_Actor_Usable_Ascenders_Detach; // 0x468(0x08)
	struct UComp_Actor_Usable_Ascenders_C* Comp_Actor_Usable_Ascenders_Attach; // 0x470(0x08)
	struct UStaticMeshComponent* MovementThresholdPlane; // 0x478(0x08)
	struct USplineComponent* Spline; // 0x480(0x08)
	struct UBoxComponent* UsableVolume; // 0x488(0x08)
	struct ABasePlayerCharacter_C* UsingCharacter; // 0x490(0x08)
	struct TSoftObjectPtr<AActor> RopeVisualActor; // 0x498(0x30)
	double MinimumAttachTime; // 0x4c8(0x08)
	double MinimumDetachTime; // 0x4d0(0x08)
	struct TMap<struct AShooterCharacter*, struct FNetworkedMovementTimestamp> PlayerDetachTime; // 0x4d8(0x50)
	struct FName TelemetryLabel; // 0x528(0x0c)
	char pad_534[0x4]; // 0x534(0x04)
	struct TMap<struct AShooterCharacter*, struct FNetworkedMovementTimestamp> PlayerAttachTime; // 0x538(0x50)
	enum class Enum_AscenderMovementType ForwardMovementType; // 0x588(0x01)
	char pad_589[0x7]; // 0x589(0x07)
	double RunSpeed; // 0x590(0x08)
	double WalkSpeed; // 0x598(0x08)
	struct TSet<struct AShooterCharacter*> AttachedPlayers; // 0x5a0(0x50)
	double LateralForce; // 0x5f0(0x08)
	double AccelerationForce; // 0x5f8(0x08)
	double BrakingForce; // 0x600(0x08)
	double GameplayStartTime; // 0x608(0x08)
	bool CanUsePreRound; // 0x610(0x01)
	char pad_611[0x3]; // 0x611(0x03)
	struct FGameplayTag DisableAscenderTag; // 0x614(0x0c)
	struct UForceModule* ForceModuleType; // 0x620(0x08)
	struct UDebuff_RopeAscender_C* NormalDebuff; // 0x628(0x08)
	bool AutoZipline; // 0x630(0x01)
	char pad_631[0x7]; // 0x631(0x07)
	struct UDebuff_AutoZipline_C* AutoZipDebuff; // 0x638(0x08)
	struct TArray<struct ABP_BlockingVolume_C*> VolumeBlockersToIgnoreWhileOnAscender; // 0x640(0x10)
	bool RepelNearbyCharacters; // 0x650(0x01)
	char pad_651[0x7]; // 0x651(0x07)
	struct UForceModule* RepelCharactersForceModuleType; // 0x658(0x08)
	bool PushSlowCharactersOnSameAscender; // 0x660(0x01)
	char pad_661[0x3]; // 0x661(0x03)
	struct FForceModuleHandle ForceModuleHandle; // 0x664(0x08)
	bool AllowDetachAnywhere; // 0x66c(0x01)
	char pad_66D[0x3]; // 0x66d(0x03)
	struct UMaterialInterface* OriginalAscenderMaterial; // 0x670(0x08)
	struct UMaterialInstanceDynamic* DynamicMaterialRef; // 0x678(0x08)
	struct FLinearColor OriginalDiffuseColor; // 0x680(0x10)
	struct FLinearColor HighlightDiffuseColor; // 0x690(0x10)
	struct UStaticMeshComponent* RopeStaticMeshComponent; // 0x6a0(0x08)
	bool BendingRope; // 0x6a8(0x01)
	char pad_6A9[0x3]; // 0x6a9(0x03)
	struct FMaterialParameterInfo DiffuseColorParamInfo; // 0x6ac(0x14)

	void On Hide Outlines Setting Changed(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function BP_RopeAscender.BP_RopeAscender_C.On Hide Outlines Setting Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleForceModuleRemoved(struct AShooterCharacter* Character); // Function BP_RopeAscender.BP_RopeAscender_C.HandleForceModuleRemoved // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleForceModuleAdded(struct AShooterCharacter* Character); // Function BP_RopeAscender.BP_RopeAscender_C.HandleForceModuleAdded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShouldRepelActor(struct AActor* ActorOnRope, struct AActor* CollidingActor, bool& bShouldRepel); // Function BP_RopeAscender.BP_RopeAscender_C.ShouldRepelActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RecordAscenderUse(struct AShooterCharacter* Character); // Function BP_RopeAscender.BP_RopeAscender_C.RecordAscenderUse // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function BP_RopeAscender.BP_RopeAscender_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void OnRoundBegin_Event_1(int32_t RoundNumberBeginning); // Function BP_RopeAscender.BP_RopeAscender_C.OnRoundBegin_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleCharacterCollision(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_RopeAscender.BP_RopeAscender_C.HandleCharacterCollision // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTeleported_Event_1(struct AShooterCharacter* Character); // Function BP_RopeAscender.BP_RopeAscender_C.OnTeleported_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__BP_RopeAscender_Comp_Actor_Usable_Ascenders_Attach_K2Node_ComponentBoundEvent_1_UsableComponentCanUseSignature__DelegateSignature(struct UUsableComponent* UsableComponent, struct UInteractableUserComponent* User); // Function BP_RopeAscender.BP_RopeAscender_C.BndEvt__BP_RopeAscender_Comp_Actor_Usable_Ascenders_Attach_K2Node_ComponentBoundEvent_1_UsableComponentCanUseSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__BP_RopeAscender_Comp_Actor_Usable_Ascenders_Attach_K2Node_ComponentBoundEvent_3_UsableComponentUseSuccessful__DelegateSignature(struct UInteractableUserComponent* User); // Function BP_RopeAscender.BP_RopeAscender_C.BndEvt__BP_RopeAscender_Comp_Actor_Usable_Ascenders_Attach_K2Node_ComponentBoundEvent_3_UsableComponentUseSuccessful__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__BP_RopeAscender_Comp_Actor_Usable_Ascenders_Detach_K2Node_ComponentBoundEvent_6_UsableComponentCanUseSignature__DelegateSignature(struct UUsableComponent* UsableComponent, struct UInteractableUserComponent* User); // Function BP_RopeAscender.BP_RopeAscender_C.BndEvt__BP_RopeAscender_Comp_Actor_Usable_Ascenders_Detach_K2Node_ComponentBoundEvent_6_UsableComponentCanUseSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__BP_RopeAscender_Comp_Actor_Usable_Ascenders_Detach_K2Node_ComponentBoundEvent_7_UsableComponentUseSuccessful__DelegateSignature(struct UInteractableUserComponent* User); // Function BP_RopeAscender.BP_RopeAscender_C.BndEvt__BP_RopeAscender_Comp_Actor_Usable_Ascenders_Detach_K2Node_ComponentBoundEvent_7_UsableComponentUseSuccessful__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__BP_RopeAscender_Comp_Actor_Usable_Ascenders_Attach_K2Node_ComponentBoundEvent_0_UsableComponentCurrentUsable__DelegateSignature(struct UInteractableUserComponent* User); // Function BP_RopeAscender.BP_RopeAscender_C.BndEvt__BP_RopeAscender_Comp_Actor_Usable_Ascenders_Attach_K2Node_ComponentBoundEvent_0_UsableComponentCurrentUsable__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__BP_RopeAscender_Comp_Actor_Usable_Ascenders_Attach_K2Node_ComponentBoundEvent_2_UsableComponentCurrentUsable__DelegateSignature(struct UInteractableUserComponent* User); // Function BP_RopeAscender.BP_RopeAscender_C.BndEvt__BP_RopeAscender_Comp_Actor_Usable_Ascenders_Attach_K2Node_ComponentBoundEvent_2_UsableComponentCurrentUsable__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__BP_RopeAscender_Comp_Actor_Usable_Ascenders_Detach_K2Node_ComponentBoundEvent_4_UsableComponentCurrentUsable__DelegateSignature(struct UInteractableUserComponent* User); // Function BP_RopeAscender.BP_RopeAscender_C.BndEvt__BP_RopeAscender_Comp_Actor_Usable_Ascenders_Detach_K2Node_ComponentBoundEvent_4_UsableComponentCurrentUsable__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__BP_RopeAscender_Comp_Actor_Usable_Ascenders_Detach_K2Node_ComponentBoundEvent_5_UsableComponentCurrentUsable__DelegateSignature(struct UInteractableUserComponent* User); // Function BP_RopeAscender.BP_RopeAscender_C.BndEvt__BP_RopeAscender_Comp_Actor_Usable_Ascenders_Detach_K2Node_ComponentBoundEvent_5_UsableComponentCurrentUsable__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_BP_RopeAscender(int32_t EntryPoint); // Function BP_RopeAscender.BP_RopeAscender_C.ExecuteUbergraph_BP_RopeAscender // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

