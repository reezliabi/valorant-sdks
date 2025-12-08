// BlueprintGeneratedClass Module1_BasicShootingV2Mission.Module1_BasicShootingV2Mission_C
// Size: 0x770 (Inherited: 0x5f8)
struct AModule1_BasicShootingV2Mission_C : ABaseNPEMission_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5f8(0x08)
	struct UComp_Actor_MultiTargetHandler_Buff_C* Comp_Actor_MultiTargetHandler_Buff_BlockEquippableChange; // 0x600(0x08)
	struct UInputObjectiveComponent_C* InputObjectiveComponent_ReloadGun; // 0x608(0x08)
	struct UKillSpawnedGroupObjective_C* KillSpawnedGroupObjective_DoorDrone; // 0x610(0x08)
	struct UInventoryTransactionObjectiveComponent_C* InventoryTransactionObjectiveComponent_Pistol; // 0x618(0x08)
	struct AActor* LocalPing; // 0x620(0x08)
	struct ANPE_Doors_C* MissionDoor; // 0x628(0x08)
	struct AActor* SpawnedDrone; // 0x630(0x08)
	struct FEffectID FXC_ID_KeyboardPrompt; // 0x638(0x20)
	struct FTimerHandle KeyboardPromptTimer; // 0x658(0x08)
	struct FEffectID FXC_ID_PickUpOutline; // 0x660(0x20)
	struct UReloadStateComponent* ReloadStateComponent; // 0x680(0x08)
	struct FEffectID FXC_ID_ShootPrompt; // 0x688(0x20)
	struct FEffectID FXC_ID_FocusPrompt; // 0x6a8(0x20)
	struct FEffectID FXC_ID_ReloadPrompt; // 0x6c8(0x20)
	struct UFiringStateComponent* ClassicFiringStateBurst; // 0x6e8(0x08)
	struct ANPE_VO_Manager_C* NPE_VO_Manager; // 0x6f0(0x08)
	struct FEffectID FXC_ID_DronePing; // 0x6f8(0x20)
	struct FEffectID FXC_ID_PistolLocation; // 0x718(0x20)
	double ObjectiveInactionReminderTimer; // 0x738(0x08)
	struct FTimerHandle ObjectiveReminderTimer; // 0x740(0x08)
	struct ABasePistol_C* As Base Pistol; // 0x748(0x08)
	struct ANPEV2GroundWeaponSpawner_C* PistolSpawner; // 0x750(0x08)
	struct UComp_Actor_Missions_Z_PingActor_C* PistolSpawnerPingActor; // 0x758(0x08)
	struct UAkAudioEvent* GrabPistolVO; // 0x760(0x08)
	struct UAkAudioEvent* BurstFireVO; // 0x768(0x08)

	void AuthSetNoWeaponSwappingBuff(bool On); // Function Module1_BasicShootingV2Mission.Module1_BasicShootingV2Mission_C.AuthSetNoWeaponSwappingBuff // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RecordTelemetry(); // Function Module1_BasicShootingV2Mission.Module1_BasicShootingV2Mission_C.RecordTelemetry // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function Module1_BasicShootingV2Mission.Module1_BasicShootingV2Mission_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void Auth_BeginMissionEvent(struct AMission* ChangedMission, enum class EMissionStatus OldStatus, enum class EMissionStatus NewStatus); // Function Module1_BasicShootingV2Mission.Module1_BasicShootingV2Mission_C.Auth_BeginMissionEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__InventoryTransactionObjectiveComponent_Pistol_K2Node_ComponentBoundEvent_1_OnObjectiveStatusChanged__DelegateSignature(struct UObjectiveComponent* ChangedObjective, enum class EObjectiveType Type, enum class EObjectiveStatus OldStatus, enum class EObjectiveStatus NewStatus, int32_t OldProgress, int32_t NewProgress); // Function Module1_BasicShootingV2Mission.Module1_BasicShootingV2Mission_C.BndEvt__InventoryTransactionObjectiveComponent_Pistol_K2Node_ComponentBoundEvent_1_OnObjectiveStatusChanged__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__InventoryTransactionObjectiveComponent_Pistol_K2Node_ComponentBoundEvent_5_OnObjectiveStatusChanged__DelegateSignature(struct UObjectiveComponent* ChangedObjective, enum class EObjectiveType Type, enum class EObjectiveStatus OldStatus, enum class EObjectiveStatus NewStatus, int32_t OldProgress, int32_t NewProgress); // Function Module1_BasicShootingV2Mission.Module1_BasicShootingV2Mission_C.BndEvt__InventoryTransactionObjectiveComponent_Pistol_K2Node_ComponentBoundEvent_5_OnObjectiveStatusChanged__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnShot_Event(struct UFiringStateComponent* FiringState, int32_t ShotIndex, bool bTracerEnabled, bool bWasLastShot, struct TArray<struct FFiringResults>& FiringResults); // Function Module1_BasicShootingV2Mission.Module1_BasicShootingV2Mission_C.OnShot_Event // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ServerPlayClassicBurstFireLine(); // Function Module1_BasicShootingV2Mission.Module1_BasicShootingV2Mission_C.ServerPlayClassicBurstFireLine // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Auth_InitializePistolMission(); // Function Module1_BasicShootingV2Mission.Module1_BasicShootingV2Mission_C.Auth_InitializePistolMission // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetUpBurstFireExplanation(); // Function Module1_BasicShootingV2Mission.Module1_BasicShootingV2Mission_C.SetUpBurstFireExplanation // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Auth_OnKillGroupCompleted(struct UObjectiveComponent* ChangedObjective, enum class EObjectiveType Type, enum class EObjectiveStatus OldStatus, enum class EObjectiveStatus NewStatus, int32_t OldProgress, int32_t NewProgress); // Function Module1_BasicShootingV2Mission.Module1_BasicShootingV2Mission_C.Auth_OnKillGroupCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Auth_OnReloadGunCompleted(struct UObjectiveComponent* ChangedObjective, enum class EObjectiveType Type, enum class EObjectiveStatus OldStatus, enum class EObjectiveStatus NewStatus, int32_t OldProgress, int32_t NewProgress); // Function Module1_BasicShootingV2Mission.Module1_BasicShootingV2Mission_C.Auth_OnReloadGunCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Auth_PromptHelper_Reload(); // Function Module1_BasicShootingV2Mission.Module1_BasicShootingV2Mission_C.Auth_PromptHelper_Reload // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Auth_PromptHelper_Shooting(); // Function Module1_BasicShootingV2Mission.Module1_BasicShootingV2Mission_C.Auth_PromptHelper_Shooting // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EnteredFocusMode(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Module1_BasicShootingV2Mission.Module1_BasicShootingV2Mission_C.EnteredFocusMode // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void LeftFocusMode(struct UScriptStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function Module1_BasicShootingV2Mission.Module1_BasicShootingV2Mission_C.LeftFocusMode // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Auth_Shooting_VOReminder(); // Function Module1_BasicShootingV2Mission.Module1_BasicShootingV2Mission_C.Auth_Shooting_VOReminder // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Module1_BasicShootingV2Mission(int32_t EntryPoint); // Function Module1_BasicShootingV2Mission.Module1_BasicShootingV2Mission_C.ExecuteUbergraph_Module1_BasicShootingV2Mission // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

