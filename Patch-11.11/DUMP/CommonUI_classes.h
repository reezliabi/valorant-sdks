// Class CommonUI.CommonBoundActionButtonInterface
// Size: 0x30 (Inherited: 0x30)
struct UCommonBoundActionButtonInterface : UInterface {
};

// Class CommonUI.AnalogSlider
// Size: 0x790 (Inherited: 0x770)
struct UAnalogSlider : USlider {
	struct FMulticastInlineDelegate OnAnalogCapture; // 0x770(0x10)
	char pad_780[0x10]; // 0x780(0x10)
};

// Class CommonUI.CommonActionHandlerInterface
// Size: 0x30 (Inherited: 0x30)
struct UCommonActionHandlerInterface : UInterface {
};

// Class CommonUI.CommonActionWidget
// Size: 0x4d0 (Inherited: 0x1b8)
struct UCommonActionWidget : UWidget {
	struct FMulticastInlineDelegate OnInputMethodChanged; // 0x1b8(0x10)
	char pad_1C8[0x8]; // 0x1c8(0x08)
	struct FSlateBrush ProgressMaterialBrush; // 0x1d0(0xd0)
	struct FName ProgressMaterialParam; // 0x2a0(0x0c)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct FSlateBrush IconRimBrush; // 0x2b0(0xd0)
	struct TArray<struct FDataTableRowHandle> InputActions; // 0x380(0x10)
	struct UInputAction* EnhancedInputAction; // 0x390(0x08)
	char pad_398[0x8]; // 0x398(0x08)
	struct UMaterialInstanceDynamic* ProgressDynamicMaterial; // 0x3a0(0x08)
	char pad_3A8[0x128]; // 0x3a8(0x128)

	void SetInputActions(struct TArray<struct FDataTableRowHandle> NewInputActions); // Function CommonUI.CommonActionWidget.SetInputActions // (Final|Native|Public|BlueprintCallable) // @ game+0x4e27930
	void SetInputAction(struct FDataTableRowHandle InputActionRow); // Function CommonUI.CommonActionWidget.SetInputAction // (Final|Native|Public|BlueprintCallable) // @ game+0x4e27b50
	void SetIconRimBrush(struct FSlateBrush InIconRimBrush); // Function CommonUI.CommonActionWidget.SetIconRimBrush // (Final|Native|Public|BlueprintCallable) // @ game+0x4e27720
	void SetEnhancedInputAction(struct UInputAction* InInputAction); // Function CommonUI.CommonActionWidget.SetEnhancedInputAction // (Final|Native|Public|BlueprintCallable) // @ game+0x4e27cc0
	void OnInputMethodChanged__DelegateSignature(bool bUsingGamepad); // DelegateFunction CommonUI.CommonActionWidget.OnInputMethodChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x19be2f0
	bool IsHeldAction(); // Function CommonUI.CommonActionWidget.IsHeldAction // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e276f0
	struct FSlateBrush GetIcon(); // Function CommonUI.CommonActionWidget.GetIcon // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e27f50
	struct FText GetDisplayText(); // Function CommonUI.CommonActionWidget.GetDisplayText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e27dd0
};

// Class CommonUI.CommonUserWidget
// Size: 0x340 (Inherited: 0x318)
struct UCommonUserWidget : UUserWidget {
	bool bDisplayInActionBar; // 0x318(0x01)
	bool bConsumePointerInput; // 0x319(0x01)
	char pad_31A[0x26]; // 0x31a(0x26)

	void SetConsumePointerInput(bool bInConsumePointerInput); // Function CommonUI.CommonUserWidget.SetConsumePointerInput // (Final|Native|Public|BlueprintCallable) // @ game+0x4e60e30
};

// Class CommonUI.CommonActivatableWidget
// Size: 0x478 (Inherited: 0x340)
struct UCommonActivatableWidget : UCommonUserWidget {
	bool bIsBackHandler; // 0x340(0x01)
	bool bIsBackActionDisplayedInActionBar; // 0x341(0x01)
	bool bAutoActivate; // 0x342(0x01)
	bool bSupportsActivationFocus; // 0x343(0x01)
	bool bIsModal; // 0x344(0x01)
	bool bAutoRestoreFocus; // 0x345(0x01)
	bool bOverrideActionDomain; // 0x346(0x01)
	char pad_347[0x1]; // 0x347(0x01)
	struct UInputMappingContext* InputMapping; // 0x348(0x08)
	int32_t InputMappingPriority; // 0x350(0x04)
	char pad_354[0x4]; // 0x354(0x04)
	struct TSoftObjectPtr<UCommonInputActionDomain> ActionDomainOverride; // 0x358(0x30)
	struct FMulticastInlineDelegate BP_OnWidgetActivated; // 0x388(0x10)
	struct FMulticastInlineDelegate BP_OnWidgetDeactivated; // 0x398(0x10)
	bool bIsActive; // 0x3a8(0x01)
	char pad_3A9[0x7]; // 0x3a9(0x07)
	struct TArray<struct TWeakObjectPtr<struct UCommonActivatableWidget>> VisibilityBoundWidgets; // 0x3b0(0x10)
	char pad_3C0[0xb0]; // 0x3c0(0xb0)
	bool bSetVisibilityOnActivated; // 0x470(0x01)
	enum class ESlateVisibility ActivatedVisibility; // 0x471(0x01)
	bool bSetVisibilityOnDeactivated; // 0x472(0x01)
	enum class ESlateVisibility DeactivatedVisibility; // 0x473(0x01)
	char pad_474[0x4]; // 0x474(0x04)

	void SetBindVisibilities(enum class ESlateVisibility OnActivatedVisibility, enum class ESlateVisibility OnDeactivatedVisibility, bool bInAllActive); // Function CommonUI.CommonActivatableWidget.SetBindVisibilities // (Final|Native|Public|BlueprintCallable) // @ game+0x4e2a2a0
	bool IsActivated(); // Function CommonUI.CommonActivatableWidget.IsActivated // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e2a520
	struct UWidget* GetDesiredFocusTarget(); // Function CommonUI.CommonActivatableWidget.GetDesiredFocusTarget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e2a080
	void DeactivateWidget(); // Function CommonUI.CommonActivatableWidget.DeactivateWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x4e2a4c0
	bool BP_OnHandleBackAction(); // Function CommonUI.CommonActivatableWidget.BP_OnHandleBackAction // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnDeactivated(); // Function CommonUI.CommonActivatableWidget.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnActivated(); // Function CommonUI.CommonActivatableWidget.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	struct FUIInputConfig BP_GetDesiredInputConfig(); // Function CommonUI.CommonActivatableWidget.BP_GetDesiredInputConfig // (Event|Protected|BlueprintEvent|Const) // @ game+0x19be2f0
	struct UWidget* BP_GetDesiredFocusTarget(); // Function CommonUI.CommonActivatableWidget.BP_GetDesiredFocusTarget // (Event|Protected|BlueprintEvent|Const) // @ game+0x19be2f0
	void BindVisibilityToActivation(struct UCommonActivatableWidget* ActivatableWidget); // Function CommonUI.CommonActivatableWidget.BindVisibilityToActivation // (Final|Native|Public|BlueprintCallable) // @ game+0x4e2a0c0
	void ActivateWidget(); // Function CommonUI.CommonActivatableWidget.ActivateWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x4e2a4f0
};

// Class CommonUI.CommonAnimatedSwitcher
// Size: 0x258 (Inherited: 0x1e8)
struct UCommonAnimatedSwitcher : UWidgetSwitcher {
	char pad_1E8[0x30]; // 0x1e8(0x30)
	enum class ECommonSwitcherTransition TransitionType; // 0x218(0x01)
	enum class ETransitionCurve TransitionCurveType; // 0x219(0x01)
	char pad_21A[0x2]; // 0x21a(0x02)
	float TransitionDuration; // 0x21c(0x04)
	char pad_220[0x38]; // 0x220(0x38)

	void SetDisableTransitionAnimation(bool bDisableAnimation); // Function CommonUI.CommonAnimatedSwitcher.SetDisableTransitionAnimation // (Final|Native|Public|BlueprintCallable) // @ game+0x4e2d370
	bool IsTransitionPlaying(); // Function CommonUI.CommonAnimatedSwitcher.IsTransitionPlaying // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e2d2c0
	bool IsCurrentlySwitching(); // Function CommonUI.CommonAnimatedSwitcher.IsCurrentlySwitching // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e2d350
	bool HasWidgets(); // Function CommonUI.CommonAnimatedSwitcher.HasWidgets // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x387be00
	void ActivatePreviousWidget(bool bCanWrap); // Function CommonUI.CommonAnimatedSwitcher.ActivatePreviousWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x4e2d460
	void ActivateNextWidget(bool bCanWrap); // Function CommonUI.CommonAnimatedSwitcher.ActivateNextWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x4e2d580
};

// Class CommonUI.CommonActivatableWidgetSwitcher
// Size: 0x268 (Inherited: 0x258)
struct UCommonActivatableWidgetSwitcher : UCommonAnimatedSwitcher {
	char pad_258[0x10]; // 0x258(0x10)
};

// Class CommonUI.CommonBorderStyle
// Size: 0x100 (Inherited: 0x30)
struct UCommonBorderStyle : UObject {
	struct FSlateBrush Background; // 0x30(0xd0)

	void GetBackgroundBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonBorderStyle.GetBackgroundBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e2f4f0
};

// Class CommonUI.CommonBorder
// Size: 0x3b0 (Inherited: 0x390)
struct UCommonBorder : UBorder {
	struct UCommonBorderStyle* Style; // 0x390(0x08)
	bool bReducePaddingBySafezone; // 0x398(0x01)
	char pad_399[0x3]; // 0x399(0x03)
	struct FMargin MinimumPadding; // 0x39c(0x10)
	char pad_3AC[0x4]; // 0x3ac(0x04)

