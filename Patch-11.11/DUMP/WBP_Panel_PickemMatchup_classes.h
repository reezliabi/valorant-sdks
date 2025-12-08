// WidgetBlueprintGeneratedClass WBP_Panel_PickemMatchup.WBP_Panel_PickemMatchup_C
// Size: 0x590 (Inherited: 0x3e2)
struct UWBP_Panel_PickemMatchup_C : UWBP_BaseBracketMatchup_C {
	char pad_3E2[0x6]; // 0x3e2(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e8(0x08)
	struct UWidgetAnimation* OnHover; // 0x3f0(0x08)
	struct UImage* Border_Groups; // 0x3f8(0x08)
	struct UImage* Border_hovered; // 0x400(0x08)
	struct UHorizontalBox* HB_LoserInfo; // 0x408(0x08)
	struct UImage* Image_2; // 0x410(0x08)
	struct UImage* Image_3; // 0x418(0x08)
	struct UImage* IMG_CenterBackground; // 0x420(0x08)
	struct UImage* IMG_CenterBackground_Hovered; // 0x428(0x08)
	struct UVerticalBox* MatchupContainer; // 0x430(0x08)
	struct UOverlay* O_Center; // 0x438(0x08)
	struct UOverlay* Points; // 0x440(0x08)
	struct UScaleBox* ScaleBox_2; // 0x448(0x08)
	struct USizeBox* SizeBox_1; // 0x450(0x08)
	struct UCommonVisibilitySwitcher* Switcher_Text; // 0x458(0x08)
	struct UWBP_Panel_PickemMatchupTeam_C* Team0; // 0x460(0x08)
	struct UWBP_Panel_PickemMatchupTeam_C* Team1; // 0x468(0x08)
	struct UAresTextBlock* Text_Evaluated; // 0x470(0x08)
	struct UAresTextBlock* Text_Loser; // 0x478(0x08)
	struct UAresCommonText* Text_Points; // 0x480(0x08)
	struct UAresTextBlock* Text_VS; // 0x488(0x08)
	struct FText MatchNumText; // 0x490(0x18)
	enum class E_Bracket_Expand_Directions ExpandedDirection; // 0x4a8(0x01)
	char pad_4A9[0x7]; // 0x4a9(0x07)
	struct TScriptInterface<IBracket_ToolTip_Callback_Interface_C> TooltipCallbackInterface; // 0x4b0(0x10)
	struct UEsportsMatchupViewModel* MatchupViewModel; // 0x4c0(0x08)
	bool bIsGrandFinal; // 0x4c8(0x01)
	bool bIsGroupMatchup; // 0x4c9(0x01)
	char pad_4CA[0x2]; // 0x4ca(0x02)
	struct FSlateColor CenterEventColor; // 0x4cc(0x14)
	struct FSlateColor CenterRedColor; // 0x4e0(0x14)
	struct FSlateColor SolidGreenColor; // 0x4f4(0x14)
	struct FSlateColor CenterGoldColor; // 0x508(0x14)
	char pad_51C[0x4]; // 0x51c(0x04)
	struct UEsportsMatchupPickViewModel* MatchupPickViewModel; // 0x520(0x08)
	struct FSlateColor WhiteTextColor; // 0x528(0x14)
	struct FSlateColor BlackTextColor; // 0x53c(0x14)
	struct FSlateColor TransparentGreenColor; // 0x550(0x14)
	bool bShowScores; // 0x564(0x01)
	char pad_565[0x3]; // 0x565(0x03)
	struct UPickemMatchupViewModelV2* PickemBracketMatchupViewModelV2; // 0x568(0x08)
	struct FSlateColor DefaultVsTextColor; // 0x570(0x14)
	char pad_584[0x4]; // 0x584(0x04)
	double WidthOverride; // 0x588(0x08)

