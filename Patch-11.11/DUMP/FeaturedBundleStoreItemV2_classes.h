// WidgetBlueprintGeneratedClass FeaturedBundleStoreItemV2.FeaturedBundleStoreItemV2_C
// Size: 0x441 (Inherited: 0x318)
struct UFeaturedBundleStoreItemV2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* RestoreFadeout; // 0x320(0x08)
	struct UWidgetAnimation* FadeOut; // 0x328(0x08)
	struct UWidgetAnimation* Intro; // 0x330(0x08)
	struct UWidgetAnimation* hover; // 0x338(0x08)
	struct UImage* Background; // 0x340(0x08)
	struct UBackgroundBlur* BackgroundBlur_55; // 0x348(0x08)
	struct UStoreCountdownTimer_C* BundleOffersTimer; // 0x350(0x08)
	struct UWidgetSwitcher* ButtonStateSwitcher; // 0x358(0x08)
	struct UTextBlock* ExtraDescriptionTextWidget; // 0x360(0x08)
	struct UTelemetryButton* FeaturedButton; // 0x368(0x08)
	struct UOverlay* FeaturedImageOverlay; // 0x370(0x08)
	struct UImage* FeaturedImages; // 0x378(0x08)
	struct UImage* FeaturedImagesAdd; // 0x380(0x08)
	struct UOverlay* FeaturedItemNotAvailable; // 0x388(0x08)
	struct UImage* LeftLine; // 0x390(0x08)
	struct UImage* LeftLine_2; // 0x398(0x08)
	struct UImage* NoFeaturedImage; // 0x3a0(0x08)
	struct UImage* OwnedIcon; // 0x3a8(0x08)
	struct UPurchaseButtonV2_C* PurchaseAllButton; // 0x3b0(0x08)
	struct UTextBlock* SubtitleTextWidget; // 0x3b8(0x08)
	struct UTextBlock* TextBlock_161; // 0x3c0(0x08)
	struct UTextBlock* TitleTextWidget; // 0x3c8(0x08)
	struct UWBP_Panel_GiftOfferButton_C* WBP_Panel_GiftOfferButton; // 0x3d0(0x08)
	struct FMulticastInlineDelegate OnBundleItemClicked; // 0x3d8(0x10)
	struct UBundleViewModel* FeaturedBundle; // 0x3e8(0x08)
	bool AreSkinsLoaded; // 0x3f0(0x01)
	char pad_3F1[0x7]; // 0x3f1(0x07)
	struct UPurchaseModal* PurchaseModal; // 0x3f8(0x08)
	struct UMaterialInstanceDynamic* FeaturedDynamicCrop; // 0x400(0x08)
	struct UMaterialInstanceDynamic* FeaturedDynamicAdditive; // 0x408(0x08)
	struct FMulticastInlineDelegate OnFadeoutBundleComplete; // 0x410(0x10)
	struct FMulticastInlineDelegate OnUndoFadeoutBundleComplete; // 0x420(0x10)
	bool PlayingTransition; // 0x430(0x01)
	char pad_431[0x7]; // 0x431(0x07)
	struct UUserWidget* BundleDetailsWidgetClass; // 0x438(0x08)
	bool IsPlatformTouch; // 0x440(0x01)

	void Init and Show Giftable Button(); // Function FeaturedBundleStoreItemV2.FeaturedBundleStoreItemV2_C.Init and Show Giftable Button // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PauseBundleTimerUntilClosed(struct UMenuStackEntry* MenuStackEntry); // Function FeaturedBundleStoreItemV2.FeaturedBundleStoreItemV2_C.PauseBundleTimerUntilClosed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsEsportsCTABundle(bool& IsEsportsCTABundle); // Function FeaturedBundleStoreItemV2.FeaturedBundleStoreItemV2_C.IsEsportsCTABundle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void RedirectToEsportsIfCTABundle(bool& Redirected to ESports); // Function FeaturedBundleStoreItemV2.FeaturedBundleStoreItemV2_C.RedirectToEsportsIfCTABundle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BroadcastBundleViewerClosed(); // Function FeaturedBundleStoreItemV2.FeaturedBundleStoreItemV2_C.BroadcastBundleViewerClosed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BroadcastBundleViewerOpened(); // Function FeaturedBundleStoreItemV2.FeaturedBundleStoreItemV2_C.BroadcastBundleViewerOpened // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OffsetTranslationForLoc(); // Function FeaturedBundleStoreItemV2.FeaturedBundleStoreItemV2_C.OffsetTranslationForLoc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateBundleTimerFromModel(); // Function FeaturedBundleStoreItemV2.FeaturedBundleStoreItemV2_C.UpdateBundleTimerFromModel // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateBundleOffersTimer(struct FDateTime New Expiration Time); // Function FeaturedBundleStoreItemV2.FeaturedBundleStoreItemV2_C.UpdateBundleOffersTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Calculate Bundle Price(); // Function FeaturedBundleStoreItemV2.FeaturedBundleStoreItemV2_C.Calculate Bundle Price // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AreAllSkinsOwned(); // Function FeaturedBundleStoreItemV2.FeaturedBundleStoreItemV2_C.AreAllSkinsOwned // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetWidgetBasedOnAllContentOwned(bool AreAllSkinsOwned); // Function FeaturedBundleStoreItemV2.FeaturedBundleStoreItemV2_C.SetWidgetBasedOnAllContentOwned // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetBundle(struct UBundleViewModel* BundleToFeature); // Function FeaturedBundleStoreItemV2.FeaturedBundleStoreItemV2_C.SetBundle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBundlePopulated(); // Function FeaturedBundleStoreItemV2.FeaturedBundleStoreItemV2_C.OnBundlePopulated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnFeaturedBundleLoaded(struct UStorefrontItemHandle* StorefrontItemHandle); // Function FeaturedBundleStoreItemV2.FeaturedBundleStoreItemV2_C.OnFeaturedBundleLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DisplayFeaturedBundleDetails(); // Function FeaturedBundleStoreItemV2.FeaturedBundleStoreItemV2_C.DisplayFeaturedBundleDetails // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsForBundle(struct UBundleViewModel* Bundle, bool& IsForBundle); // Function FeaturedBundleStoreItemV2.FeaturedBundleStoreItemV2_C.IsForBundle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Finished_EFD612AD499731675D6142ADD4505A2D(); // Function FeaturedBundleStoreItemV2.FeaturedBundleStoreItemV2_C.Finished_EFD612AD499731675D6142ADD4505A2D // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Finished_B4D27A2B49DA4730A85C9E839FC4DD09(); // Function FeaturedBundleStoreItemV2.FeaturedBundleStoreItemV2_C.Finished_B4D27A2B49DA4730A85C9E839FC4DD09 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Finished_BCA9C3C3449699BE8C9A3E99DDA78FDE(); // Function FeaturedBundleStoreItemV2.FeaturedBundleStoreItemV2_C.Finished_BCA9C3C3449699BE8C9A3E99DDA78FDE // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__FeaturedButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function FeaturedBundleStoreItemV2.FeaturedBundleStoreItemV2_C.BndEvt__FeaturedButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__FeaturedButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function FeaturedBundleStoreItemV2.FeaturedBundleStoreItemV2_C.BndEvt__FeaturedButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__FeaturedButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function FeaturedBundleStoreItemV2.FeaturedBundleStoreItemV2_C.BndEvt__FeaturedButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__PurchaseAllButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function FeaturedBundleStoreItemV2.FeaturedBundleStoreItemV2_C.BndEvt__PurchaseAllButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function FeaturedBundleStoreItemV2.FeaturedBundleStoreItemV2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function FeaturedBundleStoreItemV2.FeaturedBundleStoreItemV2_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void FadeoutBundle(); // Function FeaturedBundleStoreItemV2.FeaturedBundleStoreItemV2_C.FadeoutBundle // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UndoFadeoutBundle(); // Function FeaturedBundleStoreItemV2.FeaturedBundleStoreItemV2_C.UndoFadeoutBundle // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CancelAndCleanupFadeoutBundle(); // Function FeaturedBundleStoreItemV2.FeaturedBundleStoreItemV2_C.CancelAndCleanupFadeoutBundle // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_FeaturedBundleStoreItemV2(int32_t EntryPoint); // Function FeaturedBundleStoreItemV2.FeaturedBundleStoreItemV2_C.ExecuteUbergraph_FeaturedBundleStoreItemV2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnUndoFadeoutBundleComplete__DelegateSignature(); // Function FeaturedBundleStoreItemV2.FeaturedBundleStoreItemV2_C.OnUndoFadeoutBundleComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnFadeoutBundleComplete__DelegateSignature(); // Function FeaturedBundleStoreItemV2.FeaturedBundleStoreItemV2_C.OnFadeoutBundleComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBundleItemClicked__DelegateSignature(struct UBundleViewModel* SelectedBundle); // Function FeaturedBundleStoreItemV2.FeaturedBundleStoreItemV2_C.OnBundleItemClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

