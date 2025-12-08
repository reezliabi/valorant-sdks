// WidgetBlueprintGeneratedClass AccountLevelBorderSelectionScreen.AccountLevelBorderSelectionScreen_C
// Size: 0x3f0 (Inherited: 0x318)
struct UAccountLevelBorderSelectionScreen_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UAccountLevelCarousel_C* AccountLevelCarousel; // 0x320(0x08)
	struct UOverlay* BorderDataAndEquip; // 0x328(0x08)
	struct UContentFilterButton_C* ContentFilterButton; // 0x330(0x08)
	struct UContentItemsView_WithFilterAndSort_C* ContentItemsView_WithFilterAndSort; // 0x338(0x08)
	struct USharedButtonMaster_C* EquipButton; // 0x340(0x08)
	struct UHorizontalBox* EquipFavoriteButtonHorizontalBox; // 0x348(0x08)
	struct UFavoriteContentButton_C* FavoriteContentButton; // 0x350(0x08)
	struct UScaleBox* FavoriteEquipButtonBottomScaleBox; // 0x358(0x08)
	struct UHideAccountLevelToggle_C* HideAccountLevelToggle; // 0x360(0x08)
	struct UTextBlock* LevelBorderText; // 0x368(0x08)
	struct UNoResultsMessageV1_C* NoResultsMessage; // 0x370(0x08)
	struct UOverlay* Overlay_4; // 0x378(0x08)
	struct UPlayerCardPreview_C* PlayerCardPreview; // 0x380(0x08)
	struct UScaleBox* PreviewLevelBorderBottomScaleBox; // 0x388(0x08)
	struct UUniversalHorizontalDivider_C* UniversalHorizontalDivider; // 0x390(0x08)
	struct ULevelBorderHandle* SelectedLevelBorder; // 0x398(0x08)
	struct UContentFilterViewModel* FiltersModel; // 0x3a0(0x08)
	bool IsContentFilterEnabled; // 0x3a8(0x01)
	char pad_3A9[0x7]; // 0x3a9(0x07)
	struct UContentFilter* OwnershipFilter; // 0x3b0(0x08)
	struct TArray<struct ULevelBorderHandle*> BorderHandles; // 0x3b8(0x10)
	bool PreviewShowGrid; // 0x3c8(0x01)
	char pad_3C9[0x7]; // 0x3c9(0x07)
	struct UContentFilterButton_C* CurrentContentFilterButton; // 0x3d0(0x08)
	struct FName UseGridConfiguration; // 0x3d8(0x0c)
	char pad_3E4[0x4]; // 0x3e4(0x04)
	struct UObject* SelectedObject; // 0x3e8(0x08)

	void HandleConfigUpdate(struct FName ConfigName); // Function AccountLevelBorderSelectionScreen.AccountLevelBorderSelectionScreen_C.HandleConfigUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitGridOrCarousel(bool ShowGrid); // Function AccountLevelBorderSelectionScreen.AccountLevelBorderSelectionScreen_C.InitGridOrCarousel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindFavoriteChangeEvent(struct UBaseHandle* NewHandle); // Function AccountLevelBorderSelectionScreen.AccountLevelBorderSelectionScreen_C.BindFavoriteChangeEvent // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleFavoriteChanged(); // Function AccountLevelBorderSelectionScreen.AccountLevelBorderSelectionScreen_C.HandleFavoriteChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateCarouselContent(struct TArray<struct UBaseHandle*>& CarouselContent); // Function AccountLevelBorderSelectionScreen.AccountLevelBorderSelectionScreen_C.UpdateCarouselContent // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitContentFilter(); // Function AccountLevelBorderSelectionScreen.AccountLevelBorderSelectionScreen_C.InitContentFilter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateTabWidgetVis(bool HasMatchingContent); // Function AccountLevelBorderSelectionScreen.AccountLevelBorderSelectionScreen_C.UpdateTabWidgetVis // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleCarouselOnOwnershipChanged(bool IsChecked, bool HasMatchingContent); // Function AccountLevelBorderSelectionScreen.AccountLevelBorderSelectionScreen_C.HandleCarouselOnOwnershipChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleApplyContentFilters(struct UContentFilterViewModel* FilterViewModel, bool OverrideOwnershipChangedDispatch, bool PreventOwnershipChangedDispatch); // Function AccountLevelBorderSelectionScreen.AccountLevelBorderSelectionScreen_C.HandleApplyContentFilters // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateSelectedLevelBorder(struct ULevelBorderHandle* NewLevelBorder); // Function AccountLevelBorderSelectionScreen.AccountLevelBorderSelectionScreen_C.UpdateSelectedLevelBorder // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateEquipButton(); // Function AccountLevelBorderSelectionScreen.AccountLevelBorderSelectionScreen_C.UpdateEquipButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsLevelBorderEquippable(struct ULevelBorderHandle* LevelBorderHandle, bool& IsEquippable); // Function AccountLevelBorderSelectionScreen.AccountLevelBorderSelectionScreen_C.IsLevelBorderEquippable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void IsEquippedOnLoad(struct ULevelBorderHandle* LevelBorderHandle, bool& Value); // Function AccountLevelBorderSelectionScreen.AccountLevelBorderSelectionScreen_C.IsEquippedOnLoad // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void HandleLevelBordersLoaded(struct FLevelBorderHandles& Handles); // Function AccountLevelBorderSelectionScreen.AccountLevelBorderSelectionScreen_C.HandleLevelBordersLoaded // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleEquipButtonClicked(); // Function AccountLevelBorderSelectionScreen.AccountLevelBorderSelectionScreen_C.HandleEquipButtonClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function AccountLevelBorderSelectionScreen.AccountLevelBorderSelectionScreen_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function AccountLevelBorderSelectionScreen.AccountLevelBorderSelectionScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void HandleOnContentEquippedChanged(); // Function AccountLevelBorderSelectionScreen.AccountLevelBorderSelectionScreen_C.HandleOnContentEquippedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__EquipButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // Function AccountLevelBorderSelectionScreen.AccountLevelBorderSelectionScreen_C.BndEvt__EquipButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__AccountLevelCarousel_K2Node_ComponentBoundEvent_2_OnObjectSelected__DelegateSignature(struct UObject* Object); // Function AccountLevelBorderSelectionScreen.AccountLevelBorderSelectionScreen_C.BndEvt__AccountLevelCarousel_K2Node_ComponentBoundEvent_2_OnObjectSelected__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__AccountLevelCarousel_K2Node_ComponentBoundEvent_0_OnOwnershipChanged__DelegateSignature(bool IsChecked, bool HasMatchingContent); // Function AccountLevelBorderSelectionScreen.AccountLevelBorderSelectionScreen_C.BndEvt__AccountLevelCarousel_K2Node_ComponentBoundEvent_0_OnOwnershipChanged__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ContentFilterButton_K2Node_ComponentBoundEvent_3_FiltersApplied__DelegateSignature(struct UContentFilterViewModel* FiltersViewModel); // Function AccountLevelBorderSelectionScreen.AccountLevelBorderSelectionScreen_C.BndEvt__ContentFilterButton_K2Node_ComponentBoundEvent_3_FiltersApplied__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function AccountLevelBorderSelectionScreen.AccountLevelBorderSelectionScreen_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnContentItemSelected(struct UContentItemObject_C* ContentItemObject); // Function AccountLevelBorderSelectionScreen.AccountLevelBorderSelectionScreen_C.OnContentItemSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnUpdateTabWidgetVis(bool HasMatchingContent); // Function AccountLevelBorderSelectionScreen.AccountLevelBorderSelectionScreen_C.OnUpdateTabWidgetVis // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAnyConfigUpdated(struct FName& ConfigName); // Function AccountLevelBorderSelectionScreen.AccountLevelBorderSelectionScreen_C.OnAnyConfigUpdated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleCarouselFilterUpdate(); // Function AccountLevelBorderSelectionScreen.AccountLevelBorderSelectionScreen_C.HandleCarouselFilterUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_AccountLevelBorderSelectionScreen(int32_t EntryPoint); // Function AccountLevelBorderSelectionScreen.AccountLevelBorderSelectionScreen_C.ExecuteUbergraph_AccountLevelBorderSelectionScreen // (Final|UbergraphFunction) // @ game+0x19be2f0
};

