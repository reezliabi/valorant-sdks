// BlueprintGeneratedClass GameObject_Thorne_E_Wall_Segment_Fortifying.GameObject_Thorne_E_Wall_Segment_Fortifying_C
// Size: 0x698 (Inherited: 0x4b0)
struct AGameObject_Thorne_E_Wall_Segment_Fortifying_C : AGameObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct UMultiPointSeenFromLogicComponent* MultiPointSeenFromLogic; // 0x4b8(0x08)
	struct UComp_Actor_NavPathBlocker_C* Comp_Actor_NavPathBlocker; // 0x4c0(0x08)
	struct UBoxComponent* PlaceableBlockingVolume; // 0x4c8(0x08)
	struct UImpactEffectsOverrideComponent* ImpactEffectsOverrideComp; // 0x4d0(0x08)
	struct UAresAbilitySystemComponent* AresAbilitySystem; // 0x4d8(0x08)
	struct UComp_Actor_FortifyAfterTime_C* Comp_Actor_FortifyAfterTime; // 0x4e0(0x08)
	struct UComp_Actor_DamageOverTime_C* Comp_Actor_DamageOverTime; // 0x4e8(0x08)
	struct UBoxComponent* BeingCrushedBox; // 0x4f0(0x08)
	struct UMinimapVisionConesBlockerRectComponent* MinimapVisionConesBlockerRect; // 0x4f8(0x08)
	struct UComp_GameObject_ConcealTracker_C* Comp_GameObject_ConcealTracker; // 0x500(0x08)
	struct UBaseMinimapComponent_Parent_C* BaseMinimapComponent_Parent; // 0x508(0x08)
	struct UGameObjectVisibilityComponent* GameObjectVisibility; // 0x510(0x08)
	struct UStaticMeshComponent* BeamMesh; // 0x518(0x08)
	struct UParticleSystemComponent* Wall_Extras; // 0x520(0x08)
	struct UStaticMeshComponent* CollisionMesh; // 0x528(0x08)
	float Timeline_2_TransitionController_756347EA4943BCBC613042B482ACBCB7; // 0x530(0x04)
	float Timeline_2_TransitionFlash_756347EA4943BCBC613042B482ACBCB7; // 0x534(0x04)
	float Timeline_2_Damage_Birth_756347EA4943BCBC613042B482ACBCB7; // 0x538(0x04)
	enum class ETimelineDirection Timeline_2__Direction_756347EA4943BCBC613042B482ACBCB7; // 0x53c(0x01)
	char pad_53D[0x3]; // 0x53d(0x03)
	struct UTimelineComponent* Timeline_3; // 0x540(0x08)
	float Timeline_0_Dissolve_B15F4D8E4308E54D22F9949CD9AEE9B5; // 0x548(0x04)
	enum class ETimelineDirection Timeline_0__Direction_B15F4D8E4308E54D22F9949CD9AEE9B5; // 0x54c(0x01)
	char pad_54D[0x3]; // 0x54d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x550(0x08)
	float Timeline_1_WallScaleLerp_402320D04295E843DF21809FBA8B1827; // 0x558(0x04)
	float Timeline_1_WallPosistionLerp_402320D04295E843DF21809FBA8B1827; // 0x55c(0x04)
	enum class ETimelineDirection Timeline_1__Direction_402320D04295E843DF21809FBA8B1827; // 0x560(0x01)
	char pad_561[0x7]; // 0x561(0x07)
	struct UTimelineComponent* Timeline_2; // 0x568(0x08)
	bool IsAlive_1; // 0x570(0x01)
	char pad_571[0x7]; // 0x571(0x07)
	struct UMaterialInterface* WallMaterial; // 0x578(0x08)
	struct UMaterialInstanceDynamic* WallDynamicMaterial; // 0x580(0x08)
	struct AEffectContainer* FXC_WallDestroyed; // 0x588(0x08)
	double WallLowHealthWarningThreshold; // 0x590(0x08)
	double CollisionMeshVerticalOffset; // 0x598(0x08)
	struct UMaterialInterface* WallBeamsMaterial; // 0x5a0(0x08)
	struct UMaterialInstanceDynamic* WallBeamsDynamicMaterial; // 0x5a8(0x08)
	bool TriggeredLowHealthFeedback; // 0x5b0(0x01)
	bool OverlappingCharacters; // 0x5b1(0x01)
	char pad_5B2[0x6]; // 0x5b2(0x06)
	struct UMaterialInterface* WallMaterialFortified; // 0x5b8(0x08)
	bool IsFortified; // 0x5c0(0x01)
	char pad_5C1[0x7]; // 0x5c1(0x07)
	struct FEffectID FXC_FragileLoop; // 0x5c8(0x20)
	struct FEffectData LoopEffectData; // 0x5e8(0x58)
	bool InitialOverlapCheckComplete; // 0x640(0x01)
	char pad_641[0x7]; // 0x641(0x07)
	struct TSet<struct AActor*> ActorsNeedingSetToUseFlatFloorChecks; // 0x648(0x50)

	void SetupVisionPoints(); // Function GameObject_Thorne_E_Wall_Segment_Fortifying.GameObject_Thorne_E_Wall_Segment_Fortifying_C.SetupVisionPoints // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Reset Actors Needing Set to Use Flat Floor Checks(); // Function GameObject_Thorne_E_Wall_Segment_Fortifying.GameObject_Thorne_E_Wall_Segment_Fortifying_C.Reset Actors Needing Set to Use Flat Floor Checks // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool ShouldBreakWall(struct UActorComponent* InComponent); // Function GameObject_Thorne_E_Wall_Segment_Fortifying.GameObject_Thorne_E_Wall_Segment_Fortifying_C.ShouldBreakWall // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void RespondToDamage(); // Function GameObject_Thorne_E_Wall_Segment_Fortifying.GameObject_Thorne_E_Wall_Segment_Fortifying_C.RespondToDamage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void WallSpawnEffects(); // Function GameObject_Thorne_E_Wall_Segment_Fortifying.GameObject_Thorne_E_Wall_Segment_Fortifying_C.WallSpawnEffects // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool OnCrushed(struct AActor* CrushingObject, float CrushDamage); // Function GameObject_Thorne_E_Wall_Segment_Fortifying.GameObject_Thorne_E_Wall_Segment_Fortifying_C.OnCrushed // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	double GetHealthConversion(); // Function GameObject_Thorne_E_Wall_Segment_Fortifying.GameObject_Thorne_E_Wall_Segment_Fortifying_C.GetHealthConversion // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Timeline_1__FinishedFunc(); // Function GameObject_Thorne_E_Wall_Segment_Fortifying.GameObject_Thorne_E_Wall_Segment_Fortifying_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x19be2f0
	void Timeline_1__UpdateFunc(); // Function GameObject_Thorne_E_Wall_Segment_Fortifying.GameObject_Thorne_E_Wall_Segment_Fortifying_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x19be2f0
	void Timeline_0__FinishedFunc(); // Function GameObject_Thorne_E_Wall_Segment_Fortifying.GameObject_Thorne_E_Wall_Segment_Fortifying_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x19be2f0
	void Timeline_0__UpdateFunc(); // Function GameObject_Thorne_E_Wall_Segment_Fortifying.GameObject_Thorne_E_Wall_Segment_Fortifying_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x19be2f0
	void Timeline_2__FinishedFunc(); // Function GameObject_Thorne_E_Wall_Segment_Fortifying.GameObject_Thorne_E_Wall_Segment_Fortifying_C.Timeline_2__FinishedFunc // (BlueprintEvent) // @ game+0x19be2f0
	void Timeline_2__UpdateFunc(); // Function GameObject_Thorne_E_Wall_Segment_Fortifying.GameObject_Thorne_E_Wall_Segment_Fortifying_C.Timeline_2__UpdateFunc // (BlueprintEvent) // @ game+0x19be2f0
	void Timeline_2__Transition State__EventFunc(); // Function GameObject_Thorne_E_Wall_Segment_Fortifying.GameObject_Thorne_E_Wall_Segment_Fortifying_C.Timeline_2__Transition State__EventFunc // (BlueprintEvent) // @ game+0x19be2f0
	void DoDestroy(); // Function GameObject_Thorne_E_Wall_Segment_Fortifying.GameObject_Thorne_E_Wall_Segment_Fortifying_C.DoDestroy // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveServerPreDie(struct UDamageResponse* Response, struct AController* Killer); // Function GameObject_Thorne_E_Wall_Segment_Fortifying.GameObject_Thorne_E_Wall_Segment_Fortifying_C.ReceiveServerPreDie // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function GameObject_Thorne_E_Wall_Segment_Fortifying.GameObject_Thorne_E_Wall_Segment_Fortifying_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void DisableCollision(); // Function GameObject_Thorne_E_Wall_Segment_Fortifying.GameObject_Thorne_E_Wall_Segment_Fortifying_C.DisableCollision // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__DamageHandler_K2Node_ComponentBoundEvent_2_OnDamagedSignature__DelegateSignature(struct UDamageResponse* Response); // Function GameObject_Thorne_E_Wall_Segment_Fortifying.GameObject_Thorne_E_Wall_Segment_Fortifying_C.BndEvt__DamageHandler_K2Node_ComponentBoundEvent_2_OnDamagedSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ReceiveTick(float DeltaSeconds); // Function GameObject_Thorne_E_Wall_Segment_Fortifying.GameObject_Thorne_E_Wall_Segment_Fortifying_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Update Wall VFX(); // Function GameObject_Thorne_E_Wall_Segment_Fortifying.GameObject_Thorne_E_Wall_Segment_Fortifying_C.Update Wall VFX // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function GameObject_Thorne_E_Wall_Segment_Fortifying.GameObject_Thorne_E_Wall_Segment_Fortifying_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__GameObject_Thorne_E_Wall_Segment_Fortifying_Comp_Actor_FortifyAfterTime_K2Node_ComponentBoundEvent_0_OnFortified__DelegateSignature(); // Function GameObject_Thorne_E_Wall_Segment_Fortifying.GameObject_Thorne_E_Wall_Segment_Fortifying_C.BndEvt__GameObject_Thorne_E_Wall_Segment_Fortifying_Comp_Actor_FortifyAfterTime_K2Node_ComponentBoundEvent_0_OnFortified__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_GameObject_Thorne_E_Wall_Segment_Fortifying(int32_t EntryPoint); // Function GameObject_Thorne_E_Wall_Segment_Fortifying.GameObject_Thorne_E_Wall_Segment_Fortifying_C.ExecuteUbergraph_GameObject_Thorne_E_Wall_Segment_Fortifying // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

