// BlueprintGeneratedClass BotTrainingMatchVOComponent.BotTrainingMatchVOComponent_C
// Size: 0x1b9 (Inherited: 0xd8)
struct UBotTrainingMatchVOComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct ABotTrainingMatch_GameMode_C* As Bot Training Match Game Mode; // 0xe0(0x08)
	struct ASwiftplay_EoRCredits_GameState_C* As Swiftplay Eo RCredits Game State; // 0xe8(0x08)
	double SiteHitVODelay; // 0xf0(0x08)
	double RoundStartVODelay; // 0xf8(0x08)
	enum class BombSiteEnum Current Set Play Target Site; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	double TryPlayBombPickupVODelay; // 0x108(0x08)
	bool PlantSpikeNVCOnCooldown; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	double TryPlantSpikeNVCCheckInterval; // 0x118(0x08)
	struct AMapMarkupRoom* SiteRoom; // 0x120(0x08)
	double PlantSpikeNVCDelay; // 0x128(0x08)
	double MinSpikePlantNVCCooldown; // 0x130(0x08)
	double MaxSpikePlantNVCCooldown; // 0x138(0x08)
	struct TMap<struct AShooterCharacter*, double> DetectedCharacterLastPingedTime; // 0x140(0x50)
	double RepeatedMinPingDelay; // 0x190(0x08)
	bool RushThemNVCOnCooldown; // 0x198(0x01)
	char pad_199[0x7]; // 0x199(0x07)
	double RushThemNVCDelay; // 0x1a0(0x08)
	struct FTimerHandle TimerHandle_TryPlantSpike; // 0x1a8(0x08)
	struct FTimerHandle TimerHandle_PlantSpike; // 0x1b0(0x08)
	bool LetsRotateNVCOnCooldown; // 0x1b8(0x01)

	void TryChatNVC(struct AShooterCharacter* InCharacter, enum class NonVerbalCommTypesEnum NVC); // Function BotTrainingMatchVOComponent.BotTrainingMatchVOComponent_C.TryChatNVC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TryPlayLetsRotateNVC(struct UJobPerformerComponent_Base* Performer); // Function BotTrainingMatchVOComponent.BotTrainingMatchVOComponent_C.TryPlayLetsRotateNVC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Try Play Rush Them NVC(struct UJobPerformerComponent_Base* JobPerformer, struct UJobObject_Base* NewJob); // Function BotTrainingMatchVOComponent.BotTrainingMatchVOComponent_C.Try Play Rush Them NVC // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Bind Rush Them NVC to Attack Start(); // Function BotTrainingMatchVOComponent.BotTrainingMatchVOComponent_C.Bind Rush Them NVC to Attack Start // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Play Rush Them NVC(); // Function BotTrainingMatchVOComponent.BotTrainingMatchVOComponent_C.Play Rush Them NVC // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TryCautionPing(struct AController_ExamplePlayerBot_C* BotController, struct AShooterCharacter* DetectedCharacter, bool& Pinged); // Function BotTrainingMatchVOComponent.BotTrainingMatchVOComponent_C.TryCautionPing // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RefreshPlantSpikeNVCCooldown(); // Function BotTrainingMatchVOComponent.BotTrainingMatchVOComponent_C.RefreshPlantSpikeNVCCooldown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Play Plant Spike NVC(); // Function BotTrainingMatchVOComponent.BotTrainingMatchVOComponent_C.Play Plant Spike NVC // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateBombSiteRoom(struct AMapMarkupRoom* NewRoom); // Function BotTrainingMatchVOComponent.BotTrainingMatchVOComponent_C.UpdateBombSiteRoom // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetBombPlantLocationForSite(struct FVector& BombLocation); // Function BotTrainingMatchVOComponent.BotTrainingMatchVOComponent_C.GetBombPlantLocationForSite // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Try To Prep Plant Spike NVC(); // Function BotTrainingMatchVOComponent.BotTrainingMatchVOComponent_C.Try To Prep Plant Spike NVC // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TryPlayBombPickup(); // Function BotTrainingMatchVOComponent.BotTrainingMatchVOComponent_C.TryPlayBombPickup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlaySiteHitVO(); // Function BotTrainingMatchVOComponent.BotTrainingMatchVOComponent_C.PlaySiteHitVO // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayRoundStartVO(); // Function BotTrainingMatchVOComponent.BotTrainingMatchVOComponent_C.PlayRoundStartVO // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Get Living Attacker Bot States(struct TArray<bool>& BotPlayerStates); // Function BotTrainingMatchVOComponent.BotTrainingMatchVOComponent_C.Get Living Attacker Bot States // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetHasBombBeenPickedUpThisRound(); // Function BotTrainingMatchVOComponent.BotTrainingMatchVOComponent_C.GetHasBombBeenPickedUpThisRound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateAndGetSetPlayTargetSite(enum class BombSiteEnum& Current Set Play Target Site); // Function BotTrainingMatchVOComponent.BotTrainingMatchVOComponent_C.UpdateAndGetSetPlayTargetSite // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPhaseChange_Event(enum class EAresGamePhase NewPhase); // Function BotTrainingMatchVOComponent.BotTrainingMatchVOComponent_C.OnPhaseChange_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetTargetSiteVariable(); // Function BotTrainingMatchVOComponent.BotTrainingMatchVOComponent_C.SetTargetSiteVariable // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function BotTrainingMatchVOComponent.BotTrainingMatchVOComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_BotTrainingMatchVOComponent(int32_t EntryPoint); // Function BotTrainingMatchVOComponent.BotTrainingMatchVOComponent_C.ExecuteUbergraph_BotTrainingMatchVOComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

