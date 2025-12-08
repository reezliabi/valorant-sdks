// BlueprintGeneratedClass Ability_Hunter_X_LaserMulti.Ability_Hunter_X_LaserMulti_C
// Size: 0x1434 (Inherited: 0x11fa)
struct AAbility_Hunter_X_LaserMulti_C : AAbility_Base_C {
	char pad_11FA[0x6]; // 0x11fa(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1200(0x08)
	struct UBlueprintResourceVisualizationComponent* BlueprintResourceVisualization; // 0x1208(0x08)
	struct UStaticMeshComponent* StaticMesh_Arrow; // 0x1210(0x08)
	struct USyncStateMachineStateComponent* SyncStateMachineState_WaitForUnequip; // 0x1218(0x08)
	struct UTestBranch_IsCurrentState_StateComponent_C* TestBranch_IsCurrentState_Charging_Timeout; // 0x1220(0x08)
	struct UTestBranch_IsCurrentState_StateComponent_C* TestBranch_IsCurrentState_Charging; // 0x1228(0x08)
	struct UDirectionalTargetingMinimapComponent_C* DirectionalTargetingMinimapComponent; // 0x1230(0x08)
	struct USyncStateMachineStateComponent* SyncAndRespondToFire; // 0x1238(0x08)
	struct UTestBranch_IsCurrentState_StateComponent_C* TestBranch_IsCurrentState_StateComponent; // 0x1240(0x08)
	struct UTimedStateComponent* TimedState_LaserTimer; // 0x1248(0x08)
	struct UComp_Actor_MultiTargetHandler_Buff_C* Comp_Actor_MultiTargetHandler_Buff_InDanger; // 0x1250(0x08)
	struct UUltimateVOComponent_C* AbilityVOComponent; // 0x1258(0x08)
	struct UEquippableVisibilityComponent* EquippableVisibility; // 0x1260(0x08)
	struct UTimedStateComponent* TimedState_Cooldown_FireLaser; // 0x1268(0x08)
	struct UIterating_StateComponent_C* Iterating_StateComponent_FireLaser; // 0x1270(0x08)
	struct UComp_Equippable_UltActiveOnEquip_C* Comp_Equippable_UltActiveOnEquip; // 0x1278(0x08)
	struct UTimedStateComponent* UnequipDelay_Timeout; // 0x1280(0x08)
	struct UCheckResourcesStateComponent* CheckResourcesState; // 0x1288(0x08)
	struct UEquipStateComponent* EquipAbilityState; // 0x1290(0x08)
	struct UStateComponent_PlayFXC_OnContext_C* StateComponent_PlayFXC_OnContext; // 0x1298(0x08)
	struct UExploitCorpseStateComponent* ExploitCorpseState; // 0x12a0(0x08)
	struct UTimedStateComponent* UnequipDelay_Cancel; // 0x12a8(0x08)
	struct USyncStateMachineStateComponent* SyncStateMachineState_WaitForEquip; // 0x12b0(0x08)
	struct USyncStateMachineStateComponent* WaitForLaserComplete; // 0x12b8(0x08)
	struct UEquippableStateMachineComponent* EquippableStateMachine_FireLaser; // 0x12c0(0x08)
	struct UConsumeResourcesStateComponent* ConsumeResourcesState; // 0x12c8(0x08)
	struct UUltPointsComponent* UltPoints; // 0x12d0(0x08)
	struct UTimedStateComponent* UnequipDelay; // 0x12d8(0x08)
	struct UUnequipStateComponent* UnequipState; // 0x12e0(0x08)
	struct UStateComponent_Hunter_X_UltDamage_C* StateComponent_Hunter_X_UltDamage; // 0x12e8(0x08)
	struct USphereSweepTargeting_StateComponent_C* SphereSweepTargeting_StateComponent; // 0x12f0(0x08)
	struct UArrowComponent* Arrow; // 0x12f8(0x08)
	struct UCapsuleComponent* Capsule; // 0x1300(0x08)
	struct USceneComponent* Scene; // 0x1308(0x08)
	struct UTimedStateComponent* EquipTimeState; // 0x1310(0x08)
	struct UApplyBuffStateComponent* ChargingBuffState; // 0x1318(0x08)
	struct FVector InitialVel; // 0x1320(0x18)
	double Range; // 0x1338(0x08)
	double Radius; // 0x1340(0x08)
	struct TArray<struct FActorAnd_FXC_Struct> HunterFXCs; // 0x1348(0x10)
	struct FEffectID FXC_ID_EquipUntilFire; // 0x1358(0x20)
	struct FMulticastInlineDelegate ChargingStart; // 0x1378(0x10)
	struct UMaterialInstanceDynamic* DynamicStringMaterial; // 0x1388(0x08)
	struct UMaterialInstanceDynamic* DynamicArrowMaterial; // 0x1390(0x08)
	struct UMaterialInstanceDynamic* DynamicBowMaterial; // 0x1398(0x08)
	struct FEffectID FXC_ID_HunterHUD; // 0x13a0(0x20)
	struct FActiveGameplayEffectHandle EquippedBuff; // 0x13c0(0x08)
	struct FEffectData HUD_EffectData; // 0x13c8(0x58)
	struct TArray<struct UMaterialInstanceDynamic*> DynamicBow3P_Materials; // 0x1420(0x10)
	int32_t laserAmmoLeft; // 0x1430(0x04)

