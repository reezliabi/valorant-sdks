// WidgetBlueprintGeneratedClass WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C
// Size: 0x1ec8 (Inherited: 0x1ae0)
struct UWBP_Panel_StoreIndividualItem_C : UAresClickablePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UWidgetAnimation* DeselectPlaceholder; // 0x1ae8(0x08)
	struct UWidgetAnimation* SelectPlaceholder; // 0x1af0(0x08)
	struct UWidgetAnimation* SetupThumbnail_Smg_NightMarket; // 0x1af8(0x08)
	struct UWidgetAnimation* SetupThumbnail_Handgun_NightMarket; // 0x1b00(0x08)
	struct UWidgetAnimation* SetupThumbnail_Melee_NightMarket; // 0x1b08(0x08)
	struct UWidgetAnimation* SetupThumbnail_Base_NightMarket; // 0x1b10(0x08)
	struct UWidgetAnimation* ReleaseAnim; // 0x1b18(0x08)
	struct UWidgetAnimation* PressAnim; // 0x1b20(0x08)
	struct UWidgetAnimation* Unhover; // 0x1b28(0x08)
	struct UWidgetAnimation* RevealOffer; // 0x1b30(0x08)
	struct UWidgetAnimation* SetupThumbnail_Smg; // 0x1b38(0x08)
	struct UWidgetAnimation* SetupThumbnail_Handgun; // 0x1b40(0x08)
	struct UWidgetAnimation* SetupThumbnail_Base; // 0x1b48(0x08)
	struct UWidgetAnimation* SetupThumbnail_Melee; // 0x1b50(0x08)
	struct UWidgetAnimation* ExclusiveTierAnim; // 0x1b58(0x08)
	struct UWidgetAnimation* hover; // 0x1b60(0x08)
	struct UTextBlock* AdditionalDescription; // 0x1b68(0x08)
	struct UImage* Background_Glow_Intro; // 0x1b70(0x08)
	struct UImage* Background_Glow_Outro; // 0x1b78(0x08)
	struct UImage* CardBack_ExclusiveTierBg; // 0x1b80(0x08)
	struct UWBP_Panel_StoreItemBackground_C* CardBack_ItemBackground; // 0x1b88(0x08)
	struct UImage* CardBack_TierBg; // 0x1b90(0x08)
	struct USizeBox* CardBack_TierIconSizeBox; // 0x1b98(0x08)
	struct UWBP_Panel_ContentTierIcon_C* CardBack_WBP_Panel_ContentTierIcon; // 0x1ba0(0x08)
	struct UImage* CostBackground; // 0x1ba8(0x08)
	struct UBackgroundBlur* CostBackgroundBlur; // 0x1bb0(0x08)
	struct UHorizontalBox* CostHorizontalBox; // 0x1bb8(0x08)
	struct UOverlay* CostOverlay; // 0x1bc0(0x08)
	struct UHorizontalBox* CostRegion; // 0x1bc8(0x08)
	struct UImage* DarkBlueBackground; // 0x1bd0(0x08)
	struct UAresCommonText* DiscountPercent; // 0x1bd8(0x08)
	struct UAresCommonText* DiscountPercent_Gifting; // 0x1be0(0x08)
	struct UImage* ExclusiveTierBg; // 0x1be8(0x08)
	struct UOverlay* HiddenOnlyUsedByNightMarket; // 0x1bf0(0x08)
	struct UWBP_Panel_StoreItemBackground_C* ItemBackground; // 0x1bf8(0x08)
	struct UWBP_Panel_StoreItemPrice_C* ItemPrice; // 0x1c00(0x08)
	struct UImage* LargeTierLogo; // 0x1c08(0x08)
	struct UOverlay* LogoRegion; // 0x1c10(0x08)
	struct UOverlay* O_discountPercentWrap; // 0x1c18(0x08)
	struct UOverlay* O_discountPercentWrap_Gifting; // 0x1c20(0x08)
	struct USizeBox* OuterSizeBox; // 0x1c28(0x08)
	struct UImage* OwnedBgTint; // 0x1c30(0x08)
	struct UImage* PatternIntro; // 0x1c38(0x08)
	struct UImage* PatternOutro; // 0x1c40(0x08)
	struct UOverlay* Revealed; // 0x1c48(0x08)
	struct UWidgetSwitcher* RevealOffer_WidgetSwitcher; // 0x1c50(0x08)
	struct USizeBox* RewardRegion; // 0x1c58(0x08)
	struct UTextBlock* RewardTitle; // 0x1c60(0x08)
	struct UImage* SelectedIcon; // 0x1c68(0x08)
	struct UTextBlock* Subtitle; // 0x1c70(0x08)
	struct UImage* TextBG; // 0x1c78(0x08)
	struct USizeBox* TextSizeBox; // 0x1c80(0x08)
	struct UImage* TierBg; // 0x1c88(0x08)
	struct UVerticalBox* TitleVerticalBox; // 0x1c90(0x08)
	struct UWBP_Panel_RewardThumbnail_Switcher_C* WBP_Panel_RewardThumbnail_Switcher; // 0x1c98(0x08)
	struct TMap<struct TSoftClassPtr<UObject>, struct UWidgetAnimation*> RewardToAnimation; // 0x1ca0(0x50)
	bool bIsExclusiveSkin; // 0x1cf0(0x01)
	bool bIsOwned; // 0x1cf1(0x01)
	bool bExpectContentTier; // 0x1cf2(0x01)
	char pad_1CF3[0x5]; // 0x1cf3(0x05)
	struct UOfferDTO* OfferDTO; // 0x1cf8(0x08)
	bool bIsOfferSeen; // 0x1d00(0x01)
	char pad_1D01[0x7]; // 0x1d01(0x07)
	struct FAresConditionalInputAction ConfirmActionHandle; // 0x1d08(0x28)
	struct UVM_OfferTile_C* VM_OfferTile; // 0x1d30(0x08)
	bool bContentTierViewModelHasValidData; // 0x1d38(0x01)
	bool bRewardViewModelHasValidData; // 0x1d39(0x01)
	char pad_1D3A[0x6]; // 0x1d3a(0x06)
	struct TMap<struct UOfferDTO*, double> OfferToOpacity; // 0x1d40(0x50)
	struct FColor DefaultColorOpacity; // 0x1d90(0x04)
	bool bHasDiscount; // 0x1d94(0x01)
	char pad_1D95[0x3]; // 0x1d95(0x03)
	struct TMap<enum class EOfferDTOType, struct UStoreItemStyle_C*> OfferTypeToStyleSheetMap; // 0x1d98(0x50)
	bool bDisplayContentTierIcon; // 0x1de8(0x01)
	enum class EOfferDTOType OfferTypeDesignTime; // 0x1de9(0x01)
	bool bTempDisableHoverAnim; // 0x1dea(0x01)
	char pad_1DEB[0x5]; // 0x1deb(0x05)
	struct FVector2D CurrencyIconSize; // 0x1df0(0x10)
	struct FMargin CurrencyIconPadding; // 0x1e00(0x10)
	struct FAresConditionalInputAction SelectAction; // 0x1e10(0x28)
	struct UVM_GiftRecipientCandidate_C* VM_GiftRecipientCandidate; // 0x1e38(0x08)
	bool bSelectionAnimationState; // 0x1e40(0x01)
	char pad_1E41[0x7]; // 0x1e41(0x07)
	struct FWidgetTransform TransformNormal; // 0x1e48(0x38)
	struct FWidgetTransform TransformBundle; // 0x1e80(0x38)
	struct FLinearColor DefaultHighlightColor; // 0x1eb8(0x10)

	struct FString GetListItemTelemetryTarget(); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.GetListItemTelemetryTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent__ENTRYPOINTWBP_Panel_StoreIndividualItem(); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.SequenceEvent__ENTRYPOINTWBP_Panel_StoreIndividualItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleIsSelectedGiftOfferChanged(bool IsSelectedGiftOffer); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.HandleIsSelectedGiftOfferChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ToggleGiftOfferVisuals(); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.ToggleGiftOfferVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRecipientIDChanged(struct FString RecipientId); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.OnRecipientIDChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayGiftSelectionAnim(bool Select); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.PlayGiftSelectionAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Rarity Tint(struct FLinearColor RarityColor); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.Rarity Tint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnShouldShowDiscountInformationChanged(bool ShouldShowDiscountInformation); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.OnShouldShowDiscountInformationChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBundleBackgroundImageChanged(struct UTexture2D* BundleBackgroundImage); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.OnBundleBackgroundImageChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateRewardAnimationMapForNightMarket(); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.UpdateRewardAnimationMapForNightMarket // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateStyleFromStyleSheet(enum class EOfferDTOType OfferDTOType); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.UpdateStyleFromStyleSheet // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePressAnimation(bool Press); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.UpdatePressAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetBackgroundOpacity(struct UOfferDTO* OfferDTO); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.SetBackgroundOpacity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnUseFullRewardPreviewBoundsChanged(bool InUseFullBounds); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.OnUseFullRewardPreviewBoundsChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnShouldExpectContentTierIcon(bool InExpectContentTierIcon); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.OnShouldExpectContentTierIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnContentTierHasValidDataChanged(bool ContentTierHasValidData); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.OnContentTierHasValidDataChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRewardHasValidDataChanged(bool RewardHasValidData); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.OnRewardHasValidDataChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateHintBar(struct UOfferDTO* OfferDTO); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.UpdateHintBar // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlatformOfferQuantityChanged(int32_t BaseQuantity, int32_t BonusQuantity); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.OnPlatformOfferQuantityChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlatformOfferCostStringChanged(struct FString CurrentCostString); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.OnPlatformOfferCostStringChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateContentTierState(); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.UpdateContentTierState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleDiscountPercentChanged(int32_t DiscountPercent); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.HandleDiscountPercentChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBattlepassTitleChanged(struct FText BattlepassTitle); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.OnBattlepassTitleChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsOfferSeenChanged(bool IsSeen); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.OnIsOfferSeenChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRewardHandleChanged(struct UBaseHandle* RewardBaseHandle); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.OnRewardHandleChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateReadyState(); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.UpdateReadyState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitViewModels(); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindEvents(bool bBind); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.BindEvents // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update Hover Animation(bool bHover); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.Update Hover Animation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTitleChanged(struct FText Title); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.OnTitleChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSubtitleChanged(struct FText Subtitle); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.OnSubtitleChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCostsChanged(struct TArray<struct FOfferCostWithDiscountInfo>& NewCostList); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.OnCostsChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnHighlightColorChanged(struct FLinearColor& HighlightColor); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.OnHighlightColorChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnContentTierIconChanged(struct UTexture* ContentTierIcon); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.OnContentTierIconChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlaySkinSetupAnimation(struct UEquippableSkinHandle* SkinHandle); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.PlaySkinSetupAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetupRewardToAnimationTable(); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.SetupRewardToAnimationTable // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSkinHandleChanged(struct UEquippableSkinHandle* SkinHandle); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.OnSkinHandleChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsExclusiveSkinChanged(bool IsExclusiveSkin); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.OnIsExclusiveSkinChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateExclusiveAnimation(); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.UpdateExclusiveAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsItemOwnedChanged(bool IsItemOwned); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.OnIsItemOwnedChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HoverAudioEvent(); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.HoverAudioEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnEntryReleased(); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnHovered(); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnUnhovered(); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void K2_BindToViewModel(); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnClicked(); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnTransitionPressed(); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.BP_OnTransitionPressed // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnTransitionReleased(); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.BP_OnTransitionReleased // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnSelected(); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnDeselected(); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Panel_StoreIndividualItem(int32_t EntryPoint); // Function WBP_Panel_StoreIndividualItem.WBP_Panel_StoreIndividualItem_C.ExecuteUbergraph_WBP_Panel_StoreIndividualItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

