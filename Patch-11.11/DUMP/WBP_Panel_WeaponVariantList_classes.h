// WidgetBlueprintGeneratedClass WBP_Panel_WeaponVariantList.WBP_Panel_WeaponVariantList_C
// Size: 0x42c (Inherited: 0x3e0)
struct UWBP_Panel_WeaponVariantList_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWBP_NavBar_Main_C* AresCommonNavBar; // 0x3e8(0x08)
	struct FMulticastInlineDelegate OnSkinHandleChanged; // 0x3f0(0x10)
	struct UEquippableSkinHandle* SkinHandle; // 0x400(0x08)
	struct UVM_InventoryItem_C* InventoryItemViewModel; // 0x408(0x08)
	struct UVM_WeaponVariantList_C* WeaponVariantListViewModel; // 0x410(0x08)
	struct FMulticastInlineDelegate OnInputActionPreferenceChanged; // 0x418(0x10)
	bool bShouldShowEquip; // 0x428(0x01)
	bool bIsRandomSelection; // 0x429(0x01)
	bool FavoriteActionEnabled; // 0x42a(0x01)
	bool EquipActionEnabled; // 0x42b(0x01)

	enum class EActivationPreference GetActivationPreferenceForAction(struct FAresConditionalInputAction Action); // Function WBP_Panel_WeaponVariantList.WBP_Panel_WeaponVariantList_C.GetActivationPreferenceForAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetEquipActionEnabled(bool EquipActionEnabled); // Function WBP_Panel_WeaponVariantList.WBP_Panel_WeaponVariantList_C.SetEquipActionEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetFavoriteActionEnabled(bool FavoriteActionEnabled); // Function WBP_Panel_WeaponVariantList.WBP_Panel_WeaponVariantList_C.SetFavoriteActionEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ToggleFavoriteOnSelectedChroma(); // Function WBP_Panel_WeaponVariantList.WBP_Panel_WeaponVariantList_C.ToggleFavoriteOnSelectedChroma // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EquipSelectedChroma(); // Function WBP_Panel_WeaponVariantList.WBP_Panel_WeaponVariantList_C.EquipSelectedChroma // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateVisibility(); // Function WBP_Panel_WeaponVariantList.WBP_Panel_WeaponVariantList_C.UpdateVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsSelectedVariantFavorited(bool& IsChromaFavorited); // Function WBP_Panel_WeaponVariantList.WBP_Panel_WeaponVariantList_C.IsSelectedVariantFavorited // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void IsSelectedVariantUnlocked(bool& IsChromaUnlocked); // Function WBP_Panel_WeaponVariantList.WBP_Panel_WeaponVariantList_C.IsSelectedVariantUnlocked // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void HandleIsRandomSelectionAssetChanged(bool IsRandomSelectionAsset); // Function WBP_Panel_WeaponVariantList.WBP_Panel_WeaponVariantList_C.HandleIsRandomSelectionAssetChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleShouldShowEquipChanged(bool NewValue); // Function WBP_Panel_WeaponVariantList.WBP_Panel_WeaponVariantList_C.HandleShouldShowEquipChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleHasValidDataChanged(bool NewValue); // Function WBP_Panel_WeaponVariantList.WBP_Panel_WeaponVariantList_C.HandleHasValidDataChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleNavButtonSelectionChanged(int32_t NavBarIndex, struct UAresCommonButton* Button); // Function WBP_Panel_WeaponVariantList.WBP_Panel_WeaponVariantList_C.HandleNavButtonSelectionChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindInventoryItemVMEvents(bool bBind); // Function WBP_Panel_WeaponVariantList.WBP_Panel_WeaponVariantList_C.BindInventoryItemVMEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MakeInventoryItemVM(); // Function WBP_Panel_WeaponVariantList.WBP_Panel_WeaponVariantList_C.MakeInventoryItemVM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToWeaponVariantListViewModelEvents(bool bShouldBind); // Function WBP_Panel_WeaponVariantList.WBP_Panel_WeaponVariantList_C.BindToWeaponVariantListViewModelEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleOnChromaHandlesChanged(struct TArray<struct UEquippableSkinChromaHandle*>& OutChromaHandles); // Function WBP_Panel_WeaponVariantList.WBP_Panel_WeaponVariantList_C.HandleOnChromaHandlesChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetSkinHandle(struct UEquippableSkinHandle* InSkinHandle); // Function WBP_Panel_WeaponVariantList.WBP_Panel_WeaponVariantList_C.SetSkinHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Bind to Weapon Variant List View Model(); // Function WBP_Panel_WeaponVariantList.WBP_Panel_WeaponVariantList_C.Bind to Weapon Variant List View Model // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void K2_BindToViewModel(); // Function WBP_Panel_WeaponVariantList.WBP_Panel_WeaponVariantList_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function WBP_Panel_WeaponVariantList.WBP_Panel_WeaponVariantList_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_WeaponVariantList.WBP_Panel_WeaponVariantList_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_WeaponVariantList_AresCommonNavBar_K2Node_ComponentBoundEvent_0_OnEvent__DelegateSignature(); // Function WBP_Panel_WeaponVariantList.WBP_Panel_WeaponVariantList_C.BndEvt__WBP_Panel_WeaponVariantList_AresCommonNavBar_K2Node_ComponentBoundEvent_0_OnEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_WeaponVariantList_AresCommonNavBar_K2Node_ComponentBoundEvent_1_OnEvent__DelegateSignature(); // Function WBP_Panel_WeaponVariantList.WBP_Panel_WeaponVariantList_C.BndEvt__WBP_Panel_WeaponVariantList_AresCommonNavBar_K2Node_ComponentBoundEvent_1_OnEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Panel_WeaponVariantList(int32_t EntryPoint); // Function WBP_Panel_WeaponVariantList.WBP_Panel_WeaponVariantList_C.ExecuteUbergraph_WBP_Panel_WeaponVariantList // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnInputActionPreferenceChanged__DelegateSignature(); // Function WBP_Panel_WeaponVariantList.WBP_Panel_WeaponVariantList_C.OnInputActionPreferenceChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSkinHandleChanged__DelegateSignature(struct UEquippableSkinHandle* OutSkinHandle); // Function WBP_Panel_WeaponVariantList.WBP_Panel_WeaponVariantList_C.OnSkinHandleChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

