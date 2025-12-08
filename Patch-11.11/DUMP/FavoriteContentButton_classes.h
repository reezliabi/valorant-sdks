// WidgetBlueprintGeneratedClass FavoriteContentButton.FavoriteContentButton_C
// Size: 0x3a8 (Inherited: 0x318)
struct UFavoriteContentButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* hover; // 0x320(0x08)
	struct UButton* FavoriteButton; // 0x328(0x08)
	struct USizeBox* FavoriteButtonContainer; // 0x330(0x08)
	struct USizeBox* FavoriteButtonSizeBox; // 0x338(0x08)
	struct UOverlay* Favorited; // 0x340(0x08)
	struct UTextBlock* FavoriteText; // 0x348(0x08)
	struct UBorder* HorizontalBoxBorder; // 0x350(0x08)
	struct UWidgetSwitcher* Icon; // 0x358(0x08)
	struct UOverlay* IconPips; // 0x360(0x08)
	struct UMenuAnchor* MenuAnchor_53; // 0x368(0x08)
	struct UButton* TooltipButton; // 0x370(0x08)
	struct UOverlay* Unfavorited; // 0x378(0x08)
	struct FMulticastInlineDelegate OnFavoritesClicked; // 0x380(0x10)
	bool IsEmptyItem; // 0x390(0x01)
	char pad_391[0x7]; // 0x391(0x07)
	struct UAresBasePrimaryDataAsset* Data Asset; // 0x398(0x08)
	struct UAresBasePrimaryDataAsset* DataAssetBindToOnIsUnlockChanged; // 0x3a0(0x08)

	void HandleIsUnlockedChanged(); // Function FavoriteContentButton.FavoriteContentButton_C.HandleIsUnlockedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UUserWidget* OnGetUserMenuContent_1(); // Function FavoriteContentButton.FavoriteContentButton_C.OnGetUserMenuContent_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Is Empty Item(bool IsEmptyItem); // Function FavoriteContentButton.FavoriteContentButton_C.Set Is Empty Item // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShouldDisableFavoritesButton(struct UAresBasePrimaryDataAsset* Asset, bool& ShouldDisableButton); // Function FavoriteContentButton.FavoriteContentButton_C.ShouldDisableFavoritesButton // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update Visibility(bool& IsDisabled); // Function FavoriteContentButton.FavoriteContentButton_C.Update Visibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleIsFavoritedChanged(); // Function FavoriteContentButton.FavoriteContentButton_C.HandleIsFavoritedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToFavoritesButton(); // Function FavoriteContentButton.FavoriteContentButton_C.BindToFavoritesButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UnbindFromFavoritesButton(); // Function FavoriteContentButton.FavoriteContentButton_C.UnbindFromFavoritesButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetFavoritesBackground(); // Function FavoriteContentButton.FavoriteContentButton_C.SetFavoritesBackground // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleConfigUpdated(); // Function FavoriteContentButton.FavoriteContentButton_C.HandleConfigUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsAssetFavorited(struct UAresBasePrimaryDataAsset* Data Asset, bool& IsAssetFavorited); // Function FavoriteContentButton.FavoriteContentButton_C.IsAssetFavorited // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void IsAssetUnlocked(struct UAresBasePrimaryDataAsset* Data Asset, bool& IsAssetUnlocked); // Function FavoriteContentButton.FavoriteContentButton_C.IsAssetUnlocked // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void HandleFavoritesClicked(); // Function FavoriteContentButton.FavoriteContentButton_C.HandleFavoritesClicked // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetActiveInventoryItem(struct UAresBasePrimaryDataAsset* Asset, struct UAresBasePrimaryDataAsset* OptionalAssetBindToOnIsUnlockChanged, bool& IsDisabled); // Function FavoriteContentButton.FavoriteContentButton_C.SetActiveInventoryItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool IsBackgroundFavorited(); // Function FavoriteContentButton.FavoriteContentButton_C.IsBackgroundFavorited // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void BndEvt__Button_144_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function FavoriteContentButton.FavoriteContentButton_C.BndEvt__Button_144_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function FavoriteContentButton.FavoriteContentButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnAnyConfigUpdated(struct FName& ConfigName); // Function FavoriteContentButton.FavoriteContentButton_C.OnAnyConfigUpdated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__FavoriteButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function FavoriteContentButton.FavoriteContentButton_C.BndEvt__FavoriteButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__FavoriteButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function FavoriteContentButton.FavoriteContentButton_C.BndEvt__FavoriteButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__FavoriteContentButton_TooltipButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function FavoriteContentButton.FavoriteContentButton_C.BndEvt__FavoriteContentButton_TooltipButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__FavoriteContentButton_TooltipButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function FavoriteContentButton.FavoriteContentButton_C.BndEvt__FavoriteContentButton_TooltipButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_FavoriteContentButton(int32_t EntryPoint); // Function FavoriteContentButton.FavoriteContentButton_C.ExecuteUbergraph_FavoriteContentButton // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnFavoritesClicked__DelegateSignature(bool DeleteFavorite); // Function FavoriteContentButton.FavoriteContentButton_C.OnFavoritesClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

