// BlueprintGeneratedClass MenuDisplayEquippable.MenuDisplayEquippable_C
// Size: 0x5cc (Inherited: 0x460)
struct AMenuDisplayEquippable_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x460(0x08)
	struct USkeletalMeshComponent* JuiceBoxSkeletalMesh; // 0x468(0x08)
	struct UStaticMeshComponent* Spray Display Mesh; // 0x470(0x08)
	struct UEffectManagerComponent* EffectManager; // 0x478(0x08)
	struct USkeletalMeshComponent* CosmeticMesh1P; // 0x480(0x08)
	struct UStaticMeshComponent* Magazine; // 0x488(0x08)
	struct USkeletalMeshComponent* Mesh1P; // 0x490(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x498(0x08)
	bool DidBeginPlay; // 0x4a0(0x01)
	char pad_4A1[0x7]; // 0x4a1(0x07)
	struct TArray<struct UMaterialInterface*> WantedMaterials; // 0x4a8(0x10)
	struct USkeletalMesh* WantedGunMesh; // 0x4b8(0x08)
	struct UStaticMesh* WantedMagazineMesh; // 0x4c0(0x08)
	struct USkeletalMesh* WantedCosmeticMesh; // 0x4c8(0x08)
	bool IsMelee; // 0x4d0(0x01)
	char pad_4D1[0x7]; // 0x4d1(0x07)
	struct FRotator Current Rotation; // 0x4d8(0x18)
	struct FRotator Wanted Rotation; // 0x4f0(0x18)
	struct TArray<struct FEffectID> Current FXCs; // 0x508(0x10)
	struct FVector Current Center; // 0x518(0x18)
	struct UBulletComponent_C* BulletComponent; // 0x530(0x08)
	bool Focus Gunbuddy; // 0x538(0x01)
	char pad_539[0x7]; // 0x539(0x07)
	struct AAresEquippable* EquippableClass; // 0x540(0x08)
	bool UseLoadingTextures; // 0x548(0x01)
	char pad_549[0x7]; // 0x549(0x07)
	struct FVector Pan Offset; // 0x550(0x18)
	struct TArray<struct UStaticMeshComponent*> VFX Meshes; // 0x568(0x10)
	struct UEquippableSkinChromaDataAsset* Weapon Chroma Reference; // 0x578(0x08)
	bool isPrioritizeTexturesTimerLooping; // 0x580(0x01)
	char pad_581[0x7]; // 0x581(0x07)
	struct UEquippableSkinDataAsset* Equippable Skin Asset; // 0x588(0x08)
	bool Pivot Debug; // 0x590(0x01)
	char pad_591[0x7]; // 0x591(0x07)
	struct UStaticMeshComponent* PivotDebug; // 0x598(0x08)
	struct FVector CurrentPivot; // 0x5a0(0x18)
	struct FTimerHandle PrioritizeTexturesTimerHandle; // 0x5b8(0x08)
	struct FName Gun Buddy Camera Socket; // 0x5c0(0x0c)

	void GetMagazine3p(struct UStaticMeshComponent*& MagazineMesh, struct TArray<struct UMaterialInterface*>& ArrayOfMaterials); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.GetMagazine3p // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetMagazine(struct UStaticMeshComponent*& MagazineMesh, struct TArray<struct UMaterialInterface*>& ArrayOfMaterials); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.GetMagazine // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetBulletComponent(struct UBulletComponent_C*& BulletComponent); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.GetBulletComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetFirstPersonCosmeticMesh(struct USkeletalMeshComponent*& Mesh); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.GetFirstPersonCosmeticMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetFirstPersonMesh(struct USkeletalMeshComponent*& Mesh); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.GetFirstPersonMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetThirdPersonMesh(struct USkeletalMeshComponent*& Mesh); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.GetThirdPersonMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetEquippableSkinAsset(bool& IsValid, struct UEquippableSkinDataAsset*& Equippable Skin Asset); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.GetEquippableSkinAsset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetTotemMesh(struct UTotemHandle* Totem Handle, struct FVector Current Center); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.SetTotemMesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetJuiceboxMesh(struct USkeletalMeshComponent* JuiceboxMesh, struct USkeletalMesh* SkeletalMesh); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.SetJuiceboxMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitializeJuicebox(struct UJuiceBoxDataAsset* JuiceBoxDataAsset, struct FVector CameraCenter); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.InitializeJuicebox // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DestroyChildComponent(struct UActorComponent* ChildComponent); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.DestroyChildComponent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Reset FXCs(); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.Reset FXCs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Spray(struct USprayHandle* Spray Handle); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.Set Spray // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OverrideTextures(); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.OverrideTextures // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CheckTexturesStreamedIn(bool& AreTexturesStreamedIn); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.CheckTexturesStreamedIn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Calculate Center(struct FVector Default Center, struct FVector& Current Center); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.Calculate Center // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set FXC(struct UEquippableSkinDataAsset* EquippableSkin, int32_t Skin Level, struct UEquippableSkinChromaDataAsset* Chroma, struct UTotemDataAsset* Totem); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.Set FXC // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Rotation Immediate(struct FRotator NewRotation, bool bTeleport); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.Set Rotation Immediate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Mesh Rotation(double X (Roll), double Y (Pitch), double Z (Yaw)); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.Set Mesh Rotation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Gunbuddy(struct UEquippableCharmLevelDataAsset* CharmAsset); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.Set Gunbuddy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Rotation(double X (Roll), double Z (Yaw)); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.Set Rotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CopyBaseWeapon(struct UEquippableSkinDataAsset* Target); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.CopyBaseWeapon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Skin(struct UEquippableSkinDataAsset* EquippableSkinAsset, struct UEquippableSkinChromaDataAsset* EquippableChromaAsset, int32_t Level, struct UEquippableCharmDataAsset* EquippableCharmAsset, int32_t CharmLevel, bool Focus Gunbuddy, struct FVector Default Center, bool UseLoadingTextures, bool GunbuddyUpdateOnly); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.Set Skin // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PrioritizeTexturesAndSetLod0(); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.PrioritizeTexturesAndSetLod0 // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ResetMeshes(); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.ResetMeshes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Override3pMaterial(int32_t Index, struct UMaterialInterface* Material); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.Override3pMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Override3pMagazineMaterials(int32_t Index, struct UMaterialInterface* Material); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.Override3pMagazineMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Override3pMesh(struct USkeletalMesh* 3PMesh, struct UStaticMesh* 3PMagazine, struct UAnimInstance* CosmeticAnimGraph); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.Override3pMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OverrideAresMeshAttachmentComponentMap(struct TMap<struct FString, struct UAresEquippableMeshAttachmentComponent_C*> AresMeshAttachmentComponent Map); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.OverrideAresMeshAttachmentComponentMap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OverrideMaterialIndex(int32_t Index, struct UMaterialInterface* Material); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.OverrideMaterialIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveTick(float DeltaSeconds); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Override1pMagazineMaterials(int32_t Index, struct UMaterialInterface* Material); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.Override1pMagazineMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddVFXMeshes(struct UStaticMeshComponent* VFX Mesh); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.AddVFXMeshes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Override1pMesh(struct USkeletalMesh* 1PMesh, struct USkeletalMesh* 1PCosmeticMesh, struct UStaticMesh* 1PMagazine, struct UAnimInstance* CosmeticAnimGraph); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.Override1pMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PivortDebug(); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.PivortDebug // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_MenuDisplayEquippable(int32_t EntryPoint); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.ExecuteUbergraph_MenuDisplayEquippable // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

