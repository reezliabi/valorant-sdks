// WidgetBlueprintGeneratedClass Esports_BracketMatchup.Esports_BracketMatchup_C
// Size: 0x4d2 (Inherited: 0x3e0)
struct UEsports_BracketMatchup_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWidgetAnimation* ShortExpandingEntry; // 0x3e8(0x08)
	struct UWidgetAnimation* LiveAnim; // 0x3f0(0x08)
	struct UWidgetAnimation* ExpandingEntry; // 0x3f8(0x08)
	struct UImage* Border_Hover; // 0x400(0x08)
	struct UBracket_Tooltip_Slot_C* Bracket_Tooltip_Slot; // 0x408(0x08)
	struct UImage* CenterRowOnHover; // 0x410(0x08)
	struct UImage* Image; // 0x418(0x08)
	struct UImage* Image_201; // 0x420(0x08)
	struct UImage* IMG_ScheduledTimeBG; // 0x428(0x08)
	struct UImage* IMG_ScheduledTimeBG_Live; // 0x430(0x08)
	struct UImage* IMG_ScheduledTimeBG_Live_Gradient; // 0x438(0x08)
	struct UOverlay* LIVE; // 0x440(0x08)
	struct UVerticalBox* MatchupContainer; // 0x448(0x08)
	struct UOverlay* O_ScheduledTimeWrap; // 0x450(0x08)
	struct USizeBox* SizeBox_1; // 0x458(0x08)
	struct UCommonVisibilitySwitcher* Switcher_Text; // 0x460(0x08)
	struct UEsports_BracketTeamPanel_C* Team0; // 0x468(0x08)
	struct UEsports_BracketTeamPanel_C* Team1; // 0x470(0x08)
	struct UAresTextBlock* Text_GrandFinals; // 0x478(0x08)
	struct UAresCommonText* Text_Live; // 0x480(0x08)
	struct UAresTextBlock* Text_MatchNumber; // 0x488(0x08)
	struct UAresTextBlock* Text_MatchStartTime; // 0x490(0x08)
	struct FText MatchNumText; // 0x498(0x18)
	enum class E_Bracket_Expand_Directions ExpandedDirection; // 0x4b0(0x01)
	char pad_4B1[0x7]; // 0x4b1(0x07)
	struct TScriptInterface<IBracket_ToolTip_Callback_Interface_C> TooltipCallbackInterface; // 0x4b8(0x10)
	struct UEsportsMatchupViewModel* MatchupViewModel; // 0x4c8(0x08)
	bool bIsGrandFinal; // 0x4d0(0x01)
	bool bUseShortExpand; // 0x4d1(0x01)

	void GetExpandedSize(struct FVector2D& Size); // Function Esports_BracketMatchup.Esports_BracketMatchup_C.GetExpandedSize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent__ENTRYPOINTEsports_BracketMatchup_1(); // Function Esports_BracketMatchup.Esports_BracketMatchup_C.SequenceEvent__ENTRYPOINTEsports_BracketMatchup_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent__ENTRYPOINTEsports_BracketMatchup(); // Function Esports_BracketMatchup.Esports_BracketMatchup_C.SequenceEvent__ENTRYPOINTEsports_BracketMatchup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetUseShortExpand(bool bInUseShortExpand); // Function Esports_BracketMatchup.Esports_BracketMatchup_C.SetUseShortExpand // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetupTeams(struct FMatchupTeamViewModelPair TeamViewModelPair, enum class EBracketType BracketType); // Function Esports_BracketMatchup.Esports_BracketMatchup_C.SetupTeams // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetStatus(enum class EEsportsMatchStatus Status); // Function Esports_BracketMatchup.Esports_BracketMatchup_C.SetStatus // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetSubBracketType(enum class EEsportsSubBracketType SubBracketType, bool bIsGrandFinal); // Function Esports_BracketMatchup.Esports_BracketMatchup_C.SetSubBracketType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetStartTime(struct FDateTime StartTime); // Function Esports_BracketMatchup.Esports_BracketMatchup_C.SetStartTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetToolTipWidget(struct UUserWidget*& ToolTipWidget); // Function Esports_BracketMatchup.Esports_BracketMatchup_C.SetToolTipWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function Esports_BracketMatchup.Esports_BracketMatchup_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void FormatStartTime(struct FDateTime StartDate); // Function Esports_BracketMatchup.Esports_BracketMatchup_C.FormatStartTime // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowHideSchedule(bool ShowSchedule); // Function Esports_BracketMatchup.Esports_BracketMatchup_C.ShowHideSchedule // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToUnbindFromViewModel(bool Bind); // Function Esports_BracketMatchup.Esports_BracketMatchup_C.BindToUnbindFromViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitWithViewModel(struct UEsportsMatchupViewModel* InViewModel, enum class EBracketType BracketType); // Function Esports_BracketMatchup.Esports_BracketMatchup_C.InitWithViewModel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SlideRightExpanded(); // Function Esports_BracketMatchup.Esports_BracketMatchup_C.SlideRightExpanded // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SlideLeftCollapsed(); // Function Esports_BracketMatchup.Esports_BracketMatchup_C.SlideLeftCollapsed // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SlideLeftExpaneded(); // Function Esports_BracketMatchup.Esports_BracketMatchup_C.SlideLeftExpaneded // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SlideRightCollapsed(); // Function Esports_BracketMatchup.Esports_BracketMatchup_C.SlideRightCollapsed // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function Esports_BracketMatchup.Esports_BracketMatchup_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function Esports_BracketMatchup.Esports_BracketMatchup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnHide(); // Function Esports_BracketMatchup.Esports_BracketMatchup_C.OnHide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnShow(enum class E_Bracket_Expand_Directions ExpandDirection); // Function Esports_BracketMatchup.Esports_BracketMatchup_C.OnShow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetCallbackInterface(struct TScriptInterface<IBracket_ToolTip_Callback_Interface_C> CallbackInterface); // Function Esports_BracketMatchup.Esports_BracketMatchup_C.SetCallbackInterface // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void K2_BindToViewModel(); // Function Esports_BracketMatchup.Esports_BracketMatchup_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function Esports_BracketMatchup.Esports_BracketMatchup_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function Esports_BracketMatchup.Esports_BracketMatchup_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function Esports_BracketMatchup.Esports_BracketMatchup_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Esports_BracketMatchup(int32_t EntryPoint); // Function Esports_BracketMatchup.Esports_BracketMatchup_C.ExecuteUbergraph_Esports_BracketMatchup // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

