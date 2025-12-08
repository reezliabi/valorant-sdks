// BlueprintGeneratedClass BasePawn.BasePawn_C
// Size: 0x15d9 (Inherited: 0x14c0)
struct ABasePawn_C : AShooterCharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14c0(0x08)
	struct UAnimNotifyActorBroadcasterComponent* AnimNotifyActorBroadcaster; // 0x14c8(0x08)
	struct UComp_ShooterCharacterDestruction_C* Comp_ShooterCharacterDestruction; // 0x14d0(0x08)
	struct UComp_PowderedToastFunctions_C* Comp_PowderedToastAbilityListener; // 0x14d8(0x08)
	struct UShooterDamageListener* ShooterDamageListener; // 0x14e0(0x08)
	struct UComp_Actor_Deafenable_C* Comp_Actor_Deafenable; // 0x14e8(0x08)
	struct UComp_PlayerCharacter_SpawnInvulnerability_C* Comp_PlayerCharacter_SpawnInvulnerability; // 0x14f0(0x08)
	struct UShooterCharacterMinimapComponent_C* ShooterCharacterMinimapComponent; // 0x14f8(0x08)
	struct UShooterCharacterVisibilityComponent* ShooterCharacterVisibility1; // 0x1500(0x08)
	struct USplitBodyRotationRopeComponent* SplitBodyRotationRope; // 0x1508(0x08)
	struct UAresOutlineComponent* OutlineOverlay1P; // 0x1510(0x08)
	struct UAresOutlineComponent* OutlineCosmetic3P; // 0x1518(0x08)
	struct UComp_CharacterFalling_C* Comp_CharacterFalling; // 0x1520(0x08)
	struct UCosmeticActionsComponent_C* CosmeticActionsComponent; // 0x1528(0x08)
	struct UComp_Actor_Concussable_C* Comp_Actor_Concussable; // 0x1530(0x08)
	struct UParticleSystemComponent* UD_FakeShadow_VFX; // 0x1538(0x08)
	struct UIgnoreAllyWallPenetrationComponent* IgnoreAllyWallPenetration; // 0x1540(0x08)
	struct UMinimapVisionConesComponent* MinimapVision; // 0x1548(0x08)
	struct UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource; // 0x1550(0x08)
	struct UAresOutlineComponent* Outline1P; // 0x1558(0x08)
	struct UAresOutlineComponent* Outline3P; // 0x1560(0x08)
	struct FNone* InEditorHotkeyComponent; // 0x1568(0x08)
	struct UBaseMovementSoundComponent_C* BaseMovementSoundComponent; // 0x1570(0x08)
	struct USplitBodyRotationGroundComponent* SplitBodyRotationGround; // 0x1578(0x08)
	struct UShooterCharacterDeathReactionComponent* ShooterCharacterDeathReaction; // 0x1580(0x08)
	struct UCharacterHudManagerComponent* CharacterHudManager; // 0x1588(0x08)
	struct UChildDamageSectionComponent* ShieldDamageSection; // 0x1590(0x08)
	struct UChildDamageSectionComponent* HealthDamageSection; // 0x1598(0x08)
	struct UAresHUDListener* AresHUDListener; // 0x15a0(0x08)
	struct UAudBasePawnVOComponent_C* AudBasePawnVOComponent; // 0x15a8(0x08)
	struct TArray<struct UMaterialInterface*> DefaultMaterials; // 0x15b0(0x10)
	struct UAud_Base_SFX_Component_C* AudBaseSFXComponentClass; // 0x15c0(0x08)
	struct UAud_Base_SFX_Component_C* AudBaseSFXComponent; // 0x15c8(0x08)
	struct UAud_Base_UI_Component_C* Aud_Base_UI_Component; // 0x15d0(0x08)
	bool SkipPerceptionSystemRegister; // 0x15d8(0x01)

	void GetAudBasePawnVOComponent(struct UAudBasePawnVOComponent_C*& Component); // Function BasePawn.BasePawn_C.GetAudBasePawnVOComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RemoveVO_Comps(); // Function BasePawn.BasePawn_C.RemoveVO_Comps // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateOutlineModes(); // Function BasePawn.BasePawn_C.UpdateOutlineModes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	enum class EAresDeathCamFocusPoint DefaultDeathCamFocusPoint(); // Function BasePawn.BasePawn_C.DefaultDeathCamFocusPoint // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AssignEnemyRenderCustomDepth(); // Function BasePawn.BasePawn_C.AssignEnemyRenderCustomDepth // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct ULegacyCameraShake* ShouldAimPunch(struct UDamageResponse* Response); // Function BasePawn.BasePawn_C.ShouldAimPunch // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DestroyExternallyAddedComponent(struct UActorComponent* ComponentToDestroy); // Function BasePawn.BasePawn_C.DestroyExternallyAddedComponent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetDefaultMaterials(struct TArray<struct UMaterialInterface*>& DefaultMaterialInput, struct UMeshComponent* skelMeshReference); // Function BasePawn.BasePawn_C.GetDefaultMaterials // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AudSetupComponents(); // Function BasePawn.BasePawn_C.AudSetupComponents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function BasePawn.BasePawn_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void AuthOnDeath(struct AShooterPlayerController* Killer); // Function BasePawn.BasePawn_C.AuthOnDeath // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnTeamChanged_Event_2(); // Function BasePawn.BasePawn_C.OnTeamChanged_Event_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthOnGameplayInvisibleUpdated(bool bNewInvisibility); // Function BasePawn.BasePawn_C.AuthOnGameplayInvisibleUpdated // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ApplySpawnInvulnerability(bool DisableOnFire, bool DisableOnMove, double Duration); // Function BasePawn.BasePawn_C.ApplySpawnInvulnerability // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateOutlineModesOnViewTargetChanghed(struct APlayerController* PC); // Function BasePawn.BasePawn_C.UpdateOutlineModesOnViewTargetChanghed // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateOutlineModesOnPossession(struct AController* PC); // Function BasePawn.BasePawn_C.UpdateOutlineModesOnPossession // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAuthFallingOutOfWorld_Event(struct AShooterCharacter* Character); // Function BasePawn.BasePawn_C.OnAuthFallingOutOfWorld_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitializeForRespawn(); // Function BasePawn.BasePawn_C.InitializeForRespawn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CustomEvent(struct AShooterCharacter* Character, struct UDamageResponse* Response); // Function BasePawn.BasePawn_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CustomEvent_2(struct AShooterCharacter* ShooterCharacter, bool bFirstPersonVisible, bool bThirdPersonVisible); // Function BasePawn.BasePawn_C.CustomEvent_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_BasePawn(int32_t EntryPoint); // Function BasePawn.BasePawn_C.ExecuteUbergraph_BasePawn // (Final|UbergraphFunction) // @ game+0x19be2f0
};

