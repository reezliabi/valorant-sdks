// WidgetBlueprintGeneratedClass Esports_BracketMatchup_Small.Esports_BracketMatchup_Small_C
// Size: 0x490 (Inherited: 0x3e2)
struct UEsports_BracketMatchup_Small_C : UWBP_BaseBracketMatchup_C {
	char pad_3E2[0x6]; // 0x3e2(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e8(0x08)
	struct UWidgetAnimation* CollapsingEntry; // 0x3f0(0x08)
	struct UWidgetAnimation* ExpandingEntry; // 0x3f8(0x08)
	struct UImage* Border_Live; // 0x400(0x08)
	struct UBracket_Tooltip_Slot_C* Bracket_Tooltip_Slot; // 0x408(0x08)
	struct UImage* IMG_GF_BG; // 0x410(0x08)
	struct UImage* IMG_ScheduledTimeBG; // 0x418(0x08)
	struct USizeBox* LowRow; // 0x420(0x08)
	struct UVerticalBox* MatchupContainer; // 0x428(0x08)
	struct UOverlay* O_GrandFinalRow; // 0x430(0x08)
	struct UOverlay* O_ScheduledTimeWrap; // 0x438(0x08)
	struct USizeBox* SizeBox_1; // 0x440(0x08)
	struct UEsports_BracketTeamPanel_Small_C* Team0; // 0x448(0x08)
	struct UEsports_BracketTeamPanel_Small_C* Team1; // 0x450(0x08)
	struct UAresTextBlock* Text_MatchNumber; // 0x458(0x08)
	struct UAresCommonText* Text_MatchStartTime; // 0x460(0x08)
	struct FText MatchNumText; // 0x468(0x18)
	struct UEsportsMatchupViewModel* MatchupViewModel; // 0x480(0x08)
	struct UEsportsMatchupViewModelV2* MatchupViewModelV2; // 0x488(0x08)

	void OnIsGrandFinal(bool bIsGrandFinal); // Function Esports_BracketMatchup_Small.Esports_BracketMatchup_Small_C.OnIsGrandFinal // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMatchupIDsChanged(struct TArray<struct FString>& MatchTeamIDs); // Function Esports_BracketMatchup_Small.Esports_BracketMatchup_Small_C.OnMatchupIDsChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnStartTimeChanged(struct FDateTime& StartTimeUTC); // Function Esports_BracketMatchup_Small.Esports_BracketMatchup_Small_C.OnStartTimeChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetBracketType(enum class EBracketType InBracketType); // Function Esports_BracketMatchup_Small.Esports_BracketMatchup_Small_C.SetBracketType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetViewModel(struct UAresViewModelBase* InViewModel); // Function Esports_BracketMatchup_Small.Esports_BracketMatchup_Small_C.SetViewModel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetupTeams(struct FMatchupTeamViewModelPair TeamViewModelPair, enum class EBracketType BracketType); // Function Esports_BracketMatchup_Small.Esports_BracketMatchup_Small_C.SetupTeams // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnStatusChanged(enum class EEsportsMatchStatus Status); // Function Esports_BracketMatchup_Small.Esports_BracketMatchup_Small_C.OnStatusChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetSubBracketType(enum class EEsportsSubBracketType SubBracketType, bool bIsGrandFinal); // Function Esports_BracketMatchup_Small.Esports_BracketMatchup_Small_C.SetSubBracketType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetStartTime(struct FDateTime StartTime); // Function Esports_BracketMatchup_Small.Esports_BracketMatchup_Small_C.SetStartTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetToolTipWidget(struct UUserWidget*& ToolTipWidget); // Function Esports_BracketMatchup_Small.Esports_BracketMatchup_Small_C.SetToolTipWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function Esports_BracketMatchup_Small.Esports_BracketMatchup_Small_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void FormatStartTime(struct FDateTime StartDate); // Function Esports_BracketMatchup_Small.Esports_BracketMatchup_Small_C.FormatStartTime // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowHideSchedule(bool ShowSchedule); // Function Esports_BracketMatchup_Small.Esports_BracketMatchup_Small_C.ShowHideSchedule // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToUnbindFromViewModel(bool ShouldBind); // Function Esports_BracketMatchup_Small.Esports_BracketMatchup_Small_C.BindToUnbindFromViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitWithViewModel(struct UEsportsMatchupViewModel* InViewModel, enum class EBracketType BracketType); // Function Esports_BracketMatchup_Small.Esports_BracketMatchup_Small_C.InitWithViewModel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function Esports_BracketMatchup_Small.Esports_BracketMatchup_Small_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void K2_BindToViewModel(); // Function Esports_BracketMatchup_Small.Esports_BracketMatchup_Small_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function Esports_BracketMatchup_Small.Esports_BracketMatchup_Small_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function Esports_BracketMatchup_Small.Esports_BracketMatchup_Small_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function Esports_BracketMatchup_Small.Esports_BracketMatchup_Small_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function Esports_BracketMatchup_Small.Esports_BracketMatchup_Small_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Esports_BracketMatchup_Small(int32_t EntryPoint); // Function Esports_BracketMatchup_Small.Esports_BracketMatchup_Small_C.ExecuteUbergraph_Esports_BracketMatchup_Small // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

