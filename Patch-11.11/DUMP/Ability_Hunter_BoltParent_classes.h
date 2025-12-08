// BlueprintGeneratedClass Ability_Hunter_BoltParent.Ability_Hunter_BoltParent_C
// Size: 0x1379 (Inherited: 0x1242)
struct AAbility_Hunter_BoltParent_C : AAbility_Equipped_Base_C {
	char pad_1242[0x6]; // 0x1242(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1248(0x08)
	struct UDestroyContextActors_StateComponent_C* DestroyContextActors_StateComponent; // 0x1250(0x08)
	struct UAresOutlineComponent* Outline1P; // 0x1258(0x08)
	struct UAresOutlineComponent* Outline3P; // 0x1260(0x08)
	struct UStateComponent_Charge_Incremental_C* ChargeBow_Incremental; // 0x1268(0x08)
	struct URespondToEventStateComponent* SelectBounce_Idle; // 0x1270(0x08)
	struct UStaticMeshComponent* ArrowMeshComponent3P; // 0x1278(0x08)
	struct UStaticMeshComponent* ArrowMeshComponent; // 0x1280(0x08)
	struct URespondToEventStateComponent* SelectBounce_0_Return; // 0x1288(0x08)
	struct URespondToEventStateComponent* SelectBounce_3; // 0x1290(0x08)
	struct URespondToEventStateComponent* SelectBounce_2; // 0x1298(0x08)
	struct URespondToEventStateComponent* SelectBounce_1; // 0x12a0(0x08)
	struct UEquippableStateMachineComponent* SelectBounceStateMachine; // 0x12a8(0x08)
	struct URespondToEventStateComponent* RespondToEventState_StartChargeDown; // 0x12b0(0x08)
	struct UProjectileThrowStateComponent* ProjectileThrowState_FireBolt; // 0x12b8(0x08)
	struct URespondToEventStateComponent* RespondToEventState_StartCharge; // 0x12c0(0x08)
	struct UConsumeResourcesStateComponent* ConsumeResourcesState; // 0x12c8(0x08)
	double ChargePercentage; // 0x12d0(0x08)
	struct FEffectID FXC_HUD; // 0x12d8(0x20)
	struct FEffectID FXC_BowString; // 0x12f8(0x20)
	struct AEffectContainer* FXC_ID_BowString; // 0x1318(0x08)
	struct UMaterialInstance* BowBaseDynamicMaterial; // 0x1320(0x08)
	struct UMaterialInstanceDynamic* DynamicBowMaterial; // 0x1328(0x08)
	struct UMaterialInstanceDynamic* DynamicArrowMaterial; // 0x1330(0x08)
	double BaseBowEmissive; // 0x1338(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> Dynamic3PBowMaterials; // 0x1340(0x10)
	struct UMaterialInstanceDynamic* DynamicStringMaterial; // 0x1350(0x08)
	struct FMulticastInlineDelegate BoltFired; // 0x1358(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> Dynamic3PArrowMaterials; // 0x1368(0x10)
	enum class EAresEquippableInput CancelChargeBowInput; // 0x1378(0x01)

