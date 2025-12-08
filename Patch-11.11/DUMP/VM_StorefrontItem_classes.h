// BlueprintGeneratedClass VM_StorefrontItem.VM_StorefrontItem_C
// Size: 0x268 (Inherited: 0x90)
struct UVM_StorefrontItem_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct FText BundleName; // 0x98(0x18)
	int32_t BundlePrice; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct UTexture2D* BundleBackgroundImagePurchase; // 0xb8(0x08)
	struct UTexture2D* BundleBackgroundImage; // 0xc0(0x08)
	struct UTexture2D* VerticalPromoImage; // 0xc8(0x08)
	struct FMulticastInlineDelegate onBundleNameChanged; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnBundlePriceChanged; // 0xe0(0x10)
	struct FMulticastInlineDelegate OnBundleBackgroundImageChanged; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnVerticalPromoImageChanged; // 0x100(0x10)
	struct FDateTime BundleOfferExpiryDateTime; // 0x110(0x08)
	struct FMulticastInlineDelegate OnBundleOfferExpiryDateTimeChanged; // 0x118(0x10)
	struct UBundleViewModel* BundleModel; // 0x128(0x08)
	struct FMulticastInlineDelegate OnBundleSubtitleChanged; // 0x130(0x10)
	struct FText BundleSubtitle; // 0x140(0x18)
	struct FMulticastInlineDelegate OnBundleDescriptionChanged; // 0x158(0x10)
	struct FText BundleDescription; // 0x168(0x18)
	struct FMulticastInlineDelegate OnBundleOfferSelected; // 0x180(0x10)
	struct UTexture* LogoIcon; // 0x190(0x08)
	struct FMulticastInlineDelegate OnLogoIconChanged; // 0x198(0x10)
	struct FWidgetTransform LogoIconTransform; // 0x1a8(0x38)
	struct FMulticastInlineDelegate OnLogoIconTransformChanged; // 0x1e0(0x10)
	struct FMulticastInlineDelegate OnBundleBackgroundImagePurchaseChanged; // 0x1f0(0x10)
	bool UseAdditionalContext; // 0x200(0x01)
	char pad_201[0x7]; // 0x201(0x07)
	struct FText BundleExtraDescription; // 0x208(0x18)
	struct FMulticastInlineDelegate OnBundleExtraDescriptionChanged; // 0x220(0x10)
	struct FMulticastInlineDelegate OnUseAdditionalContextChanged; // 0x230(0x10)
	struct FText PromoExtraDescription; // 0x240(0x18)
	struct FMulticastInlineDelegate OnPromoExtraDescriptionChanged; // 0x258(0x10)

	void SetPromoExtraDescription(struct FText InPromoExtraDescription); // Function VM_StorefrontItem.VM_StorefrontItem_C.SetPromoExtraDescription // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetUseAdditionalContext(bool InUseAdditionalContext); // Function VM_StorefrontItem.VM_StorefrontItem_C.SetUseAdditionalContext // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetBundleExtraDescription(struct FText InBundleExtraDescription); // Function VM_StorefrontItem.VM_StorefrontItem_C.SetBundleExtraDescription // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitFromStorefrontItem(struct UStorefrontItemDataAsset* StorefrontItem); // Function VM_StorefrontItem.VM_StorefrontItem_C.InitFromStorefrontItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetLogoIconTransform(struct FWidgetTransform InLogoIconTransform); // Function VM_StorefrontItem.VM_StorefrontItem_C.SetLogoIconTransform // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetLogoIcon(struct UTexture* LogoIcon); // Function VM_StorefrontItem.VM_StorefrontItem_C.SetLogoIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetSelectedBundleOffer(); // Function VM_StorefrontItem.VM_StorefrontItem_C.SetSelectedBundleOffer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitFromBundleObject(struct UBundleViewModel*& InBundleObject); // Function VM_StorefrontItem.VM_StorefrontItem_C.InitFromBundleObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetBundleDescription(struct FText InBundleDescription); // Function VM_StorefrontItem.VM_StorefrontItem_C.SetBundleDescription // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetBundleSubtitle(struct FText InBundleSubtitle); // Function VM_StorefrontItem.VM_StorefrontItem_C.SetBundleSubtitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetBundleImagePurchase(struct UTexture2D* In Bundle Image Purchase); // Function VM_StorefrontItem.VM_StorefrontItem_C.SetBundleImagePurchase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CalculateBundlePrice(); // Function VM_StorefrontItem.VM_StorefrontItem_C.CalculateBundlePrice // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Refresh(); // Function VM_StorefrontItem.VM_StorefrontItem_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnStorefrontItemLoaded(struct UStorefrontItemHandle* StorefrontItemHandle); // Function VM_StorefrontItem.VM_StorefrontItem_C.OnStorefrontItemLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindModelEvents(); // Function VM_StorefrontItem.VM_StorefrontItem_C.BindModelEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetVerticalPromoImage(struct UTexture2D* InVerticalPromoImage); // Function VM_StorefrontItem.VM_StorefrontItem_C.SetVerticalPromoImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetBundleImage(struct UTexture2D* InBundleImage, struct UMaterialInterface* BundleBackgroundMaterial); // Function VM_StorefrontItem.VM_StorefrontItem_C.SetBundleImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetBundlePrice(int32_t InBundlePrice); // Function VM_StorefrontItem.VM_StorefrontItem_C.SetBundlePrice // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetBundleName(struct FText InBundleName); // Function VM_StorefrontItem.VM_StorefrontItem_C.SetBundleName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetBundleOfferExpiryDateTime(struct FDateTime InBundleOfferExpiryDateTime); // Function VM_StorefrontItem.VM_StorefrontItem_C.SetBundleOfferExpiryDateTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnViewModelCreated(); // Function VM_StorefrontItem.VM_StorefrontItem_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void RefreshBroadcast(); // Function VM_StorefrontItem.VM_StorefrontItem_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Reset(); // Function VM_StorefrontItem.VM_StorefrontItem_C.Reset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_VM_StorefrontItem(int32_t EntryPoint); // Function VM_StorefrontItem.VM_StorefrontItem_C.ExecuteUbergraph_VM_StorefrontItem // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnPromoExtraDescriptionChanged__DelegateSignature(struct FText PromoExtraDescription); // Function VM_StorefrontItem.VM_StorefrontItem_C.OnPromoExtraDescriptionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnUseAdditionalContextChanged__DelegateSignature(bool UseAdditionalContext); // Function VM_StorefrontItem.VM_StorefrontItem_C.OnUseAdditionalContextChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBundleExtraDescriptionChanged__DelegateSignature(struct FText BundleExtraDescription); // Function VM_StorefrontItem.VM_StorefrontItem_C.OnBundleExtraDescriptionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnVerticalPromoImageChanged__DelegateSignature(struct UTexture2D* InVerticalPromoImage); // Function VM_StorefrontItem.VM_StorefrontItem_C.OnVerticalPromoImageChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBundleBackgroundImagePurchaseChanged__DelegateSignature(struct UTexture2D* BundleBackgroundImagePurchase); // Function VM_StorefrontItem.VM_StorefrontItem_C.OnBundleBackgroundImagePurchaseChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnLogoIconTransformChanged__DelegateSignature(struct FWidgetTransform InLogoIconTransform); // Function VM_StorefrontItem.VM_StorefrontItem_C.OnLogoIconTransformChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnLogoIconChanged__DelegateSignature(struct UTexture* LogoIcon); // Function VM_StorefrontItem.VM_StorefrontItem_C.OnLogoIconChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBundleOfferSelected__DelegateSignature(struct UBundleViewModel* SelectedBundleOffer); // Function VM_StorefrontItem.VM_StorefrontItem_C.OnBundleOfferSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBundleDescriptionChanged__DelegateSignature(struct FText BundleDescription); // Function VM_StorefrontItem.VM_StorefrontItem_C.OnBundleDescriptionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBundleSubtitleChanged__DelegateSignature(struct FText BundleSubtitle); // Function VM_StorefrontItem.VM_StorefrontItem_C.OnBundleSubtitleChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBundleOfferExpiryDateTimeChanged__DelegateSignature(struct FDateTime BundleOfferExpiryDateTime); // Function VM_StorefrontItem.VM_StorefrontItem_C.OnBundleOfferExpiryDateTimeChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBundleBackgroundImageChanged__DelegateSignature(struct UTexture2D* BundleBackgroundImage, struct UMaterialInterface* BundleBackgroundMaterial); // Function VM_StorefrontItem.VM_StorefrontItem_C.OnBundleBackgroundImageChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBundlePriceChanged__DelegateSignature(int32_t BundlePrice); // Function VM_StorefrontItem.VM_StorefrontItem_C.OnBundlePriceChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBundleNameChanged__DelegateSignature(struct FText BundleName); // Function VM_StorefrontItem.VM_StorefrontItem_C.OnBundleNameChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