	void SetStyle(struct UCommonBorderStyle* InStyle); // Function CommonUI.CommonBorder.SetStyle // (Final|Native|Public|BlueprintCallable) // @ game+0x4e2f870
};

// Class CommonUI.CommonButtonStyle
// Size: 0x7f0 (Inherited: 0x30)
struct UCommonButtonStyle : UObject {
	bool bSingleMaterial; // 0x30(0x01)
	char pad_31[0xf]; // 0x31(0x0f)
	struct FSlateBrush SingleMaterialBrush; // 0x40(0xd0)
	struct FSlateBrush NormalBase; // 0x110(0xd0)
	struct FSlateBrush NormalHovered; // 0x1e0(0xd0)
	struct FSlateBrush NormalPressed; // 0x2b0(0xd0)
	struct FSlateBrush SelectedBase; // 0x380(0xd0)
	struct FSlateBrush SelectedHovered; // 0x450(0xd0)
	struct FSlateBrush SelectedPressed; // 0x520(0xd0)
	struct FSlateBrush Disabled; // 0x5f0(0xd0)
	struct FMargin ButtonPadding; // 0x6c0(0x10)
	struct FMargin CustomPadding; // 0x6d0(0x10)
	int32_t MinWidth; // 0x6e0(0x04)
	int32_t MinHeight; // 0x6e4(0x04)
	struct UCommonTextStyle* NormalTextStyle; // 0x6e8(0x08)
	struct UCommonTextStyle* NormalHoveredTextStyle; // 0x6f0(0x08)
	struct UCommonTextStyle* SelectedTextStyle; // 0x6f8(0x08)
	struct UCommonTextStyle* SelectedHoveredTextStyle; // 0x700(0x08)
	struct UCommonTextStyle* DisabledTextStyle; // 0x708(0x08)
	struct FSlateSound PressedSlateSound; // 0x710(0x20)
	struct FCommonButtonStyleOptionalSlateSound SelectedPressedSlateSound; // 0x730(0x28)
	struct FCommonButtonStyleOptionalSlateSound LockedPressedSlateSound; // 0x758(0x28)
	struct FSlateSound HoveredSlateSound; // 0x780(0x20)
	struct FCommonButtonStyleOptionalSlateSound SelectedHoveredSlateSound; // 0x7a0(0x28)
	struct FCommonButtonStyleOptionalSlateSound LockedHoveredSlateSound; // 0x7c8(0x28)

	struct UCommonTextStyle* GetSelectedTextStyle(); // Function CommonUI.CommonButtonStyle.GetSelectedTextStyle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e30630
	void GetSelectedPressedBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetSelectedPressedBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e30ab0
	struct UCommonTextStyle* GetSelectedHoveredTextStyle(); // Function CommonUI.CommonButtonStyle.GetSelectedHoveredTextStyle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e30600
	void GetSelectedHoveredBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetSelectedHoveredBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e30ca0
	void GetSelectedBaseBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetSelectedBaseBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e30e90
	struct UCommonTextStyle* GetNormalTextStyle(); // Function CommonUI.CommonButtonStyle.GetNormalTextStyle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e30690
	void GetNormalPressedBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetNormalPressedBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e31080
	struct UCommonTextStyle* GetNormalHoveredTextStyle(); // Function CommonUI.CommonButtonStyle.GetNormalHoveredTextStyle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e30660
	void GetNormalHoveredBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetNormalHoveredBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e31270
	void GetNormalBaseBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetNormalBaseBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e31460
	void GetMaterialBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetMaterialBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e31650
	struct UCommonTextStyle* GetDisabledTextStyle(); // Function CommonUI.CommonButtonStyle.GetDisabledTextStyle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e305d0
	void GetDisabledBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetDisabledBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e308c0
	void GetCustomPadding(struct FMargin& OutCustomPadding); // Function CommonUI.CommonButtonStyle.GetCustomPadding // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e306c0
	void GetButtonPadding(struct FMargin& OutButtonPadding); // Function CommonUI.CommonButtonStyle.GetButtonPadding // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e307c0
};

// Class CommonUI.CommonButtonInternalBase
// Size: 0x6d0 (Inherited: 0x660)
struct UCommonButtonInternalBase : UButton {
	char pad_660[0x8]; // 0x660(0x08)
	struct FMulticastInlineDelegate OnDoubleClicked; // 0x668(0x10)
	char pad_678[0x20]; // 0x678(0x20)
	int32_t MinWidth; // 0x698(0x04)
	int32_t MinHeight; // 0x69c(0x04)
	bool bButtonEnabled; // 0x6a0(0x01)
	bool bInteractionEnabled; // 0x6a1(0x01)
	char pad_6A2[0x2e]; // 0x6a2(0x2e)
};

// Class CommonUI.CommonButtonBase
// Size: 0x1670 (Inherited: 0x340)
struct UCommonButtonBase : UCommonUserWidget {
	struct FWidgetEventField ClickEvent; // 0x340(0x01)
	char pad_341[0x3]; // 0x341(0x03)
	int32_t MinWidth; // 0x344(0x04)
	int32_t MinHeight; // 0x348(0x04)
	char pad_34C[0x4]; // 0x34c(0x04)
	struct UCommonButtonStyle* Style; // 0x350(0x08)
	bool bHideInputAction; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
	struct FSlateSound PressedSlateSoundOverride; // 0x360(0x20)
	struct FSlateSound HoveredSlateSoundOverride; // 0x380(0x20)
	struct FSlateSound SelectedPressedSlateSoundOverride; // 0x3a0(0x20)
	struct FSlateSound SelectedHoveredSlateSoundOverride; // 0x3c0(0x20)
	struct FSlateSound LockedPressedSlateSoundOverride; // 0x3e0(0x20)
	struct FSlateSound LockedHoveredSlateSoundOverride; // 0x400(0x20)
	char bApplyAlphaOnDisable : 1; // 0x420(0x01)
	char bLocked : 1; // 0x420(0x01)
	char bSelectable : 1; // 0x420(0x01)
	char bShouldSelectUponReceivingFocus : 1; // 0x420(0x01)
	char bInteractableWhenSelected : 1; // 0x420(0x01)
	char bToggleable : 1; // 0x420(0x01)
	char bTriggerClickedAfterSelection : 1; // 0x420(0x01)
	char bDisplayInputActionWhenNotInteractable : 1; // 0x420(0x01)
	char bHideInputActionWithKeyboard : 1; // 0x421(0x01)
	char bShouldUseFallbackDefaultInputAction : 1; // 0x421(0x01)
	char bRequiresHold : 1; // 0x421(0x01)
	char pad_421_3 : 5; // 0x421(0x01)
	char pad_422[0x6]; // 0x422(0x06)
	struct UCommonUIHoldData* HoldData; // 0x428(0x08)
	bool bSimulateHoverOnTouchInput; // 0x430(0x01)
	char pad_431[0x1]; // 0x431(0x01)
	enum class EButtonClickMethod ClickMethod; // 0x432(0x01)
	enum class EButtonTouchMethod TouchMethod; // 0x433(0x01)
	enum class EButtonPressMethod PressMethod; // 0x434(0x01)
	char pad_435[0x3]; // 0x435(0x03)
	int32_t InputPriority; // 0x438(0x04)
	char pad_43C[0x4]; // 0x43c(0x04)
	struct FDataTableRowHandle TriggeringInputAction; // 0x440(0x18)
	struct UInputAction* TriggeringEnhancedInputAction; // 0x458(0x08)
	char pad_460[0x18]; // 0x460(0x18)
	struct FMulticastInlineDelegate OnSelectedChangedBase; // 0x478(0x10)
	struct FMulticastInlineDelegate OnButtonBaseClicked; // 0x488(0x10)
	struct FMulticastInlineDelegate OnButtonBaseDoubleClicked; // 0x498(0x10)
	struct FMulticastInlineDelegate OnButtonBaseHovered; // 0x4a8(0x10)
	struct FMulticastInlineDelegate OnButtonBaseUnhovered; // 0x4b8(0x10)
	char pad_4C8[0x30]; // 0x4c8(0x30)
	bool bIsPersistentBinding; // 0x4f8(0x01)
	enum class ECommonInputMode InputModeOverride; // 0x4f9(0x01)
	char pad_4FA[0x36]; // 0x4fa(0x36)
	struct UMaterialInstanceDynamic* SingleMaterialStyleMID; // 0x530(0x08)
	char pad_538[0x8]; // 0x538(0x08)
	struct FButtonStyle NormalStyle; // 0x540(0x400)
	struct FButtonStyle SelectedStyle; // 0x940(0x400)
	struct FButtonStyle DisabledStyle; // 0xd40(0x400)
	struct FButtonStyle LockedStyle; // 0x1140(0x400)
	char bStopDoubleClickPropagation : 1; // 0x1540(0x01)
	char pad_1540_1 : 7; // 0x1540(0x01)
	char pad_1541[0x117]; // 0x1541(0x117)
	struct UCommonActionWidget* InputActionWidget; // 0x1658(0x08)
	bool bHideTriggeringInputActionWhenUnhovered; // 0x1660(0x01)
	char pad_1661[0xf]; // 0x1661(0x0f)

