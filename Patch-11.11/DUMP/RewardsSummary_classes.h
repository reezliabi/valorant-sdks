// WidgetBlueprintGeneratedClass RewardsSummary.RewardsSummary_C
// Size: 0x5c1 (Inherited: 0x318)
struct URewardsSummary_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* LevelUpOutro; // 0x320(0x08)
	struct UWidgetAnimation* RevealIntro; // 0x328(0x08)
	struct UImage* AmbientFX; // 0x330(0x08)
	struct UContractLevelUp_C* ContractLevelUp; // 0x338(0x08)
	struct UCanvasPanel* DynamicContent; // 0x340(0x08)
	struct UFadeoutWidget_C* FadeoutWidget; // 0x348(0x08)
	struct UFavoriteContentButton_C* FavoriteContentButton; // 0x350(0x08)
	struct UGenericCarousel_C* GenericCarousel; // 0x358(0x08)
	struct ULargeModal_C* LargeModal; // 0x360(0x08)
	struct UImage* LB; // 0x368(0x08)
	struct UImage* LB_2; // 0x370(0x08)
	struct UImage* LT; // 0x378(0x08)
	struct UImage* LT_2; // 0x380(0x08)
	struct UImage* PopupBackgroundImage; // 0x388(0x08)
	struct UImage* PopupBackgroundImageEdgeFade; // 0x390(0x08)
	struct UOverlay* PopupContent; // 0x398(0x08)
	struct UImage* PopupCustomBackgroundImage; // 0x3a0(0x08)
	struct UImage* RB; // 0x3a8(0x08)
	struct UImage* RB_2; // 0x3b0(0x08)
	struct URewardEquipButton_C* RewardEquipButton; // 0x3b8(0x08)
	struct URichTextBlock* RewardName; // 0x3c0(0x08)
	struct UReward_C* RewardPreview; // 0x3c8(0x08)
	struct UImage* RT; // 0x3d0(0x08)
	struct UImage* RT_2; // 0x3d8(0x08)
	struct UUniversalHorizontalDivider_C* UniversalHorizontalDivider; // 0x3e0(0x08)
	struct UUniversalModalVignette_C* UniversalModalBG; // 0x3e8(0x08)
	struct USharedButtonMaster_C* ViewCollectionButton; // 0x3f0(0x08)
	struct TArray<struct URewardModel*> RewardModels; // 0x3f8(0x10)
	struct TMap<struct UAresBasePrimaryDataAsset*, int32_t> RewardAmounts; // 0x408(0x50)
	struct UBaseHandle* SelectedHandle; // 0x458(0x08)
	struct FText Title; // 0x460(0x18)
	struct TMap<struct UAresBasePrimaryDataAsset*, struct UBaseHandle*> Handles; // 0x478(0x50)
	int32_t ContractProgressFrom; // 0x4c8(0x04)
	int32_t ContractProgressTo; // 0x4cc(0x04)
	struct UMaterialInstanceDynamic* GlowMaterial; // 0x4d0(0x08)
	struct UMaterialInstanceDynamic* CelebrationMaterial; // 0x4d8(0x08)
	struct UMaterialInstanceDynamic* CelebrationMaterialFront; // 0x4e0(0x08)
	bool UseSkipButton; // 0x4e8(0x01)
	char pad_4E9[0x7]; // 0x4e9(0x07)
	struct FText Subtitle; // 0x4f0(0x18)
	struct TMap<struct UAresBasePrimaryDataAsset*, struct URewardModel*> AssetToRewardModelMapping; // 0x508(0x50)
	struct TMap<struct UAresBasePrimaryDataAsset*, int32_t> RewardModelAmounts; // 0x558(0x50)
	struct UExpressionHandle* SelectedExpressionHandle; // 0x5a8(0x08)
	bool ShouldHideViewCollectionButtonForSprays; // 0x5b0(0x01)
	bool IsRewardsPreview; // 0x5b1(0x01)
	char pad_5B2[0x6]; // 0x5b2(0x06)
	struct UMaterialInstanceDynamic* BackgroundOverlayMaterial; // 0x5b8(0x08)
	bool ShowEdgeFadeWhenApplicable; // 0x5c0(0x01)

	void SequenceEvent__ENTRYPOINTRewardsSummary_1(); // Function RewardsSummary.RewardsSummary_C.SequenceEvent__ENTRYPOINTRewardsSummary_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent__ENTRYPOINTRewardsSummary(); // Function RewardsSummary.RewardsSummary_C.SequenceEvent__ENTRYPOINTRewardsSummary // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void NavigateToExpressionWithUrl(struct FString InUrlString, struct TMap<struct FName, struct FWildcard> InNavParameters); // Function RewardsSummary.RewardsSummary_C.NavigateToExpressionWithUrl // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleViewInCollectionClickedConverged(); // Function RewardsSummary.RewardsSummary_C.HandleViewInCollectionClickedConverged // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleViewInCollectionClickedPreConverged(); // Function RewardsSummary.RewardsSummary_C.HandleViewInCollectionClickedPreConverged // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Handle Expression Screen Closed(); // Function RewardsSummary.RewardsSummary_C.Handle Expression Screen Closed // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleViewInCollectionClicked(); // Function RewardsSummary.RewardsSummary_C.HandleViewInCollectionClicked // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Reward Name(struct UBaseHandle* Reward Handle, int32_t Amount); // Function RewardsSummary.RewardsSummary_C.Set Reward Name // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetEdgeFadeOverlay(struct UBaseHandle* Handle); // Function RewardsSummary.RewardsSummary_C.SetEdgeFadeOverlay // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetCustomBackground(struct UTexture2D* BackgroundImage); // Function RewardsSummary.RewardsSummary_C.SetCustomBackground // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetEquipButton(struct UBaseHandle* BaseHandle); // Function RewardsSummary.RewardsSummary_C.SetEquipButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ResetGunBuddyHandle(); // Function RewardsSummary.RewardsSummary_C.ResetGunBuddyHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetViewCollectionButton(struct UBaseHandle* BaseHandle); // Function RewardsSummary.RewardsSummary_C.SetViewCollectionButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetFavoriteDataAssets(struct UBaseHandle* Object Handle, struct UAresBasePrimaryDataAsset*& Asset, struct UAresBasePrimaryDataAsset*& OptionalAssetBindToOnIsUnlockChanged, bool& IsNotCastable, bool& IsGunBuddy); // Function RewardsSummary.RewardsSummary_C.GetFavoriteDataAssets // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetFavoriteButton(struct UBaseHandle* Object); // Function RewardsSummary.RewardsSummary_C.SetFavoriteButton // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsRewardForDataAssetJuiceContent(struct UAresBasePrimaryDataAsset* BaseDataAsset, bool& IsRewardJuiceContent); // Function RewardsSummary.RewardsSummary_C.IsRewardForDataAssetJuiceContent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddRewardQuantityToAmounts(struct UAresBasePrimaryDataAsset* Data Asset, int32_t Quantity); // Function RewardsSummary.RewardsSummary_C.AddRewardQuantityToAmounts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetSubtitle(struct FText Subtitle); // Function RewardsSummary.RewardsSummary_C.SetSubtitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetMaterials(); // Function RewardsSummary.RewardsSummary_C.SetMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent_1(); // Function RewardsSummary.RewardsSummary_C.SequenceEvent_1 // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetTitle(struct FText NewTitle); // Function RewardsSummary.RewardsSummary_C.SetTitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetNumRewards(int32_t& NumRewards); // Function RewardsSummary.RewardsSummary_C.GetNumRewards // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void AddReward(struct URewardModel* RewardModel); // Function RewardsSummary.RewardsSummary_C.AddReward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnHandlesLoaded(struct FBaseHandles& Handles); // Function RewardsSummary.RewardsSummary_C.OnHandlesLoaded // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitializeRewards(); // Function RewardsSummary.RewardsSummary_C.InitializeRewards // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Finished_A9210EC943C05E437888D4AE2CFADB09(); // Function RewardsSummary.RewardsSummary_C.Finished_A9210EC943C05E437888D4AE2CFADB09 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Finished_D3EA4CF74704A9B22DB76FADB8B5C902(); // Function RewardsSummary.RewardsSummary_C.Finished_D3EA4CF74704A9B22DB76FADB8B5C902 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent_3(); // Function RewardsSummary.RewardsSummary_C.SequenceEvent_3 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent_2(); // Function RewardsSummary.RewardsSummary_C.SequenceEvent_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function RewardsSummary.RewardsSummary_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnItemSelected(struct UObject* Object); // Function RewardsSummary.RewardsSummary_C.OnItemSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function RewardsSummary.RewardsSummary_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnPreviewLoaded(struct UBaseHandle* RewardHandle, int32_t Amount); // Function RewardsSummary.RewardsSummary_C.OnPreviewLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayCharacterUnlockVO(); // Function RewardsSummary.RewardsSummary_C.PlayCharacterUnlockVO // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayIntro(); // Function RewardsSummary.RewardsSummary_C.PlayIntro // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ModelViewerPressed(); // Function RewardsSummary.RewardsSummary_C.ModelViewerPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ModelViewerReleased(); // Function RewardsSummary.RewardsSummary_C.ModelViewerReleased // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__RewardsSummary_GoToCollection_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // Function RewardsSummary.RewardsSummary_C.BndEvt__RewardsSummary_GoToCollection_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_RewardsSummary(int32_t EntryPoint); // Function RewardsSummary.RewardsSummary_C.ExecuteUbergraph_RewardsSummary // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

