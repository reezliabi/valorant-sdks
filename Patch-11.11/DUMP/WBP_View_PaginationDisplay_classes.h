// WidgetBlueprintGeneratedClass WBP_View_PaginationDisplay.WBP_View_PaginationDisplay_C
// Size: 0x552 (Inherited: 0x3e0)
struct UWBP_View_PaginationDisplay_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWidgetAnimation* OnFocus; // 0x3e8(0x08)
	struct UImage* IMG_icon_TabFirst; // 0x3f0(0x08)
	struct UAresCommonText* PageDisplayText; // 0x3f8(0x08)
	struct UWBP_Button_MenuNavigation_C* TabFirstButton; // 0x400(0x08)
	struct UWBP_Button_MenuNavigation_C* TabLastButton; // 0x408(0x08)
	struct UAresCommonActionWidget* TabLeftActionWidget; // 0x410(0x08)
	struct UWBP_Button_MenuNavigation_C* TabLeftButton; // 0x418(0x08)
	struct UAresCommonActionWidget* TabRightActionWidget; // 0x420(0x08)
	struct UWBP_Button_MenuNavigation_C* TabRightButton; // 0x428(0x08)
	struct UAresCommonInputActionManager* InputActionManager; // 0x430(0x08)
	struct FAresActionBindingHandle TabLeftActionBindingHandle; // 0x438(0x04)
	struct FAresActionBindingHandle TabRightActionBindingHandle; // 0x43c(0x04)
	struct FMulticastInlineDelegate OnForwardActionTriggered; // 0x440(0x10)
	struct FMulticastInlineDelegate OnBackActionTriggered; // 0x450(0x10)
	bool RightActionBound; // 0x460(0x01)
	bool LeftActionBound; // 0x461(0x01)
	char pad_462[0x6]; // 0x462(0x06)
	struct FMulticastInlineDelegate OnForwardButtonHovered; // 0x468(0x10)
	struct FMulticastInlineDelegate OnBackButtonHovered; // 0x478(0x10)
	struct FAresConditionalInputAction AltTabLeftAlwaysPersistent; // 0x488(0x28)
	struct FAresConditionalInputAction AltTabLeftHover; // 0x4b0(0x28)
	struct FAresConditionalInputAction AltTabRightHover; // 0x4d8(0x28)
	struct FAresConditionalInputAction AltTabRightPersistent; // 0x500(0x28)
	bool NeverDisplayNavigationButtons; // 0x528(0x01)
	bool DisplayNavigationButtonsKeyboardOnly; // 0x529(0x01)
	char pad_52A[0x6]; // 0x52a(0x06)
	struct FMulticastInlineDelegate OnFirstPageActionTriggered; // 0x530(0x10)
	struct FMulticastInlineDelegate OnLastPageActionTriggered; // 0x540(0x10)
	bool DisplayNavigationFirstAndLastButtons; // 0x550(0x01)
	bool DisplayPageText; // 0x551(0x01)

	void SetVisibilityByPageCount(int32_t PageCount); // Function WBP_View_PaginationDisplay.WBP_View_PaginationDisplay_C.SetVisibilityByPageCount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetupInputActionManager(); // Function WBP_View_PaginationDisplay.WBP_View_PaginationDisplay_C.SetupInputActionManager // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindInputManagerFromButtons(bool Bind); // Function WBP_View_PaginationDisplay.WBP_View_PaginationDisplay_C.BindInputManagerFromButtons // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateNavigationButtons(); // Function WBP_View_PaginationDisplay.WBP_View_PaginationDisplay_C.UpdateNavigationButtons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShouldDisplayNavButtons(bool& Value); // Function WBP_View_PaginationDisplay.WBP_View_PaginationDisplay_C.ShouldDisplayNavButtons // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void EnableInputActions(bool Enable, bool IncludePersistentActions); // Function WBP_View_PaginationDisplay.WBP_View_PaginationDisplay_C.EnableInputActions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitInputActions(); // Function WBP_View_PaginationDisplay.WBP_View_PaginationDisplay_C.InitInputActions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Tab Button Navigation Rule Custom(enum class EUINavigation Direction, struct FDelegate InCustomDelegate); // Function WBP_View_PaginationDisplay.WBP_View_PaginationDisplay_C.Set Tab Button Navigation Rule Custom // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateButtonInteraction(int32_t CurrentPage, int32_t TotalPages); // Function WBP_View_PaginationDisplay.WBP_View_PaginationDisplay_C.UpdateButtonInteraction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Tab Button Navigation Rule Explicit(struct UWidget* InWidget, enum class EUINavigation Direction); // Function WBP_View_PaginationDisplay.WBP_View_PaginationDisplay_C.Set Tab Button Navigation Rule Explicit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetText(struct FText Text); // Function WBP_View_PaginationDisplay.WBP_View_PaginationDisplay_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPageForwardInput(struct FName ActionName); // Function WBP_View_PaginationDisplay.WBP_View_PaginationDisplay_C.OnPageForwardInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPageBackInput(struct FName ActionName); // Function WBP_View_PaginationDisplay.WBP_View_PaginationDisplay_C.OnPageBackInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_View_PaginationDisplay_TabRightButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_View_PaginationDisplay.WBP_View_PaginationDisplay_C.BndEvt__WBP_View_PaginationDisplay_TabRightButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_View_PaginationDisplay_TabLeftButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_View_PaginationDisplay.WBP_View_PaginationDisplay_C.BndEvt__WBP_View_PaginationDisplay_TabLeftButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function WBP_View_PaginationDisplay.WBP_View_PaginationDisplay_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_View_PaginationDisplay.WBP_View_PaginationDisplay_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_View_PaginationDisplay_TabLeftActionWidget_K2Node_ComponentBoundEvent_4_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad); // Function WBP_View_PaginationDisplay.WBP_View_PaginationDisplay_C.BndEvt__WBP_View_PaginationDisplay_TabLeftActionWidget_K2Node_ComponentBoundEvent_4_OnInputMethodChanged__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function WBP_View_PaginationDisplay.WBP_View_PaginationDisplay_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_View_PaginationDisplay_TabLeftButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_View_PaginationDisplay.WBP_View_PaginationDisplay_C.BndEvt__WBP_View_PaginationDisplay_TabLeftButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_View_PaginationDisplay_TabRightButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_View_PaginationDisplay.WBP_View_PaginationDisplay_C.BndEvt__WBP_View_PaginationDisplay_TabRightButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_View_PaginationDisplay_TabFirstButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_View_PaginationDisplay.WBP_View_PaginationDisplay_C.BndEvt__WBP_View_PaginationDisplay_TabFirstButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_View_PaginationDisplay_TabLastButton_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_View_PaginationDisplay.WBP_View_PaginationDisplay_C.BndEvt__WBP_View_PaginationDisplay_TabLastButton_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_View_PaginationDisplay(int32_t EntryPoint); // Function WBP_View_PaginationDisplay.WBP_View_PaginationDisplay_C.ExecuteUbergraph_WBP_View_PaginationDisplay // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnLastPageActionTriggered__DelegateSignature(); // Function WBP_View_PaginationDisplay.WBP_View_PaginationDisplay_C.OnLastPageActionTriggered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnFirstPageActionTriggered__DelegateSignature(); // Function WBP_View_PaginationDisplay.WBP_View_PaginationDisplay_C.OnFirstPageActionTriggered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBackButtonHovered__DelegateSignature(bool IsHovered); // Function WBP_View_PaginationDisplay.WBP_View_PaginationDisplay_C.OnBackButtonHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnForwardButtonHovered__DelegateSignature(bool IsHovered); // Function WBP_View_PaginationDisplay.WBP_View_PaginationDisplay_C.OnForwardButtonHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBackActionTriggered__DelegateSignature(); // Function WBP_View_PaginationDisplay.WBP_View_PaginationDisplay_C.OnBackActionTriggered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnForwardActionTriggered__DelegateSignature(); // Function WBP_View_PaginationDisplay.WBP_View_PaginationDisplay_C.OnForwardActionTriggered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