	void UpdateHoldData(enum class ECommonInputType CurrentInputType); // Function CommonUI.CommonButtonBase.UpdateHoldData // (Native|Protected) // @ game+0x4e32aa0
	void StopDoubleClickPropagation(); // Function CommonUI.CommonButtonBase.StopDoubleClickPropagation // (Final|Native|Protected|BlueprintCallable) // @ game+0x4e32890
	void SetTriggeringInputAction(struct FDataTableRowHandle& InputActionRow); // Function CommonUI.CommonButtonBase.SetTriggeringInputAction // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4e33b40
	void SetTriggeringEnhancedInputAction(struct UInputAction* InInputAction); // Function CommonUI.CommonButtonBase.SetTriggeringEnhancedInputAction // (Final|Native|Public|BlueprintCallable) // @ game+0x4e339b0
	void SetTriggeredInputAction(struct FDataTableRowHandle& InputActionRow); // Function CommonUI.CommonButtonBase.SetTriggeredInputAction // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4e33d20
	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod); // Function CommonUI.CommonButtonBase.SetTouchMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x4e350d0
	void SetStyle(struct UCommonButtonStyle* InStyle); // Function CommonUI.CommonButtonBase.SetStyle // (Final|Native|Public|BlueprintCallable) // @ game+0x4e34320
	void SetShouldUseFallbackDefaultInputAction(bool bInShouldUseFallbackDefaultInputAction); // Function CommonUI.CommonButtonBase.SetShouldUseFallbackDefaultInputAction // (Final|Native|Public|BlueprintCallable) // @ game+0x4e34b40
	void SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus); // Function CommonUI.CommonButtonBase.SetShouldSelectUponReceivingFocus // (Final|Native|Public|BlueprintCallable) // @ game+0x4e34500
	void SetSelectedPressedSoundOverride(struct USoundBase* Sound); // Function CommonUI.CommonButtonBase.SetSelectedPressedSoundOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x4e32fd0
	void SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast); // Function CommonUI.CommonButtonBase.SetSelectedInternal // (Final|Native|Protected|BlueprintCallable) // @ game+0x4e32650
	void SetSelectedHoveredSoundOverride(struct USoundBase* Sound); // Function CommonUI.CommonButtonBase.SetSelectedHoveredSoundOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x4e32ec0
	void SetPressMethod(enum class EButtonPressMethod InPressMethod); // Function CommonUI.CommonButtonBase.SetPressMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x4e34fb0
	void SetPressedSoundOverride(struct USoundBase* Sound); // Function CommonUI.CommonButtonBase.SetPressedSoundOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x4e331f0
	void SetMinDimensions(int32_t InMinWidth, int32_t InMinHeight); // Function CommonUI.CommonButtonBase.SetMinDimensions // (Final|Native|Public|BlueprintCallable) // @ game+0x4e33ed0
	void SetLockedPressedSoundOverride(struct USoundBase* Sound); // Function CommonUI.CommonButtonBase.SetLockedPressedSoundOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x4e32db0
	void SetLockedHoveredSoundOverride(struct USoundBase* Sound); // Function CommonUI.CommonButtonBase.SetLockedHoveredSoundOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x4e32ca0
	void SetIsToggleable(bool bInIsToggleable); // Function CommonUI.CommonButtonBase.SetIsToggleable // (Final|Native|Public|BlueprintCallable) // @ game+0x4e34c50
	void SetIsSelected(bool InSelected, bool bGiveClickFeedback); // Function CommonUI.CommonButtonBase.SetIsSelected // (Final|Native|Public|BlueprintCallable) // @ game+0x4e34850
	void SetIsSelectable(bool bInIsSelectable); // Function CommonUI.CommonButtonBase.SetIsSelectable // (Final|Native|Public|BlueprintCallable) // @ game+0x4e34e80
	void SetIsLocked(bool bInIsLocked); // Function CommonUI.CommonButtonBase.SetIsLocked // (Final|Native|Public|BlueprintCallable) // @ game+0x4e346a0
	void SetIsInteractionEnabled(bool bInIsInteractionEnabled); // Function CommonUI.CommonButtonBase.SetIsInteractionEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x4e35520
	void SetIsInteractableWhenSelected(bool bInInteractableWhenSelected); // Function CommonUI.CommonButtonBase.SetIsInteractableWhenSelected // (Final|Native|Public|BlueprintCallable) // @ game+0x4e34d50
	void SetIsFocusable(bool bInIsFocusable); // Function CommonUI.CommonButtonBase.SetIsFocusable // (Native|Public|BlueprintCallable) // @ game+0x4e336b0
	void SetInputActionProgressMaterial(struct FSlateBrush& InProgressMaterialBrush, struct FName& InProgressMaterialParam); // Function CommonUI.CommonButtonBase.SetInputActionProgressMaterial // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4e33300
	void SetHoveredSoundOverride(struct USoundBase* Sound); // Function CommonUI.CommonButtonBase.SetHoveredSoundOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x4e330e0
	void SetHideInputAction(bool bInHideInputAction); // Function CommonUI.CommonButtonBase.SetHideInputAction // (Final|Native|Public|BlueprintCallable) // @ game+0x4e35420
	void SetClickMethod(enum class EButtonClickMethod InClickMethod); // Function CommonUI.CommonButtonBase.SetClickMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x4e351f0
	void OnTriggeringInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction); // Function CommonUI.CommonButtonBase.OnTriggeringInputActionChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnTriggeringEnhancedInputActionChanged(struct UInputAction* InInputAction); // Function CommonUI.CommonButtonBase.OnTriggeringEnhancedInputActionChanged // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction); // Function CommonUI.CommonButtonBase.OnTriggeredInputActionChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnInputMethodChanged(enum class ECommonInputType CurrentInputType); // Function CommonUI.CommonButtonBase.OnInputMethodChanged // (Native|Protected) // @ game+0x4e32ba0
	void OnCurrentTextStyleChanged(); // Function CommonUI.CommonButtonBase.OnCurrentTextStyleChanged // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void OnActionProgress(float HeldPercent); // Function CommonUI.CommonButtonBase.OnActionProgress // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void OnActionComplete(); // Function CommonUI.CommonButtonBase.OnActionComplete // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	bool NativeOnHoldProgressRollback(float DeltaTime); // Function CommonUI.CommonButtonBase.NativeOnHoldProgressRollback // (Native|Protected) // @ game+0x4e322f0
	bool NativeOnHoldProgress(float DeltaTime); // Function CommonUI.CommonButtonBase.NativeOnHoldProgress // (Native|Protected) // @ game+0x4e32400
	void NativeOnActionProgress(float HeldPercent); // Function CommonUI.CommonButtonBase.NativeOnActionProgress // (Native|Protected) // @ game+0x4e32510
	void NativeOnActionComplete(); // Function CommonUI.CommonButtonBase.NativeOnActionComplete // (Native|Protected) // @ game+0x4e322c0
	bool IsPressed(); // Function CommonUI.CommonButtonBase.IsPressed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e35320
	bool IsInteractionEnabled(); // Function CommonUI.CommonButtonBase.IsInteractionEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e353a0
	void HoldReset(); // Function CommonUI.CommonButtonBase.HoldReset // (Native|Protected) // @ game+0x4e32290
	void HandleTriggeringActionCommited(bool& bPassThrough); // Function CommonUI.CommonButtonBase.HandleTriggeringActionCommited // (Native|Protected|HasOutParms) // @ game+0x4e329a0
	void HandleFocusReceived(); // Function CommonUI.CommonButtonBase.HandleFocusReceived // (Native|Protected) // @ game+0x4e32940
	void HandleFocusLost(); // Function CommonUI.CommonButtonBase.HandleFocusLost // (Native|Protected) // @ game+0x4e32910
	void HandleButtonReleased(); // Function CommonUI.CommonButtonBase.HandleButtonReleased // (Native|Protected) // @ game+0x4e328b0
	void HandleButtonPressed(); // Function CommonUI.CommonButtonBase.HandleButtonPressed // (Native|Protected) // @ game+0x4e328e0
	void HandleButtonClicked(); // Function CommonUI.CommonButtonBase.HandleButtonClicked // (Native|Protected) // @ game+0x4e32970
	struct UCommonButtonStyle* GetStyle(); // Function CommonUI.CommonButtonBase.GetStyle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e342f0
	struct UMaterialInstanceDynamic* GetSingleMaterialStyleMID(); // Function CommonUI.CommonButtonBase.GetSingleMaterialStyleMID // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e33660
	bool GetShouldSelectUponReceivingFocus(); // Function CommonUI.CommonButtonBase.GetShouldSelectUponReceivingFocus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e344d0
	bool GetSelected(); // Function CommonUI.CommonButtonBase.GetSelected // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e34670
	bool GetLocked(); // Function CommonUI.CommonButtonBase.GetLocked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e34640
	bool GetIsFocusable(); // Function CommonUI.CommonButtonBase.GetIsFocusable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e33680
	bool GetInputAction(struct FDataTableRowHandle& InputActionRow); // Function CommonUI.CommonButtonBase.GetInputAction // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e337d0
	struct UInputAction* GetEnhancedInputAction(); // Function CommonUI.CommonButtonBase.GetEnhancedInputAction // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e337b0
	struct UCommonTextStyle* GetCurrentTextStyleClass(); // Function CommonUI.CommonButtonBase.GetCurrentTextStyleClass // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e34060
	struct UCommonTextStyle* GetCurrentTextStyle(); // Function CommonUI.CommonButtonBase.GetCurrentTextStyle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e340a0
	void GetCurrentCustomPadding(struct FMargin& OutCustomPadding); // Function CommonUI.CommonButtonBase.GetCurrentCustomPadding // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e340d0
	void GetCurrentButtonPadding(struct FMargin& OutButtonPadding); // Function CommonUI.CommonButtonBase.GetCurrentButtonPadding // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e341e0
	bool GetConvertInputActionToHold(); // Function CommonUI.CommonButtonBase.GetConvertInputActionToHold // (Native|Protected) // @ game+0x4e32610
	void ForceSetSelectedState(bool bInSelected); // Function CommonUI.CommonButtonBase.ForceSetSelectedState // (Final|Native|Public|BlueprintCallable) // @ game+0x4e349e0
	void DisableButtonWithReason(struct FText& DisabledReason); // Function CommonUI.CommonButtonBase.DisableButtonWithReason // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4e35620
	void ClearSelection(); // Function CommonUI.CommonButtonBase.ClearSelection // (Final|Native|Public|BlueprintCallable) // @ game+0x4e34610
	void BP_OnUnhovered(); // Function CommonUI.CommonButtonBase.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnSelected(); // Function CommonUI.CommonButtonBase.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnReleased(); // Function CommonUI.CommonButtonBase.BP_OnReleased // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnPressed(); // Function CommonUI.CommonButtonBase.BP_OnPressed // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnLockedChanged(bool bIsLocked); // Function CommonUI.CommonButtonBase.BP_OnLockedChanged // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnLockDoubleClicked(); // Function CommonUI.CommonButtonBase.BP_OnLockDoubleClicked // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnLockClicked(); // Function CommonUI.CommonButtonBase.BP_OnLockClicked // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnInputMethodChanged(enum class ECommonInputType CurrentInputType); // Function CommonUI.CommonButtonBase.BP_OnInputMethodChanged // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnHovered(); // Function CommonUI.CommonButtonBase.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnFocusReceived(); // Function CommonUI.CommonButtonBase.BP_OnFocusReceived // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnFocusLost(); // Function CommonUI.CommonButtonBase.BP_OnFocusLost // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnEnabled(); // Function CommonUI.CommonButtonBase.BP_OnEnabled // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnDoubleClicked(); // Function CommonUI.CommonButtonBase.BP_OnDoubleClicked // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnDisabled(); // Function CommonUI.CommonButtonBase.BP_OnDisabled // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnDeselected(); // Function CommonUI.CommonButtonBase.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnClicked(); // Function CommonUI.CommonButtonBase.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
};

