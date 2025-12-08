// BlueprintGeneratedClass Comp_Actor_MultiTargetHandler_Buff.Comp_Actor_MultiTargetHandler_Buff_C
// Size: 0x1a9 (Inherited: 0xd8)
struct UComp_Actor_MultiTargetHandler_Buff_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct TMap<struct AActor*, struct FActiveGameplayEffectHandle> ActorAndBuffID_Map; // 0xe0(0x50)
	bool RemoveAllActiveBuffsOnEndPlay; // 0x130(0x01)
	char pad_131[0x3]; // 0x131(0x03)
	int32_t StacksRemoved; // 0x134(0x04)
	struct UAresGameplayBuff* BuffClass; // 0x138(0x08)
	double BuffLevel; // 0x140(0x08)
	struct FMulticastInlineDelegate AuthBuffApplied; // 0x148(0x10)
	struct FMulticastInlineDelegate AuthBuffRemoved; // 0x158(0x10)
	bool ShouldTrackStatistics; // 0x168(0x01)
	enum class ECharacterAbilityStatisticList Statistic; // 0x169(0x01)
	enum class EAresAlliance StatisticAlliance; // 0x16a(0x01)
	bool Allow Reapply; // 0x16b(0x01)
	bool CanApplyToDeadCharacters; // 0x16c(0x01)
	bool AllowReapplyIfBuffIsNotActive; // 0x16d(0x01)
	char pad_16E[0x2]; // 0x16e(0x02)
	struct FMulticastInlineDelegate Auth_BuffApplied_Actor; // 0x170(0x10)
	struct FMulticastInlineDelegate Auth_BuffRemoved_Actor; // 0x180(0x10)
	struct FMulticastInlineDelegate AuthBuffPreRemoved; // 0x190(0x10)
	int32_t EventID; // 0x1a0(0x04)
	bool ShouldTrackTelemetry; // 0x1a4(0x01)
	bool AllowApplyBuff; // 0x1a5(0x01)
	bool ShouldGatherEnemyDeathTelemetry; // 0x1a6(0x01)
	bool ShouldGatherTargetKillTelemetry; // 0x1a7(0x01)
	enum class EAresAlliance TargetKillTelemetryAlliance; // 0x1a8(0x01)

	void TrackTargetKillsWhileBuffed(struct AShooterCharacter* KillerCharacter, struct AShooterCharacter* VictimCharacter, struct UDamageResponse* KillDamageResponse); // Function Comp_Actor_MultiTargetHandler_Buff.Comp_Actor_MultiTargetHandler_Buff_C.TrackTargetKillsWhileBuffed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TrackEnemyDeathWhileBuffed(struct AShooterCharacter* Victim, struct UDamageResponse* Response); // Function Comp_Actor_MultiTargetHandler_Buff.Comp_Actor_MultiTargetHandler_Buff_C.TrackEnemyDeathWhileBuffed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthRemoveBuffsAndStopApplying(); // Function Comp_Actor_MultiTargetHandler_Buff.Comp_Actor_MultiTargetHandler_Buff_C.AuthRemoveBuffsAndStopApplying // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ActorIsValidToBuff(struct AActor* InActor, bool& IsValid); // Function Comp_Actor_MultiTargetHandler_Buff.Comp_Actor_MultiTargetHandler_Buff_C.ActorIsValidToBuff // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Auth_RemoveBuff_Actor(struct AActor* InActor); // Function Comp_Actor_MultiTargetHandler_Buff.Comp_Actor_MultiTargetHandler_Buff_C.Auth_RemoveBuff_Actor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Auth_ApplyBuff_Actor(struct AActor* InActor, struct AActor* DamageCauser, struct APawn* InstigatorPawn, struct FActiveGameplayEffectHandle& BuffHandle, bool& HandleFound, bool& WasApplicationSuccessful); // Function Comp_Actor_MultiTargetHandler_Buff.Comp_Actor_MultiTargetHandler_Buff_C.Auth_ApplyBuff_Actor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool ShouldReapplyBuff(struct AActor* InActor); // Function Comp_Actor_MultiTargetHandler_Buff.Comp_Actor_MultiTargetHandler_Buff_C.ShouldReapplyBuff // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void OLD_AuthApplyBuffToShooterCharacter(struct AShooterCharacter* InShooterCharacter, struct AActor* DamageCauser, struct APawn* InstigatorPawn, struct FActiveGameplayEffectHandle& BuffHandle, bool& HandleFound); // Function Comp_Actor_MultiTargetHandler_Buff.Comp_Actor_MultiTargetHandler_Buff_C.OLD_AuthApplyBuffToShooterCharacter // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthGetActorAndBuffIdMap(struct TMap<struct AActor*, struct FActiveGameplayEffectHandle>& ActorAndBuffID_Map); // Function Comp_Actor_MultiTargetHandler_Buff.Comp_Actor_MultiTargetHandler_Buff_C.AuthGetActorAndBuffIdMap // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void AuthGetAppliedActors(struct TArray<struct AActor*>& Keys); // Function Comp_Actor_MultiTargetHandler_Buff.Comp_Actor_MultiTargetHandler_Buff_C.AuthGetAppliedActors // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	int32_t AuthNumberOfActiveBuffs(); // Function Comp_Actor_MultiTargetHandler_Buff.Comp_Actor_MultiTargetHandler_Buff_C.AuthNumberOfActiveBuffs // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void AuthRemoveAllActiveBuffs(); // Function Comp_Actor_MultiTargetHandler_Buff.Comp_Actor_MultiTargetHandler_Buff_C.AuthRemoveAllActiveBuffs // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthBuffActiveOnActor(struct AActor* InActor, bool& BuffActive); // Function Comp_Actor_MultiTargetHandler_Buff.Comp_Actor_MultiTargetHandler_Buff_C.AuthBuffActiveOnActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void OLD_AuthRemoveBuffFromActor(struct AShooterCharacter* InShooterCharacter); // Function Comp_Actor_MultiTargetHandler_Buff.Comp_Actor_MultiTargetHandler_Buff_C.OLD_AuthRemoveBuffFromActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function Comp_Actor_MultiTargetHandler_Buff.Comp_Actor_MultiTargetHandler_Buff_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Comp_Actor_MultiTargetHandler_Buff(int32_t EntryPoint); // Function Comp_Actor_MultiTargetHandler_Buff.Comp_Actor_MultiTargetHandler_Buff_C.ExecuteUbergraph_Comp_Actor_MultiTargetHandler_Buff // (Final|UbergraphFunction) // @ game+0x19be2f0
	void AuthBuffPreRemoved__DelegateSignature(struct AActor* Target, struct AActor* Causer, struct AActor* Instigator, struct FActiveGameplayEffectHandle Handle); // Function Comp_Actor_MultiTargetHandler_Buff.Comp_Actor_MultiTargetHandler_Buff_C.AuthBuffPreRemoved__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Auth_BuffRemoved_Actor__DelegateSignature(struct AActor* Actor, struct AActor* Causer, struct AActor* Instigator); // Function Comp_Actor_MultiTargetHandler_Buff.Comp_Actor_MultiTargetHandler_Buff_C.Auth_BuffRemoved_Actor__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Auth_BuffApplied_Actor__DelegateSignature(struct AActor* Actor); // Function Comp_Actor_MultiTargetHandler_Buff.Comp_Actor_MultiTargetHandler_Buff_C.Auth_BuffApplied_Actor__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthBuffRemoved__DelegateSignature(struct AShooterCharacter* ShooterCharacter, struct AActor* Causer, struct AActor* Instigator); // Function Comp_Actor_MultiTargetHandler_Buff.Comp_Actor_MultiTargetHandler_Buff_C.AuthBuffRemoved__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthBuffApplied__DelegateSignature(struct AShooterCharacter* ShooterCharacter, struct FActiveGameplayEffectHandle Handle); // Function Comp_Actor_MultiTargetHandler_Buff.Comp_Actor_MultiTargetHandler_Buff_C.AuthBuffApplied__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

