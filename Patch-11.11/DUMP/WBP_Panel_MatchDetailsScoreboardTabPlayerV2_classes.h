// WidgetBlueprintGeneratedClass WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C
// Size: 0x5ea (Inherited: 0x3e0)
struct UWBP_Panel_MatchDetailsScoreboardTabPlayerV2_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UMatchHistoryScoreboardPlayerViewModel* MatchHistoryScoreboardPlayerViewModel; // 0x3e8(0x08)
	struct UImage* ACS_BG; // 0x3f0(0x08)
	struct UOverlay* ACSBox; // 0x3f8(0x08)
	struct UAresInputSwitcher* AresInputSwitcher_1; // 0x400(0x08)
	struct UAresCommonText* AVGScore; // 0x408(0x08)
	struct UImage* CHARACTER_PORTRAIT; // 0x410(0x08)
	struct UCompetitiveTierIconSmall_C* CompetitiveTierIconSmall; // 0x418(0x08)
	struct UWBP_ContextMenuAnchor_SocialPlayer_C* ContextMenuAnchor; // 0x420(0x08)
	struct UAresCommonText* Defuse; // 0x428(0x08)
	struct UImage* Defuses_BG; // 0x430(0x08)
	struct UOverlay* DefusesBox; // 0x438(0x08)
	struct UDynamicConfigSwitcher_C* DynamicConfigSwitcher; // 0x440(0x08)
	struct UAresCommonText* Econ; // 0x448(0x08)
	struct UImage* EconRating_BG; // 0x450(0x08)
	struct UOverlay* EconRatingBox; // 0x458(0x08)
	struct UAresCommonText* FirstBlood; // 0x460(0x08)
	struct UImage* FirstBloods_BG; // 0x468(0x08)
	struct UOverlay* FirstBloodsBox; // 0x470(0x08)
	struct UGridPanel* GridPanel_2; // 0x478(0x08)
	struct UAresCommonText* KDA; // 0x480(0x08)
	struct UImage* KDA_BG; // 0x488(0x08)
	struct UOverlay* KDABox; // 0x490(0x08)
	struct UImage* LocalPlayerIndicator_Triangle; // 0x498(0x08)
	struct UImage* Name_BG; // 0x4a0(0x08)
	struct UAresCommonText* Plant; // 0x4a8(0x08)
	struct UImage* Plants_BG; // 0x4b0(0x08)
	struct UOverlay* PlantsBox; // 0x4b8(0x08)
	struct UAresCommonText* PlayerCharacterName; // 0x4c0(0x08)
	struct UImage* PlayerIndicator; // 0x4c8(0x08)
	struct UImage* RANK_ICON; // 0x4d0(0x08)
	struct USizeBox* SizeBox_4; // 0x4d8(0x08)
	struct USizeBox* Slot_CompetitiveTier; // 0x4e0(0x08)
	struct UWBP_Button_Basic_C* WBP_Button_Basic; // 0x4e8(0x08)
	struct UWBP_Button_PenaltyFeedback_C* WBP_Button_PenaltyFeedback; // 0x4f0(0x08)
	struct UWBP_IdentitySourceIcon_C* WBP_IdentitySourceIcon; // 0x4f8(0x08)
	struct UWBP_Panel_PlayerName_C* WBP_Panel_PlayerName_Console; // 0x500(0x08)
	struct UWBP_Panel_PlayerName_C* WBP_Panel_PlayerName_PC; // 0x508(0x08)
	struct FMulticastInlineDelegate OnPlayerSubjectChanged; // 0x510(0x10)
	struct FString PlayerSubject; // 0x520(0x10)
	struct UVM_PenaltyFeedback_C* PenaltyFeedbackViewModel; // 0x530(0x08)
	bool PlayerHasPenaltyFeedback; // 0x538(0x01)
	char pad_539[0x7]; // 0x539(0x07)
	struct FString MatchID; // 0x540(0x10)
	struct UVM_PlayerDisplayableIdentity_C* DisplayableIdentitySourceViewModel; // 0x550(0x08)
	struct FGameModeMatchDetailsScoreboardConfig ScoreboardConfig; // 0x558(0x08)
	struct FLinearColor LocalPlayerColor; // 0x560(0x10)
	struct FLinearColor AllyTeamColor; // 0x570(0x10)
	struct FLinearColor EnemyTeamColor; // 0x580(0x10)
	enum class EMatchDetailsScoreboardPlayerRowType PlayerType; // 0x590(0x01)
	char pad_591[0x7]; // 0x591(0x07)
	double LocalNameAlpha; // 0x598(0x08)
	double LocalScoreAlpha; // 0x5a0(0x08)
	double LocalStatsAlpha; // 0x5a8(0x08)
	double LocalTriangleAlpha; // 0x5b0(0x08)
	double AllyNameAlpha; // 0x5b8(0x08)
	double AllyScoreAlpha; // 0x5c0(0x08)
	double AllyStatsAlpha; // 0x5c8(0x08)
	double EnemyNameAlpha; // 0x5d0(0x08)
	double EnemyScoreAlpha; // 0x5d8(0x08)
	double EnemyStatsAlpha; // 0x5e0(0x08)
	bool IsAllyTeam; // 0x5e8(0x01)
	bool IsTargetPlayer; // 0x5e9(0x01)

	void SetMatchHistoryScoreboardPlayerViewModel(struct UMatchHistoryScoreboardPlayerViewModel* ViewModel); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.SetMatchHistoryScoreboardPlayerViewModel // (Final|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DetermineLocalTriangleAlpha(); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.DetermineLocalTriangleAlpha // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetPlayerType(); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.SetPlayerType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetBackgrounds(); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.SetBackgrounds // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetColors(struct FLinearColor& IndicatorColor, struct FLinearColor& NameColor, struct FLinearColor& ScoreColor, struct FLinearColor& StatColor, struct FLinearColor& LocalPlayerTriangleColor); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.GetColors // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HideColumns(); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.HideColumns // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIsAllyTeam(bool IsAllyTeam); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.SetIsAllyTeam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnScoreboardConfigChanged(struct FGameModeMatchDetailsScoreboardConfig ScoreboardConfig); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.OnScoreboardConfigChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FText __0ba1be4d-4712-6a6f-eceb-e6af8f22d536_SourceToDest(); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.__0ba1be4d-4712-6a6f-eceb-e6af8f22d536_SourceToDest // (Final|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	struct FText __633d3228-4111-836c-001e-5f8478a8e279_SourceToDest(); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.__633d3228-4111-836c-001e-5f8478a8e279_SourceToDest // (Final|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	struct FText __a9692270-414c-bb3f-e322-ef8559341440_SourceToDest(); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.__a9692270-414c-bb3f-e322-ef8559341440_SourceToDest // (Final|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	struct FText __f43dbf15-4e2a-4d10-3355-fd80d79c8e85_SourceToDest(); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.__f43dbf15-4e2a-4d10-3355-fd80d79c8e85_SourceToDest // (Final|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	struct FText __c0a24eaf-4a73-bd55-817c-a6bcc3e14fbc_SourceToDest(); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.__c0a24eaf-4a73-bd55-817c-a6bcc3e14fbc_SourceToDest // (Final|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void SetMatchID(struct FString MatchID); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.SetMatchID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetCompetitiveTier(int32_t CompetitiveTier); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.SetCompetitiveTier // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void On Penalty Feedback Button Clicked(struct UCommonButtonBase* Button); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.On Penalty Feedback Button Clicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetPenaltyFeedback(bool HasPenaltyFeedback, struct TArray<enum class EInfractionType>& Infractions); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.SetPenaltyFeedback // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetPlayerSubject(struct FString InPlayerSubject); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.SetPlayerSubject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIsTargetPlayer(bool InIsTargetPlayer); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.SetIsTargetPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetPlayerCharacter(struct FText InPlayerCharacterName); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.SetPlayerCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetCharacterPortrait(struct UTexture2D* InCharacterPortrait); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.SetCharacterPortrait // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void K2_BindToViewModel(); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_MatchDetailsScoreboardTabPlayer_WBP_Button_Basic_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.BndEvt__WBP_Panel_MatchDetailsScoreboardTabPlayer_WBP_Button_Basic_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_MatchDetailsScoreboardTabPlayer_WBP_Button_PenaltyFeedback_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.BndEvt__WBP_Panel_MatchDetailsScoreboardTabPlayer_WBP_Button_PenaltyFeedback_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void HandlePlayerIdentitySourceChanged(enum class EAresIdentitySource NewIdentitySource, bool bHasValidIdentity); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.HandlePlayerIdentitySourceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_MatchDetailsScoreboardTabPlayer_WBP_Button_Basic_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.BndEvt__WBP_Panel_MatchDetailsScoreboardTabPlayer_WBP_Button_Basic_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_MatchDetailsScoreboardTabPlayer_WBP_Button_Basic_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.BndEvt__WBP_Panel_MatchDetailsScoreboardTabPlayer_WBP_Button_Basic_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Panel_MatchDetailsScoreboardTabPlayerV2(int32_t EntryPoint); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.ExecuteUbergraph_WBP_Panel_MatchDetailsScoreboardTabPlayerV2 // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnPlayerSubjectChanged__DelegateSignature(struct FString OutPlayerSubject); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.OnPlayerSubjectChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