// Class CommonUI.WidgetLockedStateRegistration
// Size: 0x30 (Inherited: 0x30)
struct UWidgetLockedStateRegistration : UWidgetBinaryStateRegistration {
};

// Class CommonUI.CommonCustomNavigation
// Size: 0x3b0 (Inherited: 0x390)
struct UCommonCustomNavigation : UBorder {
	struct FDelegate OnNavigationEvent; // 0x390(0x14)
	char pad_3A4[0xc]; // 0x3a4(0x0c)
};

// Class CommonUI.CommonTextBlock
// Size: 0x3e0 (Inherited: 0x3b0)
struct UCommonTextBlock : UTextBlock {
	float MobileFontSizeMultiplier; // 0x3b0(0x04)
	char pad_3B4[0x4]; // 0x3b4(0x04)
	struct UCommonTextStyle* Style; // 0x3b8(0x08)
	struct UCommonTextScrollStyle* ScrollStyle; // 0x3c0(0x08)
	bool bIsScrollingEnabled; // 0x3c8(0x01)
	bool bDisplayAllCaps; // 0x3c9(0x01)
	bool bAutoCollapseWithEmptyText; // 0x3ca(0x01)
	char pad_3CB[0x15]; // 0x3cb(0x15)

	void SetWrapTextWidth(int32_t InWrapTextAt); // Function CommonUI.CommonTextBlock.SetWrapTextWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x4e59b90
	void SetTextCase(bool bUseAllCaps); // Function CommonUI.CommonTextBlock.SetTextCase // (Final|Native|Public|BlueprintCallable) // @ game+0x4e59a50
	void SetStyle(struct UCommonTextStyle* InStyle); // Function CommonUI.CommonTextBlock.SetStyle // (Final|Native|Public|BlueprintCallable) // @ game+0x4e59860
	void SetScrollingEnabled(bool bInIsScrollingEnabled); // Function CommonUI.CommonTextBlock.SetScrollingEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x4e59470
	void SetMobileFontSizeMultiplier(float InMobileFontSizeMultiplier); // Function CommonUI.CommonTextBlock.SetMobileFontSizeMultiplier // (Final|Native|Public|BlueprintCallable) // @ game+0x4e595f0
	void SetMargin(struct FMargin& InMargin); // Function CommonUI.CommonTextBlock.SetMargin // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4e59730
	void SetLineHeightPercentage(float InLineHeightPercentage); // Function CommonUI.CommonTextBlock.SetLineHeightPercentage // (Final|Native|Public|BlueprintCallable) // @ game+0x4e59960
	void ResetScrollState(); // Function CommonUI.CommonTextBlock.ResetScrollState // (Final|Native|Public|BlueprintCallable) // @ game+0x4e59580
	float GetMobileFontSizeMultiplier(); // Function CommonUI.CommonTextBlock.GetMobileFontSizeMultiplier // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e59710
	struct FMargin GetMargin(); // Function CommonUI.CommonTextBlock.GetMargin // (Final|Native|Public|BlueprintCallable) // @ game+0x4e59830
};

// Class CommonUI.CommonDateTimeTextBlock
// Size: 0x440 (Inherited: 0x3e0)
struct UCommonDateTimeTextBlock : UCommonTextBlock {
	char pad_3E0[0x60]; // 0x3e0(0x60)

	void SetTimespanValue(struct FTimespan InTimespan); // Function CommonUI.CommonDateTimeTextBlock.SetTimespanValue // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x4e3f490
	void SetDateTimeValue(struct FDateTime InDateTime, bool bShowAsCountdown, float InRefreshDelay); // Function CommonUI.CommonDateTimeTextBlock.SetDateTimeValue // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x4e3f600
	void SetCountDownCompletionText(struct FText InCompletionText); // Function CommonUI.CommonDateTimeTextBlock.SetCountDownCompletionText // (Final|Native|Public|BlueprintCallable) // @ game+0x4e3f330
	struct FDateTime GetDateTime(); // Function CommonUI.CommonDateTimeTextBlock.GetDateTime // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e3f310
};

// Class CommonUI.CommonGameViewportClient
// Size: 0x420 (Inherited: 0x3e0)
struct UCommonGameViewportClient : UGameViewportClient {
	char pad_3E0[0x40]; // 0x3e0(0x40)
};

// Class CommonUI.CommonHardwareVisibilityBorder
// Size: 0x400 (Inherited: 0x3b0)
struct UCommonHardwareVisibilityBorder : UCommonBorder {
	struct FGameplayTagQuery VisibilityQuery; // 0x3b0(0x48)
	enum class ESlateVisibility VisibleType; // 0x3f8(0x01)
	enum class ESlateVisibility HiddenType; // 0x3f9(0x01)
	char pad_3FA[0x6]; // 0x3fa(0x06)
};

// Class CommonUI.CommonHierarchicalScrollBox
// Size: 0xd40 (Inherited: 0xd40)
struct UCommonHierarchicalScrollBox : UScrollBox {
};

// Class CommonUI.CommonLazyImage
// Size: 0x450 (Inherited: 0x330)
struct UCommonLazyImage : UImage {
	struct FSlateBrush LoadingBackgroundBrush; // 0x330(0xd0)
	struct FName MaterialTextureParamName; // 0x400(0x0c)
	char pad_40C[0x4]; // 0x40c(0x04)
	struct FMulticastInlineDelegate BP_OnLoadingStateChanged; // 0x410(0x10)
	char pad_420[0x30]; // 0x420(0x30)

	void SetMaterialTextureParamName(struct FName TextureParamName); // Function CommonUI.CommonLazyImage.SetMaterialTextureParamName // (Final|Native|Public|BlueprintCallable) // @ game+0x4e44420
	void SetBrushFromLazyTexture(struct TSoftObjectPtr<UTexture2D>& LazyTexture, bool bMatchSize); // Function CommonUI.CommonLazyImage.SetBrushFromLazyTexture // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4e44960
	void SetBrushFromLazyMaterial(struct TSoftObjectPtr<UMaterialInterface>& LazyMaterial); // Function CommonUI.CommonLazyImage.SetBrushFromLazyMaterial // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4e447b0
	void SetBrushFromLazyDisplayAsset(struct TSoftObjectPtr<UObject>& LazyObject, bool bMatchTextureSize); // Function CommonUI.CommonLazyImage.SetBrushFromLazyDisplayAsset // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4e445a0
	bool IsLoading(); // Function CommonUI.CommonLazyImage.IsLoading // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e44560
};

// Class CommonUI.CommonLazyWidget
// Size: 0x320 (Inherited: 0x1b8)
struct UCommonLazyWidget : UWidget {
	char pad_1B8[0x8]; // 0x1b8(0x08)
	struct FSlateBrush LoadingBackgroundBrush; // 0x1c0(0xd0)
	struct UUserWidget* Content; // 0x290(0x08)
	char pad_298[0x38]; // 0x298(0x38)
	struct FMulticastInlineDelegate BP_OnLoadingStateChanged; // 0x2d0(0x10)
	char pad_2E0[0x40]; // 0x2e0(0x40)

	void SetLazyContent(struct TSoftClassPtr<UObject> SoftWidget); // Function CommonUI.CommonLazyWidget.SetLazyContent // (Final|Native|Public|BlueprintCallable) // @ game+0x4e46340
	bool IsLoading(); // Function CommonUI.CommonLazyWidget.IsLoading // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e46300
	struct UUserWidget* GetContent(); // Function CommonUI.CommonLazyWidget.GetContent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bd42b0
};

// Class CommonUI.CommonListView
// Size: 0xcb0 (Inherited: 0xcb0)
struct UCommonListView : UListView {

	void SetEntrySpacing(float InEntrySpacing); // Function CommonUI.CommonListView.SetEntrySpacing // (Final|Native|Public|BlueprintCallable) // @ game+0x4e479f0
};

