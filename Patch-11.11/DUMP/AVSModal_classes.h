// WidgetBlueprintGeneratedClass AVSModal.AVSModal_C
// Size: 0x4ad (Inherited: 0x320)
struct UAVSModal_C : UAVSScreenV1 {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UVerticalBox* ActivateNumber; // 0x328(0x08)
	struct UTextBlock* ActivationErrorText; // 0x330(0x08)
	struct UTextBlock* ActivationTitle; // 0x338(0x08)
	struct UAVSComboBox_C* AVSComboBox; // 0x340(0x08)
	struct USpacer* CancelButtonSpacer; // 0x348(0x08)
	struct USpacer* CancelButtonSpacer_3; // 0x350(0x08)
	struct UVerticalBox* Confirmation; // 0x358(0x08)
	struct UEditableTextBox* ConfirmationCode; // 0x360(0x08)
	struct UTextBlock* ConfirmationDescription; // 0x368(0x08)
	struct UTextBlock* ConfirmationErrorText; // 0x370(0x08)
	struct UTextBlock* ConfirmationTimerText; // 0x378(0x08)
	struct UVerticalBox* DeactivateNumber; // 0x380(0x08)
	struct UTextBlock* DeactivationErrorText; // 0x388(0x08)
	struct UTextBlock* DeactivationTitle; // 0x390(0x08)
	struct UImage* Gradient; // 0x398(0x08)
	struct UImage* Image_1; // 0x3a0(0x08)
	struct UImage* Image_106; // 0x3a8(0x08)
	struct UImage* Image_127; // 0x3b0(0x08)
	struct UImage* Image_135; // 0x3b8(0x08)
	struct UVerticalBox* Loading; // 0x3c0(0x08)
	struct UImage* Logo; // 0x3c8(0x08)
	struct UImage* Pattern; // 0x3d0(0x08)
	struct UEditableTextBox* PhoneNumber; // 0x3d8(0x08)
	struct UButton* ResendCodeButton; // 0x3e0(0x08)
	struct USharedBackButton_C* SharedBackButton; // 0x3e8(0x08)
	struct USizeBox* SizeBoxCancel_2; // 0x3f0(0x08)
	struct USizeBox* SizeBoxCancel_3; // 0x3f8(0x08)
	struct USizeBox* SizeBoxConfirmation; // 0x400(0x08)
	struct USizeBox* SizeBoxConfirmation_4; // 0x408(0x08)
	struct USizeBox* SizeBoxConfirmation_5; // 0x410(0x08)
	struct UVerticalBox* Success; // 0x418(0x08)
	struct UTextBlock* SuccessDescription; // 0x420(0x08)
	struct UTextBlock* SuccessTitle; // 0x428(0x08)
	struct UThrobber* Throbber_237; // 0x430(0x08)
	struct UImage* tint_bg; // 0x438(0x08)
	struct UTextBlock* Title_2; // 0x440(0x08)
	struct UImage* topornament; // 0x448(0x08)
	struct UWBP_MenuButtonPrimary_C* WBP_MenuButtonPrimary; // 0x450(0x08)
	struct UWBP_MenuButtonPrimary_C* WBP_MenuButtonPrimary_2; // 0x458(0x08)
	struct UWBP_MenuButtonPrimary_C* WBP_MenuButtonPrimary_3; // 0x460(0x08)
	struct UWBP_MenuButtonPrimary_C* WBP_MenuButtonPrimary_4; // 0x468(0x08)
	struct UWBP_MenuButtonSecondary_C* WBP_MenuButtonSecondary_2; // 0x470(0x08)
	struct UWBP_MenuButtonSecondary_C* WBP_MenuButtonSecondary_3; // 0x478(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x480(0x08)
	bool IsActivationFlow; // 0x488(0x01)
	bool IsDebugFlow; // 0x489(0x01)
	char pad_48A[0x6]; // 0x48a(0x06)
	struct FString CurrentPhoneNumber; // 0x490(0x10)
	struct FTimerHandle TimerHandler; // 0x4a0(0x08)
	int32_t PinLockOutSeconds; // 0x4a8(0x04)
	bool EnableResendButton; // 0x4ac(0x01)

