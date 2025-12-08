// BlueprintGeneratedClass MainMenuViewControllerBP.MainMenuViewControllerBP_C
// Size: 0x118 (Inherited: 0xe8)
struct UMainMenuViewControllerBP_C : UMainMenuViewController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	bool HasShownRecruitmentPopup; // 0xf0(0x01)
	bool ShowingRarePopup; // 0xf1(0x01)
	bool ShowingPrelude; // 0xf2(0x01)
	bool EvaluatingRarePopups; // 0xf3(0x01)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct UXboxGamePass_DataAsset_C* XboxGamePass; // 0xf8(0x08)
	struct FName Modal Info Key; // 0x100(0x0c)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct UMenuStackEntry* PendingGiftPopup; // 0x110(0x08)

	void ShowMFAPrelaunchPopupIfRequired(struct UMenuStackEntry*& MenuStackEntry); // Function MainMenuViewControllerBP.MainMenuViewControllerBP_C.ShowMFAPrelaunchPopupIfRequired // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Show Replays Announcement Messaging If Required(struct UMenuStackEntry*& MenuStackEntry); // Function MainMenuViewControllerBP.MainMenuViewControllerBP_C.Show Replays Announcement Messaging If Required // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPendingGiftPopupClosed(); // Function MainMenuViewControllerBP.MainMenuViewControllerBP_C.OnPendingGiftPopupClosed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Close Pending Gift Popup(struct FGuid& ModalID); // Function MainMenuViewControllerBP.MainMenuViewControllerBP_C.Close Pending Gift Popup // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Show Pending Gift Popup if Required(struct UMenuStackEntry*& MenuStackEntry); // Function MainMenuViewControllerBP.MainMenuViewControllerBP_C.Show Pending Gift Popup if Required // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowCommsAgreementIfRequired(bool InPrelude); // Function MainMenuViewControllerBP.MainMenuViewControllerBP_C.ShowCommsAgreementIfRequired // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool ShowCommsAgreementInPrelude(); // Function MainMenuViewControllerBP.MainMenuViewControllerBP_C.ShowCommsAgreementInPrelude // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void StartNewPlayerExperienceIfRequired(bool& NPEStarted); // Function MainMenuViewControllerBP.MainMenuViewControllerBP_C.StartNewPlayerExperienceIfRequired // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowBTEPopupIfRequired(struct UMenuStackEntry*& MenuStackEntry); // Function MainMenuViewControllerBP.MainMenuViewControllerBP_C.ShowBTEPopupIfRequired // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetModalNotificationWidget(struct UGenericNotification* NotificationConfig, struct UGenericModalNotification_Base_C*& ModalNotification); // Function MainMenuViewControllerBP.MainMenuViewControllerBP_C.GetModalNotificationWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRarePopupClosed(); // Function MainMenuViewControllerBP.MainMenuViewControllerBP_C.OnRarePopupClosed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	int32_t GetRecruitmentBalance(); // Function MainMenuViewControllerBP.MainMenuViewControllerBP_C.GetRecruitmentBalance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPreludeClosed(); // Function MainMenuViewControllerBP.MainMenuViewControllerBP_C.OnPreludeClosed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowMenuTutorialIfRequired(struct UMenuStackEntry*& MenuStackEntry); // Function MainMenuViewControllerBP.MainMenuViewControllerBP_C.ShowMenuTutorialIfRequired // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Show Gamepass Subscription Popup if Required(struct UMenuStackEntry*& MenuStackEntry); // Function MainMenuViewControllerBP.MainMenuViewControllerBP_C.Show Gamepass Subscription Popup if Required // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowCharacterRecruitmentPopupIfRequired(struct UMenuStackEntry*& MenuStackEntry); // Function MainMenuViewControllerBP.MainMenuViewControllerBP_C.ShowCharacterRecruitmentPopupIfRequired // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowCodeOfConductIfRequired(struct UMenuStackEntry*& MenuStackEntry); // Function MainMenuViewControllerBP.MainMenuViewControllerBP_C.ShowCodeOfConductIfRequired // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowMassRewardPopupIfRequired(struct UMenuStackEntry*& MenuStackEntry); // Function MainMenuViewControllerBP.MainMenuViewControllerBP_C.ShowMassRewardPopupIfRequired // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowMatchTerminatedIfRequired(struct UMenuStackEntry*& MenuStackEntry); // Function MainMenuViewControllerBP.MainMenuViewControllerBP_C.ShowMatchTerminatedIfRequired // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowAdHocPopupIfRequired(struct UMenuStackEntry*& MenuStackEntry); // Function MainMenuViewControllerBP.MainMenuViewControllerBP_C.ShowAdHocPopupIfRequired // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowSeasonalPopupIfRequired(struct UMenuStackEntry*& MenuStackEntry); // Function MainMenuViewControllerBP.MainMenuViewControllerBP_C.ShowSeasonalPopupIfRequired // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowSkillTestPopupIfRequired(struct UMenuStackEntry*& MenuStackEntry); // Function MainMenuViewControllerBP.MainMenuViewControllerBP_C.ShowSkillTestPopupIfRequired // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowBTMPopupIfRequired(struct UMenuStackEntry*& MenuStackEntry); // Function MainMenuViewControllerBP.MainMenuViewControllerBP_C.ShowBTMPopupIfRequired // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowNewPlayerSettingsIfRequired(struct UMenuStackEntry*& MenuStackEntry); // Function MainMenuViewControllerBP.MainMenuViewControllerBP_C.ShowNewPlayerSettingsIfRequired // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowInitialMenu(bool SkipMatchDetails); // Function MainMenuViewControllerBP.MainMenuViewControllerBP_C.ShowInitialMenu // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowRarePopups(); // Function MainMenuViewControllerBP.MainMenuViewControllerBP_C.ShowRarePopups // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Show Preludes(); // Function MainMenuViewControllerBP.MainMenuViewControllerBP_C.Show Preludes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetMenuMusicForNavigationState(enum class EAresMainMenuTopNavigationState State, struct FMenuMusic& MenuMusic); // Function MainMenuViewControllerBP.MainMenuViewControllerBP_C.GetMenuMusicForNavigationState // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Noop(); // Function MainMenuViewControllerBP.MainMenuViewControllerBP_C.Noop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UUserWidget* RequestViewStateChange(enum class EAresMainMenuTopNavigationState NewState); // Function MainMenuViewControllerBP.MainMenuViewControllerBP_C.RequestViewStateChange // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitCompleted(); // Function MainMenuViewControllerBP.MainMenuViewControllerBP_C.InitCompleted // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnCurrentMatchTerminatedNotification_Event_1(struct FString NotificationBody); // Function MainMenuViewControllerBP.MainMenuViewControllerBP_C.OnCurrentMatchTerminatedNotification_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerUpdated(); // Function MainMenuViewControllerBP.MainMenuViewControllerBP_C.OnPlayerUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnOnboardingStatusUpdated(enum class EOnboardingStatus NewOnboardingStatus); // Function MainMenuViewControllerBP.MainMenuViewControllerBP_C.OnOnboardingStatusUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MatchDetailRetrievalSuccess(struct FMatchDetailsDTO& MatchDetails); // Function MainMenuViewControllerBP.MainMenuViewControllerBP_C.MatchDetailRetrievalSuccess // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MatchDetailRetrievalFail(); // Function MainMenuViewControllerBP.MainMenuViewControllerBP_C.MatchDetailRetrievalFail // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TryGetConfigDataThenShowInitialMenu(); // Function MainMenuViewControllerBP.MainMenuViewControllerBP_C.TryGetConfigDataThenShowInitialMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPendingGiftChanged(struct UPendingGiftDTO* PendingGift); // Function MainMenuViewControllerBP.MainMenuViewControllerBP_C.OnPendingGiftChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_MainMenuViewControllerBP(int32_t EntryPoint); // Function MainMenuViewControllerBP.MainMenuViewControllerBP_C.ExecuteUbergraph_MainMenuViewControllerBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

