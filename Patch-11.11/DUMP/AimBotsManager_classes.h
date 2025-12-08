// BlueprintGeneratedClass AimBotsManager.AimBotsManager_C
// Size: 0x7e9 (Inherited: 0x4b0)
struct AAimBotsManager_C : AGameObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct UComp_TrainingBotPoolSpawner_C* Comp_DummyBotPoolSpawner_Strafe; // 0x4b8(0x08)
	struct UComp_TrainingBotPoolSpawner_C* Comp_DummyBotPoolSpawner_Hard; // 0x4c0(0x08)
	struct UComp_TrainingBotPoolSpawner_C* Comp_DummyBotPoolSpawner_Med; // 0x4c8(0x08)
	struct UComp_TrainingBotPoolSpawner_C* Comp_DummyBotPoolSpawner_Easy; // 0x4d0(0x08)
	int32_t NumBotsToSpawn_PC; // 0x4d8(0x04)
	char pad_4DC[0x4]; // 0x4dc(0x04)
	double BotDeathTearoffTime; // 0x4e0(0x08)
	struct TArray<struct AShooterCharacter*> NonPrototypeCharacters; // 0x4e8(0x10)
	bool IsChallenge; // 0x4f8(0x01)
	char pad_4F9[0x7]; // 0x4f9(0x07)
	struct FTimerHandle ChallengeTimerHandle; // 0x500(0x08)
	struct AShooterCharacter* CurrentChallengeBot; // 0x508(0x08)
	int32_t ChallengeScore; // 0x510(0x04)
	int32_t ChallengeAttemptsRemaining; // 0x514(0x04)
	struct AShooterCharacter* ForcedSpawnClass; // 0x518(0x08)
	struct FStruct_AimBots_ChallengeSettings ChallengeSettings; // 0x520(0x40)
	struct AShootableSwitch_C* CurrentChallengeSwitch; // 0x560(0x08)
	struct TArray<struct AAimBotsShootableSwitch_C*> ShootableSwitches; // 0x568(0x10)
	double SpawnMinDistance_PC; // 0x578(0x08)
	double SpawnMaxDistance_PC; // 0x580(0x08)
	double SpawnDefaultAngle_PC; // 0x588(0x08)
	double DistanceBetweenBots; // 0x590(0x08)
	int32_t SpawnMaxAttempts; // 0x598(0x04)
	char pad_59C[0x4]; // 0x59c(0x04)
	struct TSet<struct AShooterCharacter*> TrackedChallengeBots; // 0x5a0(0x50)
	struct FMulticastInlineDelegate OnChallengeFail; // 0x5f0(0x10)
	struct FMulticastInlineDelegate OnChallengeSuccess; // 0x600(0x10)
	struct TArray<struct ATextRenderActor*> ScorebordTextActors; // 0x610(0x10)
	struct TArray<struct ATextRenderActor*> RemainingTextActors; // 0x620(0x10)
	struct FMulticastInlineDelegate OnBotSpawned; // 0x630(0x10)
	bool ShouldDespawnChallengeBots; // 0x640(0x01)
	char pad_641[0x7]; // 0x641(0x07)
	double SpawnMinAngleChallenge; // 0x648(0x08)
	struct FRandomStream RandomStream; // 0x650(0x18)
	struct FMulticastInlineDelegate OnChallengeSequenceStarted; // 0x668(0x10)
	int32_t Timer; // 0x678(0x04)
	char pad_67C[0x4]; // 0x67c(0x04)
	struct FTimerHandle DisplayTimerHandle; // 0x680(0x08)
	struct TArray<struct ATextRenderActor*> Time Text Actors; // 0x688(0x10)
	struct TArray<struct ATextRenderActor*> Score Text Actors; // 0x698(0x10)
	bool Strafe; // 0x6a8(0x01)
	bool Speed Test; // 0x6a9(0x01)
	bool SkipRespawn; // 0x6aa(0x01)
	bool HasArmor; // 0x6ab(0x01)
	char pad_6AC[0x4]; // 0x6ac(0x04)
	struct FMulticastInlineDelegate OnChallengeTimerExpired; // 0x6b0(0x10)
	bool ShouldCountTimerDown; // 0x6c0(0x01)
	char pad_6C1[0x7]; // 0x6c1(0x07)
	struct AShooterCharacter* Selected_Bot_Model; // 0x6c8(0x08)
	struct AShooterCharacter* Dummy_Bot_Easy; // 0x6d0(0x08)
	struct AShooterCharacter* Dummy_Bot_Medium; // 0x6d8(0x08)
	struct AShooterCharacter* Dummy_Bot_Hard; // 0x6e0(0x08)
	struct AShooterCharacter* Dummy_Bot_Strafe; // 0x6e8(0x08)
	struct TArray<struct ATextRenderActor*> NPE_ScoreTextActors; // 0x6f0(0x10)
	struct FStruct_AimBots_ChallengeSettings SkillTestChallengeSettings; // 0x700(0x40)
	struct FMulticastInlineDelegate OnBotsReset; // 0x740(0x10)
	struct FMulticastInlineDelegate OnChallengeSequenceCompleted; // 0x750(0x10)
	struct FMulticastInlineDelegate OnChallengeSequenceAborted; // 0x760(0x10)
	struct FMulticastInlineDelegate OnPracticeBotKilled; // 0x770(0x10)
	bool Client_ChallengeSequenceActive; // 0x780(0x01)
	char pad_781[0x7]; // 0x781(0x07)
	struct FMulticastInlineDelegate OnScoreChanged; // 0x788(0x10)
	struct FMulticastInlineDelegate OnKillsRemainingChanged; // 0x798(0x10)
	struct FMulticastInlineDelegate OnTimerChanged; // 0x7a8(0x10)
	struct FMulticastInlineDelegate OnSkillTestChallengeChanged; // 0x7b8(0x10)
	int32_t NumBotsToSpawn_Console; // 0x7c8(0x04)
	char pad_7CC[0x4]; // 0x7cc(0x04)
	double SpawnDefaultAngle_Console; // 0x7d0(0x08)
	double SpawnMinDistance_Console; // 0x7d8(0x08)
	double SpawnMaxDistance_Console; // 0x7e0(0x08)
	bool InitalLoadResetComplete; // 0x7e8(0x01)

	bool GetClientChallengeSequenceActive(); // Function AimBotsManager.AimBotsManager_C.GetClientChallengeSequenceActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void IsTrainingSkillTest(bool& Result); // Function AimBotsManager.AimBotsManager_C.IsTrainingSkillTest // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Remove Bot from Pool(struct APawn_TrainingBot_C* TrainingBot); // Function AimBotsManager.AimBotsManager_C.Remove Bot from Pool // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetBotSpawner(struct UComp_TrainingBotPoolSpawner_C*& BotSpawner); // Function AimBotsManager.AimBotsManager_C.GetBotSpawner // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ClearChallengeSwitch(); // Function AimBotsManager.AimBotsManager_C.ClearChallengeSwitch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetArmorEnabled(bool Enable); // Function AimBotsManager.AimBotsManager_C.SetArmorEnabled // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ToggleBotRespawn(); // Function AimBotsManager.AimBotsManager_C.ToggleBotRespawn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ToggleStrafe(); // Function AimBotsManager.AimBotsManager_C.ToggleStrafe // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShouldContinueChallenge(bool& ShouldContinue); // Function AimBotsManager.AimBotsManager_C.ShouldContinueChallenge // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void ToggleArmor(); // Function AimBotsManager.AimBotsManager_C.ToggleArmor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateNumberByTag(struct FName Tag, int32_t Value, int32_t NumDigits); // Function AimBotsManager.AimBotsManager_C.UpdateNumberByTag // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateTimeDisplay(); // Function AimBotsManager.AimBotsManager_C.UpdateTimeDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ProcessChallengeSwitch(struct AShootableSwitch_C* ChallengeSwitch, struct FStruct_AimBots_ChallengeSettings ChallengeSettings); // Function AimBotsManager.AimBotsManager_C.ProcessChallengeSwitch // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Spawn Enemy Bot(); // Function AimBotsManager.AimBotsManager_C.Spawn Enemy Bot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetRandomStreamSeed(int32_t NewSeed); // Function AimBotsManager.AimBotsManager_C.SetRandomStreamSeed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetSpawnCharacterClass(struct AShooterCharacter*& RandomElement); // Function AimBotsManager.AimBotsManager_C.GetSpawnCharacterClass // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ForceUpdateChallengeDelay(double ChallengeBotDuration, double ChallengePostDeathDelay); // Function AimBotsManager.AimBotsManager_C.ForceUpdateChallengeDelay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddAllTextActorsWithTag(struct FName Tag, struct TArray<struct AActor*>& TargetArray); // Function AimBotsManager.AimBotsManager_C.AddAllTextActorsWithTag // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ComputeCandidateLocation(struct FVector& CandidateOffset, double& Angle, double& Distance); // Function AimBotsManager.AimBotsManager_C.ComputeCandidateLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DestroyBot(struct AShooterCharacter* ShooterCharacter); // Function AimBotsManager.AimBotsManager_C.DestroyBot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ComputeValidSpawnTransform(bool& IsValid, struct FTransform& Location, double& Angle, double& Distance); // Function AimBotsManager.AimBotsManager_C.ComputeValidSpawnTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function AimBotsManager.AimBotsManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void Event Bot Death(struct AShooterCharacter* Character, struct UDamageResponse* DamageResponse); // Function AimBotsManager.AimBotsManager_C.Event Bot Death // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthAttemptSpawnBot(); // Function AimBotsManager.AimBotsManager_C.AuthAttemptSpawnBot // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Event On Player Spawned(struct APawn* SpawnedPawn); // Function AimBotsManager.AimBotsManager_C.Event On Player Spawned // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Event Reset Bots(); // Function AimBotsManager.AimBotsManager_C.Event Reset Bots // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Event Initialize Character Classes(); // Function AimBotsManager.AimBotsManager_C.Event Initialize Character Classes // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Event Kill Bots(); // Function AimBotsManager.AimBotsManager_C.Event Kill Bots // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Event Despawn Bot(); // Function AimBotsManager.AimBotsManager_C.Event Despawn Bot // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Event Update Score(struct TArray<struct ATextRenderActor*>& TextActor, int32_t NewScore); // Function AimBotsManager.AimBotsManager_C.Event Update Score // (Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Event Update Remaining(struct TArray<struct ATextRenderActor*>& TextActor, int32_t NewRemaining); // Function AimBotsManager.AimBotsManager_C.Event Update Remaining // (Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Event Process Challenge Switch(struct AShootableSwitch_C* SWITCH, double DifficultyDelay); // Function AimBotsManager.AimBotsManager_C.Event Process Challenge Switch // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Event End Challenge(bool IsAbort); // Function AimBotsManager.AimBotsManager_C.Event End Challenge // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Event Start Challenge(struct FStruct_AimBots_ChallengeSettings ChallengeSettings); // Function AimBotsManager.AimBotsManager_C.Event Start Challenge // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Event Continue Challenge(); // Function AimBotsManager.AimBotsManager_C.Event Continue Challenge // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Event On Match Begin(); // Function AimBotsManager.AimBotsManager_C.Event On Match Begin // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Event Update Timer(); // Function AimBotsManager.AimBotsManager_C.Event Update Timer // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Event Start Timer(bool ShouldCountTimerDown, int32_t TimerStartTime); // Function AimBotsManager.AimBotsManager_C.Event Start Timer // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Event Stop Timer(); // Function AimBotsManager.AimBotsManager_C.Event Stop Timer // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Event Hide Scoreboard Text(struct TArray<struct ATextRenderActor*>& TextActor); // Function AimBotsManager.AimBotsManager_C.Event Hide Scoreboard Text // (Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Event Show Scoreboard Text(struct TArray<struct ATextRenderActor*>& TextActor); // Function AimBotsManager.AimBotsManager_C.Event Show Scoreboard Text // (Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Initialize Scoreboard(); // Function AimBotsManager.AimBotsManager_C.Initialize Scoreboard // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowNPEScoreboard(); // Function AimBotsManager.AimBotsManager_C.ShowNPEScoreboard // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnShootingRangeSettingsUpdated(struct FShootingRangeSettings ShootingRangeSettings); // Function AimBotsManager.AimBotsManager_C.OnShootingRangeSettingsUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MulticastChallengeSequenceStarted(); // Function AimBotsManager.AimBotsManager_C.MulticastChallengeSequenceStarted // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MulticastChallengeSequenceCompleted(int32_t Score); // Function AimBotsManager.AimBotsManager_C.MulticastChallengeSequenceCompleted // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MulticastChallengeSequenceAborted(); // Function AimBotsManager.AimBotsManager_C.MulticastChallengeSequenceAborted // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnModeChangedClient(int32_t ChallengeSettingIndex); // Function AimBotsManager.AimBotsManager_C.OnModeChangedClient // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Request Client Setting On Spawn(struct APawn* SpawnedPawn); // Function AimBotsManager.AimBotsManager_C.Request Client Setting On Spawn // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_AimBotsManager(int32_t EntryPoint); // Function AimBotsManager.AimBotsManager_C.ExecuteUbergraph_AimBotsManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnSkillTestChallengeChanged__DelegateSignature(int32_t ChallengeIndex); // Function AimBotsManager.AimBotsManager_C.OnSkillTestChallengeChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTimerChanged__DelegateSignature(int32_t NewTime); // Function AimBotsManager.AimBotsManager_C.OnTimerChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnKillsRemainingChanged__DelegateSignature(int32_t Remaining); // Function AimBotsManager.AimBotsManager_C.OnKillsRemainingChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnScoreChanged__DelegateSignature(int32_t NewScore); // Function AimBotsManager.AimBotsManager_C.OnScoreChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPracticeBotKilled__DelegateSignature(); // Function AimBotsManager.AimBotsManager_C.OnPracticeBotKilled__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnChallengeSequenceAborted__DelegateSignature(); // Function AimBotsManager.AimBotsManager_C.OnChallengeSequenceAborted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnChallengeSequenceCompleted__DelegateSignature(int32_t Score); // Function AimBotsManager.AimBotsManager_C.OnChallengeSequenceCompleted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBotsReset__DelegateSignature(); // Function AimBotsManager.AimBotsManager_C.OnBotsReset__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnChallengeTimerExpired__DelegateSignature(); // Function AimBotsManager.AimBotsManager_C.OnChallengeTimerExpired__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnChallengeSequenceStarted__DelegateSignature(); // Function AimBotsManager.AimBotsManager_C.OnChallengeSequenceStarted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBotSpawned__DelegateSignature(struct AShooterCharacter* BOT, double Angle, double Distance, double Duration); // Function AimBotsManager.AimBotsManager_C.OnBotSpawned__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnChallengeSuccess__DelegateSignature(struct UDamageResponse* DamageResponse); // Function AimBotsManager.AimBotsManager_C.OnChallengeSuccess__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnChallengeFail__DelegateSignature(); // Function AimBotsManager.AimBotsManager_C.OnChallengeFail__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

