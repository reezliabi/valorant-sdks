// WidgetBlueprintGeneratedClass Esports_Bracket_Overlay.Esports_Bracket_Overlay_C
// Size: 0x590 (Inherited: 0x3e0)
struct UEsports_Bracket_Overlay_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWidgetAnimation* TransitionBracket; // 0x3e8(0x08)
	struct UOverlay* BG_Overlay; // 0x3f0(0x08)
	struct UImage* BracketBodyBorder; // 0x3f8(0x08)
	struct UScaleBox* BracketBuilderBody; // 0x400(0x08)
	struct UWBP_Button_Secondary_C* Btn_ViewBracket; // 0x408(0x08)
	struct UCanvasPanel* Canvas_CellDesigner; // 0x410(0x08)
	struct UAresCommonText* CT_Error; // 0x418(0x08)
	struct UCustomCloseButton_C* CustomCloseButton; // 0x420(0x08)
	struct UWBP_MenuButtonPrimary_C* DEBUG_Button_tooltip; // 0x428(0x08)
	struct UHorizontalBox* DEBUG_HBox; // 0x430(0x08)
	struct UImage* Divider; // 0x438(0x08)
	struct UImage* Divider_2; // 0x440(0x08)
	struct UImage* Divider_3; // 0x448(0x08)
	struct UEsports_Bracket_Builder_C* Esports_Bracket_Builder; // 0x450(0x08)
	struct UEsports_Bracket_RoundRobin_C* Esports_Bracket_RoundRobin; // 0x458(0x08)
	struct UEsports_Bracket_Stage_Selections_C* Esports_Bracket_Stage_Selector; // 0x460(0x08)
	struct UEsports_Loading_C* Esports_Loading; // 0x468(0x08)
	struct UImage* Image; // 0x470(0x08)
	struct UImage* Image_2; // 0x478(0x08)
	struct UImage* Image_5; // 0x480(0x08)
	struct UImage* Image_43; // 0x488(0x08)
	struct UImage* Image_160; // 0x490(0x08)
	struct UImage* Image_167; // 0x498(0x08)
	struct UImage* Image_shadow; // 0x4a0(0x08)
	struct UOverlay* O_BG; // 0x4a8(0x08)
	struct UOverlay* O_Diverder; // 0x4b0(0x08)
	struct UImage* OverlayBG; // 0x4b8(0x08)
	struct UImage* Pattern; // 0x4c0(0x08)
	struct USizeBox* SB_Body; // 0x4c8(0x08)
	struct USizeBox* SB_Header; // 0x4d0(0x08)
	struct UVerticalBox* VB_Body; // 0x4d8(0x08)
	struct UWBP_BracketBuilder_CellDesigner_C* WBP_BracketBuilder_CellDesigner; // 0x4e0(0x08)
	struct UWBP_Panel_EsportsEventTitleCardHorizontal_C* WBP_Panel_EsportsEventTitleCardHorizontal; // 0x4e8(0x08)
	struct UWidgetSwitcher* WS_BracketVisualizers; // 0x4f0(0x08)
	int32_t DEBUG_StandingsRoundNum; // 0x4f8(0x04)
	char pad_4FC[0x4]; // 0x4fc(0x04)
	struct UWBP_Button_BracketGroup_C* SelectedGroupButton; // 0x500(0x08)
	bool IsDataCached; // 0x508(0x01)
	char pad_509[0x7]; // 0x509(0x07)
	struct FMulticastInlineDelegate ShowOverview; // 0x510(0x10)
	struct UEsportsBracketScreenViewModel* BracketScreenViewModel; // 0x520(0x08)
	struct UBracketBuilderAdvancements2024* BracketAdvance2024; // 0x528(0x08)
	struct TArray<struct FTournamentStage> Stages; // 0x530(0x10)
	struct FText ViewLowerText; // 0x540(0x18)
	struct FText ViewUpperText; // 0x558(0x18)
	struct UEsportsBracketScreenViewModelV2* BracketScreenViewModelV2; // 0x570(0x08)
	struct UEsportsValidDataVMHelper* TournamentPlacementVMHelperTopTeam; // 0x578(0x08)
	struct UEsportsValidDataVMHelper* TournamentPlacementVMHelperBottomTeam; // 0x580(0x08)
	struct UEsportsValidDataVMHelper* StagePlacementVMHelper; // 0x588(0x08)

	struct UWidget* BP_GetDesiredFocusTarget(); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void InitWithEventAndSectionID(enum class E2024VCTEvent InEvent, struct FString InSectionID); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.InitWithEventAndSectionID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AdjustConvergedScreen(); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.AdjustConvergedScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ResetToggleAnimation(); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.ResetToggleAnimation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPostBracketBuilding(); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.OnPostBracketBuilding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ApplyBracketErrorState(); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.ApplyBracketErrorState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ApplyBracketLoadingState(); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.ApplyBracketLoadingState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ApplySectionVisibility(); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.ApplySectionVisibility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBracketScreenError(); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.OnBracketScreenError // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnHasValidDataChanged(bool bHasValidData); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.OnHasValidDataChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Tournament Matchup Placement Ready(struct UObject* Data); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.On Tournament Matchup Placement Ready // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ChangeSectionViewModel(struct UAresViewModelBase* InBaseViewModelForSection); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.ChangeSectionViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSectionViewModelChanged(struct UAresViewModelBase* SectionViewModel); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.OnSectionViewModelChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnStagesChanged(struct TArray<struct FTournamentStageV2>& StagesV2); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.OnStagesChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetToggleText(); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.SetToggleText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ToggleLargeCellBracket(); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.ToggleLargeCellBracket // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AssociateViewModelToBracketMatchupID(struct FString MatchupID, enum class EBracketMatchupID BracketMatchupID); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.AssociateViewModelToBracketMatchupID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ChangeSection(struct FString SectionID); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.ChangeSection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Apply2024GameChangersBracketSettings(); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.Apply2024GameChangersBracketSettings // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateEsportsEventViewModel(enum class E2024VCTEvent VCTEvent); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.CreateEsportsEventViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ScopeToGroupBracketOverlay(struct FString SectionID, struct FText PageTitle); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.ScopeToGroupBracketOverlay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitWithSlugAndStandingIndex(struct FString TournamentSlug, int32_t StandingIndex); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.InitWithSlugAndStandingIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void FindStageName(struct FString AdvancesToStageSlug, struct FString& StageName); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.FindStageName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateAdvancements(); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.CreateAdvancements // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetupSwissAdvancementWidget(struct UUserWidget* Widget, struct FString AdvancesToStageSlug, bool IsAdvancing); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.SetupSwissAdvancementWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetupTournamentPlacementWithMatchupVM(struct UUserWidget* InWidget, struct UEsportsMatchupViewModelV2* InMatchupViewModel, enum class E2024VCTEvent InEvent, bool bTopTeam); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.SetupTournamentPlacementWithMatchupVM // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetupTournamentPlacementWidget(struct UUserWidget* Widget, enum class E2024VCTEvent event, struct FString MatchupID, bool TopTeam); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.SetupTournamentPlacementWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetupStagePlacementWidget(struct UUserWidget* Widget, struct FString MatchupID, struct FString AdvancesToStageSlug); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.SetupStagePlacementWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetupSwissSectionBackgroundWidget(struct UUserWidget* Widget, struct FBracketWinLoss& SectionWinLoss); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.SetupSwissSectionBackgroundWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetStages(struct TArray<struct FTournamentStage>& Stages); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.SetStages // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetName(struct FString Name); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.SetName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DEBUG Spawn Test Tooltip(); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.DEBUG Spawn Test Tooltip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateMatchupTooltip(struct UEsports_BracketMatchup_C* MatchupWidget); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.CreateMatchupTooltip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetupMatchupWidget(struct UUserWidget* Widget, struct FString MatchupID); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.SetupMatchupWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToUnbindFromViewModel(bool ShouldBind); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.BindToUnbindFromViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitWithViewModel(struct UEsportsBracketScreenViewModel* ViewModel); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.InitWithViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitWithEvent(enum class E2024VCTEvent InEvent); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.InitWithEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Esports_Bracket_Overlay_DEBUG_Button_tooltip_K2Node_ComponentBoundEvent_5_OnUniversalButtonVoidEvent__DelegateSignature(); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.BndEvt__Esports_Bracket_Overlay_DEBUG_Button_tooltip_K2Node_ComponentBoundEvent_5_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void SectionSelectionMade(struct FString SectionID); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.SectionSelectionMade // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void K2_BindToViewModel(); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Esports_Bracket_Overlay_CustomCloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.BndEvt__Esports_Bracket_Overlay_CustomCloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Esports_Bracket_Overlay_Btn_ToBracket_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.BndEvt__Esports_Bracket_Overlay_Btn_ToBracket_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Esports_Bracket_Overlay(int32_t EntryPoint); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.ExecuteUbergraph_Esports_Bracket_Overlay // (Final|UbergraphFunction) // @ game+0x19be2f0
	void ShowOverview__DelegateSignature(); // Function Esports_Bracket_Overlay.Esports_Bracket_Overlay_C.ShowOverview__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

