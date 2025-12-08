// BlueprintGeneratedClass Module1_MovementInaccuracyV2Mission.Module1_MovementInaccuracyV2Mission_C
// Size: 0x790 (Inherited: 0x5f8)
struct AModule1_MovementInaccuracyV2Mission_C : ABaseNPEMission_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5f8(0x08)
	struct UNPE_ObjectiveComponent_C* NPE_ListenToSova; // 0x600(0x08)
	struct UKillSpawnedGroupObjective_C* KillSpawnedGroupObjective_StrafeBots2; // 0x608(0x08)
	struct UKillSpawnedGroupObjective_C* KillSpawnedGroupObjective_StrafeBots1; // 0x610(0x08)
	struct UKillSpawnedGroupObjective_C* KillSpawnedGroupObjective_StillAndShoot; // 0x618(0x08)
	struct UShootTargetMovementObjective_C* ShootTargetMovementObjective_MoveAndShoot; // 0x620(0x08)
	struct FString SpawnPointName; // 0x628(0x10)
	struct TSoftClassPtr<UObject> DesiredPrimaryWeaponClass; // 0x638(0x30)
	struct FActiveGameplayEffectHandle PreventSwitchingWeaponsBuff; // 0x668(0x08)
	double MovementThreshold; // 0x670(0x08)
	double CrouchingMovementThreshold; // 0x678(0x08)
	struct AMovementIndicatorSphere_C* MovementIndicatorTarget; // 0x680(0x08)
	bool IsMoving; // 0x688(0x01)
	char pad_689[0x7]; // 0x689(0x07)
	double MovementTimer; // 0x690(0x08)
	struct AStaticMeshActor* BlockingWall; // 0x698(0x08)
	bool UseBlockingWall; // 0x6a0(0x01)
	char pad_6A1[0x7]; // 0x6a1(0x07)
	struct FText MoveShoot; // 0x6a8(0x18)
	struct TSoftObjectPtr<AMovementInaccuracy_LaneController_C> ShootingLaneManager; // 0x6c0(0x30)
	struct FVector RangeDoorStartLocation; // 0x6f0(0x18)
	bool OnMoveAndShoot; // 0x708(0x01)
	char pad_709[0x7]; // 0x709(0x07)
	struct TArray<struct AMovementIndicatorSphere_C*> LaneIndicators; // 0x710(0x10)
	struct FTimerHandle EventTimer; // 0x720(0x08)
	struct TSoftObjectPtr<AMovementInaccuracy_LaneController_C> StrafingWallManager; // 0x728(0x30)
	struct ANPE_Doors_C* MoveBlockerVisualWall; // 0x758(0x08)
	bool DoingVO; // 0x760(0x01)
	bool StartVOComplete; // 0x761(0x01)
	char pad_762[0x2]; // 0x762(0x02)
	int32_t ShotsWhileMoving; // 0x764(0x04)
	int32_t MovningShootingHintThreshold; // 0x768(0x04)
	char pad_76C[0x4]; // 0x76c(0x04)
	struct ANPE_Doors_C* NPE_Doors_ToFinalDoor; // 0x770(0x08)
	struct ANPE_Doors_C* NPE_Doors_ToRange; // 0x778(0x08)
	int32_t MoveShootFailVOIndex; // 0x780(0x04)
	char pad_784[0x4]; // 0x784(0x04)
	struct ANPE_Doors_C* NPE_Doors_LockIn; // 0x788(0x08)

	bool Is Player Moving(); // Function Module1_MovementInaccuracyV2Mission.Module1_MovementInaccuracyV2Mission_C.Is Player Moving // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function Module1_MovementInaccuracyV2Mission.Module1_MovementInaccuracyV2Mission_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BeginMissionEvent(struct AMission* ChangedMission, enum class EMissionStatus OldStatus, enum class EMissionStatus NewStatus); // Function Module1_MovementInaccuracyV2Mission.Module1_MovementInaccuracyV2Mission_C.BeginMissionEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Auth_CheckMovement(); // Function Module1_MovementInaccuracyV2Mission.Module1_MovementInaccuracyV2Mission_C.Auth_CheckMovement // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__New_Movement_inaccuracy_KillSpawnedGroupObjective_StillAndShoot_K2Node_ComponentBoundEvent_7_OnObjectiveStatusAndProgressChanged__DelegateSignature(struct UObjectiveComponent* ChangedObjective, enum class EObjectiveType Type, enum class EObjectiveStatus OldStatus, enum class EObjectiveStatus NewStatus, int32_t OldProgress, int32_t NewProgress); // Function Module1_MovementInaccuracyV2Mission.Module1_MovementInaccuracyV2Mission_C.BndEvt__New_Movement_inaccuracy_KillSpawnedGroupObjective_StillAndShoot_K2Node_ComponentBoundEvent_7_OnObjectiveStatusAndProgressChanged__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void Auth_EndMissionLogic(); // Function Module1_MovementInaccuracyV2Mission.Module1_MovementInaccuracyV2Mission_C.Auth_EndMissionLogic // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__New_Movement_inaccuracy_KillSpawnedGroupObjective_StrafeBots1_K2Node_ComponentBoundEvent_1_OnObjectiveStatusAndProgressChanged__DelegateSignature(struct UObjectiveComponent* ChangedObjective, enum class EObjectiveType Type, enum class EObjectiveStatus OldStatus, enum class EObjectiveStatus NewStatus, int32_t OldProgress, int32_t NewProgress); // Function Module1_MovementInaccuracyV2Mission.Module1_MovementInaccuracyV2Mission_C.BndEvt__New_Movement_inaccuracy_KillSpawnedGroupObjective_StrafeBots1_K2Node_ComponentBoundEvent_1_OnObjectiveStatusAndProgressChanged__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__New_Movement_inaccuracy_KillSpawnedGroupObjective_StrafeBots2_K2Node_ComponentBoundEvent_0_OnObjectiveStatusAndProgressChanged__DelegateSignature(struct UObjectiveComponent* ChangedObjective, enum class EObjectiveType Type, enum class EObjectiveStatus OldStatus, enum class EObjectiveStatus NewStatus, int32_t OldProgress, int32_t NewProgress); // Function Module1_MovementInaccuracyV2Mission.Module1_MovementInaccuracyV2Mission_C.BndEvt__New_Movement_inaccuracy_KillSpawnedGroupObjective_StrafeBots2_K2Node_ComponentBoundEvent_0_OnObjectiveStatusAndProgressChanged__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void Auth_OnBlockingWallTakeDamage(struct AActor* DamagedActor, float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function Module1_MovementInaccuracyV2Mission.Module1_MovementInaccuracyV2Mission_C.Auth_OnBlockingWallTakeDamage // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Auth_OnStillAndShootActivated(struct UObjectiveComponent* ChangedObjective, enum class EObjectiveType Type, enum class EObjectiveStatus OldStatus, enum class EObjectiveStatus NewStatus, int32_t OldProgress, int32_t NewProgress); // Function Module1_MovementInaccuracyV2Mission.Module1_MovementInaccuracyV2Mission_C.Auth_OnStillAndShootActivated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Auth_ResetMovementChecking(); // Function Module1_MovementInaccuracyV2Mission.Module1_MovementInaccuracyV2Mission_C.Auth_ResetMovementChecking // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TriggerVOEvent(struct UAkAudioEvent* Ak Audio Event); // Function Module1_MovementInaccuracyV2Mission.Module1_MovementInaccuracyV2Mission_C.TriggerVOEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Module1_MovementInaccuracyV2Mission(int32_t EntryPoint); // Function Module1_MovementInaccuracyV2Mission.Module1_MovementInaccuracyV2Mission_C.ExecuteUbergraph_Module1_MovementInaccuracyV2Mission // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

