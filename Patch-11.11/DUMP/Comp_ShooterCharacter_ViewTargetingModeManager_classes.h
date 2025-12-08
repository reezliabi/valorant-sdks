// BlueprintGeneratedClass Comp_ShooterCharacter_ViewTargetingModeManager.Comp_ShooterCharacter_ViewTargetingModeManager_C
// Size: 0x178 (Inherited: 0xd8)
struct UComp_ShooterCharacter_ViewTargetingModeManager_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	bool TargetViewActive; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
	struct FMulticastInlineDelegate UpdateTargetViewMode; // 0xe8(0x10)
	struct FEffectID FXC_ID_TargetViewStart; // 0xf8(0x20)
	struct AEffectContainer* FXC_StartTargetView; // 0x118(0x08)
	bool TargetViewIsStarted; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
	struct UComp_PlayerController_TargetViewModeManager_C* ControllerViewModeClass; // 0x128(0x08)
	struct UMaterialInterface* DesiredMaterial0; // 0x130(0x08)
	struct UMaterialInterface* DesiredMaterial1; // 0x138(0x08)
	struct TArray<struct FStruct_TargetViewModeSourceInfo> ActiveSourceStack; // 0x140(0x10)
	bool HasActiveSources; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	struct UParticleSystem* DomeParticleTemplate; // 0x158(0x08)
	struct UParticleSystemComponent* SpawnedDomeParticle; // 0x160(0x08)
	struct AShooterCharacter* OwningShooterCharacter; // 0x168(0x08)
	struct UMaterialInterface* DesiredLandmarkMaterial; // 0x170(0x08)

	void IsSourceActive(struct FStruct_TargetViewModeSourceInfo& Source, bool& IsSourceActive); // Function Comp_ShooterCharacter_ViewTargetingModeManager.Comp_ShooterCharacter_ViewTargetingModeManager_C.IsSourceActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RefreshDomeParticleVisibility(); // Function Comp_ShooterCharacter_ViewTargetingModeManager.Comp_ShooterCharacter_ViewTargetingModeManager_C.RefreshDomeParticleVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetDomeParticle(struct UParticleSystem* NewDomeParticleTemplate); // Function Comp_ShooterCharacter_ViewTargetingModeManager.Comp_ShooterCharacter_ViewTargetingModeManager_C.SetDomeParticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetTargetViewWorldMaterials(struct UMaterialInterface*& Material0, struct UMaterialInterface*& Material1, struct UMaterialInterface*& LandmarkMaterials); // Function Comp_ShooterCharacter_ViewTargetingModeManager.Comp_ShooterCharacter_ViewTargetingModeManager_C.GetTargetViewWorldMaterials // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void ActiveSourceRefresh(); // Function Comp_ShooterCharacter_ViewTargetingModeManager.Comp_ShooterCharacter_ViewTargetingModeManager_C.ActiveSourceRefresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetTargetViewWorldWithMaterial(struct UMaterialInterface* Material0, struct UMaterialInterface* Material1, struct UMaterialInterface* LandmarkMaterial, bool& bMaterialsUpdated); // Function Comp_ShooterCharacter_ViewTargetingModeManager.Comp_ShooterCharacter_ViewTargetingModeManager_C.SetTargetViewWorldWithMaterial // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RemoveTargetViewModeSource(struct UObject* Source); // Function Comp_ShooterCharacter_ViewTargetingModeManager.Comp_ShooterCharacter_ViewTargetingModeManager_C.RemoveTargetViewModeSource // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddTargetViewModeSource(struct FStruct_TargetViewModeSourceInfo SourceInfo); // Function Comp_ShooterCharacter_ViewTargetingModeManager.Comp_ShooterCharacter_ViewTargetingModeManager_C.AddTargetViewModeSource // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetupLocalPlayerControllerViewModeManager(); // Function Comp_ShooterCharacter_ViewTargetingModeManager.Comp_ShooterCharacter_ViewTargetingModeManager_C.SetupLocalPlayerControllerViewModeManager // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetTargetViewModeActive(bool& TargetViewActive); // Function Comp_ShooterCharacter_ViewTargetingModeManager.Comp_ShooterCharacter_ViewTargetingModeManager_C.GetTargetViewModeActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetTargetViewMode(bool bValue); // Function Comp_ShooterCharacter_ViewTargetingModeManager.Comp_ShooterCharacter_ViewTargetingModeManager_C.SetTargetViewMode // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function Comp_ShooterCharacter_ViewTargetingModeManager.Comp_ShooterCharacter_ViewTargetingModeManager_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void AttemptStartTargetViewMode(); // Function Comp_ShooterCharacter_ViewTargetingModeManager.Comp_ShooterCharacter_ViewTargetingModeManager_C.AttemptStartTargetViewMode // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AttemptStopTargetViewMode(); // Function Comp_ShooterCharacter_ViewTargetingModeManager.Comp_ShooterCharacter_ViewTargetingModeManager_C.AttemptStopTargetViewMode // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function Comp_ShooterCharacter_ViewTargetingModeManager.Comp_ShooterCharacter_ViewTargetingModeManager_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnBecomeViewTarget(struct APlayerController* PC); // Function Comp_ShooterCharacter_ViewTargetingModeManager.Comp_ShooterCharacter_ViewTargetingModeManager_C.OnBecomeViewTarget // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEndViewTarget(struct APlayerController* PC); // Function Comp_ShooterCharacter_ViewTargetingModeManager.Comp_ShooterCharacter_ViewTargetingModeManager_C.OnEndViewTarget // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Comp_ShooterCharacter_ViewTargetingModeManager(int32_t EntryPoint); // Function Comp_ShooterCharacter_ViewTargetingModeManager.Comp_ShooterCharacter_ViewTargetingModeManager_C.ExecuteUbergraph_Comp_ShooterCharacter_ViewTargetingModeManager // (Final|UbergraphFunction) // @ game+0x19be2f0
	void UpdateTargetViewMode__DelegateSignature(bool TargetViewActive); // Function Comp_ShooterCharacter_ViewTargetingModeManager.Comp_ShooterCharacter_ViewTargetingModeManager_C.UpdateTargetViewMode__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

