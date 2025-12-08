// WidgetBlueprintGeneratedClass SkinUpgradeButton.SkinUpgradeButton_C
// Size: 0x480 (Inherited: 0x348)
struct USkinUpgradeButton_C : USkinUpgradeButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UWidgetAnimation* hover; // 0x350(0x08)
	struct UOverlay* BorderWidgets; // 0x358(0x08)
	struct UOverlay* CurrencyContainer; // 0x360(0x08)
	struct UTextBlock* Features; // 0x368(0x08)
	struct UTextBlock* Features_2; // 0x370(0x08)
	struct UTextBlock* LevelNumber; // 0x378(0x08)
	struct UTextBlock* LevelsRangeText; // 0x380(0x08)
	struct UImage* LockIconBackground; // 0x388(0x08)
	struct UImage* LockIconBackground_2; // 0x390(0x08)
	struct UMenuAnchor* MenuAnchor_187; // 0x398(0x08)
	struct UVerticalBox* MultipleLevelsTexts; // 0x3a0(0x08)
	struct UVerticalBox* SingleLevelTexts; // 0x3a8(0x08)
	struct UOverlay* StateFullyUpgraded; // 0x3b0(0x08)
	struct UOverlay* StateSelectVariant; // 0x3b8(0x08)
	struct UWidgetSwitcher* StateSwitcher; // 0x3c0(0x08)
	struct UOverlay* StateUnowned; // 0x3c8(0x08)
	struct UHorizontalBox* StateUpgradable; // 0x3d0(0x08)
	struct UHorizontalBox* StateVariantAvailable; // 0x3d8(0x08)
	struct UTelemetryButton* TelemetrySkinUpgradeButton; // 0x3e0(0x08)
	struct UTextBlock* UnlockText; // 0x3e8(0x08)
	struct UCurrencyAmountWidgetMid_C* UpgradeCurrencyAmountWidgetMid; // 0x3f0(0x08)
	struct UCurrencyAmountWidgetMid_C* VariantCurrencyAmountWidgetMid; // 0x3f8(0x08)
	struct UPurchaseModal* PurchaseModal; // 0x400(0x08)
	struct FSharedButtonStyle buttonStyleSturct; // 0x408(0x48)
	struct UEquippableSkinDataAsset* CurrentSkin; // 0x450(0x08)
	struct UArsenalViewModel* Arsenal View Model; // 0x458(0x08)
	struct UEquippableSkinChromaHandle* CurrentChromaHandle; // 0x460(0x08)
	struct UEquippableSkinLevelHandle* CurrentSkinLevelHandle; // 0x468(0x08)
	struct UEquippableSkinHandle* CurrentSkinHandle; // 0x470(0x08)
	struct UVM_WeaponUpgrades_C* VM_WeaponUpgrades; // 0x478(0x08)

	void SequenceEvent__ENTRYPOINTSkinUpgradeButton(); // Function SkinUpgradeButton.SkinUpgradeButton_C.SequenceEvent__ENTRYPOINTSkinUpgradeButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetLevelOfferDTO(struct UItemLevelOfferDTO*& ItemLevelOfferDTO); // Function SkinUpgradeButton.SkinUpgradeButton_C.GetLevelOfferDTO // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ConvergedNavigationToPurchaseFlow(bool IsSidegrade, bool& UsedConvergedFlow); // Function SkinUpgradeButton.SkinUpgradeButton_C.ConvergedNavigationToPurchaseFlow // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetVisibilityMultipleLevelsTexts(bool IsMultipleLevelsTexts); // Function SkinUpgradeButton.SkinUpgradeButton_C.SetVisibilityMultipleLevelsTexts // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateButtonUI(); // Function SkinUpgradeButton.SkinUpgradeButton_C.UpdateButtonUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetVisibilityForUpgradeState(); // Function SkinUpgradeButton.SkinUpgradeButton_C.SetVisibilityForUpgradeState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnChromaHandleLoaded(struct UEquippableSkinChromaHandle* Chroma Handle); // Function SkinUpgradeButton.SkinUpgradeButton_C.OnChromaHandleLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent_1(); // Function SkinUpgradeButton.SkinUpgradeButton_C.SequenceEvent_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSkinHandleLoaded(struct UEquippableSkinHandle* SkinHandle); // Function SkinUpgradeButton.SkinUpgradeButton_C.OnSkinHandleLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWidget* OnGetMenuContent_1(); // Function SkinUpgradeButton.SkinUpgradeButton_C.OnGetMenuContent_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UpdateState(); // Function SkinUpgradeButton.SkinUpgradeButton_C.UpdateState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RefreshLevelUpgradeFields(); // Function SkinUpgradeButton.SkinUpgradeButton_C.RefreshLevelUpgradeFields // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetSkin(struct UEquippableSkinDataAsset* SkinDataAsset, struct UArsenalViewModel* Arsenal View Model, struct UEquippableSkinChromaHandle* CurrentChromaHandle); // Function SkinUpgradeButton.SkinUpgradeButton_C.SetSkin // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function SkinUpgradeButton.SkinUpgradeButton_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function SkinUpgradeButton.SkinUpgradeButton_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TelemetryButton_251_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function SkinUpgradeButton.SkinUpgradeButton_C.BndEvt__TelemetryButton_251_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TelemetryButton_251_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function SkinUpgradeButton.SkinUpgradeButton_C.BndEvt__TelemetryButton_251_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TelemetryButton_251_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function SkinUpgradeButton.SkinUpgradeButton_C.BndEvt__TelemetryButton_251_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function SkinUpgradeButton.SkinUpgradeButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function SkinUpgradeButton.SkinUpgradeButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function SkinUpgradeButton.SkinUpgradeButton_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_SkinUpgradeButton(int32_t EntryPoint); // Function SkinUpgradeButton.SkinUpgradeButton_C.ExecuteUbergraph_SkinUpgradeButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

