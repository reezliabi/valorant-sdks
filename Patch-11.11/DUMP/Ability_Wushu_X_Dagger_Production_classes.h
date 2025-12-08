// BlueprintGeneratedClass Ability_Wushu_X_Dagger_Production.Ability_Wushu_X_Dagger_Production_C
// Size: 0x1489 (Inherited: 0x1242)
struct AAbility_Wushu_X_Dagger_Production_C : AAbility_Equipped_Base_C {
	char pad_1242[0x6]; // 0x1242(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1248(0x08)
	struct UAttributeDrivenTimedStateComponent* Projectile4CommitState; // 0x1250(0x08)
	struct UAttributeDrivenTimedStateComponent* Projectile3CommitState; // 0x1258(0x08)
	struct UAttributeDrivenTimedStateComponent* Projectile2CommitState; // 0x1260(0x08)
	struct UAttributeDrivenTimedStateComponent* Projectile1CommitState; // 0x1268(0x08)
	struct UAttributeDrivenTimedStateComponent* Projectile0CommitState; // 0x1270(0x08)
	struct UComp_Wushu_X_Dagger_ChooseNextProjectileCommitState_C* ChooseNextProjectileCommitState; // 0x1278(0x08)
	struct UAttributeDrivenTimedStateComponent* EquipNormalDelayState; // 0x1280(0x08)
	struct UAttributeDrivenTimedStateComponent* EquipInstantDelayState; // 0x1288(0x08)
	struct UAttributeDrivenTimedStateComponent* FirstEquipDelayState; // 0x1290(0x08)
	struct UAttributeDrivenTimedStateComponent* EquipFastDelayState; // 0x1298(0x08)
	struct USetOwnerAsContextActor_StateComponent_C* SetOwnerAsContextActor_StateComponent; // 0x12a0(0x08)
	struct UTimedStateComponent* ConcussDelayState; // 0x12a8(0x08)
	struct UTestBranch_StateComponent_isConcussed_C* TestBranch_StateComponent_isConcussed; // 0x12b0(0x08)
	struct UBlueprintResourceVisualizationComponent* BlueprintResourceVisualization; // 0x12b8(0x08)
	struct UParticleSystemComponent* Wushu_X_3P_DaggerFloat4; // 0x12c0(0x08)
	struct UParticleSystemComponent* Wushu_X_3P_DaggerFloat3; // 0x12c8(0x08)
	struct UParticleSystemComponent* Wushu_X_3P_DaggerFloat2; // 0x12d0(0x08)
	struct UParticleSystemComponent* Wushu_X_3P_DaggerFloat1; // 0x12d8(0x08)
	struct UParticleSystemComponent* Wushu_X_3P_DaggerFloat; // 0x12e0(0x08)
	struct UStaticMeshComponent* Knife1_1P; // 0x12e8(0x08)
	struct UInternalBool_StateComponent_C* InternalBool_ShouldForceFullEquip; // 0x12f0(0x08)
	struct UComp_Wushu_X_DaggerResource_C* Comp_Wushu_X_DaggerResource; // 0x12f8(0x08)
	struct UUltimateVOComponent_C* AbilityVOComponent; // 0x1300(0x08)
	struct UEquipSpeedSwitch_StateComponent_C* EquipSpeedSwitch_StateComponent; // 0x1308(0x08)
	struct UParticleSystemComponent* Wushu_X_1P_DaggerFloat5; // 0x1310(0x08)
	struct UParticleSystemComponent* Wushu_X_1P_DaggerFloat4; // 0x1318(0x08)
	struct UParticleSystemComponent* Wushu_X_1P_DaggerFloat3; // 0x1320(0x08)
	struct UParticleSystemComponent* Wushu_X_1P_DaggerFloat2; // 0x1328(0x08)
	struct UParticleSystemComponent* Wushu_X_1P_DaggerFloat1; // 0x1330(0x08)
	struct UStaticMeshComponent* Knife5_3P; // 0x1338(0x08)
	struct UStaticMeshComponent* Knife4_3P; // 0x1340(0x08)
	struct UStaticMeshComponent* Knife3_3P; // 0x1348(0x08)
	struct UStaticMeshComponent* Knife2_3P; // 0x1350(0x08)
	struct UStaticMeshComponent* Knife1_3P; // 0x1358(0x08)
	struct UStaticMeshComponent* Knife5_1P; // 0x1360(0x08)
	struct UStaticMeshComponent* Knife4_1P; // 0x1368(0x08)
	struct UStaticMeshComponent* Knife3_1P; // 0x1370(0x08)
	struct UStaticMeshComponent* Knife2_1P; // 0x1378(0x08)
	struct UComp_Wushu_X_TestDaggerActiveState_C* TestDaggerAfterFiringState; // 0x1380(0x08)
	struct UTestBranch_IsQuickEquip_StateComponent_C* TestBranch_IsQuickEquip_StateComponent; // 0x1388(0x08)
	struct UComp_Wushu_X_TestDaggerActiveState_C* Comp_Wushu_X_TestDaggerActiveState; // 0x1390(0x08)
	struct UTimedStateComponent* BurstCommitState; // 0x1398(0x08)
	struct UIterating_StateComponent_C* BurstIteratingState; // 0x13a0(0x08)
	struct UFireProjectileMulticastWithManualError_StateComponent_C* BurstProjectileFireState; // 0x13a8(0x08)
	struct UFireProjectileMulticastWithManualError_StateComponent_C* ProjectileFireState; // 0x13b0(0x08)
	struct UTestBranch_IsQuickEquip_StateComponent_C* TestQuickEquipState; // 0x13b8(0x08)
	struct UStabilityComponent* Stability; // 0x13c0(0x08)
	struct UNetworkedRandomNumberGeneratorComponent* NetworkedRandomNumberGenerator; // 0x13c8(0x08)
	struct UCheckResourcesStateComponent* CheckResourcesUnequipState; // 0x13d0(0x08)
	struct UConsumeResourcesStateComponent* InitialConsumeResourceState; // 0x13d8(0x08)
	struct UComp_Wushu_X_TestDaggerActiveState_C* TestDaggerActiveEquipState; // 0x13e0(0x08)
	struct URespondToEventStateComponent* WaitForClickState; // 0x13e8(0x08)
	int32_t CurrentDaggerIndex; // 0x13f0(0x04)
	char pad_13F4[0x4]; // 0x13f4(0x04)
	struct TArray<struct UStaticMeshComponent*> Knife1PArray; // 0x13f8(0x10)
	struct TArray<struct UStaticMeshComponent*> Knife3PArray; // 0x1408(0x10)
	struct TArray<struct AEffectContainer*> ThrowFXCArray; // 0x1418(0x10)
	struct TArray<struct AProjectile*> BurstProjectileArray; // 0x1428(0x10)
	struct TArray<struct AProjectile*> ProjectileArray; // 0x1438(0x10)
	struct FTimerHandle FullTimeCommitHandle; // 0x1448(0x08)
	struct ABasePlayerState_C* OwningPlayerState; // 0x1450(0x08)
	double FullCommitRequiredTime; // 0x1458(0x08)
	struct TArray<struct UParticleSystemComponent*> FloatVFXArray; // 0x1460(0x10)
	int32_t AuthCurrentDaggerIndex; // 0x1470(0x04)
	char pad_1474[0x4]; // 0x1474(0x04)
	double ClientDisagreementTimeout; // 0x1478(0x08)
	struct FTimerHandle DisagreementDelayTimer; // 0x1480(0x08)
	enum class EAresEquippableInput BurstFireStateInput; // 0x1488(0x01)

