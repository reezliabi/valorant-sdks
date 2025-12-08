// BlueprintGeneratedClass VM_OfferTile.VM_OfferTile_C
// Size: 0x2d9 (Inherited: 0x90)
struct UVM_OfferTile_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct UVM_StoreOffer_C* VM_Offer; // 0x98(0x08)
	struct UVM_Reward_C* VM_Reward; // 0xa0(0x08)
	struct UContentTierViewModel* VM_ContentTier; // 0xa8(0x08)
	struct UVM_PlatformOffer_C* VM_PlatformOffer; // 0xb0(0x08)
	struct FMulticastInlineDelegate OnRewardChanged; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnCostListChanged; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnIsOfferSeenChanged; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnDisplayNameChanged; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnEquippableSkinHandleChanged; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnRewardHandleChanged; // 0x108(0x10)
	struct FMulticastInlineDelegate OnContentTierIconChanged; // 0x118(0x10)
	struct FMulticastInlineDelegate OnHighlightColorChanged; // 0x128(0x10)
	struct FMulticastInlineDelegate OnIsExclusiveTierChanged; // 0x138(0x10)
	struct FMulticastInlineDelegate OnIsItemOwnedChanged; // 0x148(0x10)
	struct FMulticastInlineDelegate OnPlatformOfferCostStringChanged; // 0x158(0x10)
	struct FMulticastInlineDelegate OnPlatformOfferQuantityChanged; // 0x168(0x10)
	struct URewardModel* Reward; // 0x178(0x08)
	struct TArray<struct FOfferCostWithDiscountInfo> CostList; // 0x180(0x10)
	bool IsOfferSeen; // 0x190(0x01)
	char pad_191[0x7]; // 0x191(0x07)
	struct FText DisplayName; // 0x198(0x18)
	struct UEquippableSkinHandle* EquippableSkinHandle; // 0x1b0(0x08)
	bool RewardHasValidData; // 0x1b8(0x01)
	char pad_1B9[0x7]; // 0x1b9(0x07)
	struct UBaseHandle* RewardBaseHandle; // 0x1c0(0x08)
	struct UTexture* ContentTierIcon; // 0x1c8(0x08)
	struct FLinearColor HighlightColor; // 0x1d0(0x10)
	bool IsExclusiveTier; // 0x1e0(0x01)
	bool ContentTierHasValidData; // 0x1e1(0x01)
	bool IsOwned; // 0x1e2(0x01)
	char pad_1E3[0x5]; // 0x1e3(0x05)
	struct FString CurrentCostString; // 0x1e8(0x10)
	int32_t BaseQuantity; // 0x1f8(0x04)
	int32_t BonusQuantity; // 0x1fc(0x04)
	struct FMulticastInlineDelegate OnContentTierHasValidDataChanged; // 0x200(0x10)
	struct FMulticastInlineDelegate OnRewardHasValidDataChanged; // 0x210(0x10)
	struct UStorefrontItemDataAsset* StorefrontItemDataAsset; // 0x220(0x08)
	struct FMulticastInlineDelegate OnStorefrontItemChanged; // 0x228(0x10)
	struct UVM_StorefrontItem_C* VM_StorefrontItem; // 0x238(0x08)
	struct FText BundleName; // 0x240(0x18)
	struct FMulticastInlineDelegate OnShouldExpectContentTierIcon; // 0x258(0x10)
	bool ExpectContentTierIcon; // 0x268(0x01)
	bool UseFullRewardPreviewBounds; // 0x269(0x01)
	char pad_26A[0x6]; // 0x26a(0x06)
	struct FMulticastInlineDelegate OnUseFullRewardPreviewBoundsChanged; // 0x270(0x10)
	struct UTexture2D* BundleBackgroundImage; // 0x280(0x08)
	bool ShouldShowDiscountInformation; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct FMulticastInlineDelegate OnShouldShowDiscountInformation; // 0x290(0x10)
	struct FMulticastInlineDelegate OnBundleBackgroundImageChanged; // 0x2a0(0x10)
	struct UVM_InventoryList_C* VM_InventoryList; // 0x2b0(0x08)
	bool IsGift; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)
	struct UVM_InventoryItem_C* VM_InventoryItem; // 0x2c0(0x08)
	struct FMulticastInlineDelegate OnIsSelectedGiftOffer; // 0x2c8(0x10)
	bool IsSelectedGiftOffer; // 0x2d8(0x01)

	void HandleSelectedGiftOfferChanged(struct UOfferDTO* SelectedGiftOffer); // Function VM_OfferTile.VM_OfferTile_C.HandleSelectedGiftOfferChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIsSelectedGiftOffer(bool IsSelectedGiftOffer); // Function VM_OfferTile.VM_OfferTile_C.SetIsSelectedGiftOffer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnHandleIsGiftChanged(bool IsGift); // Function VM_OfferTile.VM_OfferTile_C.OnHandleIsGiftChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsInventoryListOwnedChanged(bool IsListOwnedIn); // Function VM_OfferTile.VM_OfferTile_C.OnIsInventoryListOwnedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRewardsListChanged(struct TArray<struct FStoreOfferReward>& NewRewardsList); // Function VM_OfferTile.VM_OfferTile_C.OnRewardsListChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetShouldShowDiscountInformation(bool InShouldShowDiscountInformation); // Function VM_OfferTile.VM_OfferTile_C.SetShouldShowDiscountInformation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetBundleBackgroundImage(struct UTexture2D* InBundleBackgroundImage); // Function VM_OfferTile.VM_OfferTile_C.SetBundleBackgroundImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnHandleRewardDisplayNameChanged(struct FText DisplayName); // Function VM_OfferTile.VM_OfferTile_C.OnHandleRewardDisplayNameChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnHandleBundleBackgroundImageChanged(struct UTexture2D* BundleBackgroundImage, struct UMaterialInterface* BundleBackgroundMaterial); // Function VM_OfferTile.VM_OfferTile_C.OnHandleBundleBackgroundImageChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetUseFullRewardPreviewWidgetBounds(bool InUseFullBounds); // Function VM_OfferTile.VM_OfferTile_C.SetUseFullRewardPreviewWidgetBounds // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetShouldExpectContentTierIcon(bool InExpectContentTierIcon); // Function VM_OfferTile.VM_OfferTile_C.SetShouldExpectContentTierIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnHandleBundleDisplayNameChanged(struct FText DisplayName); // Function VM_OfferTile.VM_OfferTile_C.OnHandleBundleDisplayNameChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetStorefrontItem(struct UStorefrontItemDataAsset* NewStorefrontItemDataAsset); // Function VM_OfferTile.VM_OfferTile_C.SetStorefrontItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ResetChildren(); // Function VM_OfferTile.VM_OfferTile_C.ResetChildren // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetPlatformOfferQuantity(int32_t InBaseQuantity, int32_t InBonusQuantity); // Function VM_OfferTile.VM_OfferTile_C.SetPlatformOfferQuantity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetPlatformOfferCostString(struct FString CurrentCostString); // Function VM_OfferTile.VM_OfferTile_C.SetPlatformOfferCostString // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIsItemOwned(bool IsOwned); // Function VM_OfferTile.VM_OfferTile_C.SetIsItemOwned // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetContentTierHasValidData(bool ContentTierHasValidData); // Function VM_OfferTile.VM_OfferTile_C.SetContentTierHasValidData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIsExclusiveTier(bool bIsExclusiveTier); // Function VM_OfferTile.VM_OfferTile_C.SetIsExclusiveTier // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetHighlightColor(struct FLinearColor& HighlightColor); // Function VM_OfferTile.VM_OfferTile_C.SetHighlightColor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetContentTierIcon(struct UTexture* ContentTierIcon); // Function VM_OfferTile.VM_OfferTile_C.SetContentTierIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetRewardHandle(struct UBaseHandle* RewardBaseHandle); // Function VM_OfferTile.VM_OfferTile_C.SetRewardHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetRewardHasValidData(bool RewardHasValidData); // Function VM_OfferTile.VM_OfferTile_C.SetRewardHasValidData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetEquippableSkinHandle(struct UEquippableSkinHandle* EquippableSkinHandle); // Function VM_OfferTile.VM_OfferTile_C.SetEquippableSkinHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetDisplayName(struct FText DisplayName); // Function VM_OfferTile.VM_OfferTile_C.SetDisplayName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIsOfferSeen(bool IsOfferSeenIn); // Function VM_OfferTile.VM_OfferTile_C.SetIsOfferSeen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetCostList(struct TArray<struct FOfferCostWithDiscountInfo>& CostList); // Function VM_OfferTile.VM_OfferTile_C.SetCostList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetReward(struct URewardModel* Reward); // Function VM_OfferTile.VM_OfferTile_C.SetReward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitFromOfferDTO(struct UOfferDTO* InOfferDTO); // Function VM_OfferTile.VM_OfferTile_C.InitFromOfferDTO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RefreshChildren(); // Function VM_OfferTile.VM_OfferTile_C.RefreshChildren // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitViewModels(); // Function VM_OfferTile.VM_OfferTile_C.InitViewModels // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindEvents(bool Bind); // Function VM_OfferTile.VM_OfferTile_C.BindEvents // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Reset(); // Function VM_OfferTile.VM_OfferTile_C.Reset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RefreshBroadcast(); // Function VM_OfferTile.VM_OfferTile_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnViewModelCreated(); // Function VM_OfferTile.VM_OfferTile_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function VM_OfferTile.VM_OfferTile_C.Destruct // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_VM_OfferTile(int32_t EntryPoint); // Function VM_OfferTile.VM_OfferTile_C.ExecuteUbergraph_VM_OfferTile // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnIsSelectedGiftOffer__DelegateSignature(bool IsSelectedGiftOffer); // Function VM_OfferTile.VM_OfferTile_C.OnIsSelectedGiftOffer__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBundleBackgroundImageChanged__DelegateSignature(struct UTexture2D* BundleBackgroundImage); // Function VM_OfferTile.VM_OfferTile_C.OnBundleBackgroundImageChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnShouldShowDiscountInformation__DelegateSignature(bool ShouldShowDiscountInformation); // Function VM_OfferTile.VM_OfferTile_C.OnShouldShowDiscountInformation__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnUseFullRewardPreviewBoundsChanged__DelegateSignature(bool UseFullRewardPreviewBounds); // Function VM_OfferTile.VM_OfferTile_C.OnUseFullRewardPreviewBoundsChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnShouldExpectContentTierIcon__DelegateSignature(bool InExpectContentTierIcon); // Function VM_OfferTile.VM_OfferTile_C.OnShouldExpectContentTierIcon__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnStorefrontItemChanged__DelegateSignature(struct UStorefrontItemDataAsset* NewStorefrontItemDataAsset); // Function VM_OfferTile.VM_OfferTile_C.OnStorefrontItemChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRewardHasValidDataChanged__DelegateSignature(bool RewardHasValidData); // Function VM_OfferTile.VM_OfferTile_C.OnRewardHasValidDataChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnContentTierHasValidDataChanged__DelegateSignature(bool ContentTierHasValidData); // Function VM_OfferTile.VM_OfferTile_C.OnContentTierHasValidDataChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlatformOfferQuantityChanged__DelegateSignature(int32_t BaseQuantity, int32_t BonusQuantity); // Function VM_OfferTile.VM_OfferTile_C.OnPlatformOfferQuantityChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlatformOfferCostStringChanged__DelegateSignature(struct FString CurrentCostString); // Function VM_OfferTile.VM_OfferTile_C.OnPlatformOfferCostStringChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsItemOwnedChanged__DelegateSignature(bool IsOwned); // Function VM_OfferTile.VM_OfferTile_C.OnIsItemOwnedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsExclusiveTierChanged__DelegateSignature(bool bIsExclusiveTier); // Function VM_OfferTile.VM_OfferTile_C.OnIsExclusiveTierChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnHighlightColorChanged__DelegateSignature(struct FLinearColor& ContentTierColor); // Function VM_OfferTile.VM_OfferTile_C.OnHighlightColorChanged__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnContentTierIconChanged__DelegateSignature(struct UTexture* ContentTierIcon); // Function VM_OfferTile.VM_OfferTile_C.OnContentTierIconChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRewardHandleChanged__DelegateSignature(struct UBaseHandle* RewardBaseHandle); // Function VM_OfferTile.VM_OfferTile_C.OnRewardHandleChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEquippableSkinHandleChanged__DelegateSignature(struct UEquippableSkinHandle* EquippableSkinHandle); // Function VM_OfferTile.VM_OfferTile_C.OnEquippableSkinHandleChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnDisplayNameChanged__DelegateSignature(struct FText DisplayName); // Function VM_OfferTile.VM_OfferTile_C.OnDisplayNameChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsOfferSeenChanged__DelegateSignature(bool IsOfferSeenIn); // Function VM_OfferTile.VM_OfferTile_C.OnIsOfferSeenChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCostListChanged__DelegateSignature(struct TArray<struct FOfferCostWithDiscountInfo>& CostList); // Function VM_OfferTile.VM_OfferTile_C.OnCostListChanged__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRewardChanged__DelegateSignature(struct URewardModel* Reward); // Function VM_OfferTile.VM_OfferTile_C.OnRewardChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

