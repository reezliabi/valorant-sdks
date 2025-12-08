// BlueprintGeneratedClass BaseVOComponent.BaseVOComponent_C
// Size: 0x1d0 (Inherited: 0xd8)
struct UBaseVOComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct TArray<struct FQueuedVOLine> Queue; // 0xe0(0x10)
	enum class VOPriorityEnum CurrentVOLinePriority; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct UAresAudioComponent* AudioComponent; // 0xf8(0x08)
	struct UBaseVOComponent_C* EventFinishedListener; // 0x100(0x08)
	struct UAudBasePawnVOComponent_C* NewVar_1; // 0x108(0x08)
	struct AEffectContainer* PlayLineCosmeticEffect; // 0x110(0x08)
	struct FEffectID CurrentCosmeticEffect; // 0x118(0x20)
	struct UAresAudioComponent* OwnerAudioComponent; // 0x138(0x08)
	bool IsPlaying; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
	struct FMulticastInlineDelegate OnLineStart; // 0x148(0x10)
	struct FMulticastInlineDelegate OnLineEnd; // 0x158(0x10)
	struct UAkAudioEvent* CurrentVOLine; // 0x168(0x08)
	struct FMulticastInlineDelegate OnQueueFinished; // 0x170(0x10)
	struct TMap<struct AShooterCharacter*, struct UAresAudioComponent*> CharacterAudioComponentsMap; // 0x180(0x50)

	struct UBaseGunSkinVOComponent_C* Get Weapon Skin VOComponent(struct AAresEquippable* Equippable); // Function BaseVOComponent.BaseVOComponent_C.Get Weapon Skin VOComponent // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UBaseGunSkinVOComponent_C* Get Melee Skin VOComponent(struct AAresEquippable* Equippable); // Function BaseVOComponent.BaseVOComponent_C.Get Melee Skin VOComponent // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ClearQueue(); // Function BaseVOComponent.BaseVOComponent_C.ClearQueue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GunSkinVO(struct UAudBasePawnVOComponent_C* Character VO Component, struct UDamageType* Damage Type, struct UDamageResponse* Damage Response, struct UBaseGunSkinVOComponent_C*& GunSkin VO Component, struct UAudBasePawnVOComponent_C*& Base Pawn VO Component, bool& IsGunSkinLine); // Function BaseVOComponent.BaseVOComponent_C.GunSkinVO // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnWaitOnCharacterEventFinished(struct UBaseVOComponent_C* WaitOnCharacter); // Function BaseVOComponent.BaseVOComponent_C.OnWaitOnCharacterEventFinished // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPostEventCallback(enum class EAkCallbackType CallbackType, struct UAkCallbackInfo* CallbackInfo); // Function BaseVOComponent.BaseVOComponent_C.OnPostEventCallback // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayAudio(struct UAkAudioEvent* event, struct TArray<struct FAkSwitch>& Switches, int32_t RandomSeed, struct AShooterCharacter* VOThrowTargetCharacter, struct UAresAudioComponent*& AudioComponent); // Function BaseVOComponent.BaseVOComponent_C.PlayAudio // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StopCurrentLine(); // Function BaseVOComponent.BaseVOComponent_C.StopCurrentLine // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsLinePendingToPlay(bool& IsPending); // Function BaseVOComponent.BaseVOComponent_C.IsLinePendingToPlay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void PlayVOLineEx(struct UAkAudioEvent* event, enum class VOPriorityEnum Priority, bool ToSelf, bool ToAllies, bool ToEnemies, bool ToSpecificAllies, double QueueTimeout, double MustBeInRangeToStart, struct TArray<struct FAkSwitch>& AkSwitchArray, bool WaitsOnAnnouncer, bool ForceOutOfFogOfWar, struct UBaseVOComponent_C* WaitOnCharacter, struct AShooterCharacter* VOThrowTargetCharacter, struct TArray<struct AShooterCharacter*>& SpecificAllies); // Function BaseVOComponent.BaseVOComponent_C.PlayVOLineEx // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayEvent(struct TArray<struct FAkSwitch>& Switches, int32_t RandomSeed, struct UAresAudioComponent* InAudioComponent, struct UAresAudioComponent*& AudioComponent); // Function BaseVOComponent.BaseVOComponent_C.PlayEvent // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool IsLineCurrentlyPlaying(); // Function BaseVOComponent.BaseVOComponent_C.IsLineCurrentlyPlaying // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void ShouldInterrupt(enum class VOPriorityEnum New, enum class VOPriorityEnum Current, bool& Should Interrupt); // Function BaseVOComponent.BaseVOComponent_C.ShouldInterrupt // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void ShouldPlayImmediately(enum class VOPriorityEnum Priority, double TimeEnteredQueue, double QueueTimeout, bool WaitsOnAnnouncer, struct UBaseVOComponent_C* WaitOnCharacter, bool& Immediately); // Function BaseVOComponent.BaseVOComponent_C.ShouldPlayImmediately // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void StartLine(struct UAkAudioEvent* event, enum class VOPriorityEnum Priority, struct TArray<struct FAkSwitch>& Switches, int32_t RandomSeed, struct AShooterCharacter* VOThrowTargetCharacter); // Function BaseVOComponent.BaseVOComponent_C.StartLine // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayAudioIfRelevent(struct UAkAudioEvent* event, enum class VOPriorityEnum Priority, bool ToSelf, bool ToAllies, bool ToEnemies, bool ToSpecificAllies, double QueueTimeout, double MustBeInRangeToStart, struct TArray<struct FAkSwitch>& AkSwitchArray, bool WaitsOnAnnouncer, int32_t RandomSeed, struct UBaseVOComponent_C* WaitOnCharacter, struct AShooterCharacter* VOThrowTargetCharacter, struct TArray<struct AShooterCharacter*>& SpecificAllies); // Function BaseVOComponent.BaseVOComponent_C.PlayAudioIfRelevent // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AudibleToMe(bool ToSelf, bool ToAllies, bool ToEnemies, bool ToSpecificAllies, double Must Be In Range To Start, struct TArray<struct AShooterCharacter*>& SpecificAllies, bool& ShouldPlay); // Function BaseVOComponent.BaseVOComponent_C.AudibleToMe // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void PlayVOLine(struct UAkAudioEvent* event, enum class VOPriorityEnum Priority, bool ToSelf, bool ToAllies, bool ToEnemies, bool ToSpecificAllies, double QueueTimeout, double MustBeInRangeToStart, bool WaitsOnAnnouncer, bool ForceOutOfFogOfWar, struct UBaseVOComponent_C* WaitOnCharacter, struct AShooterCharacter* VOThrowTargetCharacter, struct TArray<struct AShooterCharacter*>& SpecificAllies); // Function BaseVOComponent.BaseVOComponent_C.PlayVOLine // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function BaseVOComponent.BaseVOComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveTick(float DeltaSeconds); // Function BaseVOComponent.BaseVOComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void TriggerVOLineToTeam(struct UAkAudioEvent* event, enum class VOPriorityEnum Priority, bool ToSelf, bool ToAllies, bool ToEnemies, bool ToSpecificAllies, double QueueTimeout, double MustBeInRangeToStart, struct TArray<struct FAkSwitch>& AkSwitchArray, bool WaitsOnAnnouncer, int32_t RandomSeed, struct UBaseVOComponent_C* WaitOnCharacter, struct AShooterCharacter* VOThrowTargetCharacter, struct TArray<struct AShooterCharacter*>& SpecificAllies); // Function BaseVOComponent.BaseVOComponent_C.TriggerVOLineToTeam // (Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TriggerVOLineToAll(struct UAkAudioEvent* event, enum class VOPriorityEnum Priority, bool ToSelf, bool ToAllies, bool ToEnemies, bool ToSpecificAllies, double QueueTimeout, double Must Be In Range To Start, struct TArray<struct FAkSwitch>& AkSwitchArray, bool WaitsOnAnnouncer, int32_t RandomSeed, struct UBaseVOComponent_C* WaitOnCharacter, struct AShooterCharacter* VOThrowTargetCharacter, struct TArray<struct AShooterCharacter*>& SpecificAllies); // Function BaseVOComponent.BaseVOComponent_C.TriggerVOLineToAll // (Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnLineCompleted(struct UAkAudioEvent* AkAudioEvent); // Function BaseVOComponent.BaseVOComponent_C.OnLineCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Multicast_ClearDialogueThenPlayVO(struct UAkAudioEvent* event, enum class VOPriorityEnum Priority, bool ToSelf, bool ToAllies, bool ToEnemies, double QueueTimeout, double MustBeInRangeToStart, bool WaitsOnAnnouncer, bool ForceOutOfFogOfWar, struct UBaseVOComponent_C* WaitOnCharacter, struct AShooterCharacter* VOThrowTargetCharacter); // Function BaseVOComponent.BaseVOComponent_C.Multicast_ClearDialogueThenPlayVO // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_BaseVOComponent(int32_t EntryPoint); // Function BaseVOComponent.BaseVOComponent_C.ExecuteUbergraph_BaseVOComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnQueueFinished__DelegateSignature(); // Function BaseVOComponent.BaseVOComponent_C.OnQueueFinished__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnLineStart__DelegateSignature(struct UAkAudioEvent* AkAudioEvent); // Function BaseVOComponent.BaseVOComponent_C.OnLineStart__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnLineEnd__DelegateSignature(struct UAkAudioEvent* AkAudioEvent); // Function BaseVOComponent.BaseVOComponent_C.OnLineEnd__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

