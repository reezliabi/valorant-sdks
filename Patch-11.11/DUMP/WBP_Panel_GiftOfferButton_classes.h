// WidgetBlueprintGeneratedClass WBP_Panel_GiftOfferButton.WBP_Panel_GiftOfferButton_C
// Size: 0x459 (Inherited: 0x3e0)
struct UWBP_Panel_GiftOfferButton_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWidgetSwitcher* ButtonSwitcher; // 0x3e8(0x08)
	struct USharedButtonMaster_C* ClassicStyleButton; // 0x3f0(0x08)
	struct USharedButtonMaster_C* ClassicThumbnailStyle; // 0x3f8(0x08)
	struct UAresInputSwitcher* ConvergedStyleButton; // 0x400(0x08)
	struct UImage* GiftIcon; // 0x408(0x08)
	struct USizeBox* GiftIconSizeBox; // 0x410(0x08)
	struct USizeBox* QuickActionStyleSizeBox; // 0x418(0x08)
	struct UWBP_Button_Primary_C* SecondaryThumbnailStyle; // 0x420(0x08)
	struct UWBP_Button_AlphaShortcut_C* WBP_Button_AlphaShortcut; // 0x428(0x08)
	struct UWBP_Button_Primary_C* WBP_Button_Primary; // 0x430(0x08)
	struct UVM_GiftOfferButton_C* VM_GiftOfferButton; // 0x438(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x440(0x10)
	struct UVM_Gifting_C* VM_Gifting; // 0x450(0x08)
	enum class Enum_WBP_Panel_GiftOfferButton_ButtonStyles ButtonStyle; // 0x458(0x01)

	void UpdateSecondaryThumbnailVisuals(); // Function WBP_Panel_GiftOfferButton.WBP_Panel_GiftOfferButton_C.UpdateSecondaryThumbnailVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleGiftingEligibleStatusChanged(enum class EGiftingEligibleStatus GiftingEligibleStatus); // Function WBP_Panel_GiftOfferButton.WBP_Panel_GiftOfferButton_C.HandleGiftingEligibleStatusChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindEvents(bool Bind); // Function WBP_Panel_GiftOfferButton.WBP_Panel_GiftOfferButton_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitViewModels(); // Function WBP_Panel_GiftOfferButton.WBP_Panel_GiftOfferButton_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetSelectedSubOfferDTO(struct UOfferDTO* SelectedSubOfferDTO); // Function WBP_Panel_GiftOfferButton.WBP_Panel_GiftOfferButton_C.SetSelectedSubOfferDTO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetBundleOfferDTO(struct UBundleViewModel* BundleOfferDTO); // Function WBP_Panel_GiftOfferButton.WBP_Panel_GiftOfferButton_C.SetBundleOfferDTO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleClicked(); // Function WBP_Panel_GiftOfferButton.WBP_Panel_GiftOfferButton_C.HandleClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_GiftOfferButton_WBP_Button_AlphaShortcut_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_GiftOfferButton.WBP_Panel_GiftOfferButton_C.BndEvt__WBP_Panel_GiftOfferButton_WBP_Button_AlphaShortcut_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_GiftOfferButton_SharedButtonMaster_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // Function WBP_Panel_GiftOfferButton.WBP_Panel_GiftOfferButton_C.BndEvt__WBP_Panel_GiftOfferButton_SharedButtonMaster_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void K2_BindToViewModel(); // Function WBP_Panel_GiftOfferButton.WBP_Panel_GiftOfferButton_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_GiftOfferButton.WBP_Panel_GiftOfferButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_GiftOfferButton_WBP_Button_AlphaShortcut_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_GiftOfferButton.WBP_Panel_GiftOfferButton_C.BndEvt__WBP_Panel_GiftOfferButton_WBP_Button_AlphaShortcut_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_GiftOfferButton_WBP_Button_AlphaShortcut_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_GiftOfferButton.WBP_Panel_GiftOfferButton_C.BndEvt__WBP_Panel_GiftOfferButton_WBP_Button_AlphaShortcut_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_GiftOfferButton_WBP_Button_AlphaShortcut_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_GiftOfferButton.WBP_Panel_GiftOfferButton_C.BndEvt__WBP_Panel_GiftOfferButton_WBP_Button_AlphaShortcut_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_GiftOfferButton_ClassicThumbnailStyle_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(); // Function WBP_Panel_GiftOfferButton.WBP_Panel_GiftOfferButton_C.BndEvt__WBP_Panel_GiftOfferButton_ClassicThumbnailStyle_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_GiftOfferButton_WBP_Button_Primary_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_GiftOfferButton.WBP_Panel_GiftOfferButton_C.BndEvt__WBP_Panel_GiftOfferButton_WBP_Button_Primary_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_GiftOfferButton_PrimaryThumbnailStyle_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_GiftOfferButton.WBP_Panel_GiftOfferButton_C.BndEvt__WBP_Panel_GiftOfferButton_PrimaryThumbnailStyle_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Panel_GiftOfferButton(int32_t EntryPoint); // Function WBP_Panel_GiftOfferButton.WBP_Panel_GiftOfferButton_C.ExecuteUbergraph_WBP_Panel_GiftOfferButton // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnClicked__DelegateSignature(struct UOfferDTOList* GiftOfferDTOList); // Function WBP_Panel_GiftOfferButton.WBP_Panel_GiftOfferButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

