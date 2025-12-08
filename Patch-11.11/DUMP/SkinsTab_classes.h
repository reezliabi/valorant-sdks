// WidgetBlueprintGeneratedClass SkinsTab.SkinsTab_C
// Size: 0x4e2 (Inherited: 0x318)
struct USkinsTab_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* CollapseSkinsList; // 0x320(0x08)
	struct UWidgetAnimation* ExpandSkinsList; // 0x328(0x08)
	struct UAresWidgetSwitcher* ButtonSwitcher; // 0x330(0x08)
	struct UAresWidgetSwitcher* ChromaAndLevelSwitcher; // 0x338(0x08)
	struct UWeaponDetailsChromas_C* Chromas; // 0x340(0x08)
	struct UImage* CollapsibleIcon; // 0x348(0x08)
	struct UContentFilterButton_C* ContentFilterButton; // 0x350(0x08)
	struct UOverlay* DataAndCall2Action; // 0x358(0x08)
	struct UFavoriteContentButton_C* FavoriteContentButton; // 0x360(0x08)
	struct UGenericCarousel_C* GenericCarousel; // 0x368(0x08)
	struct UTextBlock* GunSkinName; // 0x370(0x08)
	struct UTextBlock* HideUpgrades; // 0x378(0x08)
	struct UTextBlock* MainButtonContextText; // 0x380(0x08)
	struct UNoResultsMessageV1_C* NoResultsMessage; // 0x388(0x08)
	struct UVerticalBox* OriginalChromaAndLevelSelector; // 0x390(0x08)
	struct USharedButtonMaster_C* SharedButtonMaster; // 0x398(0x08)
	struct UWeaponDetailsSkinLevels_C* SkinLevels; // 0x3a0(0x08)
	struct USkinUpgradeButton_C* SkinUpgradeButton; // 0x3a8(0x08)
	struct UTierIcon_C* TierIcon; // 0x3b0(0x08)
	struct UHorizontalBox* TierIconAndGunSkinName; // 0x3b8(0x08)
	struct USizeBox* TierIconSizeBox; // 0x3c0(0x08)
	struct UButton* ToggleExpandButton; // 0x3c8(0x08)
	struct UUniversalHorizontalDivider_C* UniversalHorizontalDivider; // 0x3d0(0x08)
	struct UUpgradeButton_C* UpgradeButton; // 0x3d8(0x08)
	struct UTextBlock* ViewUpgrades; // 0x3e0(0x08)
	struct UWBP_Panel_ChromaAndSkinLevelSelector_C* WBP_Panel_ChromaAndSkinLevelSelector; // 0x3e8(0x08)
	struct UArsenalViewController* ArsenalViewController; // 0x3f0(0x08)
	struct UEquippableSkinChromaHandle* CurrentChroma; // 0x3f8(0x08)
	struct UEquippableHandle* CurrentEquippable; // 0x400(0x08)
	struct UEquippableSkinHandle* CurrentSkin; // 0x408(0x08)
	struct UEquippableSkinChromaHandle* ChromaOverride; // 0x410(0x08)
	int32_t CurrentChromaCost; // 0x418(0x04)
	char pad_41C[0x4]; // 0x41c(0x04)
	struct UCurrencyHandle* CurrentCurrency; // 0x420(0x08)
	struct UEquippableSkinLevelHandle* CurrentLevel; // 0x428(0x08)
	bool IsEquipAnyLevelEnabled; // 0x430(0x01)
	bool SkinsListExpanded; // 0x431(0x01)
	char pad_432[0x6]; // 0x432(0x06)
	struct FMulticastInlineDelegate OnSelectionUpdated; // 0x438(0x10)
	struct FMulticastInlineDelegate OnLevelUnlocked; // 0x448(0x10)
	struct UContentFilterViewModel* FiltersModel; // 0x458(0x08)
	struct TArray<struct UEquippableSkinHandle*> SkinHandles; // 0x460(0x10)
	struct FMulticastInlineDelegate OnContentFiltersApplied; // 0x470(0x10)
	struct UContentFilter* OwnershipFilter; // 0x480(0x08)
	bool IsContentFilterEnabled; // 0x488(0x01)
	char pad_489[0x7]; // 0x489(0x07)
	struct FText CurrentButtonContextText; // 0x490(0x18)
	struct FText VariantLvlIncludedString; // 0x4a8(0x18)
	struct FText RandomNoFavoritesString; // 0x4c0(0x18)
	struct UObject* ViewModel; // 0x4d8(0x08)
	bool IsChromaPurchase; // 0x4e0(0x01)
	bool IsLevelPurchase; // 0x4e1(0x01)

	void SequenceEvent__ENTRYPOINTSkinsTab_1(); // Function SkinsTab.SkinsTab_C.SequenceEvent__ENTRYPOINTSkinsTab_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent__ENTRYPOINTSkinsTab(); // Function SkinsTab.SkinsTab_C.SequenceEvent__ENTRYPOINTSkinsTab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateButtonContextText(); // Function SkinsTab.SkinsTab_C.UpdateButtonContextText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetCurrentChromaMVVM(struct UEquippableSkinChromaHandle* NewChroma); // Function SkinsTab.SkinsTab_C.SetCurrentChromaMVVM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetCurrentSkinLevelMVVM(struct UEquippableSkinLevelHandle* NewSkinLevel); // Function SkinsTab.SkinsTab_C.SetCurrentSkinLevelMVVM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindMVVMEvents(bool Bind); // Function SkinsTab.SkinsTab_C.BindMVVMEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FString ConstructFiltersModelIdFromEquippable(); // Function SkinsTab.SkinsTab_C.ConstructFiltersModelIdFromEquippable // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Update Lock Random Skin(bool& ShouldLockRandomSkin); // Function SkinsTab.SkinsTab_C.Update Lock Random Skin // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleFavoriteChanged(); // Function SkinsTab.SkinsTab_C.HandleFavoriteChanged // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Init Content Filter(); // Function SkinsTab.SkinsTab_C.Init Content Filter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateTabWidgetVisAndDispatchEvent(bool HasMatchingContent); // Function SkinsTab.SkinsTab_C.UpdateTabWidgetVisAndDispatchEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RefreshConfig(); // Function SkinsTab.SkinsTab_C.RefreshConfig // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleCarouselOnOwnershipChanged(bool IsChecked, bool HasMatchingContent); // Function SkinsTab.SkinsTab_C.HandleCarouselOnOwnershipChanged // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleApplyContentFilters(struct UContentFilterViewModel* FilterViewModel, bool OverrideOwnershipChangedDispatch, bool PreventOwnershipChangedDispatch); // Function SkinsTab.SkinsTab_C.HandleApplyContentFilters // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateOwnershipFilter(bool IsEnabled); // Function SkinsTab.SkinsTab_C.UpdateOwnershipFilter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Init(struct UArsenalViewController* ArsenalViewController, struct UEquippableHandle* Equippable, struct UEquippableSkinHandle* SkinOverride, struct UEquippableSkinChromaHandle* ChromaOverride, struct FEquippableSkinHandles EquippableSkinHandles); // Function SkinsTab.SkinsTab_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitCarousel(); // Function SkinsTab.SkinsTab_C.InitCarousel // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleSkinHandlesLoaded(struct FEquippableSkinHandles& Handles); // Function SkinsTab.SkinsTab_C.HandleSkinHandlesLoaded // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetLevelNumber(struct UEquippableSkinLevelHandle* Level, int32_t& LevelNumber); // Function SkinsTab.SkinsTab_C.GetLevelNumber // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetHighestUnlockedSkinLevel(struct UEquippableSkinHandle* Skin, struct UEquippableSkinLevelHandle*& Level); // Function SkinsTab.SkinsTab_C.GetHighestUnlockedSkinLevel // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetHighestLevelForSkin(struct UEquippableSkinHandle* Skin, struct UEquippableSkinLevelHandle*& Skin Level); // Function SkinsTab.SkinsTab_C.GetHighestLevelForSkin // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetEquippedOrHighestUnlockedLevelForSkin(struct UEquippableSkinHandle* Skin, struct UEquippableSkinLevelHandle*& Skin Level); // Function SkinsTab.SkinsTab_C.GetEquippedOrHighestUnlockedLevelForSkin // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetChromaForSkin(struct UEquippableSkinHandle* Skin, struct UEquippableSkinChromaHandle*& Chroma); // Function SkinsTab.SkinsTab_C.GetChromaForSkin // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void DispatchHighestEquippedSkinLevel(struct UEquippableSkinLevelHandle* Level, int32_t LevelNumber); // Function SkinsTab.SkinsTab_C.DispatchHighestEquippedSkinLevel // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateButtonContextTextVisibility(bool Override, bool ForceHidden, struct FText String); // Function SkinsTab.SkinsTab_C.UpdateButtonContextTextVisibility // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateGunSkinName(); // Function SkinsTab.SkinsTab_C.UpdateGunSkinName // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleSkinLevelsUnlocked(); // Function SkinsTab.SkinsTab_C.HandleSkinLevelsUnlocked // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleConfigUpdated(); // Function SkinsTab.SkinsTab_C.HandleConfigUpdated // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateSelections(); // Function SkinsTab.SkinsTab_C.UpdateSelections // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update Equip Button(); // Function SkinsTab.SkinsTab_C.Update Equip Button // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetVisualElementsForEnabledUI(); // Function SkinsTab.SkinsTab_C.SetVisualElementsForEnabledUI // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetEquippable(struct UEquippableHandle* Equippable); // Function SkinsTab.SkinsTab_C.SetEquippable // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetCurrentSkinLevel(struct UEquippableSkinLevelHandle* LevelHandle, struct UEquippableSkinChromaHandle* ChromaHandle); // Function SkinsTab.SkinsTab_C.SetCurrentSkinLevel // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetCurrentSkin(struct UEquippableSkinHandle* Skin); // Function SkinsTab.SkinsTab_C.SetCurrentSkin // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetCurrentChroma(struct UEquippableSkinChromaHandle* Chroma); // Function SkinsTab.SkinsTab_C.SetCurrentChroma // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EquipCurrentSelections(); // Function SkinsTab.SkinsTab_C.EquipCurrentSelections // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CollapseSFX(); // Function SkinsTab.SkinsTab_C.CollapseSFX // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function SkinsTab.SkinsTab_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__GenericCarousel_K2Node_ComponentBoundEvent_4_OnObjectSelected__DelegateSignature(struct UObject* Object); // Function SkinsTab.SkinsTab_C.BndEvt__GenericCarousel_K2Node_ComponentBoundEvent_4_OnObjectSelected__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__CollapseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function SkinsTab.SkinsTab_C.BndEvt__CollapseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__SkinLevels_K2Node_ComponentBoundEvent_9_OnLevelClicked__DelegateSignature(struct UEquippableSkinLevelHandle* LevelHandle, struct UEquippableSkinChromaHandle* ChromaHandle); // Function SkinsTab.SkinsTab_C.BndEvt__SkinLevels_K2Node_ComponentBoundEvent_9_OnLevelClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__NewChromas_K2Node_ComponentBoundEvent_0_OnChromaSelected__DelegateSignature(struct UEquippableSkinChromaHandle* Chroma); // Function SkinsTab.SkinsTab_C.BndEvt__NewChromas_K2Node_ComponentBoundEvent_0_OnChromaSelected__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function SkinsTab.SkinsTab_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnAnyConfigUpdated(struct FName& ConfigName); // Function SkinsTab.SkinsTab_C.OnAnyConfigUpdated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function SkinsTab.SkinsTab_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__GenericCarousel_K2Node_ComponentBoundEvent_2_OnOwnershipChanged__DelegateSignature(bool IsChecked, bool HasMatchingContent); // Function SkinsTab.SkinsTab_C.BndEvt__GenericCarousel_K2Node_ComponentBoundEvent_2_OnOwnershipChanged__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ContentFilterButton_K2Node_ComponentBoundEvent_3_FiltersApplied__DelegateSignature(struct UContentFilterViewModel* FiltersViewModel); // Function SkinsTab.SkinsTab_C.BndEvt__ContentFilterButton_K2Node_ComponentBoundEvent_3_FiltersApplied__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExpandSFX(); // Function SkinsTab.SkinsTab_C.ExpandSFX // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__SharedButtonMaster_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(); // Function SkinsTab.SkinsTab_C.BndEvt__SharedButtonMaster_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_SkinsTab(int32_t EntryPoint); // Function SkinsTab.SkinsTab_C.ExecuteUbergraph_SkinsTab // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnContentFiltersApplied__DelegateSignature(bool IsOwnedOnlyFilterEnabled, bool HasMatchingContent); // Function SkinsTab.SkinsTab_C.OnContentFiltersApplied__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnLevelUnlocked__DelegateSignature(struct UEquippableHandle* Equippable, struct UEquippableSkinHandle* Skin, struct UEquippableSkinChromaHandle* Chroma, int32_t Level); // Function SkinsTab.SkinsTab_C.OnLevelUnlocked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSelectionUpdated__DelegateSignature(struct UEquippableHandle* Equippable, struct UEquippableSkinHandle* Skin, struct UEquippableSkinChromaHandle* Chroma, int32_t Level); // Function SkinsTab.SkinsTab_C.OnSelectionUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