// Class CommonUI.LoadGuardSlot
// Size: 0x68 (Inherited: 0x40)
struct ULoadGuardSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function CommonUI.LoadGuardSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x4e47d90
	void SetPadding(struct FMargin InPadding); // Function CommonUI.LoadGuardSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x4e47f70
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function CommonUI.LoadGuardSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x4e47e80
};

// Class CommonUI.CommonLoadGuard
// Size: 0x340 (Inherited: 0x1d0)
struct UCommonLoadGuard : UContentWidget {
	struct FSlateBrush LoadingBackgroundBrush; // 0x1d0(0xd0)
	enum class EHorizontalAlignment ThrobberAlignment; // 0x2a0(0x01)
	char pad_2A1[0x3]; // 0x2a1(0x03)
	struct FMargin ThrobberPadding; // 0x2a4(0x10)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct FText LoadingText; // 0x2b8(0x18)
	struct UCommonTextStyle* TextStyle; // 0x2d0(0x08)
	struct FMulticastInlineDelegate BP_OnLoadingStateChanged; // 0x2d8(0x10)
	struct FSoftObjectPath SpinnerMaterialPath; // 0x2e8(0x28)
	char pad_310[0x30]; // 0x310(0x30)

	void SetLoadingText(struct FText& InLoadingText); // Function CommonUI.CommonLoadGuard.SetLoadingText // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4e48630
	void SetIsLoading(bool bInIsLoading); // Function CommonUI.CommonLoadGuard.SetIsLoading // (Final|Native|Public|BlueprintCallable) // @ game+0x4e48530
	void OnAssetLoaded__DelegateSignature(struct UObject* Object); // DelegateFunction CommonUI.CommonLoadGuard.OnAssetLoaded__DelegateSignature // (Public|Delegate) // @ game+0x19be2f0
	bool IsLoading(); // Function CommonUI.CommonLoadGuard.IsLoading // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e484f0
	void BP_GuardAndLoadAsset(struct TSoftObjectPtr<UObject>& InLazyAsset, struct FDelegate& OnAssetLoaded); // Function CommonUI.CommonLoadGuard.BP_GuardAndLoadAsset // (Final|Native|Private|HasOutParms|BlueprintCallable) // @ game+0x4e482a0
};

// Class CommonUI.CommonNumericTextBlock
// Size: 0x480 (Inherited: 0x3e0)
struct UCommonNumericTextBlock : UCommonTextBlock {
	struct FMulticastInlineDelegate OnInterpolationStartedEvent; // 0x3e0(0x10)
	struct FMulticastInlineDelegate OnInterpolationUpdatedEvent; // 0x3f0(0x10)
	struct FMulticastInlineDelegate OnOutroEvent; // 0x400(0x10)
	struct FMulticastInlineDelegate OnInterpolationEndedEvent; // 0x410(0x10)
	float CurrentNumericValue; // 0x420(0x04)
	enum class ECommonNumericType NumericType; // 0x424(0x01)
	char pad_425[0x3]; // 0x425(0x03)
	struct FCommonNumberFormattingOptions FormattingSpecification; // 0x428(0x14)
	float EaseOutInterpolationExponent; // 0x43c(0x04)
	float InterpolationUpdateInterval; // 0x440(0x04)
	float PostInterpolationShrinkDuration; // 0x444(0x04)
	bool PerformSizeInterpolation; // 0x448(0x01)
	bool IsPercentage; // 0x449(0x01)
	char pad_44A[0x36]; // 0x44a(0x36)

	void SetNumericType(enum class ECommonNumericType InNumericType); // Function CommonUI.CommonNumericTextBlock.SetNumericType // (Final|Native|Public|BlueprintCallable) // @ game+0x4e4c320
	void SetCurrentValue(float NewValue); // Function CommonUI.CommonNumericTextBlock.SetCurrentValue // (Final|Native|Public|BlueprintCallable) // @ game+0x4e4c710
	void OnOutro__DelegateSignature(struct UCommonNumericTextBlock* NumericTextBlock); // DelegateFunction CommonUI.CommonNumericTextBlock.OnOutro__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x19be2f0
	void OnInterpolationUpdated__DelegateSignature(struct UCommonNumericTextBlock* NumericTextBlock, float LastValue, float NewValue); // DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationUpdated__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x19be2f0
	void OnInterpolationStarted__DelegateSignature(struct UCommonNumericTextBlock* NumericTextBlock); // DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationStarted__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x19be2f0
	void OnInterpolationEnded__DelegateSignature(struct UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted); // DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationEnded__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x19be2f0
	bool IsInterpolatingNumericValue(); // Function CommonUI.CommonNumericTextBlock.IsInterpolatingNumericValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e4c420
	void InterpolateToValue(float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset); // Function CommonUI.CommonNumericTextBlock.InterpolateToValue // (Final|Native|Public|BlueprintCallable) // @ game+0x4e4c450
	float GetTargetValue(); // Function CommonUI.CommonNumericTextBlock.GetTargetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e4c820
};

// Class CommonUI.CommonPoolableWidgetInterface
// Size: 0x30 (Inherited: 0x30)
struct UCommonPoolableWidgetInterface : UInterface {

	void OnReleaseToPool(); // Function CommonUI.CommonPoolableWidgetInterface.OnReleaseToPool // (Native|Event|Protected|BlueprintEvent) // @ game+0x4006250
	void OnAcquireFromPool(); // Function CommonUI.CommonPoolableWidgetInterface.OnAcquireFromPool // (Native|Event|Protected|BlueprintEvent) // @ game+0x4e4e2f0
};

// Class CommonUI.CommonRichTextBlock
// Size: 0x910 (Inherited: 0x8d0)
struct UCommonRichTextBlock : URichTextBlock {
	enum class ERichTextInlineIconDisplayMode InlineIconDisplayMode; // 0x8d0(0x01)
	bool bTintInlineIcon; // 0x8d1(0x01)
	char pad_8D2[0x6]; // 0x8d2(0x06)
	struct UCommonTextStyle* DefaultTextStyleOverrideClass; // 0x8d8(0x08)
	float MobileTextBlockScale; // 0x8e0(0x04)
	char pad_8E4[0x4]; // 0x8e4(0x04)
	struct UCommonTextScrollStyle* ScrollStyle; // 0x8e8(0x08)
	bool bIsScrollingEnabled; // 0x8f0(0x01)
	bool bDisplayAllCaps; // 0x8f1(0x01)
	bool bAutoCollapseWithEmptyText; // 0x8f2(0x01)
	char pad_8F3[0x1d]; // 0x8f3(0x1d)

	void SetScrollingEnabled(bool bInIsScrollingEnabled); // Function CommonUI.CommonRichTextBlock.SetScrollingEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x4e4e670
};

// Class CommonUI.CommonRotator
// Size: 0x16c0 (Inherited: 0x1670)
struct UCommonRotator : UCommonButtonBase {
	char pad_1670[0x8]; // 0x1670(0x08)
	struct FMulticastInlineDelegate OnRotated; // 0x1678(0x10)
	char pad_1688[0x18]; // 0x1688(0x18)
	struct UCommonTextBlock* MyText; // 0x16a0(0x08)
	char pad_16A8[0x18]; // 0x16a8(0x18)

	void ShiftTextRight(); // Function CommonUI.CommonRotator.ShiftTextRight // (Final|Native|Public|BlueprintCallable) // @ game+0x4e52ac0
	void ShiftTextLeft(); // Function CommonUI.CommonRotator.ShiftTextLeft // (Final|Native|Public|BlueprintCallable) // @ game+0x4e52ae0
	void SetSelectedItem(int32_t InValue); // Function CommonUI.CommonRotator.SetSelectedItem // (Native|Public|BlueprintCallable) // @ game+0x4e52b20
	void PopulateTextLabels(struct TArray<struct FText> Labels); // Function CommonUI.CommonRotator.PopulateTextLabels // (Final|Native|Public|BlueprintCallable) // @ game+0x4e52cf0
	struct FText GetSelectedText(); // Function CommonUI.CommonRotator.GetSelectedText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e52c20
	int32_t GetSelectedIndex(); // Function CommonUI.CommonRotator.GetSelectedIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e52b00
	void BP_OnOptionsPopulated(int32_t Count); // Function CommonUI.CommonRotator.BP_OnOptionsPopulated // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnOptionSelected(int32_t Index); // Function CommonUI.CommonRotator.BP_OnOptionSelected // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
};

// Class CommonUI.CommonTabListWidgetBase
// Size: 0x448 (Inherited: 0x340)
struct UCommonTabListWidgetBase : UCommonUserWidget {
	struct FMulticastInlineDelegate OnTabSelected; // 0x340(0x10)
	struct FMulticastInlineDelegate OnTabButtonCreation; // 0x350(0x10)
	struct FMulticastInlineDelegate OnTabButtonRemoval; // 0x360(0x10)
	struct FMulticastInlineDelegate OnTabListRebuilt; // 0x370(0x10)
	struct FDataTableRowHandle NextTabInputActionData; // 0x380(0x18)
	struct FDataTableRowHandle PreviousTabInputActionData; // 0x398(0x18)
	struct UInputAction* NextTabEnhancedInputAction; // 0x3b0(0x08)
	struct UInputAction* PreviousTabEnhancedInputAction; // 0x3b8(0x08)
	bool bAutoListenForInput; // 0x3c0(0x01)
	bool bDeferRebuildingTabList; // 0x3c1(0x01)
	char pad_3C2[0x2]; // 0x3c2(0x02)
	struct TWeakObjectPtr<struct UCommonAnimatedSwitcher> LinkedSwitcher; // 0x3c4(0x08)
	char pad_3CC[0x4]; // 0x3cc(0x04)
	struct UCommonButtonGroupBase* TabButtonGroup; // 0x3d0(0x08)
	char pad_3D8[0x8]; // 0x3d8(0x08)
	struct TMap<struct FName, struct FCommonRegisteredTabInfo> RegisteredTabsByID; // 0x3e0(0x50)
	char pad_430[0x18]; // 0x430(0x18)

