// BlueprintGeneratedClass GameObject_Thorne_E_Wall_Segment_Production.GameObject_Thorne_E_Wall_Segment_Production_C
// Size: 0x582 (Inherited: 0x4b0)
struct AGameObject_Thorne_E_Wall_Segment_Production_C : AGameObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct UMinimapVisionConesBlockerRectComponent* MinimapVisionConesBlockerRect; // 0x4b8(0x08)
	struct UComp_GameObject_ConcealTracker_C* Comp_GameObject_ConcealTracker; // 0x4c0(0x08)
	struct UBaseMinimapComponent_Parent_C* BaseMinimapComponent_Parent; // 0x4c8(0x08)
	struct UGameObjectVisibilityComponent* GameObjectVisibility; // 0x4d0(0x08)
	struct UStaticMeshComponent* BeamMesh; // 0x4d8(0x08)
	struct UParticleSystemComponent* Wall_Extras; // 0x4e0(0x08)
	struct UStaticMeshComponent* CollisionMesh; // 0x4e8(0x08)
	float Timeline_0_Dissolve_E66565234F22B0089D85B789A1F380FE; // 0x4f0(0x04)
	enum class ETimelineDirection Timeline_0__Direction_E66565234F22B0089D85B789A1F380FE; // 0x4f4(0x01)
	char pad_4F5[0x3]; // 0x4f5(0x03)
	struct UTimelineComponent* Timeline_1; // 0x4f8(0x08)
	float Timeline_1_WallScaleLerp_043AF9944380D95FFFF84C996E8AC347; // 0x500(0x04)
	float Timeline_1_WallPosistionLerp_043AF9944380D95FFFF84C996E8AC347; // 0x504(0x04)
	enum class ETimelineDirection Timeline_1__Direction_043AF9944380D95FFFF84C996E8AC347; // 0x508(0x01)
	char pad_509[0x7]; // 0x509(0x07)
	struct UTimelineComponent* Timeline_2; // 0x510(0x08)
	bool IsAlive_1; // 0x518(0x01)
	char pad_519[0x7]; // 0x519(0x07)
	struct UMaterialInterface* WallMaterial; // 0x520(0x08)
	struct UMaterialInstanceDynamic* WallDynamicMaterial; // 0x528(0x08)
	double WallDuration; // 0x530(0x08)
	struct AEffectContainer* FXC_WallDestroyed; // 0x538(0x08)
	double SelfDamageStartDelay; // 0x540(0x08)
	double SelfDamageMinimumLifeThreshold; // 0x548(0x08)
	double SelfDamageLoopDuration; // 0x550(0x08)
	double LifetimeRemainingAtMinimumHealth; // 0x558(0x08)
	double WallLowHealthWarningThreshold; // 0x560(0x08)
	double CollisionMeshVerticalOffset; // 0x568(0x08)
	struct UMaterialInterface* WallBeamsMaterial; // 0x570(0x08)
	struct UMaterialInstanceDynamic* WallBeamsDynamicMaterial; // 0x578(0x08)
	bool TriggeredLowHealthFeedback; // 0x580(0x01)
	bool OverlappingCharacters; // 0x581(0x01)

	void RespondToDamage(); // Function GameObject_Thorne_E_Wall_Segment_Production.GameObject_Thorne_E_Wall_Segment_Production_C.RespondToDamage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void WallSpawnEffects(); // Function GameObject_Thorne_E_Wall_Segment_Production.GameObject_Thorne_E_Wall_Segment_Production_C.WallSpawnEffects // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool OnCrushed(struct AActor* CrushingObject, float CrushDamage); // Function GameObject_Thorne_E_Wall_Segment_Production.GameObject_Thorne_E_Wall_Segment_Production_C.OnCrushed // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	double GetHealthConversion(); // Function GameObject_Thorne_E_Wall_Segment_Production.GameObject_Thorne_E_Wall_Segment_Production_C.GetHealthConversion // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Timeline_1__FinishedFunc(); // Function GameObject_Thorne_E_Wall_Segment_Production.GameObject_Thorne_E_Wall_Segment_Production_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x19be2f0
	void Timeline_1__UpdateFunc(); // Function GameObject_Thorne_E_Wall_Segment_Production.GameObject_Thorne_E_Wall_Segment_Production_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x19be2f0
	void Timeline_0__FinishedFunc(); // Function GameObject_Thorne_E_Wall_Segment_Production.GameObject_Thorne_E_Wall_Segment_Production_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x19be2f0
	void Timeline_0__UpdateFunc(); // Function GameObject_Thorne_E_Wall_Segment_Production.GameObject_Thorne_E_Wall_Segment_Production_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x19be2f0
	void DoDestroy(); // Function GameObject_Thorne_E_Wall_Segment_Production.GameObject_Thorne_E_Wall_Segment_Production_C.DoDestroy // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveServerPreDie(struct UDamageResponse* Response, struct AController* Killer); // Function GameObject_Thorne_E_Wall_Segment_Production.GameObject_Thorne_E_Wall_Segment_Production_C.ReceiveServerPreDie // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function GameObject_Thorne_E_Wall_Segment_Production.GameObject_Thorne_E_Wall_Segment_Production_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void AuthWallDurationCompleted(); // Function GameObject_Thorne_E_Wall_Segment_Production.GameObject_Thorne_E_Wall_Segment_Production_C.AuthWallDurationCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DisableCollision(); // Function GameObject_Thorne_E_Wall_Segment_Production.GameObject_Thorne_E_Wall_Segment_Production_C.DisableCollision // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthDamageSelf(); // Function GameObject_Thorne_E_Wall_Segment_Production.GameObject_Thorne_E_Wall_Segment_Production_C.AuthDamageSelf // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__DamageHandler_K2Node_ComponentBoundEvent_2_OnDamagedSignature__DelegateSignature(struct UDamageResponse* Response); // Function GameObject_Thorne_E_Wall_Segment_Production.GameObject_Thorne_E_Wall_Segment_Production_C.BndEvt__DamageHandler_K2Node_ComponentBoundEvent_2_OnDamagedSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_GameObject_Thorne_E_Wall_Segment_Production(int32_t EntryPoint); // Function GameObject_Thorne_E_Wall_Segment_Production.GameObject_Thorne_E_Wall_Segment_Production_C.ExecuteUbergraph_GameObject_Thorne_E_Wall_Segment_Production // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