	void CreateDynamicMaterials(struct UMeshComponent* InMesh, struct TArray<struct UMaterialInstanceDynamic*>& DynamicMaterial); // Function Ability_Hunter_X_LaserMulti.Ability_Hunter_X_LaserMulti_C.CreateDynamicMaterials // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetBowDynamicMaterials(struct TArray<struct UMaterialInstanceDynamic*>& DynamicMaterial); // Function Ability_Hunter_X_LaserMulti.Ability_Hunter_X_LaserMulti_C.GetBowDynamicMaterials // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetupDynamicMaterials(struct UObject* Owner); // Function Ability_Hunter_X_LaserMulti.Ability_Hunter_X_LaserMulti_C.SetupDynamicMaterials // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetDynamicBowMaterial(struct UMaterialInstanceDynamic*& DynamicMaterial); // Function Ability_Hunter_X_LaserMulti.Ability_Hunter_X_LaserMulti_C.GetDynamicBowMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetDynamicArrowMaterial(struct UMaterialInstanceDynamic*& DynamicMaterial); // Function Ability_Hunter_X_LaserMulti.Ability_Hunter_X_LaserMulti_C.GetDynamicArrowMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetDynamicStringMaterial(struct UMaterialInstanceDynamic*& DynamicMaterial); // Function Ability_Hunter_X_LaserMulti.Ability_Hunter_X_LaserMulti_C.GetDynamicStringMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetDynamicMaterial(struct UMeshComponent* Mesh, struct UMaterialInstance* DynamicBase, struct UMaterialInstanceDynamic*& DynamicMaterial); // Function Ability_Hunter_X_LaserMulti.Ability_Hunter_X_LaserMulti_C.GetDynamicMaterial // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function Ability_Hunter_X_LaserMulti.Ability_Hunter_X_LaserMulti_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ApplyBuffState_K2Node_ComponentBoundEvent_1_OnStateExitSignature__DelegateSignature(struct UScriptStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function Ability_Hunter_X_LaserMulti.Ability_Hunter_X_LaserMulti_C.BndEvt__ApplyBuffState_K2Node_ComponentBoundEvent_1_OnStateExitSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ChargingBuffState_K2Node_ComponentBoundEvent_1_OnStateTickSignature__DelegateSignature(struct UScriptStateComponent* State, float DeltaTimeSeconds); // Function Ability_Hunter_X_LaserMulti.Ability_Hunter_X_LaserMulti_C.BndEvt__ChargingBuffState_K2Node_ComponentBoundEvent_1_OnStateTickSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ChargingBuffState_K2Node_ComponentBoundEvent_1_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Ability_Hunter_X_LaserMulti.Ability_Hunter_X_LaserMulti_C.BndEvt__ChargingBuffState_K2Node_ComponentBoundEvent_1_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void AuthOnUnEquipped(); // Function Ability_Hunter_X_LaserMulti.Ability_Hunter_X_LaserMulti_C.AuthOnUnEquipped // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveDestroyed(); // Function Ability_Hunter_X_LaserMulti.Ability_Hunter_X_LaserMulti_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__SphereSweepTargeting_StateComponent_K2Node_ComponentBoundEvent_0_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Ability_Hunter_X_LaserMulti.Ability_Hunter_X_LaserMulti_C.BndEvt__SphereSweepTargeting_StateComponent_K2Node_ComponentBoundEvent_0_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__EquipTimeState_K2Node_ComponentBoundEvent_0_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Ability_Hunter_X_LaserMulti.Ability_Hunter_X_LaserMulti_C.BndEvt__EquipTimeState_K2Node_ComponentBoundEvent_0_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void AuthOnPawnDeath(); // Function Ability_Hunter_X_LaserMulti.Ability_Hunter_X_LaserMulti_C.AuthOnPawnDeath // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Iterating_StateComponent_FireLaser_K2Node_ComponentBoundEvent_0_RequirementMet__DelegateSignature(); // Function Ability_Hunter_X_LaserMulti.Ability_Hunter_X_LaserMulti_C.BndEvt__Iterating_StateComponent_FireLaser_K2Node_ComponentBoundEvent_0_RequirementMet__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__EquippableVisibility_K2Node_ComponentBoundEvent_0_CanBeSeenByCharacterOverride__DelegateSignature(struct UVisibilityComponent* VisibilityComponent, struct AShooterCharacter* Character); // Function Ability_Hunter_X_LaserMulti.Ability_Hunter_X_LaserMulti_C.BndEvt__EquippableVisibility_K2Node_ComponentBoundEvent_0_CanBeSeenByCharacterOverride__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TimedState_LaserTimer_K2Node_ComponentBoundEvent_3_OnStateExitSignature__DelegateSignature(struct UScriptStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function Ability_Hunter_X_LaserMulti.Ability_Hunter_X_LaserMulti_C.BndEvt__TimedState_LaserTimer_K2Node_ComponentBoundEvent_3_OnStateExitSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__StateComponent_Hunter_X_UltDamage_K2Node_ComponentBoundEvent_5_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Ability_Hunter_X_LaserMulti.Ability_Hunter_X_LaserMulti_C.BndEvt__StateComponent_Hunter_X_UltDamage_K2Node_ComponentBoundEvent_5_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__SyncStateMachineState_WaitForUnequip_K2Node_ComponentBoundEvent_6_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Ability_Hunter_X_LaserMulti.Ability_Hunter_X_LaserMulti_C.BndEvt__SyncStateMachineState_WaitForUnequip_K2Node_ComponentBoundEvent_6_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ClientItemEquipped(); // Function Ability_Hunter_X_LaserMulti.Ability_Hunter_X_LaserMulti_C.ClientItemEquipped // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__UnequipDelay_K2Node_ComponentBoundEvent_2_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Ability_Hunter_X_LaserMulti.Ability_Hunter_X_LaserMulti_C.BndEvt__UnequipDelay_K2Node_ComponentBoundEvent_2_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ConsumeResourcesState_K2Node_ComponentBoundEvent_4_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Ability_Hunter_X_LaserMulti.Ability_Hunter_X_LaserMulti_C.BndEvt__ConsumeResourcesState_K2Node_ComponentBoundEvent_4_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void AuthOnEquip(); // Function Ability_Hunter_X_LaserMulti.Ability_Hunter_X_LaserMulti_C.AuthOnEquip // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Iterating_StateComponent_FireLaser_K2Node_ComponentBoundEvent_9_OnStateExitSignature__DelegateSignature(struct UScriptStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function Ability_Hunter_X_LaserMulti.Ability_Hunter_X_LaserMulti_C.BndEvt__Iterating_StateComponent_FireLaser_K2Node_ComponentBoundEvent_9_OnStateExitSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__EquipAbilityState_K2Node_ComponentBoundEvent_10_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Ability_Hunter_X_LaserMulti.Ability_Hunter_X_LaserMulti_C.BndEvt__EquipAbilityState_K2Node_ComponentBoundEvent_10_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Ability_Hunter_X_LaserMulti(int32_t EntryPoint); // Function Ability_Hunter_X_LaserMulti.Ability_Hunter_X_LaserMulti_C.ExecuteUbergraph_Ability_Hunter_X_LaserMulti // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void ChargingStart__DelegateSignature(); // Function Ability_Hunter_X_LaserMulti.Ability_Hunter_X_LaserMulti_C.ChargingStart__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

