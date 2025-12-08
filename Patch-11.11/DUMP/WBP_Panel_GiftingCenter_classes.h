// WidgetBlueprintGeneratedClass WBP_Panel_GiftingCenter.WBP_Panel_GiftingCenter_C
// Size: 0x450 (Inherited: 0x3e0)
struct UWBP_Panel_GiftingCenter_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UImage* Filigree; // 0x3e8(0x08)
	struct UImage* GiftingLogo; // 0x3f0(0x08)
	struct UImage* Image_192; // 0x3f8(0x08)
	struct UOverlay* IneligibleOverlay; // 0x400(0x08)
	struct UWBP_Button_Primary_C* NextButton; // 0x408(0x08)
	struct UWBP_List_Base_C* OffersList; // 0x410(0x08)
	struct UHorizontalBox* RecipientIneligibleMessage; // 0x418(0x08)
	struct UWBP_Panel_GiftRecipientCandidateListItem_C* SelectedGiftRecipient; // 0x420(0x08)
	struct UAresCommonText* SelectGiftText; // 0x428(0x08)
	struct UAresCommonText* SelectRecipientText; // 0x430(0x08)
	struct UAresCommonText* Title; // 0x438(0x08)
	struct UWBP_GenericListConfirmationModal_C* WBP_GenericListConfirmationModal; // 0x440(0x08)
	struct UVM_Gifting_C* VM_Gifting; // 0x448(0x08)

	void HandleIneligblePopupClicked(); // Function WBP_Panel_GiftingCenter.WBP_Panel_GiftingCenter_C.HandleIneligblePopupClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateGiftingIneligiblePopupVisibility(); // Function WBP_Panel_GiftingCenter.WBP_Panel_GiftingCenter_C.UpdateGiftingIneligiblePopupVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleGiftingInvalidReasonTextsChanged(struct TArray<struct FText>& GiftingInvalidReasonTexts); // Function WBP_Panel_GiftingCenter.WBP_Panel_GiftingCenter_C.HandleGiftingInvalidReasonTextsChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleGiftingEligibleStatusChanged(enum class EGiftingEligibleStatus GiftingEligibleStatus); // Function WBP_Panel_GiftingCenter.WBP_Panel_GiftingCenter_C.HandleGiftingEligibleStatusChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleSelectedRecipientEligibilityChanged(struct UGiftRecipientCandidateInfo* SelectedRecipientCandidateInfo); // Function WBP_Panel_GiftingCenter.WBP_Panel_GiftingCenter_C.HandleSelectedRecipientEligibilityChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleSelectedGiftOfferAndRecipientIsValidChanged(bool SelectedGiftOfferAndRecipientIsValid); // Function WBP_Panel_GiftingCenter.WBP_Panel_GiftingCenter_C.HandleSelectedGiftOfferAndRecipientIsValidChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleSelectedGiftOfferChanged(struct UOfferDTO* SelectedGiftOffer); // Function WBP_Panel_GiftingCenter.WBP_Panel_GiftingCenter_C.HandleSelectedGiftOfferChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSelectedRecipientChanged(struct FString Subject); // Function WBP_Panel_GiftingCenter.WBP_Panel_GiftingCenter_C.OnSelectedRecipientChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Panel_GiftingCenter.WBP_Panel_GiftingCenter_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void Handle Gift Offer Selected(struct UObject* SelectedOfferObject, enum class Enum_OffersType OfferType); // Function WBP_Panel_GiftingCenter.WBP_Panel_GiftingCenter_C.Handle Gift Offer Selected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitalizeSelectedGifts(); // Function WBP_Panel_GiftingCenter.WBP_Panel_GiftingCenter_C.InitalizeSelectedGifts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetGiftableItemButtons(struct UOfferDTOList* SelectedGiftOffers); // Function WBP_Panel_GiftingCenter.WBP_Panel_GiftingCenter_C.SetGiftableItemButtons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindEvents(bool Bind); // Function WBP_Panel_GiftingCenter.WBP_Panel_GiftingCenter_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitViewModels(); // Function WBP_Panel_GiftingCenter.WBP_Panel_GiftingCenter_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_GiftingCenter.WBP_Panel_GiftingCenter_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void K2_BindToViewModel(); // Function WBP_Panel_GiftingCenter.WBP_Panel_GiftingCenter_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function WBP_Panel_GiftingCenter.WBP_Panel_GiftingCenter_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_GiftingCenter_OffersList_K2Node_ComponentBoundEvent_3_OnEntryObjectAndWidgetChanged__DelegateSignature(struct UObject* EntryObject, struct UUserWidget* EntryWidget); // Function WBP_Panel_GiftingCenter.WBP_Panel_GiftingCenter_C.BndEvt__WBP_Panel_GiftingCenter_OffersList_K2Node_ComponentBoundEvent_3_OnEntryObjectAndWidgetChanged__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_GiftingCenter_SelectedGiftRecipient_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_GiftingCenter.WBP_Panel_GiftingCenter_C.BndEvt__WBP_Panel_GiftingCenter_SelectedGiftRecipient_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_GiftingCenter_SelectedGiftRecipient_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_GiftingCenter.WBP_Panel_GiftingCenter_C.BndEvt__WBP_Panel_GiftingCenter_SelectedGiftRecipient_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_GiftingCenter_OffersList_K2Node_ComponentBoundEvent_2_OnEntryObjectWidgetAndStateChanged__DelegateSignature(struct UObject* EntryObject, struct UUserWidget* EntryWidget, bool EntryState); // Function WBP_Panel_GiftingCenter.WBP_Panel_GiftingCenter_C.BndEvt__WBP_Panel_GiftingCenter_OffersList_K2Node_ComponentBoundEvent_2_OnEntryObjectWidgetAndStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_GiftingCenter_OffersList_K2Node_ComponentBoundEvent_4_OnEntryObjectAndWidgetChanged__DelegateSignature(struct UObject* EntryObject, struct UUserWidget* EntryWidget); // Function WBP_Panel_GiftingCenter.WBP_Panel_GiftingCenter_C.BndEvt__WBP_Panel_GiftingCenter_OffersList_K2Node_ComponentBoundEvent_4_OnEntryObjectAndWidgetChanged__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_GiftingCenter_SelectedGiftRecipient_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_GiftingCenter.WBP_Panel_GiftingCenter_C.BndEvt__WBP_Panel_GiftingCenter_SelectedGiftRecipient_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_GiftingCenter_NextButton_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_GiftingCenter.WBP_Panel_GiftingCenter_C.BndEvt__WBP_Panel_GiftingCenter_NextButton_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_GiftingCenter_NextButton_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_GiftingCenter.WBP_Panel_GiftingCenter_C.BndEvt__WBP_Panel_GiftingCenter_NextButton_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Panel_GiftingCenter(int32_t EntryPoint); // Function WBP_Panel_GiftingCenter.WBP_Panel_GiftingCenter_C.ExecuteUbergraph_WBP_Panel_GiftingCenter // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

