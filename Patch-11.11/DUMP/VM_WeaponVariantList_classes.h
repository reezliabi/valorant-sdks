// BlueprintGeneratedClass VM_WeaponVariantList.VM_WeaponVariantList_C
// Size: 0x19a (Inherited: 0xb0)
struct UVM_WeaponVariantList_C : UAresPersonalizationViewModel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct UEquippableSkinHandle* SkinHandle; // 0xb8(0x08)
	struct TArray<struct UEquippableSkinChromaHandle*> ChromaHandles; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnChromaHandlesChanged; // 0xd0(0x10)
	bool EquipAnyLevel; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
	struct UEquippableSkinChromaHandle* Equipped Chroma; // 0xe8(0x08)
	struct FMulticastInlineDelegate OnEquippedChromaChanged; // 0xf0(0x10)
	struct UEquippableInventoryModel* Parent Equippable; // 0x100(0x08)
	struct FMulticastInlineDelegate OnEquippableChanged; // 0x108(0x10)
	int32_t SelectedChromaIndex; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct FMulticastInlineDelegate OnSelectedIndexChanged; // 0x120(0x10)
	struct FMulticastInlineDelegate OnSelectedChromaChanged; // 0x130(0x10)
	struct UEquippableSkinChromaHandle* SelectedChroma; // 0x140(0x08)
	struct FMulticastInlineDelegate OnSelectedChromaEquippedChanged; // 0x148(0x10)
	struct FMulticastInlineDelegate OnSelectedChromaFavoritedChanged; // 0x158(0x10)
	int32_t LevelOverride; // 0x168(0x04)
	bool bShouldShowEquip; // 0x16c(0x01)
	char pad_16D[0x3]; // 0x16d(0x03)
	struct FMulticastInlineDelegate OnShouldShowEquipChanged; // 0x170(0x10)
	bool SelectEquippedChromaOnPopulate; // 0x180(0x01)
	char pad_181[0x7]; // 0x181(0x07)
	struct UBaseHandle* MaxEquippedOrUnlockedLevel; // 0x188(0x08)
	struct UGunSkinPersonalizationViewModel* GunSkinPersonalizationVM; // 0x190(0x08)
	bool BroadcastChromaChanges; // 0x198(0x01)
	bool BroadcastInitialChromaSelection; // 0x199(0x01)

	void Compare Ares Base Primary Data(struct UAresBasePrimaryDataAsset* DataAsset1, struct UAresBasePrimaryDataAsset* DataAsset2, bool& Matching); // Function VM_WeaponVariantList.VM_WeaponVariantList_C.Compare Ares Base Primary Data // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void BindGunSkinPersonalizationVM(bool Bind); // Function VM_WeaponVariantList.VM_WeaponVariantList_C.BindGunSkinPersonalizationVM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetGunSkinPersonalizationVM(struct UGunSkinPersonalizationViewModel* GunSkinPersonalizationVM); // Function VM_WeaponVariantList.VM_WeaponVariantList_C.SetGunSkinPersonalizationVM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateGunSkinPersonalizationVM(); // Function VM_WeaponVariantList.VM_WeaponVariantList_C.CreateGunSkinPersonalizationVM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSkinHandleLoaded(struct UEquippableSkinHandle* InSkinHandle); // Function VM_WeaponVariantList.VM_WeaponVariantList_C.OnSkinHandleLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Selected Chroma Is Valid For Skin Handle(bool& Is Valid); // Function VM_WeaponVariantList.VM_WeaponVariantList_C.Selected Chroma Is Valid For Skin Handle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetLevelOverride(struct UEquippableSkinChromaHandle* SelectedChromaHandle, int32_t& SkinLevelOverride, bool& IsBaseChroma, struct UEquippableSkinLevelHandle*& SkinLevelHandleOverride); // Function VM_WeaponVariantList.VM_WeaponVariantList_C.GetLevelOverride // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void RefreshEquipActionPreference(); // Function VM_WeaponVariantList.VM_WeaponVariantList_C.RefreshEquipActionPreference // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetShouldShowEquip(bool InShouldShowEquip); // Function VM_WeaponVariantList.VM_WeaponVariantList_C.SetShouldShowEquip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SelectEquippedChroma(); // Function VM_WeaponVariantList.VM_WeaponVariantList_C.SelectEquippedChroma // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateHasValidData(); // Function VM_WeaponVariantList.VM_WeaponVariantList_C.UpdateHasValidData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Bind Selected Chroma Inventory Model(struct UEquippableSkinChromaInventoryModel* Inventory Model, bool Bind); // Function VM_WeaponVariantList.VM_WeaponVariantList_C.Bind Selected Chroma Inventory Model // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetLevelNumber(struct UEquippableSkinLevelHandle* Level, int32_t& LevelNumber); // Function VM_WeaponVariantList.VM_WeaponVariantList_C.GetLevelNumber // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void ToggleFavoriteOnSelectedChroma(bool& IsFavorited); // Function VM_WeaponVariantList.VM_WeaponVariantList_C.ToggleFavoriteOnSelectedChroma // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetSelectedChroma(struct UEquippableSkinChromaHandle* In Chroma); // Function VM_WeaponVariantList.VM_WeaponVariantList_C.SetSelectedChroma // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EquipSelectedChroma(); // Function VM_WeaponVariantList.VM_WeaponVariantList_C.EquipSelectedChroma // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetSelectedChromaIndex(int32_t InSelectedIndex); // Function VM_WeaponVariantList.VM_WeaponVariantList_C.SetSelectedChromaIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindInventoryModel(struct UEquippableSkinInventoryModel* Inventory Model, bool Bind); // Function VM_WeaponVariantList.VM_WeaponVariantList_C.BindInventoryModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Selected Chroma Inventory Favorited Changed(); // Function VM_WeaponVariantList.VM_WeaponVariantList_C.On Selected Chroma Inventory Favorited Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Selected Chroma Inventory Equipped Changed(); // Function VM_WeaponVariantList.VM_WeaponVariantList_C.On Selected Chroma Inventory Equipped Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnInventoryEquippedChromaChanged(); // Function VM_WeaponVariantList.VM_WeaponVariantList_C.OnInventoryEquippedChromaChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetDisplayTextureForChroma(struct UEquippableSkinChromaHandle* Chroma, struct UTexture*& Texture); // Function VM_WeaponVariantList.VM_WeaponVariantList_C.GetDisplayTextureForChroma // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Select Chroma(struct UEquippableSkinChromaHandle* Chroma Handle, bool& Success); // Function VM_WeaponVariantList.VM_WeaponVariantList_C.Select Chroma // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetChromaHandles(struct TArray<struct UEquippableSkinChromaHandle*>& InChromaHandles); // Function VM_WeaponVariantList.VM_WeaponVariantList_C.SetChromaHandles // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PopulateChromaList(struct FEquippableSkinChromaHandles& EquippableSkinChromaHandles); // Function VM_WeaponVariantList.VM_WeaponVariantList_C.PopulateChromaList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateChromaList(); // Function VM_WeaponVariantList.VM_WeaponVariantList_C.UpdateChromaList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetEquippedChroma(struct UEquippableSkinChromaHandle* In Chroma); // Function VM_WeaponVariantList.VM_WeaponVariantList_C.SetEquippedChroma // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitFromSkinHandle(struct UEquippableSkinHandle* InSkinHandle); // Function VM_WeaponVariantList.VM_WeaponVariantList_C.InitFromSkinHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnVariantViewModelDestroyed(); // Function VM_WeaponVariantList.VM_WeaponVariantList_C.OnVariantViewModelDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnViewModelCreated(); // Function VM_WeaponVariantList.VM_WeaponVariantList_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void Reset(); // Function VM_WeaponVariantList.VM_WeaponVariantList_C.Reset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RefreshBroadcast(); // Function VM_WeaponVariantList.VM_WeaponVariantList_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_VM_WeaponVariantList(int32_t EntryPoint); // Function VM_WeaponVariantList.VM_WeaponVariantList_C.ExecuteUbergraph_VM_WeaponVariantList // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnShouldShowEquipChanged__DelegateSignature(bool bShouldShowEquip); // Function VM_WeaponVariantList.VM_WeaponVariantList_C.OnShouldShowEquipChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSelectedChromaFavoritedChanged__DelegateSignature(struct UEquippableSkinChromaHandle* Chroma); // Function VM_WeaponVariantList.VM_WeaponVariantList_C.OnSelectedChromaFavoritedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSelectedChromaEquippedChanged__DelegateSignature(struct UEquippableSkinChromaHandle* Chroma); // Function VM_WeaponVariantList.VM_WeaponVariantList_C.OnSelectedChromaEquippedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSelectedChromaChanged__DelegateSignature(struct UEquippableSkinChromaHandle* SelectedChroma, int32_t LevelOverride, bool IsBaseChroma, struct UEquippableSkinLevelHandle* MaxEquippedOrUnlockedLevel); // Function VM_WeaponVariantList.VM_WeaponVariantList_C.OnSelectedChromaChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSelectedIndexChanged__DelegateSignature(int32_t SelectedIndex); // Function VM_WeaponVariantList.VM_WeaponVariantList_C.OnSelectedIndexChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEquippableChanged__DelegateSignature(struct UEquippableInventoryModel* Equippable); // Function VM_WeaponVariantList.VM_WeaponVariantList_C.OnEquippableChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEquippedChromaChanged__DelegateSignature(struct UEquippableSkinChromaHandle* Chroma); // Function VM_WeaponVariantList.VM_WeaponVariantList_C.OnEquippedChromaChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnChromaHandlesChanged__DelegateSignature(struct TArray<struct UEquippableSkinChromaHandle*>& OutChromaHandles); // Function VM_WeaponVariantList.VM_WeaponVariantList_C.OnChromaHandlesChanged__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

