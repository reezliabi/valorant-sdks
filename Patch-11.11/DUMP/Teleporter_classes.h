// BlueprintGeneratedClass Teleporter.Teleporter_C
// Size: 0x68a (Inherited: 0x4b0)
struct ATeleporter_C : AGameObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct UArrowComponent* Arrow; // 0x4b8(0x08)
	struct UEQSWorldQueryComponent* EQSWorldQuery; // 0x4c0(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x4c8(0x08)
	struct ATargetPoint* TeleportTo; // 0x4d0(0x08)
	struct FClassInclusionExclusionFilter TeleportedObjectFilter; // 0x4d8(0x50)
	struct TArray<struct AActor*> TeleportingObjects; // 0x528(0x10)
	struct TArray<struct AShooterCharacter*> OverlappingPlayerPawns; // 0x538(0x10)
	struct AShooterCharacter* TeleportingCharacter; // 0x548(0x08)
	bool FlattenTeleportActorPitch; // 0x550(0x01)
	char pad_551[0x7]; // 0x551(0x07)
	double CharacterTeleportDelay; // 0x558(0x08)
	struct TArray<struct FStruct_QueuedTeleport> QueuedTeleports; // 0x560(0x10)
	struct TArray<struct FStruct_TimeoutTeleport> TimedOutTeleports; // 0x570(0x10)
	struct UAresGameplayBuff* SicknessBuff; // 0x580(0x08)
	struct FVector DestinationDistanceCompression; // 0x588(0x18)
	double PostTeleportTimeout; // 0x5a0(0x08)
	struct FName TelemetryLabel; // 0x5a8(0x0c)
	bool PlayFXCs; // 0x5b4(0x01)
	bool RedTeleporter; // 0x5b5(0x01)
	char pad_5B6[0x2]; // 0x5b6(0x02)
	struct FVector TP_VFX_Location; // 0x5b8(0x18)
	struct FVector TP_VFX_Receiver_Location; // 0x5d0(0x18)
	struct FRotator TP_VFX_Enter_Rotation; // 0x5e8(0x18)
	struct FName DoNotPlayAudioActorTag; // 0x600(0x0c)
	char pad_60C[0x4]; // 0x60c(0x04)
	struct FTransform CharacterDestination; // 0x610(0x60)
	struct FVector CharacterOutputVelocity; // 0x670(0x18)
	bool TeleportingCharacterHasCrushed; // 0x688(0x01)
	enum class EEnvQueryStatus EQSQueryStatus; // 0x689(0x01)

	void TryPlayPostTeleportFXCsForCharacter(struct AShooterCharacter* ShooterCharacter, struct FTransform Destination); // Function Teleporter.Teleporter_C.TryPlayPostTeleportFXCsForCharacter // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayPreTeleportFXCsForCharacter(struct AShooterCharacter* ShooterCharacter); // Function Teleporter.Teleporter_C.PlayPreTeleportFXCsForCharacter // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReportTeleportNoiseForCharacter(struct AShooterCharacter* ShooterCharacter, struct FTransform Destination); // Function Teleporter.Teleporter_C.ReportTeleportNoiseForCharacter // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayTeleportFXCsAndNoiseForNonCollidingCharacter(struct ABasePlayerCharacter_C* BasePlayerCharacter, struct FTransform Destination); // Function Teleporter.Teleporter_C.PlayTeleportFXCsAndNoiseForNonCollidingCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FVector GetTeleportToLocation(); // Function Teleporter.Teleporter_C.GetTeleportToLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	bool TimestampIsInFuture(double Timestamp); // Function Teleporter.Teleporter_C.TimestampIsInFuture // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void PlayTeleportFXCsForNonCharacterActor(struct AActor* Actor); // Function Teleporter.Teleporter_C.PlayTeleportFXCsForNonCharacterActor // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TeleportCharacter(struct AShooterCharacter* Pawn); // Function Teleporter.Teleporter_C.TeleportCharacter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TeleportNonCharacterActor(struct AActor* Actor); // Function Teleporter.Teleporter_C.TeleportNonCharacterActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandlePlayerSpawned(struct APawn* SpawnedPawn); // Function Teleporter.Teleporter_C.HandlePlayerSpawned // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TryToCrushObjectsInTheWay(); // Function Teleporter.Teleporter_C.TryToCrushObjectsInTheWay // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReportTeleportNoises(struct FVector From, struct FVector To, struct AShooterCharacter* Instigator); // Function Teleporter.Teleporter_C.ReportTeleportNoises // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RemoveCharacterFromTeleportQueue(int32_t ArrayIndex); // Function Teleporter.Teleporter_C.RemoveCharacterFromTeleportQueue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddCharacterToTeleportQueue(struct AShooterCharacter* CharacterToQueue, double TeleportTimestamp); // Function Teleporter.Teleporter_C.AddCharacterToTeleportQueue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CallPreTeleportEvent(struct AActor* InActor); // Function Teleporter.Teleporter_C.CallPreTeleportEvent // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct AEffectContainer* SelectTeleporterSound(struct AActor* InActor, struct AEffectContainer* ObjectSound, struct AEffectContainer* DecoySound); // Function Teleporter.Teleporter_C.SelectTeleporterSound // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void ActorValidForTeleport(struct AActor* Actor, bool& Valid); // Function Teleporter.Teleporter_C.ActorValidForTeleport // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetTeleportDestinationPoint(struct AActor* Destination, struct AActor* Teleported, struct FVector& Location, struct FRotator& Rotation, struct FVector& Velocity); // Function Teleporter.Teleporter_C.GetTeleportDestinationPoint // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReEvaluateTeleports(); // Function Teleporter.Teleporter_C.ReEvaluateTeleports // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function Teleporter.Teleporter_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveActorEndOverlap(struct AActor* OtherActor); // Function Teleporter.Teleporter_C.ReceiveActorEndOverlap // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function Teleporter.Teleporter_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__EQSWorldQuery_K2Node_ComponentBoundEvent_1_EQSQueryCompleteSignature__DelegateSignature(enum class EEnvQueryStatus Status, struct TArray<struct FVector>& Result); // Function Teleporter.Teleporter_C.BndEvt__EQSWorldQuery_K2Node_ComponentBoundEvent_1_EQSQueryCompleteSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnExternalTeleport(struct AShooterCharacter* Character); // Function Teleporter.Teleporter_C.OnExternalTeleport // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Teleporter(int32_t EntryPoint); // Function Teleporter.Teleporter_C.ExecuteUbergraph_Teleporter // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

