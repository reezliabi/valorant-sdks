// BlueprintGeneratedClass HeavyMachineGun.HeavyMachineGun_C
// Size: 0x166c (Inherited: 0x160a)
struct AHeavyMachineGun_C : AGun_Zoomable_C {
	char pad_160A[0x6]; // 0x160a(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1610(0x08)
	struct UStaticMeshComponent* 3pScreen; // 0x1618(0x08)
	struct UScriptStateComponent* DeployState; // 0x1620(0x08)
	struct UFiringStateComponent* ZoomedFiringState; // 0x1628(0x08)
	double Zoomtime; // 0x1630(0x08)
	double TimeInDeployState; // 0x1638(0x08)
	struct FActiveGameplayEffectHandle ZoomingBuffReference; // 0x1640(0x08)
	double DeployTime; // 0x1648(0x08)
	struct FActiveGameplayEffectHandle ZoomedBuffReference; // 0x1650(0x08)
	double HeatThreshold; // 0x1658(0x08)
	struct FActiveGameplayEffectHandle BuffReference; // 0x1660(0x08)
	int32_t ShotCount; // 0x1668(0x04)

	bool DetermineIfCanFireWhileZooming(); // Function HeavyMachineGun.HeavyMachineGun_C.DetermineIfCanFireWhileZooming // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RemoveBuffIfActive(struct FActiveGameplayEffectHandle BuffToRemove, struct UAbilitySystemComponent* AbilitySystemComponentToRemoveFrom); // Function HeavyMachineGun.HeavyMachineGun_C.RemoveBuffIfActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetIdleFiringState(struct UFiringStateComponent*& FiringState); // Function HeavyMachineGun.HeavyMachineGun_C.GetIdleFiringState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetZoomedFiringState(struct UFiringStateComponent*& FiringState); // Function HeavyMachineGun.HeavyMachineGun_C.GetZoomedFiringState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void Custom_OnShot(struct UFiringStateComponent* FiringState, int32_t ShotIndex, bool bTracerEnabled, bool bWasLastShot, struct TArray<None>& FiringResults); // Function HeavyMachineGun.HeavyMachineGun_C.Custom_OnShot // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ClientTickActiveForLocalPlayer(float DeltaSeconds); // Function HeavyMachineGun.HeavyMachineGun_C.ClientTickActiveForLocalPlayer // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function HeavyMachineGun.HeavyMachineGun_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void UpdateHeatThreshold(struct UFiringStateComponent* FiringState); // Function HeavyMachineGun.HeavyMachineGun_C.UpdateHeatThreshold // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ScriptState_K2Node_ComponentBoundEvent_1_OnStateTickSignature__DelegateSignature(struct UScriptStateComponent* State, float DeltaTimeSeconds); // Function HeavyMachineGun.HeavyMachineGun_C.BndEvt__ScriptState_K2Node_ComponentBoundEvent_1_OnStateTickSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ScriptState_K2Node_ComponentBoundEvent_0_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function HeavyMachineGun.HeavyMachineGun_C.BndEvt__ScriptState_K2Node_ComponentBoundEvent_0_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__DeployState_K2Node_ComponentBoundEvent_3_OnStateExitSignature__DelegateSignature(struct UScriptStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function HeavyMachineGun.HeavyMachineGun_C.BndEvt__DeployState_K2Node_ComponentBoundEvent_3_OnStateExitSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnZoomInCompleted_Event_1(struct UZoomComponent* ZoomComponent, float TargetZoomLevel, bool IsInitialZoom); // Function HeavyMachineGun.HeavyMachineGun_C.OnZoomInCompleted_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthOnUnEquipped(); // Function HeavyMachineGun.HeavyMachineGun_C.AuthOnUnEquipped // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void OnUnZoomStarted_Event_1(struct UZoomComponent* ZoomComponent, float SourceZoomLevel); // Function HeavyMachineGun.HeavyMachineGun_C.OnUnZoomStarted_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetZoomCosmetics(); // Function HeavyMachineGun.HeavyMachineGun_C.SetZoomCosmetics // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetUnzoomCosmetics(); // Function HeavyMachineGun.HeavyMachineGun_C.SetUnzoomCosmetics // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InputHandler(struct UScriptStateComponent* State, enum class EAresEquippableInput Input, enum class EAresEquippableInputAction InputAction, double FrameDeltaTime); // Function HeavyMachineGun.HeavyMachineGun_C.InputHandler // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__FiringState_K2Node_ComponentBoundEvent_1_StoppedShooting__DelegateSignature(struct UFiringStateComponent* FiringState); // Function HeavyMachineGun.HeavyMachineGun_C.BndEvt__FiringState_K2Node_ComponentBoundEvent_1_StoppedShooting__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__FiringState_K2Node_ComponentBoundEvent_0_OnShot__DelegateSignature(struct UFiringStateComponent* FiringState, int32_t ShotIndex, bool bTracerEnabled, bool bWasLastShot, struct TArray<struct FFiringResults>& FiringResults); // Function HeavyMachineGun.HeavyMachineGun_C.BndEvt__FiringState_K2Node_ComponentBoundEvent_0_OnShot__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveAuthClearOwningCharacter(struct AShooterCharacter* OldCharacter); // Function HeavyMachineGun.HeavyMachineGun_C.ReceiveAuthClearOwningCharacter // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void Round Begin Custom(int32_t RoundNumberBeginning); // Function HeavyMachineGun.HeavyMachineGun_C.Round Begin Custom // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_HeavyMachineGun(int32_t EntryPoint); // Function HeavyMachineGun.HeavyMachineGun_C.ExecuteUbergraph_HeavyMachineGun // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

