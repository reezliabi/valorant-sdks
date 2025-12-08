// BlueprintGeneratedClass VM_Gifting.VM_Gifting_C
// Size: 0x1b0 (Inherited: 0x90)
struct UVM_Gifting_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct FMulticastInlineDelegate OnSelectedGiftOffersChanged; // 0x98(0x10)
	struct FMulticastInlineDelegate OnGiftRecipientCandidatesChanged; // 0xa8(0x10)
	struct FString SelectedRecipient; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnSelectedRecipientChanged; // 0xc8(0x10)
	struct TArray<struct UGiftRecipientCandidateInfo*> GiftRecipientCandidates; // 0xd8(0x10)
	struct UOfferDTO* SelectedGiftOffer; // 0xe8(0x08)
	struct FMulticastInlineDelegate OnSelectedGiftOfferChanged; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnSelectedGiftOfferAndRecipientIsValidChanged; // 0x100(0x10)
	bool SelectedGiftOfferAndRecipientIsValid; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct FMulticastInlineDelegate OnSelectedRecipientEligibilityChanged; // 0x118(0x10)
	enum class EGiftingEligibleStatus GiftingEligibleStatus; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	struct TArray<struct FText> GiftingInvalidReasonTexts; // 0x130(0x10)
	struct FMulticastInlineDelegate OnGiftingEligibleStatusChanged; // 0x140(0x10)
	struct TMap<enum class EGiftingInvalidReason, struct FText> GiftingInvalidReasonToText; // 0x150(0x50)
	struct FMulticastInlineDelegate OnGiftingInvalidReasonTextsChanged; // 0x1a0(0x10)

	void HandleConfigChanged(struct FName& ConfigName); // Function VM_Gifting.VM_Gifting_C.HandleConfigChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateGiftingInvalidReasons(); // Function VM_Gifting.VM_Gifting_C.UpdateGiftingInvalidReasons // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleGiftingEligibilityChanged(enum class EGiftingEligibleStatus GiftingEligibleStatus); // Function VM_Gifting.VM_Gifting_C.HandleGiftingEligibilityChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleSelectedGiftRecipientEligibilityChanged(struct UGiftRecipientCandidateInfo* SelectedRecipientCandidateInfo); // Function VM_Gifting.VM_Gifting_C.HandleSelectedGiftRecipientEligibilityChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetSelectedGiftOffer(struct UOfferDTO* InGiftOffer); // Function VM_Gifting.VM_Gifting_C.SetSelectedGiftOffer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetSelectedGiftOffersList(struct UOfferDTOList*& SelectedGiftOffers); // Function VM_Gifting.VM_Gifting_C.GetSelectedGiftOffersList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetPlayerName(struct FString Subject, struct FDisplayName& SelectedGiftRecipientName); // Function VM_Gifting.VM_Gifting_C.GetPlayerName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetGiftRecipientCandidateForSubject(struct FString Subject, struct UGiftRecipientCandidateInfo*& GiftRecipientCandidate); // Function VM_Gifting.VM_Gifting_C.GetGiftRecipientCandidateForSubject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetSelectedRecipient(struct FString Subject); // Function VM_Gifting.VM_Gifting_C.SetSelectedRecipient // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleSelectedGiftRecipientChanged(struct FString SelectedRecipientID); // Function VM_Gifting.VM_Gifting_C.HandleSelectedGiftRecipientChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleSelectedGiftOfferAndRecipientIsValidChanged(bool SelectedGiftOfferAndRecipientIsValid); // Function VM_Gifting.VM_Gifting_C.HandleSelectedGiftOfferAndRecipientIsValidChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleSelectedGiftOfferChanged(struct UOfferDTO* SelectedGiftOffer); // Function VM_Gifting.VM_Gifting_C.HandleSelectedGiftOfferChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleGiftRecipientCandidatesChanged(struct TArray<struct UGiftRecipientCandidateInfo*>& InGiftRecipientCandidates); // Function VM_Gifting.VM_Gifting_C.HandleGiftRecipientCandidatesChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Handle Gift Offers Changed(struct UOfferDTOList* SelectedGiftOffers); // Function VM_Gifting.VM_Gifting_C.Handle Gift Offers Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToGiftEvents(bool Bind); // Function VM_Gifting.VM_Gifting_C.BindToGiftEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnViewModelCreated(); // Function VM_Gifting.VM_Gifting_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void RefreshBroadcast(); // Function VM_Gifting.VM_Gifting_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Reset(); // Function VM_Gifting.VM_Gifting_C.Reset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_VM_Gifting(int32_t EntryPoint); // Function VM_Gifting.VM_Gifting_C.ExecuteUbergraph_VM_Gifting // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnGiftingInvalidReasonTextsChanged__DelegateSignature(struct TArray<struct FText>& GiftingInvalidReasonTexts); // Function VM_Gifting.VM_Gifting_C.OnGiftingInvalidReasonTextsChanged__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnGiftingEligibleStatusChanged__DelegateSignature(enum class EGiftingEligibleStatus GiftingEligibleStatus); // Function VM_Gifting.VM_Gifting_C.OnGiftingEligibleStatusChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSelectedRecipientEligibilityChanged__DelegateSignature(struct UGiftRecipientCandidateInfo* SelectedRecipientCandidateInfo); // Function VM_Gifting.VM_Gifting_C.OnSelectedRecipientEligibilityChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSelectedGiftOfferAndRecipientIsValidChanged__DelegateSignature(bool SelectedGiftOfferAndRecipientIsValid); // Function VM_Gifting.VM_Gifting_C.OnSelectedGiftOfferAndRecipientIsValidChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSelectedGiftOfferChanged__DelegateSignature(struct UOfferDTO* SelectedGiftOffer); // Function VM_Gifting.VM_Gifting_C.OnSelectedGiftOfferChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSelectedRecipientChanged__DelegateSignature(struct FString Subject); // Function VM_Gifting.VM_Gifting_C.OnSelectedRecipientChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnGiftRecipientCandidatesChanged__DelegateSignature(struct TArray<struct UGiftRecipientCandidateInfo*>& GiftRecipientCandidates); // Function VM_Gifting.VM_Gifting_C.OnGiftRecipientCandidatesChanged__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSelectedGiftOffersChanged__DelegateSignature(struct UOfferDTOList* SelectedGiftOffers); // Function VM_Gifting.VM_Gifting_C.OnSelectedGiftOffersChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

