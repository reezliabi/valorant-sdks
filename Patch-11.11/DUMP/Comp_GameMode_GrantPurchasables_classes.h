// BlueprintGeneratedClass Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C
// Size: 0x201 (Inherited: 0xd8)
struct UComp_GameMode_GrantPurchasables_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct ABaseGameMode_C* OwnerGameMode; // 0xe0(0x08)
	int32_t MaxPurchaseCharges; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct TArray<struct AAresItem*> GrantedPurchasables; // 0xf0(0x10)
	bool ShouldGrantBasicAbilities; // 0x100(0x01)
	bool ShouldClearPreviousRoundPurchases; // 0x101(0x01)
	bool ShouldClearPreviousRoundWeaponsOnly; // 0x102(0x01)
	char pad_103[0x5]; // 0x103(0x05)
	struct TArray<struct FSiteRushWeaponPool> GrantedWeaponPoolsByRound; // 0x108(0x10)
	int32_t PreviousRoundNumber; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct AAresItem* CurrentRoundArmor; // 0x120(0x08)
	struct AAresItem* CurrentRoundWeapon; // 0x128(0x08)
	bool ShouldRefreshAbilitiesOnSpawn; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	struct TArray<enum class EAresItemSlot> AbilitiesToRefreshOnSpawn; // 0x138(0x10)
	struct TArray<struct UAresPurchasable*> DefaultPurchasables; // 0x148(0x10)
	struct FMulticastInlineDelegate OnCurrentRoundLoadoutChosen; // 0x158(0x10)
	bool ShouldGrantToAllTeams; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
	struct TArray<enum class EAresTeamRole> TeamRoles; // 0x170(0x10)
	bool OnlyGrantOncePerRound; // 0x180(0x01)
	char pad_181[0x7]; // 0x181(0x07)
	struct TArray<struct APlayerState*> PlayerStatesGrantedToThisRound; // 0x188(0x10)
	struct TArray<struct AAresItem*> WeaponNeverRemoveFromPool; // 0x198(0x10)
	bool NeverRemoveAnyWeaponsFromPool; // 0x1a8(0x01)
	char pad_1A9[0x7]; // 0x1a9(0x07)
	struct TMap<struct TSoftClassPtr<UObject>, int32_t> MaxChargeOverrides; // 0x1b0(0x50)
	bool RecoverTrashedItemIfPossible; // 0x200(0x01)

	bool ShouldGrantToPlayer(struct APawn* SourcePawn); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.ShouldGrantToPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetPersistenceToDestroyIfDesired(struct AAresItem* Item); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.SetPersistenceToDestroyIfDesired // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RecoverArmorIfPossible(struct UAresInventory* Inventory, enum class EInventoryTransaction Transaction, struct AAresItem* Item); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.RecoverArmorIfPossible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetCurrentRoundWeapon(struct AAresItem*& CurrentRoundWeapon); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.GetCurrentRoundWeapon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ResetAbilityChargeMechanics(struct AActor* Equippable); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.ResetAbilityChargeMechanics // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GrantDefaultPurchasables(struct AShooterPlayerState* PlayerState, bool InRound); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.GrantDefaultPurchasables // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReplenishChargesForAbilitySlot(struct AShooterCharacter* Character, enum class EAresItemSlot Slot); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.ReplenishChargesForAbilitySlot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RemoveWeaponFromAllPools(struct AAresItem* Weapon); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.RemoveWeaponFromAllPools // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddPurchasableToArrayIfValid(struct AShooterPlayerState* PlayerState, struct TArray<struct UAresPurchasable*>& TargetArray, struct AAresItem* ItemClass); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.AddPurchasableToArrayIfValid // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateRoundWeaponIfNeeded(); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.UpdateRoundWeaponIfNeeded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MarkPurchasablesForDestroy(struct AShooterPlayerState* PlayerState); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.MarkPurchasablesForDestroy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GrantAllPurchasables(struct AShooterPlayerState* PlayerState); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.GrantAllPurchasables // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GrantPurchasable(struct AShooterPlayerState* PlayerState, struct UAresPurchasable* PurchasableClass, bool InRound); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.GrantPurchasable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetPurchasablesToGrant(struct AShooterPlayerState* PlayerState, struct AAresItem* CurrentRoundWeapon, struct TArray<struct UAresPurchasable*>& Purchasables); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.GetPurchasablesToGrant // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerSpawned(struct APawn* SpawnedPawn); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.OnPlayerSpawned // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GrantPurchasables(struct AShooterCharacter* ShooterCharacter); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.GrantPurchasables // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnInventoryTransaction(enum class EInventoryTransaction Transaction, struct UAresInventory* Inventory, struct AAresItem* Item); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.OnInventoryTransaction // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPhaseChange(enum class EAresGamePhase NewPhase); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.OnPhaseChange // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRoundEnd(int32_t RoundNumberEnding); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.OnRoundEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleDefaultWeaponChanged(struct UAresPurchasable* NewDefaultWeapon); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.HandleDefaultWeaponChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerDisassociated(struct AShooterPlayerState* DisassociatedPlayer); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.OnPlayerDisassociated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveTick(float DeltaSeconds); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Comp_GameMode_GrantPurchasables(int32_t EntryPoint); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.ExecuteUbergraph_Comp_GameMode_GrantPurchasables // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnCurrentRoundLoadoutChosen__DelegateSignature(struct AAresItem* Weapon, struct AAresItem* Armor); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.OnCurrentRoundLoadoutChosen__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

