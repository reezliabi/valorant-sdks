// WidgetBlueprintGeneratedClass ContractDetails.ContractDetails_C
// Size: 0x3e0 (Inherited: 0x318)
struct UContractDetails_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* LoadInAnim; // 0x320(0x08)
	struct UContractChapterTabs_C* ContractChapterTabs; // 0x328(0x08)
	struct UContractLevelsV2_C* ContractLevelsV2; // 0x330(0x08)
	struct UDoughAmount_C* DoughAmount; // 0x338(0x08)
	struct UOverlay* HeaderContainer; // 0x340(0x08)
	struct UWidgetSwitcher* LevelAmountSwitcher; // 0x348(0x08)
	struct UCanvasPanel* LoadedCase; // 0x350(0x08)
	struct UCanvasPanel* LoadingCase; // 0x358(0x08)
	struct UWidgetSwitcher* LoadingSwitcher; // 0x360(0x08)
	struct USharedButtonWithPopout_C* PurchaseLevelsWithPopout; // 0x368(0x08)
	struct UContractUpgradeButton_C* PurchasePremium; // 0x370(0x08)
	struct USharedButtonWithPopout_C* RecruitButton; // 0x378(0x08)
	struct URichTextBlock* RewardName; // 0x380(0x08)
	struct UReward_C* RewardPreview; // 0x388(0x08)
	struct UUniversalModalVignette_C* UniversalModalVignette; // 0x390(0x08)
	struct UWidgetSwitcher* UpgradeButtons; // 0x398(0x08)
	struct UWBP_Panel_ChromaAndSkinLevelSelector_C* WBP_Panel_ChromaAndSkinLevelSelector; // 0x3a0(0x08)
	struct UAresTextBlock* XPToGo; // 0x3a8(0x08)
	struct UContractViewModel* ContractViewModel; // 0x3b0(0x08)
	int32_t SelectedLevelIndex; // 0x3b8(0x04)
	bool IsMenuEntry; // 0x3bc(0x01)
	char pad_3BD[0x3]; // 0x3bd(0x03)
	struct UContractDetailsHeaderBase_C* HeaderWidget; // 0x3c0(0x08)
	struct UContractDetailsHeaderBase_C* Header; // 0x3c8(0x08)
	struct UCurrency_RecruitmentToken_DataAsset_C* Recruitment Token Class; // 0x3d0(0x08)
	struct URewardModel* CurrentRewardModel; // 0x3d8(0x08)

	void Update Tooltip Layout(struct UGenericProgressionTooltip_C* ToolTip, bool ShouldCenter); // Function ContractDetails.ContractDetails_C.Update Tooltip Layout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Handle Recruit Button Clicked(); // Function ContractDetails.ContractDetails_C.Handle Recruit Button Clicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleSkinLevelOrChromaChanged(struct UEquippableSkinChromaHandle* NewChroma, struct UEquippableSkinLevelHandle* NewSkinLevel, int32_t NewSkinLevelIndex); // Function ContractDetails.ContractDetails_C.HandleSkinLevelOrChromaChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Handle Character Owned Changed(); // Function ContractDetails.ContractDetails_C.Handle Character Owned Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Get Purchase Levels Button(struct UUnlockButton_C*& Purchase Levels Button); // Function ContractDetails.ContractDetails_C.Get Purchase Levels Button // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Display Button Tooltip(struct USharedButtonWithPopout_C* Button, struct FText Header, struct FText Body, bool ShouldCenter); // Function ContractDetails.ContractDetails_C.Display Button Tooltip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateLevelAmount(); // Function ContractDetails.ContractDetails_C.UpdateLevelAmount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateDough(); // Function ContractDetails.ContractDetails_C.UpdateDough // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Should Show Dough(bool& ShouldShowDough); // Function ContractDetails.ContractDetails_C.Should Show Dough // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UpdateRewardName(struct UBaseHandle* RewardHandle, int32_t Amount); // Function ContractDetails.ContractDetails_C.UpdateRewardName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleContractV2Loaded(struct UContractV2Handle* ContractHandle); // Function ContractDetails.ContractDetails_C.HandleContractV2Loaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleIsPremiumOwnedChanged(bool PremiumOwned); // Function ContractDetails.ContractDetails_C.HandleIsPremiumOwnedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowApplicableUpgradeButton(); // Function ContractDetails.ContractDetails_C.ShowApplicableUpgradeButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleXPRequiredChanged(int32_t NewXPRequired); // Function ContractDetails.ContractDetails_C.HandleXPRequiredChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleOverallProgressChanged(float NewProgress); // Function ContractDetails.ContractDetails_C.HandleOverallProgressChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleXPChanged(int32_t NewXP); // Function ContractDetails.ContractDetails_C.HandleXPChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleIsCompletedChanged(bool NewIsCompleted); // Function ContractDetails.ContractDetails_C.HandleIsCompletedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RefreshUI(); // Function ContractDetails.ContractDetails_C.RefreshUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateXP(); // Function ContractDetails.ContractDetails_C.UpdateXP // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CalculateLevelCost(int32_t ToLevel, int32_t& PurchaseCost); // Function ContractDetails.ContractDetails_C.CalculateLevelCost // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SelectLevel(int32_t Level); // Function ContractDetails.ContractDetails_C.SelectLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateUnlockButton(); // Function ContractDetails.ContractDetails_C.UpdateUnlockButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleRewardLoaded(struct UBaseHandle* RewardHandle, int32_t Amount); // Function ContractDetails.ContractDetails_C.HandleRewardLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Init(struct UContractViewModel* ContractViewModel); // Function ContractDetails.ContractDetails_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ContractChapterTabs_K2Node_ComponentBoundEvent_1_ChapterClicked__DelegateSignature(int32_t ChapterClicked); // Function ContractDetails.ContractDetails_C.BndEvt__ContractChapterTabs_K2Node_ComponentBoundEvent_1_ChapterClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function ContractDetails.ContractDetails_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function ContractDetails.ContractDetails_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void CustomEvent_1(int32_t NewChapter); // Function ContractDetails.ContractDetails_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ContractLevelsV2_K2Node_ComponentBoundEvent_2_OnRewardClicked__DelegateSignature(struct URewardModel* RewardModel, int32_t LevelNumber); // Function ContractDetails.ContractDetails_C.BndEvt__ContractLevelsV2_K2Node_ComponentBoundEvent_2_OnRewardClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void RefreshReward(); // Function ContractDetails.ContractDetails_C.RefreshReward // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_ContractDetails(int32_t EntryPoint); // Function ContractDetails.ContractDetails_C.ExecuteUbergraph_ContractDetails // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

