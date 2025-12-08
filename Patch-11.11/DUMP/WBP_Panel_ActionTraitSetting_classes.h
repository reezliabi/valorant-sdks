// WidgetBlueprintGeneratedClass WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C
// Size: 0x1c78 (Inherited: 0x1b80)
struct UWBP_Panel_ActionTraitSetting_C : UAresActionSettingClickablePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1b80(0x08)
	struct UAresInputSwitcher* AresInputSwitcher; // 0x1b88(0x08)
	struct UMenuAnchor* ClickDescriptionAnchor; // 0x1b90(0x08)
	struct USizeBox* ConsoleNotifIconSizeBox; // 0x1b98(0x08)
	struct UWBP_Panel_InputListener_C* KeyBindingInputListenerConsolePrimary; // 0x1ba0(0x08)
	struct UWBP_Panel_InputListener_C* KeyBindingInputListenerPCPrimary; // 0x1ba8(0x08)
	struct UWBP_Panel_InputListener_C* KeyBindingInputListenerPCSecondary; // 0x1bb0(0x08)
	struct UHorizontalBox* NameHBox; // 0x1bb8(0x08)
	struct UAresInputSwitcher* NotificationIconInputSwitcher; // 0x1bc0(0x08)
	struct USizeBox* PCNotifIconSizeBox; // 0x1bc8(0x08)
	struct UTexture2D* Icon; // 0x1bd0(0x08)
	struct FMulticastInlineDelegate OnBindingChanged; // 0x1bd8(0x10)
	struct FAresConditionalInputAction ConfirmClear; // 0x1be8(0x28)
	struct FAresConditionalInputAction ConfirmRebind; // 0x1c10(0x28)
	bool IsRebinding; // 0x1c38(0x01)
	bool ReceivedCustomBinding; // 0x1c39(0x01)
	bool Is Locked; // 0x1c3a(0x01)
	char pad_1C3B[0x1]; // 0x1c3b(0x01)
	int32_t WidgetSwitcher_ActionChord; // 0x1c3c(0x04)
	int32_t WidgetSwitcher_NoneText; // 0x1c40(0x04)
	int32_t WidgetSwitcher_RebindingText; // 0x1c44(0x04)
	struct FText HoldText; // 0x1c48(0x18)
	struct FText DoubleTapText; // 0x1c60(0x18)

	void OnIsLockedChanged(bool bIsLocked); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.OnIsLockedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Input Type Changed(enum class ECommonInputType NewInputType); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.On Input Type Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToViewLevelEvents(bool bShouldBind); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.BindToViewLevelEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsKeySelectingChanged(bool bIsSelecting); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.OnIsKeySelectingChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWidget* GetUnbindTooltip(); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.GetUnbindTooltip // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void OnResetButtonClicked(int32_t BindIndex); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.OnResetButtonClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnClearButtonClicked(int32_t BindIndex); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.OnClearButtonClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Secondary Reset Icon Visibility Changed(enum class ESlateVisibility NewValue); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.On Secondary Reset Icon Visibility Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Primary Reset Icon Visibility Changed(enum class ESlateVisibility NewValue); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.On Primary Reset Icon Visibility Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnKeySelectionSuccessful(struct FKey InKey, int32_t InBindingIndex); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.OnKeySelectionSuccessful // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnActiveConsoleWidgetSwitcherIndexChanged(enum class EActionTraitSettingConsoleWidgetSwitcherIndex& ActiveConsoleWidgetSwitcherIndex); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.OnActiveConsoleWidgetSwitcherIndexChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnActionChordConsoleChordPrimaryVisibilityChanged(enum class ESlateVisibility NewActionChordConsolePrimaryChordVisibility); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.OnActionChordConsoleChordPrimaryVisibilityChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Console Input Listener Text Changed(struct FText& NewConsoleInputListenerText); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.On Console Input Listener Text Changed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindActionTraitViewModel(bool ShouldBind, struct UActionTraitSettingViewModel* InActionTraitViewModel); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.BindActionTraitViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitConditionalInputActionCallbacks(); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.InitConditionalInputActionCallbacks // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnClearBinding(struct FName ActionName); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.OnClearBinding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRebind(struct FName ActionName); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.OnRebind // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnActionChordConsoleChordPrimaryChanged(struct FActionChord& ChordedBinding); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.OnActionChordConsoleChordPrimaryChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnActionChordConsolePrimaryChanged(struct FActionChord& InputActionChord); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.OnActionChordConsolePrimaryChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnActionChordPCSecondaryChanged(struct FActionChord& InputActionChord); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.OnActionChordPCSecondaryChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnActionChordPCPrimaryChanged(struct FActionChord& InputActionChord); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.OnActionChordPCPrimaryChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceivedNewBinding(struct FKey InKey, int32_t InBindingIndex); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.ReceivedNewBinding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnTransitionHovered(); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.BP_OnTransitionHovered // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnTransitionUnHovered(); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.BP_OnTransitionUnHovered // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BindToSettingOptionViewModel(bool bBind); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.BindToSettingOptionViewModel // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Panel_ActionTraitSetting(int32_t EntryPoint); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.ExecuteUbergraph_WBP_Panel_ActionTraitSetting // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnBindingChanged__DelegateSignature(); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.OnBindingChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

