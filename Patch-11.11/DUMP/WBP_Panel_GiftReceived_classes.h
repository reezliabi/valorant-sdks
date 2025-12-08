// WidgetBlueprintGeneratedClass WBP_Panel_GiftReceived.WBP_Panel_GiftReceived_C
// Size: 0x4a8 (Inherited: 0x3e0)
struct UWBP_Panel_GiftReceived_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWBP_Button_Primary_C* AcceptButton; // 0x3e8(0x08)
	struct UWBP_Button_Primary_C* DeclineButton; // 0x3f0(0x08)
	struct UOverlay* GiftReceivedOverlay; // 0x3f8(0x08)
	struct UOverlay* OfferPreviewOverlay; // 0x400(0x08)
	struct UAresCommonText* OfferPreviewSubtitle; // 0x408(0x08)
	struct UWBP_Panel_CommonTitle_C* WBP_Panel_CommonTitle; // 0x410(0x08)
	struct UWBP_Panel_OfferPreview_C* WBP_Panel_OfferPreview; // 0x418(0x08)
	struct UVM_StoreOffer_C* VM_Offer; // 0x420(0x08)
	struct UVM_Reward_C* VM_Reward; // 0x428(0x08)
	struct UVM_PlayerDisplayName_C* VM_PlayerDisplayName; // 0x430(0x08)
	struct UVM_StorefrontItem_C* VM_StorefrontItem; // 0x438(0x08)
	struct UVM_Order_C* VM_Order; // 0x440(0x08)
	struct UStorePurchaseFlowModalViewModel* VM_PurchaseFlowModal; // 0x448(0x08)
	struct FMulticastInlineDelegate OnModalAccept; // 0x450(0x10)
	struct UPendingGiftDTO* PendingGift; // 0x460(0x08)
	struct FName ModalInfoKey; // 0x468(0x0c)
	char pad_474[0x4]; // 0x474(0x04)
	struct UMenuStackEntry* PurchaseFlowModalForPC; // 0x478(0x08)
	struct FMulticastInlineDelegate OnModalDecline; // 0x480(0x10)
	struct UMenuStackEntry* GiftDeclineModalForPC; // 0x490(0x08)
	struct FMargin FullScreenOfferPreviewPadding; // 0x498(0x10)

	void SetRewardTypeDisplaySettings(); // Function WBP_Panel_GiftReceived.WBP_Panel_GiftReceived_C.SetRewardTypeDisplaySettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleShouldShowDeclineButtonChanged(bool ShouldShowDeclineButton); // Function WBP_Panel_GiftReceived.WBP_Panel_GiftReceived_C.HandleShouldShowDeclineButtonChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetOfferPreviewSubtitle(struct FText Subtitle); // Function WBP_Panel_GiftReceived.WBP_Panel_GiftReceived_C.SetOfferPreviewSubtitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleDeclineGiftModalCanceled(struct FGuid& ModalID); // Function WBP_Panel_GiftReceived.WBP_Panel_GiftReceived_C.HandleDeclineGiftModalCanceled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleDeclineGiftModalConfirmed(struct FGuid& ModalID); // Function WBP_Panel_GiftReceived.WBP_Panel_GiftReceived_C.HandleDeclineGiftModalConfirmed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DisplayDeclineGiftModalForPC(); // Function WBP_Panel_GiftReceived.WBP_Panel_GiftReceived_C.DisplayDeclineGiftModalForPC // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetButtonsEnabled(bool EnableButtons); // Function WBP_Panel_GiftReceived.WBP_Panel_GiftReceived_C.SetButtonsEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ClosePurchaseFlowModalForPC(struct FGuid& ModalID); // Function WBP_Panel_GiftReceived.WBP_Panel_GiftReceived_C.ClosePurchaseFlowModalForPC // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DisplayPurchaseFlowModalForPC(struct UStorePurchaseFlowModalInfo* ModalInfo); // Function WBP_Panel_GiftReceived.WBP_Panel_GiftReceived_C.DisplayPurchaseFlowModalForPC // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleOrderStateChanged(enum class EPurchaseState OrderState); // Function WBP_Panel_GiftReceived.WBP_Panel_GiftReceived_C.HandleOrderStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Handle Offer Type Changed(enum class EOfferDTOType InOfferType); // Function WBP_Panel_GiftReceived.WBP_Panel_GiftReceived_C.Handle Offer Type Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Handle Gift Bundle Name Changed(struct FText BundleName); // Function WBP_Panel_GiftReceived.WBP_Panel_GiftReceived_C.Handle Gift Bundle Name Changed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateSenderText(); // Function WBP_Panel_GiftReceived.WBP_Panel_GiftReceived_C.UpdateSenderText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleSenderTagChanged(struct FText OutPlayerTag); // Function WBP_Panel_GiftReceived.WBP_Panel_GiftReceived_C.HandleSenderTagChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Panel_GiftReceived.WBP_Panel_GiftReceived_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void HandleSenderPlayerNameChanged(struct FText GiftSenderDisplayName); // Function WBP_Panel_GiftReceived.WBP_Panel_GiftReceived_C.HandleSenderPlayerNameChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleGiftDisplayNameChanged(struct FText GiftDisplayName); // Function WBP_Panel_GiftReceived.WBP_Panel_GiftReceived_C.HandleGiftDisplayNameChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindEvents(bool Bind); // Function WBP_Panel_GiftReceived.WBP_Panel_GiftReceived_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitViewModels(); // Function WBP_Panel_GiftReceived.WBP_Panel_GiftReceived_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitFromPendingGiftDTO(struct UPendingGiftDTO* InPendingGift); // Function WBP_Panel_GiftReceived.WBP_Panel_GiftReceived_C.InitFromPendingGiftDTO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_GiftReceived.WBP_Panel_GiftReceived_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void K2_BindToViewModel(); // Function WBP_Panel_GiftReceived.WBP_Panel_GiftReceived_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_GiftReceived_AcceptButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_GiftReceived.WBP_Panel_GiftReceived_C.BndEvt__WBP_Panel_GiftReceived_AcceptButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_GiftReceived_AcceptButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_GiftReceived.WBP_Panel_GiftReceived_C.BndEvt__WBP_Panel_GiftReceived_AcceptButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_GiftReceived_DeclineButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_GiftReceived.WBP_Panel_GiftReceived_C.BndEvt__WBP_Panel_GiftReceived_DeclineButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_GiftReceived_DeclineButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_GiftReceived.WBP_Panel_GiftReceived_C.BndEvt__WBP_Panel_GiftReceived_DeclineButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_GiftReceived_DeclineButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_GiftReceived.WBP_Panel_GiftReceived_C.BndEvt__WBP_Panel_GiftReceived_DeclineButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Panel_GiftReceived(int32_t EntryPoint); // Function WBP_Panel_GiftReceived.WBP_Panel_GiftReceived_C.ExecuteUbergraph_WBP_Panel_GiftReceived // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnModalDecline__DelegateSignature(); // Function WBP_Panel_GiftReceived.WBP_Panel_GiftReceived_C.OnModalDecline__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnModalAccept__DelegateSignature(); // Function WBP_Panel_GiftReceived.WBP_Panel_GiftReceived_C.OnModalAccept__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

