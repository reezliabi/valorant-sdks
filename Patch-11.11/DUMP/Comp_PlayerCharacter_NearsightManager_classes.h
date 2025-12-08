// BlueprintGeneratedClass Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C
// Size: 0x210 (Inherited: 0xd8)
struct UComp_PlayerCharacter_NearsightManager_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct UStaticMeshComponent* OccluderMesh; // 0xe0(0x08)
	struct UStaticMeshComponent* FadeMesh; // 0xe8(0x08)
	struct AShooterCharacter* OwningShooterCharacter; // 0xf0(0x08)
	struct UMaterialInterface* OccluderMaterialTemplate; // 0xf8(0x08)
	struct UStaticMesh* NearsightDomeTemplate; // 0x100(0x08)
	struct TMap<struct AActor*, struct FStruct_NearsightInfo> ActiveNearsightMap; // 0x108(0x50)
	double FullyMaskedAlphaOn; // 0x158(0x08)
	struct FVector CameraOffset; // 0x160(0x18)
	struct UMaterialInterface* FadeMaterialTemplate; // 0x178(0x08)
	struct UMaterialInstanceDynamic* OccluderDynamicMaterial; // 0x180(0x08)
	struct TMap<struct AActor*, double> ActiveNearsightTiming; // 0x188(0x50)
	struct UMaterialInstanceDynamic* FadeDynamicMaterial; // 0x1d8(0x08)
	struct UMaterialInterface* CutoutOccluderMaterialTemplate; // 0x1e0(0x08)
	struct UStaticMeshComponent* CutoutOccluderMesh; // 0x1e8(0x08)
	struct UMaterialInstanceDynamic* CutoutOccluderDynamicMaterial; // 0x1f0(0x08)
	struct UComp_ShooterCharacter_ViewTargetingModeManager_C* TargetViewModeManager; // 0x1f8(0x08)
	struct UStaticMeshComponent* TargetViewFadeMesh; // 0x200(0x08)
	struct UMaterialInterface* PostProcessMaterial; // 0x208(0x08)

	void IsNearsightValidInCurrentViewMode(struct AActor* Nearsight, bool& IsValid); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C.IsNearsightValidInCurrentViewMode // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RemovePostProcess(); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C.RemovePostProcess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePostProcess(struct FStruct_NearsightInfo ActiveNearsight); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C.UpdatePostProcess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsNearsightVisible(bool& Visible); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C.IsNearsightVisible // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UpdateMeshViewMode(struct USceneComponent* Mesh); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C.UpdateMeshViewMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetupViewModeManager(); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C.SetupViewModeManager // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateFadeParameters(struct FStruct_NearsightInfo& ActiveParameters); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C.UpdateFadeParameters // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateOccluderParameters(struct FStruct_NearsightInfo& ActiveParameters); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C.UpdateOccluderParameters // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CompareNearsightCauserRadiusAndTime(struct AActor* NearsightBest, struct AActor* NearsightCandidate, bool& IsCandidateBetter); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C.CompareNearsightCauserRadiusAndTime // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CompareNearsightCauserAlpha(struct AActor* NearsightBest, struct AActor* NearsightCandidate, bool& IsCandidateValid); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C.CompareNearsightCauserAlpha // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CompareNearsightCausers(struct AActor* NearsightBest, struct AActor* NearsightCandidate, bool& IsCandidateBetter); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C.CompareNearsightCausers // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetActiveNearsightParameters(struct FStruct_NearsightInfo& ActiveParameters); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C.GetActiveNearsightParameters // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReapplyMaterials(); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C.ReapplyMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateMesh(struct UMaterialInterface* MaterialTemplate, struct UStaticMeshComponent*& StaticMesh, struct UMaterialInstanceDynamic*& DynamicMaterial); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C.CreateMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RemoveNearsight(struct AActor*& NearsightCauser); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C.RemoveNearsight // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool IsNearsightActiveLocally(); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C.IsNearsightActiveLocally // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void HandleNearsightUpdate(); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C.HandleNearsightUpdate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddOrUpdateNearsight(struct AActor*& NearsightCauser, struct FStruct_NearsightInfo& NearsightInfo); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C.AddOrUpdateNearsight // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitializeForRespawn(); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C.InitializeForRespawn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveTick(float DeltaSeconds); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnDestroyed_Event_1(struct AActor* DestroyedActor); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C.OnDestroyed_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPerspectiveChanged_Event_1(struct AShooterCharacter* Character); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C.OnPerspectiveChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateTargetViewMode_Event_1(bool TargetViewActive); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C.UpdateTargetViewMode_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CleanupForRespawn(); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C.CleanupForRespawn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerViewTargetChanged_Event_1(); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C.OnPlayerViewTargetChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OneTimeInitialization(); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C.OneTimeInitialization // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Comp_PlayerCharacter_NearsightManager(int32_t EntryPoint); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C.ExecuteUbergraph_Comp_PlayerCharacter_NearsightManager // (Final|UbergraphFunction) // @ game+0x19be2f0
};

