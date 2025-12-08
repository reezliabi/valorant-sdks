// BlueprintGeneratedClass Gun_Zoomable.Gun_Zoomable_C
// Size: 0x160a (Inherited: 0x14b8)
struct AGun_Zoomable_C : AGun_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14b8(0x08)
	struct UZoomStateMachineDebugComponent* ZoomStateMachineDebug; // 0x14c0(0x08)
	struct UAmmoCheckPendingZoomLevelStateComponent* AmmoCheckPendingZoomLevelState2; // 0x14c8(0x08)
	struct UAmmoCheckPendingZoomLevelStateComponent* AmmoCheckPendingZoomLevelState1; // 0x14d0(0x08)
	struct UFocusModeStateComponent* InADSFocusModeState; // 0x14d8(0x08)
	struct UBufferedZoomLevelStateComponent* BufferedZoomLevel2; // 0x14e0(0x08)
	struct UBufferedZoomLevelStateComponent* BufferedZoomLevel1; // 0x14e8(0x08)
	struct UBufferedZoomLevelStateComponent* BufferedZoomLevelUnzoomed; // 0x14f0(0x08)
	struct UComp_Gun_FlaggedZoomSettings_C* Comp_Gun_FlaggedZoomSettings; // 0x14f8(0x08)
	struct UZoomLevelStateComponent* ZoomStateUnzoomedSkipTransition; // 0x1500(0x08)
	struct UPendingZoomLevelStateComponent* PendingZoomLevel2; // 0x1508(0x08)
	struct UPendingZoomLevelStateComponent* PendingZoomLevel1; // 0x1510(0x08)
	struct UZoomLevelStateComponent* ZoomStateInactive; // 0x1518(0x08)
	struct UZoomLevelStateComponent* ZoomStateLevel2; // 0x1520(0x08)
	struct UZoomLevelStateComponent* ZoomStateLevel1; // 0x1528(0x08)
	struct UZoomLevelStateComponent* ZoomStateUnzoomed; // 0x1530(0x08)
	struct UZoomLevelStateComponent* ZoomStateDisabled; // 0x1538(0x08)
	struct UEquippableStateMachineComponent* ZoomStateMachine; // 0x1540(0x08)
	struct UZoomManagerComponent* ZoomManagerComponent; // 0x1548(0x08)
	struct UCycleZoomState* CycleZoomState; // 0x1550(0x08)
	struct UZoomMultiplierComponent* ZoomMultiplier; // 0x1558(0x08)
	struct UBaseCrosshairHudElement* ZoomedCrosshair; // 0x1560(0x08)
	bool CanOverrideZoomedCrosshair; // 0x1568(0x01)
	char pad_1569[0x7]; // 0x1569(0x07)
	struct UBaseCrosshairHudElement* ZoomedCustomCrosshair; // 0x1570(0x08)
	enum class AfterFiringWhileZoomedOption AfterFiringWhileZoomed; // 0x1578(0x01)
	char pad_1579[0x7]; // 0x1579(0x07)
	struct UAttachment_Base_Reflex_C* ReflexComponent; // 0x1580(0x08)
	bool WeaponVisibility; // 0x1588(0x01)
	bool IsAutoZoomQueued; // 0x1589(0x01)
	char pad_158A[0x2]; // 0x158a(0x02)
	int32_t QueuedZoomLevel; // 0x158c(0x04)
	bool ZoomCosmeticsEnable; // 0x1590(0x01)
	bool CycleThroughZoomOnTriggerInput; // 0x1591(0x01)
	bool ShouldAutoRescopeSniper; // 0x1592(0x01)
	char pad_1593[0x5]; // 0x1593(0x05)
	struct FMulticastInlineDelegate OnZoomLevelReached; // 0x1598(0x10)
	struct FMulticastInlineDelegate OnZoomStateReset; // 0x15a8(0x10)
	bool HasBegunInitialZoom; // 0x15b8(0x01)
	char pad_15B9[0x7]; // 0x15b9(0x07)
	struct TArray<struct UScriptStateComponent*> ValidZoomStates; // 0x15c0(0x10)
	struct TArray<struct UScriptStateComponent*> FiringStates; // 0x15d0(0x10)
	struct TArray<struct UScriptStateComponent*> ValidZoomStatesWithReload; // 0x15e0(0x10)
	double AutoPrimaryZoomRefireDelay; // 0x15f0(0x08)
	bool CachedCanFireWhileZooming; // 0x15f8(0x01)
	char pad_15F9[0x7]; // 0x15f9(0x07)
	struct AShooterCharacter* CurrentOwner; // 0x1600(0x08)
	bool IsSniperToggleHoldCycling; // 0x1608(0x01)
	bool IsForceWalkEnabled; // 0x1609(0x01)

	void OnPostRoundAboutToTransition(); // Function Gun_Zoomable.Gun_Zoomable_C.OnPostRoundAboutToTransition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DisableAndDestroyFocusModeComponents(); // Function Gun_Zoomable.Gun_Zoomable_C.DisableAndDestroyFocusModeComponents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitializeFocusModeComponent(); // Function Gun_Zoomable.Gun_Zoomable_C.InitializeFocusModeComponent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetupInvalidStatesForZoom(); // Function Gun_Zoomable.Gun_Zoomable_C.SetupInvalidStatesForZoom // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UseSniperScopesForZoom(bool& NewParam); // Function Gun_Zoomable.Gun_Zoomable_C.UseSniperScopesForZoom // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetupSingleZoomTransitions(); // Function Gun_Zoomable.Gun_Zoomable_C.SetupSingleZoomTransitions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetupMultiZoomTransitions(); // Function Gun_Zoomable.Gun_Zoomable_C.SetupMultiZoomTransitions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetupStateMachineTransitions(); // Function Gun_Zoomable.Gun_Zoomable_C.SetupStateMachineTransitions // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateZoomStateFiringBehaviors(); // Function Gun_Zoomable.Gun_Zoomable_C.UpdateZoomStateFiringBehaviors // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool DetermineIfCanFireWhileZooming(); // Function Gun_Zoomable.Gun_Zoomable_C.DetermineIfCanFireWhileZooming // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool DoesPreventZoomWhileFiring(); // Function Gun_Zoomable.Gun_Zoomable_C.DoesPreventZoomWhileFiring // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetZoomedCrosshair(struct UBaseCrosshairHudElement*& ZoomedCrosshair); // Function Gun_Zoomable.Gun_Zoomable_C.GetZoomedCrosshair // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetMobileAutoPrimaryRefireDelay(double& AutoRefireDelay); // Function Gun_Zoomable.Gun_Zoomable_C.GetMobileAutoPrimaryRefireDelay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetUseHoldInput(bool& Return Value); // Function Gun_Zoomable.Gun_Zoomable_C.GetUseHoldInput // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetIdleFiringState(struct UFiringStateComponent*& FiringState); // Function Gun_Zoomable.Gun_Zoomable_C.GetIdleFiringState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetUpReflexComponent(); // Function Gun_Zoomable.Gun_Zoomable_C.SetUpReflexComponent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CanCycleZoomFromIdle(bool& CanZoom); // Function Gun_Zoomable.Gun_Zoomable_C.CanCycleZoomFromIdle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetZoomedFiringState(struct UFiringStateComponent*& FiringState); // Function Gun_Zoomable.Gun_Zoomable_C.GetZoomedFiringState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function Gun_Zoomable.Gun_Zoomable_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void TryCycleZoomFromIdle(); // Function Gun_Zoomable.Gun_Zoomable_C.TryCycleZoomFromIdle // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CosmeticUnZoomStarted(struct UZoomComponent* ZoomComponent, float SourceZoomLevel); // Function Gun_Zoomable.Gun_Zoomable_C.CosmeticUnZoomStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnZoomInCompleted_Event_1(struct UZoomComponent* ZoomComponent, float TargetZoomLevel, bool IsInitialZoom); // Function Gun_Zoomable.Gun_Zoomable_C.OnZoomInCompleted_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnZoomOutCompleted(struct UZoomComponent* ZoomComponent, float SourceZoomLevel); // Function Gun_Zoomable.Gun_Zoomable_C.OnZoomOutCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ResetZoomGameplayAndCosmetics(); // Function Gun_Zoomable.Gun_Zoomable_C.ResetZoomGameplayAndCosmetics // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetZoomCosmetics(); // Function Gun_Zoomable.Gun_Zoomable_C.SetZoomCosmetics // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetZoomLevelReachedGameplayAndCosmetics(double ZoomLevel); // Function Gun_Zoomable.Gun_Zoomable_C.SetZoomLevelReachedGameplayAndCosmetics // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetUnzoomCosmetics(); // Function Gun_Zoomable.Gun_Zoomable_C.SetUnzoomCosmetics // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CosmeticZoomPercentageReached(struct UZoomComponent* ZoomComponent); // Function Gun_Zoomable.Gun_Zoomable_C.CosmeticZoomPercentageReached // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Zoom Component Cooldown Completed(struct UZoomComponent* ZoomComponent); // Function Gun_Zoomable.Gun_Zoomable_C.On Zoom Component Cooldown Completed // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExitHoldToZoom(); // Function Gun_Zoomable.Gun_Zoomable_C.ExitHoldToZoom // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EnterHoldToZoom(); // Function Gun_Zoomable.Gun_Zoomable_C.EnterHoldToZoom // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnADSHoldInputChanged(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function Gun_Zoomable.Gun_Zoomable_C.OnADSHoldInputChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnScopeHoldInputChanged(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function Gun_Zoomable.Gun_Zoomable_C.OnScopeHoldInputChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCycleThroughSniperZoomLevelsChanged(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function Gun_Zoomable.Gun_Zoomable_C.OnCycleThroughSniperZoomLevelsChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAutoRescopeSniperSettingChanged(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function Gun_Zoomable.Gun_Zoomable_C.OnAutoRescopeSniperSettingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSetOwner(struct AAresItem* Item, struct AActor* PrevOwner, struct AActor* NewOwner); // Function Gun_Zoomable.Gun_Zoomable_C.OnSetOwner // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ClientItemEquipped(); // Function Gun_Zoomable.Gun_Zoomable_C.ClientItemEquipped // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void GunInspect(enum class GunEmote Emote); // Function Gun_Zoomable.Gun_Zoomable_C.GunInspect // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__CycleZoomState_K2Node_ComponentBoundEvent_0_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Gun_Zoomable.Gun_Zoomable_C.BndEvt__CycleZoomState_K2Node_ComponentBoundEvent_0_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnServerBeganInitialZoom(); // Function Gun_Zoomable.Gun_Zoomable_C.OnServerBeganInitialZoom // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ReadyingState_K2Node_ComponentBoundEvent_3_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Gun_Zoomable.Gun_Zoomable_C.BndEvt__ReadyingState_K2Node_ComponentBoundEvent_3_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void UpdateStateMachineFlow(); // Function Gun_Zoomable.Gun_Zoomable_C.UpdateStateMachineFlow // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRejectZoomInvalidState_Event_1(struct UScriptStateComponent* InvalidState); // Function Gun_Zoomable.Gun_Zoomable_C.OnRejectZoomInvalidState_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ClientItemUnEquipped(); // Function Gun_Zoomable.Gun_Zoomable_C.ClientItemUnEquipped // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ZoomMultiplier_K2Node_ComponentBoundEvent_2_OnZoomInStartedSignature__DelegateSignature(struct UZoomComponent* ZoomComponent, float TargetZoomLevel, bool IsInitialZoom); // Function Gun_Zoomable.Gun_Zoomable_C.BndEvt__ZoomMultiplier_K2Node_ComponentBoundEvent_2_OnZoomInStartedSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnSniperToggleHoldCyclingChanged(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function Gun_Zoomable.Gun_Zoomable_C.OnSniperToggleHoldCyclingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRejectZoomInvalidState_BufferedZoom(struct UScriptStateComponent* InvalidState); // Function Gun_Zoomable.Gun_Zoomable_C.OnRejectZoomInvalidState_BufferedZoom // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnForceWalkWhileFocusedOrZoomedSettingChanged(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function Gun_Zoomable.Gun_Zoomable_C.OnForceWalkWhileFocusedOrZoomedSettingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Gun_Zoomable(int32_t EntryPoint); // Function Gun_Zoomable.Gun_Zoomable_C.ExecuteUbergraph_Gun_Zoomable // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnZoomStateReset__DelegateSignature(); // Function Gun_Zoomable.Gun_Zoomable_C.OnZoomStateReset__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnZoomLevelReached__DelegateSignature(double ZoomLevel); // Function Gun_Zoomable.Gun_Zoomable_C.OnZoomLevelReached__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

