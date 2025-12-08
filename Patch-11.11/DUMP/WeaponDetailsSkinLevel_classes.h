// WidgetBlueprintGeneratedClass WeaponDetailsSkinLevel.WeaponDetailsSkinLevel_C
// Size: 0x3e8 (Inherited: 0x320)
struct UWeaponDetailsSkinLevel_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UWidgetAnimation* OnHover; // 0x328(0x08)
	struct UWidgetSwitcher* Background; // 0x330(0x08)
	struct UCurrencyAmountWidgetMid_C* Cost; // 0x338(0x08)
	struct UOverlay* DefaultBackground; // 0x340(0x08)
	struct UOverlay* EquippedIcon; // 0x348(0x08)
	struct UTextBlock* Features; // 0x350(0x08)
	struct USimpleBorder_C* LevelBorder; // 0x358(0x08)
	struct UButton* LevelButton; // 0x360(0x08)
	struct UTextBlock* LevelNumber; // 0x368(0x08)
	struct UOverlay* LockedIcon; // 0x370(0x08)
	struct UOverlay* SelectedBackground; // 0x378(0x08)
	struct UWidgetSwitcher* StateIcon; // 0x380(0x08)
	struct UMenuAnchor* TooltipAnchor; // 0x388(0x08)
	struct UOverlay* UnlockedBackground; // 0x390(0x08)
	struct UOverlay* UnlockedIcon; // 0x398(0x08)
	struct UGunSkinLevelPreview_C* PreviewWidget; // 0x3a0(0x08)
	struct UBaseInventoryModel* BaseInventoryModel; // 0x3a8(0x08)
	struct UEquippableSkinChromaHandle* ChromaHandle; // 0x3b0(0x08)
	struct UEquippableSkinLevelHandle* LevelHandle; // 0x3b8(0x08)
	struct UBaseContentUIData* LevelRewardBaseUIData; // 0x3c0(0x08)
	struct UItemProgressionDefinitionLevelModel* SkinProgressionLevelModel; // 0x3c8(0x08)
	int32_t HighestSelectedSkinLevel; // 0x3d0(0x04)
	bool IsSelected; // 0x3d4(0x01)
	bool IsEquipAnyLevelEnabled; // 0x3d5(0x01)
	char pad_3D6[0x2]; // 0x3d6(0x02)
	struct FMulticastInlineDelegate OnLevelSelected; // 0x3d8(0x10)

	void Selected(bool& Selected); // Function WeaponDetailsSkinLevel.WeaponDetailsSkinLevel_C.Selected // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void ShowMockDataForLevel1(bool IsUnlocked, bool IsEquipped); // Function WeaponDetailsSkinLevel.WeaponDetailsSkinLevel_C.ShowMockDataForLevel1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RefreshUnlockedVisual(bool Unlocked); // Function WeaponDetailsSkinLevel.WeaponDetailsSkinLevel_C.RefreshUnlockedVisual // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RefreshSelectedVisual(bool Selected); // Function WeaponDetailsSkinLevel.WeaponDetailsSkinLevel_C.RefreshSelectedVisual // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RefreshEquippedVisual(bool IsEquipped); // Function WeaponDetailsSkinLevel.WeaponDetailsSkinLevel_C.RefreshEquippedVisual // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RefreshDisabledVisual(); // Function WeaponDetailsSkinLevel.WeaponDetailsSkinLevel_C.RefreshDisabledVisual // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWidget* OnTooltipAnchorGetMenuContent(); // Function WeaponDetailsSkinLevel.WeaponDetailsSkinLevel_C.OnTooltipAnchorGetMenuContent // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsDisplayedAsEquipped(bool& DisplayAsEquipped); // Function WeaponDetailsSkinLevel.WeaponDetailsSkinLevel_C.IsDisplayedAsEquipped // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetUnlockedBackground(bool Unlocked); // Function WeaponDetailsSkinLevel.WeaponDetailsSkinLevel_C.SetUnlockedBackground // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetSelected(bool Selected); // Function WeaponDetailsSkinLevel.WeaponDetailsSkinLevel_C.SetSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetLevelHandle(struct UEquippableSkinLevelHandle* Level); // Function WeaponDetailsSkinLevel.WeaponDetailsSkinLevel_C.SetLevelHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetInventoryModel(struct UBaseInventoryModel* InventoryModel); // Function WeaponDetailsSkinLevel.WeaponDetailsSkinLevel_C.SetInventoryModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetHighestEquippedSkinLevel(int32_t Level); // Function WeaponDetailsSkinLevel.WeaponDetailsSkinLevel_C.SetHighestEquippedSkinLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsUnlocked(bool& IsUnlocked); // Function WeaponDetailsSkinLevel.WeaponDetailsSkinLevel_C.IsUnlocked // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetPreviewVideo(struct UStreamedVideoDataAsset*& Video); // Function WeaponDetailsSkinLevel.WeaponDetailsSkinLevel_C.GetPreviewVideo // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetEquippedChromaForSkin(struct UEquippableSkinInventoryModel* SkinInventoryModel, struct UEquippableSkinChromaInventoryModel*& ChromaInventoryModel); // Function WeaponDetailsSkinLevel.WeaponDetailsSkinLevel_C.GetEquippedChromaForSkin // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void OnOwnershipChange(bool Override, bool IsUnlocked); // Function WeaponDetailsSkinLevel.WeaponDetailsSkinLevel_C.OnOwnershipChange // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEquippedChange(bool Override, bool IsEquipped); // Function WeaponDetailsSkinLevel.WeaponDetailsSkinLevel_C.OnEquippedChange // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DisplaySkinLevel(struct UEquippableSkinLevelHandle* Equippable Skin Level Handle); // Function WeaponDetailsSkinLevel.WeaponDetailsSkinLevel_C.DisplaySkinLevel // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DisplaySkinChroma(struct UEquippableSkinChromaHandle* Equippable Skin Chroma Handle); // Function WeaponDetailsSkinLevel.WeaponDetailsSkinLevel_C.DisplaySkinChroma // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WeaponDetailsSkinLevel.WeaponDetailsSkinLevel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function WeaponDetailsSkinLevel.WeaponDetailsSkinLevel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WeaponDetailsSkinLevel.WeaponDetailsSkinLevel_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WeaponDetailsSkinLevel.WeaponDetailsSkinLevel_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TooltipAnchor_K2Node_ComponentBoundEvent_2_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function WeaponDetailsSkinLevel.WeaponDetailsSkinLevel_C.BndEvt__TooltipAnchor_K2Node_ComponentBoundEvent_2_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void HandleIsOwnedChanged(); // Function WeaponDetailsSkinLevel.WeaponDetailsSkinLevel_C.HandleIsOwnedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function WeaponDetailsSkinLevel.WeaponDetailsSkinLevel_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnIsEquippedChanged(); // Function WeaponDetailsSkinLevel.WeaponDetailsSkinLevel_C.OnIsEquippedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WeaponDetailsSkinLevel(int32_t EntryPoint); // Function WeaponDetailsSkinLevel.WeaponDetailsSkinLevel_C.ExecuteUbergraph_WeaponDetailsSkinLevel // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnLevelSelected__DelegateSignature(struct UEquippableSkinLevelHandle* LevelHandle, struct UEquippableSkinChromaHandle* ChromaHandle); // Function WeaponDetailsSkinLevel.WeaponDetailsSkinLevel_C.OnLevelSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

