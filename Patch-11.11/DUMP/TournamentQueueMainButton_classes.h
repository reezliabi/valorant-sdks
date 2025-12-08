// WidgetBlueprintGeneratedClass TournamentQueueMainButton.TournamentQueueMainButton_C
// Size: 0x488 (Inherited: 0x318)
struct UTournamentQueueMainButton_C : UTournamentQueueMainButton_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* ActiveEffect; // 0x320(0x08)
	struct UImage* BackgroundColor_2; // 0x328(0x08)
	struct UButton* CloseButton; // 0x330(0x08)
	struct UImage* closeicon; // 0x338(0x08)
	struct UTextBlock* EmptyText; // 0x340(0x08)
	struct UImage* Fill; // 0x348(0x08)
	struct UImage* HitBox; // 0x350(0x08)
	struct UImage* Image; // 0x358(0x08)
	struct UImage* Image_4; // 0x360(0x08)
	struct UImage* Image_5; // 0x368(0x08)
	struct UImage* Image_6; // 0x370(0x08)
	struct UImage* Image_7; // 0x378(0x08)
	struct UImage* Image_76; // 0x380(0x08)
	struct UImage* Image_96; // 0x388(0x08)
	struct UTextBlock* InQueue_text; // 0x390(0x08)
	struct UWBP_MenuButtonPrimary_C* InQueueButton; // 0x398(0x08)
	struct UOverlay* InTournament_Preparing; // 0x3a0(0x08)
	struct UOverlay* MultiEventButton; // 0x3a8(0x08)
	struct UAresWidgetSwitcher* MultiEventSwitcher; // 0x3b0(0x08)
	struct UTextBlock* NextQueueOpen_DateTime; // 0x3b8(0x08)
	struct UImage* Outline_2; // 0x3c0(0x08)
	struct UWidgetSwitcher* PartyStateSwitcher; // 0x3c8(0x08)
	struct UTextBlock* PremierPatientQueue_InQueue_WaitTime; // 0x3d0(0x08)
	struct UTextBlock* PremierPatientQueue_JoinQueueByTime_Text; // 0x3d8(0x08)
	struct UTournamentsLockInPhaseTimer_C* QueueAvailableTimer; // 0x3e0(0x08)
	struct UTextBlock* QueueContextText; // 0x3e8(0x08)
	struct UWidgetSwitcher* RestPeriodAndStatusSwitcher; // 0x3f0(0x08)
	struct UOverlay* StartButton; // 0x3f8(0x08)
	struct UStartGameWidgetV2_C* StartGameWidgetV2; // 0x400(0x08)
	struct UWidgetSwitcher* StatusSwitcher; // 0x408(0x08)
	struct UOverlay* StopQueueNoTimer; // 0x410(0x08)
	struct UWBP_MenuButtonPlay_Standalone_C* TournamentReadyButton; // 0x418(0x08)
	struct UTournamentsRestPeriodStatus_C* TournamentsRestPeriodStatus; // 0x420(0x08)
	struct UOverlay* Unavailable_NextQueueOpens; // 0x428(0x08)
	struct UOverlay* Unavailable_NotQualified; // 0x430(0x08)
	struct UTexture2D* LockedImage; // 0x438(0x08)
	struct UTexture2D* UnlockedImage; // 0x440(0x08)
	struct UPartyModel* PartyModel; // 0x448(0x08)
	struct UPartyViewController* PartyViewController; // 0x450(0x08)
	struct FLinearColor Log Color; // 0x458(0x10)
	struct UPremierScheduledEventModelOld* PremierScheduledEventModel; // 0x468(0x08)
	struct UPremierEventModelOld* PremierEventModel; // 0x470(0x08)
	bool IsEventLiveTracker; // 0x478(0x01)
	bool ShouldCheckEventLive; // 0x479(0x01)
	char pad_47A[0x6]; // 0x47a(0x06)
	struct UPremierPartyModel* PremierPartyModel; // 0x480(0x08)

	void InitMultiEventButtons(); // Function TournamentQueueMainButton.TournamentQueueMainButton_C.InitMultiEventButtons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateWaitTimer(); // Function TournamentQueueMainButton.TournamentQueueMainButton_C.UpdateWaitTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetPremierQueueAvailability(enum class EPremierJoinQueueAvailability& PremierQueueAvailability); // Function TournamentQueueMainButton.TournamentQueueMainButton_C.GetPremierQueueAvailability // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateRestPeriodStatusSwitcher(); // Function TournamentQueueMainButton.TournamentQueueMainButton_C.UpdateRestPeriodStatusSwitcher // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePremierScheduledEvent(); // Function TournamentQueueMainButton.TournamentQueueMainButton_C.UpdatePremierScheduledEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateQueuePremierStatusSwitcher(); // Function TournamentQueueMainButton.TournamentQueueMainButton_C.UpdateQueuePremierStatusSwitcher // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsScheduledEventLive(bool& IsLive); // Function TournamentQueueMainButton.TournamentQueueMainButton_C.IsScheduledEventLive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Init(); // Function TournamentQueueMainButton.TournamentQueueMainButton_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateIneligibilityText(); // Function TournamentQueueMainButton.TournamentQueueMainButton_C.UpdateIneligibilityText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update Button State(); // Function TournamentQueueMainButton.TournamentQueueMainButton_C.Update Button State // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Test Logging(struct FLinearColor Log Color); // Function TournamentQueueMainButton.TournamentQueueMainButton_C.Test Logging // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Post Init(); // Function TournamentQueueMainButton.TournamentQueueMainButton_C.Post Init // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Party State Changed(int32_t NewValue); // Function TournamentQueueMainButton.TournamentQueueMainButton_C.On Party State Changed // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Queue ID Changed(struct FString NewValue); // Function TournamentQueueMainButton.TournamentQueueMainButton_C.On Queue ID Changed // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Has Invalid Party Size Changed(bool NewValue); // Function TournamentQueueMainButton.TournamentQueueMainButton_C.On Has Invalid Party Size Changed // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Is Tournament Changed(bool NewValue); // Function TournamentQueueMainButton.TournamentQueueMainButton_C.On Is Tournament Changed // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Init(); // Function TournamentQueueMainButton.TournamentQueueMainButton_C.On Init // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnStateChanged(enum class EPartyViewState PartyState); // Function TournamentQueueMainButton.TournamentQueueMainButton_C.OnStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMatchmakingChanged(bool NewValue); // Function TournamentQueueMainButton.TournamentQueueMainButton_C.OnMatchmakingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTournamentDataChanged(struct FTournamentData TournamentData); // Function TournamentQueueMainButton.TournamentQueueMainButton_C.OnTournamentDataChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnQueueIDChanged(struct FString NewValue); // Function TournamentQueueMainButton.TournamentQueueMainButton_C.OnQueueIDChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsPartyOwnerChanged(bool NewValue); // Function TournamentQueueMainButton.TournamentQueueMainButton_C.OnIsPartyOwnerChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsRosterPartyChanged(bool NewValue); // Function TournamentQueueMainButton.TournamentQueueMainButton_C.OnIsRosterPartyChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTournamentIDChanged(struct FString NewValue); // Function TournamentQueueMainButton.TournamentQueueMainButton_C.OnTournamentIDChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TournamentQueueMainButton.TournamentQueueMainButton_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function TournamentQueueMainButton.TournamentQueueMainButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnPremierScheduledEventChanged(struct UPremierScheduledEventModelOld* PremierScheduledEventModel); // Function TournamentQueueMainButton.TournamentQueueMainButton_C.OnPremierScheduledEventChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnInPremierTournamentChanged(bool NewValue); // Function TournamentQueueMainButton.TournamentQueueMainButton_C.OnInPremierTournamentChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPartyEligibleForPremierChanged(bool NewValue); // Function TournamentQueueMainButton.TournamentQueueMainButton_C.OnPartyEligibleForPremierChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnConfigUpdated(struct FName& ConfigName); // Function TournamentQueueMainButton.TournamentQueueMainButton_C.OnConfigUpdated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function TournamentQueueMainButton.TournamentQueueMainButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void CustomEvent(); // Function TournamentQueueMainButton.TournamentQueueMainButton_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CustomEvent_2(); // Function TournamentQueueMainButton.TournamentQueueMainButton_C.CustomEvent_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TournamentQueueMainButton_TournamentReadyButton_K2Node_ComponentBoundEvent_1_OnUniversalButtonVoidEvent__DelegateSignature(); // Function TournamentQueueMainButton.TournamentQueueMainButton_C.BndEvt__TournamentQueueMainButton_TournamentReadyButton_K2Node_ComponentBoundEvent_1_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TournamentQueueMainButton_InQueueButton_K2Node_ComponentBoundEvent_0_OnUniversalButtonVoidEvent__DelegateSignature(); // Function TournamentQueueMainButton.TournamentQueueMainButton_C.BndEvt__TournamentQueueMainButton_InQueueButton_K2Node_ComponentBoundEvent_0_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_TournamentQueueMainButton(int32_t EntryPoint); // Function TournamentQueueMainButton.TournamentQueueMainButton_C.ExecuteUbergraph_TournamentQueueMainButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

