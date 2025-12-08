// WidgetBlueprintGeneratedClass InitScreen.InitScreen_C
// Size: 0x458 (Inherited: 0x320)
struct UInitScreen_C : UInitScreenBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UWidgetAnimation* HealthyGamingAnim; // 0x328(0x08)
	struct UWidgetAnimation* PhotoSensitivity; // 0x330(0x08)
	struct UWidgetAnimation* AgeRating; // 0x338(0x08)
	struct UWidgetAnimation* Intro; // 0x340(0x08)
	struct UCanvasPanel* AgeRatingDisplay; // 0x348(0x08)
	struct UImage* BackgroundTint3; // 0x350(0x08)
	struct UImage* BootingSplashCN; // 0x358(0x08)
	struct UImage* BootingSplashRoW; // 0x360(0x08)
	struct UWidgetSwitcher* BootSplashWidgetSwitcher; // 0x368(0x08)
	struct UAresCommonText* BuildTagText; // 0x370(0x08)
	struct UTextBlock* CopyrightText; // 0x378(0x08)
	struct UFatalVanguardErrorNotification_C* FatalVanguardErrorNotification; // 0x380(0x08)
	struct UFatalVanguardRebootNotification_C* FatalVanguardRebootNotification; // 0x388(0x08)
	struct UAresCommonText* GameVersionText; // 0x390(0x08)
	struct UHealthyGamingMessagePopup_C* HealthyGamingMessageScreen; // 0x398(0x08)
	struct UInitFailure_C* InitFailure; // 0x3a0(0x08)
	struct UImage* Localized_Boot_Logo; // 0x3a8(0x08)
	struct ULoginQueue_C* LoginQueue; // 0x3b0(0x08)
	struct UAresCommonText* OnlineSubsystemEnvironmentText; // 0x3b8(0x08)
	struct UAresCommonText* PatchlineText; // 0x3c0(0x08)
	struct UPhotoSensitivityWarning_C* PhotoSensitivityWarning; // 0x3c8(0x08)
	struct UImage* PlayerAlias_Boot_Logo; // 0x3d0(0x08)
	struct UOverlay* PlayerAliasInitContainer; // 0x3d8(0x08)
	struct USizeBox* RegionalLogoSizeBox; // 0x3e0(0x08)
	struct UVerticalBox* RegionalRiotLogos; // 0x3e8(0x08)
	struct UCanvasPanel* Spinner; // 0x3f0(0x08)
	struct UWBP_Panel_InitProgressBar_C* WBP_Panel_InitProgressBar; // 0x3f8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_2; // 0x400(0x08)
	bool WarningPeriodComplete; // 0x408(0x01)
	char pad_409[0x3]; // 0x409(0x03)
	struct FName HealthWarningEnabledKey; // 0x40c(0x0c)
	struct FName HealthWarningSecondsKey; // 0x418(0x0c)
	bool IntroFinished; // 0x424(0x01)
	char pad_425[0x3]; // 0x425(0x03)
	double LogoYAnchor; // 0x428(0x08)
	double LogoXAnchor; // 0x430(0x08)
	bool PreviewChinaLayout; // 0x438(0x01)
	char pad_439[0x7]; // 0x439(0x07)
	struct UWidget* Target; // 0x440(0x08)
	bool EnableNativePlatformProgressIndicator; // 0x448(0x01)
	char pad_449[0x7]; // 0x449(0x07)
	struct UInitScreenViewModel* InitScreenVM; // 0x450(0x08)

	void SequenceEvent__ENTRYPOINTInitScreen(); // Function InitScreen.InitScreen_C.SequenceEvent__ENTRYPOINTInitScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetupDynamicCopyrightText(); // Function InitScreen.InitScreen_C.SetupDynamicCopyrightText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShouldShowInitPresetSelectScreen(bool& ShouldShow); // Function InitScreen.InitScreen_C.ShouldShowInitPresetSelectScreen // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void MakeInitScreenVM(); // Function InitScreen.InitScreen_C.MakeInitScreenVM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RefreshOnlineSubsystemEnvironmentText(); // Function InitScreen.InitScreen_C.RefreshOnlineSubsystemEnvironmentText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetBuildAndEnvironmentInfo(); // Function InitScreen.InitScreen_C.SetBuildAndEnvironmentInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShouldUseChinaLayout(bool& IsChinaLayout); // Function InitScreen.InitScreen_C.ShouldUseChinaLayout // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void CreatePlayerAliasInitWidget(); // Function InitScreen.InitScreen_C.CreatePlayerAliasInitWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateLocalizationOverrides(); // Function InitScreen.InitScreen_C.UpdateLocalizationOverrides // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateState(); // Function InitScreen.InitScreen_C.UpdateState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent_1(); // Function InitScreen.InitScreen_C.SequenceEvent_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetInitializingWidget(struct UWidget*& NewParam); // Function InitScreen.InitScreen_C.GetInitializingWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetErrorWidget(struct UWidget*& Widget); // Function InitScreen.InitScreen_C.GetErrorWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function InitScreen.InitScreen_C.OnAnimationFinished // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ShowSplashScreens(); // Function InitScreen.InitScreen_C.ShowSplashScreens // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandlePhotoSensitivityWarningDismissed(); // Function InitScreen.InitScreen_C.HandlePhotoSensitivityWarningDismissed // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function InitScreen.InitScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function InitScreen.InitScreen_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void HandleHealthyGamingPopupDismissed(); // Function InitScreen.InitScreen_C.HandleHealthyGamingPopupDismissed // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandlePhotosensitivityWarningDismissedNative(struct FGuid& ModalID); // Function InitScreen.InitScreen_C.HandlePhotosensitivityWarningDismissedNative // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandlePresetSelectionComplete(struct FGuid& ModalID); // Function InitScreen.InitScreen_C.HandlePresetSelectionComplete // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_InitScreen(int32_t EntryPoint); // Function InitScreen.InitScreen_C.ExecuteUbergraph_InitScreen // (Final|UbergraphFunction) // @ game+0x19be2f0
};

