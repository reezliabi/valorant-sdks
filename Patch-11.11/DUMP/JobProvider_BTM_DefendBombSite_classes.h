// BlueprintGeneratedClass JobProvider_BTM_DefendBombSite.JobProvider_BTM_DefendBombSite_C
// Size: 0x370 (Inherited: 0x1c8)
struct UJobProvider_BTM_DefendBombSite_C : UJobProvider_BotTrainingMatch_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1c8(0x08)
	struct TArray<struct AMapMarkupRoom*> Cached_SiteRooms_1; // 0x1d0(0x10)
	struct TMap<int32_t, struct FSetPlayData_ExamplePlayerBot_Defender> SiteAssignmentsByRound; // 0x1e0(0x50)
	struct TMap<struct AShooterPlayerState*, struct AMapMarkupRoom*> GuessedEnemyLocations; // 0x230(0x50)
	struct TMap<struct AMapMarkupRoom*, int32_t> GuessedDeltasByRoom; // 0x280(0x50)
	struct AMapMarkupRoom* AttackedRoomGuess; // 0x2d0(0x08)
	struct AMapMarkupRoom* BombPlantRoomGuess; // 0x2d8(0x08)
	double DefenseReallocationTimerDuration; // 0x2e0(0x08)
	struct FTimerHandle DefenseReallocationTimerHandle; // 0x2e8(0x08)
	double EnemyThresholdForFullSiteRotation; // 0x2f0(0x08)
	struct TArray<struct UObject*> AbilityGameObjectsToTrack; // 0x2f8(0x10)
	double AbilityUsageInterval; // 0x308(0x08)
	bool AbilityUsageDetectedThisRound; // 0x310(0x01)
	char pad_311[0x7]; // 0x311(0x07)
	struct FTimerHandle EnemyUtilityTimerHandle; // 0x318(0x08)
	struct TSet<struct AActor*> PerceivedEnemyThisTick; // 0x320(0x50)

	void Auth_InitializeForRound(); // Function JobProvider_BTM_DefendBombSite.JobProvider_BTM_DefendBombSite_C.Auth_InitializeForRound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Auth_CleanStateForRound(); // Function JobProvider_BTM_DefendBombSite.JobProvider_BTM_DefendBombSite_C.Auth_CleanStateForRound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Auth_ToggleGameplayBindings(bool ToggleOn); // Function JobProvider_BTM_DefendBombSite.JobProvider_BTM_DefendBombSite_C.Auth_ToggleGameplayBindings // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CanProvideJobsThisRound(bool& CanProvideJobs); // Function JobProvider_BTM_DefendBombSite.JobProvider_BTM_DefendBombSite_C.CanProvideJobsThisRound // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Check for Enemy Utility Usage(); // Function JobProvider_BTM_DefendBombSite.JobProvider_BTM_DefendBombSite_C.Check for Enemy Utility Usage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Auth_OnPendingReadyUpJobsEmptied(); // Function JobProvider_BTM_DefendBombSite.JobProvider_BTM_DefendBombSite_C.Auth_OnPendingReadyUpJobsEmptied // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsJobPerformerInRoom(struct AMapMarkupRoom* Room, struct UJobPerformerComponent_Base* Performer, bool& IsInRoom); // Function JobProvider_BTM_DefendBombSite.JobProvider_BTM_DefendBombSite_C.IsJobPerformerInRoom // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Auth_InvalidateAbsentPerformerJobs(struct AMapMarkupRoom* TargetRoom, int32_t& NumInvalidated); // Function JobProvider_BTM_DefendBombSite.JobProvider_BTM_DefendBombSite_C.Auth_InvalidateAbsentPerformerJobs // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CanAlliesSeeActor(struct AActor* Actor, bool& CanSee); // Function JobProvider_BTM_DefendBombSite.JobProvider_BTM_DefendBombSite_C.CanAlliesSeeActor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Auth_GenerateFullSiteRotationJobs(); // Function JobProvider_BTM_DefendBombSite.JobProvider_BTM_DefendBombSite_C.Auth_GenerateFullSiteRotationJobs // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetGuessedNumEnemiesForRoom(struct AMapMarkupRoom* Room, int32_t& NumEnemies); // Function JobProvider_BTM_DefendBombSite.JobProvider_BTM_DefendBombSite_C.GetGuessedNumEnemiesForRoom // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetGuessedDeltaForRoom(struct AMapMarkupRoom* Room, bool& Success, int32_t& Delta); // Function JobProvider_BTM_DefendBombSite.JobProvider_BTM_DefendBombSite_C.GetGuessedDeltaForRoom // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Auth_UpdateDeltasByRoom(); // Function JobProvider_BTM_DefendBombSite.JobProvider_BTM_DefendBombSite_C.Auth_UpdateDeltasByRoom // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Auth_InvalidateUnclaimedJobs(); // Function JobProvider_BTM_DefendBombSite.JobProvider_BTM_DefendBombSite_C.Auth_InvalidateUnclaimedJobs // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Auth_InvalidateReadyUpJobs(int32_t& NumValidReadyUps); // Function JobProvider_BTM_DefendBombSite.JobProvider_BTM_DefendBombSite_C.Auth_InvalidateReadyUpJobs // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Auth_UpdateAttackedRoomGuess(bool& DidGuessChange); // Function JobProvider_BTM_DefendBombSite.JobProvider_BTM_DefendBombSite_C.Auth_UpdateAttackedRoomGuess // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Auth_UpdateEnemyLocationGuesses(struct AShooterCharacter* EnemyShooterCharacter, bool& DidGuessChange); // Function JobProvider_BTM_DefendBombSite.JobProvider_BTM_DefendBombSite_C.Auth_UpdateEnemyLocationGuesses // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Auth_TryReallocateDefenseJobs_Internal(); // Function JobProvider_BTM_DefendBombSite.JobProvider_BTM_DefendBombSite_C.Auth_TryReallocateDefenseJobs_Internal // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Auth_TryReallocateDefenseJobs(); // Function JobProvider_BTM_DefendBombSite.JobProvider_BTM_DefendBombSite_C.Auth_TryReallocateDefenseJobs // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Auth_GenerateInitialDefenseJobs(); // Function JobProvider_BTM_DefendBombSite.JobProvider_BTM_DefendBombSite_C.Auth_GenerateInitialDefenseJobs // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetOffSiteDefenseRoom(struct AMapMarkupRoom* TargetRoom, struct AMapMarkupRoom*& OffSiteRoom); // Function JobProvider_BTM_DefendBombSite.JobProvider_BTM_DefendBombSite_C.GetOffSiteDefenseRoom // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBombPlanted_Event(struct FVector PlantLocation, struct AShooterCharacter* BombPlanter, enum class BombSiteEnum PlantSite); // Function JobProvider_BTM_DefendBombSite.JobProvider_BTM_DefendBombSite_C.OnBombPlanted_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerKilled_Event(struct AOwnerExclusivePlayerInfo* Killer, struct AOwnerExclusivePlayerInfo* Victim, struct APawn* KilledPawn, struct UDamageResponse* Response, struct TArray<struct FAresAssist>& AssistList, struct UDamageType* DamageType); // Function JobProvider_BTM_DefendBombSite.JobProvider_BTM_DefendBombSite_C.OnPlayerKilled_Event // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPerceptionUpdated_Event(struct AActor* Actor, struct FAIStimulus Stimulus); // Function JobProvider_BTM_DefendBombSite.JobProvider_BTM_DefendBombSite_C.OnPerceptionUpdated_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveTick(float DeltaSeconds); // Function JobProvider_BTM_DefendBombSite.JobProvider_BTM_DefendBombSite_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_JobProvider_BTM_DefendBombSite(int32_t EntryPoint); // Function JobProvider_BTM_DefendBombSite.JobProvider_BTM_DefendBombSite_C.ExecuteUbergraph_JobProvider_BTM_DefendBombSite // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

