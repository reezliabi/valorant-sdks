// WidgetBlueprintGeneratedClass ItemDetailsPaneV2.ItemDetailsPaneV2_C
// Size: 0x4d1 (Inherited: 0x3d0)
struct UItemDetailsPaneV2_C : UItemDetailsPane_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	struct UImage* ArrowLeft; // 0x3d8(0x08)
	struct UImage* ArrowRight; // 0x3e0(0x08)
	struct UWidgetSwitcher* ButtonWidgetSwitcher; // 0x3e8(0x08)
	struct UOverlay* BuySkinButton; // 0x3f0(0x08)
	struct UOverlay* BuySkinButtonCenter; // 0x3f8(0x08)
	struct UAresWidgetSwitcher* ChromaAndLevelSelectionSwitcher; // 0x400(0x08)
	struct USizeBox* ChromaAndLevelSelectorSizeBox; // 0x408(0x08)
	struct UImage* Image_315; // 0x410(0x08)
	struct UTextBlock* ItemName; // 0x418(0x08)
	struct UOverlay* ItemNotAvailableOverlay; // 0x420(0x08)
	struct UWidgetSwitcher* ItemStatusWidgetSwitcher; // 0x428(0x08)
	struct UOverlay* LockedPurchaseOverlay; // 0x430(0x08)
	struct UMenuOrnament_C* MenuOrnament; // 0x438(0x08)
	struct UOverlay* NonPreviewElementOverlay; // 0x440(0x08)
	struct UOverlay* OwnedLabel; // 0x448(0x08)
	struct UPurchaseButtonV2_C* PurchaseButtonV2; // 0x450(0x08)
	struct UPurchaseButtonV2_C* PurchaseButtonV2Center; // 0x458(0x08)
	struct UReward_C* Reward; // 0x460(0x08)
	struct USharedBlurBg_C* SharedBlurBg; // 0x468(0x08)
	struct USharedBlurBg_C* SharedBlurBg_2; // 0x470(0x08)
	struct UTierIcon_C* TierIcon; // 0x478(0x08)
	struct USizeBox* TierIcon_SizeBox; // 0x480(0x08)
	struct UWBP_Panel_ChromaAndSkinLevelSelector_C* WBP_Panel_ChromaAndSkinLevelSelector; // 0x488(0x08)
	struct UWeaponDetailsChromas_C* WeaponDetailsChromas; // 0x490(0x08)
	struct UWeaponDetailsSkinLevels_C* WeaponDetailsLevels; // 0x498(0x08)
	bool ModelViewerPressed; // 0x4a0(0x01)
	char pad_4A1[0x7]; // 0x4a1(0x07)
	double CurrentOpacity; // 0x4a8(0x08)
	bool UseCenterPurchaseButton; // 0x4b0(0x01)
	char pad_4B1[0x7]; // 0x4b1(0x07)
	struct FText DiscountPercentText; // 0x4b8(0x18)
	bool IndividualPurchaseDisabled; // 0x4d0(0x01)

	void SetupVariableConstructs(struct UWeaponDetailsChromas_C* WeaponDetailsChromas_Base, struct UWeaponDetailsSkinLevels_C* WeaponDetailsLevels_Base, struct UReward_C* Reward_Base, struct UOverlay* NonPreviewElementalOverlay_Base, struct UWBP_Panel_ChromaAndSkinLevelSelector_C* SkinLevelAndChromaSelectorBase); // Function ItemDetailsPaneV2.ItemDetailsPaneV2_C.SetupVariableConstructs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DisplayItemPurchaseInModal(); // Function ItemDetailsPaneV2.ItemDetailsPaneV2_C.DisplayItemPurchaseInModal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateDisplayForReward(struct UBaseHandle* Reward Handle, int32_t Amount); // Function ItemDetailsPaneV2.ItemDetailsPaneV2_C.UpdateDisplayForReward // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetTelemetryTargets(bool SendTelemetry, struct FString TelemetryActionTarget); // Function ItemDetailsPaneV2.ItemDetailsPaneV2_C.SetTelemetryTargets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetWidgetsBasedOnOwned(bool IsOwned); // Function ItemDetailsPaneV2.ItemDetailsPaneV2_C.SetWidgetsBasedOnOwned // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetItem(struct UStoreOffer* Offer, struct UBonusStoreOfferViewModel* BonusOffer); // Function ItemDetailsPaneV2.ItemDetailsPaneV2_C.SetItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetActivePurchaseButton(); // Function ItemDetailsPaneV2.ItemDetailsPaneV2_C.SetActivePurchaseButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function ItemDetailsPaneV2.ItemDetailsPaneV2_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__PurchaseButtonV2_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(); // Function ItemDetailsPaneV2.ItemDetailsPaneV2_C.BndEvt__PurchaseButtonV2_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void Model Viewer Pressed(); // Function ItemDetailsPaneV2.ItemDetailsPaneV2_C.Model Viewer Pressed // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Model Viewer Released(); // Function ItemDetailsPaneV2.ItemDetailsPaneV2_C.Model Viewer Released // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function ItemDetailsPaneV2.ItemDetailsPaneV2_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__PurchaseButtonV2Center_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(); // Function ItemDetailsPaneV2.ItemDetailsPaneV2_C.BndEvt__PurchaseButtonV2Center_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WeaponDetailsLevels_K2Node_ComponentBoundEvent_1_OnLevelClicked__DelegateSignature(struct UEquippableSkinLevelHandle* LevelHandle, struct UEquippableSkinChromaHandle* ChromaHandle); // Function ItemDetailsPaneV2.ItemDetailsPaneV2_C.BndEvt__WeaponDetailsLevels_K2Node_ComponentBoundEvent_1_OnLevelClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WeaponDetailsChromas_K2Node_ComponentBoundEvent_4_OnChromaSelected__DelegateSignature(struct UEquippableSkinChromaHandle* Chroma); // Function ItemDetailsPaneV2.ItemDetailsPaneV2_C.BndEvt__WeaponDetailsChromas_K2Node_ComponentBoundEvent_4_OnChromaSelected__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function ItemDetailsPaneV2.ItemDetailsPaneV2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_ItemDetailsPaneV2(int32_t EntryPoint); // Function ItemDetailsPaneV2.ItemDetailsPaneV2_C.ExecuteUbergraph_ItemDetailsPaneV2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

