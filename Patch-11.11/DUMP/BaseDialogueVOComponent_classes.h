// BlueprintGeneratedClass BaseDialogueVOComponent.BaseDialogueVOComponent_C
// Size: 0x1da (Inherited: 0xd8)
struct UBaseDialogueVOComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct TArray<struct FQueuedVOLine> Queue; // 0xe0(0x10)
	struct UAresAudioComponent* AudioComponent; // 0xf0(0x08)
	struct AEffectContainer* PlayLineCosmeticEffect; // 0xf8(0x08)
	struct FEffectID CurrentCosmeticEffect; // 0x100(0x20)
	struct UAresAudioComponent* OwnerAudioComponent; // 0x120(0x08)
	bool isWorkingThroughQueue; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	struct FMulticastInlineDelegate OnLineStart; // 0x130(0x10)
	struct FMulticastInlineDelegate OnLineEnd; // 0x140(0x10)
	struct UAkAudioEvent* CurrentVOLine; // 0x150(0x08)
	struct FMulticastInlineDelegate OnQueueFinished; // 0x158(0x10)
	struct TMap<struct AShooterCharacter*, struct UAresAudioComponent*> CharacterAudioComponentsMap; // 0x168(0x50)
	int32_t CurrentQueuePosition; // 0x1b8(0x04)
	char pad_1BC[0x4]; // 0x1bc(0x04)
	struct UAkAudioEvent* LastLinePlayed; // 0x1c0(0x08)
	struct TArray<struct TSoftClassPtr<UObject>> AllowedOwnerClasses; // 0x1c8(0x10)
	bool bIsOwnerAllowed; // 0x1d8(0x01)
	bool bShouldClearDialogue; // 0x1d9(0x01)

	void ClearQueue(); // Function BaseDialogueVOComponent.BaseDialogueVOComponent_C.ClearQueue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayAudio(struct UAkAudioEvent* event, struct TArray<struct FAkSwitch>& Switches, int32_t RandomSeed, struct AShooterCharacter* VOThrowTargetCharacter, struct UAresAudioComponent*& AudioComponent); // Function BaseDialogueVOComponent.BaseDialogueVOComponent_C.PlayAudio // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StopCurrentLine(); // Function BaseDialogueVOComponent.BaseDialogueVOComponent_C.StopCurrentLine // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsLinePendingToPlay(bool& IsPending); // Function BaseDialogueVOComponent.BaseDialogueVOComponent_C.IsLinePendingToPlay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void CheckAndSeedVOLine(struct UAkAudioEvent* event, struct TArray<struct FAkSwitch>& AkSwitchArray, struct AShooterCharacter* VOThrowTargetCharacter); // Function BaseDialogueVOComponent.BaseDialogueVOComponent_C.CheckAndSeedVOLine // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayEvent(struct TArray<struct FAkSwitch>& Switches, int32_t RandomSeed, struct UAresAudioComponent* InAudioComponent, struct UAresAudioComponent*& AudioComponent); // Function BaseDialogueVOComponent.BaseDialogueVOComponent_C.PlayEvent // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool IsLineCurrentlyPlaying(); // Function BaseDialogueVOComponent.BaseDialogueVOComponent_C.IsLineCurrentlyPlaying // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void StartLine(struct UAkAudioEvent* event, struct TArray<struct FAkSwitch>& Switches, int32_t RandomSeed, struct AShooterCharacter* VOThrowTargetCharacter); // Function BaseDialogueVOComponent.BaseDialogueVOComponent_C.StartLine // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayVOLine(struct UAkAudioEvent* event, struct AShooterCharacter* VOThrowTargetCharacter); // Function BaseDialogueVOComponent.BaseDialogueVOComponent_C.PlayVOLine // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function BaseDialogueVOComponent.BaseDialogueVOComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveTick(float DeltaSeconds); // Function BaseDialogueVOComponent.BaseDialogueVOComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void TriggerVOLineToAll(struct UAkAudioEvent* event, struct TArray<struct UAresAudioComponent*>& AkSwitchArray, int32_t RandomSeed, struct AShooterCharacter* VOThrowTargetCharacter); // Function BaseDialogueVOComponent.BaseDialogueVOComponent_C.TriggerVOLineToAll // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnLineCompleted(struct UAkAudioEvent* AkAudioEvent); // Function BaseDialogueVOComponent.BaseDialogueVOComponent_C.OnLineCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ClearDialogueThenPlayVO(struct UAkAudioEvent* event, struct AShooterCharacter* VOThrowTargetCharacter); // Function BaseDialogueVOComponent.BaseDialogueVOComponent_C.ClearDialogueThenPlayVO // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Multicast_StopLineAndClearQueue(); // Function BaseDialogueVOComponent.BaseDialogueVOComponent_C.Multicast_StopLineAndClearQueue // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Multicast_RepQueueAndClear(struct TArray<struct FQueuedVOLine>& RepQueue, bool bShouldClearDialogue); // Function BaseDialogueVOComponent.BaseDialogueVOComponent_C.Multicast_RepQueueAndClear // (Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_BaseDialogueVOComponent(int32_t EntryPoint); // Function BaseDialogueVOComponent.BaseDialogueVOComponent_C.ExecuteUbergraph_BaseDialogueVOComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnQueueFinished__DelegateSignature(); // Function BaseDialogueVOComponent.BaseDialogueVOComponent_C.OnQueueFinished__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnLineStart__DelegateSignature(struct UAkAudioEvent* AkAudioEvent); // Function BaseDialogueVOComponent.BaseDialogueVOComponent_C.OnLineStart__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnLineEnd__DelegateSignature(struct UAkAudioEvent* AkAudioEvent); // Function BaseDialogueVOComponent.BaseDialogueVOComponent_C.OnLineEnd__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

