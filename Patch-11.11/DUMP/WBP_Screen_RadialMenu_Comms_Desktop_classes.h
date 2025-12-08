// WidgetBlueprintGeneratedClass WBP_Screen_RadialMenu_Comms_Desktop.WBP_Screen_RadialMenu_Comms_Desktop_C
// Size: 0x6d0 (Inherited: 0x620)
struct UWBP_Screen_RadialMenu_Comms_Desktop_C : UWBP_Screen_RadialMenu_Comms_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x620(0x08)
	struct UWidgetAnimation* ExpandInnerRing; // 0x628(0x08)
	struct UWidgetAnimation* FadeUp; // 0x630(0x08)
	struct UImage* Fade; // 0x638(0x08)
	struct UImage* InnerRing; // 0x640(0x08)
	struct UImage* MWheelDownIcon; // 0x648(0x08)
	struct UImage* MWheelUpIcon; // 0x650(0x08)
	struct UCanvasPanel* ParentCanvas; // 0x658(0x08)
	struct UImage* WheelDownHighlight; // 0x660(0x08)
	struct UWidgetSwitcher* WheelGroupSwitcher; // 0x668(0x08)
	struct UImage* WheelMiddleHighlight; // 0x670(0x08)
	struct UTextBlock* WheelNameDownText; // 0x678(0x08)
	struct UTextBlock* WheelNameMiddleText; // 0x680(0x08)
	struct UTextBlock* WheelNameUpText; // 0x688(0x08)
	struct UImage* WheelUpHighlight; // 0x690(0x08)
	double DisabledOpacity; // 0x698(0x08)
	double CurrentOpacity; // 0x6a0(0x08)
	struct FTimerHandle TickBroadcastCheckTimer; // 0x6a8(0x08)
	bool WasCancelled; // 0x6b0(0x01)
	char pad_6B1[0x7]; // 0x6b1(0x07)
	struct AShooterPlayerState* ShooterPlayerState; // 0x6b8(0x08)
	struct UComp_ShooterCharacter_ViewTargetingModeManager_C* ViewTargetingModeManager; // 0x6c0(0x08)
	struct UpingWidget_C* PingWheelWidget; // 0x6c8(0x08)

	void TryGetPingWheel(struct UpingWidget_C*& PingWidget); // Function WBP_Screen_RadialMenu_Comms_Desktop.WBP_Screen_RadialMenu_Comms_Desktop_C.TryGetPingWheel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWBP_Panel_GameRadialMenu_C* CreateWheel(struct UBaseNonVerbalCommWheel_C* NVCWheelOptions, struct UWBP_Switcher_NonVerbalComms_C* WidgetSwitcher); // Function WBP_Screen_RadialMenu_Comms_Desktop.WBP_Screen_RadialMenu_Comms_Desktop_C.CreateWheel // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool IsCapturingInputForRadialMenu(); // Function WBP_Screen_RadialMenu_Comms_Desktop.WBP_Screen_RadialMenu_Comms_Desktop_C.IsCapturingInputForRadialMenu // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void HideInnerRing(); // Function WBP_Screen_RadialMenu_Comms_Desktop.WBP_Screen_RadialMenu_Comms_Desktop_C.HideInnerRing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowInnerRing(); // Function WBP_Screen_RadialMenu_Comms_Desktop.WBP_Screen_RadialMenu_Comms_Desktop_C.ShowInnerRing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CancelWheel(); // Function WBP_Screen_RadialMenu_Comms_Desktop.WBP_Screen_RadialMenu_Comms_Desktop_C.CancelWheel // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StopListeningForInputs(); // Function WBP_Screen_RadialMenu_Comms_Desktop.WBP_Screen_RadialMenu_Comms_Desktop_C.StopListeningForInputs // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TickBroadcastCheck(); // Function WBP_Screen_RadialMenu_Comms_Desktop.WBP_Screen_RadialMenu_Comms_Desktop_C.TickBroadcastCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetTickBroadcastCheckEnabled(bool ShouldTick); // Function WBP_Screen_RadialMenu_Comms_Desktop.WBP_Screen_RadialMenu_Comms_Desktop_C.SetTickBroadcastCheckEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HideWidgetsAndStopListeningForInput(); // Function WBP_Screen_RadialMenu_Comms_Desktop.WBP_Screen_RadialMenu_Comms_Desktop_C.HideWidgetsAndStopListeningForInput // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnShow(); // Function WBP_Screen_RadialMenu_Comms_Desktop.WBP_Screen_RadialMenu_Comms_Desktop_C.BP_OnShow // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnHide(); // Function WBP_Screen_RadialMenu_Comms_Desktop.WBP_Screen_RadialMenu_Comms_Desktop_C.BP_OnHide // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void OnCommWheelInputUp(); // Function WBP_Screen_RadialMenu_Comms_Desktop.WBP_Screen_RadialMenu_Comms_Desktop_C.OnCommWheelInputUp // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnCommWheelInputDown(); // Function WBP_Screen_RadialMenu_Comms_Desktop.WBP_Screen_RadialMenu_Comms_Desktop_C.OnCommWheelInputDown // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BindListenForInputs(); // Function WBP_Screen_RadialMenu_Comms_Desktop.WBP_Screen_RadialMenu_Comms_Desktop_C.BindListenForInputs // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OpenSocialWheel(); // Function WBP_Screen_RadialMenu_Comms_Desktop.WBP_Screen_RadialMenu_Comms_Desktop_C.OpenSocialWheel // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OpenCombatWheel(); // Function WBP_Screen_RadialMenu_Comms_Desktop.WBP_Screen_RadialMenu_Comms_Desktop_C.OpenCombatWheel // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OpenTacticalWheel(); // Function WBP_Screen_RadialMenu_Comms_Desktop.WBP_Screen_RadialMenu_Comms_Desktop_C.OpenTacticalWheel // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnHigherPriorityScreenVisbilityChanged(bool IsVisible); // Function WBP_Screen_RadialMenu_Comms_Desktop.WBP_Screen_RadialMenu_Comms_Desktop_C.OnHigherPriorityScreenVisbilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetupTrackedWidgets(); // Function WBP_Screen_RadialMenu_Comms_Desktop.WBP_Screen_RadialMenu_Comms_Desktop_C.SetupTrackedWidgets // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateOpacity(); // Function WBP_Screen_RadialMenu_Comms_Desktop.WBP_Screen_RadialMenu_Comms_Desktop_C.UpdateOpacity // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindForTargetViewMode(); // Function WBP_Screen_RadialMenu_Comms_Desktop.WBP_Screen_RadialMenu_Comms_Desktop_C.BindForTargetViewMode // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UnbindForTargetViewMode(); // Function WBP_Screen_RadialMenu_Comms_Desktop.WBP_Screen_RadialMenu_Comms_Desktop_C.UnbindForTargetViewMode // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPossessedCharacterChanged(struct AShooterCharacter* NewCharacter); // Function WBP_Screen_RadialMenu_Comms_Desktop.WBP_Screen_RadialMenu_Comms_Desktop_C.OnPossessedCharacterChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleTargetViewModeUpdated(bool TargetViewActive); // Function WBP_Screen_RadialMenu_Comms_Desktop.WBP_Screen_RadialMenu_Comms_Desktop_C.HandleTargetViewModeUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TryClosePingWheel(); // Function WBP_Screen_RadialMenu_Comms_Desktop.WBP_Screen_RadialMenu_Comms_Desktop_C.TryClosePingWheel // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindPingWheelVisbilityEvents(); // Function WBP_Screen_RadialMenu_Comms_Desktop.WBP_Screen_RadialMenu_Comms_Desktop_C.BindPingWheelVisbilityEvents // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UnbindPingWheelVisibilityEvents(); // Function WBP_Screen_RadialMenu_Comms_Desktop.WBP_Screen_RadialMenu_Comms_Desktop_C.UnbindPingWheelVisibilityEvents // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPingWheelVisibilityChanged(enum class ESlateVisibility InVisibility); // Function WBP_Screen_RadialMenu_Comms_Desktop.WBP_Screen_RadialMenu_Comms_Desktop_C.OnPingWheelVisibilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindWheelCancelEvents(); // Function WBP_Screen_RadialMenu_Comms_Desktop.WBP_Screen_RadialMenu_Comms_Desktop_C.BindWheelCancelEvents // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UnbindWheelCancelEvents(); // Function WBP_Screen_RadialMenu_Comms_Desktop.WBP_Screen_RadialMenu_Comms_Desktop_C.UnbindWheelCancelEvents // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Screen_RadialMenu_Comms_Desktop(int32_t EntryPoint); // Function WBP_Screen_RadialMenu_Comms_Desktop.WBP_Screen_RadialMenu_Comms_Desktop_C.ExecuteUbergraph_WBP_Screen_RadialMenu_Comms_Desktop // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