	void SetTabVisibility(struct FName TabNameID, enum class ESlateVisibility NewVisibility); // Function CommonUI.CommonTabListWidgetBase.SetTabVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x4e54b40
	void SetTabInteractionEnabled(struct FName TabNameID, bool bEnable); // Function CommonUI.CommonTabListWidgetBase.SetTabInteractionEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x4e547e0
	void SetTabEnabled(struct FName TabNameID, bool bEnable); // Function CommonUI.CommonTabListWidgetBase.SetTabEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x4e54990
	void SetListeningForInput(bool bShouldListen); // Function CommonUI.CommonTabListWidgetBase.SetListeningForInput // (Native|Public|BlueprintCallable) // @ game+0x4e54500
	void SetLinkedSwitcher(struct UCommonAnimatedSwitcher* CommonSwitcher); // Function CommonUI.CommonTabListWidgetBase.SetLinkedSwitcher // (Native|Public|BlueprintCallable) // @ game+0x3ece530
	bool SelectTabByID(struct FName TabNameID, bool bSuppressClickFeedback); // Function CommonUI.CommonTabListWidgetBase.SelectTabByID // (Final|Native|Public|BlueprintCallable) // @ game+0x4e54e40
	bool RemoveTab(struct FName TabNameID); // Function CommonUI.CommonTabListWidgetBase.RemoveTab // (Final|Native|Public|BlueprintCallable) // @ game+0x4e55050
	void RemoveAllTabs(); // Function CommonUI.CommonTabListWidgetBase.RemoveAllTabs // (Final|Native|Public|BlueprintCallable) // @ game+0x4e55030
	bool RegisterTab(struct FName TabNameID, struct UCommonButtonBase* ButtonWidgetType, struct UWidget* ContentWidget, int32_t TabIndex); // Function CommonUI.CommonTabListWidgetBase.RegisterTab // (Final|Native|Public|BlueprintCallable) // @ game+0x4e55160
	void OnTabSelected__DelegateSignature(struct FName TabId); // DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabSelected__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x19be2f0
	void OnTabListRebuilt__DelegateSignature(); // DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabListRebuilt__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x19be2f0
	void OnTabButtonRemoval__DelegateSignature(struct FName TabId, struct UCommonButtonBase* TabButton); // DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabButtonRemoval__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x19be2f0
	void OnTabButtonCreation__DelegateSignature(struct FName TabId, struct UCommonButtonBase* TabButton); // DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabButtonCreation__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x19be2f0
	void HandleTabRemoval(struct FName TabNameID, struct UCommonButtonBase* TabButton); // Function CommonUI.CommonTabListWidgetBase.HandleTabRemoval // (Native|Event|Protected|BlueprintEvent) // @ game+0x4e53ff0
	void HandleTabCreation(struct FName TabNameID, struct UCommonButtonBase* TabButton); // Function CommonUI.CommonTabListWidgetBase.HandleTabCreation // (Native|Event|Protected|BlueprintEvent) // @ game+0x4e541b0
	void HandleTabButtonSelected(struct UCommonButtonBase* SelectedTabButton, int32_t ButtonIndex); // Function CommonUI.CommonTabListWidgetBase.HandleTabButtonSelected // (Final|Native|Protected) // @ game+0x4e53e60
	void HandlePreviousTabInputAction(bool& bPassThrough); // Function CommonUI.CommonTabListWidgetBase.HandlePreviousTabInputAction // (Final|Native|Protected|HasOutParms) // @ game+0x4e53d70
	void HandlePreLinkedSwitcherChanged_BP(); // Function CommonUI.CommonTabListWidgetBase.HandlePreLinkedSwitcherChanged_BP // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void HandlePostLinkedSwitcherChanged_BP(); // Function CommonUI.CommonTabListWidgetBase.HandlePostLinkedSwitcherChanged_BP // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void HandleNextTabInputAction(bool& bPassThrough); // Function CommonUI.CommonTabListWidgetBase.HandleNextTabInputAction // (Final|Native|Protected|HasOutParms) // @ game+0x4e53c80
	struct FName GetTabIdAtIndex(int32_t Index); // Function CommonUI.CommonTabListWidgetBase.GetTabIdAtIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e54cf0
	int32_t GetTabCount(); // Function CommonUI.CommonTabListWidgetBase.GetTabCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e55000
	struct UCommonButtonBase* GetTabButtonBaseByID(struct FName TabNameID); // Function CommonUI.CommonTabListWidgetBase.GetTabButtonBaseByID // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e54370
	struct FName GetSelectedTabId(); // Function CommonUI.CommonTabListWidgetBase.GetSelectedTabId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e54e00
	struct UCommonAnimatedSwitcher* GetLinkedSwitcher(); // Function CommonUI.CommonTabListWidgetBase.GetLinkedSwitcher // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e55460
	struct FName GetActiveTab(); // Function CommonUI.CommonTabListWidgetBase.GetActiveTab // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e554a0
	void DisableTabWithReason(struct FName TabNameID, struct FText& Reason); // Function CommonUI.CommonTabListWidgetBase.DisableTabWithReason // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4e54600
};

// Class CommonUI.CommonTextStyle
// Size: 0x1c0 (Inherited: 0x30)
struct UCommonTextStyle : UObject {
	struct FSlateFontInfo Font; // 0x30(0x60)
	struct FLinearColor Color; // 0x90(0x10)
	bool bUsesDropShadow; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FVector2D ShadowOffset; // 0xa8(0x10)
	struct FLinearColor ShadowColor; // 0xb8(0x10)
	struct FMargin Margin; // 0xc8(0x10)
	char pad_D8[0x8]; // 0xd8(0x08)
	struct FSlateBrush StrikeBrush; // 0xe0(0xd0)
	float LineHeightPercentage; // 0x1b0(0x04)
	char pad_1B4[0xc]; // 0x1b4(0x0c)

	void GetStrikeBrush(struct FSlateBrush& OutStrikeBrush); // Function CommonUI.CommonTextStyle.GetStrikeBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e58a10
	void GetShadowOffset(struct FVector2D& OutShadowOffset); // Function CommonUI.CommonTextStyle.GetShadowOffset // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e58cf0
	void GetShadowColor(struct FLinearColor& OutColor); // Function CommonUI.CommonTextStyle.GetShadowColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e58c00
	void GetMargin(struct FMargin& OutMargin); // Function CommonUI.CommonTextStyle.GetMargin // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e58e00
	float GetLineHeightPercentage(); // Function CommonUI.CommonTextStyle.GetLineHeightPercentage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e58de0
	void GetFont(struct FSlateFontInfo& OutFont); // Function CommonUI.CommonTextStyle.GetFont // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e58ff0
	void GetColor(struct FLinearColor& OutColor); // Function CommonUI.CommonTextStyle.GetColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e58f00
};

// Class CommonUI.CommonTextScrollStyle
// Size: 0x48 (Inherited: 0x30)
struct UCommonTextScrollStyle : UObject {
	float Speed; // 0x30(0x04)
	float StartDelay; // 0x34(0x04)
	float EndDelay; // 0x38(0x04)
	float FadeInDelay; // 0x3c(0x04)
	float FadeOutDelay; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class CommonUI.CommonTileView
// Size: 0xce0 (Inherited: 0xce0)
struct UCommonTileView : UTileView {
};

// Class CommonUI.CommonTreeView
// Size: 0xd10 (Inherited: 0xd10)
struct UCommonTreeView : UTreeView {
};

// Class CommonUI.CommonUIEditorSettings
// Size: 0xc8 (Inherited: 0x30)
struct UCommonUIEditorSettings : UObject {
	struct TSoftClassPtr<UObject> TemplateTextStyle; // 0x30(0x30)
	struct TSoftClassPtr<UObject> TemplateButtonStyle; // 0x60(0x30)
	struct TSoftClassPtr<UObject> TemplateBorderStyle; // 0x90(0x30)
	char pad_C0[0x8]; // 0xc0(0x08)
};

// Class CommonUI.CommonUILibrary
// Size: 0x30 (Inherited: 0x30)
struct UCommonUILibrary : UBlueprintFunctionLibrary {

	struct UWidget* FindParentWidgetOfType(struct UWidget* StartingWidget, struct UWidget* Type); // Function CommonUI.CommonUILibrary.FindParentWidgetOfType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4e5b870
};

// Class CommonUI.CommonUIRichTextData
// Size: 0x38 (Inherited: 0x30)
struct UCommonUIRichTextData : UObject {
	struct UDataTable* InlineIconSet; // 0x30(0x08)
};

// Class CommonUI.CommonUISettings
// Size: 0x1f0 (Inherited: 0x30)
struct UCommonUISettings : UObject {
	bool bAutoLoadData; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TSoftObjectPtr<UObject> DefaultImageResourceObject; // 0x38(0x30)
	struct TSoftObjectPtr<UMaterialInterface> DefaultThrobberMaterial; // 0x68(0x30)
	struct TSoftClassPtr<UObject> DefaultRichTextDataClass; // 0x98(0x30)
	struct TArray<struct FGameplayTag> PlatformTraits; // 0xc8(0x10)
	char pad_D8[0x28]; // 0xd8(0x28)
	struct UObject* DefaultImageResourceObjectInstance; // 0x100(0x08)
	struct UMaterialInterface* DefaultThrobberMaterialInstance; // 0x108(0x08)
	struct FSlateBrush DefaultThrobberBrush; // 0x110(0xd0)
	struct UCommonUIRichTextData* RichTextDataInstance; // 0x1e0(0x08)
	char pad_1E8[0x8]; // 0x1e8(0x08)
};

// Class CommonUI.CommonUISubsystemBase
// Size: 0x48 (Inherited: 0x38)
struct UCommonUISubsystemBase : UGameInstanceSubsystem {
	char pad_38[0x10]; // 0x38(0x10)

