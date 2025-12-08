// WidgetBlueprintGeneratedClass IndividualStoreItemV2.IndividualStoreItemV2_C
// Size: 0x580 (Inherited: 0x318)
struct UIndividualStoreItemV2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* AccessoryStore_Thumbnail_Hover; // 0x320(0x08)
	struct UWidgetAnimation* AccessoryStore_Thumbnail_Base; // 0x328(0x08)
	struct UWidgetAnimation* SetupThumbnail_Smg; // 0x330(0x08)
	struct UWidgetAnimation* SetupThumbnail_Handgun; // 0x338(0x08)
	struct UWidgetAnimation* SetupThumbnail_Melee; // 0x340(0x08)
	struct UWidgetAnimation* SetupThumbnail_Base; // 0x348(0x08)
	struct UWidgetAnimation* XETierIntro; // 0x350(0x08)
	struct UWidgetAnimation* XETierAnim; // 0x358(0x08)
	struct UWidgetAnimation* hover; // 0x360(0x08)
	struct UScaleBox* AmountBox; // 0x368(0x08)
	struct UCurrencyAmountWidgetMid_C* CurrencyAmountWidgetMid; // 0x370(0x08)
	struct UImage* LargeTierLogo; // 0x378(0x08)
	struct UImage* OwnedIcon; // 0x380(0x08)
	struct UTextBlock* OwnedTextBlock; // 0x388(0x08)
	struct URewardThumbnail_C* RewardShadow; // 0x390(0x08)
	struct URewardThumbnail_C* RewardThumbnail; // 0x398(0x08)
	struct USizeBox* RootSizeBox; // 0x3a0(0x08)
	struct UStoreItemBackground_C* StoreItemBackground; // 0x3a8(0x08)
	struct UStoreItemName_C* StoreItemName; // 0x3b0(0x08)
	struct UTextBlock* Subtitle; // 0x3b8(0x08)
	struct UTelemetryButton* TButton; // 0x3c0(0x08)
	struct UImage* TextBG; // 0x3c8(0x08)
	struct UImage* TextBGDarkener; // 0x3d0(0x08)
	struct UImage* TierBg; // 0x3d8(0x08)
	struct USizeBox* TierIconSizeBox; // 0x3e0(0x08)
	struct UTierIcon_C* TierIconWidget; // 0x3e8(0x08)
	struct UImage* XETierBg; // 0x3f0(0x08)
	struct UImage* XETierEffect; // 0x3f8(0x08)
	struct UStoreOffer* Offer; // 0x400(0x08)
	struct FMulticastInlineDelegate OnItemSelected; // 0x408(0x10)
	struct FMulticastInlineDelegate OnItemHovered; // 0x418(0x10)
	struct FMulticastInlineDelegate OnItemUnhovered; // 0x428(0x10)
	struct UOfferDTO* OfferDTO; // 0x438(0x08)
	bool Clickable; // 0x440(0x01)
	bool hoveranimdirection; // 0x441(0x01)
	bool IsExclusiveSkin; // 0x442(0x01)
	char pad_443[0x5]; // 0x443(0x05)
	struct TMap<struct TSoftClassPtr<UObject>, struct UWidgetAnimation*> RewardToAnimation; // 0x448(0x50)
	struct TSoftClassPtr<UObject> EquippableReference; // 0x498(0x30)
	bool IsPlatformTouch; // 0x4c8(0x01)
	char pad_4C9[0x7]; // 0x4c9(0x07)
	struct UDailyOffers_Touch_C* DailyOffersScreenTouch; // 0x4d0(0x08)
	enum class EPurchaseSource PurchaseSource; // 0x4d8(0x01)
	char pad_4D9[0x7]; // 0x4d9(0x07)
	struct FText SubTitleText; // 0x4e0(0x18)
	struct FWidgetTransform ThumbnailTransform; // 0x4f8(0x38)
	struct FMargin ThumbnailPadding; // 0x530(0x10)
	bool IsTieredContent; // 0x540(0x01)
	char pad_541[0x3]; // 0x541(0x03)
	int32_t WrapTextAt; // 0x544(0x04)
	struct FWidgetTransform ShadowTransform; // 0x548(0x38)

	void SequenceEvent__ENTRYPOINTIndividualStoreItemV2(); // Function IndividualStoreItemV2.IndividualStoreItemV2_C.SequenceEvent__ENTRYPOINTIndividualStoreItemV2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update Configurable Properties(); // Function IndividualStoreItemV2.IndividualStoreItemV2_C.Update Configurable Properties // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetupEquippableThumbnailAnimationTable(); // Function IndividualStoreItemV2.IndividualStoreItemV2_C.SetupEquippableThumbnailAnimationTable // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetExclusiveAnimation(bool Is Owned); // Function IndividualStoreItemV2.IndividualStoreItemV2_C.SetExclusiveAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DisplaySkinlineUI(struct UEquippableSkinHandle* SkinHandle); // Function IndividualStoreItemV2.IndividualStoreItemV2_C.DisplaySkinlineUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent_2(); // Function IndividualStoreItemV2.IndividualStoreItemV2_C.SequenceEvent_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent_1(); // Function IndividualStoreItemV2.IndividualStoreItemV2_C.SequenceEvent_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleRewardLoaded(struct UBaseHandle* Handle, int32_t Amount); // Function IndividualStoreItemV2.IndividualStoreItemV2_C.HandleRewardLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetClickable(bool Clickable); // Function IndividualStoreItemV2.IndividualStoreItemV2_C.SetClickable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetRewardFromOffer(struct UStoreOffer* Offer, struct URewardModel*& Reward); // Function IndividualStoreItemV2.IndividualStoreItemV2_C.GetRewardFromOffer // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnOwnedChanged(); // Function IndividualStoreItemV2.IndividualStoreItemV2_C.OnOwnedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetControlsBasedOnContentOwned(bool IsOwned); // Function IndividualStoreItemV2.IndividualStoreItemV2_C.SetControlsBasedOnContentOwned // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Init(); // Function IndividualStoreItemV2.IndividualStoreItemV2_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function IndividualStoreItemV2.IndividualStoreItemV2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function IndividualStoreItemV2.IndividualStoreItemV2_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function IndividualStoreItemV2.IndividualStoreItemV2_C.BndEvt__TButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function IndividualStoreItemV2.IndividualStoreItemV2_C.BndEvt__TButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function IndividualStoreItemV2.IndividualStoreItemV2_C.BndEvt__TButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void SendTelemetry(); // Function IndividualStoreItemV2.IndividualStoreItemV2_C.SendTelemetry // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_IndividualStoreItemV2(int32_t EntryPoint); // Function IndividualStoreItemV2.IndividualStoreItemV2_C.ExecuteUbergraph_IndividualStoreItemV2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnItemUnhovered__DelegateSignature(); // Function IndividualStoreItemV2.IndividualStoreItemV2_C.OnItemUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnItemHovered__DelegateSignature(); // Function IndividualStoreItemV2.IndividualStoreItemV2_C.OnItemHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnItemSelected__DelegateSignature(struct UStoreOffer* Offer); // Function IndividualStoreItemV2.IndividualStoreItemV2_C.OnItemSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

