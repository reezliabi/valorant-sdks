// BlueprintGeneratedClass BasePlayerCharacter.BasePlayerCharacter_C
// Size: 0x1770 (Inherited: 0x15d9)
struct ABasePlayerCharacter_C : ABasePawn_C {
	char pad_15D9[0x7]; // 0x15d9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x15e0(0x08)
	struct UPlayerPortraitMinimapComponent_C* PlayerPortraitMinimapComponent; // 0x15e8(0x08)
	struct UAimToolingSkeletalTargetComponent* PMAimToolingTarget; // 0x15f0(0x08)
	struct UComp_PlayerCharacter_DebuffTagVisuals_C* Comp_PlayerCharacter_DebuffTagVisuals; // 0x15f8(0x08)
	struct UDisarmedComponent* Disarmed; // 0x1600(0x08)
	struct UAresWidgetComponent* InWorldCharacterWidget; // 0x1608(0x08)
	struct UAssistTrackingComponent* AssistTracking; // 0x1610(0x08)
	struct UComp_PlayerCharacter_HealingTracker_C* Comp_PlayerCharacter_HealingTracker; // 0x1618(0x08)
	struct UShooterCharacterAudioAttenuationComponent_C* ShooterCharacterAudioAttenuationComponent; // 0x1620(0x08)
	struct UComp_PlayerCharacter_NearsightManager_C* Comp_PlayerCharacter_NearsightManager; // 0x1628(0x08)
	struct UComp_AbilityStatisticsReplicator_C* Comp_AbilityStatisticsReplicator; // 0x1630(0x08)
	struct UComp_PlayerCharacter_DebuffTagHUD_C* Comp_PlayerCharacter_DebuffTagHUD; // 0x1638(0x08)
	struct UComp_PlayerCharacter_SmokeOverlays_C* Comp_PlayerCharacter_SmokeOverlays; // 0x1640(0x08)
	struct UEnemySpottedVOComponent_C* EnemySpottedVOComponent; // 0x1648(0x08)
	struct UAresAudioComponentManagerComponent* AresAudioComponentManager; // 0x1650(0x08)
	struct UCharacterSprayComponent_C* CharacterSprayComponent; // 0x1658(0x08)
	struct UFootstepsComponent* Footsteps; // 0x1660(0x08)
	struct UInteractableUserComponent* InteractableUser; // 0x1668(0x08)
	struct UWidgetComponent* PlayerWidget; // 0x1670(0x08)
	struct UAnimationStateComponent* AnimationState; // 0x1678(0x08)
	struct UCorpseExploitationComponent* CorpseExploitation; // 0x1680(0x08)
	struct FEffectID ActiveHaloEffectID; // 0x1688(0x20)
	struct TMap<enum class NonVerbalCommTypesEnum, int32_t> CommStringtoFXCTagInteger; // 0x16a8(0x50)
	struct FEffectID ActiveVoiceHaloEffectID; // 0x16f8(0x20)
	struct FMulticastInlineDelegate VoiceEventForMinimapDispatcher; // 0x1718(0x10)
	struct FMulticastInlineDelegate CommEventForMinimapDispatcher; // 0x1728(0x10)
	struct FEffectID ActiveLoadoutWidgetID; // 0x1738(0x20)
	bool TotSelectorCreated; // 0x1758(0x01)
	bool bPooled; // 0x1759(0x01)
	char pad_175A[0x6]; // 0x175a(0x06)
	struct AShooterPlayerState* IconsBoundPlayerState; // 0x1760(0x08)
	struct UPlayerParticipantPortraitBase_C* TopHUDPortraitWidget; // 0x1768(0x08)

