// WidgetBlueprintGeneratedClass AbilityCastsReportWidget.AbilityCastsReportWidget_C
// Size: 0x468 (Inherited: 0x3e0)
struct UAbilityCastsReportWidget_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x3e8(0x08)
	struct FText CastTest; // 0x3f0(0x18)
	struct AShooterCharacter* SpawnedCharacter; // 0x408(0x08)
	struct TArray<struct USingleAbilityCastReportWidget_C*> AllCastWidgets; // 0x410(0x10)
	int32_t NumPreCachedWidgets; // 0x420(0x04)
	char pad_424[0x4]; // 0x424(0x04)
	struct UOverlay* HeaderOverlay; // 0x428(0x08)
	struct UCommonVisibilitySwitcher* CastsInfoSwitcher; // 0x430(0x08)
	struct UVerticalBox* CastsContainer; // 0x438(0x08)
	struct UWidget* CastsBlockerVisual; // 0x440(0x08)
	struct UCommonVisibilitySwitcher* HeaderContentSwitcher; // 0x448(0x08)
	struct UWidget* ShowAbilityHeader; // 0x450(0x08)
	struct UWidget* HideAbilityHeader; // 0x458(0x08)
	struct UComp_AbilityStatisticsReplicator_C* AbilityStatisticsComponent; // 0x460(0x08)

	bool GameModeClassIsHURM(struct AGameModeBase* GameModeClass); // Function AbilityCastsReportWidget.AbilityCastsReportWidget_C.GameModeClassIsHURM // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Update Casts Display(); // Function AbilityCastsReportWidget.AbilityCastsReportWidget_C.Update Casts Display // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShouldHideCasts(struct TArray<struct FCharacterAbilityCastInfo>& AbilityCastsThisRound, bool& ShouldHide); // Function AbilityCastsReportWidget.AbilityCastsReportWidget_C.ShouldHideCasts // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void HideCasts(); // Function AbilityCastsReportWidget.AbilityCastsReportWidget_C.HideCasts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowCasts(); // Function AbilityCastsReportWidget.AbilityCastsReportWidget_C.ShowCasts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetRoundPhaseIndex(enum class EAresGamePhase RoundPhase, int32_t& Index); // Function AbilityCastsReportWidget.AbilityCastsReportWidget_C.GetRoundPhaseIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void CompareCastTimes(struct FCharacterAbilityCastInfo& CastA, struct FCharacterAbilityCastInfo& CastB, bool& IsABeforeB); // Function AbilityCastsReportWidget.AbilityCastsReportWidget_C.CompareCastTimes // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void CreateSingleCastWidget(struct APlayerController* OwningPlayer, struct USingleAbilityCastReportWidget_C*& Created); // Function AbilityCastsReportWidget.AbilityCastsReportWidget_C.CreateSingleCastWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddAndPopulateSingleCastWidget(struct FCharacterAbilityCastInfo AbilityCastInfo); // Function AbilityCastsReportWidget.AbilityCastsReportWidget_C.AddAndPopulateSingleCastWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShouldBeVisible(bool& bIsVisible); // Function AbilityCastsReportWidget.AbilityCastsReportWidget_C.ShouldBeVisible // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void FindCastInsertionPoint(struct TArray<struct FCharacterAbilityCastInfo>& SortedArray, struct FCharacterAbilityCastInfo& CharacterAbilityCastInfo, int32_t& InsertionIndex); // Function AbilityCastsReportWidget.AbilityCastsReportWidget_C.FindCastInsertionPoint // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SortAbilityCastsByTime(struct TArray<struct FCharacterAbilityCastInfo>& UnsortedArray, struct TArray<struct FCharacterAbilityCastInfo>& SortedArray); // Function AbilityCastsReportWidget.AbilityCastsReportWidget_C.SortAbilityCastsByTime // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function AbilityCastsReportWidget.AbilityCastsReportWidget_C.SetHUDModel // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SpawnedCharacterChanged_Event_1(struct AShooterCharacter* NewValue); // Function AbilityCastsReportWidget.AbilityCastsReportWidget_C.SpawnedCharacterChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnGameFeatureToggleChanged_NotifyBlueprint_Event_1(enum class EGameFeatureToggleName GameFeatureToggleName, bool bEnabled); // Function AbilityCastsReportWidget.AbilityCastsReportWidget_C.OnGameFeatureToggleChanged_NotifyBlueprint_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Event Update Visibility(); // Function AbilityCastsReportWidget.AbilityCastsReportWidget_C.Event Update Visibility // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreCacheWidgets(); // Function AbilityCastsReportWidget.AbilityCastsReportWidget_C.PreCacheWidgets // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCharacterDeath(struct AShooterCharacter* Character, struct UDamageResponse* Response); // Function AbilityCastsReportWidget.AbilityCastsReportWidget_C.OnCharacterDeath // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAbilityCastsUpdated(); // Function AbilityCastsReportWidget.AbilityCastsReportWidget_C.OnAbilityCastsUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnGamePhaseChanged(enum class EAresGamePhase NewGamePhase, int32_t RoundNumberEnded); // Function AbilityCastsReportWidget.AbilityCastsReportWidget_C.OnGamePhaseChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_AbilityCastsReportWidget(int32_t EntryPoint); // Function AbilityCastsReportWidget.AbilityCastsReportWidget_C.ExecuteUbergraph_AbilityCastsReportWidget // (Final|UbergraphFunction) // @ game+0x19be2f0
};

