// BlueprintGeneratedClass VM_ContentItem.VM_ContentItem_C
// Size: 0x110 (Inherited: 0x90)
struct UVM_ContentItem_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct UVM_InventoryItem_C* VM_InventoryItem; // 0x98(0x08)
	struct UVM_StoreOffer_C* VM_StoreOffer; // 0xa0(0x08)
	struct UVM_Reward_C* VM_Reward; // 0xa8(0x08)
	bool GetLockStatusFromEarnableItem; // 0xb0(0x01)
	bool GetQuantityFromInventory; // 0xb1(0x01)
	char pad_B2[0x6]; // 0xb2(0x06)
	struct FMulticastInlineDelegate OnQuantityChanged; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnIsUnlockedChanged; // 0xc8(0x10)
	bool IsUnlocked; // 0xd8(0x01)
	bool HasUpgrades; // 0xd9(0x01)
	char pad_DA[0x2]; // 0xda(0x02)
	int32_t Quantity; // 0xdc(0x04)
	struct FMulticastInlineDelegate OnHasUpgradesChanged; // 0xe0(0x10)
	struct UEarnableItem* EarnableItem; // 0xf0(0x08)
	bool ShouldOverrideLockState; // 0xf8(0x01)
	bool IsPremiumRequired; // 0xf9(0x01)
	char pad_FA[0x6]; // 0xfa(0x06)
	struct FMulticastInlineDelegate OnIsPremiumRequiredChanged; // 0x100(0x10)

	void SetIsPremiumRequired(bool IsPremiumRequired); // Function VM_ContentItem.VM_ContentItem_C.SetIsPremiumRequired // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ClearLockStateOverride(); // Function VM_ContentItem.VM_ContentItem_C.ClearLockStateOverride // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OverrideLockState(bool DesiredLockState); // Function VM_ContentItem.VM_ContentItem_C.OverrideLockState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetEarnableItem(struct UEarnableItem* EarnableItem); // Function VM_ContentItem.VM_ContentItem_C.SetEarnableItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEarnedStatusChanged(enum class EEarnedStatus EarnedStatus); // Function VM_ContentItem.VM_ContentItem_C.OnEarnedStatusChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindEarnableItemEvents(bool Bind); // Function VM_ContentItem.VM_ContentItem_C.BindEarnableItemEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetHasUpgrades(bool NewHasUpgrades); // Function VM_ContentItem.VM_ContentItem_C.SetHasUpgrades // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateHasUpgrades(struct UBaseHandle* SkinHandle); // Function VM_ContentItem.VM_ContentItem_C.UpdateHasUpgrades // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRewardHandleChanged(struct UBaseHandle* RewardBaseHandle); // Function VM_ContentItem.VM_ContentItem_C.OnRewardHandleChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateIsUnlockedFromInventory(); // Function VM_ContentItem.VM_ContentItem_C.UpdateIsUnlockedFromInventory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnOwnershipChanged(bool IsOwned); // Function VM_ContentItem.VM_ContentItem_C.OnOwnershipChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsUnlockedInInventoryChanged(bool IsUnlocked); // Function VM_ContentItem.VM_ContentItem_C.OnIsUnlockedInInventoryChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnInventoryQuantityChanged(int32_t New Quantity); // Function VM_ContentItem.VM_ContentItem_C.OnInventoryQuantityChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsRandomSelectionAssetChanged(bool IsRandomSelectionAsset); // Function VM_ContentItem.VM_ContentItem_C.OnIsRandomSelectionAssetChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetQuantity(int32_t New Quantity); // Function VM_ContentItem.VM_ContentItem_C.SetQuantity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIsUnlocked(bool NewIsUnlocked); // Function VM_ContentItem.VM_ContentItem_C.SetIsUnlocked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindStoreOfferEvents(bool Bind); // Function VM_ContentItem.VM_ContentItem_C.BindStoreOfferEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetStoreOfferViewModel(struct UVM_StoreOffer_C* InViewModel); // Function VM_ContentItem.VM_ContentItem_C.SetStoreOfferViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitializeObject(struct UObject* InputPin); // Function VM_ContentItem.VM_ContentItem_C.InitializeObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetInventoryContext(struct UBaseHandle* Handle, struct UEquippableDataAsset* ContextEquippable); // Function VM_ContentItem.VM_ContentItem_C.SetInventoryContext // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRewardQuantityChanged(int32_t New Quantity); // Function VM_ContentItem.VM_ContentItem_C.OnRewardQuantityChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindRewardEvents(bool Bind); // Function VM_ContentItem.VM_ContentItem_C.BindRewardEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindInventoryEvents(bool Bind); // Function VM_ContentItem.VM_ContentItem_C.BindInventoryEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetInventoryItemViewModel(struct UVM_InventoryItem_C* InViewModel); // Function VM_ContentItem.VM_ContentItem_C.SetInventoryItemViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetRewardViewModel(struct UVM_Reward_C* InViewModel); // Function VM_ContentItem.VM_ContentItem_C.SetRewardViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitViewModels(); // Function VM_ContentItem.VM_ContentItem_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnViewModelCreated(); // Function VM_ContentItem.VM_ContentItem_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void RefreshBroadcast(); // Function VM_ContentItem.VM_ContentItem_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Reset(); // Function VM_ContentItem.VM_ContentItem_C.Reset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_VM_ContentItem(int32_t EntryPoint); // Function VM_ContentItem.VM_ContentItem_C.ExecuteUbergraph_VM_ContentItem // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnIsPremiumRequiredChanged__DelegateSignature(bool NewIsPremiumRequired); // Function VM_ContentItem.VM_ContentItem_C.OnIsPremiumRequiredChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnHasUpgradesChanged__DelegateSignature(bool NewHasUpgrades); // Function VM_ContentItem.VM_ContentItem_C.OnHasUpgradesChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsUnlockedChanged__DelegateSignature(bool NewIsUnlocked); // Function VM_ContentItem.VM_ContentItem_C.OnIsUnlockedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnQuantityChanged__DelegateSignature(int32_t New Quantity); // Function VM_ContentItem.VM_ContentItem_C.OnQuantityChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

