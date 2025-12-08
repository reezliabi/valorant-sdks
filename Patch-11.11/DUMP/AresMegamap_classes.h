// WidgetBlueprintGeneratedClass AresMegamap.AresMegamap_C
// Size: 0x4e0 (Inherited: 0x330)
struct UAresMegamap_C : UMegamap {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UAresMegamapBase_C* AresMegamapBase; // 0x338(0x08)
	struct UImage* BackgroundOverlay; // 0x340(0x08)
	struct UCoachesNotification_C* CoachesNotification; // 0x348(0x08)
	struct UOverlay* CommWheelContainer; // 0x350(0x08)
	struct UCanvasPanel* ObserverHUDContainer; // 0x358(0x08)
	struct UObserverHUDTimer_C* ObserverHUDTimer; // 0x360(0x08)
	struct URadialMenu_C* PingWheel; // 0x368(0x08)
	struct UOverlay* PingWheelContainer; // 0x370(0x08)
	struct UWidgetSwitcher* WheelGroupSwitcher; // 0x378(0x08)
	struct AShooterCharacter* LastPossessedCharacter; // 0x380(0x08)
	double AttributeFadeTime; // 0x388(0x08)
	double AttributeFadeEndTime; // 0x390(0x08)
	struct FMulticastInlineDelegate UpdateWidget; // 0x398(0x10)
	struct TArray<struct UTexture*> PingIcons; // 0x3a8(0x10)
	bool IsPingWheelValid; // 0x3b8(0x01)
	char pad_3B9[0x7]; // 0x3b9(0x07)
	struct FVector2D CachedControllerMousePosition; // 0x3c0(0x10)
	struct FVector2D CachedMousePosition; // 0x3d0(0x10)
	struct TArray<enum class NonVerbalCommTypesEnum> NULL; // 0x3e0(0x10)
	bool ShowCalloutsInRound; // 0x3f0(0x01)
	char pad_3F1[0x7]; // 0x3f1(0x07)
	struct AShooterPlayerState* LocalShooterPlayer; // 0x3f8(0x08)
	bool ShowCalloutsAtAll; // 0x400(0x01)
	enum class EMegamapCalloutsVisibility CalloutVisibility; // 0x401(0x01)
	char pad_402[0x6]; // 0x402(0x06)
	double DisabledOpacity; // 0x408(0x08)
	double EnabledOpacity; // 0x410(0x08)
	bool ShowWheelAnywhere; // 0x418(0x01)
	bool StartWheelContactValid; // 0x419(0x01)
	char pad_41A[0x6]; // 0x41a(0x06)
	struct FVector StartWheelWorldLoc; // 0x420(0x18)
	double FullScreenMegamapIconScaleFactor; // 0x438(0x08)
	struct FTimerHandle TimerHandle; // 0x440(0x08)
	struct UVM_NonVerbalComms_C* CurrentNonVerbalCommsViewModel; // 0x448(0x08)
	bool IsPlayerAlive; // 0x450(0x01)
	char pad_451[0x7]; // 0x451(0x07)
	struct TArray<enum class NonVerbalCommWheelGroupTypes> WheelGroupTypes; // 0x458(0x10)
	struct TMap<struct UBaseNonVerbalCommsWheelGroup_C*, struct UWBP_Switcher_NonVerbalComms_C*> NVCWheelGroupToWidgetSwitcher; // 0x468(0x50)
	bool ShouldShowPingWheel; // 0x4b8(0x01)
	bool IsValidWheelTransaction; // 0x4b9(0x01)
	char pad_4BA[0x6]; // 0x4ba(0x06)
	struct FTimerHandle TickBroadcastCheckTimer; // 0x4c0(0x08)
	double PlayerStartHeight; // 0x4c8(0x08)
	double AbsClampedPlayerZ; // 0x4d0(0x08)
	struct AShooterTeamStart* TeamStart; // 0x4d8(0x08)

