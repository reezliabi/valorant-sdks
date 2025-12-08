// BlueprintGeneratedClass Equippable_Totem_base.Equippable_Totem_base_C
// Size: 0x11d8 (Inherited: 0x10e0)
struct AEquippable_Totem_base_C : AAresEquippable {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10e0(0x08)
	struct URespondToEventStateComponent* RespondToEventState; // 0x10e8(0x08)
	struct UAnimTriggeredStateComponent* ActionState; // 0x10f0(0x08)
	struct UScriptStateComponent* IdleState; // 0x10f8(0x08)
	struct UAresOutlineComponent* Outline1P; // 0x1100(0x08)
	struct UAresOutlineComponent* Outline3P; // 0x1108(0x08)
	struct UReadyingStateComponent* ReadyingState; // 0x1110(0x08)
	struct UEquipStateComponent* EquipState; // 0x1118(0x08)
	struct UEffectManagerComponent* EffectManager; // 0x1120(0x08)
	struct FEffectID FXC Inspect ID; // 0x1128(0x20)
	struct AEffectContainer* FXC Inspect; // 0x1148(0x08)
	bool Inspect Animation Active; // 0x1150(0x01)
	char pad_1151[0x7]; // 0x1151(0x07)
	struct AEffectContainer* FXC WhileEquipped; // 0x1158(0x08)
	struct FEffectData EffectData; // 0x1160(0x58)
	struct FEffectID FXC_WhileEquipped_ID; // 0x11b8(0x20)

	void GetFirstPersonMesh(struct USkeletalMeshComponent*& Mesh); // Function Equippable_Totem_base.Equippable_Totem_base_C.GetFirstPersonMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetThirdPersonMesh(struct USkeletalMeshComponent*& Mesh); // Function Equippable_Totem_base.Equippable_Totem_base_C.GetThirdPersonMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetFirstPersonCosmeticMesh(struct USkeletalMeshComponent*& Mesh); // Function Equippable_Totem_base.Equippable_Totem_base_C.GetFirstPersonCosmeticMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetBulletComponent(struct UBulletComponent_C*& BulletComponent); // Function Equippable_Totem_base.Equippable_Totem_base_C.GetBulletComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetMagazine(struct UStaticMeshComponent*& MagazineMesh, struct TArray<struct UMaterialInterface*>& ArrayOfMaterials); // Function Equippable_Totem_base.Equippable_Totem_base_C.GetMagazine // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetMagazine3p(struct UStaticMeshComponent*& MagazineMesh, struct TArray<struct UMaterialInterface*>& ArrayOfMaterials); // Function Equippable_Totem_base.Equippable_Totem_base_C.GetMagazine3p // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetFirstPersonMaterial(int32_t Material Slot, struct UMaterialInstanceDynamic*& Dynamic Material, struct UMaterialInterface*& Original Material); // Function Equippable_Totem_base.Equippable_Totem_base_C.GetFirstPersonMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIsInspectingAndBroadcast(bool IsInspecting); // Function Equippable_Totem_base.Equippable_Totem_base_C.SetIsInspectingAndBroadcast // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function Equippable_Totem_base.Equippable_Totem_base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void OverrideAresMeshAttachmentComponentMap(struct TMap<struct FString, struct UAresEquippableMeshAttachmentComponent_C*> AresMeshAttachmentComponent Map); // Function Equippable_Totem_base.Equippable_Totem_base_C.OverrideAresMeshAttachmentComponentMap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddVFXMeshes(struct UStaticMeshComponent* VFX Mesh); // Function Equippable_Totem_base.Equippable_Totem_base_C.AddVFXMeshes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Override3pMagazineMaterials(int32_t Index, struct UMaterialInterface* Material); // Function Equippable_Totem_base.Equippable_Totem_base_C.Override3pMagazineMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Override1pMagazineMaterials(int32_t Index, struct UMaterialInterface* Material); // Function Equippable_Totem_base.Equippable_Totem_base_C.Override1pMagazineMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ClientItemUnEquipped(); // Function Equippable_Totem_base.Equippable_Totem_base_C.ClientItemUnEquipped // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function Equippable_Totem_base.Equippable_Totem_base_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void Inspect(); // Function Equippable_Totem_base.Equippable_Totem_base_C.Inspect // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Cancel Inspect(); // Function Equippable_Totem_base.Equippable_Totem_base_C.Cancel Inspect // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ClientItemEquipped(); // Function Equippable_Totem_base.Equippable_Totem_base_C.ClientItemEquipped // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Equippable_Totem_base_IdleState_K2Node_ComponentBoundEvent_1_OnStateExitSignature__DelegateSignature(struct UScriptStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function Equippable_Totem_base.Equippable_Totem_base_C.BndEvt__Equippable_Totem_base_IdleState_K2Node_ComponentBoundEvent_1_OnStateExitSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OverrideMaterialIndex(int32_t Index, struct UMaterialInterface* Material); // Function Equippable_Totem_base.Equippable_Totem_base_C.OverrideMaterialIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CancelInspect(); // Function Equippable_Totem_base.Equippable_Totem_base_C.CancelInspect // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Override3pMaterial(int32_t Index, struct UMaterialInterface* Material); // Function Equippable_Totem_base.Equippable_Totem_base_C.Override3pMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Override1pMesh(struct USkeletalMesh* 1PMesh, struct USkeletalMesh* 1PCosmeticMesh, struct UStaticMesh* 1PMagazine, struct UAnimInstance* CosmeticAnimGraph); // Function Equippable_Totem_base.Equippable_Totem_base_C.Override1pMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Override3pMesh(struct USkeletalMesh* 3PMesh, struct UStaticMesh* 3PMagazine, struct UAnimInstance* CosmeticAnimGraph); // Function Equippable_Totem_base.Equippable_Totem_base_C.Override3pMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Custom_OnAction(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Equippable_Totem_base.Equippable_Totem_base_C.Custom_OnAction // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Equippable_Totem_base(int32_t EntryPoint); // Function Equippable_Totem_base.Equippable_Totem_base_C.ExecuteUbergraph_Equippable_Totem_base // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