	void HandleRadialDamageGFTChanged(); // Function BasePlayerCharacter.BasePlayerCharacter_C.HandleRadialDamageGFTChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Damage(struct UDamageResponse* Response); // Function BasePlayerCharacter.BasePlayerCharacter_C.On Damage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HasAltDeathReaction(bool& Result); // Function BasePlayerCharacter.BasePlayerCharacter_C.HasAltDeathReaction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool ScriptCanAutoPickupEquippable(struct AAresEquippable* TargetEquippable); // Function BasePlayerCharacter.BasePlayerCharacter_C.ScriptCanAutoPickupEquippable // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x19be2f0
	void StopLoadoutWidget(); // Function BasePlayerCharacter.BasePlayerCharacter_C.StopLoadoutWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitializeLoadoutWidgets(); // Function BasePlayerCharacter.BasePlayerCharacter_C.InitializeLoadoutWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StopCommHalo(); // Function BasePlayerCharacter.BasePlayerCharacter_C.StopCommHalo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateHaloForBombPossession(bool HasBomb); // Function BasePlayerCharacter.BasePlayerCharacter_C.UpdateHaloForBombPossession // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateCommHalos(enum class NonVerbalCommTypesEnum CommActionEnum); // Function BasePlayerCharacter.BasePlayerCharacter_C.UpdateCommHalos // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitializeCommHalo(); // Function BasePlayerCharacter.BasePlayerCharacter_C.InitializeCommHalo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__CorpseExploitation_K2Node_ComponentBoundEvent_0_ExploitationChanged__DelegateSignature(struct UCorpseExploitationComponent* ExploitationComponent); // Function BasePlayerCharacter.BasePlayerCharacter_C.BndEvt__CorpseExploitation_K2Node_ComponentBoundEvent_0_ExploitationChanged__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function BasePlayerCharacter.BasePlayerCharacter_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void UpdateHalosEvent(enum class NonVerbalCommTypesEnum CommActionEnum); // Function BasePlayerCharacter.BasePlayerCharacter_C.UpdateHalosEvent // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BombPossessionEvent(enum class EInventoryTransaction Transaction, struct UAresInventory* Inventory, struct AAresItem* Item); // Function BasePlayerCharacter.BasePlayerCharacter_C.BombPossessionEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ControllerReady(struct AController* PC); // Function BasePlayerCharacter.BasePlayerCharacter_C.ControllerReady // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitializeForRespawn(); // Function BasePlayerCharacter.BasePlayerCharacter_C.InitializeForRespawn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void NotifyOnPlayerState(); // Function BasePlayerCharacter.BasePlayerCharacter_C.NotifyOnPlayerState // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void HandleCharacterDeath(struct AShooterCharacter* Character, struct UDamageResponse* Response); // Function BasePlayerCharacter.BasePlayerCharacter_C.HandleCharacterDeath // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBombDefused(); // Function BasePlayerCharacter.BasePlayerCharacter_C.OnBombDefused // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void NotifyHandednessUpdated(); // Function BasePlayerCharacter.BasePlayerCharacter_C.NotifyHandednessUpdated // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void CleanupForPooling(); // Function BasePlayerCharacter.BasePlayerCharacter_C.CleanupForPooling // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitializeForUse(); // Function BasePlayerCharacter.BasePlayerCharacter_C.InitializeForUse // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BasePlayerCharacter.BasePlayerCharacter_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void HandleGFTChanged(enum class EGameFeatureToggleName GameFeatureToggleName, bool bEnabled); // Function BasePlayerCharacter.BasePlayerCharacter_C.HandleGFTChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_BasePlayerCharacter(int32_t EntryPoint); // Function BasePlayerCharacter.BasePlayerCharacter_C.ExecuteUbergraph_BasePlayerCharacter // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void CommEventForMinimapDispatcher__DelegateSignature(enum class NonVerbalCommTypesEnum CommType); // Function BasePlayerCharacter.BasePlayerCharacter_C.CommEventForMinimapDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void VoiceEventForMinimapDispatcher__DelegateSignature(enum class SpeakingStates NewSpeakingState); // Function BasePlayerCharacter.BasePlayerCharacter_C.VoiceEventForMinimapDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

