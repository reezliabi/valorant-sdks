// BlueprintGeneratedClass Ability_Melee_Base.Ability_Melee_Base_C
// Size: 0x1408 (Inherited: 0x11fa)
struct AAbility_Melee_Base_C : AAbility_Base_C {
	char pad_11FA[0x6]; // 0x11fa(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1200(0x08)
	struct UTimedStateComponent* WaitForComboInput5; // 0x1208(0x08)
	struct UMeleeAttackStateComponent* MeleeAttackState5; // 0x1210(0x08)
	struct UAnimTriggeredStateComponent* AnimTriggeredState5; // 0x1218(0x08)
	struct USkeletalMeshComponent* Offhand_Mesh1P; // 0x1220(0x08)
	struct UEffectManagerComponent* EffectManager; // 0x1228(0x08)
	struct UEquipStateComponent* GhostEquipState; // 0x1230(0x08)
	struct UTimedStateComponent* WaitForAltAttack; // 0x1238(0x08)
	struct UMeleeAttackStateComponent* MeleeAttackState_Alt; // 0x1240(0x08)
	struct UAnimTriggeredStateComponent* AnimTriggeredState_Alt; // 0x1248(0x08)
	struct UReadyingStateComponent* ReadyingState; // 0x1250(0x08)
	struct UAresOutlineComponent* Outline1P; // 0x1258(0x08)
	struct UAresOutlineComponent* Outline3P; // 0x1260(0x08)
	struct UTimedStateComponent* WaitForComboInput4; // 0x1268(0x08)
	struct UMeleeAttackStateComponent* MeleeAttackState4; // 0x1270(0x08)
	struct UAnimTriggeredStateComponent* AnimTriggeredState4; // 0x1278(0x08)
	struct UMeleeAttackStateComponent* MeleeAttackState3; // 0x1280(0x08)
	struct UAnimTriggeredStateComponent* AnimTriggeredState3; // 0x1288(0x08)
	struct UTimedStateComponent* WaitForComboInput3; // 0x1290(0x08)
	struct UAnimTriggeredStateComponent* AnimTriggeredState2; // 0x1298(0x08)
	struct UTimedStateComponent* WaitForComboInput2; // 0x12a0(0x08)
	struct UMeleeAttackStateComponent* MeleeAttackState2; // 0x12a8(0x08)
	struct UTimedStateComponent* WaitForComboInput1; // 0x12b0(0x08)
	struct UEquipStateComponent* EquipState; // 0x12b8(0x08)
	struct UMeleeAttackStateComponent* MeleeAttackState1; // 0x12c0(0x08)
	struct UAnimTriggeredStateComponent* AnimTriggeredState1; // 0x12c8(0x08)
	struct URespondToEventStateComponent* FirstAttackIdle; // 0x12d0(0x08)
	double AttackTime1; // 0x12d8(0x08)
	double AttackDuration1; // 0x12e0(0x08)
	double ComboTime1; // 0x12e8(0x08)
	struct AEffectContainer* Inspect; // 0x12f0(0x08)
	double AltAttackDuration; // 0x12f8(0x08)
	double AltAttackTime; // 0x1300(0x08)
	struct FEffectID InspectAnim; // 0x1308(0x20)
	int32_t ComboNumber; // 0x1328(0x04)
	char pad_132C[0x4]; // 0x132c(0x04)
	struct AEffectContainer* EquippedEffect; // 0x1330(0x08)
	struct FEffectData EffectData; // 0x1338(0x58)
	bool InspectAnimationActive; // 0x1390(0x01)
	char pad_1391[0x7]; // 0x1391(0x07)
	struct TMap<struct FString, struct UAresEquippableMeshAttachmentComponent_C*> Ares Equippable Mesh Attachment Component Map; // 0x1398(0x50)
	struct FMulticastInlineDelegate Inspect Called; // 0x13e8(0x10)
	struct TArray<struct UAnimTriggeredStateComponent*> AnimTriggeredStateArray; // 0x13f8(0x10)

