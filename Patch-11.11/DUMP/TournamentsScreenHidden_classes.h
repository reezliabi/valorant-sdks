// WidgetBlueprintGeneratedClass TournamentsScreenHidden.TournamentsScreenHidden_C
// Size: 0x3b8 (Inherited: 0x318)
struct UTournamentsScreenHidden_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Img-TournamentBG; // 0x320(0x08)
	struct UImage* Img-TournamentBG_2; // 0x328(0x08)
	struct UImage* IMG_BorderLine_2; // 0x330(0x08)
	struct UImage* IMG_BorderLine_3; // 0x338(0x08)
	struct UImage* IMG_BorderLine_4; // 0x340(0x08)
	struct UImage* IMG_BorderLine_5; // 0x348(0x08)
	struct UImage* IMG_BorderLine_6; // 0x350(0x08)
	struct UImage* IMG_BorderLine_7; // 0x358(0x08)
	struct UImage* IMG_BorderLine_8; // 0x360(0x08)
	struct UMenuOrnament_C* MenuOrnament; // 0x368(0x08)
	struct USharedBackButton_C* SharedBackButton; // 0x370(0x08)
	struct UTabbedContent_C* Tabs; // 0x378(0x08)
	struct UPremierRosterViewController* Premier Roster View Controller; // 0x380(0x08)
	struct FMulticastInlineDelegate On New Roster Created; // 0x388(0x10)
	bool hasShownCodeOfConduct; // 0x398(0x01)
	char pad_399[0x7]; // 0x399(0x07)
	struct FString PlayoffQualificationNoticeSettingString; // 0x3a0(0x10)
	struct UPremierGenericPopUpModal_C* PlayoffQualificationNotificationModal; // 0x3b0(0x08)

	void SetTeamTabVisibility(); // Function TournamentsScreenHidden.TournamentsScreenHidden_C.SetTeamTabVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetAwardsTabVisibility(); // Function TournamentsScreenHidden.TournamentsScreenHidden_C.SetAwardsTabVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePlayoffQualificationNoticeConfig(struct FString Update Playoff Qualification Notice Config); // Function TournamentsScreenHidden.TournamentsScreenHidden_C.UpdatePlayoffQualificationNoticeConfig // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Temp Function Update Playoff Qualification Notice Config(); // Function TournamentsScreenHidden.TournamentsScreenHidden_C.Temp Function Update Playoff Qualification Notice Config // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowPlayoffQualificationNoticeIfRequired(); // Function TournamentsScreenHidden.TournamentsScreenHidden_C.ShowPlayoffQualificationNoticeIfRequired // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePromotionNoticeConfig(struct FString UpdatePromotionNoticeConfig); // Function TournamentsScreenHidden.TournamentsScreenHidden_C.UpdatePromotionNoticeConfig // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowPromotionNoticeIfRequired(); // Function TournamentsScreenHidden.TournamentsScreenHidden_C.ShowPromotionNoticeIfRequired // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetZoneSelection(); // Function TournamentsScreenHidden.TournamentsScreenHidden_C.SetZoneSelection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetCustomBackgroundForEvent(struct UPremierScheduledEventModelOld* ScheduledEvent); // Function TournamentsScreenHidden.TournamentsScreenHidden_C.SetCustomBackgroundForEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetDefaultBackground(); // Function TournamentsScreenHidden.TournamentsScreenHidden_C.SetDefaultBackground // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetMatchHistoryTabVisibility(); // Function TournamentsScreenHidden.TournamentsScreenHidden_C.SetMatchHistoryTabVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetLeaderboardTabVisibility(); // Function TournamentsScreenHidden.TournamentsScreenHidden_C.SetLeaderboardTabVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetVisibilityFromBool(struct UTabButtonBase_C* Tab Button, bool IsVisible); // Function TournamentsScreenHidden.TournamentsScreenHidden_C.SetVisibilityFromBool // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HasMyRosterPlayedGames(bool& HasPlayedGames); // Function TournamentsScreenHidden.TournamentsScreenHidden_C.HasMyRosterPlayedGames // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsTabValidAndConfigEnabled(struct FName Config Name, struct UTabButtonBase_C* Tab Button, bool& ConfigBool); // Function TournamentsScreenHidden.TournamentsScreenHidden_C.IsTabValidAndConfigEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowTournamentsScreenIfRequired(); // Function TournamentsScreenHidden.TournamentsScreenHidden_C.ShowTournamentsScreenIfRequired // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SwapToTeamPageAndBeginCustomize(); // Function TournamentsScreenHidden.TournamentsScreenHidden_C.SwapToTeamPageAndBeginCustomize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CustomizeTeam(); // Function TournamentsScreenHidden.TournamentsScreenHidden_C.CustomizeTeam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BeginTeamCreation(); // Function TournamentsScreenHidden.TournamentsScreenHidden_C.BeginTeamCreation // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCodeOfConductClosed(); // Function TournamentsScreenHidden.TournamentsScreenHidden_C.OnCodeOfConductClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnConferenceSelected(struct FString Conference); // Function TournamentsScreenHidden.TournamentsScreenHidden_C.OnConferenceSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function TournamentsScreenHidden.TournamentsScreenHidden_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnRostersUpdated(); // Function TournamentsScreenHidden.TournamentsScreenHidden_C.OnRostersUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__SharedBackButton_K2Node_ComponentBoundEvent_0_OnBackRequested__DelegateSignature(); // Function TournamentsScreenHidden.TournamentsScreenHidden_C.BndEvt__SharedBackButton_K2Node_ComponentBoundEvent_0_OnBackRequested__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ChangeToTeamTab(); // Function TournamentsScreenHidden.TournamentsScreenHidden_C.ChangeToTeamTab // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPremierRostersUpdated(struct UPremierRosterViewModel* UpdatedPremierRosterModel); // Function TournamentsScreenHidden.TournamentsScreenHidden_C.OnPremierRostersUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TournamentsScreenHidden_Tabs_K2Node_ComponentBoundEvent_1_OnTabChanged__DelegateSignature(struct UTabButtonBase_C* TabButton); // Function TournamentsScreenHidden.TournamentsScreenHidden_C.BndEvt__TournamentsScreenHidden_Tabs_K2Node_ComponentBoundEvent_1_OnTabChanged__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnScheduledEventSelected(struct UPremierScheduledEventModelOld* ScheduledEvent); // Function TournamentsScreenHidden.TournamentsScreenHidden_C.OnScheduledEventSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_TournamentsScreenHidden(int32_t EntryPoint); // Function TournamentsScreenHidden.TournamentsScreenHidden_C.ExecuteUbergraph_TournamentsScreenHidden // (Final|UbergraphFunction) // @ game+0x19be2f0
	void On New Roster Created__DelegateSignature(); // Function TournamentsScreenHidden.TournamentsScreenHidden_C.On New Roster Created__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