	double GetClampedPlayerZ(); // Function AresMegamap.AresMegamap_C.GetClampedPlayerZ // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Try Set Team Start Height(); // Function AresMegamap.AresMegamap_C.Try Set Team Start Height // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleGamePhaseChanged(enum class EAresGamePhase CurrentGamePhase); // Function AresMegamap.AresMegamap_C.HandleGamePhaseChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateWidgetOpacityWhenVisible(struct UWidget* TargetWidget, bool Enabled); // Function AresMegamap.AresMegamap_C.UpdateWidgetOpacityWhenVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleViewModelAliveStateChanged(bool IsAlive); // Function AresMegamap.AresMegamap_C.HandleViewModelAliveStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleViewModelWheelGroupChanged(struct UBaseNonVerbalCommsWheelGroup_C* NewNVCGroup); // Function AresMegamap.AresMegamap_C.HandleViewModelWheelGroupChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleMegamapSwapWheel(); // Function AresMegamap.AresMegamap_C.HandleMegamapSwapWheel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SwapCurrentWheel(); // Function AresMegamap.AresMegamap_C.SwapCurrentWheel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CloseCurrentWheel(bool IsSelection); // Function AresMegamap.AresMegamap_C.CloseCurrentWheel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OpenCurrentWheel(); // Function AresMegamap.AresMegamap_C.OpenCurrentWheel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TogglePingWheelVisibility(bool IsVisible); // Function AresMegamap.AresMegamap_C.TogglePingWheelVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ClosePingWheel(bool IsSelection); // Function AresMegamap.AresMegamap_C.ClosePingWheel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWidgetSwitcher* GetCurrentWheelSwitcher(); // Function AresMegamap.AresMegamap_C.GetCurrentWheelSwitcher // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWBP_Panel_GameRadialMenu_NonVerbalComms_Desktop_C* GetCurrentCommsWheel(); // Function AresMegamap.AresMegamap_C.GetCurrentCommsWheel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OpenPingWheel(); // Function AresMegamap.AresMegamap_C.OpenPingWheel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ToggleCommsWheelVisibility(bool IsVisible); // Function AresMegamap.AresMegamap_C.ToggleCommsWheelVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CloseCommsWheel(bool IsSelection); // Function AresMegamap.AresMegamap_C.CloseCommsWheel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OpenCommsWheel(); // Function AresMegamap.AresMegamap_C.OpenCommsWheel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetDisplayTextFromRadialItems(struct TArray<struct UBaseNonVerbalCommRadialItem_C*>& RadialItems, struct TArray<struct FText>& DisplayText); // Function AresMegamap.AresMegamap_C.GetDisplayTextFromRadialItems // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void CreateWheelGroup(struct UBaseNonVerbalCommsWheelGroup_C* NVCWheelGroup); // Function AresMegamap.AresMegamap_C.CreateWheelGroup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWBP_Panel_GameRadialMenu_NonVerbalComms_Desktop_C* CreateWheel(struct UBaseNonVerbalCommWheel_C* WheelDefaults, struct UWBP_Switcher_NonVerbalComms_C* WidgetSwitcher); // Function AresMegamap.AresMegamap_C.CreateWheel // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitializeNonVerbalCommsViewModel(); // Function AresMegamap.AresMegamap_C.InitializeNonVerbalCommsViewModel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleMegamapMouseButtonUp(struct FPointerEvent MouseEvent); // Function AresMegamap.AresMegamap_C.HandleMegamapMouseButtonUp // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Is Valid Ping Wheel Contact(struct FVector2D ScreenLocation, bool& Valid); // Function AresMegamap.AresMegamap_C.Is Valid Ping Wheel Contact // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void TryConsumeNewPing(bool& bSuccess); // Function AresMegamap.AresMegamap_C.TryConsumeNewPing // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleMegamapMouseButtonDown(struct FGeometry My Geometry, struct FPointerEvent Mouse Event); // Function AresMegamap.AresMegamap_C.HandleMegamapMouseButtonDown // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateCalloutsVisibility(enum class EAresGamePhase CurrentGamePhase); // Function AresMegamap.AresMegamap_C.UpdateCalloutsVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply HandleMouseMoveForPingWheel(struct FPointerEvent MouseEvent); // Function AresMegamap.AresMegamap_C.HandleMouseMoveForPingWheel // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecutePing(struct FVector2D Position, int32_t PingIndex, bool& Success); // Function AresMegamap.AresMegamap_C.ExecutePing // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitPingWheel(); // Function AresMegamap.AresMegamap_C.InitPingWheel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePingIcons(); // Function AresMegamap.AresMegamap_C.UpdatePingIcons // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent& InMouseEvent); // Function AresMegamap.AresMegamap_C.OnMouseButtonDoubleClick // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function AresMegamap.AresMegamap_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function AresMegamap.AresMegamap_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function AresMegamap.AresMegamap_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void HandleOnPossessedCharacterChanged(struct AShooterCharacter* NewValue); // Function AresMegamap.AresMegamap_C.HandleOnPossessedCharacterChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update Fade(); // Function AresMegamap.AresMegamap_C.Update Fade // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleMapToggled(); // Function AresMegamap.AresMegamap_C.HandleMapToggled // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPhaseChangedEvent(enum class EAresGamePhase NewGamePhase, int32_t RoundNumberEnded); // Function AresMegamap.AresMegamap_C.OnPhaseChangedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMegamapCalloutVisibilityChanged(enum class EAresIntSettingName SettingName, int32_t OldValue, int32_t NewValue); // Function AresMegamap.AresMegamap_C.OnMegamapCalloutVisibilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMegamapMouseButtonDown(struct FGeometry My Geometry, struct FPointerEvent Mouse Event); // Function AresMegamap.AresMegamap_C.OnMegamapMouseButtonDown // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function AresMegamap.AresMegamap_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnMatchEnd(struct FAresMatchResult& MatchResult); // Function AresMegamap.AresMegamap_C.OnMatchEnd // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnHide(); // Function AresMegamap.AresMegamap_C.OnHide // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnShow(); // Function AresMegamap.AresMegamap_C.OnShow // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void UpdateWidgetRenderScale(struct UUserWidget* MinimapWidget); // Function AresMegamap.AresMegamap_C.UpdateWidgetRenderScale // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleOnBlindedChanged(); // Function AresMegamap.AresMegamap_C.HandleOnBlindedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateBlindByComponent(); // Function AresMegamap.AresMegamap_C.UpdateBlindByComponent // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToPossessedCharacter(); // Function AresMegamap.AresMegamap_C.BindToPossessedCharacter // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetUnblinded(); // Function AresMegamap.AresMegamap_C.SetUnblinded // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetFullyBlinded(); // Function AresMegamap.AresMegamap_C.SetFullyBlinded // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TickBroadcastCheck(); // Function AresMegamap.AresMegamap_C.TickBroadcastCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetTickBroadcastCheckEnabled(bool ShouldTick); // Function AresMegamap.AresMegamap_C.SetTickBroadcastCheckEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnViewModelsAssigned(); // Function AresMegamap.AresMegamap_C.OnViewModelsAssigned // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_AresMegamap(int32_t EntryPoint); // Function AresMegamap.AresMegamap_C.ExecuteUbergraph_AresMegamap // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void UpdateWidget__DelegateSignature(); // Function AresMegamap.AresMegamap_C.UpdateWidget__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

