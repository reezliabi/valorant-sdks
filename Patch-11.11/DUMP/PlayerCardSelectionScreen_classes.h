// WidgetBlueprintGeneratedClass PlayerCardSelectionScreen.PlayerCardSelectionScreen_C
// Size: 0x3f8 (Inherited: 0x318)
struct UPlayerCardSelectionScreen_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UOverlay* CardDataAndEquip; // 0x320(0x08)
	struct UTextBlock* CardName; // 0x328(0x08)
	struct UContentFilterButton_C* ContentFilterButton; // 0x330(0x08)
	struct UContentItemsView_WithFilterAndSort_C* ContentItemsView_WithFilterAndSort; // 0x338(0x08)
	struct USharedButtonMaster_C* EquipButton; // 0x340(0x08)
	struct UHorizontalBox* EquipFavoriteButtonHorizontalBox; // 0x348(0x08)
	struct UFavoriteContentButton_C* FavoriteContentButton; // 0x350(0x08)
	struct UScaleBox* FavoriteEquipButtonBottomScaleBox; // 0x358(0x08)
	struct UGenericCarousel_C* GenericCarousel; // 0x360(0x08)
	struct UNoResultsMessageV1_C* NoResultsMessage; // 0x368(0x08)
	struct UOverlay* Overlay_4; // 0x370(0x08)
	struct UPlayerCardPreview_C* PlayerCardPreview; // 0x378(0x08)
	struct UPlayerTitleDropdownButton_C* PlayerTitleDropdownButton; // 0x380(0x08)
	struct USizeBox* PlayerTitleDropdownContainer; // 0x388(0x08)
	struct UScaleBox* PreviewCardBottomScaleBox; // 0x390(0x08)
	struct UUniversalHorizontalDivider_C* UniversalHorizontalDivider; // 0x398(0x08)
	struct UPlayerCardHandle* SelectedPlayerCard; // 0x3a0(0x08)
	struct UPlayerTitleHandle* SelectedPlayerTitle; // 0x3a8(0x08)
	struct UContentFilterViewModel* FiltersModel; // 0x3b0(0x08)
	bool IsContentFilterEnabled; // 0x3b8(0x01)
	char pad_3B9[0x7]; // 0x3b9(0x07)
	struct UContentFilter* OwnershipFilter; // 0x3c0(0x08)
	struct TArray<struct UPlayerCardHandle*> CardHandles; // 0x3c8(0x10)
	struct UObject* SelectedObject; // 0x3d8(0x08)
	struct FName UseGridConfiguration; // 0x3e0(0x0c)
	bool PreviewShowGrid; // 0x3ec(0x01)
	char pad_3ED[0x3]; // 0x3ed(0x03)
	struct UContentFilterButton_C* CurrentContentFilterButton; // 0x3f0(0x08)

	void HandleConfigUpdate(struct FName ConfigName); // Function PlayerCardSelectionScreen.PlayerCardSelectionScreen_C.HandleConfigUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitGridOrCarousel(bool ShowGrid); // Function PlayerCardSelectionScreen.PlayerCardSelectionScreen_C.InitGridOrCarousel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Disable Equip Button(); // Function PlayerCardSelectionScreen.PlayerCardSelectionScreen_C.Disable Equip Button // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleFavoriteChanged(); // Function PlayerCardSelectionScreen.PlayerCardSelectionScreen_C.HandleFavoriteChanged // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindFavoriteChangeEvent(struct UBaseHandle* NewHandle); // Function PlayerCardSelectionScreen.PlayerCardSelectionScreen_C.BindFavoriteChangeEvent // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitContentFilter(); // Function PlayerCardSelectionScreen.PlayerCardSelectionScreen_C.InitContentFilter // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateTabWidgetVis(bool HasMatchingContent); // Function PlayerCardSelectionScreen.PlayerCardSelectionScreen_C.UpdateTabWidgetVis // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleCarouselOnOwnershipChanged(bool IsChecked, bool HasMatchingContent); // Function PlayerCardSelectionScreen.PlayerCardSelectionScreen_C.HandleCarouselOnOwnershipChanged // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleApplyContentFilters(struct UContentFilterViewModel* FilterViewModel, bool OverrideOwnershipChangedDispatch, bool PreventOwnershipChangedDispatch); // Function PlayerCardSelectionScreen.PlayerCardSelectionScreen_C.HandleApplyContentFilters // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandlePlayerCardsLoaded(struct FPlayerCardHandles& Handles); // Function PlayerCardSelectionScreen.PlayerCardSelectionScreen_C.HandlePlayerCardsLoaded // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateSelectedPlayerTitle(); // Function PlayerCardSelectionScreen.PlayerCardSelectionScreen_C.UpdateSelectedPlayerTitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateSelectedPlayerCard(struct UPlayerCardHandle* NewPlayerCard); // Function PlayerCardSelectionScreen.PlayerCardSelectionScreen_C.UpdateSelectedPlayerCard // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateEquipButton(); // Function PlayerCardSelectionScreen.PlayerCardSelectionScreen_C.UpdateEquipButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsPlayerTitleEquippable(struct UPlayerTitleHandle* Player Title Handle, bool& Value); // Function PlayerCardSelectionScreen.PlayerCardSelectionScreen_C.IsPlayerTitleEquippable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void IsPlayerCardEquippable(struct UPlayerCardHandle* Player Card Handle, bool& Value); // Function PlayerCardSelectionScreen.PlayerCardSelectionScreen_C.IsPlayerCardEquippable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function PlayerCardSelectionScreen.PlayerCardSelectionScreen_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function PlayerCardSelectionScreen.PlayerCardSelectionScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__GenericCarousel_K2Node_ComponentBoundEvent_0_OnObjectSelected__DelegateSignature(struct UObject* Object); // Function PlayerCardSelectionScreen.PlayerCardSelectionScreen_C.BndEvt__GenericCarousel_K2Node_ComponentBoundEvent_0_OnObjectSelected__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void HandleOnContentEquippedChanged(); // Function PlayerCardSelectionScreen.PlayerCardSelectionScreen_C.HandleOnContentEquippedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__EquipButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // Function PlayerCardSelectionScreen.PlayerCardSelectionScreen_C.BndEvt__EquipButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__PlayerTitleDropdownButton_K2Node_ComponentBoundEvent_2_OnMenuCreated__DelegateSignature(struct UAresContextMenuBaseWidget* MenuWidget); // Function PlayerCardSelectionScreen.PlayerCardSelectionScreen_C.BndEvt__PlayerTitleDropdownButton_K2Node_ComponentBoundEvent_2_OnMenuCreated__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void SetPlayerTitle(struct UPlayerTitleHandle* PlayerTitle); // Function PlayerCardSelectionScreen.PlayerCardSelectionScreen_C.SetPlayerTitle // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__GenericCarousel_K2Node_ComponentBoundEvent_3_OnOwnershipChanged__DelegateSignature(bool IsChecked, bool HasMatchingContent); // Function PlayerCardSelectionScreen.PlayerCardSelectionScreen_C.BndEvt__GenericCarousel_K2Node_ComponentBoundEvent_3_OnOwnershipChanged__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ContentFilterButton_K2Node_ComponentBoundEvent_4_FiltersApplied__DelegateSignature(struct UContentFilterViewModel* FiltersViewModel); // Function PlayerCardSelectionScreen.PlayerCardSelectionScreen_C.BndEvt__ContentFilterButton_K2Node_ComponentBoundEvent_4_FiltersApplied__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function PlayerCardSelectionScreen.PlayerCardSelectionScreen_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnContentItemSelected(struct UContentItemObject_C* ContentItemObject); // Function PlayerCardSelectionScreen.PlayerCardSelectionScreen_C.OnContentItemSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnUpdateTabWidgetVis(bool HasMatchingContent); // Function PlayerCardSelectionScreen.PlayerCardSelectionScreen_C.OnUpdateTabWidgetVis // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAnyConfigUpdated(struct FName& ConfigName); // Function PlayerCardSelectionScreen.PlayerCardSelectionScreen_C.OnAnyConfigUpdated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleCarouselFilterUpdate(); // Function PlayerCardSelectionScreen.PlayerCardSelectionScreen_C.HandleCarouselFilterUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_PlayerCardSelectionScreen(int32_t EntryPoint); // Function PlayerCardSelectionScreen.PlayerCardSelectionScreen_C.ExecuteUbergraph_PlayerCardSelectionScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

