// WidgetBlueprintGeneratedClass ItemDetailsPane_Base.ItemDetailsPane_Base_C
// Size: 0x3d0 (Inherited: 0x318)
struct UItemDetailsPane_Base_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct FMulticastInlineDelegate OnBuyButtonClicked; // 0x320(0x10)
	struct UStoreOffer* Offer; // 0x330(0x08)
	struct UEquippableSkinHandle* CurrentSkin; // 0x338(0x08)
	struct UEquippableSkinChromaHandle* CurrentChroma; // 0x340(0x08)
	enum class EPurchaseSource PurchaseSource; // 0x348(0x01)
	bool CloseParentModalOnPurchaseClosed; // 0x349(0x01)
	bool SendTelemetry; // 0x34a(0x01)
	char pad_34B[0x5]; // 0x34b(0x05)
	struct FString Purchase Button Telemetry Target; // 0x350(0x10)
	struct UMaterialInstanceDynamic* AdditiveMatieral; // 0x360(0x08)
	int32_t DiscountedPrice; // 0x368(0x04)
	char pad_36C[0x4]; // 0x36c(0x04)
	struct UBonusStoreOfferViewModel* BonusOffer; // 0x370(0x08)
	struct FMulticastInlineDelegate OnHidingUI; // 0x378(0x10)
	struct FMulticastInlineDelegate OnUnhidingUI; // 0x388(0x10)
	bool BindDisplayItemPurchaseInModal; // 0x398(0x01)
	char pad_399[0x7]; // 0x399(0x07)
	struct UWeaponDetailsChromas_C* WeaponDetailsChromas_Base; // 0x3a0(0x08)
	struct UReward_C* Reward_Base; // 0x3a8(0x08)
	struct UOverlay* NonPreviewElementalOverlay_Base; // 0x3b0(0x08)
	struct UWeaponDetailsSkinLevels_C* WeaponDetailsLevels_Base; // 0x3b8(0x08)
	bool OfferType; // 0x3c0(0x01)
	char pad_3C1[0x7]; // 0x3c1(0x07)
	struct UWBP_Panel_ChromaAndSkinLevelSelector_C* Skin Level and Chroma Selector Base; // 0x3c8(0x08)

	void OnSkinLevelOrChromaChanged(struct UEquippableSkinChromaHandle* NewChroma, struct UEquippableSkinLevelHandle* NewSkinLevel, int32_t NewSkinLevelIndex); // Function ItemDetailsPane_Base.ItemDetailsPane_Base_C.OnSkinLevelOrChromaChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnWeaponDetailsChromasPopulated(); // Function ItemDetailsPane_Base.ItemDetailsPane_Base_C.OnWeaponDetailsChromasPopulated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnWeaponDetailsChromasClicked(struct UEquippableSkinChromaHandle* Chroma); // Function ItemDetailsPane_Base.ItemDetailsPane_Base_C.OnWeaponDetailsChromasClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnWeaponDetailsLevelClicked(struct UEquippableSkinLevelHandle* LevelHandle, struct UEquippableSkinChromaHandle* ChromaHandle); // Function ItemDetailsPane_Base.ItemDetailsPane_Base_C.OnWeaponDetailsLevelClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool DoesAssetHaveLevels(struct UAresBasePrimaryDataAsset* DataAsset); // Function ItemDetailsPane_Base.ItemDetailsPane_Base_C.DoesAssetHaveLevels // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DisplayItemPurchaseInModal(); // Function ItemDetailsPane_Base.ItemDetailsPane_Base_C.DisplayItemPurchaseInModal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetupVariableConstructs(struct UWeaponDetailsChromas_C* WeaponDetailsChromas_Base, struct UWeaponDetailsSkinLevels_C* WeaponDetailsLevels_Base, struct UReward_C* Reward_Base, struct UOverlay* NonPreviewElementalOverlay_Base, struct UWBP_Panel_ChromaAndSkinLevelSelector_C* SkinLevelAndChromaSelectorBase); // Function ItemDetailsPane_Base.ItemDetailsPane_Base_C.SetupVariableConstructs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleOwnershipChangeBase(); // Function ItemDetailsPane_Base.ItemDetailsPane_Base_C.HandleOwnershipChangeBase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FText Get Gun Skin Name(struct UEquippableSkinHandle* SelectedSkin); // Function ItemDetailsPane_Base.ItemDetailsPane_Base_C.Get Gun Skin Name // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateDisplayForReward(struct UBaseHandle* Reward Handle, int32_t Amount); // Function ItemDetailsPane_Base.ItemDetailsPane_Base_C.UpdateDisplayForReward // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetTelemetryTargets(bool SendTelemetry, struct FString TelemetryActionTarget); // Function ItemDetailsPane_Base.ItemDetailsPane_Base_C.SetTelemetryTargets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPurchaseModalClosed(); // Function ItemDetailsPane_Base.ItemDetailsPane_Base_C.OnPurchaseModalClosed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetWidgetsBasedOnOwned(bool IsOwned); // Function ItemDetailsPane_Base.ItemDetailsPane_Base_C.SetWidgetsBasedOnOwned // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleOwnedChanged(); // Function ItemDetailsPane_Base.ItemDetailsPane_Base_C.HandleOwnedChanged // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetItem(struct UStoreOffer* Offer, struct UBonusStoreOfferViewModel* BonusOffer); // Function ItemDetailsPane_Base.ItemDetailsPane_Base_C.SetItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function ItemDetailsPane_Base.ItemDetailsPane_Base_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function ItemDetailsPane_Base.ItemDetailsPane_Base_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_ItemDetailsPane_Base(int32_t EntryPoint); // Function ItemDetailsPane_Base.ItemDetailsPane_Base_C.ExecuteUbergraph_ItemDetailsPane_Base // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnUnhidingUI__DelegateSignature(); // Function ItemDetailsPane_Base.ItemDetailsPane_Base_C.OnUnhidingUI__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnHidingUI__DelegateSignature(); // Function ItemDetailsPane_Base.ItemDetailsPane_Base_C.OnHidingUI__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBuyButtonClicked__DelegateSignature(); // Function ItemDetailsPane_Base.ItemDetailsPane_Base_C.OnBuyButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

