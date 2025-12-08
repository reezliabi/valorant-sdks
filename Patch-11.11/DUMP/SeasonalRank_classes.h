// WidgetBlueprintGeneratedClass SeasonalRank.SeasonalRank_C
// Size: 0x5d0 (Inherited: 0x318)
struct USeasonalRank_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* AccountLevelWarningText; // 0x320(0x08)
	struct UWidgetSwitcher* ActProgressSwitcher; // 0x328(0x08)
	struct UImage* ActRankTierIcon; // 0x330(0x08)
	struct UTextBlock* ActRankTierNameText; // 0x338(0x08)
	struct UImage* BaseBorderImage; // 0x340(0x08)
	struct UOverlay* BorderLevelOverlay; // 0x348(0x08)
	struct UOverlay* BorderLevelOverlay_2; // 0x350(0x08)
	struct UImage* DarkBackgroundImage; // 0x358(0x08)
	struct UImage* DarkBackgroundImage_2; // 0x360(0x08)
	struct UImage* DarkBackgroundImage_3; // 0x368(0x08)
	struct UTextBlock* DaysRemainingText; // 0x370(0x08)
	struct UGenericTextTooltipContainer_C* DaysRemainingTooltip; // 0x378(0x08)
	struct UOverlay* FrontView; // 0x380(0x08)
	struct UImage* Image_123; // 0x388(0x08)
	struct UOverlay* InactiveOverlay; // 0x390(0x08)
	struct USeasonWinTriangle_C* LargeTriangleBackfill; // 0x398(0x08)
	struct UTextBlock* LevelCurrentText; // 0x3a0(0x08)
	struct UTextBlock* LevelCurrentText2; // 0x3a8(0x08)
	struct UTextBlock* LevelNextText; // 0x3b0(0x08)
	struct UVerticalBox* PlacementsRequired_Wrapper; // 0x3b8(0x08)
	struct UButton* PreviewBadgeButton; // 0x3c0(0x08)
	struct UImage* PreviewBadgeImage; // 0x3c8(0x08)
	struct UTextBlock* PreviewBadgeText; // 0x3d0(0x08)
	struct UHorizontalBox* PreviewBadgeWrapper; // 0x3d8(0x08)
	struct UMenuAnchor* PreviewButtonMenuAnchor; // 0x3e0(0x08)
	struct UProgressBar* ProgressBar; // 0x3e8(0x08)
	struct UVerticalBox* RankBox; // 0x3f0(0x08)
	struct UImage* RankedLockedIcon; // 0x3f8(0x08)
	struct UWidgetSwitcher* RankedLockedSwitcher; // 0x400(0x08)
	struct UTextBlock* TotalQueueWins; // 0x408(0x08)
	struct UTextBlock* TotalWinsNumber; // 0x410(0x08)
	struct UWidgetSwitcher* TotalWinsSwitcher; // 0x418(0x08)
	struct UOverlay* TriangleGridOverlay; // 0x420(0x08)
	struct UVerticalBox* TriangleGridSpireVerticalBox; // 0x428(0x08)
	struct UVerticalBox* TriangleGridVerticalBox; // 0x430(0x08)
	struct UTextBlock* WinsRemaining_Text; // 0x438(0x08)
	struct UOverlay* WinsRemainingWrapper; // 0x440(0x08)
	struct UTextBlock* WinsToGo; // 0x448(0x08)
	struct FProcessedSeasonInfo SeasonInfo; // 0x450(0x98)
	int32_t CurrentRow; // 0x4e8(0x04)
	char pad_4EC[0x4]; // 0x4ec(0x04)
	double TriangleSize; // 0x4f0(0x08)
	struct TArray<struct USeasonWinTriangle_C*> AllTriangleWidgets; // 0x4f8(0x10)
	struct FLinearColor EmptyTriangleColor; // 0x508(0x10)
	bool ShowBorderLevel; // 0x518(0x01)
	char pad_519[0x7]; // 0x519(0x07)
	struct FMulticastInlineDelegate OnSeasonLoaded; // 0x520(0x10)
	double Spacing; // 0x530(0x08)
	struct USeasonHandle* SeasonHandle; // 0x538(0x08)
	struct UActRankBorderHandle* BorderHandle; // 0x540(0x08)
	int32_t MaxTriangles; // 0x548(0x04)
	int32_t NumberOfSpireTriangles; // 0x54c(0x04)
	double SpireTriangleSize; // 0x550(0x08)
	struct TArray<struct USeasonWinTriangle_C*> SpireTriangleWidgets; // 0x558(0x10)
	int32_t TotalGamesNeededForRating; // 0x568(0x04)
	int32_t CurrentSeasonGamesNeededForRating; // 0x56c(0x04)
	struct UCompetitiveSeasonHandle* CompetitiveSeasonHandle; // 0x570(0x08)
	struct TMap<int32_t, struct FLinearColor> TestMap; // 0x578(0x50)
	int32_t LeaderboardPosition; // 0x5c8(0x04)
	int32_t AccountLevelsRemainingForRanked; // 0x5cc(0x04)

	struct UWidget* OnGetMenuContent_1(); // Function SeasonalRank.SeasonalRank_C.OnGetMenuContent_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetActRankTier(int32_t Tier); // Function SeasonalRank.SeasonalRank_C.SetActRankTier // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateSeasonDetails(struct UCompetitiveSeasonDataAsset* CompetitiveSeasonDataAsset); // Function SeasonalRank.SeasonalRank_C.UpdateSeasonDetails // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetTrianglesWithData(struct TArray<struct USeasonWinTriangle_C*>& TriangleWidgets); // Function SeasonalRank.SeasonalRank_C.SetTrianglesWithData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetLevel(struct UTexture2D* BorderTexture); // Function SeasonalRank.SeasonalRank_C.SetLevel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GenerateTriangles(); // Function SeasonalRank.SeasonalRank_C.GenerateTriangles // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function SeasonalRank.SeasonalRank_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function SeasonalRank.SeasonalRank_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Init(struct FProcessedSeasonInfo SeasonInfo, int32_t TotalGamesNeededForRating, int32_t CurrentSeasonGamesNeededForRating, int32_t AccountLevelsRemainingForRanked); // Function SeasonalRank.SeasonalRank_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnActRankBorderData(struct UActRankBorderHandle* ActRankBorderHandle); // Function SeasonalRank.SeasonalRank_C.OnActRankBorderData // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__PreviewBadgeButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function SeasonalRank.SeasonalRank_C.BndEvt__PreviewBadgeButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__PreviewBadgeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function SeasonalRank.SeasonalRank_C.BndEvt__PreviewBadgeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnCompetitiveSeasonLoaded(struct UCompetitiveSeasonHandle* CompetitiveSeasonHandle); // Function SeasonalRank.SeasonalRank_C.OnCompetitiveSeasonLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_SeasonalRank(int32_t EntryPoint); // Function SeasonalRank.SeasonalRank_C.ExecuteUbergraph_SeasonalRank // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnSeasonLoaded__DelegateSignature(); // Function SeasonalRank.SeasonalRank_C.OnSeasonLoaded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