	void SetupProjectileCommitStates(); // Function Ability_Wushu_X_Dagger_Production.Ability_Wushu_X_Dagger_Production_C.SetupProjectileCommitStates // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EmitDaggerTelemetry(int32_t NumDaggers); // Function Ability_Wushu_X_Dagger_Production.Ability_Wushu_X_Dagger_Production_C.EmitDaggerTelemetry // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CheckForClientDisagreementAfterDelay(double DesiredDelay); // Function Ability_Wushu_X_Dagger_Production.Ability_Wushu_X_Dagger_Production_C.CheckForClientDisagreementAfterDelay // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRep_AuthCurrentDaggerIndex(); // Function Ability_Wushu_X_Dagger_Production.Ability_Wushu_X_Dagger_Production_C.OnRep_AuthCurrentDaggerIndex // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateClientDaggerVisibility(int32_t LastVisibleIndex); // Function Ability_Wushu_X_Dagger_Production.Ability_Wushu_X_Dagger_Production_C.UpdateClientDaggerVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool CanAutoEquip(); // Function Ability_Wushu_X_Dagger_Production.Ability_Wushu_X_Dagger_Production_C.CanAutoEquip // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	float GetAutoEquipPriority(); // Function Ability_Wushu_X_Dagger_Production.Ability_Wushu_X_Dagger_Production_C.GetAutoEquipPriority // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateDaggerClassForIndexBurst(struct UFireProjectileMulticast_StateComponent_C* ProjectileComponent); // Function Ability_Wushu_X_Dagger_Production.Ability_Wushu_X_Dagger_Production_C.UpdateDaggerClassForIndexBurst // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitializeDaggerArrays(); // Function Ability_Wushu_X_Dagger_Production.Ability_Wushu_X_Dagger_Production_C.InitializeDaggerArrays // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct TArray<struct FName> GetBurstDaggerSockets(); // Function Ability_Wushu_X_Dagger_Production.Ability_Wushu_X_Dagger_Production_C.GetBurstDaggerSockets // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FName GetCurrentDaggerSocket(); // Function Ability_Wushu_X_Dagger_Production.Ability_Wushu_X_Dagger_Production_C.GetCurrentDaggerSocket // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool IsCurrentlyEquipping(); // Function Ability_Wushu_X_Dagger_Production.Ability_Wushu_X_Dagger_Production_C.IsCurrentlyEquipping // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void UpdateDaggerClassForIndex(struct UFireProjectileMulticast_StateComponent_C* ProjectileComponent); // Function Ability_Wushu_X_Dagger_Production.Ability_Wushu_X_Dagger_Production_C.UpdateDaggerClassForIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateDaggerIndex(int32_t DaggerIndex, bool IsCorrection); // Function Ability_Wushu_X_Dagger_Production.Ability_Wushu_X_Dagger_Production_C.UpdateDaggerIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function Ability_Wushu_X_Dagger_Production.Ability_Wushu_X_Dagger_Production_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WaitForClickState_K2Node_ComponentBoundEvent_2_OnStateExitSignature__DelegateSignature(struct UScriptStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function Ability_Wushu_X_Dagger_Production.Ability_Wushu_X_Dagger_Production_C.BndEvt__WaitForClickState_K2Node_ComponentBoundEvent_2_OnStateExitSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ProjectileCommit2State_K2Node_ComponentBoundEvent_3_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Ability_Wushu_X_Dagger_Production.Ability_Wushu_X_Dagger_Production_C.BndEvt__ProjectileCommit2State_K2Node_ComponentBoundEvent_3_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ProjectileFireState_K2Node_ComponentBoundEvent_4_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Ability_Wushu_X_Dagger_Production.Ability_Wushu_X_Dagger_Production_C.BndEvt__ProjectileFireState_K2Node_ComponentBoundEvent_4_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__BurstProjectileFireState_K2Node_ComponentBoundEvent_8_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Ability_Wushu_X_Dagger_Production.Ability_Wushu_X_Dagger_Production_C.BndEvt__BurstProjectileFireState_K2Node_ComponentBoundEvent_8_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void Event Handle Dagger Throw FXC(struct UScriptStateComponent* ProjectileCommitState); // Function Ability_Wushu_X_Dagger_Production.Ability_Wushu_X_Dagger_Production_C.Event Handle Dagger Throw FXC // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Event Play VO Line(); // Function Ability_Wushu_X_Dagger_Production.Ability_Wushu_X_Dagger_Production_C.Event Play VO Line // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Comp_Wushu_X_DaggerResource_K2Node_ComponentBoundEvent_1_ResourceChanged__DelegateSignature(struct UResourceComponent* ResourceComponent); // Function Ability_Wushu_X_Dagger_Production.Ability_Wushu_X_Dagger_Production_C.BndEvt__Comp_Wushu_X_DaggerResource_K2Node_ComponentBoundEvent_1_ResourceChanged__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__InitialConsumeResourceState_K2Node_ComponentBoundEvent_6_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Ability_Wushu_X_Dagger_Production.Ability_Wushu_X_Dagger_Production_C.BndEvt__InitialConsumeResourceState_K2Node_ComponentBoundEvent_6_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void Event Finish Full Equip Commit(); // Function Ability_Wushu_X_Dagger_Production.Ability_Wushu_X_Dagger_Production_C.Event Finish Full Equip Commit // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveAuthSetOwningCharacter(struct AShooterCharacter* NewCharacter); // Function Ability_Wushu_X_Dagger_Production.Ability_Wushu_X_Dagger_Production_C.ReceiveAuthSetOwningCharacter // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void OnAuthGenerateKillEffects_Event_1(struct AShooterCharacter* KillerCharacter, struct AShooterCharacter* VictimCharacter, struct UDamageResponse* KillDamageResponse); // Function Ability_Wushu_X_Dagger_Production.Ability_Wushu_X_Dagger_Production_C.OnAuthGenerateKillEffects_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__EquipAbilityState_K2Node_ComponentBoundEvent_7_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Ability_Wushu_X_Dagger_Production.Ability_Wushu_X_Dagger_Production_C.BndEvt__EquipAbilityState_K2Node_ComponentBoundEvent_7_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void HandleAuthValues(); // Function Ability_Wushu_X_Dagger_Production.Ability_Wushu_X_Dagger_Production_C.HandleAuthValues // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Ability_Wushu_X_Dagger_Production_FirstEquipDelayState_K2Node_ComponentBoundEvent_11_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Ability_Wushu_X_Dagger_Production.Ability_Wushu_X_Dagger_Production_C.BndEvt__Ability_Wushu_X_Dagger_Production_FirstEquipDelayState_K2Node_ComponentBoundEvent_11_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Ability_Wushu_X_Dagger_Production_FirstEquipDelayState_K2Node_ComponentBoundEvent_12_OnStateExitSignature__DelegateSignature(struct UScriptStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function Ability_Wushu_X_Dagger_Production.Ability_Wushu_X_Dagger_Production_C.BndEvt__Ability_Wushu_X_Dagger_Production_FirstEquipDelayState_K2Node_ComponentBoundEvent_12_OnStateExitSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void HandleStateEnter_AnyProjectileCommitState(struct UScriptStateComponent* ProjectileCommitState); // Function Ability_Wushu_X_Dagger_Production.Ability_Wushu_X_Dagger_Production_C.HandleStateEnter_AnyProjectileCommitState // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Ability_Wushu_X_Dagger_Production_Projectile0CommitState_K2Node_ComponentBoundEvent_9_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Ability_Wushu_X_Dagger_Production.Ability_Wushu_X_Dagger_Production_C.BndEvt__Ability_Wushu_X_Dagger_Production_Projectile0CommitState_K2Node_ComponentBoundEvent_9_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Ability_Wushu_X_Dagger_Production_Projectile1CommitState_K2Node_ComponentBoundEvent_10_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Ability_Wushu_X_Dagger_Production.Ability_Wushu_X_Dagger_Production_C.BndEvt__Ability_Wushu_X_Dagger_Production_Projectile1CommitState_K2Node_ComponentBoundEvent_10_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Ability_Wushu_X_Dagger_Production_Projectile2CommitState_K2Node_ComponentBoundEvent_13_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Ability_Wushu_X_Dagger_Production.Ability_Wushu_X_Dagger_Production_C.BndEvt__Ability_Wushu_X_Dagger_Production_Projectile2CommitState_K2Node_ComponentBoundEvent_13_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Ability_Wushu_X_Dagger_Production_Projectile3CommitState_K2Node_ComponentBoundEvent_14_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Ability_Wushu_X_Dagger_Production.Ability_Wushu_X_Dagger_Production_C.BndEvt__Ability_Wushu_X_Dagger_Production_Projectile3CommitState_K2Node_ComponentBoundEvent_14_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Ability_Wushu_X_Dagger_Production_Projectile4CommitState_K2Node_ComponentBoundEvent_15_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Ability_Wushu_X_Dagger_Production.Ability_Wushu_X_Dagger_Production_C.BndEvt__Ability_Wushu_X_Dagger_Production_Projectile4CommitState_K2Node_ComponentBoundEvent_15_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Ability_Wushu_X_Dagger_Production(int32_t EntryPoint); // Function Ability_Wushu_X_Dagger_Production.Ability_Wushu_X_Dagger_Production_C.ExecuteUbergraph_Ability_Wushu_X_Dagger_Production // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

