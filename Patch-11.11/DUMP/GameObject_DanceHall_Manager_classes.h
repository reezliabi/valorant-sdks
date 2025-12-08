// BlueprintGeneratedClass GameObject_DanceHall_Manager.GameObject_DanceHall_Manager_C
// Size: 0x6e8 (Inherited: 0x5bc)
struct AGameObject_DanceHall_Manager_C : AGameObject_PracticeModule_Parent_C {
	char pad_5BC[0x4]; // 0x5bc(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5c0(0x08)
	struct FName FocusTargetBlackboardKey; // 0x5c8(0x0c)
	char pad_5D4[0x4]; // 0x5d4(0x04)
	struct TArray<struct AShooterCharacter*> EnemyBots; // 0x5d8(0x10)
	struct FTimerHandle EquipPistolsHandle; // 0x5e8(0x08)
	struct ATimedBomb_C* PlantedBomb; // 0x5f0(0x08)
	struct FMulticastInlineDelegate OnDanceHallFinished_1; // 0x5f8(0x10)
	int32_t BotsKilled; // 0x608(0x04)
	char pad_60C[0x4]; // 0x60c(0x04)
	struct TMap<struct AShooterCharacter*, struct ATargetPoint_DanceHall_C*> BotToTargetPointMap; // 0x610(0x50)
	struct FTimerHandle BombTickHandle; // 0x660(0x08)
	double BombFuseTime; // 0x668(0x08)
	struct FTimerHandle BombFuseHandle; // 0x670(0x08)
	double PlantTime; // 0x678(0x08)
	struct ABombDetonationActor_C* BombDetonationActor; // 0x680(0x08)
	struct FMulticastInlineDelegate OnDanceHallBotKilled_1; // 0x688(0x10)
	struct FString SpawnPoint; // 0x698(0x10)
	struct AShooterCharacter* Selected Bot Model; // 0x6a8(0x08)
	struct AShooterCharacter* TrainingBotHard; // 0x6b0(0x08)
	struct AShooterCharacter* TrainingBotMed; // 0x6b8(0x08)
	struct AShooterCharacter* TrainingBotEasy; // 0x6c0(0x08)
	struct AGun_C* Selected Bot Weapon; // 0x6c8(0x08)
	struct AActor* DanceHallSpawn; // 0x6d0(0x08)
	bool PlayerIsDefender; // 0x6d8(0x01)
	char pad_6D9[0x7]; // 0x6d9(0x07)
	struct AController* LocalController; // 0x6e0(0x08)

	void GetSecondsForNextBombTick(double& NextTick); // Function GameObject_DanceHall_Manager.GameObject_DanceHall_Manager_C.GetSecondsForNextBombTick // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetSpawnsOfType(enum class Enum_DanceHall_SpawnType A, struct TArray<struct ATargetPoint_DanceHall_C*>& SpawnMap); // Function GameObject_DanceHall_Manager.GameObject_DanceHall_Manager_C.GetSpawnsOfType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DestroyPistol(struct AShooterCharacter* Character); // Function GameObject_DanceHall_Manager.GameObject_DanceHall_Manager_C.DestroyPistol // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayKillConfirm(struct APawn* Pawn); // Function GameObject_DanceHall_Manager.GameObject_DanceHall_Manager_C.PlayKillConfirm // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SpawnPlantedBomb(); // Function GameObject_DanceHall_Manager.GameObject_DanceHall_Manager_C.SpawnPlantedBomb // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetRandomSpawnFromEachType(struct TArray<struct ATargetPoint_DanceHall_C*>& SpawnTargets); // Function GameObject_DanceHall_Manager.GameObject_DanceHall_Manager_C.GetRandomSpawnFromEachType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetAllSpawnsForTest(enum class Enum_SkillTest_DanceHallTest Test, struct TArray<struct ATargetPoint_DanceHall_C*>& SpawnTargets); // Function GameObject_DanceHall_Manager.GameObject_DanceHall_Manager_C.GetAllSpawnsForTest // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SpawnEnemyBot(struct ATargetPoint_DanceHall_C* SpawnTarget, struct AShooterCharacter*& EnemyBot); // Function GameObject_DanceHall_Manager.GameObject_DanceHall_Manager_C.SpawnEnemyBot // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Event Spawn Bots(struct TArray<struct ATargetPoint_DanceHall_C*>& Transforms); // Function GameObject_DanceHall_Manager.GameObject_DanceHall_Manager_C.Event Spawn Bots // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Event Defused(struct UInteractableUserComponent* UsingCharacter); // Function GameObject_DanceHall_Manager.GameObject_DanceHall_Manager_C.Event Defused // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Event Bot Death(struct AShooterCharacter* Character, struct UDamageResponse* DamageResponse); // Function GameObject_DanceHall_Manager.GameObject_DanceHall_Manager_C.Event Bot Death // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAuthUsedEquippable_Event_1(struct AAresEquippable* Equippable); // Function GameObject_DanceHall_Manager.GameObject_DanceHall_Manager_C.OnAuthUsedEquippable_Event_1 // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Multicast Spawn Bots(); // Function GameObject_DanceHall_Manager.GameObject_DanceHall_Manager_C.Multicast Spawn Bots // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Event Bomb Explode(); // Function GameObject_DanceHall_Manager.GameObject_DanceHall_Manager_C.Event Bomb Explode // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthCleanupPracticeModule(); // Function GameObject_DanceHall_Manager.GameObject_DanceHall_Manager_C.AuthCleanupPracticeModule // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Comp_PracticeManager_StoreManager_K2Node_ComponentBoundEvent_2_ExitShopArea__DelegateSignature(); // Function GameObject_DanceHall_Manager.GameObject_DanceHall_Manager_C.BndEvt__Comp_PracticeManager_StoreManager_K2Node_ComponentBoundEvent_2_ExitShopArea__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void PracticeModuleBegin(); // Function GameObject_DanceHall_Manager.GameObject_DanceHall_Manager_C.PracticeModuleBegin // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function GameObject_DanceHall_Manager.GameObject_DanceHall_Manager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void OnShootingRangeSettingsUpdated(struct FShootingRangeSettings ShootingRangeSettings); // Function GameObject_DanceHall_Manager.GameObject_DanceHall_Manager_C.OnShootingRangeSettingsUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_GameObject_DanceHall_Manager(int32_t EntryPoint); // Function GameObject_DanceHall_Manager.GameObject_DanceHall_Manager_C.ExecuteUbergraph_GameObject_DanceHall_Manager // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnDanceHallBotKilled_0__DelegateSignature(struct AShooterCharacter* Victim); // Function GameObject_DanceHall_Manager.GameObject_DanceHall_Manager_C.OnDanceHallBotKilled_0__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnDanceHallFinished_0__DelegateSignature(); // Function GameObject_DanceHall_Manager.GameObject_DanceHall_Manager_C.OnDanceHallFinished_0__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

