// BlueprintGeneratedClass Module1_BasicArsenalV2Mission.Module1_BasicArsenalV2Mission_C
// Size: 0x698 (Inherited: 0x5f8)
struct AModule1_BasicArsenalV2Mission_C : ABaseNPEMission_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5f8(0x08)
	struct UInventoryTransactionObjectiveComponent_C* InventoryTransactionObjectiveComponent; // 0x600(0x08)
	struct UComp_Actor_MultiTargetHandler_FXC_C* Comp_Actor_MultiTargetHandler_FXC; // 0x608(0x08)
	struct UFollowDynamicPathObjectiveComponent_C* FollowDynamicPath_ToRecoil; // 0x610(0x08)
	struct UFollowDynamicPathObjectiveComponent_C* FollowDynamicPath_ToVandal; // 0x618(0x08)
	struct UWeaponSwapObjectiveComponent_C* WeaponSwapObjectiveComponent; // 0x620(0x08)
	struct UKillSpawnedGroupObjective_C* KillBots; // 0x628(0x08)
	int32_t PurchaseObjectivesCompleted; // 0x630(0x04)
	char pad_634[0x4]; // 0x634(0x04)
	struct FEffectID FXC_SwapWeapon_Prompt; // 0x638(0x20)
	struct ANPE_Doors_C* RangeBlockingDoor; // 0x658(0x08)
	bool IsVODone; // 0x660(0x01)
	bool IsObjectiveCompleted; // 0x661(0x01)
	char pad_662[0x6]; // 0x662(0x06)
	struct ANPE_MoveCTA_PathTrail_C* FollowPathTo_Docks; // 0x668(0x08)
	struct ATriggerVolume* AtDocksTrigger; // 0x670(0x08)
	struct FTimerHandle KillbotsPingTimer; // 0x678(0x08)
	struct FTimerHandle PromptHelper_SwapWeapon_Timer; // 0x680(0x08)
	struct ANPEV2GroundWeaponSpawner_C* AKSpawner; // 0x688(0x08)
	struct UComp_Actor_Missions_Z_PingActor_C* AkSpawnerPingActor; // 0x690(0x08)

	void GetWeaponSwapActionName(struct FName& InputActionName); // Function Module1_BasicArsenalV2Mission.Module1_BasicArsenalV2Mission_C.GetWeaponSwapActionName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function Module1_BasicArsenalV2Mission.Module1_BasicArsenalV2Mission_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void Auth_MissionStart(struct AMission* ChangedMission, enum class EMissionStatus OldStatus, enum class EMissionStatus NewStatus); // Function Module1_BasicArsenalV2Mission.Module1_BasicArsenalV2Mission_C.Auth_MissionStart // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__New_BasicArsenalMission_KillBots_K2Node_ComponentBoundEvent_4_OnObjectiveStatusAndProgressChanged__DelegateSignature(struct UObjectiveComponent* ChangedObjective, enum class EObjectiveType Type, enum class EObjectiveStatus OldStatus, enum class EObjectiveStatus NewStatus, int32_t OldProgress, int32_t NewProgress); // Function Module1_BasicArsenalV2Mission.Module1_BasicArsenalV2Mission_C.BndEvt__New_BasicArsenalMission_KillBots_K2Node_ComponentBoundEvent_4_OnObjectiveStatusAndProgressChanged__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__New_BasicArsenalMission_WeaponSwapObjectiveComponent_K2Node_ComponentBoundEvent_1_OnObjectiveStatusAndProgressChanged__DelegateSignature(struct UObjectiveComponent* ChangedObjective, enum class EObjectiveType Type, enum class EObjectiveStatus OldStatus, enum class EObjectiveStatus NewStatus, int32_t OldProgress, int32_t NewProgress); // Function Module1_BasicArsenalV2Mission.Module1_BasicArsenalV2Mission_C.BndEvt__New_BasicArsenalMission_WeaponSwapObjectiveComponent_K2Node_ComponentBoundEvent_1_OnObjectiveStatusAndProgressChanged__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void SwapVODone(struct UAkAudioEvent* Ak Audio Event); // Function Module1_BasicArsenalV2Mission.Module1_BasicArsenalV2Mission_C.SwapVODone // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BotsNotKilledTimeCheck(); // Function Module1_BasicArsenalV2Mission.Module1_BasicArsenalV2Mission_C.BotsNotKilledTimeCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayerReachedDocks(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function Module1_BasicArsenalV2Mission.Module1_BasicArsenalV2Mission_C.PlayerReachedDocks // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ActorSpawned_Event_1(struct AActor* SpawnedActor); // Function Module1_BasicArsenalV2Mission.Module1_BasicArsenalV2Mission_C.ActorSpawned_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCharacterDeath_Event_1(struct AShooterCharacter* Character, struct UDamageResponse* Response); // Function Module1_BasicArsenalV2Mission.Module1_BasicArsenalV2Mission_C.OnCharacterDeath_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowPathToBotsOnClient(); // Function Module1_BasicArsenalV2Mission.Module1_BasicArsenalV2Mission_C.ShowPathToBotsOnClient // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Auth_OnKillBotsActivated(struct UObjectiveComponent* ChangedObjective, enum class EObjectiveType Type, enum class EObjectiveStatus OldStatus, enum class EObjectiveStatus NewStatus, int32_t OldProgress, int32_t NewProgress); // Function Module1_BasicArsenalV2Mission.Module1_BasicArsenalV2Mission_C.Auth_OnKillBotsActivated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Auth_OnFollowRecoilPathCompleted(struct UObjectiveComponent* ChangedObjective, enum class EObjectiveType Type, enum class EObjectiveStatus OldStatus, enum class EObjectiveStatus NewStatus, int32_t OldProgress, int32_t NewProgress); // Function Module1_BasicArsenalV2Mission.Module1_BasicArsenalV2Mission_C.Auth_OnFollowRecoilPathCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void C2S_PromptHelper_SwapWeapon(struct FName InputActionName); // Function Module1_BasicArsenalV2Mission.Module1_BasicArsenalV2Mission_C.C2S_PromptHelper_SwapWeapon // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Module1_BasicArsenalV2Mission_InventoryTransactionObjectiveComponent_K2Node_ComponentBoundEvent_0_OnObjectiveStatusAndProgressChanged__DelegateSignature(struct UObjectiveComponent* ChangedObjective, enum class EObjectiveType Type, enum class EObjectiveStatus OldStatus, enum class EObjectiveStatus NewStatus, int32_t OldProgress, int32_t NewProgress); // Function Module1_BasicArsenalV2Mission.Module1_BasicArsenalV2Mission_C.BndEvt__Module1_BasicArsenalV2Mission_InventoryTransactionObjectiveComponent_K2Node_ComponentBoundEvent_0_OnObjectiveStatusAndProgressChanged__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Module1_BasicArsenalV2Mission_WeaponSwapObjectiveComponent_K2Node_ComponentBoundEvent_2_OnObjectiveStatusAndProgressChanged__DelegateSignature(struct UObjectiveComponent* ChangedObjective, enum class EObjectiveType Type, enum class EObjectiveStatus OldStatus, enum class EObjectiveStatus NewStatus, int32_t OldProgress, int32_t NewProgress); // Function Module1_BasicArsenalV2Mission.Module1_BasicArsenalV2Mission_C.BndEvt__Module1_BasicArsenalV2Mission_WeaponSwapObjectiveComponent_K2Node_ComponentBoundEvent_2_OnObjectiveStatusAndProgressChanged__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Module1_BasicArsenalV2Mission_FollowDynamicPath_ToVandal_K2Node_ComponentBoundEvent_3_OnObjectiveStatusAndProgressChanged__DelegateSignature(struct UObjectiveComponent* ChangedObjective, enum class EObjectiveType Type, enum class EObjectiveStatus OldStatus, enum class EObjectiveStatus NewStatus, int32_t OldProgress, int32_t NewProgress); // Function Module1_BasicArsenalV2Mission.Module1_BasicArsenalV2Mission_C.BndEvt__Module1_BasicArsenalV2Mission_FollowDynamicPath_ToVandal_K2Node_ComponentBoundEvent_3_OnObjectiveStatusAndProgressChanged__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ShowScreenPrompt(); // Function Module1_BasicArsenalV2Mission.Module1_BasicArsenalV2Mission_C.ShowScreenPrompt // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Module1_BasicArsenalV2Mission(int32_t EntryPoint); // Function Module1_BasicArsenalV2Mission.Module1_BasicArsenalV2Mission_C.ExecuteUbergraph_Module1_BasicArsenalV2Mission // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

