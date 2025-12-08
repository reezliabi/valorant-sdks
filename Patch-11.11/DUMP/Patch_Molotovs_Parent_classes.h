// BlueprintGeneratedClass Patch_Molotovs_Parent.Patch_Molotovs_Parent_C
// Size: 0xa95 (Inherited: 0x8d8)
struct APatch_Molotovs_Parent_C : APatch_Global_Spreading_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x8d8(0x08)
	struct UGroundVolumeAreaVisualizationComponent* GroundVolumeAreaVisualization; // 0x8e0(0x08)
	struct UComp_Actor_MultiTargetHandler_Buff_C* Comp_Actor_MultiTargetHandler_Buff; // 0x8e8(0x08)
	struct UEffectManagerComponent* EffectManager; // 0x8f0(0x08)
	struct TArray<struct UParticleSystemComponent*> EmitterList; // 0x8f8(0x10)
	double FireActiveDuration; // 0x908(0x08)
	struct UParticleSystem* FriendlyPatchEffectTemplate; // 0x910(0x08)
	struct UParticleSystem* EnemyPatchEffectTemplate; // 0x918(0x08)
	struct FEffectID FXC_ID_PatchLoop; // 0x920(0x20)
	double FadeOutDuration; // 0x940(0x08)
	struct FTimerHandle ActiveTimer; // 0x948(0x08)
	bool DrawPatchDebug; // 0x950(0x01)
	char pad_951[0x3]; // 0x951(0x03)
	int32_t MaxPatchDistance1D; // 0x954(0x04)
	struct UParticleSystem* FriendlyDecalEffectTemplate; // 0x958(0x08)
	struct UParticleSystem* EnemyDecalEffectTemplate; // 0x960(0x08)
	struct TArray<struct AActor*> OverlapActors; // 0x968(0x10)
	struct FTimerHandle OverlapTimerHandle; // 0x978(0x08)
	double TickOverlapRate; // 0x980(0x08)
	double EntranceOverlapHeight; // 0x988(0x08)
	struct AEffectContainer* FXC_PatchActive; // 0x990(0x08)
	struct AEffectContainer* FXC_FadeOut; // 0x998(0x08)
	struct FMulticastInlineDelegate BuffAppliedToActor; // 0x9a0(0x10)
	struct FMulticastInlineDelegate BuffRemovedFromActor; // 0x9b0(0x10)
	int32_t PatchVFXDensityMultiple; // 0x9c0(0x04)
	bool ShouldHitAllies; // 0x9c4(0x01)
	char pad_9C5[0x3]; // 0x9c5(0x03)
	struct UParticleSystemComponent* PatchEmitter; // 0x9c8(0x08)
	bool UsePatchEmitter; // 0x9d0(0x01)
	char pad_9D1[0x7]; // 0x9d1(0x07)
	struct TArray<struct AActor*> Overlap NonCharacters; // 0x9d8(0x10)
	double PreSeason Damage; // 0x9e8(0x08)
	bool BlockDamageToAllyGameObject; // 0x9f0(0x01)
	char pad_9F1[0x7]; // 0x9f1(0x07)
	struct FMulticastInlineDelegate OnActorStartedOverlapPatch; // 0x9f8(0x10)
	struct FMulticastInlineDelegate OnActorFinishedOverlapPatch; // 0xa08(0x10)
	double DecalRadiusMultiplier; // 0xa18(0x08)
	struct FName MolotovOverlapTestTag; // 0xa20(0x0c)
	char pad_A2C[0x4]; // 0xa2c(0x04)
	struct AActor* Actor; // 0xa30(0x08)
	struct UParticleSystem* FriendlyDecalEffectTemplate_PTUpdate; // 0xa38(0x08)
	struct UParticleSystem* EnemyDecalEffectTemplate_PTUpdate; // 0xa40(0x08)
	double Percent Particle Locations to Spawn Particle; // 0xa48(0x08)
	double Random Particle Position Offset Distance Min; // 0xa50(0x08)
	double Random Particle Position Offset Distance Max; // 0xa58(0x08)
	double Max Particle Distance from Patch Center to Spawn; // 0xa60(0x08)
	double Particle Spawn Downward Search Distance; // 0xa68(0x08)
	struct UParticleSystem* HitConfirmFriendlyParticleTemplate; // 0xa70(0x08)
	struct UParticleSystem* HitConfirmEnemyParticleTemplate; // 0xa78(0x08)
	bool SpawnNewParticlesOnHit; // 0xa80(0x01)
	bool ChangeParticleColorOnHit; // 0xa81(0x01)
	char pad_A82[0x2]; // 0xa82(0x02)
	struct FColor HitConfirmColor; // 0xa84(0x04)
	struct FName HitConfirmColorParamaterName; // 0xa88(0x0c)
	bool Has Succesfully Hit; // 0xa94(0x01)

	void GetApproximateArea(struct FVector& Center, double& Radius, double& HalfHeight); // Function Patch_Molotovs_Parent.Patch_Molotovs_Parent_C.GetApproximateArea // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRep_Has Succesfully Hit(); // Function Patch_Molotovs_Parent.Patch_Molotovs_Parent_C.OnRep_Has Succesfully Hit // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SuccessfulHit(); // Function Patch_Molotovs_Parent.Patch_Molotovs_Parent_C.SuccessfulHit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Check and Play Hit Confirm(struct UParticleSystemComponent* ParticleSystem); // Function Patch_Molotovs_Parent.Patch_Molotovs_Parent_C.Check and Play Hit Confirm // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Debug Fragment(struct FGroundVolumeFragment Fragment, struct FLinearColor Color); // Function Patch_Molotovs_Parent.Patch_Molotovs_Parent_C.Debug Fragment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SpawnParticles(struct FGroundVolumeFragment Fragment, int32_t NumParticleLocationsPerVolumeResolution, double PercentParticleLocationsToSpawnParticle, double RandomPositionOffsetDistanceMin, double RandomPositionOffsetDistanceMax, double MaxDistanceFromPatchCenterToSpawn, double Particle Spawn Downward Search Distance); // Function Patch_Molotovs_Parent.Patch_Molotovs_Parent_C.SpawnParticles // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool ActorIsWithinMolotovRadius(struct AActor* Actor); // Function Patch_Molotovs_Parent.Patch_Molotovs_Parent_C.ActorIsWithinMolotovRadius // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Is Location Inside Patch(struct FVector Location, double PatchTopZLocation, enum class ECellStatus CellStatus, bool& IsInside, struct FVector& AdjustedLocation); // Function Patch_Molotovs_Parent.Patch_Molotovs_Parent_C.Is Location Inside Patch // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CharacterFloorIsOverlappingEntranceHeight(struct FVector Location, struct AShooterCharacter* ShooterCharacter, double TargetHeight, bool& Return); // Function Patch_Molotovs_Parent.Patch_Molotovs_Parent_C.CharacterFloorIsOverlappingEntranceHeight // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool ActorIsOverlappingGameplayPatch(struct AActor* InActor); // Function Patch_Molotovs_Parent.Patch_Molotovs_Parent_C.ActorIsOverlappingGameplayPatch // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void CanApplyBuffToActor(struct AActor* InActor, bool& CanApply); // Function Patch_Molotovs_Parent.Patch_Molotovs_Parent_C.CanApplyBuffToActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool TickOverlappingNonCharacter(struct AActor* OverlappingNonCharacter); // Function Patch_Molotovs_Parent.Patch_Molotovs_Parent_C.TickOverlappingNonCharacter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TogglePatchDecal(struct FIntPoint Coords); // Function Patch_Molotovs_Parent.Patch_Molotovs_Parent_C.TogglePatchDecal // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool ActorIsOverlappingEntranceHeight(struct AActor* Target); // Function Patch_Molotovs_Parent.Patch_Molotovs_Parent_C.ActorIsOverlappingEntranceHeight // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Tick Overlapping Character(struct AActor* OverlappingActor); // Function Patch_Molotovs_Parent.Patch_Molotovs_Parent_C.Tick Overlapping Character // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SpawnPatchDecal(struct FIntPoint Coords); // Function Patch_Molotovs_Parent.Patch_Molotovs_Parent_C.SpawnPatchDecal // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	float GetNodeScore(struct FIntPoint Location, float NodeDistance, bool& bValidNode); // Function Patch_Molotovs_Parent.Patch_Molotovs_Parent_C.GetNodeScore // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RemoveActiveBuffs(); // Function Patch_Molotovs_Parent.Patch_Molotovs_Parent_C.RemoveActiveBuffs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnActorBeginOverlapPatch(struct AActor* Actor); // Function Patch_Molotovs_Parent.Patch_Molotovs_Parent_C.OnActorBeginOverlapPatch // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveDestroyed(); // Function Patch_Molotovs_Parent.Patch_Molotovs_Parent_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnActorEndOverlapPatch(struct AActor* Actor); // Function Patch_Molotovs_Parent.Patch_Molotovs_Parent_C.OnActorEndOverlapPatch // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function Patch_Molotovs_Parent.Patch_Molotovs_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BeginFadeOut(); // Function Patch_Molotovs_Parent.Patch_Molotovs_Parent_C.BeginFadeOut // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnNodeGridCreated(); // Function Patch_Molotovs_Parent.Patch_Molotovs_Parent_C.OnNodeGridCreated // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Event Tick Overlapping Characters(); // Function Patch_Molotovs_Parent.Patch_Molotovs_Parent_C.Event Tick Overlapping Characters // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPatchSpread_Event_1(enum class ECellStatus CellStatus, double PatchTopZLocation, struct FVector PatchLocation, struct FVector PatchNormal); // Function Patch_Molotovs_Parent.Patch_Molotovs_Parent_C.OnPatchSpread_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Patch_Molotovs_Parent_PatchVolume_K2Node_ComponentBoundEvent_4_GroundVolumeFragmentActivatedSignature__DelegateSignature(struct FGroundVolumeFragment Fragment); // Function Patch_Molotovs_Parent.Patch_Molotovs_Parent_C.BndEvt__Patch_Molotovs_Parent_PatchVolume_K2Node_ComponentBoundEvent_4_GroundVolumeFragmentActivatedSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Patch_Molotovs_Parent_PatchVolume_K2Node_ComponentBoundEvent_5_VolumeInitializedSignature__DelegateSignature(); // Function Patch_Molotovs_Parent.Patch_Molotovs_Parent_C.BndEvt__Patch_Molotovs_Parent_PatchVolume_K2Node_ComponentBoundEvent_5_VolumeInitializedSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Patch_Molotovs_Parent_PatchVolume_K2Node_ComponentBoundEvent_0_VolumeOverlapActorSignature__DelegateSignature(struct TArray<struct AActor*>& Actors); // Function Patch_Molotovs_Parent.Patch_Molotovs_Parent_C.BndEvt__Patch_Molotovs_Parent_PatchVolume_K2Node_ComponentBoundEvent_0_VolumeOverlapActorSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Patch_Molotovs_Parent_PatchVolume_K2Node_ComponentBoundEvent_10_VolumeOverlapActorSignature__DelegateSignature(struct TArray<struct AActor*>& Actors); // Function Patch_Molotovs_Parent.Patch_Molotovs_Parent_C.BndEvt__Patch_Molotovs_Parent_PatchVolume_K2Node_ComponentBoundEvent_10_VolumeOverlapActorSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Patch_Molotovs_Parent(int32_t EntryPoint); // Function Patch_Molotovs_Parent.Patch_Molotovs_Parent_C.ExecuteUbergraph_Patch_Molotovs_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnActorFinishedOverlapPatch__DelegateSignature(struct AActor* OverlappingActor); // Function Patch_Molotovs_Parent.Patch_Molotovs_Parent_C.OnActorFinishedOverlapPatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnActorStartedOverlapPatch__DelegateSignature(struct AActor* OverlappingActor); // Function Patch_Molotovs_Parent.Patch_Molotovs_Parent_C.OnActorStartedOverlapPatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BuffRemovedFromActor__DelegateSignature(struct AActor* Actor); // Function Patch_Molotovs_Parent.Patch_Molotovs_Parent_C.BuffRemovedFromActor__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BuffAppliedToActor__DelegateSignature(struct AActor* Actor); // Function Patch_Molotovs_Parent.Patch_Molotovs_Parent_C.BuffAppliedToActor__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

