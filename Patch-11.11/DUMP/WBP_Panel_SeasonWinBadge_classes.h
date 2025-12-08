// WidgetBlueprintGeneratedClass WBP_Panel_SeasonWinBadge.WBP_Panel_SeasonWinBadge_C
// Size: 0x468 (Inherited: 0x318)
struct UWBP_Panel_SeasonWinBadge_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UOverlay* BadgeContainerOverlay; // 0x320(0x08)
	struct UCompetitiveTierIconSmall_C* CompetitiveTierIconSmall; // 0x328(0x08)
	struct UImage* Image_91; // 0x330(0x08)
	struct UTextBlock* LeaderboardRankText; // 0x338(0x08)
	struct UMenuAnchor* MenuAnchor_392; // 0x340(0x08)
	struct UButton* TooltipButton_1; // 0x348(0x08)
	struct UImage* TriangleBorderImage; // 0x350(0x08)
	struct UVerticalBox* TriangleGridVerticalBox; // 0x358(0x08)
	double TriangleSize; // 0x360(0x08)
	int32_t NumberOfTriangles; // 0x368(0x04)
	char pad_36C[0x4]; // 0x36c(0x04)
	struct TArray<struct USeasonWinTriangle_C*> AllTriangleWidgets; // 0x370(0x10)
	double Spacing; // 0x380(0x08)
	struct FLinearColor EmptyTriangleColor; // 0x388(0x10)
	struct FLinearColor Large; // 0x398(0x10)
	int32_t CurrentTier; // 0x3a8(0x04)
	char pad_3AC[0x4]; // 0x3ac(0x04)
	struct UPlatformPlayer* PlatformPlayer; // 0x3b0(0x08)
	struct FMMRSeasonBadgeInfo SeasonBadgeInfo; // 0x3b8(0x78)
	struct USeasonHandle* SeasonHandle; // 0x430(0x08)
	struct FString Subject; // 0x438(0x10)
	struct UCompetitiveSeasonHandle* CompetitiveSeasonHandle; // 0x448(0x08)
	bool bInitialized; // 0x450(0x01)
	bool bIsBadgeVisible; // 0x451(0x01)
	char pad_452[0x6]; // 0x452(0x06)
	struct FMulticastInlineDelegate OnBadgeVisibilityChanged; // 0x458(0x10)

	void HandleBorderData(struct UActRankBorderHandle* ActBorderHandle); // Function WBP_Panel_SeasonWinBadge.WBP_Panel_SeasonWinBadge_C.HandleBorderData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleGenerateTrianglesWithData(); // Function WBP_Panel_SeasonWinBadge.WBP_Panel_SeasonWinBadge_C.HandleGenerateTrianglesWithData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleGenerateActRank(); // Function WBP_Panel_SeasonWinBadge.WBP_Panel_SeasonWinBadge_C.HandleGenerateActRank // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleCompetitiveSeason(struct UCompetitiveSeasonHandle* CompetitiveSeasonHandle); // Function WBP_Panel_SeasonWinBadge.WBP_Panel_SeasonWinBadge_C.HandleCompetitiveSeason // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleSeasonLoaded(struct USeasonHandle* SeasonHandle); // Function WBP_Panel_SeasonWinBadge.WBP_Panel_SeasonWinBadge_C.HandleSeasonLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetCompetitiveSeason(); // Function WBP_Panel_SeasonWinBadge.WBP_Panel_SeasonWinBadge_C.GetCompetitiveSeason // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetIsBadgeVisible(bool& IsVisibile); // Function WBP_Panel_SeasonWinBadge.WBP_Panel_SeasonWinBadge_C.GetIsBadgeVisible // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetBadgeVisible(bool Visible); // Function WBP_Panel_SeasonWinBadge.WBP_Panel_SeasonWinBadge_C.SetBadgeVisible // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitOneTimeInternal(); // Function WBP_Panel_SeasonWinBadge.WBP_Panel_SeasonWinBadge_C.InitOneTimeInternal // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitOneTime(); // Function WBP_Panel_SeasonWinBadge.WBP_Panel_SeasonWinBadge_C.InitOneTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWidget* OnGetMenuContent_1(); // Function WBP_Panel_SeasonWinBadge.WBP_Panel_SeasonWinBadge_C.OnGetMenuContent_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetSubject(struct FString Subject); // Function WBP_Panel_SeasonWinBadge.WBP_Panel_SeasonWinBadge_C.SetSubject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GenerateTriangles(); // Function WBP_Panel_SeasonWinBadge.WBP_Panel_SeasonWinBadge_C.GenerateTriangles // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetTrianglesWithData(); // Function WBP_Panel_SeasonWinBadge.WBP_Panel_SeasonWinBadge_C.SetTrianglesWithData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_SeasonWinBadge.WBP_Panel_SeasonWinBadge_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Init(struct UPlatformPlayer* PlatformPlayer); // Function WBP_Panel_SeasonWinBadge.WBP_Panel_SeasonWinBadge_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Panel_SeasonWinBadge.WBP_Panel_SeasonWinBadge_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Panel_SeasonWinBadge.WBP_Panel_SeasonWinBadge_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function WBP_Panel_SeasonWinBadge.WBP_Panel_SeasonWinBadge_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function WBP_Panel_SeasonWinBadge.WBP_Panel_SeasonWinBadge_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Panel_SeasonWinBadge(int32_t EntryPoint); // Function WBP_Panel_SeasonWinBadge.WBP_Panel_SeasonWinBadge_C.ExecuteUbergraph_WBP_Panel_SeasonWinBadge // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnBadgeVisibilityChanged__DelegateSignature(bool IsVisible); // Function WBP_Panel_SeasonWinBadge.WBP_Panel_SeasonWinBadge_C.OnBadgeVisibilityChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