	struct FSlateBrush GetInputActionButtonIcon(struct FDataTableRowHandle& InputActionRowHandle, enum class ECommonInputType InputType, struct FName& GamepadName); // Function CommonUI.CommonUISubsystemBase.GetInputActionButtonIcon // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e5e3a0
	struct FSlateBrush GetEnhancedInputActionButtonIcon(struct UInputAction* InputAction, struct ULocalPlayer* LocalPlayer); // Function CommonUI.CommonUISubsystemBase.GetEnhancedInputActionButtonIcon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e5e190
};

// Class CommonUI.CommonInputMetadata
// Size: 0x38 (Inherited: 0x30)
struct UCommonInputMetadata : UObject {
	int32_t NavBarPriority; // 0x30(0x04)
	bool bIsGenericInputAction; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// Class CommonUI.CommonMappingContextMetadataInterface
// Size: 0x30 (Inherited: 0x30)
struct UCommonMappingContextMetadataInterface : UInterface {
};

// Class CommonUI.CommonMappingContextMetadata
// Size: 0x98 (Inherited: 0x38)
struct UCommonMappingContextMetadata : UDataAsset {
	char pad_38[0x8]; // 0x38(0x08)
	struct UCommonInputMetadata* EnhancedInputMetadata; // 0x40(0x08)
	struct TMap<struct UInputAction*, struct UCommonInputMetadata*> PerActionEnhancedInputMetadata; // 0x48(0x50)
};

// Class CommonUI.CommonUIVisibilitySubsystem
// Size: 0x90 (Inherited: 0x38)
struct UCommonUIVisibilitySubsystem : ULocalPlayerSubsystem {
	char pad_38[0x58]; // 0x38(0x58)
};

// Class CommonUI.CommonVideoPlayer
// Size: 0x310 (Inherited: 0x1b8)
struct UCommonVideoPlayer : UWidget {
	struct UMediaSource* Video; // 0x1b8(0x08)
	struct UMediaPlayer* MediaPlayer; // 0x1c0(0x08)
	struct UMediaTexture* MediaTexture; // 0x1c8(0x08)
	struct UMaterial* VideoMaterial; // 0x1d0(0x08)
	struct UMediaSoundComponent* SoundComponent; // 0x1d8(0x08)
	struct FSlateBrush VideoBrush; // 0x1e0(0xd0)
	char pad_2B0[0x60]; // 0x2b0(0x60)
};

// Class CommonUI.CommonVisibilitySwitcher
// Size: 0x208 (Inherited: 0x1e0)
struct UCommonVisibilitySwitcher : UOverlay {
	enum class ESlateVisibility ShownVisibility; // 0x1e0(0x01)
	char pad_1E1[0x3]; // 0x1e1(0x03)
	int32_t ActiveWidgetIndex; // 0x1e4(0x04)
	bool bAutoActivateSlot; // 0x1e8(0x01)
	bool bActivateFirstSlotOnAdding; // 0x1e9(0x01)
	char pad_1EA[0x1e]; // 0x1ea(0x1e)

	void SetActiveWidgetIndex(int32_t Index); // Function CommonUI.CommonVisibilitySwitcher.SetActiveWidgetIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x4e64400
	void SetActiveWidget(struct UWidget* Widget); // Function CommonUI.CommonVisibilitySwitcher.SetActiveWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x4e64230
	void IncrementActiveWidgetIndex(bool bAllowWrapping); // Function CommonUI.CommonVisibilitySwitcher.IncrementActiveWidgetIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x4e64120
	int32_t GetActiveWidgetIndex(); // Function CommonUI.CommonVisibilitySwitcher.GetActiveWidgetIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e643e0
	struct UWidget* GetActiveWidget(); // Function CommonUI.CommonVisibilitySwitcher.GetActiveWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e64390
	void DecrementActiveWidgetIndex(bool bAllowWrapping); // Function CommonUI.CommonVisibilitySwitcher.DecrementActiveWidgetIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x4e64000
	void DeactivateVisibleSlot(); // Function CommonUI.CommonVisibilitySwitcher.DeactivateVisibleSlot // (Final|Native|Public|BlueprintCallable) // @ game+0x4e63ea0
	void ActivateVisibleSlot(); // Function CommonUI.CommonVisibilitySwitcher.ActivateVisibleSlot // (Final|Native|Public|BlueprintCallable) // @ game+0x4e63f50
};

// Class CommonUI.CommonVisibilitySwitcherSlot
// Size: 0x70 (Inherited: 0x60)
struct UCommonVisibilitySwitcherSlot : UOverlaySlot {
	char pad_60[0x10]; // 0x60(0x10)
};

// Class CommonUI.UCommonVisibilityWidgetBase
// Size: 0x410 (Inherited: 0x3b0)
struct UUCommonVisibilityWidgetBase : UCommonBorder {
	struct TMap<struct FName, bool> VisibilityControls; // 0x3b0(0x50)
	bool bShowForGamepad; // 0x400(0x01)
	bool bShowForMouseAndKeyboard; // 0x401(0x01)
	bool bShowForTouch; // 0x402(0x01)
	enum class ESlateVisibility VisibleType; // 0x403(0x01)
	enum class ESlateVisibility HiddenType; // 0x404(0x01)
	char pad_405[0xb]; // 0x405(0x0b)

	struct TArray<struct FName> GetRegisteredPlatforms(); // Function CommonUI.UCommonVisibilityWidgetBase.GetRegisteredPlatforms // (Final|Native|Static|Protected) // @ game+0x4e65510
};

// Class CommonUI.CommonVisualAttachment
// Size: 0x228 (Inherited: 0x208)
struct UCommonVisualAttachment : USizeBox {
	struct FVector2D ContentAnchor; // 0x208(0x10)
	char pad_218[0x10]; // 0x218(0x10)
};

// Class CommonUI.CommonWidgetCarousel
// Size: 0x218 (Inherited: 0x1d0)
struct UCommonWidgetCarousel : UPanelWidget {
	int32_t ActiveWidgetIndex; // 0x1d0(0x04)
	char pad_1D4[0x4]; // 0x1d4(0x04)
	struct FMulticastInlineDelegate OnCurrentPageIndexChanged; // 0x1d8(0x10)
	char pad_1E8[0x30]; // 0x1e8(0x30)

	void SetActiveWidgetIndex(int32_t Index); // Function CommonUI.CommonWidgetCarousel.SetActiveWidgetIndex // (Native|Public|BlueprintCallable) // @ game+0x3903d80
	void SetActiveWidget(struct UWidget* Widget); // Function CommonUI.CommonWidgetCarousel.SetActiveWidget // (Native|Public|BlueprintCallable) // @ game+0x3865bc0
	void PreviousPage(); // Function CommonUI.CommonWidgetCarousel.PreviousPage // (Final|Native|Public|BlueprintCallable) // @ game+0x4e67000
	void NextPage(); // Function CommonUI.CommonWidgetCarousel.NextPage // (Final|Native|Public|BlueprintCallable) // @ game+0x4e67040
	struct UWidget* GetWidgetAtIndex(int32_t Index); // Function CommonUI.CommonWidgetCarousel.GetWidgetAtIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3903c50
	int32_t GetActiveWidgetIndex(); // Function CommonUI.CommonWidgetCarousel.GetActiveWidgetIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e671d0
	void EndAutoScrolling(); // Function CommonUI.CommonWidgetCarousel.EndAutoScrolling // (Final|Native|Public|BlueprintCallable) // @ game+0x4e670c0
	void BeginAutoScrolling(float ScrollInterval); // Function CommonUI.CommonWidgetCarousel.BeginAutoScrolling // (Final|Native|Public|BlueprintCallable) // @ game+0x4e670e0
};

// Class CommonUI.CommonWidgetCarouselNavBar
// Size: 0x200 (Inherited: 0x1b8)
struct UCommonWidgetCarouselNavBar : UWidget {
	struct UCommonButtonBase* ButtonWidgetType; // 0x1b8(0x08)
	struct FMargin ButtonPadding; // 0x1c0(0x10)
	char pad_1D0[0x10]; // 0x1d0(0x10)
	struct UCommonWidgetCarousel* LinkedCarousel; // 0x1e0(0x08)
	struct UCommonButtonGroupBase* ButtonGroup; // 0x1e8(0x08)
	struct TArray<struct UCommonButtonBase*> Buttons; // 0x1f0(0x10)

	void SetLinkedCarousel(struct UCommonWidgetCarousel* CommonCarousel); // Function CommonUI.CommonWidgetCarouselNavBar.SetLinkedCarousel // (Final|Native|Public|BlueprintCallable) // @ game+0x4e68b20
	void HandlePageChanged(struct UCommonWidgetCarousel* CommonCarousel, int32_t PageIndex); // Function CommonUI.CommonWidgetCarouselNavBar.HandlePageChanged // (Final|Native|Protected) // @ game+0x4e68970
	void HandleButtonClicked(struct UCommonButtonBase* AssociatedButton, int32_t ButtonIndex); // Function CommonUI.CommonWidgetCarouselNavBar.HandleButtonClicked // (Final|Native|Protected) // @ game+0x4e68790
};

// Class CommonUI.CommonWidgetGroupBase
// Size: 0x30 (Inherited: 0x30)
struct UCommonWidgetGroupBase : UObject {

