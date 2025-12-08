// WidgetBlueprintGeneratedClass WBP_Panel_Teams_Info_Section.WBP_Panel_Teams_Info_Section_C
// Size: 0x518 (Inherited: 0x3e0)
struct UWBP_Panel_Teams_Info_Section_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWidgetAnimation* RevealTeamInfo; // 0x3e8(0x08)
	struct UAresCommonText* CT_Error; // 0x3f0(0x08)
	struct UAresCommonText* CT_TeamBlurb; // 0x3f8(0x08)
	struct UAresCommonText* CT_TeamLeague; // 0x400(0x08)
	struct UAresCommonText* CT_TeamName; // 0x408(0x08)
	struct UOverlay* Divider; // 0x410(0x08)
	struct UEsports_Loading_C* EsportsLoadingThrobber; // 0x418(0x08)
	struct UImage* Gradient; // 0x420(0x08)
	struct UImage* Image; // 0x428(0x08)
	struct UImage* Image_123; // 0x430(0x08)
	struct UImage* Image_LeagueLogo; // 0x438(0x08)
	struct UImage* IMG_TeamLogo; // 0x440(0x08)
	struct UImage* RedL1; // 0x448(0x08)
	struct UImage* RedL1_2; // 0x450(0x08)
	struct UImage* RedL2; // 0x458(0x08)
	struct UImage* RedL2_2; // 0x460(0x08)
	struct USizeBox* SB_TeamBlurb; // 0x468(0x08)
	struct UVerticalBox* TeamInfoContainer; // 0x470(0x08)
	struct UWBP_Panel_Teams_Roster_Container_C* TeamRosterContainer; // 0x478(0x08)
	struct USizeBox* TeamRosterSizeBox; // 0x480(0x08)
	struct UWidgetSwitcher* WS_TeamRoster; // 0x488(0x08)
	struct UEsportsTeamViewModel* TeamViewModel; // 0x490(0x08)
	struct TArray<None> TeamRoster; // 0x498(0x10)
	bool BlurbsEnabled; // 0x4a8(0x01)
	char pad_4A9[0x7]; // 0x4a9(0x07)
	struct UEsportsTeamViewModelV2* TeamViewModelV2; // 0x4b0(0x08)
	struct FString TeamID; // 0x4b8(0x10)
	struct FSlateColor Americas Color; // 0x4c8(0x14)
	struct FSlateColor EMEA Color; // 0x4dc(0x14)
	struct FSlateColor Pacific Color; // 0x4f0(0x14)
	struct FSlateColor CN Color; // 0x504(0x14)

	void ResetRosterLoadingState(); // Function WBP_Panel_Teams_Info_Section.WBP_Panel_Teams_Info_Section_C.ResetRosterLoadingState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTeamMemberError(); // Function WBP_Panel_Teams_Info_Section.WBP_Panel_Teams_Info_Section_C.OnTeamMemberError // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTeamMembersLoadingChanged(bool bLoadingCompleted); // Function WBP_Panel_Teams_Info_Section.WBP_Panel_Teams_Info_Section_C.OnTeamMembersLoadingChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTeamNameUpdatedV2(struct FString UpdatedTeamName); // Function WBP_Panel_Teams_Info_Section.WBP_Panel_Teams_Info_Section_C.OnTeamNameUpdatedV2 // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTeamMemberIDsUpdated(struct TArray<struct FString>& TeamMemberIDs); // Function WBP_Panel_Teams_Info_Section.WBP_Panel_Teams_Info_Section_C.OnTeamMemberIDsUpdated // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnLeagueIDUpdated(struct FString LeagueID); // Function WBP_Panel_Teams_Info_Section.WBP_Panel_Teams_Info_Section_C.OnLeagueIDUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetTeamV2(struct FString TeamID); // Function WBP_Panel_Teams_Info_Section.WBP_Panel_Teams_Info_Section_C.SetTeamV2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTeamVCTRegionUpdated(enum class EVCTRegion VCTRegion); // Function WBP_Panel_Teams_Info_Section.WBP_Panel_Teams_Info_Section_C.OnTeamVCTRegionUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTeamBlurbUpdated(struct FString UpdatedTeamBlurb); // Function WBP_Panel_Teams_Info_Section.WBP_Panel_Teams_Info_Section_C.OnTeamBlurbUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTeamLogoUpdated(struct UTexture2D* UpdatedTeamLogo); // Function WBP_Panel_Teams_Info_Section.WBP_Panel_Teams_Info_Section_C.OnTeamLogoUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTeamNameUpdated(struct FText& UpdatedTeamName); // Function WBP_Panel_Teams_Info_Section.WBP_Panel_Teams_Info_Section_C.OnTeamNameUpdated // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTeamRosterUpdated(struct TArray<struct UTeamMemberModel*>& UpdatedRoster); // Function WBP_Panel_Teams_Info_Section.WBP_Panel_Teams_Info_Section_C.OnTeamRosterUpdated // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetTeamModel(struct UTeamModel* SelectedTeam); // Function WBP_Panel_Teams_Info_Section.WBP_Panel_Teams_Info_Section_C.SetTeamModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindOrUnbindEvents(bool Bind); // Function WBP_Panel_Teams_Info_Section.WBP_Panel_Teams_Info_Section_C.BindOrUnbindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_Teams_Info_Section.WBP_Panel_Teams_Info_Section_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function WBP_Panel_Teams_Info_Section.WBP_Panel_Teams_Info_Section_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function WBP_Panel_Teams_Info_Section.WBP_Panel_Teams_Info_Section_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void K2_BindToViewModel(); // Function WBP_Panel_Teams_Info_Section.WBP_Panel_Teams_Info_Section_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function WBP_Panel_Teams_Info_Section.WBP_Panel_Teams_Info_Section_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Panel_Teams_Info_Section(int32_t EntryPoint); // Function WBP_Panel_Teams_Info_Section.WBP_Panel_Teams_Info_Section_C.ExecuteUbergraph_WBP_Panel_Teams_Info_Section // (Final|UbergraphFunction) // @ game+0x19be2f0
};

