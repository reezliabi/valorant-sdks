// BlueprintGeneratedClass PossessableActorComponent.PossessableActorComponent_C
// Size: 0x1f9 (Inherited: 0xd8)
struct UPossessableActorComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct AController* PossessingController; // 0xe0(0x08)
	struct AShooterCharacter* OriginalPawn; // 0xe8(0x08)
	struct AShooterCharacter* OwningShooterCharacter; // 0xf0(0x08)
	struct FRotator OriginalPawnControlRotation; // 0xf8(0x18)
	struct FRotator PossessRotation; // 0x110(0x18)
	struct FMulticastInlineDelegate Possessed; // 0x128(0x10)
	struct FMulticastInlineDelegate Unpossessed; // 0x138(0x10)
	struct AEffectContainer* FXC_Possessed; // 0x148(0x08)
	struct FEffectID FXC_ID_Possessed; // 0x150(0x20)
	bool UnpossessOnOriginalPawnTakeDamage; // 0x170(0x01)
	bool UnpossessOnOriginalPawnDeath; // 0x171(0x01)
	char pad_172[0x6]; // 0x172(0x06)
	struct FMulticastInlineDelegate AuthOwnerTakeDamage; // 0x178(0x10)
	bool UnpossessOnRoundEnd; // 0x188(0x01)
	bool RevertControlRotationOnUnpossess; // 0x189(0x01)
	char pad_18A[0x6]; // 0x18a(0x06)
	struct FRotator UnpossessRotation; // 0x190(0x18)
	bool IsPossessed; // 0x1a8(0x01)
	bool RemoveOriginalPawnVisionConeWhilePossessed; // 0x1a9(0x01)
	char pad_1AA[0x6]; // 0x1aa(0x06)
	struct AEffectContainer* FXC_Client_Possessed; // 0x1b0(0x08)
	struct FEffectID FXC_ID_Client_Possessed; // 0x1b8(0x20)
	struct TArray<struct FGameplayAttribute> UnpossessAttributes; // 0x1d8(0x10)
	struct TArray<struct FGameplayTag> UnpossessGameplayTags; // 0x1e8(0x10)
	bool DestroyActorOnUnpossess; // 0x1f8(0x01)

	void GetPossessionOwner(struct AShooterCharacter*& OwningShooterCharacter); // Function PossessableActorComponent.PossessableActorComponent_C.GetPossessionOwner // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void DebugLogPossession(struct APawn* PossessedSummon, struct APawn* OriginalPawn, struct FText NodeName); // Function PossessableActorComponent.PossessableActorComponent_C.DebugLogPossession // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateVisionCone(bool Possessed); // Function PossessableActorComponent.PossessableActorComponent_C.UpdateVisionCone // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UnBindToPossessionStoppingEvents(); // Function PossessableActorComponent.PossessableActorComponent_C.UnBindToPossessionStoppingEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToPossessionStoppingEvents(); // Function PossessableActorComponent.PossessableActorComponent_C.BindToPossessionStoppingEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Possess(struct AShooterCharacter* InShooterCharacter); // Function PossessableActorComponent.PossessableActorComponent_C.Possess // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UnPossess(); // Function PossessableActorComponent.PossessableActorComponent_C.UnPossess // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetRotation(struct FRotator InControlRotation, bool ClearPossessingController, struct AController* PossessingController, struct AShooterCharacter* OriginalPawn); // Function PossessableActorComponent.PossessableActorComponent_C.SetRotation // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function PossessableActorComponent.PossessableActorComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnTakeAnyDamage_Event_1(struct AActor* DamagedActor, float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function PossessableActorComponent.PossessableActorComponent_C.OnTakeAnyDamage_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnDestroyed_Event_1(struct AActor* DestroyedActor); // Function PossessableActorComponent.PossessableActorComponent_C.OnDestroyed_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RoundEnd(int32_t RoundNumberEnding); // Function PossessableActorComponent.PossessableActorComponent_C.RoundEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ClientPlayClientPossessionEffect(); // Function PossessableActorComponent.PossessableActorComponent_C.ClientPlayClientPossessionEffect // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ClientStopClientPossessionEffect(); // Function PossessableActorComponent.PossessableActorComponent_C.ClientStopClientPossessionEffect // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveTick(float DeltaSeconds); // Function PossessableActorComponent.PossessableActorComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnCharacterDeath_Event(struct AShooterCharacter* Character, struct UDamageResponse* DamageResponse); // Function PossessableActorComponent.PossessableActorComponent_C.OnCharacterDeath_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_PossessableActorComponent(int32_t EntryPoint); // Function PossessableActorComponent.PossessableActorComponent_C.ExecuteUbergraph_PossessableActorComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void AuthOwnerTakeDamage__DelegateSignature(); // Function PossessableActorComponent.PossessableActorComponent_C.AuthOwnerTakeDamage__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Unpossessed__DelegateSignature(); // Function PossessableActorComponent.PossessableActorComponent_C.Unpossessed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Possessed__DelegateSignature(); // Function PossessableActorComponent.PossessableActorComponent_C.Possessed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

