// WidgetBlueprintGeneratedClass PurchaseModal.PurchaseModal_C
// Size: 0x3d9 (Inherited: 0x328)
struct UPurchaseModal_C : UPurchaseModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UPurchaseConfirm_C* purchaseconfirm; // 0x330(0x08)
	struct UPurchaseFailed_C* PurchaseFailed; // 0x338(0x08)
	struct UPurchaseInProgressWidget_C* PurchaseInProgressWidget; // 0x340(0x08)
	struct UPurchaseSuccess_C* PurchaseSuccess; // 0x348(0x08)
	struct UPurchaseSuccessNoEquip_C* PurchaseSuccessNoEquip; // 0x350(0x08)
	struct UPurchaseTimeout_C* PurchaseTimeout; // 0x358(0x08)
	struct UWidgetSwitcher* Switcher; // 0x360(0x08)
	double Transaction Timeout Seconds; // 0x368(0x08)
	struct FTimerHandle TimeoutTimer; // 0x370(0x08)
	enum class EPurchaseSource PurchaseSource; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)
	struct FMulticastInlineDelegate OnClose; // 0x380(0x10)
	struct TArray<struct URewardModel*> Rewards; // 0x390(0x10)
	struct FGuid PendingOrderID; // 0x3a0(0x10)
	struct FMulticastInlineDelegate OnRewardsSummaryClosed; // 0x3b0(0x10)
	struct FText Subtitle; // 0x3c0(0x18)
	bool bOpenRewardsSummaryOnOrderComplete; // 0x3d8(0x01)

	struct FAresMainMenuNavBarData GetNavBarData(); // Function PurchaseModal.PurchaseModal_C.GetNavBarData // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	bool HandleBackRequest(); // Function PurchaseModal.PurchaseModal_C.HandleBackRequest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SendStorePopupClosedEvent(); // Function PurchaseModal.PurchaseModal_C.SendStorePopupClosedEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecutePurchase(); // Function PurchaseModal.PurchaseModal_C.ExecutePurchase // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CancelPurchase(); // Function PurchaseModal.PurchaseModal_C.CancelPurchase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DisplaySingleBundleItemPurchase(enum class EPurchaseSource PurchaseSource, struct UStoreOffer* StoreOffer, struct UBundleViewModel* Bundle); // Function PurchaseModal.PurchaseModal_C.DisplaySingleBundleItemPurchase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SendPurchaseCancelEvent(); // Function PurchaseModal.PurchaseModal_C.SendPurchaseCancelEvent // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DisplaySingleBonusItemPurchase(enum class EPurchaseSource PurchaseSource, struct UBonusStoreOfferViewModel* BonusStoreOffer); // Function PurchaseModal.PurchaseModal_C.DisplaySingleBonusItemPurchase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DisplayItemUpgradePurchaseV2(struct FGuid ItemProgressionDefinitionID, struct UCurrencyDataAsset* PurchaseCurrency, int32_t PurchasePrice, int32_t CurrentLevel, int32_t NextLevel, enum class EPurchaseSource PurchaseSource); // Function PurchaseModal.PurchaseModal_C.DisplayItemUpgradePurchaseV2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DisplayItemSidegradeUnlockPurchase(enum class EPurchaseSource PurchaseSource, struct FGuid ItemProgressionDefinitionID, struct USidegradeModel* SidegradeModel); // Function PurchaseModal.PurchaseModal_C.DisplayItemSidegradeUnlockPurchase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CloseAllAboveSource(); // Function PurchaseModal.PurchaseModal_C.CloseAllAboveSource // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnOrderLookupAfterTimeout(bool IsOrderComplete); // Function PurchaseModal.PurchaseModal_C.OnOrderLookupAfterTimeout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DisplayTimeout(); // Function PurchaseModal.PurchaseModal_C.DisplayTimeout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OpenRewardsSummary(); // Function PurchaseModal.PurchaseModal_C.OpenRewardsSummary // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DisplayContractLevelPurchase(struct FGuid ContractDefinitionID, struct UCurrencyDataAsset* PurchaseCurrency, int32_t PurchasePrice, int32_t FromLevel, int32_t ToLevel, enum class EPurchaseSource PurchaseSource, int32_t DoughAmountClaimed); // Function PurchaseModal.PurchaseModal_C.DisplayContractLevelPurchase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DisplayContractUpgradePurchase(enum class EPurchaseSource PurchaseSource, struct FGuid ContractDefinitionID, struct UCurrencyDataAsset* PurchaseCurrency, int32_t PurchasePrice); // Function PurchaseModal.PurchaseModal_C.DisplayContractUpgradePurchase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DisplayBundlePurchase(enum class EPurchaseSource PurchaseSource, struct UBundleViewModel* Bundle); // Function PurchaseModal.PurchaseModal_C.DisplayBundlePurchase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DisplaySingleItemPurchase(enum class EPurchaseSource PurchaseSource, struct UStoreOffer* StoreOffer); // Function PurchaseModal.PurchaseModal_C.DisplaySingleItemPurchase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StopTimer(); // Function PurchaseModal.PurchaseModal_C.StopTimer // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CloseDialog(); // Function PurchaseModal.PurchaseModal_C.CloseDialog // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnOrderTimeout(); // Function PurchaseModal.PurchaseModal_C.OnOrderTimeout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnOrderError(); // Function PurchaseModal.PurchaseModal_C.OnOrderError // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnOrderSubmitted(struct FGuid& OrderID, struct FGuid& XID); // Function PurchaseModal.PurchaseModal_C.OnOrderSubmitted // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Initialize(enum class EPurchaseSource PurchaseSource); // Function PurchaseModal.PurchaseModal_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__PurchaseConfirmation_K2Node_ComponentBoundEvent_2_OnStoreClicked__DelegateSignature(); // Function PurchaseModal.PurchaseModal_C.BndEvt__PurchaseConfirmation_K2Node_ComponentBoundEvent_2_OnStoreClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__PurchaseConfirm_K2Node_ComponentBoundEvent_4_OnUnlockClicked__DelegateSignature(); // Function PurchaseModal.PurchaseModal_C.BndEvt__PurchaseConfirm_K2Node_ComponentBoundEvent_4_OnUnlockClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__PurchaseConfirm_K2Node_ComponentBoundEvent_5_OnCancelClicked__DelegateSignature(); // Function PurchaseModal.PurchaseModal_C.BndEvt__PurchaseConfirm_K2Node_ComponentBoundEvent_5_OnCancelClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__PurchaseFailed_K2Node_ComponentBoundEvent_6_OnDialogAccepted__DelegateSignature(); // Function PurchaseModal.PurchaseModal_C.BndEvt__PurchaseFailed_K2Node_ComponentBoundEvent_6_OnDialogAccepted__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__PurchaseTimeout_K2Node_ComponentBoundEvent_0_OnDialogAccepted__DelegateSignature(); // Function PurchaseModal.PurchaseModal_C.BndEvt__PurchaseTimeout_K2Node_ComponentBoundEvent_0_OnDialogAccepted__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__PurchaseSuccess_K2Node_ComponentBoundEvent_1_OnEquipClicked__DelegateSignature(); // Function PurchaseModal.PurchaseModal_C.BndEvt__PurchaseSuccess_K2Node_ComponentBoundEvent_1_OnEquipClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnEquipComplete(); // Function PurchaseModal.PurchaseModal_C.OnEquipComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__PurchaseSuccessNoEquip_K2Node_ComponentBoundEvent_3_OnOKClicked__DelegateSignature(); // Function PurchaseModal.PurchaseModal_C.BndEvt__PurchaseSuccessNoEquip_K2Node_ComponentBoundEvent_3_OnOKClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnOrderComplete(); // Function PurchaseModal.PurchaseModal_C.OnOrderComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function PurchaseModal.PurchaseModal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_PurchaseModal(int32_t EntryPoint); // Function PurchaseModal.PurchaseModal_C.ExecuteUbergraph_PurchaseModal // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnRewardsSummaryClosed__DelegateSignature(); // Function PurchaseModal.PurchaseModal_C.OnRewardsSummaryClosed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnClose__DelegateSignature(); // Function PurchaseModal.PurchaseModal_C.OnClose__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

