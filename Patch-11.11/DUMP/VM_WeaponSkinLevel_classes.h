// BlueprintGeneratedClass VM_WeaponSkinLevel.VM_WeaponSkinLevel_C
// Size: 0x150 (Inherited: 0x90)
struct UVM_WeaponSkinLevel_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	bool IsOwned; // 0x98(0x01)
	bool IsEquipped; // 0x99(0x01)
	char pad_9A[0x2]; // 0x9a(0x02)
	int32_t RadianiteUpgradeCost; // 0x9c(0x04)
	struct FText LevelName; // 0xa0(0x18)
	struct UItemProgressionDefinitionLevelModel* ProgressionLevelModel; // 0xb8(0x08)
	struct FMulticastInlineDelegate RadianiteUpgradeCostChanged; // 0xc0(0x10)
	struct UEquippableSkinLevelInventoryModel* LevelInventoryModel; // 0xd0(0x08)
	struct UEquippableSkinHandle* EquippableSkinHandle; // 0xd8(0x08)
	int32_t SkinLevel; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FMulticastInlineDelegate IsEquippedChanged; // 0xe8(0x10)
	struct FMulticastInlineDelegate IsOwnedChanged; // 0xf8(0x10)
	struct FMulticastInlineDelegate LevelNameChanged; // 0x108(0x10)
	struct FMulticastInlineDelegate OnEquippableSkinLoadedEvent; // 0x118(0x10)
	struct FText LevelNumberText; // 0x128(0x18)
	struct FMulticastInlineDelegate OnLevelNumberTextChanged; // 0x140(0x10)

	void SetLevelNumberText(struct FText LevelNumberText); // Function VM_WeaponSkinLevel.VM_WeaponSkinLevel_C.SetLevelNumberText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindLevelInventoryModels(struct UEquippableSkinHandle*& Equippable Skin Handle); // Function VM_WeaponSkinLevel.VM_WeaponSkinLevel_C.BindLevelInventoryModels // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetIsHigherLevelEquipped(struct UEquippableSkinHandle*& EquippableSkinHandle, int32_t& CurrentLevel, bool& IsHigherLevelEquipped); // Function VM_WeaponSkinLevel.VM_WeaponSkinLevel_C.GetIsHigherLevelEquipped // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Init from Equippable Skin(int32_t Skin Level, struct UEquippableSkinHandle* EquippableSkin); // Function VM_WeaponSkinLevel.VM_WeaponSkinLevel_C.Init from Equippable Skin // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetSkinLevelUIData(int32_t Level, struct UEquippableSkinHandle* EquippableSkinHandle, struct UEquippableSkinLevelUIData*& LevelUIData); // Function VM_WeaponSkinLevel.VM_WeaponSkinLevel_C.GetSkinLevelUIData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetLevelName(struct FText& Level Name); // Function VM_WeaponSkinLevel.VM_WeaponSkinLevel_C.GetLevelName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetLevelName(struct FText New Value); // Function VM_WeaponSkinLevel.VM_WeaponSkinLevel_C.SetLevelName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsEquippedChanged(); // Function VM_WeaponSkinLevel.VM_WeaponSkinLevel_C.OnIsEquippedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsOwnedChanged(); // Function VM_WeaponSkinLevel.VM_WeaponSkinLevel_C.OnIsOwnedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetIsOwned(bool& IsOwned); // Function VM_WeaponSkinLevel.VM_WeaponSkinLevel_C.GetIsOwned // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIsOwned(bool NewValue); // Function VM_WeaponSkinLevel.VM_WeaponSkinLevel_C.SetIsOwned // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetIsEquipped(bool& IsEquipped); // Function VM_WeaponSkinLevel.VM_WeaponSkinLevel_C.GetIsEquipped // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIsEquipped(bool NewValue); // Function VM_WeaponSkinLevel.VM_WeaponSkinLevel_C.SetIsEquipped // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetRadianiteUpgradeCost(int32_t& RadianiteCost); // Function VM_WeaponSkinLevel.VM_WeaponSkinLevel_C.GetRadianiteUpgradeCost // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetRadianiteUpgradeCost(int32_t NewValue); // Function VM_WeaponSkinLevel.VM_WeaponSkinLevel_C.SetRadianiteUpgradeCost // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetSkinLevelInventoryModel(int32_t Level, struct UEquippableSkinHandle* EquippableSkinHandle, struct UEquippableSkinLevelInventoryModel*& LevelInventoryModel); // Function VM_WeaponSkinLevel.VM_WeaponSkinLevel_C.GetSkinLevelInventoryModel // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetSkinProgressionLevelModel(int32_t Level, struct UEquippableSkinHandle* EquippableSkinHandle, struct UItemProgressionDefinitionLevelModel*& SkinProgressionLevelModel); // Function VM_WeaponSkinLevel.VM_WeaponSkinLevel_C.GetSkinProgressionLevelModel // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEquippableSkinLoaded(struct UEquippableSkinHandle* EquippableSkinHandle); // Function VM_WeaponSkinLevel.VM_WeaponSkinLevel_C.OnEquippableSkinLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitViewModel(int32_t SkinLevel, struct UEquippableSkinDataAsset* WeaponSkinClass); // Function VM_WeaponSkinLevel.VM_WeaponSkinLevel_C.InitViewModel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Reset(); // Function VM_WeaponSkinLevel.VM_WeaponSkinLevel_C.Reset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RefreshBroadcast(); // Function VM_WeaponSkinLevel.VM_WeaponSkinLevel_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_VM_WeaponSkinLevel(int32_t EntryPoint); // Function VM_WeaponSkinLevel.VM_WeaponSkinLevel_C.ExecuteUbergraph_VM_WeaponSkinLevel // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnLevelNumberTextChanged__DelegateSignature(struct FText LevelNumberText); // Function VM_WeaponSkinLevel.VM_WeaponSkinLevel_C.OnLevelNumberTextChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEquippableSkinLoadedEvent__DelegateSignature(); // Function VM_WeaponSkinLevel.VM_WeaponSkinLevel_C.OnEquippableSkinLoadedEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void LevelNameChanged__DelegateSignature(struct FText New Value); // Function VM_WeaponSkinLevel.VM_WeaponSkinLevel_C.LevelNameChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsOwnedChanged__DelegateSignature(bool NewValue); // Function VM_WeaponSkinLevel.VM_WeaponSkinLevel_C.IsOwnedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsEquippedChanged__DelegateSignature(bool NewValue); // Function VM_WeaponSkinLevel.VM_WeaponSkinLevel_C.IsEquippedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RadianiteUpgradeCostChanged__DelegateSignature(int32_t NewValue); // Function VM_WeaponSkinLevel.VM_WeaponSkinLevel_C.RadianiteUpgradeCostChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

