// WidgetBlueprintGeneratedClass TournamentMapIntro.TournamentMapIntro_C
// Size: 0x490 (Inherited: 0x318)
struct UTournamentMapIntro_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* LoadingLoop; // 0x320(0x08)
	struct UWidgetAnimation* Outro; // 0x328(0x08)
	struct UWidgetAnimation* Intro; // 0x330(0x08)
	struct UButton* B_LeftTeamInfo; // 0x338(0x08)
	struct UButton* B_LeftTeamInfo_2; // 0x340(0x08)
	struct UImage* Future_DivisionIcon_Placeholder; // 0x348(0x08)
	struct UImage* IMG_KnockoutShape; // 0x350(0x08)
	struct UImage* MapSplash; // 0x358(0x08)
	struct UTextBlock* MatchType; // 0x360(0x08)
	struct UTextBlock* T_MapCoordinates; // 0x368(0x08)
	struct UTextBlock* T_MapName; // 0x370(0x08)
	struct UTextBlock* T_TournamentDate; // 0x378(0x08)
	struct UTextBlock* T_TournamentTime; // 0x380(0x08)
	struct UTournamentsTeamCustomization_C* Team1_CustomizationIcon; // 0x388(0x08)
	struct UTournamentsTeamCustomization_C* Team1_CustomizationIcon_Intro; // 0x390(0x08)
	struct UTextBlock* Team1_NameText; // 0x398(0x08)
	struct UTextBlock* Team1_NameText_Intro; // 0x3a0(0x08)
	struct UTextBlock* Team1_TagText; // 0x3a8(0x08)
	struct UTextBlock* Team1_TagText_Intro; // 0x3b0(0x08)
	struct UTournamentsTeamCustomization_C* Team2_CustomizationIcon; // 0x3b8(0x08)
	struct UTournamentsTeamCustomization_C* Team2_CustomizationIcon_Intro; // 0x3c0(0x08)
	struct UTextBlock* Team2_NameText; // 0x3c8(0x08)
	struct UTextBlock* Team2_NameText_Intro; // 0x3d0(0x08)
	struct UTextBlock* Team2_TagText_2; // 0x3d8(0x08)
	struct UTextBlock* Team2_TagText_Intro; // 0x3e0(0x08)
	struct UTextBlock* WinLossRecord_Team1; // 0x3e8(0x08)
	struct UTextBlock* WinLossRecord_Team1_2; // 0x3f0(0x08)
	struct UTextBlock* WinLossRecord_Team1_3; // 0x3f8(0x08)
	struct UTextBlock* WinLossRecord_Team1_5; // 0x400(0x08)
	struct UTextBlock* WinLossRecord_Team1_Filled; // 0x408(0x08)
	struct UTextBlock* WinLossRecord_Team2_4; // 0x410(0x08)
	struct UTextBlock* WinLossRecord_Team2_6; // 0x418(0x08)
	struct UTextBlock* WinLossRecord_Team2_7; // 0x420(0x08)
	struct UTextBlock* WinLossRecord_Team2_8; // 0x428(0x08)
	struct UTextBlock* WinLossRecord_Team2_Filled_2; // 0x430(0x08)
	struct UWidgetSwitcher* WS_VSorResults; // 0x438(0x08)
	struct UTexture* FallbackImage; // 0x440(0x08)
	struct FString QueueID; // 0x448(0x10)
	struct UGameModeUIData* ModeUIData; // 0x458(0x08)
	struct UMatchmakingQueueDataAsset* QueueDataAsset; // 0x460(0x08)
	struct UTexture2D* tRankTexture; // 0x468(0x08)
	double FontStretchRed; // 0x470(0x08)
	bool HasIntroFinished; // 0x478(0x01)
	bool OutroRequested; // 0x479(0x01)
	char pad_47A[0x6]; // 0x47a(0x06)
	struct FMulticastInlineDelegate FadeDispatch; // 0x480(0x10)

	void SequenceEvent__ENTRYPOINTTournamentMapIntro_4(); // Function TournamentMapIntro.TournamentMapIntro_C.SequenceEvent__ENTRYPOINTTournamentMapIntro_4 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent__ENTRYPOINTTournamentMapIntro_3(); // Function TournamentMapIntro.TournamentMapIntro_C.SequenceEvent__ENTRYPOINTTournamentMapIntro_3 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent__ENTRYPOINTTournamentMapIntro_2(); // Function TournamentMapIntro.TournamentMapIntro_C.SequenceEvent__ENTRYPOINTTournamentMapIntro_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent__ENTRYPOINTTournamentMapIntro_1(); // Function TournamentMapIntro.TournamentMapIntro_C.SequenceEvent__ENTRYPOINTTournamentMapIntro_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent__ENTRYPOINTTournamentMapIntro(); // Function TournamentMapIntro.TournamentMapIntro_C.SequenceEvent__ENTRYPOINTTournamentMapIntro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetTeamDataWidgetsText(bool Team1, struct FText Name, struct FText Tag); // Function TournamentMapIntro.TournamentMapIntro_C.SetTeamDataWidgetsText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetRankIcon(struct UTexture2D* RankIcon); // Function TournamentMapIntro.TournamentMapIntro_C.SetRankIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetTeamData(int32_t TeamIndex, struct FTournamentRosterInfo TournamentRosterInfo); // Function TournamentMapIntro.TournamentMapIntro_C.SetTeamData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleMapLoaded(struct UMapHandle* Map); // Function TournamentMapIntro.TournamentMapIntro_C.HandleMapLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleQueueLoaded(struct UMatchmakingQueueHandle* QueueHandle); // Function TournamentMapIntro.TournamentMapIntro_C.HandleQueueLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CueFade(); // Function TournamentMapIntro.TournamentMapIntro_C.CueFade // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AudioEvent_Intro_L(); // Function TournamentMapIntro.TournamentMapIntro_C.AudioEvent_Intro_L // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AudioEvent_Intro_R(); // Function TournamentMapIntro.TournamentMapIntro_C.AudioEvent_Intro_R // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AudioEvent_Intro_VS(); // Function TournamentMapIntro.TournamentMapIntro_C.AudioEvent_Intro_VS // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AudioEvent_Outro(); // Function TournamentMapIntro.TournamentMapIntro_C.AudioEvent_Outro // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function TournamentMapIntro.TournamentMapIntro_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Init(struct UMapDataAsset* MapDataAsset, struct FString QueueID, struct UGameModeDataAsset* ModeDataAsset, struct FString GamePodID, struct FTournamentRosterMetadata TournamentRosterMetadata); // Function TournamentMapIntro.TournamentMapIntro_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetupTournamentRosterData(struct FTournamentRosterMetadata TournamentRosterMetadata); // Function TournamentMapIntro.TournamentMapIntro_C.SetupTournamentRosterData // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IntroFinished(); // Function TournamentMapIntro.TournamentMapIntro_C.IntroFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayOutro(); // Function TournamentMapIntro.TournamentMapIntro_C.PlayOutro // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RequestOutro(); // Function TournamentMapIntro.TournamentMapIntro_C.RequestOutro // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayIntro(); // Function TournamentMapIntro.TournamentMapIntro_C.PlayIntro // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_TournamentMapIntro(int32_t EntryPoint); // Function TournamentMapIntro.TournamentMapIntro_C.ExecuteUbergraph_TournamentMapIntro // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void FadeDispatch__DelegateSignature(); // Function TournamentMapIntro.TournamentMapIntro_C.FadeDispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

