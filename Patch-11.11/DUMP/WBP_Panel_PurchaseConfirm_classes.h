// WidgetBlueprintGeneratedClass WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C
// Size: 0x50c (Inherited: 0x3e0)
struct UWBP_Panel_PurchaseConfirm_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWBP_Button_DiamondToggle_C* AcknowledgementCheckbox; // 0x3e8(0x08)
	struct UImage* BG; // 0x3f0(0x08)
	struct UImage* Filigree; // 0x3f8(0x08)
	struct UOverlay* GiftingBackground; // 0x400(0x08)
	struct UWBP_List_Base_C* OfferOptions; // 0x408(0x08)
	struct UHorizontalBox* OfferOptionsHBox; // 0x410(0x08)
	struct UOverlay* OfferPreviewOverlay; // 0x418(0x08)
	struct UOverlay* PurchaseOverlay; // 0x420(0x08)
	struct UVerticalBox* RefundPolicyContainer; // 0x428(0x08)
	struct USharedHyperlinkButon_C* RefundPolicyLinkButton; // 0x430(0x08)
	struct UWBP_Button_DiamondToggle_C* SecondaryAcknowledgementCheckbox; // 0x438(0x08)
	struct USharedHyperlinkButon_C* TermsAndConditionsButton; // 0x440(0x08)
	struct UWBP_DigitalGoodLicenseText_C* WBP_DigitalGoodLicenseText; // 0x448(0x08)
	struct UWBP_Panel_CommonTitle_C* WBP_Panel_CommonTitle; // 0x450(0x08)
	struct UWBP_Panel_ContentTierIcon_C* WBP_Panel_ContentTierIcon; // 0x458(0x08)
	struct UWBP_Panel_ContentTierIcon_C* WBP_Panel_ContentTierIcon_95; // 0x460(0x08)
	struct UWBP_Panel_OfferPreview_C* WBP_Panel_OfferPreview; // 0x468(0x08)
	struct UWBP_Panel_OfferPreview_C* WBP_Panel_OfferPreview_Footer; // 0x470(0x08)
	struct UWBP_Panel_PriceBreakdownButton_C* WBP_Panel_PriceBreakdownButton; // 0x478(0x08)
	struct UWBP_Panel_PurchaseConfirmButton_C* WBP_Panel_PurchaseConfirmButton; // 0x480(0x08)
	struct UWBP_Panel_PurchaseConfirmCost_C* WBP_Panel_PurchaseConfirmCost; // 0x488(0x08)
	struct UWBP_Panel_RecruitmentPurchaseConfirmInfo_C* WBP_Panel_RecruitmentPurchaseConfirmInfo; // 0x490(0x08)
	struct UWBP_Panel_RemainingBalance_C* WBP_Panel_RemainingBalance; // 0x498(0x08)
	struct UVM_StoreOffer_C* OfferViewModel; // 0x4a0(0x08)
	struct UVM_Reward_C* RewardViewModel; // 0x4a8(0x08)
	struct UVM_PurchaseConfirmModal_C* PurchaseConfirmModalViewModel; // 0x4b0(0x08)
	struct UVM_Order_C* OrderViewModel; // 0x4b8(0x08)
	struct UVM_StorefrontItem_C* StorefrontItemViewModel; // 0x4c0(0x08)
	struct UStorePurchaseFlowModalViewModel* StorePurchaseFlowModalViewModel; // 0x4c8(0x08)
	struct UVM_Gifting_C* GiftingViewModel; // 0x4d0(0x08)
	struct UVM_StoreOfferSelector_C* StoreOfferSelectorViewModel; // 0x4d8(0x08)
	struct FName Modal Info Key; // 0x4e0(0x0c)
	char pad_4EC[0x4]; // 0x4ec(0x04)
	struct UMenuStackEntry* PurchaseFlowModalForPC; // 0x4f0(0x08)
	struct FMargin FullScreenOfferPreviewPadding; // 0x4f8(0x10)
	float ConsolePurchaseOverlayLeftPadding; // 0x508(0x04)

	void UpdatePadding(); // Function WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C.UpdatePadding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetRewardTypeDisplaySettings(); // Function WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C.SetRewardTypeDisplaySettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWidget* OnSecondaryAcknowledgementNavigationDown(enum class EUINavigation Navigation); // Function WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C.OnSecondaryAcknowledgementNavigationDown // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleAcknowledgementNavigationDown(enum class EUINavigation Navigation); // Function WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C.HandleAcknowledgementNavigationDown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetAlignmentForCulture(); // Function WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C.SetAlignmentForCulture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleConfigUpdated(struct FName& ConfigName); // Function WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C.HandleConfigUpdated // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateHeaderVisibility(); // Function WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C.UpdateHeaderVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateTitle(); // Function WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C.UpdateTitle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ClosePurchaseFlowModalForPC(struct FGuid& ModalID); // Function WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C.ClosePurchaseFlowModalForPC // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DisplayPurchaseFlowModalForPC(struct UStorePurchaseFlowModalInfo* ModalInfo); // Function WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C.DisplayPurchaseFlowModalForPC // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWidget* OnOfferOptionsNavigationDown(enum class EUINavigation Navigation); // Function WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C.OnOfferOptionsNavigationDown // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWidget* OnAcknowledgementNavigationDown(enum class EUINavigation Navigation); // Function WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C.OnAcknowledgementNavigationDown // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void InitOfferSelectorWithPreference(struct UOfferDTO* OfferDTO); // Function WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C.InitOfferSelectorWithPreference // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleOfferTypeChanged(struct UOfferDTO* OfferDTO); // Function WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C.HandleOfferTypeChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSubOfferListChanged(struct TArray<struct UOfferDTO*>& OfferSelectionCandidates); // Function WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C.OnSubOfferListChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSubOfferClicked(struct UObject* EntryObject, struct UUserWidget* EntryWidget); // Function WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C.OnSubOfferClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsMultiCostChanged(bool IsMultiCost); // Function WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C.OnIsMultiCostChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEquippableSkinHandleChanged(struct UEquippableSkinHandle* EquippableSkinHandle); // Function WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C.OnEquippableSkinHandleChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTermsAndConditionsRequiredChanged(bool TermsAndConditionsRequired); // Function WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C.OnTermsAndConditionsRequiredChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSecondaryAcknowledgementRequiredChanged(bool AcknowledgementRequired); // Function WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C.OnSecondaryAcknowledgementRequiredChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAcknowledgementRequiredChanged(bool AcknowledgementRequired); // Function WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C.OnAcknowledgementRequiredChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSecondaryAcknowledgementTextChanged(struct FText AcknowledgementText); // Function WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C.OnSecondaryAcknowledgementTextChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAcknowledgementTextChanged(struct FText AcknowledgementText); // Function WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C.OnAcknowledgementTextChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAcknowledgementCheckboxSelectedChanged(bool AcknowledgementCheckboxSelected); // Function WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C.OnAcknowledgementCheckboxSelectedChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleIsGiftChanged(bool IsGift); // Function WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C.HandleIsGiftChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void HandleRemainingBalanceChanged(struct FRemainingBalanceInfo NewRemainingBalance); // Function WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C.HandleRemainingBalanceChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnOfferDTOChanged(struct UOfferDTO* OfferDTO); // Function WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C.OnOfferDTOChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnDisplayNameChanged(struct FText DisplayName); // Function WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C.OnDisplayNameChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void onBundleNameChanged(struct FText BundleName); // Function WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C.onBundleNameChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindEvents(bool Bind); // Function WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleRequestSubmitOrder(struct UOfferDTO* InOfferDTO); // Function WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C.HandleRequestSubmitOrder // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitViewModels(); // Function WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void K2_BindToViewModel(); // Function WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_PurchaseConfirm_WBP_Panel_PurchaseConfirmButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C.BndEvt__WBP_Panel_PurchaseConfirm_WBP_Panel_PurchaseConfirmButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_PurchaseConfirm_WBP_Panel_PriceBreakdownButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C.BndEvt__WBP_Panel_PurchaseConfirm_WBP_Panel_PriceBreakdownButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_PurchaseConfirm_OfferOptions_K2Node_ComponentBoundEvent_4_OnEntryObjectWidgetAndStateChanged__DelegateSignature(struct UObject* EntryObject, struct UUserWidget* EntryWidget, bool EntryState); // Function WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C.BndEvt__WBP_Panel_PurchaseConfirm_OfferOptions_K2Node_ComponentBoundEvent_4_OnEntryObjectWidgetAndStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_PurchaseConfirm_AcknowledgementCheckbox_K2Node_ComponentBoundEvent_5_CommonSelectedStateChangedBase__DelegateSignature(struct UCommonButtonBase* Button, bool Selected); // Function WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C.BndEvt__WBP_Panel_PurchaseConfirm_AcknowledgementCheckbox_K2Node_ComponentBoundEvent_5_CommonSelectedStateChangedBase__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_PurchaseConfirm_OfferOptions_K2Node_ComponentBoundEvent_6_OnEntryObjectWidgetAndStateChanged__DelegateSignature(struct UObject* EntryObject, struct UUserWidget* EntryWidget, bool EntryState); // Function WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C.BndEvt__WBP_Panel_PurchaseConfirm_OfferOptions_K2Node_ComponentBoundEvent_6_OnEntryObjectWidgetAndStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_PurchaseConfirm_SecondaryAcknowledgementCheckbox_K2Node_ComponentBoundEvent_0_CommonSelectedStateChangedBase__DelegateSignature(struct UCommonButtonBase* Button, bool Selected); // Function WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C.BndEvt__WBP_Panel_PurchaseConfirm_SecondaryAcknowledgementCheckbox_K2Node_ComponentBoundEvent_0_CommonSelectedStateChangedBase__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_PurchaseConfirm_RefundPolicyLinkButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C.BndEvt__WBP_Panel_PurchaseConfirm_RefundPolicyLinkButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Panel_PurchaseConfirm(int32_t EntryPoint); // Function WBP_Panel_PurchaseConfirm.WBP_Panel_PurchaseConfirm_C.ExecuteUbergraph_WBP_Panel_PurchaseConfirm // (Final|UbergraphFunction) // @ game+0x19be2f0
};