	void CREATEDELEGATE_PROXYFUNCTION_1(enum class EPickemBracketResult& PickResult); // Function WBP_Panel_PickemMatchup.WBP_Panel_PickemMatchup_C.CREATEDELEGATE_PROXYFUNCTION_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMatchupTeamViewModelPairChanged(struct FMatchupTeamViewModelPairV2& MatchupTeamViewModelPair); // Function WBP_Panel_PickemMatchup.WBP_Panel_PickemMatchup_C.OnMatchupTeamViewModelPairChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StyleForGameChangersChampionship(); // Function WBP_Panel_PickemMatchup.WBP_Panel_PickemMatchup_C.StyleForGameChangersChampionship // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSubBracketTypeChangedV2(enum class EEsportsSubBracketType& SubBracketType); // Function WBP_Panel_PickemMatchup.WBP_Panel_PickemMatchup_C.OnSubBracketTypeChangedV2 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetDefaultVsTextColor(); // Function WBP_Panel_PickemMatchup.WBP_Panel_PickemMatchup_C.SetDefaultVsTextColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetViewModel(struct UAresViewModelBase* InViewModel); // Function WBP_Panel_PickemMatchup.WBP_Panel_PickemMatchup_C.SetViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetEventStyle(); // Function WBP_Panel_PickemMatchup.WBP_Panel_PickemMatchup_C.SetEventStyle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetShowScore(bool bInShowScore); // Function WBP_Panel_PickemMatchup.WBP_Panel_PickemMatchup_C.SetShowScore // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPointsAwardedChanged(int32_t PointsAwarded); // Function WBP_Panel_PickemMatchup.WBP_Panel_PickemMatchup_C.OnPointsAwardedChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPickResultChanged(enum class EPickemBracketResult PickResult); // Function WBP_Panel_PickemMatchup.WBP_Panel_PickemMatchup_C.OnPickResultChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRoundNumberChanged(int32_t RoundNumber); // Function WBP_Panel_PickemMatchup.WBP_Panel_PickemMatchup_C.OnRoundNumberChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetGroupLoserPlacement(int32_t LoserPlacement); // Function WBP_Panel_PickemMatchup.WBP_Panel_PickemMatchup_C.SetGroupLoserPlacement // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIsGroupMatchup(bool bIsGroupMatchup); // Function WBP_Panel_PickemMatchup.WBP_Panel_PickemMatchup_C.SetIsGroupMatchup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetupTeams(struct FMatchupTeamViewModelPair TeamViewModelPair, enum class EBracketType BracketType); // Function WBP_Panel_PickemMatchup.WBP_Panel_PickemMatchup_C.SetupTeams // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSubBracketTypeChanged(enum class EEsportsSubBracketType SubBracketType, bool bIsGrandFinal); // Function WBP_Panel_PickemMatchup.WBP_Panel_PickemMatchup_C.OnSubBracketTypeChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_Panel_PickemMatchup.WBP_Panel_PickemMatchup_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToUnbindFromViewModel(bool Bind); // Function WBP_Panel_PickemMatchup.WBP_Panel_PickemMatchup_C.BindToUnbindFromViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitWithViewModels(struct UEsportsMatchupViewModel* InMatchupViewModel, struct UEsportsMatchupPickViewModel* InMatchupPickViewModel, enum class EBracketType BracketType); // Function WBP_Panel_PickemMatchup.WBP_Panel_PickemMatchup_C.InitWithViewModels // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_PickemMatchup.WBP_Panel_PickemMatchup_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void K2_BindToViewModel(); // Function WBP_Panel_PickemMatchup.WBP_Panel_PickemMatchup_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function WBP_Panel_PickemMatchup.WBP_Panel_PickemMatchup_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_Panel_PickemMatchup.WBP_Panel_PickemMatchup_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function WBP_Panel_PickemMatchup.WBP_Panel_PickemMatchup_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Panel_PickemMatchup(int32_t EntryPoint); // Function WBP_Panel_PickemMatchup.WBP_Panel_PickemMatchup_C.ExecuteUbergraph_WBP_Panel_PickemMatchup // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

