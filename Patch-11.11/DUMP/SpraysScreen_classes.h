// WidgetBlueprintGeneratedClass SpraysScreen.SpraysScreen_C
// Size: 0x400 (Inherited: 0x318)
struct USpraysScreen_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* PrePostWarning; // 0x320(0x08)
	struct UTextBlock* AESKey_Hold; // 0x328(0x08)
	struct UTextBlock* AESKey_Tap; // 0x330(0x08)
	struct UContentItemsView_Sprays_C* ContentItemsView_Sprays; // 0x338(0x08)
	struct UOverlay* ContentOverlay; // 0x340(0x08)
	struct UHorizontalBox* ContextualWarningBox; // 0x348(0x08)
	struct UWBP_MenuButtonPrimary_C* EquipButtonNew; // 0x350(0x08)
	struct UFavoriteContentButton_C* FavoriteContentButton; // 0x358(0x08)
	struct UTextBlock* Hold; // 0x360(0x08)
	struct UOverlay* HoldOverlay; // 0x368(0x08)
	struct ULargeModal_C* LargeModal; // 0x370(0x08)
	struct UNoResultsMessageV1_C* NoResultsMessage; // 0x378(0x08)
	struct USprayPreview_C* Preview; // 0x380(0x08)
	struct URadialButton_C* RadialButton; // 0x388(0x08)
	struct UOverlay* SprayDataAndEquip; // 0x390(0x08)
	struct UTextBlock* SprayName; // 0x398(0x08)
	struct UTextBlock* SprayWheelSlotText; // 0x3a0(0x08)
	struct UOverlay* TapOverlay; // 0x3a8(0x08)
	bool ModelViewerPressed; // 0x3b0(0x01)
	char pad_3B1[0x7]; // 0x3b1(0x07)
	double CurrentOpacity; // 0x3b8(0x08)
	struct UContentFilterViewModel* FiltersModel; // 0x3c0(0x08)
	bool IsContentFilterEnabled; // 0x3c8(0x01)
	char pad_3C9[0x7]; // 0x3c9(0x07)
	struct UCollectionOwnershipContentFilterProvider_C* OwnershipFilterProvider; // 0x3d0(0x08)
	struct UContentFilter* OwnershipFilter; // 0x3d8(0x08)
	struct USprayEquipSlotHandle* SprayEquipSlotSelected; // 0x3e0(0x08)
	struct FGuid Spray Asset Guid; // 0x3e8(0x10)
	struct USprayHandle* OptionalSprayHandle; // 0x3f8(0x08)

	struct FAresMainMenuNavBarData GetNavBarData(); // Function SpraysScreen.SpraysScreen_C.GetNavBarData // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	bool HandleBackRequest(); // Function SpraysScreen.SpraysScreen_C.HandleBackRequest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void LoadAndSelectSpray(struct USprayHandle* SprayHandle); // Function SpraysScreen.SpraysScreen_C.LoadAndSelectSpray // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetWheelTooltip(); // Function SpraysScreen.SpraysScreen_C.SetWheelTooltip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateFilterIcons(struct UContentFilterViewModel* FilterModel); // Function SpraysScreen.SpraysScreen_C.UpdateFilterIcons // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateEquipButton(); // Function SpraysScreen.SpraysScreen_C.UpdateEquipButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetSprayEquipSlotSelected(struct USprayEquipSlotHandle*& SprayEquipSlotSelected); // Function SpraysScreen.SpraysScreen_C.SetSprayEquipSlotSelected // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindFavoriteChangeEvent(struct UBaseHandle* New Handle); // Function SpraysScreen.SpraysScreen_C.BindFavoriteChangeEvent // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleFavoriteChanged(); // Function SpraysScreen.SpraysScreen_C.HandleFavoriteChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitContentFilters(); // Function SpraysScreen.SpraysScreen_C.InitContentFilters // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateTabWidgetVis(bool HasMatchingContent); // Function SpraysScreen.SpraysScreen_C.UpdateTabWidgetVis // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSpraysLoaded(); // Function SpraysScreen.SpraysScreen_C.OnSpraysLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SelectSpray(struct USprayHandle* SprayHandle); // Function SpraysScreen.SpraysScreen_C.SelectSpray // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function SpraysScreen.SpraysScreen_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function SpraysScreen.SpraysScreen_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__SpraysScreen_v3_ContentItemsView_Sprays_K2Node_ComponentBoundEvent_4_OnSpraySelected__DelegateSignature(); // Function SpraysScreen.SpraysScreen_C.BndEvt__SpraysScreen_v3_ContentItemsView_Sprays_K2Node_ComponentBoundEvent_4_OnSpraySelected__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__SpraysScreen_RadialButton_K2Node_ComponentBoundEvent_0_SprayEquipSlotClicked__DelegateSignature(struct USprayEquipSlotHandle* SlotHandle); // Function SpraysScreen.SpraysScreen_C.BndEvt__SpraysScreen_RadialButton_K2Node_ComponentBoundEvent_0_SprayEquipSlotClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void Model Viewer Released(); // Function SpraysScreen.SpraysScreen_C.Model Viewer Released // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__SpraysScreen_EuipButtonNew_K2Node_ComponentBoundEvent_2_OnUniversalButtonVoidEvent__DelegateSignature(); // Function SpraysScreen.SpraysScreen_C.BndEvt__SpraysScreen_EuipButtonNew_K2Node_ComponentBoundEvent_2_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void AESActionBindingChanged(struct UActionBindSet* ActionBindSet, int32_t BindIndex, enum class EActionBindChangeSource ChangeSource, struct FName Character); // Function SpraysScreen.SpraysScreen_C.AESActionBindingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AESWheelHoldChanged(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function SpraysScreen.SpraysScreen_C.AESWheelHoldChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function SpraysScreen.SpraysScreen_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Model Viewer Pressed(); // Function SpraysScreen.SpraysScreen_C.Model Viewer Pressed // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function SpraysScreen.SpraysScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnAfterEquipSlotsLoaded(struct TArray<struct USprayEquipSlotHandle*>& SprayEquipSlotHandles); // Function SpraysScreen.SpraysScreen_C.OnAfterEquipSlotsLoaded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Init from Nav Args(struct TMap<struct FName, struct FWildcard> InParameters); // Function SpraysScreen.SpraysScreen_C.Init from Nav Args // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_SpraysScreen(int32_t EntryPoint); // Function SpraysScreen.SpraysScreen_C.ExecuteUbergraph_SpraysScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

