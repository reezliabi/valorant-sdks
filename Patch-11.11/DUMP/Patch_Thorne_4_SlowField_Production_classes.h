// BlueprintGeneratedClass Patch_Thorne_4_SlowField_Production.Patch_Thorne_4_SlowField_Production_C
// Size: 0xa08 (Inherited: 0x8d8)
struct APatch_Thorne_4_SlowField_Production_C : APatch_Global_Spreading_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x8d8(0x08)
	struct UBaseAudioComponent_C* BaseAudioComponent; // 0x8e0(0x08)
	struct UComp_Actor_MultiTargetHandler_Buff_C* Comp_Actor_MultiTargetHandler_Buff; // 0x8e8(0x08)
	struct UComp_Aud_Multiposition_Manager_C* Comp_Aud_Multiposition_Manager_ActiveLoop; // 0x8f0(0x08)
	struct UComp_Aud_Multiposition_Manager_C* Comp_Aud_Multiposition_Manager_Spawn; // 0x8f8(0x08)
	struct UEffectManagerComponent* EffectManager; // 0x900(0x08)
	double MaixmumLifetime; // 0x908(0x08)
	struct UAresGameplayBuff* BuffClass; // 0x910(0x08)
	double CheckPlayerInZoneTime; // 0x918(0x08)
	struct FTimerHandle ChcekPlayerInZoneTimerHandle; // 0x920(0x08)
	double MaxPatchSpreadDistance; // 0x928(0x08)
	struct AEffectContainer* PatchSpawnFXC; // 0x930(0x08)
	struct AEffectContainer* PlayerMovingInSlowFieldFXC; // 0x938(0x08)
	struct TArray<struct UParticleSystemComponent*> PatchEmitterArray; // 0x940(0x10)
	double DissipateDuration; // 0x950(0x08)
	struct FEffectID PlayerMovingInSlowFieldHandle; // 0x958(0x20)
	struct FMulticastInlineDelegate OnCheckPlayerMovingInSlowField; // 0x978(0x10)
	struct TMap<struct AShooterCharacter*, double> PlayerEnterZoneTimes; // 0x988(0x50)
	double CheckMovementDelay; // 0x9d8(0x08)
	double MinVelocityToMakeFootstep; // 0x9e0(0x08)
	struct TArray<struct AShooterCharacter*> TrackedCharactersForAttributeChanges; // 0x9e8(0x10)
	struct TArray<struct FVector> PatchLocations; // 0x9f8(0x10)

	void Update Tracked Characters(); // Function Patch_Thorne_4_SlowField_Production.Patch_Thorne_4_SlowField_Production_C.Update Tracked Characters // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RemoveSlow(struct AShooterCharacter* InShooterCharacter); // Function Patch_Thorne_4_SlowField_Production.Patch_Thorne_4_SlowField_Production_C.RemoveSlow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SlowCharacter(struct AShooterCharacter* InShooterCharacter); // Function Patch_Thorne_4_SlowField_Production.Patch_Thorne_4_SlowField_Production_C.SlowCharacter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShouldSlowCharacter(struct AShooterCharacter* InCharacter, bool& ShouldSlow); // Function Patch_Thorne_4_SlowField_Production.Patch_Thorne_4_SlowField_Production_C.ShouldSlowCharacter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void IsPlayerMovingInSlowField(bool& PlayerMovingInSlowField); // Function Patch_Thorne_4_SlowField_Production.Patch_Thorne_4_SlowField_Production_C.IsPlayerMovingInSlowField // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	float GetNodeScore(struct FIntPoint Location, float NodeDistance, bool& bValidNode); // Function Patch_Thorne_4_SlowField_Production.Patch_Thorne_4_SlowField_Production_C.GetNodeScore // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnNodeGridCreated(); // Function Patch_Thorne_4_SlowField_Production.Patch_Thorne_4_SlowField_Production_C.OnNodeGridCreated // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnActorBeginOverlapPatch(struct AActor* Actor); // Function Patch_Thorne_4_SlowField_Production.Patch_Thorne_4_SlowField_Production_C.OnActorBeginOverlapPatch // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnActorEndOverlapPatch(struct AActor* Actor); // Function Patch_Thorne_4_SlowField_Production.Patch_Thorne_4_SlowField_Production_C.OnActorEndOverlapPatch // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function Patch_Thorne_4_SlowField_Production.Patch_Thorne_4_SlowField_Production_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void CheckToPlayMovingSound(); // Function Patch_Thorne_4_SlowField_Production.Patch_Thorne_4_SlowField_Production_C.CheckToPlayMovingSound // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPatchFinishedSpreading_Event_1(); // Function Patch_Thorne_4_SlowField_Production.Patch_Thorne_4_SlowField_Production_C.OnPatchFinishedSpreading_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MulticastBeginDissipate(); // Function Patch_Thorne_4_SlowField_Production.Patch_Thorne_4_SlowField_Production_C.MulticastBeginDissipate // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveDestroyed(); // Function Patch_Thorne_4_SlowField_Production.Patch_Thorne_4_SlowField_Production_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void CallPlayerMovingInSlowField(bool PlayerMovingInSlowField); // Function Patch_Thorne_4_SlowField_Production.Patch_Thorne_4_SlowField_Production_C.CallPlayerMovingInSlowField // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IntagibleUpdate(struct UAresAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute& Attribute, float OldValue, float NewValue); // Function Patch_Thorne_4_SlowField_Production.Patch_Thorne_4_SlowField_Production_C.IntagibleUpdate // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function Patch_Thorne_4_SlowField_Production.Patch_Thorne_4_SlowField_Production_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Persistence_K2Node_ComponentBoundEvent_0_PreDestroy__DelegateSignature(); // Function Patch_Thorne_4_SlowField_Production.Patch_Thorne_4_SlowField_Production_C.BndEvt__Persistence_K2Node_ComponentBoundEvent_0_PreDestroy__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void MulticastHandlePersistenceDestroy(); // Function Patch_Thorne_4_SlowField_Production.Patch_Thorne_4_SlowField_Production_C.MulticastHandlePersistenceDestroy // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPatchSpread_Event_1(enum class ECellStatus CellStatus, double PatchTopZLocation, struct FVector PatchLocation, struct FVector PatchNormal); // Function Patch_Thorne_4_SlowField_Production.Patch_Thorne_4_SlowField_Production_C.OnPatchSpread_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCharacterLanded(struct AShooterCharacter* Character, struct FHitResult HitResult); // Function Patch_Thorne_4_SlowField_Production.Patch_Thorne_4_SlowField_Production_C.OnCharacterLanded // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Patch_Thorne_4_SlowField_Production(int32_t EntryPoint); // Function Patch_Thorne_4_SlowField_Production.Patch_Thorne_4_SlowField_Production_C.ExecuteUbergraph_Patch_Thorne_4_SlowField_Production // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnCheckPlayerMovingInSlowField__DelegateSignature(bool PlayerIsMoving); // Function Patch_Thorne_4_SlowField_Production.Patch_Thorne_4_SlowField_Production_C.OnCheckPlayerMovingInSlowField__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

