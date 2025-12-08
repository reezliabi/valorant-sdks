// BlueprintGeneratedClass VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C
// Size: 0x208 (Inherited: 0x90)
struct UVM_PurchaseConfirmModal_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct UOfferDTO* OfferDTO; // 0x98(0x08)
	struct FMulticastInlineDelegate OnOfferDTOChanged; // 0xa0(0x10)
	enum class EPurchaseState OrderState; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct FString PopupUrl; // 0xb8(0x10)
	struct FString PurchaseCompleteUrl; // 0xc8(0x10)
	struct FName AcknowledgementRequiredConfig; // 0xd8(0x0c)
	bool AcknowledgementRequired; // 0xe4(0x01)
	bool SecondaryAcknowledgementRequired; // 0xe5(0x01)
	bool AcknowledgementCheckboxSelected; // 0xe6(0x01)
	char pad_E7[0x1]; // 0xe7(0x01)
	struct FMulticastInlineDelegate OnAcknowledgementRequiredChanged; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnAcknowledgementCheckboxSelected; // 0xf8(0x10)
	bool SecondaryAcknowledgementCheckboxSelected; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct FText AcknowledgementText; // 0x110(0x18)
	struct FMulticastInlineDelegate OnSecondaryAcknowledgementCheckboxSelected; // 0x128(0x10)
	struct FMulticastInlineDelegate OnAcknowledgementTextChanged; // 0x138(0x10)
	struct FText SecondaryAcknowledgementText; // 0x148(0x18)
	struct FName UseMandatoryNoticeForAcknowledgementTextConfig; // 0x160(0x0c)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct FMulticastInlineDelegate OnSecondaryAcknowledgementTextChanged; // 0x170(0x10)
	struct FMulticastInlineDelegate OnPurchaseConfirmOrderStateChanged; // 0x180(0x10)
	struct FString RefundBaseURL; // 0x190(0x10)
	struct FString JapanRefundURL; // 0x1a0(0x10)
	struct FString TermsAndConditionsBaseURL; // 0x1b0(0x10)
	struct FString JapanTermsAndConditionsURL; // 0x1c0(0x10)
	struct FName NavArg_OfferObject; // 0x1d0(0x0c)
	char pad_1DC[0x4]; // 0x1dc(0x04)
	struct FMulticastInlineDelegate OnTermsAndConditionsRequiredChanged; // 0x1e0(0x10)
	bool TermsAndConditionsRequired; // 0x1f0(0x01)
	char pad_1F1[0x7]; // 0x1f1(0x07)
	struct FMulticastInlineDelegate OnSecondaryAcknowledementRequiredChanged; // 0x1f8(0x10)

	void isAcknowledgementSatisfied(bool& AcknowledgementSatisfied); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.isAcknowledgementSatisfied // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void InitFromOfferDTO(struct UOfferDTO* OfferDTO); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.InitFromOfferDTO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitFromNavArgs(struct TMap<struct FName, struct FWildcard> NavArgs); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.InitFromNavArgs // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitAcknowledgementCheckbox(); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.InitAcknowledgementCheckbox // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleRemainingBalanceChanged(struct FRemainingBalanceInfo Remaining Balance); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.HandleRemainingBalanceChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HideNativePlatformIconOverlay(); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.HideNativePlatformIconOverlay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShouldHideContentTierIcon(bool& ShouldHideContentTierIcon); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.ShouldHideContentTierIcon // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Has Sufficient Funds(struct UOfferDTO* OfferDTO, struct FGuid Currency ID, bool& HasSufficientFunds); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.Has Sufficient Funds // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Make Navigation Parameters(struct TMap<struct FName, struct FWildcard>& NavParams); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.Make Navigation Parameters // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Get Expected Reward Model List(struct URewardModelList*& ExpectedRewards); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.Get Expected Reward Model List // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	bool IsOrderInProgress(); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.IsOrderInProgress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetTermsAndConditionsURLByRegion(struct FString& TermsAndRefundBaseURL); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.GetTermsAndConditionsURLByRegion // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetRefundURLByRegion(struct FString& TermsAndRefundBaseURL); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.GetRefundURLByRegion // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetUrl(bool isRefundPolicy, struct FString& URL); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.GetUrl // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShouldRequireSecondaryAcknowledgement(bool& RequireSecondaryAcknowledgement); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.ShouldRequireSecondaryAcknowledgement // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void OpenAllTermsAndConditionsScreen(bool isRefundPolicy); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.OpenAllTermsAndConditionsScreen // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleSecondaryAcknowledgementCheckboxSelected(bool AcknowledgementCheckboxSelected); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.HandleSecondaryAcknowledgementCheckboxSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BroadcastOrderStateForPopups(enum class EPurchaseState OrderState); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.BroadcastOrderStateForPopups // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetSecondaryAcknowledgementText(struct FText InAcknowledgementText); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.SetSecondaryAcknowledgementText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ResetAcknowledgementCheckboxSelection(); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.ResetAcknowledgementCheckboxSelection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleAcknowledgementCheckboxSelected(bool AcknowledgementCheckboxSelected); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.HandleAcknowledgementCheckboxSelected // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetAcknowledgementText(struct FText InAcknowledgementText); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.SetAcknowledgementText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleAcknowledgementConfigUpdated(struct FName& ConfigName); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.HandleAcknowledgementConfigUpdated // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShouldRequireAcknowledgement(bool& ShouldRequireAcknowledgement); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.ShouldRequireAcknowledgement // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetAcknowledgementText(enum class EOfferDTOType OfferDTO, struct FText& AcknowledgementText); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.GetAcknowledgementText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void HandleOnOrderStateChanged(enum class EPurchaseState NewOrderState); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.HandleOnOrderStateChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitFromNavigationSystem(); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.InitFromNavigationSystem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetOfferDTO(struct UOfferDTO* OfferDTO); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.SetOfferDTO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetSecondaryAcknowledgementRequired(bool InAcknowledgementRequired); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.SetSecondaryAcknowledgementRequired // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetAcknowledgementRequired(bool InAcknowledgementRequired); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.SetAcknowledgementRequired // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetTermsAndConditionsRequired(bool InTermsAndConditionsRequired); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.SetTermsAndConditionsRequired // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetSecondaryAcknowledgementCheckboxSelected(bool InAcknowledgementCheckboxSelected); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.SetSecondaryAcknowledgementCheckboxSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetAcknowledgementCheckboxSelected(bool InAcknowledgementCheckboxSelected); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.SetAcknowledgementCheckboxSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Refresh(); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Reset(); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.Reset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RefreshBroadcast(); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_VM_PurchaseConfirmModal(int32_t EntryPoint); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.ExecuteUbergraph_VM_PurchaseConfirmModal // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnSecondaryAcknowledementRequiredChanged__DelegateSignature(bool InAcknowledgementRequired); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.OnSecondaryAcknowledementRequiredChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSecondaryAcknowledgementTextChanged__DelegateSignature(struct FText InAcknowledgementText); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.OnSecondaryAcknowledgementTextChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSecondaryAcknowledgementCheckboxSelected__DelegateSignature(bool InAcknowledgementCheckboxSelected); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.OnSecondaryAcknowledgementCheckboxSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTermsAndConditionsRequiredChanged__DelegateSignature(bool TermsAndConditionsRequired); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.OnTermsAndConditionsRequiredChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPurchaseConfirmOrderStateChanged__DelegateSignature(enum class EPurchaseState OrderState); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.OnPurchaseConfirmOrderStateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAcknowledgementTextChanged__DelegateSignature(struct FText AcknowledgementText); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.OnAcknowledgementTextChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAcknowledgementCheckboxSelected__DelegateSignature(bool AcknowledgementCheckboxSelected); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.OnAcknowledgementCheckboxSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAcknowledgementRequiredChanged__DelegateSignature(bool AcknowledgementRequired); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.OnAcknowledgementRequiredChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnOfferDTOChanged__DelegateSignature(struct UOfferDTO* OfferDTO); // Function VM_PurchaseConfirmModal.VM_PurchaseConfirmModal_C.OnOfferDTOChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

