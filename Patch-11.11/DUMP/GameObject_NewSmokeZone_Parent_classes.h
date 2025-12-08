// BlueprintGeneratedClass GameObject_NewSmokeZone_Parent.GameObject_NewSmokeZone_Parent_C
// Size: 0x628 (Inherited: 0x4b0)
struct AGameObject_NewSmokeZone_Parent_C : AGameObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct UStaticMeshComponent* HollowVisionBlockingSphere; // 0x4b8(0x08)
	struct UMinimapVisionConesBlockerCircleComponent* MinimapVisionConesBlockerCircle; // 0x4c0(0x08)
	struct USphereComponent* PlayFXC_Sphere; // 0x4c8(0x08)
	struct UBaseMinimapComponent_Parent_C* BaseMinimapComponent_Parent; // 0x4d0(0x08)
	struct UActorVisibilityComponent* ActorVisibility; // 0x4d8(0x08)
	struct USphereComponent* VisionBlockingSphere; // 0x4e0(0x08)
	struct USceneComponent* SmokeScene; // 0x4e8(0x08)
	struct UComp_GameObject_ConcealTracker_C* Comp_GameObject_ConcealTracker; // 0x4f0(0x08)
	struct UComp_Actor_MultiTargetHandler_FXC_C* MultiTargetFXC_Handler_SmokeVisuals; // 0x4f8(0x08)
	float DefaultSmokeContractTimeline_ScalePercentage_EA7CD6944CD388803367D09A09314A6E; // 0x500(0x04)
	enum class ETimelineDirection DefaultSmokeContractTimeline__Direction_EA7CD6944CD388803367D09A09314A6E; // 0x504(0x01)
	char pad_505[0x3]; // 0x505(0x03)
	struct UTimelineComponent* DefaultSmokeContractTimeline; // 0x508(0x08)
	float DefaultSmokeExpandTimeline_ScalePercentage_8D36E7324CFA816390CCF0B80C265817; // 0x510(0x04)
	enum class ETimelineDirection DefaultSmokeExpandTimeline__Direction_8D36E7324CFA816390CCF0B80C265817; // 0x514(0x01)
	char pad_515[0x3]; // 0x515(0x03)
	struct UTimelineComponent* DefaultSmokeExpandTimeline; // 0x518(0x08)
	double SmokeExpandDuration; // 0x520(0x08)
	double SmokeDuration; // 0x528(0x08)
	double SmokeContractDuration; // 0x530(0x08)
	double CameraDistanceOffset; // 0x538(0x08)
	struct FMulticastInlineDelegate SmokeFullyExpanded; // 0x540(0x10)
	struct FEffectID FXC_ID_GrenadeActive; // 0x550(0x20)
	struct AEffectContainer* FXC_SmokeIntroLoop; // 0x570(0x08)
	struct UParticleSystemComponent* LoopEmitter; // 0x578(0x08)
	double SmokeDelayTime; // 0x580(0x08)
	struct AEffectContainer* FXC_SmokeStartTelegraph; // 0x588(0x08)
	struct AEffectContainer* FXC_SmokeEndTelegraph; // 0x590(0x08)
	struct AEffectContainer* FXC_SmokeOutro; // 0x598(0x08)
	double SmokeEndTelegraphDuration; // 0x5a0(0x08)
	struct TArray<struct UAresGameplayBuff*> InsideSmokeBuffs; // 0x5a8(0x10)
	struct TArray<struct UComp_Actor_MultiTargetHandler_Buff_C*> BuffAppliers; // 0x5b8(0x10)
	double PlayFXC_Scaler; // 0x5c8(0x08)
	struct UTimelineComponent* NewVar_1; // 0x5d0(0x08)
	struct UCurveFloat* ExpandCurve; // 0x5d8(0x08)
	struct UCurveFloat* ContractCurve; // 0x5e0(0x08)
	struct TArray<struct AShooterCharacter*> OverlappingShooterCharacters; // 0x5e8(0x10)
	struct FEffectID FXC_ID_SmokeEndTelegraph; // 0x5f8(0x20)
	struct FTimerHandle EndTelegraphTimerHandle; // 0x618(0x08)
	struct FTimerHandle DestroySmokeTimerHandle; // 0x620(0x08)

	void Get Current Radius(double& Radius); // Function GameObject_NewSmokeZone_Parent.GameObject_NewSmokeZone_Parent_C.Get Current Radius // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x19be2f0
	void Get Expanded Radius(double& Radius); // Function GameObject_NewSmokeZone_Parent.GameObject_NewSmokeZone_Parent_C.Get Expanded Radius // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x19be2f0
	void GetCameraDistanceToCenter(struct AAresPlayerController* Controller, double& Distance); // Function GameObject_NewSmokeZone_Parent.GameObject_NewSmokeZone_Parent_C.GetCameraDistanceToCenter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x19be2f0
	void Get Effect Data(struct FEffectData& Effect Data); // Function GameObject_NewSmokeZone_Parent.GameObject_NewSmokeZone_Parent_C.Get Effect Data // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void AuthStartEndTelegraphAndDestroySmoke(); // Function GameObject_NewSmokeZone_Parent.GameObject_NewSmokeZone_Parent_C.AuthStartEndTelegraphAndDestroySmoke // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RemoveAllBuffsFromPlayer(struct AShooterCharacter* Character); // Function GameObject_NewSmokeZone_Parent.GameObject_NewSmokeZone_Parent_C.RemoveAllBuffsFromPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ApplyAllBuffsToPlayer(struct AShooterCharacter* Character); // Function GameObject_NewSmokeZone_Parent.GameObject_NewSmokeZone_Parent_C.ApplyAllBuffsToPlayer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateBuffApplier(struct UAresGameplayBuff* BuffClass, struct UComp_Actor_MultiTargetHandler_Buff_C*& BuffHandler); // Function GameObject_NewSmokeZone_Parent.GameObject_NewSmokeZone_Parent_C.CreateBuffApplier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StartIntroLoopEffect(); // Function GameObject_NewSmokeZone_Parent.GameObject_NewSmokeZone_Parent_C.StartIntroLoopEffect // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TransitionToOutroEffect(); // Function GameObject_NewSmokeZone_Parent.GameObject_NewSmokeZone_Parent_C.TransitionToOutroEffect // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool IsCharacterInSmoke(struct AShooterCharacter* ShooterCharacter); // Function GameObject_NewSmokeZone_Parent.GameObject_NewSmokeZone_Parent_C.IsCharacterInSmoke // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ResetSmokeScale(bool ShouldZero); // Function GameObject_NewSmokeZone_Parent.GameObject_NewSmokeZone_Parent_C.ResetSmokeScale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetSmokeScaleByPercentage(double ScalePercentage); // Function GameObject_NewSmokeZone_Parent.GameObject_NewSmokeZone_Parent_C.SetSmokeScaleByPercentage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DefaultSmokeExpandTimeline__FinishedFunc(); // Function GameObject_NewSmokeZone_Parent.GameObject_NewSmokeZone_Parent_C.DefaultSmokeExpandTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x19be2f0
	void DefaultSmokeExpandTimeline__UpdateFunc(); // Function GameObject_NewSmokeZone_Parent.GameObject_NewSmokeZone_Parent_C.DefaultSmokeExpandTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x19be2f0
	void DefaultSmokeContractTimeline__FinishedFunc(); // Function GameObject_NewSmokeZone_Parent.GameObject_NewSmokeZone_Parent_C.DefaultSmokeContractTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x19be2f0
	void DefaultSmokeContractTimeline__UpdateFunc(); // Function GameObject_NewSmokeZone_Parent.GameObject_NewSmokeZone_Parent_C.DefaultSmokeContractTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function GameObject_NewSmokeZone_Parent.GameObject_NewSmokeZone_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void DestroySmoke(); // Function GameObject_NewSmokeZone_Parent.GameObject_NewSmokeZone_Parent_C.DestroySmoke // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__PlayFXC_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function GameObject_NewSmokeZone_Parent.GameObject_NewSmokeZone_Parent_C.BndEvt__PlayFXC_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void ExpandSmoke(); // Function GameObject_NewSmokeZone_Parent.GameObject_NewSmokeZone_Parent_C.ExpandSmoke // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StopSmokeExpand(); // Function GameObject_NewSmokeZone_Parent.GameObject_NewSmokeZone_Parent_C.StopSmokeExpand // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StopSmokeContract(); // Function GameObject_NewSmokeZone_Parent.GameObject_NewSmokeZone_Parent_C.StopSmokeContract // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__PlayFXC_Sphere_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function GameObject_NewSmokeZone_Parent.GameObject_NewSmokeZone_Parent_C.BndEvt__PlayFXC_Sphere_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExpandTimeline(); // Function GameObject_NewSmokeZone_Parent.GameObject_NewSmokeZone_Parent_C.ExpandTimeline // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveTick(float DeltaSeconds); // Function GameObject_NewSmokeZone_Parent.GameObject_NewSmokeZone_Parent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Event Maybe Remove Buff(struct AActor* Actor); // Function GameObject_NewSmokeZone_Parent.GameObject_NewSmokeZone_Parent_C.Event Maybe Remove Buff // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Event Play Start Telegraph(); // Function GameObject_NewSmokeZone_Parent.GameObject_NewSmokeZone_Parent_C.Event Play Start Telegraph // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Event Play End Telegraph(); // Function GameObject_NewSmokeZone_Parent.GameObject_NewSmokeZone_Parent_C.Event Play End Telegraph // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Event Create Buff Appliers(); // Function GameObject_NewSmokeZone_Parent.GameObject_NewSmokeZone_Parent_C.Event Create Buff Appliers // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MulticastStartEndTelegraphAndDestroySmoke(); // Function GameObject_NewSmokeZone_Parent.GameObject_NewSmokeZone_Parent_C.MulticastStartEndTelegraphAndDestroySmoke // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_GameObject_NewSmokeZone_Parent(int32_t EntryPoint); // Function GameObject_NewSmokeZone_Parent.GameObject_NewSmokeZone_Parent_C.ExecuteUbergraph_GameObject_NewSmokeZone_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void SmokeFullyExpanded__DelegateSignature(); // Function GameObject_NewSmokeZone_Parent.GameObject_NewSmokeZone_Parent_C.SmokeFullyExpanded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

