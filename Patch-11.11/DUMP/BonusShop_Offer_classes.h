// WidgetBlueprintGeneratedClass BonusShop_Offer.BonusShop_Offer_C
// Size: 0x581 (Inherited: 0x318)
struct UBonusShop_Offer_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* ThanksAnim; // 0x320(0x08)
	struct UWidgetAnimation* RevealThumbnail_Smg; // 0x328(0x08)
	struct UWidgetAnimation* RevealThumbnail_Sniper; // 0x330(0x08)
	struct UWidgetAnimation* RevealThumbnail_Melee; // 0x338(0x08)
	struct UWidgetAnimation* RevealThumbnail_Handgun; // 0x340(0x08)
	struct UWidgetAnimation* ShowOwned; // 0x348(0x08)
	struct UWidgetAnimation* RevealThumbnail_Base; // 0x350(0x08)
	struct UWidgetAnimation* HoverCovered; // 0x358(0x08)
	struct UWidgetAnimation* Intro; // 0x360(0x08)
	struct UWidgetAnimation* Reveal; // 0x368(0x08)
	struct UWidgetAnimation* HoverRevealed; // 0x370(0x08)
	struct UScaleBox* AmountBox_NewCost; // 0x378(0x08)
	struct UScaleBox* AmountBox_OldCost; // 0x380(0x08)
	struct UImage* BackBG; // 0x388(0x08)
	struct UOverlay* BackSide; // 0x390(0x08)
	struct UImage* BlackBG; // 0x398(0x08)
	struct UBonusStoreItemFront01_C* BonusStoreItemFrontAnimationOverlay1; // 0x3a0(0x08)
	struct UBonusStoreItemFront02_C* BonusStoreItemFrontAnimationOverlay2; // 0x3a8(0x08)
	struct UCurrencyAmountWidgetMid_C* CurrencyAmountWidgetMid_NewCost; // 0x3b0(0x08)
	struct UCurrencyAmountWidgetMid_C* CurrencyAmountWidgetMid_OldCost; // 0x3b8(0x08)
	struct UOverlay* Discount; // 0x3c0(0x08)
	struct UTextBlock* DiscountPercentText; // 0x3c8(0x08)
	struct UOverlay* DisplayInfo; // 0x3d0(0x08)
	struct UImage* FrontBG; // 0x3d8(0x08)
	struct UImage* FrontBG_2; // 0x3e0(0x08)
	struct UOverlay* NoItemAvailable; // 0x3e8(0x08)
	struct UImage* OwnedIcon; // 0x3f0(0x08)
	struct UImage* patternFront; // 0x3f8(0x08)
	struct UImage* patternFront_2; // 0x400(0x08)
	struct UImage* patternFront02; // 0x408(0x08)
	struct UImage* RevealVFX01; // 0x410(0x08)
	struct UImage* RevealVFX02; // 0x418(0x08)
	struct URewardThumbnail_C* RewardShadow; // 0x420(0x08)
	struct URewardThumbnail_C* RewardThumbnail; // 0x428(0x08)
	struct UBonusShop_Offer_BG_C* StoreItemBg; // 0x430(0x08)
	struct UStoreItemName_C* StoreItemName; // 0x438(0x08)
	struct UTelemetryButton* TButton; // 0x440(0x08)
	struct UImage* TierBg; // 0x448(0x08)
	struct UTierIcon_C* TierIconWidget; // 0x450(0x08)
	struct UImage* WhiteCover; // 0x458(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x460(0x08)
	struct UImage* XETierBg; // 0x468(0x08)
	struct UBonusStoreOfferViewModel* BonusOffer; // 0x470(0x08)
	struct UStoreOffer* Offer; // 0x478(0x08)
	bool Clickable; // 0x480(0x01)
	bool IsExclusiveSkin; // 0x481(0x01)
	char pad_482[0x6]; // 0x482(0x06)
	struct FMulticastInlineDelegate OnItemHovered; // 0x488(0x10)
	struct FMulticastInlineDelegate OnItemUnhovered; // 0x498(0x10)
	struct FMulticastInlineDelegate OnBonusShopItemClicked; // 0x4a8(0x10)
	struct UMaterialInstanceDynamic* RevealMaterial01; // 0x4b8(0x08)
	struct UStoreViewModelV2* StoreViewModel; // 0x4c0(0x08)
	struct FMulticastInlineDelegate OnBonusShopItemRevealed; // 0x4c8(0x10)
	double IntroDelay; // 0x4d8(0x08)
	struct UMaterialInstanceDynamic* RevealMaterial02; // 0x4e0(0x08)
	struct TMap<struct TSoftClassPtr<UObject>, struct UWidgetAnimation*> RewardToAnimation; // 0x4e8(0x50)
	struct TSoftClassPtr<UObject> EquippableReference; // 0x538(0x30)
	struct UWidgetAnimation* SelectedThumbnailAnimation; // 0x568(0x08)
	bool IsPostRevealed; // 0x570(0x01)
	char pad_571[0x7]; // 0x571(0x07)
	struct UMaterialInstanceDynamic* AdditiveCoreMaterial; // 0x578(0x08)
	bool IsEmptyOffer; // 0x580(0x01)

	void SequenceEvent__ENTRYPOINTBonusShop_Offer_2(); // Function BonusShop_Offer.BonusShop_Offer_C.SequenceEvent__ENTRYPOINTBonusShop_Offer_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent__ENTRYPOINTBonusShop_Offer_1(); // Function BonusShop_Offer.BonusShop_Offer_C.SequenceEvent__ENTRYPOINTBonusShop_Offer_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent__ENTRYPOINTBonusShop_Offer(); // Function BonusShop_Offer.BonusShop_Offer_C.SequenceEvent__ENTRYPOINTBonusShop_Offer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowThanksCard(); // Function BonusShop_Offer.BonusShop_Offer_C.ShowThanksCard // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetupEquippableThumbnailAnimationTable(); // Function BonusShop_Offer.BonusShop_Offer_C.SetupEquippableThumbnailAnimationTable // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetPostRevealVisibility(); // Function BonusShop_Offer.BonusShop_Offer_C.SetPostRevealVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetRewardFromOffer(struct UStoreOffer* StoreOffer, struct URewardModel*& Reward); // Function BonusShop_Offer.BonusShop_Offer_C.GetRewardFromOffer // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DisplaySkinlineUI(struct UEquippableSkinHandle* SkinHandle); // Function BonusShop_Offer.BonusShop_Offer_C.DisplaySkinlineUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnOwnedChanged(); // Function BonusShop_Offer.BonusShop_Offer_C.OnOwnedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetClickable(bool Clickable); // Function BonusShop_Offer.BonusShop_Offer_C.SetClickable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetControlsBasedOnContentOwned(bool IsOwned); // Function BonusShop_Offer.BonusShop_Offer_C.SetControlsBasedOnContentOwned // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleRewardLoaded(struct UBaseHandle* Handle, int32_t Amount); // Function BonusShop_Offer.BonusShop_Offer_C.HandleRewardLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Init(struct UBonusStoreOfferViewModel* BonusOffer); // Function BonusShop_Offer.BonusShop_Offer_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Finished_E2985FE44D363E0FF224468B78D00623(); // Function BonusShop_Offer.BonusShop_Offer_C.Finished_E2985FE44D363E0FF224468B78D00623 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AudioSFXReveal_A(); // Function BonusShop_Offer.BonusShop_Offer_C.AudioSFXReveal_A // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AudioSFXReveal_B(); // Function BonusShop_Offer.BonusShop_Offer_C.AudioSFXReveal_B // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function BonusShop_Offer.BonusShop_Offer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function BonusShop_Offer.BonusShop_Offer_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function BonusShop_Offer.BonusShop_Offer_C.BndEvt__TButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function BonusShop_Offer.BonusShop_Offer_C.BndEvt__TButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function BonusShop_Offer.BonusShop_Offer_C.BndEvt__TButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void AudioEvent(); // Function BonusShop_Offer.BonusShop_Offer_C.AudioEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_BonusShop_Offer(int32_t EntryPoint); // Function BonusShop_Offer.BonusShop_Offer_C.ExecuteUbergraph_BonusShop_Offer // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnBonusShopItemRevealed__DelegateSignature(struct UBonusStoreOfferViewModel* BonusOffer); // Function BonusShop_Offer.BonusShop_Offer_C.OnBonusShopItemRevealed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBonusShopItemClicked__DelegateSignature(struct UBonusStoreOfferViewModel* BonusOffer); // Function BonusShop_Offer.BonusShop_Offer_C.OnBonusShopItemClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnItemUnhovered__DelegateSignature(); // Function BonusShop_Offer.BonusShop_Offer_C.OnItemUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnItemHovered__DelegateSignature(); // Function BonusShop_Offer.BonusShop_Offer_C.OnItemHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

