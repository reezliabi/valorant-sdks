// BlueprintGeneratedClass Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C
// Size: 0x218 (Inherited: 0xe8)
struct UComp_FXC_AudioBasic_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct UBaseAudioComponent_C* AudioEmitter; // 0xf0(0x08)
	struct UAkAudioEvent* PlayOnStart; // 0xf8(0x08)
	enum class PerspectiveInstigatorScopeEnum PerspectiveObject; // 0x100(0x01)
	bool MuteThirdPerson; // 0x101(0x01)
	bool PostImmediatelty; // 0x102(0x01)
	bool EndOnOwnerDeath; // 0x103(0x01)
	char pad_104[0x4]; // 0x104(0x04)
	struct FMulticastInlineDelegate OnAudioEmitterStarted; // 0x108(0x10)
	bool AddTailForSound; // 0x118(0x01)
	bool MuteFirstPerson; // 0x119(0x01)
	char pad_11A[0x6]; // 0x11a(0x06)
	struct UFogOfWarComponent* FogOfWarComponent; // 0x120(0x08)
	bool PlayEnemyAudioDuringPreRound; // 0x128(0x01)
	bool EnableOcclusion; // 0x129(0x01)
	bool ContinuousOcclusion; // 0x12a(0x01)
	char pad_12B[0x5]; // 0x12b(0x05)
	struct TArray<struct AActor*> OcclusionIgnoreActors; // 0x130(0x10)
	bool EnableDopplerRTPC; // 0x140(0x01)
	bool EnableComponentDopplerVelocityOffset; // 0x141(0x01)
	bool SetFacingAngle; // 0x142(0x01)
	bool UseSharedAudioEmitter; // 0x143(0x01)
	bool BypassPerspectiveRefresh; // 0x144(0x01)
	bool StopEmitterAtRoundEnd; // 0x145(0x01)
	enum class Enum_AttenuationVisualization VisualizeAttenuation; // 0x146(0x01)
	char pad_147[0x1]; // 0x147(0x01)
	double VisualizationDurationOverride; // 0x148(0x08)
	int32_t MinSeekTime; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct UObject* Context; // 0x158(0x08)
	struct UAkAudioEvent* PlayingEvent; // 0x160(0x08)
	int32_t FOWHandle; // 0x168(0x04)
	bool MuteContext; // 0x16c(0x01)
	bool MuteNonContext; // 0x16d(0x01)
	char pad_16E[0x2]; // 0x16e(0x02)
	double PostEventCallbackDuration; // 0x170(0x08)
	struct TMap<int32_t, int32_t> EventIDPlayPositionMap; // 0x178(0x50)
	bool HasAttemptedPostEvent; // 0x1c8(0x01)
	char pad_1C9[0x3]; // 0x1c9(0x03)
	int32_t PlayingID; // 0x1cc(0x04)
	double ElapsedEffectTime; // 0x1d0(0x08)
	double RefreshElapsedEffectTime; // 0x1d8(0x08)
	double PostEventElapsedEffectTime; // 0x1e0(0x08)
	struct FString CurrentPerspective; // 0x1e8(0x10)
	bool IsFoWHandleValid; // 0x1f8(0x01)
	char pad_1F9[0x7]; // 0x1f9(0x07)
	struct AShooterGameState* ShooterGameState; // 0x200(0x08)
	double LastMarkerSeekTime; // 0x208(0x08)
	double MarkerSeekCooldown; // 0x210(0x08)

	void CheckEffectClassIsValidForRefresh(bool& IsValidForRefresh); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.CheckEffectClassIsValidForRefresh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void CheckMarkerCooldownExpired(bool& HasMarkerCooldownExpired, double& ElapsedEffectTime); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.CheckMarkerCooldownExpired // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateElapsedEffectTime(); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.UpdateElapsedEffectTime // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SeekOnMarkerEvent(); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.SeekOnMarkerEvent // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RefreshAudioEmitterPlayback(bool ForceRefresh); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.RefreshAudioEmitterPlayback // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CheckInstigatorForAudioEventOverride(struct UAkAudioEvent* AudioEvent, struct UAkAudioEvent*& OutAudioEvent); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.CheckInstigatorForAudioEventOverride // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void PlayNewEventAndSeek(double ElapsedEffectTime); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.PlayNewEventAndSeek // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ValidateAttachTypeAgainstPerspectiveSettings(); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.ValidateAttachTypeAgainstPerspectiveSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TriggerLoopStopEvent(); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.TriggerLoopStopEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddAudioTailPadding(); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.AddAudioTailPadding // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayNewEvent(double StartTime); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.PlayNewEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetSwitch(struct FString SwitchName, struct FString SwitchValue); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.SetSwitch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetRTPC(struct FString RTPC, double Value); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.SetRTPC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PostAssociatedAkEvent(); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.PostAssociatedAkEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool ShouldPlayForContext(); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.ShouldPlayForContext // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void ShouldPlaySound(struct AActor* Actor, struct UObject* Context, bool& Should Play); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.ShouldPlaySound // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void StopFogOfWar(); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.StopFogOfWar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StartFogOfWar(); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.StartFogOfWar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetAudioEmitter(struct UBaseAudioComponent_C*& AudioEmitter); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.GetAudioEmitter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	bool ShouldPlayForPerspective(bool IsFirstPerson); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.ShouldPlayForPerspective // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetPerspectiveSwitch(struct FString& SWITCH); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.GetPerspectiveSwitch // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetPlayOnStartEvent(bool FirstPerson, struct UAkAudioEvent*& PlayOnStart); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.GetPlayOnStartEvent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetAkComponent(struct UBaseAudioComponent_C*& AudioEmitter); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.GetAkComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ResetEffect(); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Stop Sound(); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.Stop Sound // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PostEventCallback(enum class EAkCallbackType CallbackType, struct UAkCallbackInfo* CallbackInfo); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.PostEventCallback // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ForceLoopStop(); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.ForceLoopStop // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerViewTargetChanged(); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.OnPlayerViewTargetChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerViewTargetModeChanged(enum class EAresPlayerViewTargetMode NewPlayerViewTargetMode); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.OnPlayerViewTargetModeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnReplayTimeDilationCatchupFinished(bool bWasSuccessful); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.OnReplayTimeDilationCatchupFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsPlayingChanged(bool bIsPlaying); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.OnIsPlayingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnGamePhaseChanged(enum class EAresGamePhase NewGamePhase, int32_t RoundNumberEnded); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.OnGamePhaseChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Comp_FXC_AudioBasic(int32_t EntryPoint); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.ExecuteUbergraph_Comp_FXC_AudioBasic // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnAudioEmitterStarted__DelegateSignature(struct UBaseAudioComponent_C* AudioEmitter); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.OnAudioEmitterStarted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