	void RemoveWidget(struct UWidget* InWidget); // Function CommonUI.CommonWidgetGroupBase.RemoveWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x4e6c3f0
	void RemoveAll(); // Function CommonUI.CommonWidgetGroupBase.RemoveAll // (Final|Native|Public|BlueprintCallable) // @ game+0x272ab50
	void AddWidget(struct UWidget* InWidget); // Function CommonUI.CommonWidgetGroupBase.AddWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x4e6c560
};

// Class CommonUI.CommonButtonGroupBase
// Size: 0x118 (Inherited: 0x30)
struct UCommonButtonGroupBase : UCommonWidgetGroupBase {
	struct FMulticastInlineDelegate OnSelectedButtonBaseChanged; // 0x30(0x10)
	char pad_40[0x18]; // 0x40(0x18)
	struct FMulticastInlineDelegate OnHoveredButtonBaseChanged; // 0x58(0x10)
	char pad_68[0x18]; // 0x68(0x18)
	struct FMulticastInlineDelegate OnButtonBaseClicked; // 0x80(0x10)
	char pad_90[0x18]; // 0x90(0x18)
	struct FMulticastInlineDelegate OnButtonBaseDoubleClicked; // 0xa8(0x10)
	char pad_B8[0x18]; // 0xb8(0x18)
	struct FMulticastInlineDelegate OnSelectionCleared; // 0xd0(0x10)
	char pad_E0[0x18]; // 0xe0(0x18)
	bool bSelectionRequired; // 0xf8(0x01)
	char pad_F9[0x1f]; // 0xf9(0x1f)

	void SetSelectionRequired(bool bRequireSelection); // Function CommonUI.CommonButtonGroupBase.SetSelectionRequired // (Final|Native|Public|BlueprintCallable) // @ game+0x4e69fc0
	void SelectPreviousButton(bool bAllowWrap); // Function CommonUI.CommonButtonGroupBase.SelectPreviousButton // (Final|Native|Public|BlueprintCallable) // @ game+0x4e69da0
	void SelectNextButton(bool bAllowWrap); // Function CommonUI.CommonButtonGroupBase.SelectNextButton // (Final|Native|Public|BlueprintCallable) // @ game+0x4e69ea0
	void SelectButtonAtIndex(int32_t ButtonIndex, bool bAllowSound); // Function CommonUI.CommonButtonGroupBase.SelectButtonAtIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x4e69c10
	void OnSelectionStateChangedBase(struct UCommonButtonBase* BaseButton, bool bIsSelected); // Function CommonUI.CommonButtonGroupBase.OnSelectionStateChangedBase // (Native|Protected) // @ game+0x4e69790
	void OnHandleButtonBaseDoubleClicked(struct UCommonButtonBase* BaseButton); // Function CommonUI.CommonButtonGroupBase.OnHandleButtonBaseDoubleClicked // (Native|Protected) // @ game+0x3c4d820
	void OnHandleButtonBaseClicked(struct UCommonButtonBase* BaseButton); // Function CommonUI.CommonButtonGroupBase.OnHandleButtonBaseClicked // (Native|Protected) // @ game+0x3a67cc0
	void OnButtonBaseUnhovered(struct UCommonButtonBase* BaseButton); // Function CommonUI.CommonButtonGroupBase.OnButtonBaseUnhovered // (Native|Protected) // @ game+0x4e69690
	void OnButtonBaseHovered(struct UCommonButtonBase* BaseButton); // Function CommonUI.CommonButtonGroupBase.OnButtonBaseHovered // (Native|Protected) // @ game+0x3bdd2a0
	bool HasAnyButtons(); // Function CommonUI.CommonButtonGroupBase.HasAnyButtons // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e69930
	int32_t GetSelectedButtonIndex(); // Function CommonUI.CommonButtonGroupBase.GetSelectedButtonIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x49c6d80
	struct UCommonButtonBase* GetSelectedButtonBase(); // Function CommonUI.CommonButtonGroupBase.GetSelectedButtonBase // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e69960
	int32_t GetHoveredButtonIndex(); // Function CommonUI.CommonButtonGroupBase.GetHoveredButtonIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e69bf0
	int32_t GetButtonCount(); // Function CommonUI.CommonButtonGroupBase.GetButtonCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x361bfc0
	struct UCommonButtonBase* GetButtonBaseAtIndex(int32_t Index); // Function CommonUI.CommonButtonGroupBase.GetButtonBaseAtIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e699c0
	int32_t FindButtonIndex(struct UCommonButtonBase* ButtonToFind); // Function CommonUI.CommonButtonGroupBase.FindButtonIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e69af0
	void DeselectAll(); // Function CommonUI.CommonButtonGroupBase.DeselectAll // (Final|Native|Public|BlueprintCallable) // @ game+0x4e69fa0
};

// Class CommonUI.CommonBoundActionBar
// Size: 0x2c0 (Inherited: 0x298)
struct UCommonBoundActionBar : UDynamicEntryBoxBase {
	char pad_298[0x18]; // 0x298(0x18)
	struct UCommonButtonBase* ActionButtonClass; // 0x2b0(0x08)
	bool bDisplayOwningPlayerActionsOnly; // 0x2b8(0x01)
	bool bIgnoreDuplicateActions; // 0x2b9(0x01)
	char pad_2BA[0x6]; // 0x2ba(0x06)

	void SetDisplayOwningPlayerActionsOnly(bool bShouldOnlyDisplayOwningPlayerActions); // Function CommonUI.CommonBoundActionBar.SetDisplayOwningPlayerActionsOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x4e6f6d0
};

// Class CommonUI.CommonBoundActionButton
// Size: 0x1680 (Inherited: 0x1670)
struct UCommonBoundActionButton : UCommonButtonBase {
	struct UCommonTextBlock* Text_ActionName; // 0x1670(0x08)
	char pad_1678[0x8]; // 0x1678(0x08)

	void OnUpdateInputAction(); // Function CommonUI.CommonBoundActionButton.OnUpdateInputAction // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
};

// Class CommonUI.CommonGenericInputActionDataTable
// Size: 0xb8 (Inherited: 0xb8)
struct UCommonGenericInputActionDataTable : UDataTable {
};

// Class CommonUI.CommonInputActionDataProcessor
// Size: 0x30 (Inherited: 0x30)
struct UCommonInputActionDataProcessor : UObject {
};

// Class CommonUI.CommonUIActionRouterBase
// Size: 0x180 (Inherited: 0x38)
struct UCommonUIActionRouterBase : ULocalPlayerSubsystem {
	char pad_38[0x148]; // 0x38(0x148)
};

// Class CommonUI.CommonUIInputSettings
// Size: 0x80 (Inherited: 0x30)
struct UCommonUIInputSettings : UObject {
	bool bLinkCursorToGamepadFocus; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t UIActionProcessingPriority; // 0x34(0x04)
	struct TArray<struct FUIInputAction> InputActions; // 0x38(0x10)
	struct TArray<struct FUIInputAction> ActionOverrides; // 0x48(0x10)
	struct FCommonAnalogCursorSettings AnalogCursorSettings; // 0x58(0x24)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class CommonUI.CommonActivatableWidgetContainerBase
// Size: 0x2d8 (Inherited: 0x1b8)
struct UCommonActivatableWidgetContainerBase : UWidget {
	char pad_1B8[0x18]; // 0x1b8(0x18)
	enum class ECommonSwitcherTransition TransitionType; // 0x1d0(0x01)
	enum class ETransitionCurve TransitionCurveType; // 0x1d1(0x01)
	char pad_1D2[0x2]; // 0x1d2(0x02)
	float TransitionDuration; // 0x1d4(0x04)
	struct TArray<struct UCommonActivatableWidget*> WidgetList; // 0x1d8(0x10)
	struct UCommonActivatableWidget* DisplayedWidget; // 0x1e8(0x08)
	struct FUserWidgetPool GeneratedWidgetsPool; // 0x1f0(0x88)
	char pad_278[0x60]; // 0x278(0x60)

	void SetTransitionDuration(float Duration); // Function CommonUI.CommonActivatableWidgetContainerBase.SetTransitionDuration // (Final|Native|Public|BlueprintCallable) // @ game+0x4e97a80
	void RemoveWidget(struct UCommonActivatableWidget* WidgetToRemove); // Function CommonUI.CommonActivatableWidgetContainerBase.RemoveWidget // (Final|Native|Private|BlueprintCallable) // @ game+0x4e97850
	float GetTransitionDuration(); // Function CommonUI.CommonActivatableWidgetContainerBase.GetTransitionDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e97a60
	struct UCommonActivatableWidget* GetActiveWidget(); // Function CommonUI.CommonActivatableWidgetContainerBase.GetActiveWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e97bb0
	void ClearWidgets(); // Function CommonUI.CommonActivatableWidgetContainerBase.ClearWidgets // (Final|Native|Public|BlueprintCallable) // @ game+0x4e97b90
	struct UCommonActivatableWidget* BP_AddWidget(struct UCommonActivatableWidget* ActivatableWidgetClass); // Function CommonUI.CommonActivatableWidgetContainerBase.BP_AddWidget // (Final|Native|Private|BlueprintCallable) // @ game+0x4e97950
};

// Class CommonUI.CommonActivatableWidgetStack
// Size: 0x2e8 (Inherited: 0x2d8)
struct UCommonActivatableWidgetStack : UCommonActivatableWidgetContainerBase {
	struct UCommonActivatableWidget* RootContentWidgetClass; // 0x2d8(0x08)
	struct UCommonActivatableWidget* RootContentWidget; // 0x2e0(0x08)
};

// Class CommonUI.CommonActivatableWidgetQueue
// Size: 0x2d8 (Inherited: 0x2d8)
struct UCommonActivatableWidgetQueue : UCommonActivatableWidgetContainerBase {
};

