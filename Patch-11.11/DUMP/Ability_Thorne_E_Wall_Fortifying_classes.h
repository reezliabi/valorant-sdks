// BlueprintGeneratedClass Ability_Thorne_E_Wall_Fortifying.Ability_Thorne_E_Wall_Fortifying_C
// Size: 0x1349 (Inherited: 0x1242)
struct AAbility_Thorne_E_Wall_Fortifying_C : AAbility_Equipped_Base_C {
	char pad_1242[0x6]; // 0x1242(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1248(0x08)
	struct UStateComponent_PlacementTargeting_ThorneWall_C* StateComponent_PlacementTargeting_ThorneWall; // 0x1250(0x08)
	struct UScriptStateComponent* WaitForConfirmedRotation; // 0x1258(0x08)
	struct USpawnActorStateComponent* SpawnActorState; // 0x1260(0x08)
	struct UEquipmentChargeComponent* EquipmentCharge; // 0x1268(0x08)
	struct UConsumeResourcesStateComponent* ConsumeResourcesState; // 0x1270(0x08)
	struct FRotator CurrentWallRotation; // 0x1278(0x18)
	struct FEffectID TargetingFXC; // 0x1290(0x20)
	struct FForceModuleHandle TargetingForceModule; // 0x12b0(0x08)
	bool IsRotationConfirmed; // 0x12b8(0x01)
	bool IsRotationTargeting; // 0x12b9(0x01)
	char pad_12BA[0x6]; // 0x12ba(0x06)
	double RotationSensitivity; // 0x12c0(0x08)
	struct FEffectID RotationFXC; // 0x12c8(0x20)
	bool IsRotationToggled; // 0x12e8(0x01)
	char pad_12E9[0x7]; // 0x12e9(0x07)
	struct FEffectID FXC_ID_EquippedUntilFire; // 0x12f0(0x20)
	double CastInputDelay; // 0x1310(0x08)
	double TouchSensitivity; // 0x1318(0x08)
	double TouchPadXDelta; // 0x1320(0x08)
	struct FVector WallJunctionOffset; // 0x1328(0x18)
	double SegmentWidth; // 0x1340(0x08)
	bool RotateIsDown; // 0x1348(0x01)

