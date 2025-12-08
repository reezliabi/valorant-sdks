// WidgetBlueprintGeneratedClass CompetitiveTierIconLargeV2.CompetitiveTierIconLargeV2_C
// Size: 0x694 (Inherited: 0x318)
struct UCompetitiveTierIconLargeV2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* DivisionDemotion; // 0x320(0x08)
	struct UWidgetAnimation* TierSwapInstantV2; // 0x328(0x08)
	struct UWidgetAnimation* ShowRankRatingEarned; // 0x330(0x08)
	struct UWidgetAnimation* Demoted; // 0x338(0x08)
	struct UWidgetAnimation* Promoted; // 0x340(0x08)
	struct UImage* AFKPenaltyIcon_2; // 0x348(0x08)
	struct UImage* AFKPenaltyIcon_3; // 0x350(0x08)
	struct UGenericTextTooltipContainer_C* AFKPenaltyTooltip_2; // 0x358(0x08)
	struct UGenericTextTooltipContainer_C* AFKPenaltyTooltip_3; // 0x360(0x08)
	struct UVerticalBox* BeforeTierBox; // 0x368(0x08)
	struct UImage* BeforeTierIcon; // 0x370(0x08)
	struct UTextBlock* BeforeTierNameText; // 0x378(0x08)
	struct UButton* Button_174; // 0x380(0x08)
	struct UCompetitiveTierProgressBar_C* CompetitiveTierProgressBar; // 0x388(0x08)
	struct UDynamicConfigSwitcher_C* DynamicConfigSwitcher; // 0x390(0x08)
	struct UDynamicConfigSwitcher_C* DynamicConfigSwitcher_2; // 0x398(0x08)
	struct UTextBlock* ErrorLoadingText; // 0x3a0(0x08)
	struct UHorizontalBox* HorizontalBox_Refund; // 0x3a8(0x08)
	struct UImage* Image; // 0x3b0(0x08)
	struct UImage* Image_206; // 0x3b8(0x08)
	struct UOverlay* LeaderboardRankRatingEarnedContainer; // 0x3c0(0x08)
	struct UMenuAnchor* MenuAnchor_152; // 0x3c8(0x08)
	struct UOverlay* PerfBonusEarnedContainer; // 0x3d0(0x08)
	struct UOverlay* PerfBonusEarnedContainer_2; // 0x3d8(0x08)
	struct UTextBlock* ProgressDescriptorText; // 0x3e0(0x08)
	struct UTextBlock* ProgressDescriptorText_2; // 0x3e8(0x08)
	struct UTextBlock* ProgressText; // 0x3f0(0x08)
	struct UTextBlock* ProgressText_2; // 0x3f8(0x08)
	struct UHorizontalBox* RankedRatingContainer; // 0x400(0x08)
	struct UWidgetSwitcher* RankedRatingProgressWidgetSwitcher; // 0x408(0x08)
	struct UTextBlock* RankedRatingText; // 0x410(0x08)
	struct USizeableGenericTextTooltipContainer_C* RankedRatingTooltip; // 0x418(0x08)
	struct UOverlay* RankRatingEarnedContainer_2; // 0x420(0x08)
	struct UGenericTextTooltipContainer_C* RankRatingPerformanceBonusTooltip; // 0x428(0x08)
	struct UGenericTextTooltipContainer_C* RankRatingPerformanceBonusTooltip_2; // 0x430(0x08)
	struct UOverlay* RankRatingProgressContainer; // 0x438(0x08)
	struct UWBP_ShieldIcon_C* ShieldIconRankedRating; // 0x440(0x08)
	struct UTextBlock* Text_RefundAmount; // 0x448(0x08)
	struct UTextBlock* TierNameLargeText_2; // 0x450(0x08)
	struct UTextBlock* TierVisibilityRequirementText; // 0x458(0x08)
	struct FCompetitiveTierData TierBeforeData; // 0x460(0x88)
	int32_t RankRatingBefore; // 0x4e8(0x04)
	int32_t RankRatingAfter; // 0x4ec(0x04)
	struct FMulticastInlineDelegate RankCeremonyComplete; // 0x4f0(0x10)
	int32_t MaxProgressAmount; // 0x500(0x04)
	int32_t RankRatingEarned; // 0x504(0x04)
	int32_t LeaderboardPosition; // 0x508(0x04)
	char pad_50C[0x4]; // 0x50c(0x04)
	struct FCompetitiveTierData TierAfterData; // 0x510(0x88)
	struct FMulticastInlineDelegate RankCeremonyPopupClosed; // 0x598(0x10)
	int32_t TotalGamesNeededForRating; // 0x5a8(0x04)
	int32_t CurrentSeasonGamesNeededForRating; // 0x5ac(0x04)
	bool IsAnimating; // 0x5b0(0x01)
	bool IsAnimatingPaused; // 0x5b1(0x01)
	char pad_5B2[0x6]; // 0x5b2(0x06)
	struct FDateTime PauseStartTime; // 0x5b8(0x08)
	int32_t TargetProgressBefore; // 0x5c0(0x04)
	int32_t TargetProgressAfter; // 0x5c4(0x04)
	struct FDateTime AnimatingSince; // 0x5c8(0x08)
	struct FDateTime AnimatingUntil; // 0x5d0(0x08)
	struct FCompetitiveTierData CurrentTierData; // 0x5d8(0x88)
	int32_t RankRatingPerformanceBonus; // 0x660(0x04)
	int32_t AFKPenalty; // 0x664(0x04)
	bool LoveEventEnabled; // 0x668(0x01)
	bool IsRankedEligible; // 0x669(0x01)
	char pad_66A[0x2]; // 0x66a(0x02)
	int32_t AccountLevelsRemainingForRanked; // 0x66c(0x04)
	struct FString Subject; // 0x670(0x10)
	int32_t ActiveRRSwitchIndex; // 0x680(0x04)
	int32_t RankRatingRefund; // 0x684(0x04)
	bool HasRankRefundProgress; // 0x688(0x01)
	char pad_689[0x3]; // 0x689(0x03)
	int32_t CurrentNonrefundRRTicks; // 0x68c(0x04)
	int32_t CurrentAnimatedProgress; // 0x690(0x04)

	void SequenceEvent__ENTRYPOINTCompetitiveTierIconLargeV2_3(); // Function CompetitiveTierIconLargeV2.CompetitiveTierIconLargeV2_C.SequenceEvent__ENTRYPOINTCompetitiveTierIconLargeV2_3 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent__ENTRYPOINTCompetitiveTierIconLargeV2_2(); // Function CompetitiveTierIconLargeV2.CompetitiveTierIconLargeV2_C.SequenceEvent__ENTRYPOINTCompetitiveTierIconLargeV2_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent__ENTRYPOINTCompetitiveTierIconLargeV2_1(); // Function CompetitiveTierIconLargeV2.CompetitiveTierIconLargeV2_C.SequenceEvent__ENTRYPOINTCompetitiveTierIconLargeV2_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent__ENTRYPOINTCompetitiveTierIconLargeV2(); // Function CompetitiveTierIconLargeV2.CompetitiveTierIconLargeV2_C.SequenceEvent__ENTRYPOINTCompetitiveTierIconLargeV2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsAnimatingRank Rating Refund Progress(bool& IsAnimatingRefundProgress); // Function CompetitiveTierIconLargeV2.CompetitiveTierIconLargeV2_C.IsAnimatingRank Rating Refund Progress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void ResetAnimatedRatingTicks(); // Function CompetitiveTierIconLargeV2.CompetitiveTierIconLargeV2_C.ResetAnimatedRatingTicks // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EnableDerankShieldAnimation(); // Function CompetitiveTierIconLargeV2.CompetitiveTierIconLargeV2_C.EnableDerankShieldAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWidget* OnGetMenuContent_2(); // Function CompetitiveTierIconLargeV2.CompetitiveTierIconLargeV2_C.OnGetMenuContent_2 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetNextTierData(struct FCompetitiveTierData StartingTierData, bool Reverse, struct FCompetitiveTierData& NextTierData, int32_t& ProgressToNextTier, int32_t& ProgressFromNextTier); // Function CompetitiveTierIconLargeV2.CompetitiveTierIconLargeV2_C.GetNextTierData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UpdateState(int32_t CurrentProgress, bool IsInitialState); // Function CompetitiveTierIconLargeV2.CompetitiveTierIconLargeV2_C.UpdateState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TickAnimation(); // Function CompetitiveTierIconLargeV2.CompetitiveTierIconLargeV2_C.TickAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Unpause(); // Function CompetitiveTierIconLargeV2.CompetitiveTierIconLargeV2_C.Unpause // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Pause(); // Function CompetitiveTierIconLargeV2.CompetitiveTierIconLargeV2_C.Pause // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BeginAnimate(struct FTimespan Duration); // Function CompetitiveTierIconLargeV2.CompetitiveTierIconLargeV2_C.BeginAnimate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsTierOnLeaderboard(struct FCompetitiveTierData Tier, bool& bool); // Function CompetitiveTierIconLargeV2.CompetitiveTierIconLargeV2_C.IsTierOnLeaderboard // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetRRToolTipText(); // Function CompetitiveTierIconLargeV2.CompetitiveTierIconLargeV2_C.SetRRToolTipText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetRankRatingProgress(int32_t Progress, bool IsInitialState); // Function CompetitiveTierIconLargeV2.CompetitiveTierIconLargeV2_C.SetRankRatingProgress // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetData(int32_t TierBefore, int32_t TierAfter, int32_t RankRatingBefore, int32_t RankRatingAfter, int32_t RankRatingEarned, int32_t RankRatingPerformanceBonus, int32_t RankRatingRefund, int32_t LeaderboardPosition, int32_t TotalGamesNeededForRating, int32_t CurrentSeasonGamesNeededForRating, int32_t AFKPenalty, int32_t AccountLevelsRemainingForRanked, struct FString Subject); // Function CompetitiveTierIconLargeV2.CompetitiveTierIconLargeV2_C.SetData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetStateStatic(struct FCompetitiveTierData TierData, int32_t Progress, bool IsInitialState); // Function CompetitiveTierIconLargeV2.CompetitiveTierIconLargeV2_C.SetStateStatic // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Finished_92CE47F54FDD106674A78BB99C371E14(); // Function CompetitiveTierIconLargeV2.CompetitiveTierIconLargeV2_C.Finished_92CE47F54FDD106674A78BB99C371E14 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceAudioEventDemoted(); // Function CompetitiveTierIconLargeV2.CompetitiveTierIconLargeV2_C.SequenceAudioEventDemoted // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceAudioEventDivisionDemotion(); // Function CompetitiveTierIconLargeV2.CompetitiveTierIconLargeV2_C.SequenceAudioEventDivisionDemotion // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceAudioEventShowRankRatingEarned(); // Function CompetitiveTierIconLargeV2.CompetitiveTierIconLargeV2_C.SequenceAudioEventShowRankRatingEarned // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CompleteCeremony(); // Function CompetitiveTierIconLargeV2.CompetitiveTierIconLargeV2_C.CompleteCeremony // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayPlacement(); // Function CompetitiveTierIconLargeV2.CompetitiveTierIconLargeV2_C.PlayPlacement // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void NewChangeTierEvent(struct FCompetitiveTierData TierBeforeData, struct FCompetitiveTierData TierAfterData); // Function CompetitiveTierIconLargeV2.CompetitiveTierIconLargeV2_C.NewChangeTierEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CustomEvent_1(); // Function CompetitiveTierIconLargeV2.CompetitiveTierIconLargeV2_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void NewCeremonyEvent(struct FCompetitiveTierData TierData, bool IsPlacement); // Function CompetitiveTierIconLargeV2.CompetitiveTierIconLargeV2_C.NewCeremonyEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CustomEvent_4(); // Function CompetitiveTierIconLargeV2.CompetitiveTierIconLargeV2_C.CustomEvent_4 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceAudioEventPromoted(); // Function CompetitiveTierIconLargeV2.CompetitiveTierIconLargeV2_C.SequenceAudioEventPromoted // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayDerankShieldAnimations(); // Function CompetitiveTierIconLargeV2.CompetitiveTierIconLargeV2_C.PlayDerankShieldAnimations // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Button_173_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function CompetitiveTierIconLargeV2.CompetitiveTierIconLargeV2_C.BndEvt__Button_173_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Button_173_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function CompetitiveTierIconLargeV2.CompetitiveTierIconLargeV2_C.BndEvt__Button_173_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Button_173_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function CompetitiveTierIconLargeV2.CompetitiveTierIconLargeV2_C.BndEvt__Button_173_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void InitializeWithAnimation(int32_t TierBefore, int32_t TierAfter, int32_t RankRatingBefore, int32_t RankRatingAfter, int32_t RankRatingEarned, int32_t RankRatingPerformanceBonus, int32_t RankRatingRefund, int32_t LeaderboardPosition, int32_t TotalGamesNeededForRating, int32_t CurrentSeasonGamesNeededForRating, int32_t AFKPenalty, struct FString Subject); // Function CompetitiveTierIconLargeV2.CompetitiveTierIconLargeV2_C.InitializeWithAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitializeStatic(int32_t Tier, int32_t RankRating, int32_t LeaderboardPosition, int32_t TotalGamesNeededForRating, int32_t CurrentSeasonGamesNeededForRating, int32_t AccountLevelsRemainingForRanked, struct FString Subject); // Function CompetitiveTierIconLargeV2.CompetitiveTierIconLargeV2_C.InitializeStatic // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function CompetitiveTierIconLargeV2.CompetitiveTierIconLargeV2_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function CompetitiveTierIconLargeV2.CompetitiveTierIconLargeV2_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_CompetitiveTierIconLargeV2(int32_t EntryPoint); // Function CompetitiveTierIconLargeV2.CompetitiveTierIconLargeV2_C.ExecuteUbergraph_CompetitiveTierIconLargeV2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void RankCeremonyPopupClosed__DelegateSignature(); // Function CompetitiveTierIconLargeV2.CompetitiveTierIconLargeV2_C.RankCeremonyPopupClosed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RankCeremonyComplete__DelegateSignature(); // Function CompetitiveTierIconLargeV2.CompetitiveTierIconLargeV2_C.RankCeremonyComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

