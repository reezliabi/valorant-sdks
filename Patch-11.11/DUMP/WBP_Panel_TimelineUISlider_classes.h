// WidgetBlueprintGeneratedClass WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C
// Size: 0x518 (Inherited: 0x3e0)
struct UWBP_Panel_TimelineUISlider_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UOverlay* Container; // 0x3e8(0x08)
	struct UHorizontalBox* OverlayContainer; // 0x3f0(0x08)
	struct UCanvasPanel* PinLayer0; // 0x3f8(0x08)
	struct UCanvasPanel* PinLayer1; // 0x400(0x08)
	struct UCanvasPanel* PinLayer2; // 0x408(0x08)
	struct UCanvasPanel* PinLayer3; // 0x410(0x08)
	struct UWBP_Panel_TimelinePin_Playhead_C* PlayHeadPin; // 0x418(0x08)
	struct UHorizontalBox* RoundButtonParent; // 0x420(0x08)
	struct UTimelineUIViewModel* TimelineUIVM; // 0x428(0x08)
	struct TArray<struct UWBP_Panel_TimelinePinBase_C*> RoundButtons; // 0x430(0x10)
	bool IsDraggingTimeJumpPlayhead; // 0x440(0x01)
	bool IsMouseHovering; // 0x441(0x01)
	char pad_442[0x6]; // 0x442(0x06)
	struct FVector2D CurrentLocalMousePosition; // 0x448(0x10)
	struct UWBP_Panel_TimelinePinBase_C* TimeJumpHead; // 0x458(0x08)
	int32_t PlayheadDefaultLayer; // 0x460(0x04)
	bool TimeJumpHeadInitialized; // 0x464(0x01)
	char pad_465[0x3]; // 0x465(0x03)
	struct UWBP_Panel_TimelinePinBase_C* HoverPanel; // 0x468(0x08)
	bool HoverPanelInitialized; // 0x470(0x01)
	char pad_471[0x3]; // 0x471(0x03)
	int32_t HoverPanelDefaultLayer; // 0x474(0x04)
	bool TimejumpOverlayInitialized; // 0x478(0x01)
	char pad_479[0x7]; // 0x479(0x07)
	struct UWBP_Panel_TimelinePinBase_C* TimejumpOverlay; // 0x480(0x08)
	int32_t TimejumpOverlayDefaultLayer; // 0x488(0x04)
	char pad_48C[0x4]; // 0x48c(0x04)
	struct UWBP_Panel_TimelinePinBase_C* TimeJumpOverlayBG_Right; // 0x490(0x08)
	bool SideSwapEventMarkersDirty; // 0x498(0x01)
	bool UltimateEventMarkersDirty; // 0x499(0x01)
	bool DeathMarkersDirty; // 0x49a(0x01)
	char pad_49B[0x1]; // 0x49b(0x01)
	int32_t DefaultEventMarkerLayer; // 0x49c(0x04)
	struct TArray<struct UWBP_TimelineUI_EventIcon_C*> SideSwapEventMarkers; // 0x4a0(0x10)
	struct TArray<struct UWBP_TimelineUI_EventIcon_C*> DeathEventMarkers; // 0x4b0(0x10)
	struct TArray<struct UWBP_TimelineUI_EventIcon_C*> UltimateEventMarkers; // 0x4c0(0x10)
	struct TArray<struct UWBP_TimelineUI_EventIcon_C*> KillEventMarkers; // 0x4d0(0x10)
	struct UWBP_Panel_TimelinePinBase_C* TimeJumpOverlayBG_Left; // 0x4e0(0x08)
	struct FVector2D ExternalMousePosition; // 0x4e8(0x10)
	struct FMulticastInlineDelegate OnSliderTargetSelected; // 0x4f8(0x10)
	double FirstRoundStartTime; // 0x508(0x08)
	double GamepadHoverCursorDesiredTime; // 0x510(0x08)

	void CREATEDELEGATE_PROXYFUNCTION_2(bool bWasSuccessful); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.CREATEDELEGATE_PROXYFUNCTION_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CREATEDELEGATE_PROXYFUNCTION_1(bool NewValue); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.CREATEDELEGATE_PROXYFUNCTION_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateHoverMarkerForGamepad(); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.UpdateHoverMarkerForGamepad // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitializeHoverPanel(double Time); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.InitializeHoverPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply OnAnalogValueChanged(struct FGeometry MyGeometry, struct FAnalogInputEvent InAnalogInputEvent); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.OnAnalogValueChanged // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MoveGamepadHoverTime(double TimeAdjustAmount); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.MoveGamepadHoverTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MovePlayheadLeft(); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.MovePlayheadLeft // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.OnPreviewKeyDown // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsCharacterViewTarget(struct AShooterCharacter* ShooterCharacter, bool& bIsSpectated); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.IsCharacterViewTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Handle Team Switches Changed(struct TArray<struct USwitchTeamsEvent*>& TeamSwitches); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.Handle Team Switches Changed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Handle Character Deaths Changed(struct TArray<struct UCharacterDeathEvent*>& CharacterDeaths); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.Handle Character Deaths Changed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ClearEventMarkers(struct TArray<struct UWBP_TimelineUI_EventIcon_C*>& EventMarkers); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.ClearEventMarkers // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateEventWidget(double Time, enum class E_Replays_TimelineEventTypes EventType, struct TArray<struct UWBP_TimelineUI_EventIcon_C*>& EventMarkers); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.CreateEventWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Handle on View Target Changed(struct FViewTargetInfo& Info); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.Handle on View Target Changed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Time Jump Dest Changed(float DestSec); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.On Time Jump Dest Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply OnMouseButtonUpExternal(); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.OnMouseButtonUpExternal // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseMovedExternal(struct FVector2D MouseEventScreenSpacePosition); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.OnMouseMovedExternal // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleUltimateUsagesChanged(struct TArray<struct UCharacterUltimateUsedEvent*>& UltimateUsageTimes); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.HandleUltimateUsagesChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleTimelineEventSettingChanged(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.HandleTimelineEventSettingChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleOnTotalTimeChanged(float NewValue); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.HandleOnTotalTimeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateEventMarkers(); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.UpdateEventMarkers // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateTimeJumpHead(double DesiredTime, bool PlayStartFastForwardAnim); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.UpdateTimeJumpHead // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CalculatePercentSpanFromTimespan(double StartTime, double EndTime, double& PercentageOfTotal); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.CalculatePercentSpanFromTimespan // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UpdateTimejumpOverlayPanel(bool bIsTimeDilating); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.UpdateTimejumpOverlayPanel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update Hover Panel From Mouse(); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.Update Hover Panel From Mouse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetRoundFromTime(double Time, int32_t& Round); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.GetRoundFromTime // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetPositionForTimelinePin(double Time, struct UWBP_Panel_TimelinePinBase_C* PinWidget); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.SetPositionForTimelinePin // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Time Dilation Status Changed(bool& IsTimeDilating); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.On Time Dilation Status Changed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetTimeFromMousePosition(double& DesiredTime); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.GetTimeFromMousePosition // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void HandleOnGoToTimeFinalized(bool& WasSuccessful); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.HandleOnGoToTimeFinalized // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.OnMouseMove // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetCanvasPanelForLayer(int32_t LayerIndex, struct UCanvasPanel*& CanvasPanel); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.GetCanvasPanelForLayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetPositionAndLayerForTimelinePin(double Time, struct UWBP_Panel_TimelinePinBase_C* PinWidget, int32_t Layer); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.SetPositionAndLayerForTimelinePin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SpawnTimelinePinWidget(enum class E_TimelinePinTypes PinType, double Time, int32_t Layer, struct UWBP_Panel_TimelinePinBase_C*& NewWidget); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.SpawnTimelinePinWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RedrawRoundButtons(struct TArray<struct FJanusEventResponse>& FullEventList); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.RedrawRoundButtons // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetPositionPercentageFromTime(double Time, double& PositionPercentage); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.GetPositionPercentageFromTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void HandleCurrentRoundChanged(int32_t CurrentRound); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.HandleCurrentRoundChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleReplayEventsChanged(struct TArray<struct FJanusEventResponse>& ReplayEvents); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.HandleReplayEventsChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleCurrentTimeChanged(float NewCurrentTime); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.HandleCurrentTimeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindEvents(bool Bind); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetTimelineUIViewModel(struct UTimelineUIViewModel* TimelineUIViewModel); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.SetTimelineUIViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnActivated(); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.OnActivated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnDeactivated(); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.OnDeactivated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Panel_TimelineUISlider(int32_t EntryPoint); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.ExecuteUbergraph_WBP_Panel_TimelineUISlider // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnSliderTargetSelected__DelegateSignature(int32_t Time in Millis); // Function WBP_Panel_TimelineUISlider.WBP_Panel_TimelineUISlider_C.OnSliderTargetSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

