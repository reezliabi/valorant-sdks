// WidgetBlueprintGeneratedClass WBP_Screen_GenericConfirmation.WBP_Screen_GenericConfirmation_C
// Size: 0x683 (Inherited: 0x550)
struct UWBP_Screen_GenericConfirmation_C : UWBP_Screen_ConfirmationModal_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* AnimHover; // 0x558(0x08)
	struct UWidgetAnimation* OpenAnim; // 0x560(0x08)
	struct UWBP_Button_Primary_C* Button_Cancel; // 0x568(0x08)
	struct UWBP_Button_Primary_C* Button_Confirm; // 0x570(0x08)
	struct UHorizontalBox* CancelButtonGroup; // 0x578(0x08)
	struct UCircularThrobber* CircularThrobber_180; // 0x580(0x08)
	struct UAresCommonScrollBox* DescriptionScrollBox; // 0x588(0x08)
	struct UOverlay* Details; // 0x590(0x08)
	struct UImage* IMG_topHightlightGrad; // 0x598(0x08)
	struct UOverlay* Loading; // 0x5a0(0x08)
	struct UCommonActivatableWidgetSwitcher* ModalStateSwitcher; // 0x5a8(0x08)
	struct UAresCommonRichText* RichText_Description; // 0x5b0(0x08)
	struct UImage* ScrollBoxBorder; // 0x5b8(0x08)
	struct UAresCommonText* TEMP_LOADING; // 0x5c0(0x08)
	struct UAresCommonText* Text_Title; // 0x5c8(0x08)
	struct UWBP_Button_Back_C* WBP_Button_Back; // 0x5d0(0x08)
	struct UWBP_Decoration_ModalTitleLines_C* WBP_Decoration_ModalTitleLines; // 0x5d8(0x08)
	struct UWBP_Decoration_ModalTitleLines_C* WBP_Decoration_ModalTitleLines_2; // 0x5e0(0x08)
	struct UWBP_Decoration_ModalTitleLines_C* WBP_Decoration_ModalTitleLines_3; // 0x5e8(0x08)
	struct UWBP_Decoration_ModalTitleLines_C* WBP_Decoration_ModalTitleLines_4; // 0x5f0(0x08)
	double OpenAnimationSpeed; // 0x5f8(0x08)
	double CloseAnimationSpeed; // 0x600(0x08)
	struct TMap<struct FName, struct FName> CIA_To_ModalCustomActionMap; // 0x608(0x50)
	struct FAresConditionalInputAction DismissCIA; // 0x658(0x28)
	bool IsDismissSuppressed; // 0x680(0x01)
	bool IsInLoading; // 0x681(0x01)
	bool IsScrollBoxCurrentlyScrollable; // 0x682(0x01)

	void OnDismissCIATriggered(struct FName ActionName); // Function WBP_Screen_GenericConfirmation.WBP_Screen_GenericConfirmation_C.OnDismissCIATriggered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnConfirm2TextChanged(struct FText& ConfirmText); // Function WBP_Screen_GenericConfirmation.WBP_Screen_GenericConfirmation_C.OnConfirm2TextChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetDismissCIASuppression(bool Suppress); // Function WBP_Screen_GenericConfirmation.WBP_Screen_GenericConfirmation_C.SetDismissCIASuppression // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateRightStickScrollCIA(); // Function WBP_Screen_GenericConfirmation.WBP_Screen_GenericConfirmation_C.UpdateRightStickScrollCIA // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateDismissCIA(); // Function WBP_Screen_GenericConfirmation.WBP_Screen_GenericConfirmation_C.UpdateDismissCIA // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateButtonVisuals(); // Function WBP_Screen_GenericConfirmation.WBP_Screen_GenericConfirmation_C.UpdateButtonVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCancelCIATriggered(struct FName ActionName); // Function WBP_Screen_GenericConfirmation.WBP_Screen_GenericConfirmation_C.OnCancelCIATriggered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCIACallbackBlank(struct FName ActionName); // Function WBP_Screen_GenericConfirmation.WBP_Screen_GenericConfirmation_C.OnCIACallbackBlank // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCIACallback(struct FName ActionName); // Function WBP_Screen_GenericConfirmation.WBP_Screen_GenericConfirmation_C.OnCIACallback // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RemoveAllCustomActions(); // Function WBP_Screen_GenericConfirmation.WBP_Screen_GenericConfirmation_C.RemoveAllCustomActions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCustomActionsChanged(struct TArray<struct UModalCustomAction*>& CustomActions); // Function WBP_Screen_GenericConfirmation.WBP_Screen_GenericConfirmation_C.OnCustomActionsChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnLoadingTextChanged(struct FText& LoadingText); // Function WBP_Screen_GenericConfirmation.WBP_Screen_GenericConfirmation_C.OnLoadingTextChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnVisualTypeChanged(enum class EUIConfirmationModalVisualType& ModalType); // Function WBP_Screen_GenericConfirmation.WBP_Screen_GenericConfirmation_C.OnVisualTypeChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnModalReady(bool HasValidData); // Function WBP_Screen_GenericConfirmation.WBP_Screen_GenericConfirmation_C.OnModalReady // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetInitialState(); // Function WBP_Screen_GenericConfirmation.WBP_Screen_GenericConfirmation_C.SetInitialState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnImageChanged(struct UTexture2D* Image); // Function WBP_Screen_GenericConfirmation.WBP_Screen_GenericConfirmation_C.OnImageChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnDescriptionTextChanged(struct FText& ConfirmText); // Function WBP_Screen_GenericConfirmation.WBP_Screen_GenericConfirmation_C.OnDescriptionTextChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTitleTextChanged(struct FText& ConfirmText); // Function WBP_Screen_GenericConfirmation.WBP_Screen_GenericConfirmation_C.OnTitleTextChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCancelTextChanged(struct FText& ConfirmText); // Function WBP_Screen_GenericConfirmation.WBP_Screen_GenericConfirmation_C.OnCancelTextChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnConfirmTextChanged(struct FText& ConfirmText); // Function WBP_Screen_GenericConfirmation.WBP_Screen_GenericConfirmation_C.OnConfirmTextChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToGenericConfirmVM(bool Bind, struct UGenericConfirmationModalViewModel* GenericVM); // Function WBP_Screen_GenericConfirmation.WBP_Screen_GenericConfirmation_C.BindToGenericConfirmVM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToConfirmationViewModel(bool Bind); // Function WBP_Screen_GenericConfirmation.WBP_Screen_GenericConfirmation_C.BindToConfirmationViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Screen_GenericConfirmation.WBP_Screen_GenericConfirmation_C.BP_GetDesiredFocusTarget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x19be2f0
	void OnModalTypeChanged(enum class EUIConfirmationModalType ModalType); // Function WBP_Screen_GenericConfirmation.WBP_Screen_GenericConfirmation_C.OnModalTypeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowLoading(); // Function WBP_Screen_GenericConfirmation.WBP_Screen_GenericConfirmation_C.ShowLoading // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowDetails(); // Function WBP_Screen_GenericConfirmation.WBP_Screen_GenericConfirmation_C.ShowDetails // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayCloseAnimation(); // Function WBP_Screen_GenericConfirmation.WBP_Screen_GenericConfirmation_C.PlayCloseAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayOpenAnimation(); // Function WBP_Screen_GenericConfirmation.WBP_Screen_GenericConfirmation_C.PlayOpenAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Template_FullScreenPrompt_Button_Left_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Screen_GenericConfirmation.WBP_Screen_GenericConfirmation_C.BndEvt__WBP_Template_FullScreenPrompt_Button_Left_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Template_FullScreenPrompt_Button_Right_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Screen_GenericConfirmation.WBP_Screen_GenericConfirmation_C.BndEvt__WBP_Template_FullScreenPrompt_Button_Right_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_Screen_GenericConfirmation.WBP_Screen_GenericConfirmation_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Screen_GenericConfirmation_DescriptionScrollBox_K2Node_ComponentBoundEvent_1_OnIsScrollableChangedEvent__DelegateSignature(bool IsScrollable); // Function WBP_Screen_GenericConfirmation.WBP_Screen_GenericConfirmation_C.BndEvt__WBP_Screen_GenericConfirmation_DescriptionScrollBox_K2Node_ComponentBoundEvent_1_OnIsScrollableChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Screen_GenericConfirmation_WBP_Button_Back_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Screen_GenericConfirmation.WBP_Screen_GenericConfirmation_C.BndEvt__WBP_Screen_GenericConfirmation_WBP_Button_Back_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Screen_GenericConfirmation(int32_t EntryPoint); // Function WBP_Screen_GenericConfirmation.WBP_Screen_GenericConfirmation_C.ExecuteUbergraph_WBP_Screen_GenericConfirmation // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

