// WidgetBlueprintGeneratedClass WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C
// Size: 0x4e1 (Inherited: 0x3e0)
struct UWBP_Panel_TimelineUI_PC_C : UWBP_Panel_TimelineUI_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWidgetAnimation* Anim_FlashRoundNumber; // 0x3e8(0x08)
	struct UWBP_Button_TimelineUI_C* ForwardTimeButton; // 0x3f0(0x08)
	struct UHorizontalBox* HB_PlayControls; // 0x3f8(0x08)
	struct UHorizontalBox* HB_ReplayOptionsCluster; // 0x400(0x08)
	struct UWBP_Button_TimelineUI_C* HideTimelineButton; // 0x408(0x08)
	struct UImage* IMG_InputOverlay_Controls; // 0x410(0x08)
	struct UImage* IMG_InputOverlay_Timeline; // 0x418(0x08)
	struct UWBP_Button_TimelineUI_C* NextRoundButton; // 0x420(0x08)
	struct UWBP_Button_TimelineUI_C* PlaybackSpeedDropdownButton; // 0x428(0x08)
	struct UWBP_Button_TimelineUI_C* PlayButton; // 0x430(0x08)
	struct UWBP_Button_TimelineUI_C* PreviousRoundButton; // 0x438(0x08)
	struct UWBP_Button_TimelineUI_C* ReplaySettingsButton; // 0x440(0x08)
	struct UWBP_Button_TimelineUI_C* RewindTimeButton; // 0x448(0x08)
	struct USizeBox* SB_KBShortcutsSpacer; // 0x450(0x08)
	struct USizeBox* SB_RndCtrl; // 0x458(0x08)
	struct USpacer* Spacer_Left; // 0x460(0x08)
	struct USpacer* Spacer_Right; // 0x468(0x08)
	struct UAresButtonTextComponent* T_CurrentRound; // 0x470(0x08)
	struct UAresButtonTextComponent* T_TimeDivider; // 0x478(0x08)
	struct UAresButtonTextComponent* T_TimeText_Current; // 0x480(0x08)
	struct UAresButtonTextComponent* T_TimeText_Total; // 0x488(0x08)
	struct UAresButtonTextComponent* T_TotalRounds; // 0x490(0x08)
	struct UOverlay* TimelineButtonsOverlay; // 0x498(0x08)
	struct UWBP_Toggle_TimelineUI_C* ToggleCamera; // 0x4a0(0x08)
	struct UWBP_Dropdown_TimelinePlaybackSpeed_C* WBP_Dropdown_TimelinePlaybackSpeed; // 0x4a8(0x08)
	struct UWBP_Panel_TimelineUISlider_C* WBP_Panel_TimelineUISlider; // 0x4b0(0x08)
	struct UTimelineUIViewModel* TimelineUIVM; // 0x4b8(0x08)
	struct FTimerHandle UpdateRoundTimerHandle; // 0x4c0(0x08)
	struct UWBP_Screen_TimelineOptionsBase_C* WBP_Screen_ReplayOptions; // 0x4c8(0x08)
	struct UReplayKeybindingShortcutViewModel* ReplayKeybindingVM; // 0x4d0(0x08)
	struct UCommonButtonBase* LastHoveredButton; // 0x4d8(0x08)
	bool IsTimelineSliderHovered; // 0x4e0(0x01)

	void CREATEDELEGATE_PROXYFUNCTION_2(bool NewValue); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.CREATEDELEGATE_PROXYFUNCTION_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CREATEDELEGATE_PROXYFUNCTION_1(enum class ESlateVisibility NewValue); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.CREATEDELEGATE_PROXYFUNCTION_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWidget* NavigateFromTimelineSlider(enum class EUINavigation Navigation); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.NavigateFromTimelineSlider // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWidget* NavigateFromButtons(enum class EUINavigation Navigation); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.NavigateFromButtons // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetSelectableChildren(struct UPanelWidget* PanelWidget, struct TArray<struct UAresCommonButton*>& SelectableWidgets); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.GetSelectableChildren // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Bind Events for Last Hovered Widget(bool Bind); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.Bind Events for Last Hovered Widget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTimelineButtonHovered(struct UCommonButtonBase* Button); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.OnTimelineButtonHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void OnMouseUpExternal(); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.OnMouseUpExternal // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseMovedExternal(struct FVector2D ExternalMouseScreenPosition); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.OnMouseMovedExternal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTimeJumpStatusChanged(bool& IsTimeJumping); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.OnTimeJumpStatusChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetVisibilityofInputOverlays(bool HideInputOverlays); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.SetVisibilityofInputOverlays // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Get Current Time in Sec(double& OutTimeSeconds); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.Get Current Time in Sec // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetNumberPositionInJumpTimeButtons(); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.SetNumberPositionInJumpTimeButtons // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnShowKeybindingsChanged(bool ShowKeyBinds); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.OnShowKeybindingsChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent& InMouseEvent); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.OnMouseButtonDoubleClick // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleShowTimeInMsChanged(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.HandleShowTimeInMsChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetCurrentAndTotalTimeInMilliseconds(struct FText& CurrentTime, struct FText& TotalTime); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.GetCurrentAndTotalTimeInMilliseconds // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetCurrentAndTotalTimeInSeconds(struct FText& CurrentTime, struct FText& TotalTime); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.GetCurrentAndTotalTimeInSeconds // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void HandleOnFollowCameraChanged(bool IsFollowCam); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.HandleOnFollowCameraChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleOnReplayOptionsOpenedChanged(bool Is Open); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.HandleOnReplayOptionsOpenedChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleTimeSelectorVisibilityChanged(enum class ESlateVisibility& TimeSelectorVisibility); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.HandleTimeSelectorVisibilityChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleReplayEventsChanged(struct TArray<struct FJanusEventResponse>& ReplayEvents); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.HandleReplayEventsChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePlaybackTimeText(); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.UpdatePlaybackTimeText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateRoundText(); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.UpdateRoundText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleTotalTimeChanged(float NewValue); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.HandleTotalTimeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleTotalRoundChanged(int32_t TotalRounds); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.HandleTotalRoundChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandlePlaybackSpeedIndexChanged(int32_t NewPlaybackSpeedIndex); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.HandlePlaybackSpeedIndexChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleIsPlayingChanged(bool IsPlaying); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.HandleIsPlayingChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleCurrentTimeChanged(float NewValue); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.HandleCurrentTimeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleCurrentRoundChanged(int32_t CurrentRound); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.HandleCurrentRoundChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindEvents(bool Bind); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetTimelineUIViewModel(struct UTimelineUIViewModel* TimelineUIViewModel); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.SetTimelineUIViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnActivated(); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.OnActivated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnDeactivated(); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.OnDeactivated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_TimelineUI_PC_PlayButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.BndEvt__WBP_Panel_TimelineUI_PC_PlayButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_TimelineUI_PC_ReplaySettingsButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.BndEvt__WBP_Panel_TimelineUI_PC_ReplaySettingsButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_TimelineUI_PC_HideTimelineButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.BndEvt__WBP_Panel_TimelineUI_PC_HideTimelineButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_TimelineUI_PC_PreviousRoundButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.BndEvt__WBP_Panel_TimelineUI_PC_PreviousRoundButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_TimelineUI_PC_NextRoundButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.BndEvt__WBP_Panel_TimelineUI_PC_NextRoundButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_TimelineUI_PC_RewindTimeButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.BndEvt__WBP_Panel_TimelineUI_PC_RewindTimeButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_TimelineUI_PC_ForwardTimeButton_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.BndEvt__WBP_Panel_TimelineUI_PC_ForwardTimeButton_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_TimelineUI_PC_PlaybackSpeedDropdownButton_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.BndEvt__WBP_Panel_TimelineUI_PC_PlaybackSpeedDropdownButton_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_TimelineUI_PC_ToggleCamera_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.BndEvt__WBP_Panel_TimelineUI_PC_ToggleCamera_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_TimelineUI_PC_ToggleCamera_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.BndEvt__WBP_Panel_TimelineUI_PC_ToggleCamera_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_TimelineUI_PC_ToggleCamera_K2Node_ComponentBoundEvent_8_CommonSelectedStateChangedBase__DelegateSignature(struct UCommonButtonBase* Button, bool Selected); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.BndEvt__WBP_Panel_TimelineUI_PC_ToggleCamera_K2Node_ComponentBoundEvent_8_CommonSelectedStateChangedBase__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void On Timeline Target Selected(int32_t Time in Millis); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.On Timeline Target Selected // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Playback Speed Index Selected(int32_t Playback Speed Index); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.On Playback Speed Index Selected // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Panel_TimelineUI_PC(int32_t EntryPoint); // Function WBP_Panel_TimelineUI_PC.WBP_Panel_TimelineUI_PC_C.ExecuteUbergraph_WBP_Panel_TimelineUI_PC // (Final|UbergraphFunction) // @ game+0x19be2f0
};

