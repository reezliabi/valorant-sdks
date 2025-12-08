// WidgetBlueprintGeneratedClass HomeScreen_PC.HomeScreen_PC_C
// Size: 0x458 (Inherited: 0x318)
struct UHomeScreen_PC_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* EventBannerFade; // 0x320(0x08)
	struct UAgentPromo_C* AgentPromo; // 0x328(0x08)
	struct UWBP_MenuButtonHomeNav_C* AgentsButton; // 0x330(0x08)
	struct UWBP_MenuButtonHomeNav_C* BattlepassButton; // 0x338(0x08)
	struct UWBP_MenuButtonHomeNav_C* CareerButton; // 0x340(0x08)
	struct UWBP_MenuButtonHomeNav_C* CollectionButton; // 0x348(0x08)
	struct UWBP_Panel_PromoTile_Home_C* ConvergedPromoTile; // 0x350(0x08)
	struct UEpisodeTitle_C* EpisodeTitle; // 0x358(0x08)
	struct UWBP_MenuButtonHomeNav_C* EsportsButton; // 0x360(0x08)
	struct UOverlay* EventBanner; // 0x368(0x08)
	struct UHomeScreenFeaturedQueues_C* FeaturedModeWidget; // 0x370(0x08)
	struct UMenuOrnament_C* MenuOrnament; // 0x378(0x08)
	struct UNightMarketPromoWidget_C* NightMarketPromoWidget; // 0x380(0x08)
	struct UWidgetSwitcher* OLD_PromoWidgetSwitcher; // 0x388(0x08)
	struct UWidgetSwitcher* OldvsConvergedPromoTileSwitcher; // 0x390(0x08)
	struct UPatchNotesWidget_C* PatchNotesWidget; // 0x398(0x08)
	struct UPickemPromo_C* PickemPromo; // 0x3a0(0x08)
	struct UHelpFlyout_C* PlayButtonTutorial; // 0x3a8(0x08)
	struct UOverlay* ProgressionPanel; // 0x3b0(0x08)
	struct UVerticalBox* PromoView; // 0x3b8(0x08)
	struct UMapPromo_C* SeasonalPromoWidget; // 0x3c0(0x08)
	struct UWBP_MenuButtonHomeNav_C* StoreButton; // 0x3c8(0x08)
	struct UPromoWidget_C* StorePromoWidget; // 0x3d0(0x08)
	struct UWBP_MenuButtonHomeNav_C* TournamentsButton; // 0x3d8(0x08)
	struct UVCTCapsulePromo_C* VCTCapsulePromo; // 0x3e0(0x08)
	struct UWBP_MenuButtonHomeNavPlay_C* WBP_MenuButtonHomePlay; // 0x3e8(0x08)
	struct UWBP_Panel_BTE_Banner_Home_Screen_Lobby_C* WBP_Panel_BTE_Banner_Home_Screen_Lobby; // 0x3f0(0x08)
	struct ULazyDynamicWidgetSwitcher_C* WebTile; // 0x3f8(0x08)
	struct TArray<struct UUserWidget*> VisiblePromoWidgets; // 0x400(0x10)
	bool IncludeSeasonalPromoInRotation; // 0x410(0x01)
	bool IncludeCurrentAgentPromotion; // 0x411(0x01)
	char pad_412[0x6]; // 0x412(0x06)
	struct FAresMainMenuNavBarData NavBarData; // 0x418(0x28)
	int32_t PromoRotateIndex; // 0x440(0x04)
	char pad_444[0x4]; // 0x444(0x04)
	struct FTimerHandle PromoRotateTimerHandle; // 0x448(0x08)
	struct URecruitmentEventModel* RecruitmentEventModel; // 0x450(0x08)

	bool HandleBackRequest(); // Function HomeScreen_PC.HomeScreen_PC_C.HandleBackRequest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FAresMainMenuNavBarData GetNavBarData(); // Function HomeScreen_PC.HomeScreen_PC_C.GetNavBarData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void Should Show Recruitment Event Promo(bool& Show); // Function HomeScreen_PC.HomeScreen_PC_C.Should Show Recruitment Event Promo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Init Recruitment Event(); // Function HomeScreen_PC.HomeScreen_PC_C.Init Recruitment Event // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EsportsHubLiveSchedule_OnFail(); // Function HomeScreen_PC.HomeScreen_PC_C.EsportsHubLiveSchedule_OnFail // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EsportsHubLiveSchedule_OnSuccess(struct FEventScheduleDTO& LiveEventSchedule); // Function HomeScreen_PC.HomeScreen_PC_C.EsportsHubLiveSchedule_OnSuccess // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CheckPromoRotation(); // Function HomeScreen_PC.HomeScreen_PC_C.CheckPromoRotation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateVisibilityOfPatchNotes(); // Function HomeScreen_PC.HomeScreen_PC_C.UpdateVisibilityOfPatchNotes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateVisibilityOfEsportsHubButton(); // Function HomeScreen_PC.HomeScreen_PC_C.UpdateVisibilityOfEsportsHubButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateVisibilityOfTournamentsButton(); // Function HomeScreen_PC.HomeScreen_PC_C.UpdateVisibilityOfTournamentsButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitEventBanner(); // Function HomeScreen_PC.HomeScreen_PC_C.InitEventBanner // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SelectNextPromoTile(); // Function HomeScreen_PC.HomeScreen_PC_C.SelectNextPromoTile // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetVisiblePromosAndSetVisibility(); // Function HomeScreen_PC.HomeScreen_PC_C.GetVisiblePromosAndSetVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool ShouldShowNightMarketWidget(); // Function HomeScreen_PC.HomeScreen_PC_C.ShouldShowNightMarketWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void ShouldShowPatchNotes(bool& Show); // Function HomeScreen_PC.HomeScreen_PC_C.ShouldShowPatchNotes // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UpdatePlayButtonTutorial(); // Function HomeScreen_PC.HomeScreen_PC_C.UpdatePlayButtonTutorial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ToggleProgressionVis(); // Function HomeScreen_PC.HomeScreen_PC_C.ToggleProgressionVis // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function HomeScreen_PC.HomeScreen_PC_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnConfigUpdated(struct FName& ConfigName); // Function HomeScreen_PC.HomeScreen_PC_C.OnConfigUpdated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__HomeScreen_PC_BattlePass_K2Node_ComponentBoundEvent_0_OnUniversalButtonVoidEvent__DelegateSignature(); // Function HomeScreen_PC.HomeScreen_PC_C.BndEvt__HomeScreen_PC_BattlePass_K2Node_ComponentBoundEvent_0_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__HomeScreen_PC_CAREER_K2Node_ComponentBoundEvent_1_OnUniversalButtonVoidEvent__DelegateSignature(); // Function HomeScreen_PC.HomeScreen_PC_C.BndEvt__HomeScreen_PC_CAREER_K2Node_ComponentBoundEvent_1_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__HomeScreen_PC_AGENTS_K2Node_ComponentBoundEvent_2_OnUniversalButtonVoidEvent__DelegateSignature(); // Function HomeScreen_PC.HomeScreen_PC_C.BndEvt__HomeScreen_PC_AGENTS_K2Node_ComponentBoundEvent_2_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__HomeScreen_PC_TOURNAMENTS_K2Node_ComponentBoundEvent_3_OnUniversalButtonVoidEvent__DelegateSignature(); // Function HomeScreen_PC.HomeScreen_PC_C.BndEvt__HomeScreen_PC_TOURNAMENTS_K2Node_ComponentBoundEvent_3_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__HomeScreen_PC_COLLECTION_K2Node_ComponentBoundEvent_4_OnUniversalButtonVoidEvent__DelegateSignature(); // Function HomeScreen_PC.HomeScreen_PC_C.BndEvt__HomeScreen_PC_COLLECTION_K2Node_ComponentBoundEvent_4_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__HomeScreen_PC_STORE_K2Node_ComponentBoundEvent_5_OnUniversalButtonVoidEvent__DelegateSignature(); // Function HomeScreen_PC.HomeScreen_PC_C.BndEvt__HomeScreen_PC_STORE_K2Node_ComponentBoundEvent_5_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__HomeScreen_PC_WBP_MenuButtonHomePlay_K2Node_ComponentBoundEvent_6_OnUniversalButtonVoidEvent__DelegateSignature(); // Function HomeScreen_PC.HomeScreen_PC_C.BndEvt__HomeScreen_PC_WBP_MenuButtonHomePlay_K2Node_ComponentBoundEvent_6_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__HomeScreen_PC_EsportsButton_K2Node_ComponentBoundEvent_7_OnUniversalButtonVoidEvent__DelegateSignature(); // Function HomeScreen_PC.HomeScreen_PC_C.BndEvt__HomeScreen_PC_EsportsButton_K2Node_ComponentBoundEvent_7_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnBonusShopActiveChanged(bool IsBonusShopActive); // Function HomeScreen_PC.HomeScreen_PC_C.OnBonusShopActiveChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_HomeScreen_PC(int32_t EntryPoint); // Function HomeScreen_PC.HomeScreen_PC_C.ExecuteUbergraph_HomeScreen_PC // (Final|UbergraphFunction) // @ game+0x19be2f0
};