	struct FAresMainMenuNavBarData GetNavBarData(); // Function AVSModal.AVSModal_C.GetNavBarData // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	bool HandleBackRequest(); // Function AVSModal.AVSModal_C.HandleBackRequest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ParsePhoneNumber(struct FString UnparsedNumber, struct FString& ParsedNumber); // Function AVSModal.AVSModal_C.ParsePhoneNumber // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Send Debug Verification(bool IsActivationFlow, struct FDelegate& OnComplete, struct FDelegate& OnError); // Function AVSModal.AVSModal_C.Send Debug Verification // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitConfirmationPinTimer(int32_t Seconds); // Function AVSModal.AVSModal_C.InitConfirmationPinTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Send Pin(bool IsActivationFlow, struct FDelegate& OnComplete, struct FDelegate& OnError); // Function AVSModal.AVSModal_C.Send Pin // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetErrorMessage(enum class EAVSErrorType ErrorType, struct FText& ErrorMessage); // Function AVSModal.AVSModal_C.GetErrorMessage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Construct(); // Function AVSModal.AVSModal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnSendActivationPinSuccess(struct FAVSSuccessData& Data); // Function AVSModal.AVSModal_C.OnSendActivationPinSuccess // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSendActivationPinError(enum class EAVSErrorType& ErrorType); // Function AVSModal.AVSModal_C.OnSendActivationPinError // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnConfirmationPinSuccess(struct FAVSSuccessData& Data); // Function AVSModal.AVSModal_C.OnConfirmationPinSuccess // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnConfirmationPinError(enum class EAVSErrorType& ErrorType); // Function AVSModal.AVSModal_C.OnConfirmationPinError // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSendDeactivationPinSuccess(struct FAVSSuccessData& Data); // Function AVSModal.AVSModal_C.OnSendDeactivationPinSuccess // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSendDeactivationPinError(enum class EAVSErrorType& ErrorType); // Function AVSModal.AVSModal_C.OnSendDeactivationPinError // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ResendCodeButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function AVSModal.AVSModal_C.BndEvt__ResendCodeButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnResendPinComplete(struct FAVSSuccessData& Data); // Function AVSModal.AVSModal_C.OnResendPinComplete // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateTimeText(); // Function AVSModal.AVSModal_C.UpdateTimeText // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__AVSModal_WBP_MenuButtonPrimary_K2Node_ComponentBoundEvent_6_OnUniversalButtonVoidEvent__DelegateSignature(); // Function AVSModal.AVSModal_C.BndEvt__AVSModal_WBP_MenuButtonPrimary_K2Node_ComponentBoundEvent_6_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__AVSModal_WBP_MenuButtonPrimary_1_K2Node_ComponentBoundEvent_10_OnUniversalButtonVoidEvent__DelegateSignature(); // Function AVSModal.AVSModal_C.BndEvt__AVSModal_WBP_MenuButtonPrimary_1_K2Node_ComponentBoundEvent_10_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__AVSModal_WBP_MenuButtonSecondary_1_K2Node_ComponentBoundEvent_11_OnUniversalButtonVoidEvent__DelegateSignature(); // Function AVSModal.AVSModal_C.BndEvt__AVSModal_WBP_MenuButtonSecondary_1_K2Node_ComponentBoundEvent_11_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__AVSModal_WBP_MenuButtonPrimary_2_K2Node_ComponentBoundEvent_12_OnUniversalButtonVoidEvent__DelegateSignature(); // Function AVSModal.AVSModal_C.BndEvt__AVSModal_WBP_MenuButtonPrimary_2_K2Node_ComponentBoundEvent_12_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__AVSModal_WBP_MenuButtonSecondary_2_K2Node_ComponentBoundEvent_13_OnUniversalButtonVoidEvent__DelegateSignature(); // Function AVSModal.AVSModal_C.BndEvt__AVSModal_WBP_MenuButtonSecondary_2_K2Node_ComponentBoundEvent_13_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__AVSModal_WBP_MenuButtonPrimary_3_K2Node_ComponentBoundEvent_14_OnUniversalButtonVoidEvent__DelegateSignature(); // Function AVSModal.AVSModal_C.BndEvt__AVSModal_WBP_MenuButtonPrimary_3_K2Node_ComponentBoundEvent_14_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_AVSModal(int32_t EntryPoint); // Function AVSModal.AVSModal_C.ExecuteUbergraph_AVSModal // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

