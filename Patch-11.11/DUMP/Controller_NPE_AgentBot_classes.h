// BlueprintGeneratedClass Controller_NPE_AgentBot.Controller_NPE_AgentBot_C
// Size: 0x918 (Inherited: 0x7e8)
struct AController_NPE_AgentBot_C : ABasePlayerBotController_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7e8(0x08)
	struct UComp_EquippableActivationComponentLoader_C* Comp_EquippableActivationComponentLoader; // 0x7f0(0x08)
	struct UComp_FollowTargetUpdater_C* Comp_FollowTargetUpdater; // 0x7f8(0x08)
	struct FVector ResetData_Location; // 0x800(0x18)
	struct FRotator ResetData_Rotation; // 0x818(0x18)
	struct TMap<enum class EAresItemSlot, struct AAresItem*> ResetData_Inventory; // 0x830(0x50)
	struct TMap<enum class EAresItemSlot, struct AAresItem*> PrespawnedInventory; // 0x880(0x50)
	bool IsAllyBot; // 0x8d0(0x01)
	char pad_8D1[0x7]; // 0x8d1(0x07)
	struct FMulticastInlineDelegate OnPlayerHeard; // 0x8d8(0x10)
	struct FName BBKey_ForceMoveLocation; // 0x8e8(0x0c)
	struct FName BBKey_ForceAimActor; // 0x8f4(0x0c)
	struct FMulticastInlineDelegate OnPlayerSeen; // 0x900(0x10)
	struct FActiveGameplayEffectHandle PrespawnBuffHandle; // 0x910(0x08)

	void PreSpawnBotInventory(); // Function Controller_NPE_AgentBot.Controller_NPE_AgentBot_C.PreSpawnBotInventory // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RespawnBot(struct FVector SpawnLocation, struct FRotator SpawnRotation); // Function Controller_NPE_AgentBot.Controller_NPE_AgentBot_C.RespawnBot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EnableBot(); // Function Controller_NPE_AgentBot.Controller_NPE_AgentBot_C.EnableBot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DisableBot(); // Function Controller_NPE_AgentBot.Controller_NPE_AgentBot_C.DisableBot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetHoldAngleTarget(struct AActor* NewTarget); // Function Controller_NPE_AgentBot.Controller_NPE_AgentBot_C.SetHoldAngleTarget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ResetBehaviorTree(); // Function Controller_NPE_AgentBot.Controller_NPE_AgentBot_C.ResetBehaviorTree // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ForceMoveAndAim(struct FVector MoveLocation, struct AActor* AimActor); // Function Controller_NPE_AgentBot.Controller_NPE_AgentBot_C.ForceMoveAndAim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetGunSkinAndResetInventory(struct FString Internal Slot Name, struct FString Skin Name, int32_t Level, struct FString Chroma); // Function Controller_NPE_AgentBot.Controller_NPE_AgentBot_C.SetGunSkinAndResetInventory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ToggleBuyRequestBindings(bool ToggleOn); // Function Controller_NPE_AgentBot.Controller_NPE_AgentBot_C.ToggleBuyRequestBindings // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetupDefuserEquippable(); // Function Controller_NPE_AgentBot.Controller_NPE_AgentBot_C.SetupDefuserEquippable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ResetBot(); // Function Controller_NPE_AgentBot.Controller_NPE_AgentBot_C.ResetBot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SaveResetData_ByActor(struct AActor* InActor); // Function Controller_NPE_AgentBot.Controller_NPE_AgentBot_C.SaveResetData_ByActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SaveResetData_ByLocation(struct FVector InLocation, struct FRotator InRotation); // Function Controller_NPE_AgentBot.Controller_NPE_AgentBot_C.SaveResetData_ByLocation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SaveResetData_ByCurrentLocation(); // Function Controller_NPE_AgentBot.Controller_NPE_AgentBot_C.SaveResetData_ByCurrentLocation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SaveResetDataInventoryHelper(); // Function Controller_NPE_AgentBot.Controller_NPE_AgentBot_C.SaveResetDataInventoryHelper // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetAndRunBehaviorTree(struct UBehaviorTree* InBehavior); // Function Controller_NPE_AgentBot.Controller_NPE_AgentBot_C.SetAndRunBehaviorTree // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ApplyInventoryChanges(struct TMap<enum class EAresItemSlot, struct AAresItem*> InInventoryChanges); // Function Controller_NPE_AgentBot.Controller_NPE_AgentBot_C.ApplyInventoryChanges // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function Controller_NPE_AgentBot.Controller_NPE_AgentBot_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void OnTargetPerceptionUpdated(struct AActor* Actor, struct FAIStimulus Stimulus); // Function Controller_NPE_AgentBot.Controller_NPE_AgentBot_C.OnTargetPerceptionUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnGunRequestReceived(struct FAresGunRequest UpdatedGunRequest, struct AShooterPlayerState* RequestingPlayer); // Function Controller_NPE_AgentBot.Controller_NPE_AgentBot_C.OnGunRequestReceived // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceivePossess(struct APawn* PossessedPawn); // Function Controller_NPE_AgentBot.Controller_NPE_AgentBot_C.ReceivePossess // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveUnPossess(struct APawn* UnpossessedPawn); // Function Controller_NPE_AgentBot.Controller_NPE_AgentBot_C.ReceiveUnPossess // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void InitializeForUse(); // Function Controller_NPE_AgentBot.Controller_NPE_AgentBot_C.InitializeForUse // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CleanupForPooling(); // Function Controller_NPE_AgentBot.Controller_NPE_AgentBot_C.CleanupForPooling // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Controller_NPE_AgentBot(int32_t EntryPoint); // Function Controller_NPE_AgentBot.Controller_NPE_AgentBot_C.ExecuteUbergraph_Controller_NPE_AgentBot // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnPlayerSeen__DelegateSignature(); // Function Controller_NPE_AgentBot.Controller_NPE_AgentBot_C.OnPlayerSeen__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerHeard__DelegateSignature(); // Function Controller_NPE_AgentBot.Controller_NPE_AgentBot_C.OnPlayerHeard__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

