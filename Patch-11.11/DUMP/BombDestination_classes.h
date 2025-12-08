// BlueprintGeneratedClass BombDestination.BombDestination_C
// Size: 0x5d0 (Inherited: 0x4b0)
struct ABombDestination_C : AGameObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct UReplicationSleepComponent* ReplicationSleep; // 0x4b8(0x08)
	struct UStaticMeshComponent* StaticMesh2; // 0x4c0(0x08)
	struct UUsableComponent* Usable; // 0x4c8(0x08)
	struct AAresEquippable* BombEquippableClass; // 0x4d0(0x08)
	struct TArray<struct ABP_BombDestinationVolume_C*> RequiredPlantVolumes; // 0x4d8(0x10)
	bool L_FoundValidVolume; // 0x4e8(0x01)
	char pad_4E9[0x7]; // 0x4e9(0x07)
	double PlantRadius; // 0x4f0(0x08)
	enum class BombSiteEnum BombSite; // 0x4f8(0x01)
	char pad_4F9[0x7]; // 0x4f9(0x07)
	struct TArray<struct ABombSiteEffectObject_C*> BombSiteEffectActors; // 0x500(0x10)
	struct TArray<struct ABombSiteEffectObject_C*> ActiveEffects; // 0x510(0x10)
	struct TArray<struct ABombSiteEffectObject_C*> DeferredEffectReferences; // 0x520(0x10)
	struct TArray<double> DeferredEffectTimes; // 0x530(0x10)
	struct TArray<int32_t> RemoveIndexes; // 0x540(0x10)
	struct FActiveGameplayEffectHandle BombBuffV2; // 0x550(0x08)
	struct TArray<struct UPrimitiveComponent*> DestinationZoneAsPrimitiveComponents; // 0x558(0x10)
	struct FMulticastInlineDelegate OnBombPlanted; // 0x568(0x10)
	struct APlantedBomb_C* PlantedBomb; // 0x578(0x08)
	struct APlantedBomb_C* PlantedBombClass; // 0x580(0x08)
	struct AAresEquippable* PreviousEquippable; // 0x588(0x08)
	bool bCanBeginPlant; // 0x590(0x01)
	char pad_591[0x7]; // 0x591(0x07)
	struct FTimerHandle EquipBombTimer; // 0x598(0x08)
	struct TArray<struct FVector> PossibleBombOffsets; // 0x5a0(0x10)
	double PlantStepDown; // 0x5b0(0x08)
	double PlantStepUp; // 0x5b8(0x08)
	double BombHalfHeight; // 0x5c0(0x08)
	double BombRadius; // 0x5c8(0x08)

	void IsBombCapsuleBlockedByLevel(struct FVector Location, struct AShooterCharacter* Character, bool& Result); // Function BombDestination.BombDestination_C.IsBombCapsuleBlockedByLevel // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsLocationInsideBombsite(struct FVector Planting Location, bool& Result); // Function BombDestination.BombDestination_C.IsLocationInsideBombsite // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool IsValidFloorForPlanting(struct UCharacterMovementComponent* InCharacterMovement); // Function BombDestination.BombDestination_C.IsValidFloorForPlanting // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SpawnPlantedBomb(struct AShooterCharacter* Character); // Function BombDestination.BombDestination_C.SpawnPlantedBomb // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RefreshBombSiteActors(); // Function BombDestination.BombDestination_C.RefreshBombSiteActors // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Usable_K2Node_ComponentBoundEvent_97_UsableComponentCanUseSignature__DelegateSignature(struct UUsableComponent* UsableComponent, struct UInteractableUserComponent* User); // Function BombDestination.BombDestination_C.BndEvt__Usable_K2Node_ComponentBoundEvent_97_UsableComponentCanUseSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Usable_K2Node_ComponentBoundEvent_100_UsableComponentUseStarted__DelegateSignature(struct UInteractableUserComponent* User); // Function BombDestination.BombDestination_C.BndEvt__Usable_K2Node_ComponentBoundEvent_100_UsableComponentUseStarted__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Usable_K2Node_ComponentBoundEvent_104_UsableComponentUseSuccessful__DelegateSignature(struct UInteractableUserComponent* User); // Function BombDestination.BombDestination_C.BndEvt__Usable_K2Node_ComponentBoundEvent_104_UsableComponentUseSuccessful__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Usable_K2Node_ComponentBoundEvent_109_UsableComponentUseCanceled__DelegateSignature(struct UInteractableUserComponent* User, enum class EUsableCancelReason CancelReason); // Function BombDestination.BombDestination_C.BndEvt__Usable_K2Node_ComponentBoundEvent_109_UsableComponentUseCanceled__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function BombDestination.BombDestination_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void MulticastActivateBombSiteEffects(struct FVector BombLocation); // Function BombDestination.BombDestination_C.MulticastActivateBombSiteEffects // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAuthRoundBegin(); // Function BombDestination.BombDestination_C.OnAuthRoundBegin // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void CleanupEffects(); // Function BombDestination.BombDestination_C.CleanupEffects // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateEffect(struct ABombSiteEffectObject_C* EffectObject); // Function BombDestination.BombDestination_C.CreateEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MulticastCleanupActiveEffects(); // Function BombDestination.BombDestination_C.MulticastCleanupActiveEffects // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthOnDefused(); // Function BombDestination.BombDestination_C.AuthOnDefused // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnDeferredEffectReady(); // Function BombDestination.BombDestination_C.OnDeferredEffectReady // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Multicast Override Equippable(struct AAresEquippable* BombEquippableClass); // Function BombDestination.BombDestination_C.Multicast Override Equippable // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_BombDestination(int32_t EntryPoint); // Function BombDestination.BombDestination_C.ExecuteUbergraph_BombDestination // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnBombPlanted__DelegateSignature(struct AShooterCharacter* PlantingCharacter, enum class BombSiteEnum BombSite, struct APlantedBomb_C* PlantedBomb); // Function BombDestination.BombDestination_C.OnBombPlanted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

