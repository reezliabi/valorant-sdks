// BlueprintGeneratedClass GameObject_Phoenix_Q_FlameWallManager_Production.GameObject_Phoenix_Q_FlameWallManager_Production_C
// Size: 0x638 (Inherited: 0x4b0)
struct AGameObject_Phoenix_Q_FlameWallManager_Production_C : AGameObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct UGameObjectVisibilityComponent* GameObjectVisibility; // 0x4b8(0x08)
	struct UComp_GameObject_ConcealTracker_C* Comp_GameObject_ConcealTracker; // 0x4c0(0x08)
	struct UComp_Actor_MultiTargetHandler_Buff_C* Comp_Actor_MultiTargetHandler_BuffDamage; // 0x4c8(0x08)
	struct UComp_Actor_MultiTargetHandler_Buff_C* Comp_Actor_MultiTargetHandler_BuffHeal; // 0x4d0(0x08)
	struct UComp_Actor_MultiEmitterWarmup_C* Comp_Actor_MultiEmitterWarmup; // 0x4d8(0x08)
	struct UComp_Aud_Multiposition_Manager_C* Comp_Aud_Multiposition_Manager_Decay; // 0x4e0(0x08)
	struct UComp_Actor_WallMeshOverlap_C* HealOverlap; // 0x4e8(0x08)
	struct UComp_Actor_WallMeshOverlap_C* DamageOverlap; // 0x4f0(0x08)
	struct UComp_Phoenix_Q_WallFollowEffect_Production_C* WallFormEffect; // 0x4f8(0x08)
	struct UComp_Actor_MultiTargetHandler_FXC_C* Comp_Actor_MultiTargetHandler_FXC; // 0x500(0x08)
	struct UComp_Aud_Multiposition_Manager_C* Comp_Aud_Multiposition_Manager_Loop; // 0x508(0x08)
	struct UWallMesh* WallMesh; // 0x510(0x08)
	float VisCollisionRaiseTimeline_FullyRaisedDist_B10998544F2ED4697A3C779504A91222; // 0x518(0x04)
	enum class ETimelineDirection VisCollisionRaiseTimeline__Direction_B10998544F2ED4697A3C779504A91222; // 0x51c(0x01)
	char pad_51D[0x3]; // 0x51d(0x03)
	struct UTimelineComponent* VisCollisionRaiseTimeline; // 0x520(0x08)
	float EndTelegraphTimeline_AudioPitch_64DEA771421A8F357F18418497366543; // 0x528(0x04)
	float EndTelegraphTimeline_Opacity_Layer_4_UVScale_Offset_V_64DEA771421A8F357F18418497366543; // 0x52c(0x04)
	enum class ETimelineDirection EndTelegraphTimeline__Direction_64DEA771421A8F357F18418497366543; // 0x530(0x01)
	char pad_531[0x7]; // 0x531(0x07)
	struct UTimelineComponent* EndTelegraphTimeline; // 0x538(0x08)
	float DeactivateTimeline_CollisionScale_F6BC9C7C4035472673068693CE6A94DE; // 0x540(0x04)
	float DeactivateTimeline_Decal_Alpha_F6BC9C7C4035472673068693CE6A94DE; // 0x544(0x04)
	float DeactivateTimeline_Normal_UVScale_Offset_V_F6BC9C7C4035472673068693CE6A94DE; // 0x548(0x04)
	enum class ETimelineDirection DeactivateTimeline__Direction_F6BC9C7C4035472673068693CE6A94DE; // 0x54c(0x01)
	char pad_54D[0x3]; // 0x54d(0x03)
	struct UTimelineComponent* DeactivateTimeline; // 0x550(0x08)
	double DissolveTime; // 0x558(0x08)
	double WallOpenSpeed; // 0x560(0x08)
	struct TArray<struct FTransform> AnchorLocations; // 0x568(0x10)
	double WallFormingTime; // 0x578(0x08)
	struct FTimerHandle ActivateVisualsTimer; // 0x580(0x08)
	struct TArray<struct FTransform> AnchorsToActivateLoop; // 0x588(0x10)
	double ActivateVFX_PreWallTime; // 0x598(0x08)
	double WallActivatedTime; // 0x5a0(0x08)
	double CurrentMaxAlpha; // 0x5a8(0x08)
	bool WallActive; // 0x5b0(0x01)
	bool ValvesActive; // 0x5b1(0x01)
	bool ValvesGoingDown; // 0x5b2(0x01)
	char pad_5B3[0x5]; // 0x5b3(0x05)
	struct UMaterialInstanceDynamic* DynamicWallMaterialOpaque; // 0x5b8(0x08)
	struct UMaterialInstanceDynamic* DynamicWallMaterialMasked; // 0x5c0(0x08)
	struct FVector PreviousLocation; // 0x5c8(0x18)
	bool HasFirstPoint; // 0x5e0(0x01)
	char pad_5E1[0x7]; // 0x5e1(0x07)
	double WallDuration; // 0x5e8(0x08)
	double PostDeathLifetime; // 0x5f0(0x08)
	double EndTelegraphDuration; // 0x5f8(0x08)
	double WarmupGroundDuration; // 0x600(0x08)
	struct TArray<struct UMinimapVisionConesBlockerLineComponent*> LineVisionBlockers; // 0x608(0x10)
	struct TArray<struct AActor*> Overlap Non Characters; // 0x618(0x10)
	struct TArray<struct UMinimapComp_Phoenix_Wall_C*> MinimapComp; // 0x628(0x10)

	void Handle Wall Overlap(struct AActor* Overlap Actor); // Function GameObject_Phoenix_Q_FlameWallManager_Production.GameObject_Phoenix_Q_FlameWallManager_Production_C.Handle Wall Overlap // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetupDynamicMaterials(); // Function GameObject_Phoenix_Q_FlameWallManager_Production.GameObject_Phoenix_Q_FlameWallManager_Production_C.SetupDynamicMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Try Apply Heal(struct AActor* Shooter Character); // Function GameObject_Phoenix_Q_FlameWallManager_Production.GameObject_Phoenix_Q_FlameWallManager_Production_C.Try Apply Heal // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Try Apply Damage(struct AActor* Shooter Character); // Function GameObject_Phoenix_Q_FlameWallManager_Production.GameObject_Phoenix_Q_FlameWallManager_Production_C.Try Apply Damage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DeactivateMinimapComponents(); // Function GameObject_Phoenix_Q_FlameWallManager_Production.GameObject_Phoenix_Q_FlameWallManager_Production_C.DeactivateMinimapComponents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DeactivateParticles(); // Function GameObject_Phoenix_Q_FlameWallManager_Production.GameObject_Phoenix_Q_FlameWallManager_Production_C.DeactivateParticles // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Finalize Wall Deactivation(); // Function GameObject_Phoenix_Q_FlameWallManager_Production.GameObject_Phoenix_Q_FlameWallManager_Production_C.Finalize Wall Deactivation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TryToStartBlindOverlay(struct AActor* InActor); // Function GameObject_Phoenix_Q_FlameWallManager_Production.GameObject_Phoenix_Q_FlameWallManager_Production_C.TryToStartBlindOverlay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool ShouldApplyHeal(struct AShooterCharacter* Instigator, struct AActor* Character); // Function GameObject_Phoenix_Q_FlameWallManager_Production.GameObject_Phoenix_Q_FlameWallManager_Production_C.ShouldApplyHeal // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool ShouldApplyDamage(struct AShooterCharacter* Instigator, struct AActor* Character); // Function GameObject_Phoenix_Q_FlameWallManager_Production.GameObject_Phoenix_Q_FlameWallManager_Production_C.ShouldApplyDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateVisionConeBlockers(bool bNewVisibility); // Function GameObject_Phoenix_Q_FlameWallManager_Production.GameObject_Phoenix_Q_FlameWallManager_Production_C.UpdateVisionConeBlockers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetAnchorPoints(struct TArray<struct FTransform>& AnchorLocations); // Function GameObject_Phoenix_Q_FlameWallManager_Production.GameObject_Phoenix_Q_FlameWallManager_Production_C.GetAnchorPoints // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void AdjustAudioPitch(double Pitch); // Function GameObject_Phoenix_Q_FlameWallManager_Production.GameObject_Phoenix_Q_FlameWallManager_Production_C.AdjustAudioPitch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddWallAnchorPoint(struct FTransform& Transform); // Function GameObject_Phoenix_Q_FlameWallManager_Production.GameObject_Phoenix_Q_FlameWallManager_Production_C.AddWallAnchorPoint // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SpawnGroundVFX(struct FTransform& Transform, double Angle); // Function GameObject_Phoenix_Q_FlameWallManager_Production.GameObject_Phoenix_Q_FlameWallManager_Production_C.SpawnGroundVFX // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayDeactivateCosmetics(); // Function GameObject_Phoenix_Q_FlameWallManager_Production.GameObject_Phoenix_Q_FlameWallManager_Production_C.PlayDeactivateCosmetics // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ActivateValveFirstIndexLoop(); // Function GameObject_Phoenix_Q_FlameWallManager_Production.GameObject_Phoenix_Q_FlameWallManager_Production_C.ActivateValveFirstIndexLoop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DeactivateTimeline__FinishedFunc(); // Function GameObject_Phoenix_Q_FlameWallManager_Production.GameObject_Phoenix_Q_FlameWallManager_Production_C.DeactivateTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x19be2f0
	void DeactivateTimeline__UpdateFunc(); // Function GameObject_Phoenix_Q_FlameWallManager_Production.GameObject_Phoenix_Q_FlameWallManager_Production_C.DeactivateTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x19be2f0
	void EndTelegraphTimeline__FinishedFunc(); // Function GameObject_Phoenix_Q_FlameWallManager_Production.GameObject_Phoenix_Q_FlameWallManager_Production_C.EndTelegraphTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x19be2f0
	void EndTelegraphTimeline__UpdateFunc(); // Function GameObject_Phoenix_Q_FlameWallManager_Production.GameObject_Phoenix_Q_FlameWallManager_Production_C.EndTelegraphTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x19be2f0
	void VisCollisionRaiseTimeline__FinishedFunc(); // Function GameObject_Phoenix_Q_FlameWallManager_Production.GameObject_Phoenix_Q_FlameWallManager_Production_C.VisCollisionRaiseTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x19be2f0
	void VisCollisionRaiseTimeline__UpdateFunc(); // Function GameObject_Phoenix_Q_FlameWallManager_Production.GameObject_Phoenix_Q_FlameWallManager_Production_C.VisCollisionRaiseTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WallMesh_K2Node_ComponentBoundEvent_0_OnWallMeshGenerated__DelegateSignature(); // Function GameObject_Phoenix_Q_FlameWallManager_Production.GameObject_Phoenix_Q_FlameWallManager_Production_C.BndEvt__WallMesh_K2Node_ComponentBoundEvent_0_OnWallMeshGenerated__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BeginBuildingWall(); // Function GameObject_Phoenix_Q_FlameWallManager_Production.GameObject_Phoenix_Q_FlameWallManager_Production_C.BeginBuildingWall // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MulticastAddSmokeScreenPoint(struct FTransform ValveSetTransform); // Function GameObject_Phoenix_Q_FlameWallManager_Production.GameObject_Phoenix_Q_FlameWallManager_Production_C.MulticastAddSmokeScreenPoint // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ActivateVisuals(); // Function GameObject_Phoenix_Q_FlameWallManager_Production.GameObject_Phoenix_Q_FlameWallManager_Production_C.ActivateVisuals // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthAddSmokeScreenPoint(struct FTransform ValveSetTransform); // Function GameObject_Phoenix_Q_FlameWallManager_Production.GameObject_Phoenix_Q_FlameWallManager_Production_C.AuthAddSmokeScreenPoint // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Event All Points Added(); // Function GameObject_Phoenix_Q_FlameWallManager_Production.GameObject_Phoenix_Q_FlameWallManager_Production_C.Event All Points Added // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Event Wall Activated(); // Function GameObject_Phoenix_Q_FlameWallManager_Production.GameObject_Phoenix_Q_FlameWallManager_Production_C.Event Wall Activated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Event Deactivate Wall(); // Function GameObject_Phoenix_Q_FlameWallManager_Production.GameObject_Phoenix_Q_FlameWallManager_Production_C.Event Deactivate Wall // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__DamageOverlap_K2Node_ComponentBoundEvent_2_OnCharacterEndOverlap__DelegateSignature(struct AActor* ShooterCharacter); // Function GameObject_Phoenix_Q_FlameWallManager_Production.GameObject_Phoenix_Q_FlameWallManager_Production_C.BndEvt__DamageOverlap_K2Node_ComponentBoundEvent_2_OnCharacterEndOverlap__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__HealOverlap_K2Node_ComponentBoundEvent_3_OnCharacterBeginOverlap__DelegateSignature(struct AActor* ShooterCharacter); // Function GameObject_Phoenix_Q_FlameWallManager_Production.GameObject_Phoenix_Q_FlameWallManager_Production_C.BndEvt__HealOverlap_K2Node_ComponentBoundEvent_3_OnCharacterBeginOverlap__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__HealOverlap_K2Node_ComponentBoundEvent_4_OnCharacterEndOverlap__DelegateSignature(struct AActor* ShooterCharacter); // Function GameObject_Phoenix_Q_FlameWallManager_Production.GameObject_Phoenix_Q_FlameWallManager_Production_C.BndEvt__HealOverlap_K2Node_ComponentBoundEvent_4_OnCharacterEndOverlap__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void Event Play End Telegraph(); // Function GameObject_Phoenix_Q_FlameWallManager_Production.GameObject_Phoenix_Q_FlameWallManager_Production_C.Event Play End Telegraph // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__GameObject_Phoenix_Q_FlameWallManager_Production_WallMesh_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function GameObject_Phoenix_Q_FlameWallManager_Production.GameObject_Phoenix_Q_FlameWallManager_Production_C.BndEvt__GameObject_Phoenix_Q_FlameWallManager_Production_WallMesh_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__GameObject_Phoenix_Q_FlameWallManager_Production_DamageOverlap_K2Node_ComponentBoundEvent_6_OnCharacterBeginOverlap__DelegateSignature(struct AActor* ShooterCharacter); // Function GameObject_Phoenix_Q_FlameWallManager_Production.GameObject_Phoenix_Q_FlameWallManager_Production_C.BndEvt__GameObject_Phoenix_Q_FlameWallManager_Production_DamageOverlap_K2Node_ComponentBoundEvent_6_OnCharacterBeginOverlap__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void RunCollisionRaiseAnim(); // Function GameObject_Phoenix_Q_FlameWallManager_Production.GameObject_Phoenix_Q_FlameWallManager_Production_C.RunCollisionRaiseAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update Wall Deactivation(); // Function GameObject_Phoenix_Q_FlameWallManager_Production.GameObject_Phoenix_Q_FlameWallManager_Production_C.Update Wall Deactivation // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Wait and Destroy Wall(); // Function GameObject_Phoenix_Q_FlameWallManager_Production.GameObject_Phoenix_Q_FlameWallManager_Production_C.Wait and Destroy Wall // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Wait and Deactivate Wall(); // Function GameObject_Phoenix_Q_FlameWallManager_Production.GameObject_Phoenix_Q_FlameWallManager_Production_C.Wait and Deactivate Wall // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_GameObject_Phoenix_Q_FlameWallManager_Production(int32_t EntryPoint); // Function GameObject_Phoenix_Q_FlameWallManager_Production.GameObject_Phoenix_Q_FlameWallManager_Production_C.ExecuteUbergraph_GameObject_Phoenix_Q_FlameWallManager_Production // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

