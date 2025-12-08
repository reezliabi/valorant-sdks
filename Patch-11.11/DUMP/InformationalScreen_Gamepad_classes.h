// WidgetBlueprintGeneratedClass InformationalScreen_Gamepad.InformationalScreen_Gamepad_C
// Size: 0x3a0 (Inherited: 0x349)
struct UInformationalScreen_Gamepad_C : UInformationalScreen_C {
	char pad_349[0x7]; // 0x349(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	bool IsShellMenuOpen; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
	struct FMulticastInlineDelegate OnCombatReportVisibilityChanged; // 0x360(0x10)
	struct FMulticastInlineDelegate OnCombatReportInfoUpdated; // 0x370(0x10)
	bool IsCombatReportVisible; // 0x380(0x01)
	char pad_381[0x3]; // 0x381(0x03)
	int32_t CurrentCombatReportRoundNumber; // 0x384(0x04)
	double UpdateCooldownDuration; // 0x388(0x08)
	double LastUpdateTime; // 0x390(0x08)
	struct FTimerHandle RetryTimer; // 0x398(0x08)

	void UpdateCombatReport(bool Override Timer); // Function InformationalScreen_Gamepad.InformationalScreen_Gamepad_C.UpdateCombatReport // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateCombatReportRoundNumber(enum class EAresGamePhase GamePhase, int32_t GameRoundNumber); // Function InformationalScreen_Gamepad.InformationalScreen_Gamepad_C.UpdateCombatReportRoundNumber // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RefreshVisibility(); // Function InformationalScreen_Gamepad.InformationalScreen_Gamepad_C.RefreshVisibility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShouldOtherScreenOverrideVisibility(struct AShooterCharacter* InCharacter, struct AShooterGameState* InGameState, bool& OverrideVisibility, bool& CanBeVisible); // Function InformationalScreen_Gamepad.InformationalScreen_Gamepad_C.ShouldOtherScreenOverrideVisibility // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateVisibility(); // Function InformationalScreen_Gamepad.InformationalScreen_Gamepad_C.UpdateVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnGamePhaseChange(enum class EAresGamePhase NewGamePhase, int32_t RoundNumberEnded); // Function InformationalScreen_Gamepad.InformationalScreen_Gamepad_C.OnGamePhaseChange // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCinematicModeUpdated(); // Function InformationalScreen_Gamepad.InformationalScreen_Gamepad_C.OnCinematicModeUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnToggleVisibility(); // Function InformationalScreen_Gamepad.InformationalScreen_Gamepad_C.OnToggleVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function InformationalScreen_Gamepad.InformationalScreen_Gamepad_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ResetPlayerToggle(); // Function InformationalScreen_Gamepad.InformationalScreen_Gamepad_C.ResetPlayerToggle // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAliveStateChanged(bool NewValue); // Function InformationalScreen_Gamepad.InformationalScreen_Gamepad_C.OnAliveStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnThreeSecCountdownStart(); // Function InformationalScreen_Gamepad.InformationalScreen_Gamepad_C.OnThreeSecCountdownStart // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCountdownEventsReset(); // Function InformationalScreen_Gamepad.InformationalScreen_Gamepad_C.OnCountdownEventsReset // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function InformationalScreen_Gamepad.InformationalScreen_Gamepad_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPossessedCharacterChanged(struct AShooterCharacter* NewValue, struct AShooterCharacter* PrevValue); // Function InformationalScreen_Gamepad.InformationalScreen_Gamepad_C.OnPossessedCharacterChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsInSpawnZoneUpdated(bool NewIsInSpawn, struct AShooterCharacter* Character); // Function InformationalScreen_Gamepad.InformationalScreen_Gamepad_C.OnIsInSpawnZoneUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSpawnedCharacterChanged(struct AShooterCharacter* NewValue); // Function InformationalScreen_Gamepad.InformationalScreen_Gamepad_C.OnSpawnedCharacterChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function InformationalScreen_Gamepad.InformationalScreen_Gamepad_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnViewModeChanged(enum class EAresPlayerViewTargetMode NewPlayerViewTargetMode); // Function InformationalScreen_Gamepad.InformationalScreen_Gamepad_C.OnViewModeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Event Set Player State(struct AShooterPlayerState* PlayerState); // Function InformationalScreen_Gamepad.InformationalScreen_Gamepad_C.Event Set Player State // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAresPlayerStateChanged(struct AAresPlayerStateBase* NewValue); // Function InformationalScreen_Gamepad.InformationalScreen_Gamepad_C.OnAresPlayerStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EventUpdateCombatReportProfiled(); // Function InformationalScreen_Gamepad.InformationalScreen_Gamepad_C.EventUpdateCombatReportProfiled // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RetryUpdateCombatReportProfiled(); // Function InformationalScreen_Gamepad.InformationalScreen_Gamepad_C.RetryUpdateCombatReportProfiled // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EventUpdateCombatReport(); // Function InformationalScreen_Gamepad.InformationalScreen_Gamepad_C.EventUpdateCombatReport // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EventUpdateCombatReportWithOverride(); // Function InformationalScreen_Gamepad.InformationalScreen_Gamepad_C.EventUpdateCombatReportWithOverride // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnGameStateChanged(); // Function InformationalScreen_Gamepad.InformationalScreen_Gamepad_C.OnGameStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EventCombatReportDirtied(); // Function InformationalScreen_Gamepad.InformationalScreen_Gamepad_C.EventCombatReportDirtied // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnViewTargetChanged(struct AActor* NewViewTarget); // Function InformationalScreen_Gamepad.InformationalScreen_Gamepad_C.OnViewTargetChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AliveStateChanged(bool NewValue); // Function InformationalScreen_Gamepad.InformationalScreen_Gamepad_C.AliveStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnShellClosed(struct TArray<struct FName>& ScreenUrl); // Function InformationalScreen_Gamepad.InformationalScreen_Gamepad_C.OnShellClosed // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_InformationalScreen_Gamepad(int32_t EntryPoint); // Function InformationalScreen_Gamepad.InformationalScreen_Gamepad_C.ExecuteUbergraph_InformationalScreen_Gamepad // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnCombatReportInfoUpdated__DelegateSignature(struct FRoundReports RoundReport); // Function InformationalScreen_Gamepad.InformationalScreen_Gamepad_C.OnCombatReportInfoUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCombatReportVisibilityChanged__DelegateSignature(bool NewVisibility); // Function InformationalScreen_Gamepad.InformationalScreen_Gamepad_C.OnCombatReportVisibilityChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

