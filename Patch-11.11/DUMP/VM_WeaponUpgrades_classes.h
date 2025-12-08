// BlueprintGeneratedClass VM_WeaponUpgrades.VM_WeaponUpgrades_C
// Size: 0x350 (Inherited: 0x230)
struct UVM_WeaponUpgrades_C : UGunSkinPersonalizationViewModel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBaseHandle* CurrentUpgradeHandle; // 0x238(0x08)
	bool IsUpgradePrimaryActionEnabled; // 0x240(0x01)
	char pad_241[0x7]; // 0x241(0x07)
	struct FMulticastInlineDelegate OnCurrentUpgradeActionIsEnabledChanged; // 0x248(0x10)
	bool IsCurrentUpgradePurchasable; // 0x258(0x01)
	bool IsCurrentUpgradeUnlocked; // 0x259(0x01)
	bool IsCurrentUpgradeEquipped; // 0x25a(0x01)
	bool IsCurrentUpgradeFavorited; // 0x25b(0x01)
	bool UseVideoPreview; // 0x25c(0x01)
	char pad_25D[0x3]; // 0x25d(0x03)
	struct FText CurrentWeaponUpgradeActionText; // 0x260(0x18)
	struct FMulticastInlineDelegate OnCurrentUpgradeIsPurchasableChanged; // 0x278(0x10)
	struct FMulticastInlineDelegate OnCurrentUpgradeActionTextChanged; // 0x288(0x10)
	struct UVM_StoreOffer_C* StoreOfferVM; // 0x298(0x08)
	struct FMulticastInlineDelegate OnCurrentUpgradeCostChanged; // 0x2a0(0x10)
	struct FOfferCostWithDiscountInfo CurrentWeaponUpgradeCost; // 0x2b0(0x28)
	struct FMulticastInlineDelegate OnCurrentUpgradeOfferDTO; // 0x2d8(0x10)
	struct FMulticastInlineDelegate OnCurrentUpgradeIsUnlockedChanged; // 0x2e8(0x10)
	struct FMulticastInlineDelegate OnCurrentUpgradeIsEquippedChanged; // 0x2f8(0x10)
	struct FMulticastInlineDelegate OnCurrentUpgradeIsFavoritedChanged; // 0x308(0x10)
	struct UOfferDTO* CurrentUpgradeOfferDTO; // 0x318(0x08)
	struct FMulticastInlineDelegate OnSkinUpgradePreviewHandleChanged; // 0x320(0x10)
	struct UBaseHandle* SkinUpgradePreviewHandle; // 0x330(0x08)
	enum class ESkinUpgradeState CurrentSkinUpgradeState; // 0x338(0x01)
	char pad_339[0x7]; // 0x339(0x07)
	struct FMulticastInlineDelegate OnCurrentSkinUpgradeStateChanged; // 0x340(0x10)

	void CalculateTotalUpgradeCost(int32_t& TotalCost); // Function VM_WeaponUpgrades.VM_WeaponUpgrades_C.CalculateTotalUpgradeCost // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateCurrentUpgradeInfo(struct UBaseHandle* InUpgradeHandle, struct UVM_StoreOffer_C* InStoreOfferVM); // Function VM_WeaponUpgrades.VM_WeaponUpgrades_C.UpdateCurrentUpgradeInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateCurrentSkinUpgradeState(); // Function VM_WeaponUpgrades.VM_WeaponUpgrades_C.UpdateCurrentSkinUpgradeState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateSkinUpgradePreviewHandle(); // Function VM_WeaponUpgrades.VM_WeaponUpgrades_C.UpdateSkinUpgradePreviewHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateCurrentUpgradeIsPurchasable(); // Function VM_WeaponUpgrades.VM_WeaponUpgrades_C.UpdateCurrentUpgradeIsPurchasable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateCurrentUpgradeActionText(); // Function VM_WeaponUpgrades.VM_WeaponUpgrades_C.UpdateCurrentUpgradeActionText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateCurrentUpgradeActionIsEnabled(); // Function VM_WeaponUpgrades.VM_WeaponUpgrades_C.UpdateCurrentUpgradeActionIsEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateCurrentUpgradeIsFavorited(); // Function VM_WeaponUpgrades.VM_WeaponUpgrades_C.UpdateCurrentUpgradeIsFavorited // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateCurrentUpgradeIsUnlocked(); // Function VM_WeaponUpgrades.VM_WeaponUpgrades_C.UpdateCurrentUpgradeIsUnlocked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateCurrentUpgradeIsEquipped(); // Function VM_WeaponUpgrades.VM_WeaponUpgrades_C.UpdateCurrentUpgradeIsEquipped // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetSkinUpgradeState(enum class ESkinUpgradeState NewValue); // Function VM_WeaponUpgrades.VM_WeaponUpgrades_C.SetSkinUpgradeState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetUpgradePreviewHandle(struct UBaseHandle* InUpgradePreviewHandle, bool InUseVideo); // Function VM_WeaponUpgrades.VM_WeaponUpgrades_C.SetUpgradePreviewHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetCurrentUpgradeOfferDTO(struct UOfferDTO* CurrentUpgradeOfferDTO); // Function VM_WeaponUpgrades.VM_WeaponUpgrades_C.SetCurrentUpgradeOfferDTO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetCurrentUpgradeCost(struct FOfferCostWithDiscountInfo UpgradeCost); // Function VM_WeaponUpgrades.VM_WeaponUpgrades_C.SetCurrentUpgradeCost // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetCurrentUpgradeIsPurchasable(bool IsPurchasable); // Function VM_WeaponUpgrades.VM_WeaponUpgrades_C.SetCurrentUpgradeIsPurchasable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CurrentUpgradeCostListChanged(struct TArray<struct FOfferCostWithDiscountInfo>& CostList); // Function VM_WeaponUpgrades.VM_WeaponUpgrades_C.CurrentUpgradeCostListChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetCurrentUpgradeActionIsEnabled(bool IsEnabled); // Function VM_WeaponUpgrades.VM_WeaponUpgrades_C.SetCurrentUpgradeActionIsEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetCurrentUpgradeActionText(struct FText ActionText); // Function VM_WeaponUpgrades.VM_WeaponUpgrades_C.SetCurrentUpgradeActionText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindStoreOfferVM(bool Bind); // Function VM_WeaponUpgrades.VM_WeaponUpgrades_C.BindStoreOfferVM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindWeaponUpgradeInventoryModel(bool Bind); // Function VM_WeaponUpgrades.VM_WeaponUpgrades_C.BindWeaponUpgradeInventoryModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CurrentUpgradeIsFavoritedChanged(); // Function VM_WeaponUpgrades.VM_WeaponUpgrades_C.CurrentUpgradeIsFavoritedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CurrentUpgradeIsEquippedChanged(); // Function VM_WeaponUpgrades.VM_WeaponUpgrades_C.CurrentUpgradeIsEquippedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CurrentUpgradeIsUnlockedChanged(); // Function VM_WeaponUpgrades.VM_WeaponUpgrades_C.CurrentUpgradeIsUnlockedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetCurrentUpgradeStoreOfferVM(struct UVM_StoreOffer_C* InStoreOfferVM); // Function VM_WeaponUpgrades.VM_WeaponUpgrades_C.SetCurrentUpgradeStoreOfferVM // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetCurrentUpgradeHandle(struct UBaseHandle* InUpgradeHandle); // Function VM_WeaponUpgrades.VM_WeaponUpgrades_C.SetCurrentUpgradeHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetEquipTextForSkinUpgrade(struct UBaseHandle* WeaponUpgradeHandle, struct FText& EquipText); // Function VM_WeaponUpgrades.VM_WeaponUpgrades_C.GetEquipTextForSkinUpgrade // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetUnlockTextForSkinUpgrade(struct UBaseHandle* WeaponUpgradeHandle, struct FText& UnlockText); // Function VM_WeaponUpgrades.VM_WeaponUpgrades_C.GetUnlockTextForSkinUpgrade // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetUnlockActivationPreference(struct UBaseHandle* WeaponUpgradeHandle, enum class EActivationPreference& ActivationPreference); // Function VM_WeaponUpgrades.VM_WeaponUpgrades_C.GetUnlockActivationPreference // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetFavoriteActivationPreference(struct UBaseHandle* WeaponUpgradeHandle, enum class EActivationPreference& ActivationPreference); // Function VM_WeaponUpgrades.VM_WeaponUpgrades_C.GetFavoriteActivationPreference // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetEquipActivationPreference(struct UBaseHandle* WeaponUpgradeHandle, enum class EActivationPreference& ActivationPreference); // Function VM_WeaponUpgrades.VM_WeaponUpgrades_C.GetEquipActivationPreference // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Reset(); // Function VM_WeaponUpgrades.VM_WeaponUpgrades_C.Reset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RefreshBroadcast(); // Function VM_WeaponUpgrades.VM_WeaponUpgrades_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_VM_WeaponUpgrades(int32_t EntryPoint); // Function VM_WeaponUpgrades.VM_WeaponUpgrades_C.ExecuteUbergraph_VM_WeaponUpgrades // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnCurrentSkinUpgradeStateChanged__DelegateSignature(enum class ESkinUpgradeState SkinUpgradeState); // Function VM_WeaponUpgrades.VM_WeaponUpgrades_C.OnCurrentSkinUpgradeStateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSkinUpgradePreviewHandleChanged__DelegateSignature(struct UBaseHandle* SkinUpgradePreview, bool UseVideo); // Function VM_WeaponUpgrades.VM_WeaponUpgrades_C.OnSkinUpgradePreviewHandleChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCurrentUpgradeOfferDTO__DelegateSignature(struct UOfferDTO* UpgradeOfferDTO); // Function VM_WeaponUpgrades.VM_WeaponUpgrades_C.OnCurrentUpgradeOfferDTO__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCurrentUpgradeIsPurchasableChanged__DelegateSignature(bool IsPurchasable); // Function VM_WeaponUpgrades.VM_WeaponUpgrades_C.OnCurrentUpgradeIsPurchasableChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCurrentUpgradeIsFavoritedChanged__DelegateSignature(bool IsFavorited); // Function VM_WeaponUpgrades.VM_WeaponUpgrades_C.OnCurrentUpgradeIsFavoritedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCurrentUpgradeIsUnlockedChanged__DelegateSignature(bool IsUnlocked); // Function VM_WeaponUpgrades.VM_WeaponUpgrades_C.OnCurrentUpgradeIsUnlockedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCurrentUpgradeIsEquippedChanged__DelegateSignature(bool IsEquipped); // Function VM_WeaponUpgrades.VM_WeaponUpgrades_C.OnCurrentUpgradeIsEquippedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCurrentUpgradeCostChanged__DelegateSignature(struct FOfferCostWithDiscountInfo WeaponUpgradeCost); // Function VM_WeaponUpgrades.VM_WeaponUpgrades_C.OnCurrentUpgradeCostChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCurrentUpgradeActionTextChanged__DelegateSignature(struct FText WeaponUpgradeActionText); // Function VM_WeaponUpgrades.VM_WeaponUpgrades_C.OnCurrentUpgradeActionTextChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCurrentUpgradeActionIsEnabledChanged__DelegateSignature(bool IsEnabled); // Function VM_WeaponUpgrades.VM_WeaponUpgrades_C.OnCurrentUpgradeActionIsEnabledChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

