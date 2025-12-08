// BlueprintGeneratedClass GameObject_PracticeModule_Parent.GameObject_PracticeModule_Parent_C
// Size: 0x5bc (Inherited: 0x4b0)
struct AGameObject_PracticeModule_Parent_C : AGameObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct UComp_PracticeManager_InventoryManager_C* Comp_PracticeManager_AbilityManager; // 0x4b8(0x08)
	struct UComp_PracticeManager_StoreManager_C* Comp_PracticeManager_StoreManager; // 0x4c0(0x08)
	struct AShooterCharacter* PlayerCharacter; // 0x4c8(0x08)
	struct FMulticastInlineDelegate OnDanceHallFinished; // 0x4d0(0x10)
	struct FMulticastInlineDelegate OnDanceHallBotKilled; // 0x4e0(0x10)
	bool IsSkillTest; // 0x4f0(0x01)
	char pad_4F1[0x3]; // 0x4f1(0x03)
	int32_t Difficulty; // 0x4f4(0x04)
	struct FString PlayerRespawn; // 0x4f8(0x10)
	bool PlayerIsAttacker; // 0x508(0x01)
	bool OriginalPlayerTeamAttacker; // 0x509(0x01)
	bool ModuleActive; // 0x50a(0x01)
	char pad_50B[0x5]; // 0x50b(0x05)
	struct AAresItem* StoredPrimary; // 0x510(0x08)
	struct AAresItem* StoredSecondary; // 0x518(0x08)
	struct AAresItem* StartingPrimary; // 0x520(0x08)
	struct AAresItem* StartingSecondary; // 0x528(0x08)
	struct TArray<struct UAttachment_Base_C*> PrimaryAttachments; // 0x530(0x10)
	struct TArray<struct UAttachment_Base_C*> SecondaryAttachments; // 0x540(0x10)
	struct FMulticastInlineDelegate OnPracticeModuleBegin; // 0x550(0x10)
	struct FMulticastInlineDelegate OnPractiveModuleEndReset; // 0x560(0x10)
	struct TArray<struct ANPE_Doors_C*> ModuleDoors; // 0x570(0x10)
	struct FText MissionName; // 0x580(0x18)
	struct ATriggerVolume* StartAreaTriggerVolume; // 0x598(0x08)
	bool InfiniteAmmoEnabled; // 0x5a0(0x01)
	char pad_5A1[0x7]; // 0x5a1(0x07)
	struct FMulticastInlineDelegate OnPracticeModuleReset; // 0x5a8(0x10)
	bool IsResetting; // 0x5b8(0x01)
	bool IsShootingRangeMission; // 0x5b9(0x01)
	bool UseStartingWeapons; // 0x5ba(0x01)
	bool bAnimateCharacterOnServer; // 0x5bb(0x01)

	void GrantStarterWeapons(); // Function GameObject_PracticeModule_Parent.GameObject_PracticeModule_Parent_C.GrantStarterWeapons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CheckForStartAreaTriggerVolumeOverlap(); // Function GameObject_PracticeModule_Parent.GameObject_PracticeModule_Parent_C.CheckForStartAreaTriggerVolumeOverlap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ResetRoundAndSpawnPlayers(); // Function GameObject_PracticeModule_Parent.GameObject_PracticeModule_Parent_C.ResetRoundAndSpawnPlayers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddWeapons(struct AAresItem* InPrimary, struct AAresItem* InSecondary); // Function GameObject_PracticeModule_Parent.GameObject_PracticeModule_Parent_C.AddWeapons // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ClearWeapons(bool StoreWeaponClasses); // Function GameObject_PracticeModule_Parent.GameObject_PracticeModule_Parent_C.ClearWeapons // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePlayerSpawn(); // Function GameObject_PracticeModule_Parent.GameObject_PracticeModule_Parent_C.UpdatePlayerSpawn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Attribute Changed(struct UAresAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute& Attribute, float OldValue, float NewValue); // Function GameObject_PracticeModule_Parent.GameObject_PracticeModule_Parent_C.Attribute Changed // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthStartPracticeModule(); // Function GameObject_PracticeModule_Parent.GameObject_PracticeModule_Parent_C.AuthStartPracticeModule // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSpawnedCharacterChanged_Event_1(struct AShooterCharacter* NewValue); // Function GameObject_PracticeModule_Parent.GameObject_PracticeModule_Parent_C.OnSpawnedCharacterChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PracticeModuleBegin(); // Function GameObject_PracticeModule_Parent.GameObject_PracticeModule_Parent_C.PracticeModuleBegin // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthCleanupPracticeModule(); // Function GameObject_PracticeModule_Parent.GameObject_PracticeModule_Parent_C.AuthCleanupPracticeModule // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthEndPracticeModule(enum class Enum_PracticeModuleResult Result); // Function GameObject_PracticeModule_Parent.GameObject_PracticeModule_Parent_C.AuthEndPracticeModule // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthModuleEndReset(); // Function GameObject_PracticeModule_Parent.GameObject_PracticeModule_Parent_C.AuthModuleEndReset // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSpawnedPostModule(struct AShooterCharacter* NewValue); // Function GameObject_PracticeModule_Parent.GameObject_PracticeModule_Parent_C.OnSpawnedPostModule // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddWeaponAttachmentComponents(struct AAresItem* Gun, struct TArray<struct UAttachment_Base_C*>& Attachments); // Function GameObject_PracticeModule_Parent.GameObject_PracticeModule_Parent_C.AddWeaponAttachmentComponents // (Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function GameObject_PracticeModule_Parent.GameObject_PracticeModule_Parent_C.BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_1_ActorEndOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function GameObject_PracticeModule_Parent.GameObject_PracticeModule_Parent_C.BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_1_ActorEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void MulticastPracticeModuleBegin(); // Function GameObject_PracticeModule_Parent.GameObject_PracticeModule_Parent_C.MulticastPracticeModuleBegin // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MulticastPracticeModuleReset(); // Function GameObject_PracticeModule_Parent.GameObject_PracticeModule_Parent_C.MulticastPracticeModuleReset // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MulticastModuleEndReset(); // Function GameObject_PracticeModule_Parent.GameObject_PracticeModule_Parent_C.MulticastModuleEndReset // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function GameObject_PracticeModule_Parent.GameObject_PracticeModule_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerViewTargetChanged(); // Function GameObject_PracticeModule_Parent.GameObject_PracticeModule_Parent_C.OnPlayerViewTargetChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCharacterDeath_Event(struct AShooterCharacter* Character, struct UDamageResponse* Response); // Function GameObject_PracticeModule_Parent.GameObject_PracticeModule_Parent_C.OnCharacterDeath_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void FailModule(); // Function GameObject_PracticeModule_Parent.GameObject_PracticeModule_Parent_C.FailModule // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_GameObject_PracticeModule_Parent(int32_t EntryPoint); // Function GameObject_PracticeModule_Parent.GameObject_PracticeModule_Parent_C.ExecuteUbergraph_GameObject_PracticeModule_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnPracticeModuleReset__DelegateSignature(); // Function GameObject_PracticeModule_Parent.GameObject_PracticeModule_Parent_C.OnPracticeModuleReset__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPractiveModuleEndReset__DelegateSignature(); // Function GameObject_PracticeModule_Parent.GameObject_PracticeModule_Parent_C.OnPractiveModuleEndReset__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPracticeModuleBegin__DelegateSignature(); // Function GameObject_PracticeModule_Parent.GameObject_PracticeModule_Parent_C.OnPracticeModuleBegin__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnDanceHallBotKilled__DelegateSignature(struct AShooterCharacter* Victim); // Function GameObject_PracticeModule_Parent.GameObject_PracticeModule_Parent_C.OnDanceHallBotKilled__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnDanceHallFinished__DelegateSignature(enum class Enum_PracticeModuleResult Result); // Function GameObject_PracticeModule_Parent.GameObject_PracticeModule_Parent_C.OnDanceHallFinished__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

