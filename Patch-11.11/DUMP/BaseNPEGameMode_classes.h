// BlueprintGeneratedClass BaseNPEGameMode.BaseNPEGameMode_C
// Size: 0xd28 (Inherited: 0xc40)
struct ABaseNPEGameMode_C : ABaseTrainingGameMode_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc40(0x08)
	struct TMap<enum class EAresItemSlot, struct AAresItem*> RespawnInventory; // 0xc48(0x50)
	struct FString NPECharacter; // 0xc98(0x10)
	struct UBaseMissionGameStateComponent_C* Cheat_SkipToMissionComponent; // 0xca8(0x08)
	struct AGun_C* CleanupIgnoreGunType; // 0xcb0(0x08)
	bool UseInfiniteMoney; // 0xcb8(0x01)
	char pad_CB9[0x7]; // 0xcb9(0x07)
	struct TArray<enum class EAresItemSlot> InventorySlotsToClear; // 0xcc0(0x10)
	struct AShooterPlayerState* TempPlayerState; // 0xcd0(0x08)
	struct TMap<struct FString, struct FGuid> AgentToGuid; // 0xcd8(0x50)

	void GetRespawnInventory(struct TMap<enum class EAresItemSlot, struct AAresItem*>& RespawnInventory); // Function BaseNPEGameMode.BaseNPEGameMode_C.GetRespawnInventory // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetPawnTeam(struct AShooterCharacter* Character); // Function BaseNPEGameMode.BaseNPEGameMode_C.SetPawnTeam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CleanUpDroppedGuns(); // Function BaseNPEGameMode.BaseNPEGameMode_C.CleanUpDroppedGuns // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleCheatHelper_MissionsToSpawns(struct TMap<struct UBaseMissionGameStateComponent_C*, struct FString>& MissionsToSpawns); // Function BaseNPEGameMode.BaseNPEGameMode_C.HandleCheatHelper_MissionsToSpawns // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void HandleCheatHelper_MissionsList(struct TArray<struct UBaseMissionGameStateComponent_C*>& MissionsList); // Function BaseNPEGameMode.BaseNPEGameMode_C.HandleCheatHelper_MissionsList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void HandleCheatHelper_MissionTeleport(); // Function BaseNPEGameMode.BaseNPEGameMode_C.HandleCheatHelper_MissionTeleport // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleCheatHelper_OnObjectiveActivated(struct UObjectiveComponent* ChangedObjective, enum class EObjectiveType Type, enum class EObjectiveStatus OldStatus, enum class EObjectiveStatus NewStatus, int32_t OldProgress, int32_t NewProgress); // Function BaseNPEGameMode.BaseNPEGameMode_C.HandleCheatHelper_OnObjectiveActivated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleCheatHelper_OnMissionActivated(struct UMissionGameStateComponent* MissionStateComponent, struct AMission* Mission); // Function BaseNPEGameMode.BaseNPEGameMode_C.HandleCheatHelper_OnMissionActivated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleCheat_SkipToMission(int32_t MissionIndex); // Function BaseNPEGameMode.BaseNPEGameMode_C.HandleCheat_SkipToMission // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetUpMissionGameStateComponents(); // Function BaseNPEGameMode.BaseNPEGameMode_C.SetUpMissionGameStateComponents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetRespawnInventory(struct TMap<enum class EAresItemSlot, struct AAresItem*>& RespawnInventory); // Function BaseNPEGameMode.BaseNPEGameMode_C.SetRespawnInventory // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ApplyRespawnInventory(struct AShooterCharacter* ShooterCharacter); // Function BaseNPEGameMode.BaseNPEGameMode_C.ApplyRespawnInventory // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ClearRespawnInventoryForSlot(enum class EAresItemSlot ItemSlot); // Function BaseNPEGameMode.BaseNPEGameMode_C.ClearRespawnInventoryForSlot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetRespawnInventoryForSlot(enum class EAresItemSlot Slot, struct AAresItem* ItemType); // Function BaseNPEGameMode.BaseNPEGameMode_C.SetRespawnInventoryForSlot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ClearRespawnInventory(); // Function BaseNPEGameMode.BaseNPEGameMode_C.ClearRespawnInventory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitializePlayers(); // Function BaseNPEGameMode.BaseNPEGameMode_C.InitializePlayers // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitPlayer(struct AOwnerExclusivePlayerInfo* InitPlayer); // Function BaseNPEGameMode.BaseNPEGameMode_C.InitPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthBindEquippableOnSetOwner(struct AAresEquippable* InEquippable); // Function BaseNPEGameMode.BaseNPEGameMode_C.AuthBindEquippableOnSetOwner // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EquippableOnSetOwner_Event_1(struct AAresEquippable* Equippable, struct AActor* Owner); // Function BaseNPEGameMode.BaseNPEGameMode_C.EquippableOnSetOwner_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__GameStateSetupComponent_K2Node_ComponentBoundEvent_3_OnGameStateEnterSignature__DelegateSignature(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BaseNPEGameMode.BaseNPEGameMode_C.BndEvt__GameStateSetupComponent_K2Node_ComponentBoundEvent_3_OnGameStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerSpawnedEvent(struct APawn* SpawnedPawn); // Function BaseNPEGameMode.BaseNPEGameMode_C.OnPlayerSpawnedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Interface_SetRespawnInventoryForSlot(enum class EAresItemSlot Slot, struct AAresItem* ItemType); // Function BaseNPEGameMode.BaseNPEGameMode_C.Interface_SetRespawnInventoryForSlot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_BaseNPEGameMode(int32_t EntryPoint); // Function BaseNPEGameMode.BaseNPEGameMode_C.ExecuteUbergraph_BaseNPEGameMode // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

