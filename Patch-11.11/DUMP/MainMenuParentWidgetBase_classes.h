// WidgetBlueprintGeneratedClass MainMenuParentWidgetBase.MainMenuParentWidgetBase_C
// Size: 0x37c (Inherited: 0x328)
struct UMainMenuParentWidgetBase_C : UMainMenuParentWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	bool BackgroundBlurred; // 0x330(0x01)
	bool IsTransitioning; // 0x331(0x01)
	bool CheckInitialStateSet; // 0x332(0x01)
	char pad_333[0x5]; // 0x333(0x05)
	struct FString ForceMatchID; // 0x338(0x10)
	struct UAkAudioEvent* AUD_Intro; // 0x348(0x08)
	struct UAkAudioEvent* AUD_OpenExitGame; // 0x350(0x08)
	struct USettingsScreen* SettingsScreen; // 0x358(0x08)
	struct UMenuStackEntry* RegisteredOptionsMenuStackEntry; // 0x360(0x08)
	struct UBorder* MatchFoundBorderWidget; // 0x368(0x08)
	struct FName NewVar_1; // 0x370(0x0c)

	void HandlePremierForceRenameOwnerAck(); // Function MainMenuParentWidgetBase.MainMenuParentWidgetBase_C.HandlePremierForceRenameOwnerAck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandlePremierByeAwarded(); // Function MainMenuParentWidgetBase.MainMenuParentWidgetBase_C.HandlePremierByeAwarded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleEscapePressed(); // Function MainMenuParentWidgetBase.MainMenuParentWidgetBase_C.HandleEscapePressed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowPrelude(); // Function MainMenuParentWidgetBase.MainMenuParentWidgetBase_C.ShowPrelude // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateSettingsScreen(); // Function MainMenuParentWidgetBase.MainMenuParentWidgetBase_C.CreateSettingsScreen // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetValuesOnViewContextSet(); // Function MainMenuParentWidgetBase.MainMenuParentWidgetBase_C.SetValuesOnViewContextSet // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AssignOptionsMenuToOptionsButton(); // Function MainMenuParentWidgetBase.MainMenuParentWidgetBase_C.AssignOptionsMenuToOptionsButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayNavigationAudio(enum class EAresMainMenuTopNavigationState NavigationState); // Function MainMenuParentWidgetBase.MainMenuParentWidgetBase_C.PlayNavigationAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowMainMenu(); // Function MainMenuParentWidgetBase.MainMenuParentWidgetBase_C.ShowMainMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowPlatformFaultedMessage(enum class EPlatformFaultReason FaultReason); // Function MainMenuParentWidgetBase.MainMenuParentWidgetBase_C.ShowPlatformFaultedMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayIntroAnimations(); // Function MainMenuParentWidgetBase.MainMenuParentWidgetBase_C.PlayIntroAnimations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent_1(); // Function MainMenuParentWidgetBase.MainMenuParentWidgetBase_C.SequenceEvent_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetMatchmakingMatchFoundDuration(int32_t& Duration); // Function MainMenuParentWidgetBase.MainMenuParentWidgetBase_C.GetMatchmakingMatchFoundDuration // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleMatchFoundChanged(bool MatchFound); // Function MainMenuParentWidgetBase.MainMenuParentWidgetBase_C.HandleMatchFoundChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateStateSwitcher(); // Function MainMenuParentWidgetBase.MainMenuParentWidgetBase_C.UpdateStateSwitcher // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShouldNotBlurForCurrentState(bool& DontBlur); // Function MainMenuParentWidgetBase.MainMenuParentWidgetBase_C.ShouldNotBlurForCurrentState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void HandleNavigationStateChanged(); // Function MainMenuParentWidgetBase.MainMenuParentWidgetBase_C.HandleNavigationStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnViewContextSet(); // Function MainMenuParentWidgetBase.MainMenuParentWidgetBase_C.OnViewContextSet // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnNavigationStateChanged_Event_1(); // Function MainMenuParentWidgetBase.MainMenuParentWidgetBase_C.OnNavigationStateChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function MainMenuParentWidgetBase.MainMenuParentWidgetBase_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Init Main Menu(); // Function MainMenuParentWidgetBase.MainMenuParentWidgetBase_C.Init Main Menu // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlatformUnhealthy(enum class EPlatformFaultReason& Reason); // Function MainMenuParentWidgetBase.MainMenuParentWidgetBase_C.OnPlatformUnhealthy // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnQueueIDChanged(struct FString NewValue); // Function MainMenuParentWidgetBase.MainMenuParentWidgetBase_C.OnQueueIDChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsInPreludeChanged(); // Function MainMenuParentWidgetBase.MainMenuParentWidgetBase_C.OnIsInPreludeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OpenExitGameScreenWithDelay(); // Function MainMenuParentWidgetBase.MainMenuParentWidgetBase_C.OpenExitGameScreenWithDelay // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPremierPlayerByeAwarded(); // Function MainMenuParentWidgetBase.MainMenuParentWidgetBase_C.OnPremierPlayerByeAwarded // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPremierForceRenameOwnerAck(); // Function MainMenuParentWidgetBase.MainMenuParentWidgetBase_C.OnPremierForceRenameOwnerAck // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_MainMenuParentWidgetBase(int32_t EntryPoint); // Function MainMenuParentWidgetBase.MainMenuParentWidgetBase_C.ExecuteUbergraph_MainMenuParentWidgetBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