	void GetMagazine3p(struct UStaticMeshComponent*& MagazineMesh, struct TArray<struct UMaterialInterface*>& ArrayOfMaterials); // Function Ability_Melee_Base.Ability_Melee_Base_C.GetMagazine3p // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetMagazine(struct UStaticMeshComponent*& MagazineMesh, struct TArray<struct UMaterialInterface*>& ArrayOfMaterials); // Function Ability_Melee_Base.Ability_Melee_Base_C.GetMagazine // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetBulletComponent(struct UBulletComponent_C*& BulletComponent); // Function Ability_Melee_Base.Ability_Melee_Base_C.GetBulletComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetFirstPersonCosmeticMesh(struct USkeletalMeshComponent*& Mesh); // Function Ability_Melee_Base.Ability_Melee_Base_C.GetFirstPersonCosmeticMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetFirstPersonMesh(struct USkeletalMeshComponent*& Mesh); // Function Ability_Melee_Base.Ability_Melee_Base_C.GetFirstPersonMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetThirdPersonMesh(struct USkeletalMeshComponent*& Mesh); // Function Ability_Melee_Base.Ability_Melee_Base_C.GetThirdPersonMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InterruptStateEffectsSelector(int32_t OnStateEnter); // Function Ability_Melee_Base.Ability_Melee_Base_C.InterruptStateEffectsSelector // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Up Combo(struct UTimedStateComponent* WaitForComboInput, struct UAnimTriggeredStateComponent* NextAnimTriggeredState, struct UMeleeAttackStateComponent* NextMeleeAttackState, struct UTimedStateComponent* NextWaitForComboInput); // Function Ability_Melee_Base.Ability_Melee_Base_C.Set Up Combo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Create Skeletal Component(struct UAresEquippableMeshAttachmentComponent_C* Ares Equippable Mesh Attachment Component, struct USkeletalMeshComponent*& Attached Mesh 1P, struct USkeletalMeshComponent*& Attached Mesh 3P); // Function Ability_Melee_Base.Ability_Melee_Base_C.Create Skeletal Component // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UBaseCrosshairHudElement* GetCurrentCrosshairHudElementClass(); // Function Ability_Melee_Base.Ability_Melee_Base_C.GetCurrentCrosshairHudElementClass // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x19be2f0
	void Override1pMagazineMaterials(int32_t Index, struct UMaterialInterface* Material); // Function Ability_Melee_Base.Ability_Melee_Base_C.Override1pMagazineMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Override3pMagazineMaterials(int32_t Index, struct UMaterialInterface* Material); // Function Ability_Melee_Base.Ability_Melee_Base_C.Override3pMagazineMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddVFXMeshes(struct UStaticMeshComponent* VFX Mesh); // Function Ability_Melee_Base.Ability_Melee_Base_C.AddVFXMeshes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function Ability_Melee_Base.Ability_Melee_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void OverrideMaterialIndex(int32_t Index, struct UMaterialInterface* Material); // Function Ability_Melee_Base.Ability_Melee_Base_C.OverrideMaterialIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitializeCombo(); // Function Ability_Melee_Base.Ability_Melee_Base_C.InitializeCombo // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ClientItemEquipped(); // Function Ability_Melee_Base.Ability_Melee_Base_C.ClientItemEquipped // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ClientItemUnEquipped(); // Function Ability_Melee_Base.Ability_Melee_Base_C.ClientItemUnEquipped // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function Ability_Melee_Base.Ability_Melee_Base_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveClientClearOwningCharacter(struct AShooterCharacter* OldCharacter); // Function Ability_Melee_Base.Ability_Melee_Base_C.ReceiveClientClearOwningCharacter // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void CancelInspect(); // Function Ability_Melee_Base.Ability_Melee_Base_C.CancelInspect // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__FirstAttackIdle_K2Node_ComponentBoundEvent_0_OnStateExitSignature__DelegateSignature(struct UScriptStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function Ability_Melee_Base.Ability_Melee_Base_C.BndEvt__FirstAttackIdle_K2Node_ComponentBoundEvent_0_OnStateExitSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void AuthOnUnEquipped(); // Function Ability_Melee_Base.Ability_Melee_Base_C.AuthOnUnEquipped // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void Override3pMaterial(int32_t Index, struct UMaterialInterface* Material); // Function Ability_Melee_Base.Ability_Melee_Base_C.Override3pMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Override1pMesh(struct USkeletalMesh* 1PMesh, struct USkeletalMesh* 1PCosmeticMesh, struct UStaticMesh* 1PMagazine, struct UAnimInstance* CosmeticAnimGraph); // Function Ability_Melee_Base.Ability_Melee_Base_C.Override1pMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Override3pMesh(struct USkeletalMesh* 3PMesh, struct UStaticMesh* 3PMagazine, struct UAnimInstance* CosmeticAnimGraph); // Function Ability_Melee_Base.Ability_Melee_Base_C.Override3pMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__AnimTriggeredState2_K2Node_ComponentBoundEvent_1_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Ability_Melee_Base.Ability_Melee_Base_C.BndEvt__AnimTriggeredState2_K2Node_ComponentBoundEvent_1_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__AnimTriggeredState3_K2Node_ComponentBoundEvent_2_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Ability_Melee_Base.Ability_Melee_Base_C.BndEvt__AnimTriggeredState3_K2Node_ComponentBoundEvent_2_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__AnimTriggeredState4_K2Node_ComponentBoundEvent_3_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Ability_Melee_Base.Ability_Melee_Base_C.BndEvt__AnimTriggeredState4_K2Node_ComponentBoundEvent_3_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__AnimTriggeredState_Alt_K2Node_ComponentBoundEvent_4_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Ability_Melee_Base.Ability_Melee_Base_C.BndEvt__AnimTriggeredState_Alt_K2Node_ComponentBoundEvent_4_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__AnimTriggeredState1_K2Node_ComponentBoundEvent_5_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Ability_Melee_Base.Ability_Melee_Base_C.BndEvt__AnimTriggeredState1_K2Node_ComponentBoundEvent_5_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void Event Inspect(); // Function Ability_Melee_Base.Ability_Melee_Base_C.Event Inspect // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Custom Equip(); // Function Ability_Melee_Base.Ability_Melee_Base_C.Custom Equip // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OverrideAresMeshAttachmentComponentMap(struct TMap<struct FString, struct UAresEquippableMeshAttachmentComponent_C*> AresMeshAttachmentComponent Map); // Function Ability_Melee_Base.Ability_Melee_Base_C.OverrideAresMeshAttachmentComponentMap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CustomEvent_1(); // Function Ability_Melee_Base.Ability_Melee_Base_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update Attachment(struct AAresEquippable* Equippable, struct AActor* Owner); // Function Ability_Melee_Base.Ability_Melee_Base_C.Update Attachment // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Ability_Melee_Base_AnimTriggeredState5_K2Node_ComponentBoundEvent_6_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Ability_Melee_Base.Ability_Melee_Base_C.BndEvt__Ability_Melee_Base_AnimTriggeredState5_K2Node_ComponentBoundEvent_6_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Ability_Melee_Base(int32_t EntryPoint); // Function Ability_Melee_Base.Ability_Melee_Base_C.ExecuteUbergraph_Ability_Melee_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void Inspect Called__DelegateSignature(); // Function Ability_Melee_Base.Ability_Melee_Base_C.Inspect Called__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

