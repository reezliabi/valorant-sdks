// WidgetBlueprintGeneratedClass PremierEventNotification.PremierEventNotification_C
// Size: 0x398 (Inherited: 0x330)
struct UPremierEventNotification_C : UPremierEventNotification_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UPremierEventShorthand2_C* PremierEventShorthand2; // 0x338(0x08)
	struct UPremierEventModelOld* EventModel; // 0x340(0x08)
	struct FString Conference; // 0x348(0x10)
	struct UPremierRosterViewModel* PremierRosterViewModel; // 0x358(0x08)
	struct UPartyViewController* PartyViewController; // 0x360(0x08)
	struct UPartyModel* PartyModel; // 0x368(0x08)
	struct UTournamentMatchupModel* TournamentMatchupModel; // 0x370(0x08)
	struct UTournamentsRestPeriodStatus_C* Tournaments Rest Period Status; // 0x378(0x08)
	bool EventExists; // 0x380(0x01)
	bool EventLive; // 0x381(0x01)
	bool IsLiveUpdated; // 0x382(0x01)
	bool InTournament; // 0x383(0x01)
	char pad_384[0x4]; // 0x384(0x04)
	struct UPremierScheduledEventModelOld* Scheduled Event Model; // 0x388(0x08)
	struct UTournamentsRestPeriodStatus_C* Tournaments Rest Period Status_1; // 0x390(0x08)

	void Update Scheduled Event Model(struct UPremierScheduledEventModelOld* NewScheduledEventModel); // Function PremierEventNotification.PremierEventNotification_C.Update Scheduled Event Model // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleMatchmakingChanged(); // Function PremierEventNotification.PremierEventNotification_C.HandleMatchmakingChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DEBUG Print Event Model Info(struct UPremierEventModelOld* PremierEventModel); // Function PremierEventNotification.PremierEventNotification_C.DEBUG Print Event Model Info // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Get Scheduled Event Model By Event ID(struct FString EventID, struct UPremierScheduledEventModelOld*& ScheduledEventModel); // Function PremierEventNotification.PremierEventNotification_C.Get Scheduled Event Model By Event ID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleEnrollmentPhase(); // Function PremierEventNotification.PremierEventNotification_C.HandleEnrollmentPhase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleEventTime(); // Function PremierEventNotification.PremierEventNotification_C.HandleEventTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsEventLive(bool& IsEventLive); // Function PremierEventNotification.PremierEventNotification_C.IsEventLive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void HandleTournamentInfo(enum class EPremierEventType PremierEventType); // Function PremierEventNotification.PremierEventNotification_C.HandleTournamentInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleMatchInfo(enum class EPremierEventType PremierEventType); // Function PremierEventNotification.PremierEventNotification_C.HandleMatchInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleEventModel(); // Function PremierEventNotification.PremierEventNotification_C.HandleEventModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void FindEnemyTeamInMatchup(struct UTournamentMatchupModel* TournamentMatchupModel, struct UMatchupParticipantModel*& EnemyModel); // Function PremierEventNotification.PremierEventNotification_C.FindEnemyTeamInMatchup // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleNewTournamentMatchupModel(struct UTournamentMatchupModel* Latest Matchup Model); // Function PremierEventNotification.PremierEventNotification_C.HandleNewTournamentMatchupModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateEventInfo(); // Function PremierEventNotification.PremierEventNotification_C.UpdateEventInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnConferenceChanged(struct FString NewValue); // Function PremierEventNotification.PremierEventNotification_C.OnConferenceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function PremierEventNotification.PremierEventNotification_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Init(); // Function PremierEventNotification.PremierEventNotification_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTournamentDataChanged(struct FTournamentData TournamentData); // Function PremierEventNotification.PremierEventNotification_C.OnTournamentDataChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTournamentIDChanged(struct FString NewValue); // Function PremierEventNotification.PremierEventNotification_C.OnTournamentIDChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowTournamentBracketButton(); // Function PremierEventNotification.PremierEventNotification_C.ShowTournamentBracketButton // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HideTournamentBracketButton(); // Function PremierEventNotification.PremierEventNotification_C.HideTournamentBracketButton // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitAndBindPremierRosterModel(); // Function PremierEventNotification.PremierEventNotification_C.InitAndBindPremierRosterModel // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitAndBindPartyModel(); // Function PremierEventNotification.PremierEventNotification_C.InitAndBindPartyModel // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitAndBindTournamentsModel(); // Function PremierEventNotification.PremierEventNotification_C.InitAndBindTournamentsModel // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTournamentsModelUpdated(); // Function PremierEventNotification.PremierEventNotification_C.OnTournamentsModelUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitAndBindRestPeriodStatus(); // Function PremierEventNotification.PremierEventNotification_C.InitAndBindRestPeriodStatus // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function PremierEventNotification.PremierEventNotification_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void RefreshTournamentState(); // Function PremierEventNotification.PremierEventNotification_C.RefreshTournamentState // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsTournamentChanged(bool NewValue); // Function PremierEventNotification.PremierEventNotification_C.OnIsTournamentChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnViewBracketButtonClicked(); // Function PremierEventNotification.PremierEventNotification_C.OnViewBracketButtonClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CloseModal(); // Function PremierEventNotification.PremierEventNotification_C.CloseModal // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPremierEventIDChanged(struct FString NewValue); // Function PremierEventNotification.PremierEventNotification_C.OnPremierEventIDChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMatchmakingChanged(bool NewValue); // Function PremierEventNotification.PremierEventNotification_C.OnMatchmakingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRestPeriodUpdate2(); // Function PremierEventNotification.PremierEventNotification_C.OnRestPeriodUpdate2 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnDivisionChanged(int32_t NewValue); // Function PremierEventNotification.PremierEventNotification_C.OnDivisionChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_PremierEventNotification(int32_t EntryPoint); // Function PremierEventNotification.PremierEventNotification_C.ExecuteUbergraph_PremierEventNotification // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

