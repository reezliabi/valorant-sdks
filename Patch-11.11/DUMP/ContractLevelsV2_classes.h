// WidgetBlueprintGeneratedClass ContractLevelsV2.ContractLevelsV2_C
// Size: 0x471 (Inherited: 0x318)
struct UContractLevelsV2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* CarouselOverlayLoop; // 0x320(0x08)
	struct UVerticalBox* Bonus; // 0x328(0x08)
	struct UHorizontalBox* BonusRewards; // 0x330(0x08)
	struct UCarouselArrowButtons_C* CarouselArrowButtons; // 0x338(0x08)
	struct UImage* Diamond; // 0x340(0x08)
	struct UHorizontalBox* Levels; // 0x348(0x08)
	struct UTextBlock* MainRewardsTitle; // 0x350(0x08)
	struct UUniversalHorizontalDivider04_C* UniversalHorizontalDivider04; // 0x358(0x08)
	struct FMargin ContractLevelPadding; // 0x360(0x10)
	struct UContractViewModel* ContractViewModel; // 0x370(0x08)
	struct FMulticastInlineDelegate OnRewardClicked; // 0x378(0x10)
	struct UObject* ContractHandle; // 0x388(0x08)
	int32_t SelectedIndex; // 0x390(0x04)
	int32_t SelectedChapterIndex; // 0x394(0x04)
	struct FMulticastInlineDelegate OnChapterChanged; // 0x398(0x10)
	struct TMap<struct UContractReward_C*, int32_t> LevelWidgetToLevelNumber; // 0x3a8(0x50)
	struct TArray<struct UContractReward_C*> VisibleLevelWidgets; // 0x3f8(0x10)
	struct UUserWidget* SelfInputOwner; // 0x408(0x08)
	int32_t XPGain; // 0x410(0x04)
	char pad_414[0x4]; // 0x414(0x04)
	struct FDateTime AnimatingSince; // 0x418(0x08)
	struct FDateTime AnimatingUntil; // 0x420(0x08)
	int32_t XPStart; // 0x428(0x04)
	int32_t XPEnd; // 0x42c(0x04)
	int32_t CurrentVisibleIndex; // 0x430(0x04)
	int32_t MaxLevelForChapter; // 0x434(0x04)
	int32_t CurrentLevelIndex; // 0x438(0x04)
	char pad_43C[0x4]; // 0x43c(0x04)
	struct TArray<struct UProgressBar*> AnimatingContractRewardBars; // 0x440(0x10)
	struct TArray<struct URewardModel*> RewardModels; // 0x450(0x10)
	int32_t StartLevel; // 0x460(0x04)
	int32_t EndLevel; // 0x464(0x04)
	int32_t InitialTotalXP; // 0x468(0x04)
	int32_t InitialLevelXP; // 0x46c(0x04)
	bool bInputEnabled; // 0x470(0x01)

	void SetInputEnabled(bool bEnabled); // Function ContractLevelsV2.ContractLevelsV2_C.SetInputEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetXPGain(int32_t XPGain); // Function ContractLevelsV2.ContractLevelsV2_C.SetXPGain // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set End State(); // Function ContractLevelsV2.ContractLevelsV2_C.Set End State // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StartAnimateProgress(int32_t XPGain); // Function ContractLevelsV2.ContractLevelsV2_C.StartAnimateProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Animate Progress from Lerp(double LerpValue, bool& IsAnimating); // Function ContractLevelsV2.ContractLevelsV2_C.Animate Progress from Lerp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitForDailyRewards(); // Function ContractLevelsV2.ContractLevelsV2_C.InitForDailyRewards // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddRewardWidget(struct UContractReward_C* Widget, struct UHorizontalBox* Container, int32_t LevelNumber); // Function ContractLevelsV2.ContractLevelsV2_C.AddRewardWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void JumpToLevel(int32_t Level); // Function ContractLevelsV2.ContractLevelsV2_C.JumpToLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateSelectedLevel(); // Function ContractLevelsV2.ContractLevelsV2_C.UpdateSelectedLevel // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SelectDisplayedReward(int32_t Index); // Function ContractLevelsV2.ContractLevelsV2_C.SelectDisplayedReward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void JumpToChapter(int32_t ChapterIndex); // Function ContractLevelsV2.ContractLevelsV2_C.JumpToChapter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleRewardClicked(struct URewardModel* RewardModel, int32_t LevelIndex, struct UContractReward_C* ContractLevel); // Function ContractLevelsV2.ContractLevelsV2_C.HandleRewardClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateLevelWidgets(int32_t ChapterIndex); // Function ContractLevelsV2.ContractLevelsV2_C.CreateLevelWidgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Init(struct UContractViewModel* Contract); // Function ContractLevelsV2.ContractLevelsV2_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function ContractLevelsV2.ContractLevelsV2_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__CarouselArrowButtons_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(int32_t Direction); // Function ContractLevelsV2.ContractLevelsV2_C.BndEvt__CarouselArrowButtons_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function ContractLevelsV2.ContractLevelsV2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ScrollLeft(); // Function ContractLevelsV2.ContractLevelsV2_C.ScrollLeft // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ScrollRight(); // Function ContractLevelsV2.ContractLevelsV2_C.ScrollRight // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function ContractLevelsV2.ContractLevelsV2_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_ContractLevelsV2(int32_t EntryPoint); // Function ContractLevelsV2.ContractLevelsV2_C.ExecuteUbergraph_ContractLevelsV2 // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnChapterChanged__DelegateSignature(int32_t NewChapter); // Function ContractLevelsV2.ContractLevelsV2_C.OnChapterChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRewardClicked__DelegateSignature(struct URewardModel* RewardModel, int32_t LevelNumber); // Function ContractLevelsV2.ContractLevelsV2_C.OnRewardClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