	void GetVisualTransform(struct FTransform& Transform); // Function Ability_Thorne_E_Wall_Fortifying.Ability_Thorne_E_Wall_Fortifying_C.GetVisualTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void JunctionCanSupportWall(double Direction, struct FTransform Transform, bool& Success); // Function Ability_Thorne_E_Wall_Fortifying.Ability_Thorne_E_Wall_Fortifying_C.JunctionCanSupportWall // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void DisableRotationTargeting(); // Function Ability_Thorne_E_Wall_Fortifying.Ability_Thorne_E_Wall_Fortifying_C.DisableRotationTargeting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EnableRotationTargeting(); // Function Ability_Thorne_E_Wall_Fortifying.Ability_Thorne_E_Wall_Fortifying_C.EnableRotationTargeting // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthConfirmRotation(); // Function Ability_Thorne_E_Wall_Fortifying.Ability_Thorne_E_Wall_Fortifying_C.AuthConfirmRotation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function Ability_Thorne_E_Wall_Fortifying.Ability_Thorne_E_Wall_Fortifying_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ConsumeResourcesState_K2Node_ComponentBoundEvent_0_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Ability_Thorne_E_Wall_Fortifying.Ability_Thorne_E_Wall_Fortifying_C.BndEvt__ConsumeResourcesState_K2Node_ComponentBoundEvent_0_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__EquipDelayState_K2Node_ComponentBoundEvent_1_OnStateExitSignature__DelegateSignature(struct UScriptStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function Ability_Thorne_E_Wall_Fortifying.Ability_Thorne_E_Wall_Fortifying_C.BndEvt__EquipDelayState_K2Node_ComponentBoundEvent_1_OnStateExitSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ReplicateRotationToServer(struct FRotator Rotation); // Function Ability_Thorne_E_Wall_Fortifying.Ability_Thorne_E_Wall_Fortifying_C.ReplicateRotationToServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WaitForConfirmedRotation_K2Node_ComponentBoundEvent_7_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Ability_Thorne_E_Wall_Fortifying.Ability_Thorne_E_Wall_Fortifying_C.BndEvt__WaitForConfirmedRotation_K2Node_ComponentBoundEvent_7_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ClientItemUnEquipped(); // Function Ability_Thorne_E_Wall_Fortifying.Ability_Thorne_E_Wall_Fortifying_C.ClientItemUnEquipped // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void AuthOnUnEquipped(); // Function Ability_Thorne_E_Wall_Fortifying.Ability_Thorne_E_Wall_Fortifying_C.AuthOnUnEquipped // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void OnRoundBegin_Event_1(int32_t RoundNumberBeginning); // Function Ability_Thorne_E_Wall_Fortifying.Ability_Thorne_E_Wall_Fortifying_C.OnRoundBegin_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Event Reset Rotation(); // Function Ability_Thorne_E_Wall_Fortifying.Ability_Thorne_E_Wall_Fortifying_C.Event Reset Rotation // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthOnEquipped(); // Function Ability_Thorne_E_Wall_Fortifying.Ability_Thorne_E_Wall_Fortifying_C.AuthOnEquipped // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__UnequipDelayState_K2Node_ComponentBoundEvent_3_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Ability_Thorne_E_Wall_Fortifying.Ability_Thorne_E_Wall_Fortifying_C.BndEvt__UnequipDelayState_K2Node_ComponentBoundEvent_3_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__StateComponent_PlacementTargeting_ThorneWall_K2Node_ComponentBoundEvent_2_OnStateTickSignature__DelegateSignature(struct UScriptStateComponent* State, float DeltaTimeSeconds); // Function Ability_Thorne_E_Wall_Fortifying.Ability_Thorne_E_Wall_Fortifying_C.BndEvt__StateComponent_PlacementTargeting_ThorneWall_K2Node_ComponentBoundEvent_2_OnStateTickSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__StateComponent_PlacementTargeting_ThorneWall_K2Node_ComponentBoundEvent_8_OnStateHandleInputActionSignature__DelegateSignature(struct UScriptStateComponent* State, enum class EAresEquippableInput Input, enum class EAresEquippableInputAction InputAction, float FrameDeltaTimeSeconds); // Function Ability_Thorne_E_Wall_Fortifying.Ability_Thorne_E_Wall_Fortifying_C.BndEvt__StateComponent_PlacementTargeting_ThorneWall_K2Node_ComponentBoundEvent_8_OnStateHandleInputActionSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__StateComponent_PlacementTargeting_ThorneWall_K2Node_ComponentBoundEvent_9_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Ability_Thorne_E_Wall_Fortifying.Ability_Thorne_E_Wall_Fortifying_C.BndEvt__StateComponent_PlacementTargeting_ThorneWall_K2Node_ComponentBoundEvent_9_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__SpawnActorState_K2Node_ComponentBoundEvent_4_OnSpawnActor__DelegateSignature(struct USpawnActorStateComponent* SpawnState, struct AActor* SpawnedActor); // Function Ability_Thorne_E_Wall_Fortifying.Ability_Thorne_E_Wall_Fortifying_C.BndEvt__SpawnActorState_K2Node_ComponentBoundEvent_4_OnSpawnActor__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ActivateTriggeredToRotate(); // Function Ability_Thorne_E_Wall_Fortifying.Ability_Thorne_E_Wall_Fortifying_C.ActivateTriggeredToRotate // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Ability_Thorne_E_Wall_Fortifying(int32_t EntryPoint); // Function Ability_Thorne_E_Wall_Fortifying.Ability_Thorne_E_Wall_Fortifying_C.ExecuteUbergraph_Ability_Thorne_E_Wall_Fortifying // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

