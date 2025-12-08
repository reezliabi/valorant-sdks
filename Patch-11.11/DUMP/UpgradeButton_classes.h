// WidgetBlueprintGeneratedClass UpgradeButton.UpgradeButton_C
// Size: 0x480 (Inherited: 0x348)
struct UUpgradeButton_C : USkinUpgradeButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UWidgetAnimation* hover; // 0x350(0x08)
	struct UOverlay* BorderWidgets; // 0x358(0x08)
	struct UOverlay* ChromaInfo; // 0x360(0x08)
	struct UOverlay* CurrencyContainer; // 0x368(0x08)
	struct UTextBlock* Features; // 0x370(0x08)
	struct UTextBlock* Features_2; // 0x378(0x08)
	struct UOverlay* LevelInfo; // 0x380(0x08)
	struct UTextBlock* LevelNumber; // 0x388(0x08)
	struct UTextBlock* LevelsRangeText; // 0x390(0x08)
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
	struct UEquippableSkinHandle* CurrentSkinHandle; // 0x408(0x08)
	struct FSharedButtonStyle buttonStyleSturct; // 0x410(0x48)
	struct UEquippableSkinDataAsset* CurrentSkin; // 0x458(0x08)
	struct UArsenalViewModel* Arsenal View Model; // 0x460(0x08)
	struct UEquippableSkinChromaHandle* CurrentChromaHandle; // 0x468(0x08)
	struct UEquippableSkinLevelHandle* CurrentSkinLevelHandle; // 0x470(0x08)
	struct UVM_WeaponUpgrades_C* VM_WeaponUpgrades; // 0x478(0x08)

	void SequenceEvent__ENTRYPOINTUpgradeButton(); // Function UpgradeButton.UpgradeButton_C.SequenceEvent__ENTRYPOINTUpgradeButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ConvergedNavigationToPurchaseFlow(bool IsSidegrade, bool& UsedConvergedFlow); // Function UpgradeButton.UpgradeButton_C.ConvergedNavigationToPurchaseFlow // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetLevelOfferDTO(struct UItemLevelOfferDTO*& ItemLevelOfferDTO); // Function UpgradeButton.UpgradeButton_C.GetLevelOfferDTO // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetSkinLevel(struct UEquippableSkinLevelHandle* NewSkinLevelHandle); // Function UpgradeButton.UpgradeButton_C.SetSkinLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateButtonUI(); // Function UpgradeButton.UpgradeButton_C.UpdateButtonUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetVisibilityForUpgradeState(); // Function UpgradeButton.UpgradeButton_C.SetVisibilityForUpgradeState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnChromaHandleLoaded(struct UEquippableSkinChromaHandle* Chroma Handle); // Function UpgradeButton.UpgradeButton_C.OnChromaHandleLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent_1(); // Function UpgradeButton.UpgradeButton_C.SequenceEvent_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSkinHandleLoaded(struct UEquippableSkinHandle* SkinHandle); // Function UpgradeButton.UpgradeButton_C.OnSkinHandleLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWidget* OnGetMenuContent_1(); // Function UpgradeButton.UpgradeButton_C.OnGetMenuContent_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateState(); // Function UpgradeButton.UpgradeButton_C.UpdateState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RefreshLevelUpgradeFields(); // Function UpgradeButton.UpgradeButton_C.RefreshLevelUpgradeFields // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetSkin(struct UEquippableSkinDataAsset* SkinDataAsset, struct UArsenalViewModel* Arsenal View Model, struct UEquippableSkinChromaHandle* CurrentChromaHandle, struct UEquippableSkinLevelHandle* CurrentSkinLevelHandle); // Function UpgradeButton.UpgradeButton_C.SetSkin // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UpgradeButton.UpgradeButton_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UpgradeButton.UpgradeButton_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TelemetryButton_251_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UpgradeButton.UpgradeButton_C.BndEvt__TelemetryButton_251_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TelemetryButton_251_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UpgradeButton.UpgradeButton_C.BndEvt__TelemetryButton_251_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TelemetryButton_251_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UpgradeButton.UpgradeButton_C.BndEvt__TelemetryButton_251_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function UpgradeButton.UpgradeButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function UpgradeButton.UpgradeButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function UpgradeButton.UpgradeButton_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_UpgradeButton(int32_t EntryPoint); // Function UpgradeButton.UpgradeButton_C.ExecuteUbergraph_UpgradeButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