	void GetCurrentBounces(int32_t& OutBounces); // Function Ability_Hunter_BoltParent.Ability_Hunter_BoltParent_C.GetCurrentBounces // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetDynamic3PArrowMaterial(struct TArray<struct UMaterialInstanceDynamic*>& DynamicMaterial); // Function Ability_Hunter_BoltParent.Ability_Hunter_BoltParent_C.GetDynamic3PArrowMaterial // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetTeamColorsOnMaterials(struct TArray<struct UMaterialInstanceDynamic*>& Array); // Function Ability_Hunter_BoltParent.Ability_Hunter_BoltParent_C.SetTeamColorsOnMaterials // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetDynamicStringMaterial(struct UMaterialInstanceDynamic*& DynamicMaterial); // Function Ability_Hunter_BoltParent.Ability_Hunter_BoltParent_C.GetDynamicStringMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetAllDynamicMaterials(struct UMeshComponent* MeshComponent, struct TArray<struct UMaterialInstanceDynamic*>& DynamicMaterial); // Function Ability_Hunter_BoltParent.Ability_Hunter_BoltParent_C.GetAllDynamicMaterials // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetDynamic3PBowMaterial(struct TArray<struct UMaterialInstanceDynamic*>& DynamicMaterial); // Function Ability_Hunter_BoltParent.Ability_Hunter_BoltParent_C.GetDynamic3PBowMaterial // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetBowEmissivesToBase(); // Function Ability_Hunter_BoltParent.Ability_Hunter_BoltParent_C.SetBowEmissivesToBase // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetDynamicMaterial(struct UMeshComponent* MeshComponent, struct UMaterialInstance* DynamicBaseMaterial, struct UMaterialInstanceDynamic*& DynamicMaterial); // Function Ability_Hunter_BoltParent.Ability_Hunter_BoltParent_C.GetDynamicMaterial // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetDynamicBowMaterial(struct UMaterialInstanceDynamic*& DynamicMaterial); // Function Ability_Hunter_BoltParent.Ability_Hunter_BoltParent_C.GetDynamicBowMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetDynamicArrowMaterial(struct UMaterialInstanceDynamic*& DynamicMaterial); // Function Ability_Hunter_BoltParent.Ability_Hunter_BoltParent_C.GetDynamicArrowMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetProjectileCharge(struct UObject* Object); // Function Ability_Hunter_BoltParent.Ability_Hunter_BoltParent_C.SetProjectileCharge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UBaseCrosshairHudElement* GetCurrentCrosshairHudElementClass(); // Function Ability_Hunter_BoltParent.Ability_Hunter_BoltParent_C.GetCurrentCrosshairHudElementClass // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function Ability_Hunter_BoltParent.Ability_Hunter_BoltParent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void AuthOnUnEquipped(); // Function Ability_Hunter_BoltParent.Ability_Hunter_BoltParent_C.AuthOnUnEquipped // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ConsumeResourcesState_K2Node_ComponentBoundEvent_0_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Ability_Hunter_BoltParent.Ability_Hunter_BoltParent_C.BndEvt__ConsumeResourcesState_K2Node_ComponentBoundEvent_0_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void AuthOnEquipped(); // Function Ability_Hunter_BoltParent.Ability_Hunter_BoltParent_C.AuthOnEquipped // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__RespondToEventState_StartChargeDown_K2Node_ComponentBoundEvent_0_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Ability_Hunter_BoltParent.Ability_Hunter_BoltParent_C.BndEvt__RespondToEventState_StartChargeDown_K2Node_ComponentBoundEvent_0_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ProjectileThrowState_FireBolt_0_K2Node_ComponentBoundEvent_1_OnStateExitSignature__DelegateSignature(struct UScriptStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function Ability_Hunter_BoltParent.Ability_Hunter_BoltParent_C.BndEvt__ProjectileThrowState_FireBolt_0_K2Node_ComponentBoundEvent_1_OnStateExitSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ProjectileThrowState_FireBolt_0_K2Node_ComponentBoundEvent_5_OnThrow__DelegateSignature(struct UProjectileThrowStateComponent* ThrowState, struct TArray<struct AProjectile*>& Projectiles); // Function Ability_Hunter_BoltParent.Ability_Hunter_BoltParent_C.BndEvt__ProjectileThrowState_FireBolt_0_K2Node_ComponentBoundEvent_5_OnThrow__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ChargeBow_Incremental_K2Node_ComponentBoundEvent_4_OnStateExitSignature__DelegateSignature(struct UScriptStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function Ability_Hunter_BoltParent.Ability_Hunter_BoltParent_C.BndEvt__ChargeBow_Incremental_K2Node_ComponentBoundEvent_4_OnStateExitSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ChargeBow_Incremental_K2Node_ComponentBoundEvent_2_ReachFullCharge__DelegateSignature(); // Function Ability_Hunter_BoltParent.Ability_Hunter_BoltParent_C.BndEvt__ChargeBow_Incremental_K2Node_ComponentBoundEvent_2_ReachFullCharge__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__EquipDelayState_K2Node_ComponentBoundEvent_3_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Ability_Hunter_BoltParent.Ability_Hunter_BoltParent_C.BndEvt__EquipDelayState_K2Node_ComponentBoundEvent_3_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ClientItemEquipped(); // Function Ability_Hunter_BoltParent.Ability_Hunter_BoltParent_C.ClientItemEquipped // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ClientItemUnEquipped(); // Function Ability_Hunter_BoltParent.Ability_Hunter_BoltParent_C.ClientItemUnEquipped // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Ability_Hunter_BoltParent(int32_t EntryPoint); // Function Ability_Hunter_BoltParent.Ability_Hunter_BoltParent_C.ExecuteUbergraph_Ability_Hunter_BoltParent // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void BoltFired__DelegateSignature(); // Function Ability_Hunter_BoltParent.Ability_Hunter_BoltParent_C.BoltFired__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

