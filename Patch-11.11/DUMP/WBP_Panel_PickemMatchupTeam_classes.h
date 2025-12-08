// WidgetBlueprintGeneratedClass WBP_Panel_PickemMatchupTeam.WBP_Panel_PickemMatchupTeam_C
// Size: 0x580 (Inherited: 0x3e0)
struct UWBP_Panel_PickemMatchupTeam_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWidgetAnimation* Anim_TeamLogoChange; // 0x3e8(0x08)
	struct UWBP_Button_BasicText_C* BTN_Transparent; // 0x3f0(0x08)
	struct UAresCommonText* CT_LargeTeamCode; // 0x3f8(0x08)
	struct UAresCommonText* CT_SmallTeamCode; // 0x400(0x08)
	struct UAresCommonText* CT_TournamentScore; // 0x408(0x08)
	struct UOverlay* Dots; // 0x410(0x08)
	struct UHorizontalBox* HB_SmallTeamInfo; // 0x418(0x08)
	struct UImage* Image; // 0x420(0x08)
	struct UImage* Image_96; // 0x428(0x08)
	struct UImage* ImageScoreBoxColor; // 0x430(0x08)
	struct UImage* IMG_BG; // 0x438(0x08)
	struct UImage* IMG_BG_HOVERED; // 0x440(0x08)
	struct UImage* IMG_Border; // 0x448(0x08)
	struct UImage* IMG_LargeStarSelected_OutofBox; // 0x450(0x08)
	struct UImage* IMG_StarSelected_InBox; // 0x458(0x08)
	struct UImage* IMG_TeamLogo; // 0x460(0x08)
	struct UOverlay* O_Scoreboxflipbox; // 0x468(0x08)
	struct UOverlay* O_WS_TournamentEntryWrap; // 0x470(0x08)
	struct USizeBox* SB_MainWrap; // 0x478(0x08)
	struct USizeBox* SB_ScoreBox; // 0x480(0x08)
	struct UHorizontalBox* TeamInfoWrapper; // 0x488(0x08)
	struct UHorizontalBox* VB_TeamInfoWrap; // 0x490(0x08)
	struct UWBP_Panel_PickemResultBadge_C* WBP_Panel_LargePickemResultBadge; // 0x498(0x08)
	struct UWBP_Panel_PickemResultBadge_C* WBP_Panel_SmallPickemResultBadge; // 0x4a0(0x08)
	struct UWidgetSwitcher* WS_LargePickemScoreIcon; // 0x4a8(0x08)
	bool isAnimExitPending; // 0x4b0(0x01)
	bool IsHovering; // 0x4b1(0x01)
	char pad_4B2[0x6]; // 0x4b2(0x06)
	struct UTexture* TBDlogo; // 0x4b8(0x08)
	bool isTeamCardAtBottom; // 0x4c0(0x01)
	char pad_4C1[0x7]; // 0x4c1(0x07)
	struct UEsportsMatchupTeamViewModel* TeamViewModel; // 0x4c8(0x08)
	struct UEsportsMatchupViewModel* MatchupViewModel; // 0x4d0(0x08)
	struct UEsportsMatchupPickViewModel* MatchupPickViewModel; // 0x4d8(0x08)
	enum class EBracketType BracketType; // 0x4e0(0x01)
	bool bInteractionEnabled; // 0x4e1(0x01)
	char pad_4E2[0x6]; // 0x4e2(0x06)
	struct FMulticastInlineDelegate OnTeamSelected; // 0x4e8(0x10)
	bool bIsGroupMatchup; // 0x4f8(0x01)
	char pad_4F9[0x3]; // 0x4f9(0x03)
	struct FSlateColor RedTextColor; // 0x4fc(0x14)
	struct FSlateColor WhiteTextColor; // 0x510(0x14)
	struct FSlateColor GreenTextColor; // 0x524(0x14)
	struct FSlateColor GreyTextColor; // 0x538(0x14)
	char pad_54C[0x4]; // 0x54c(0x04)
	struct FString DefaultTeamID; // 0x550(0x10)
	struct FString DefaultTeamCode; // 0x560(0x10)
	bool bShowScores; // 0x570(0x01)
	char pad_571[0x7]; // 0x571(0x07)
	struct UPickemMatchupTeamViewModelV2* PickemTeamViewModelV2; // 0x578(0x08)

	void OnPickTeamCodeChanged(struct FString InPickTeamCode); // Function WBP_Panel_PickemMatchupTeam.WBP_Panel_PickemMatchupTeam_C.OnPickTeamCodeChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CheckInteractionEnabled(bool& bHasInteraction); // Function WBP_Panel_PickemMatchupTeam.WBP_Panel_PickemMatchupTeam_C.CheckInteractionEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DisplayMouseEnter(); // Function WBP_Panel_PickemMatchupTeam.WBP_Panel_PickemMatchupTeam_C.DisplayMouseEnter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPickemMatchupTeamDisplayModeChanged(enum class EEsportsPickemMatchupTeamDisplayMode PickemMatchupTeamDisplayMode); // Function WBP_Panel_PickemMatchupTeam.WBP_Panel_PickemMatchupTeam_C.OnPickemMatchupTeamDisplayModeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StyleSmallTeamInfo(bool bShowSmallTeamInfo, bool bShowBadge, bool bShowStrikethrough, struct FSlateColor TextColor); // Function WBP_Panel_PickemMatchupTeam.WBP_Panel_PickemMatchupTeam_C.StyleSmallTeamInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StylePickResults(struct FString InActualTeamID, struct FString InPickedTeamToWinID, struct FString InIncomingPickTeamID, struct FString InMatchupID, enum class EMatchupTeamStatus InTeamStatus); // Function WBP_Panel_PickemMatchupTeam.WBP_Panel_PickemMatchupTeam_C.StylePickResults // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StyleBracketEntryV2(enum class EMatchupTeamStatus TeamStatus); // Function WBP_Panel_PickemMatchupTeam.WBP_Panel_PickemMatchupTeam_C.StyleBracketEntryV2 // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitWithViewModelV2(struct UPickemMatchupTeamViewModelV2* InPickemTeamViewModel, enum class EBracketType InBracketType); // Function WBP_Panel_PickemMatchupTeam.WBP_Panel_PickemMatchupTeam_C.InitWithViewModelV2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetShowScores(bool bInShowScores); // Function WBP_Panel_PickemMatchupTeam.WBP_Panel_PickemMatchupTeam_C.SetShowScores // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMatchupTeamPickInteractionEnabledChanged(bool bInInteractionEnabled); // Function WBP_Panel_PickemMatchupTeam.WBP_Panel_PickemMatchupTeam_C.OnMatchupTeamPickInteractionEnabledChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DisplayDefault(); // Function WBP_Panel_PickemMatchupTeam.WBP_Panel_PickemMatchupTeam_C.DisplayDefault // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsDefaultTeamID(struct FString TeamID, bool& IsDefault); // Function WBP_Panel_PickemMatchupTeam.WBP_Panel_PickemMatchupTeam_C.IsDefaultTeamID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPickResultChanged(enum class EPickemBracketResult PickResult); // Function WBP_Panel_PickemMatchupTeam.WBP_Panel_PickemMatchupTeam_C.OnPickResultChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetupGroupLayoutDefaultState(); // Function WBP_Panel_PickemMatchupTeam.WBP_Panel_PickemMatchupTeam_C.SetupGroupLayoutDefaultState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIsGroupMatchup(bool bIsGroupMatchup); // Function WBP_Panel_PickemMatchupTeam.WBP_Panel_PickemMatchupTeam_C.SetIsGroupMatchup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ToggleSelected(); // Function WBP_Panel_PickemMatchupTeam.WBP_Panel_PickemMatchupTeam_C.ToggleSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Is Selected(bool bInSelected); // Function WBP_Panel_PickemMatchupTeam.WBP_Panel_PickemMatchupTeam_C.Set Is Selected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StyleBracketEntry(enum class EMatchupTeamState TeamState); // Function WBP_Panel_PickemMatchupTeam.WBP_Panel_PickemMatchupTeam_C.StyleBracketEntry // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMatchupTeamStatusChanged(enum class EMatchupTeamStatus& TeamStatus); // Function WBP_Panel_PickemMatchupTeam.WBP_Panel_PickemMatchupTeam_C.OnMatchupTeamStatusChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMatchupTeamSelectedChanged(bool bIsSelected); // Function WBP_Panel_PickemMatchupTeam.WBP_Panel_PickemMatchupTeam_C.OnMatchupTeamSelectedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMatchupTeamStateChanged(enum class EMatchupTeamState State); // Function WBP_Panel_PickemMatchupTeam.WBP_Panel_PickemMatchupTeam_C.OnMatchupTeamStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMatchupTeamLogoChanged(struct UTexture2D* InTeamLogo); // Function WBP_Panel_PickemMatchupTeam.WBP_Panel_PickemMatchupTeam_C.OnMatchupTeamLogoChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMatchupTeamCodeChanged(struct FString InCode); // Function WBP_Panel_PickemMatchupTeam.WBP_Panel_PickemMatchupTeam_C.OnMatchupTeamCodeChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMatchupTeamGameWinsChanged(int32_t GameWins); // Function WBP_Panel_PickemMatchupTeam.WBP_Panel_PickemMatchupTeam_C.OnMatchupTeamGameWinsChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Style Bottom Team Score(); // Function WBP_Panel_PickemMatchupTeam.WBP_Panel_PickemMatchupTeam_C.Style Bottom Team Score // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StyleBracketEntryElimination(enum class EMatchupTeamState TeamState); // Function WBP_Panel_PickemMatchupTeam.WBP_Panel_PickemMatchupTeam_C.StyleBracketEntryElimination // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Toggle Team Name Visibility(bool Should Show Name); // Function WBP_Panel_PickemMatchupTeam.WBP_Panel_PickemMatchupTeam_C.Toggle Team Name Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToOrUnbindFromViewModel(bool Bind); // Function WBP_Panel_PickemMatchupTeam.WBP_Panel_PickemMatchupTeam_C.BindToOrUnbindFromViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitWithViewModel(struct UEsportsMatchupTeamViewModel* InTeamViewModel, struct UEsportsMatchupViewModel* InMatchupViewModel, struct UEsportsMatchupPickViewModel* InMatchupPickViewModel, enum class EBracketType InBracketType); // Function WBP_Panel_PickemMatchupTeam.WBP_Panel_PickemMatchupTeam_C.InitWithViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_PickemMatchupTeam.WBP_Panel_PickemMatchupTeam_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_Panel_PickemMatchupTeam.WBP_Panel_PickemMatchupTeam_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void K2_BindToViewModel(); // Function WBP_Panel_PickemMatchupTeam.WBP_Panel_PickemMatchupTeam_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function WBP_Panel_PickemMatchupTeam.WBP_Panel_PickemMatchupTeam_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_PickemMatchupTeam_WBP_Button_BasicText_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_PickemMatchupTeam.WBP_Panel_PickemMatchupTeam_C.BndEvt__WBP_Panel_PickemMatchupTeam_WBP_Button_BasicText_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_Panel_PickemMatchupTeam.WBP_Panel_PickemMatchupTeam_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function WBP_Panel_PickemMatchupTeam.WBP_Panel_PickemMatchupTeam_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_PickemMatchupTeam_BTN_Transparent_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_PickemMatchupTeam.WBP_Panel_PickemMatchupTeam_C.BndEvt__WBP_Panel_PickemMatchupTeam_BTN_Transparent_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Panel_PickemMatchupTeam(int32_t EntryPoint); // Function WBP_Panel_PickemMatchupTeam.WBP_Panel_PickemMatchupTeam_C.ExecuteUbergraph_WBP_Panel_PickemMatchupTeam // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnTeamSelected__DelegateSignature(bool bIsSelected); // Function WBP_Panel_PickemMatchupTeam.WBP_Panel_PickemMatchupTeam_C.OnTeamSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

