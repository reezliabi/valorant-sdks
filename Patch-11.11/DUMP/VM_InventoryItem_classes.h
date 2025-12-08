// BlueprintGeneratedClass VM_InventoryItem.VM_InventoryItem_C
// Size: 0x1f0 (Inherited: 0x90)
struct UVM_InventoryItem_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	bool bIsOwned; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct FMulticastInlineDelegate OnIsOwnedChanged; // 0xa0(0x10)
	struct UEquippableDataAsset* ContextEquippable; // 0xb0(0x08)
	struct UBaseInventoryModel* BaseInventoryModel; // 0xb8(0x08)
	bool bIsFavorited; // 0xc0(0x01)
	bool bIsEquipped; // 0xc1(0x01)
	char pad_C2[0x6]; // 0xc2(0x06)
	struct FMulticastInlineDelegate OnIsFavoritedChanged; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnIsEquippedChanged; // 0xd8(0x10)
	bool bIsRandomSelectionAsset; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct FMulticastInlineDelegate OnIsRandomSelectionAssetChanged; // 0xf0(0x10)
	bool bIsUnlocked; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct FMulticastInlineDelegate OnIsUnlockedChanged; // 0x108(0x10)
	struct FMulticastInlineDelegate OnIsUnlockedBySubscriptionChanged; // 0x118(0x10)
	bool bIsUnlockedBySubscription; // 0x128(0x01)
	bool bIsUnlockedOnlyBySubscription; // 0x129(0x01)
	bool IsEquippedToAssociation; // 0x12a(0x01)
	char pad_12B[0x5]; // 0x12b(0x05)
	struct TMap<struct FGuid, struct UEquippableCharmInstanceInventoryModel*> InstanceInventories; // 0x130(0x50)
	int32_t Balance; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
	struct FMulticastInlineDelegate OnIsUnlockedOnlyBySubscriptionChanged; // 0x188(0x10)
	struct FMulticastInlineDelegate OnBalanceChanged; // 0x198(0x10)
	struct FMulticastInlineDelegate OnEquippedToContextChanged; // 0x1a8(0x10)
	struct FMulticastInlineDelegate OnInstanceInventoriesChanged; // 0x1b8(0x10)
	int32_t Quantity; // 0x1c8(0x04)
	char pad_1CC[0x4]; // 0x1cc(0x04)
	struct FMulticastInlineDelegate OnQuantityChanged; // 0x1d0(0x10)
	struct FMulticastInlineDelegate OnUnlockedChangeWithReasons; // 0x1e0(0x10)

	void BroadcastUnlockedChangeWithReasons(bool IsUnlocked); // Function VM_InventoryItem.VM_InventoryItem_C.BroadcastUnlockedChangeWithReasons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToInventoryModel(struct UBaseInventoryModel* InventoryModel, bool Bind); // Function VM_InventoryItem.VM_InventoryItem_C.BindToInventoryModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsRecipientInventory(bool& IsRecipientInventory); // Function VM_InventoryItem.VM_InventoryItem_C.IsRecipientInventory // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetInventoryContext(struct UBaseHandle* Handle, struct UEquippableDataAsset* ContextEquippable); // Function VM_InventoryItem.VM_InventoryItem_C.SetInventoryContext // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetInstanceInventories(struct TMap<struct FGuid, struct UEquippableCharmInstanceInventoryModel*> InstanceInventoryModels); // Function VM_InventoryItem.VM_InventoryItem_C.SetInstanceInventories // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleCharmInstancesLoaded(struct FEquippableCharmInstanceHandles& EquippableCharmInstanceHandles); // Function VM_InventoryItem.VM_InventoryItem_C.HandleCharmInstancesLoaded // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnInstanceEquippedChanged(); // Function VM_InventoryItem.VM_InventoryItem_C.OnInstanceEquippedChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIsEquippedToContext(bool IsEquippedToAssociation); // Function VM_InventoryItem.VM_InventoryItem_C.SetIsEquippedToContext // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetQuantity(int32_t Quantity); // Function VM_InventoryItem.VM_InventoryItem_C.SetQuantity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitializeCharm(struct UEquippableCharmHandle* CharmHandle); // Function VM_InventoryItem.VM_InventoryItem_C.InitializeCharm // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitFromBaseHandleWithContext(struct UBaseHandle* BaseHandle, struct UEquippableDataAsset* ContextEquippable); // Function VM_InventoryItem.VM_InventoryItem_C.InitFromBaseHandleWithContext // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetBalance(int32_t Balance); // Function VM_InventoryItem.VM_InventoryItem_C.SetBalance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIsUnlockedOnlyBySubscription(bool IsUnlockedOnlyBySubscription); // Function VM_InventoryItem.VM_InventoryItem_C.SetIsUnlockedOnlyBySubscription // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIsUnlockedBySubscription(bool IsUnlockedBySubscription); // Function VM_InventoryItem.VM_InventoryItem_C.SetIsUnlockedBySubscription // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnInventoryIsUnlockedChanged(); // Function VM_InventoryItem.VM_InventoryItem_C.OnInventoryIsUnlockedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIsUnlocked(bool IsUnlocked, bool GuaranteeBroadcast); // Function VM_InventoryItem.VM_InventoryItem_C.SetIsUnlocked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIsRandomSelectionAsset(bool IsRandomSelectionAsset); // Function VM_InventoryItem.VM_InventoryItem_C.SetIsRandomSelectionAsset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Refresh(); // Function VM_InventoryItem.VM_InventoryItem_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnInventoryIsEquippedChanged(); // Function VM_InventoryItem.VM_InventoryItem_C.OnInventoryIsEquippedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIsFavorited(bool IsFavorited); // Function VM_InventoryItem.VM_InventoryItem_C.SetIsFavorited // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIsEquipped(bool IsEquipped); // Function VM_InventoryItem.VM_InventoryItem_C.SetIsEquipped // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnInventoryIsOwnedChanged(); // Function VM_InventoryItem.VM_InventoryItem_C.OnInventoryIsOwnedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnInventoryIsFavoritedChanged(); // Function VM_InventoryItem.VM_InventoryItem_C.OnInventoryIsFavoritedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitFromBaseHandle(struct UBaseHandle* BaseHandle); // Function VM_InventoryItem.VM_InventoryItem_C.InitFromBaseHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitFromBaseInventoryModel(struct UBaseInventoryModel* InventoryModel); // Function VM_InventoryItem.VM_InventoryItem_C.InitFromBaseInventoryModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIsOwned(bool IsOwned); // Function VM_InventoryItem.VM_InventoryItem_C.SetIsOwned // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Reset(); // Function VM_InventoryItem.VM_InventoryItem_C.Reset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RefreshBroadcast(); // Function VM_InventoryItem.VM_InventoryItem_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnViewModelCreated(); // Function VM_InventoryItem.VM_InventoryItem_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_VM_InventoryItem(int32_t EntryPoint); // Function VM_InventoryItem.VM_InventoryItem_C.ExecuteUbergraph_VM_InventoryItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnUnlockedChangeWithReasons__DelegateSignature(bool IsBaseContent, bool IsOwned, bool IsLoyaltyContent, bool IsCAPF2PContent, bool IsUnlockedByConfig, bool IsUnlockedBySubscription, bool IsUnlocked); // Function VM_InventoryItem.VM_InventoryItem_C.OnUnlockedChangeWithReasons__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsUnlockedBySubscriptionChanged__DelegateSignature(bool IsUnlockedBySubscription); // Function VM_InventoryItem.VM_InventoryItem_C.OnIsUnlockedBySubscriptionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsUnlockedOnlyBySubscriptionChanged__DelegateSignature(bool IsUnlockedOnlyBySubscription); // Function VM_InventoryItem.VM_InventoryItem_C.OnIsUnlockedOnlyBySubscriptionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnQuantityChanged__DelegateSignature(int32_t Quantity); // Function VM_InventoryItem.VM_InventoryItem_C.OnQuantityChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnInstanceInventoriesChanged__DelegateSignature(struct TMap<struct FGuid, struct UEquippableCharmInstanceInventoryModel*> InstanceInventoryModels); // Function VM_InventoryItem.VM_InventoryItem_C.OnInstanceInventoriesChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEquippedToContextChanged__DelegateSignature(bool IsEquippedToAssociation); // Function VM_InventoryItem.VM_InventoryItem_C.OnEquippedToContextChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBalanceChanged__DelegateSignature(int32_t Balance); // Function VM_InventoryItem.VM_InventoryItem_C.OnBalanceChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsUnlockedChanged__DelegateSignature(bool IsUnlocked); // Function VM_InventoryItem.VM_InventoryItem_C.OnIsUnlockedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsRandomSelectionAssetChanged__DelegateSignature(bool IsRandomSelectionAsset); // Function VM_InventoryItem.VM_InventoryItem_C.OnIsRandomSelectionAssetChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsEquippedChanged__DelegateSignature(bool IsEquipped); // Function VM_InventoryItem.VM_InventoryItem_C.OnIsEquippedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsFavoritedChanged__DelegateSignature(bool IsFavorited); // Function VM_InventoryItem.VM_InventoryItem_C.OnIsFavoritedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsOwnedChanged__DelegateSignature(bool IsOwned); // Function VM_InventoryItem.VM_InventoryItem_C.OnIsOwnedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

