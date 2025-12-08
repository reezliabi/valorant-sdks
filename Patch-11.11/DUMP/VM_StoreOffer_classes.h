// BlueprintGeneratedClass VM_StoreOffer.VM_StoreOffer_C
// Size: 0x279 (Inherited: 0x90)
struct UVM_StoreOffer_C : UStoreOfferViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct FMulticastInlineDelegate OnRewardChanged; // 0x98(0x10)
	struct URewardModel* Reward; // 0xa8(0x08)
	struct UObject* OfferObejct; // 0xb0(0x08)
	struct TArray<struct FOfferCostWithDiscountInfo> CostList; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnCostListChanged; // 0xc8(0x10)
	bool bIsOfferSeen; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct FMulticastInlineDelegate OnIsOfferSeenChanged; // 0xe0(0x10)
	struct FGuid ContractID; // 0xf0(0x10)
	struct FRemainingBalanceInfo RemainingBalance; // 0x100(0x40)
	struct FMulticastInlineDelegate OnContractIDChanged; // 0x140(0x10)
	struct FMulticastInlineDelegate OnRemainingBalanceChanged; // 0x150(0x10)
	struct UOfferDTO* OfferDTO; // 0x160(0x08)
	bool bIsMultiCost; // 0x168(0x01)
	bool IsBundle; // 0x169(0x01)
	enum class EGiftingType IsGiftable; // 0x16a(0x01)
	bool IsGift; // 0x16b(0x01)
	bool bIsWholesale; // 0x16c(0x01)
	char pad_16D[0x3]; // 0x16d(0x03)
	struct TArray<struct FStoreOfferReward> RewardList; // 0x170(0x10)
	struct FMulticastInlineDelegate OnRewardListChanged; // 0x180(0x10)
	struct TArray<struct UOfferDTO*> SubOfferList; // 0x190(0x10)
	struct FMulticastInlineDelegate OnIsBundleChanged; // 0x1a0(0x10)
	struct FMulticastInlineDelegate OnSubOfferListChanged; // 0x1b0(0x10)
	struct UStorefrontItemDataAsset* StorefrontItemDataAsset; // 0x1c0(0x08)
	struct FMulticastInlineDelegate OnStorefrontItemDataAsset; // 0x1c8(0x10)
	struct FString CurrentCostString; // 0x1d8(0x10)
	struct FMulticastInlineDelegate OnPlatformOfferCostStringChanged; // 0x1e8(0x10)
	struct FMulticastInlineDelegate OnIsMultiCostChanged; // 0x1f8(0x10)
	enum class EOfferDTOType Offer Type; // 0x208(0x01)
	char pad_209[0x7]; // 0x209(0x07)
	struct FMulticastInlineDelegate OnIsWholesaleChanged; // 0x210(0x10)
	struct FMulticastInlineDelegate OnIsGiftChanged; // 0x220(0x10)
	struct FMulticastInlineDelegate OnIsGiftableChanged; // 0x230(0x10)
	struct FMulticastInlineDelegate OnOfferTypeChanged; // 0x240(0x10)
	bool bIsEnabled; // 0x250(0x01)
	char pad_251[0x7]; // 0x251(0x07)
	struct FMulticastInlineDelegate OnIsEnabledChanged; // 0x258(0x10)
	struct FMulticastInlineDelegate OnShouldShowDiscountInformationChanged; // 0x268(0x10)
	bool bShouldShowDiscountInformation; // 0x278(0x01)

	void SetIsGift(bool IsGift); // Function VM_StoreOffer.VM_StoreOffer_C.SetIsGift // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Is Giftable(enum class EGiftingType IsGiftable); // Function VM_StoreOffer.VM_StoreOffer_C.Set Is Giftable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetShouldShowDiscountInformation(bool InShouldShowDiscountInformation); // Function VM_StoreOffer.VM_StoreOffer_C.SetShouldShowDiscountInformation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ResetBespokeOfferBehavior(); // Function VM_StoreOffer.VM_StoreOffer_C.ResetBespokeOfferBehavior // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIsEnabled(bool IsEnabled); // Function VM_StoreOffer.VM_StoreOffer_C.SetIsEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsOfferEnabledChanged(struct UOfferDTO* OfferDTO); // Function VM_StoreOffer.VM_StoreOffer_C.OnIsOfferEnabledChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToIsEnabledChanged(bool Bind); // Function VM_StoreOffer.VM_StoreOffer_C.BindToIsEnabledChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateNewBalanceMessage(int32_t RemainingFunds, struct FGuid CurrencyID, struct FText& RemainingFundsMessage); // Function VM_StoreOffer.VM_StoreOffer_C.CreateNewBalanceMessage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetOfferType(enum class EOfferDTOType InOfferType); // Function VM_StoreOffer.VM_StoreOffer_C.SetOfferType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HasSubOffers(bool& HasSubOffers); // Function VM_StoreOffer.VM_StoreOffer_C.HasSubOffers // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Set Costs(struct TMap<struct FGuid, struct UCostDTO*> Costs, bool Ignore Discount); // Function VM_StoreOffer.VM_StoreOffer_C.Set Costs // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Handle Bundle Cost Changed(struct UOfferDTO* Bundle); // Function VM_StoreOffer.VM_StoreOffer_C.Handle Bundle Cost Changed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIsBundle(bool IsBundleIn); // Function VM_StoreOffer.VM_StoreOffer_C.SetIsBundle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIsWholesale(bool InIsWholesale); // Function VM_StoreOffer.VM_StoreOffer_C.SetIsWholesale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIsMultiCost(bool IsMultiCost); // Function VM_StoreOffer.VM_StoreOffer_C.SetIsMultiCost // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitFromOfferDTO(struct UOfferDTO* OfferDTO); // Function VM_StoreOffer.VM_StoreOffer_C.InitFromOfferDTO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnWalletUpdated(); // Function VM_StoreOffer.VM_StoreOffer_C.OnWalletUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CurrencyIdToImageId(struct FGuid CurrencyID, struct FString& RemainingFundsMessage); // Function VM_StoreOffer.VM_StoreOffer_C.CurrencyIdToImageId // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void CreateRemainingFundsMessage(bool HasSufficientFunds, int32_t RemainingFunds, struct FGuid CurrencyID, struct FText& RemainingFundsMessage); // Function VM_StoreOffer.VM_StoreOffer_C.CreateRemainingFundsMessage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Evaluate Remaining Funds Info(struct TArray<struct FOfferCostWithDiscountInfo>& CostList, struct FRemainingBalanceInfo& RemainingBalance); // Function VM_StoreOffer.VM_StoreOffer_C.Evaluate Remaining Funds Info // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetStoreOfferDTO(struct UOfferDTO* OfferDTO, bool IgnoreDiscount); // Function VM_StoreOffer.VM_StoreOffer_C.SetStoreOfferDTO // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetSubOfferList(struct TArray<struct UOfferDTO*>& NewSubOffersList); // Function VM_StoreOffer.VM_StoreOffer_C.SetSubOfferList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetStorefrontItemDataAsset(struct UStorefrontItemDataAsset* NewStorefrontItemDataAsset); // Function VM_StoreOffer.VM_StoreOffer_C.SetStorefrontItemDataAsset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetContractID(struct FGuid NewContractID); // Function VM_StoreOffer.VM_StoreOffer_C.SetContractID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleBonusOfferIsSeenChanged(struct FGuid BonusStoreOfferID, bool IsSeen); // Function VM_StoreOffer.VM_StoreOffer_C.HandleBonusOfferIsSeenChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RevealIfUnseen(); // Function VM_StoreOffer.VM_StoreOffer_C.RevealIfUnseen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCurrencyHandleLoaded(struct UCurrencyHandle* CurrencyHandle); // Function VM_StoreOffer.VM_StoreOffer_C.OnCurrencyHandleLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateContractIDFromOffer(struct FGuid ContractID); // Function VM_StoreOffer.VM_StoreOffer_C.UpdateContractIDFromOffer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Refresh(); // Function VM_StoreOffer.VM_StoreOffer_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIsOfferSeen(bool IsOfferSeenIn); // Function VM_StoreOffer.VM_StoreOffer_C.SetIsOfferSeen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetRemainingBalance(struct FRemainingBalanceInfo NewRemainingBalance); // Function VM_StoreOffer.VM_StoreOffer_C.SetRemainingBalance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetRewardList(struct TArray<struct FStoreOfferReward>& NewRewardsList); // Function VM_StoreOffer.VM_StoreOffer_C.SetRewardList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetReward(struct URewardModel* NewReward); // Function VM_StoreOffer.VM_StoreOffer_C.SetReward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetCostList(struct TArray<struct FOfferCostWithDiscountInfo>& NewCostList); // Function VM_StoreOffer.VM_StoreOffer_C.SetCostList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Reset(); // Function VM_StoreOffer.VM_StoreOffer_C.Reset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RefreshBroadcast(); // Function VM_StoreOffer.VM_StoreOffer_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_VM_StoreOffer(int32_t EntryPoint); // Function VM_StoreOffer.VM_StoreOffer_C.ExecuteUbergraph_VM_StoreOffer // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnIsGiftChanged__DelegateSignature(bool IsGift); // Function VM_StoreOffer.VM_StoreOffer_C.OnIsGiftChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsGiftableChanged__DelegateSignature(enum class EGiftingType IsGiftable); // Function VM_StoreOffer.VM_StoreOffer_C.OnIsGiftableChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnShouldShowDiscountInformationChanged__DelegateSignature(bool ShouldShowDiscountInformation); // Function VM_StoreOffer.VM_StoreOffer_C.OnShouldShowDiscountInformationChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsEnabledChanged__DelegateSignature(bool IsEnabled); // Function VM_StoreOffer.VM_StoreOffer_C.OnIsEnabledChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsWholesaleChanged__DelegateSignature(bool IsWholesale); // Function VM_StoreOffer.VM_StoreOffer_C.OnIsWholesaleChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnOfferTypeChanged__DelegateSignature(enum class EOfferDTOType InOfferType); // Function VM_StoreOffer.VM_StoreOffer_C.OnOfferTypeChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsMultiCostChanged__DelegateSignature(bool IsMultiCost); // Function VM_StoreOffer.VM_StoreOffer_C.OnIsMultiCostChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlatformOfferCostStringChanged__DelegateSignature(struct FString CurrentCostString); // Function VM_StoreOffer.VM_StoreOffer_C.OnPlatformOfferCostStringChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnStorefrontItemDataAsset__DelegateSignature(struct UStorefrontItemDataAsset* NewStorefrontItemDataAsset); // Function VM_StoreOffer.VM_StoreOffer_C.OnStorefrontItemDataAsset__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSubOfferListChanged__DelegateSignature(struct TArray<struct UOfferDTO*>& NewSubOffersList); // Function VM_StoreOffer.VM_StoreOffer_C.OnSubOfferListChanged__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsBundleChanged__DelegateSignature(bool IsBundle); // Function VM_StoreOffer.VM_StoreOffer_C.OnIsBundleChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRewardListChanged__DelegateSignature(struct TArray<struct FStoreOfferReward>& NewRewardsList); // Function VM_StoreOffer.VM_StoreOffer_C.OnRewardListChanged__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRemainingBalanceChanged__DelegateSignature(struct FRemainingBalanceInfo RemainingBalance); // Function VM_StoreOffer.VM_StoreOffer_C.OnRemainingBalanceChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnContractIDChanged__DelegateSignature(struct FGuid NewContractID); // Function VM_StoreOffer.VM_StoreOffer_C.OnContractIDChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsOfferSeenChanged__DelegateSignature(bool IsOfferSeenIn); // Function VM_StoreOffer.VM_StoreOffer_C.OnIsOfferSeenChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCostListChanged__DelegateSignature(struct TArray<struct TArray<struct FOfferCostWithDiscountInfo>>& CostList); // Function VM_StoreOffer.VM_StoreOffer_C.OnCostListChanged__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRewardChanged__DelegateSignature(struct URewardModel* Reward); // Function VM_StoreOffer.VM_StoreOffer_C.OnRewardChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

