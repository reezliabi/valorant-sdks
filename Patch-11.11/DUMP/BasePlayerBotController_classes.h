// BlueprintGeneratedClass BasePlayerBotController.BasePlayerBotController_C
// Size: 0x7e8 (Inherited: 0x638)
struct ABasePlayerBotController_C : AAresBotController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x638(0x08)
	struct UComp_Controller_AiAimRecoilCompensation_C* Comp_Controller_AiAimRecoilCompensation; // 0x640(0x08)
	struct UComp_Controller_AiLookAroundRandomly_C* Comp_Controller_AiLookAroundRandomly; // 0x648(0x08)
	struct UComp_Controller_ShopPurchase_C* Comp_Controller_ShopPurchase; // 0x650(0x08)
	struct UComp_Controller_AiAimFocusOnTargetOverTime_C* Comp_Controller_AiAimFocusOnTargetOverTime; // 0x658(0x08)
	struct UComp_Controller_AiAimInterpolation_C* Comp_Controller_AiAimInterpolation; // 0x660(0x08)
	struct UAresAIPerceptionComponent* AresAIPerception; // 0x668(0x08)
	struct UBehaviorTree* BehaviorTree; // 0x670(0x08)
	struct UBehaviorTree* CurrentBehavior; // 0x678(0x08)
	double XOffset; // 0x680(0x08)
	double YOffset; // 0x688(0x08)
	double XCycleSpeed; // 0x690(0x08)
	double YCycleSpeed; // 0x698(0x08)
	double TimePassed; // 0x6a0(0x08)
	double CombatCrouchChance; // 0x6a8(0x08)
	struct FActiveGameplayEffectHandle CrouchBuff; // 0x6b0(0x08)
	bool HasDecidedInitialCrouch; // 0x6b8(0x01)
	bool IsCrouched; // 0x6b9(0x01)
	bool GiveInfiniteAmmo; // 0x6ba(0x01)
	bool CanPickupBombEquippable; // 0x6bb(0x01)
	char pad_6BC[0x4]; // 0x6bc(0x04)
	double DistanceToDesireADS; // 0x6c0(0x08)
	double GunBeginFiringErrorMin; // 0x6c8(0x08)
	double GunBeginFiringErrorMax; // 0x6d0(0x08)
	double GunEndFiringErrorMin; // 0x6d8(0x08)
	bool IsOnFiringCooldown; // 0x6e0(0x01)
	char pad_6E1[0x7]; // 0x6e1(0x07)
	double GunEndFiringErrorMax; // 0x6e8(0x08)
	double GunBeginFiringError; // 0x6f0(0x08)
	double GunEndFiringError; // 0x6f8(0x08)
	double RotationRemainingToEnemyToBeginFiring; // 0x700(0x08)
	bool AtControlRotation; // 0x708(0x01)
	char pad_709[0x7]; // 0x709(0x07)
	struct FRotator RawTargetControlRotation; // 0x710(0x18)
	double RecoilBeginFiringMin; // 0x728(0x08)
	double RecoilBeginFiringMax; // 0x730(0x08)
	double RecoilEndFiringMin; // 0x738(0x08)
	double RecoilEndFiringMax; // 0x740(0x08)
	double RecoilBeginFiring; // 0x748(0x08)
	double RecoilEndFiring; // 0x750(0x08)
	enum class BotAggressiveness CombatAggressiveness; // 0x758(0x01)
	char pad_759[0x7]; // 0x759(0x07)
	struct TArray<enum class BotAggressiveness> PotentialAggressiveness; // 0x760(0x10)
	struct FMulticastInlineDelegate OnControlRotationReached; // 0x770(0x10)
	double MinReactionTime; // 0x780(0x08)
	double MaxReactionTime; // 0x788(0x08)
	bool HasDiscoveredPlantedBomb; // 0x790(0x01)
	bool HasDiscoveredBombEquippable; // 0x791(0x01)
	bool IsFallingBack; // 0x792(0x01)
	bool HasRetreatedThisRound; // 0x793(0x01)
	char pad_794[0x4]; // 0x794(0x04)
	double CurrentTimeToRunFromBombModifier; // 0x798(0x08)
	double MinTimeToRunFromBombModifier; // 0x7a0(0x08)
	double MaxTimeToRunFromBombModifier; // 0x7a8(0x08)
	double ChanceToFallBackAfterAllyDamage; // 0x7b0(0x08)
	double DamageThresholdToConsiderFallingBack; // 0x7b8(0x08)
	struct APawn* PossessedPawn; // 0x7c0(0x08)
	bool PauseAITasks; // 0x7c8(0x01)
	char pad_7C9[0x7]; // 0x7c9(0x07)
	struct TArray<struct UAresPurchasable*> PurchasablesToBuy; // 0x7d0(0x10)
	double StepHeightMultiplier; // 0x7e0(0x08)

	void RunNewBehaviorTree(struct UBehaviorTree* BehaviorTree); // Function BasePlayerBotController.BasePlayerBotController_C.RunNewBehaviorTree // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HasPassedFiringDelay(bool& ShouldFire); // Function BasePlayerBotController.BasePlayerBotController_C.HasPassedFiringDelay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	bool ShouldRunFromExplodingBomb(); // Function BasePlayerBotController.BasePlayerBotController_C.ShouldRunFromExplodingBomb // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetRawTargetControlRotation(struct FRotator In_TargetRotation); // Function BasePlayerBotController.BasePlayerBotController_C.SetRawTargetControlRotation // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TickControlRotation(double DeltaSeconds, struct FRotator In_TargetControlRotation, struct FRotator& Out_ControlRotation); // Function BasePlayerBotController.BasePlayerBotController_C.TickControlRotation // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsAtControlRotation(bool& AtRotation); // Function BasePlayerBotController.BasePlayerBotController_C.IsAtControlRotation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	bool ShouldStandStillWhileFiring(); // Function BasePlayerBotController.BasePlayerBotController_C.ShouldStandStillWhileFiring // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	double GetExtraWeaponDelayTime(); // Function BasePlayerBotController.BasePlayerBotController_C.GetExtraWeaponDelayTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	bool ShouldMoveCloserToEnemy(struct AActor* TargetActor); // Function BasePlayerBotController.BasePlayerBotController_C.ShouldMoveCloserToEnemy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	struct AAresEquippable* GetCurrentWeapon(); // Function BasePlayerBotController.BasePlayerBotController_C.GetCurrentWeapon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	bool ShouldRightClickToFire(struct AActor* TargetActor); // Function BasePlayerBotController.BasePlayerBotController_C.ShouldRightClickToFire // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	bool GetShouldFire(); // Function BasePlayerBotController.BasePlayerBotController_C.GetShouldFire // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool ShouldZoomWeapon(struct AActor* TargetActor); // Function BasePlayerBotController.BasePlayerBotController_C.ShouldZoomWeapon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UpdateWeaponBehavior(); // Function BasePlayerBotController.BasePlayerBotController_C.UpdateWeaponBehavior // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EquipBestWeapon(); // Function BasePlayerBotController.BasePlayerBotController_C.EquipBestWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UnCrouch(); // Function BasePlayerBotController.BasePlayerBotController_C.UnCrouch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Crouch(); // Function BasePlayerBotController.BasePlayerBotController_C.Crouch // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FRotator OverrideControlRotation(float DeltaTime, struct FRotator NewControlRotation); // Function BasePlayerBotController.BasePlayerBotController_C.OverrideControlRotation // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EvaluateInaccuracy(double Time, double& X, double& Y); // Function BasePlayerBotController.BasePlayerBotController_C.EvaluateInaccuracy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceivePossess(struct APawn* PossessedPawn); // Function BasePlayerBotController.BasePlayerBotController_C.ReceivePossess // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveUnPossess(struct APawn* UnpossessedPawn); // Function BasePlayerBotController.BasePlayerBotController_C.ReceiveUnPossess // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void OnTeamChanged_Event_2(); // Function BasePlayerBotController.BasePlayerBotController_C.OnTeamChanged_Event_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetInaccuracyValues(double MinCycleSpeed, double MaxCycleSpeed); // Function BasePlayerBotController.BasePlayerBotController_C.SetInaccuracyValues // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function BasePlayerBotController.BasePlayerBotController_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ReplenishAmmo(); // Function BasePlayerBotController.BasePlayerBotController_C.ReplenishAmmo // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCharacterDeath(struct AShooterCharacter* Character, struct UDamageResponse* Response); // Function BasePlayerBotController.BasePlayerBotController_C.OnCharacterDeath // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Comp_Controller_ShopPurchase_K2Node_ComponentBoundEvent_0_ShoppingCompleted__DelegateSignature(); // Function BasePlayerBotController.BasePlayerBotController_C.BndEvt__Comp_Controller_ShopPurchase_K2Node_ComponentBoundEvent_0_ShoppingCompleted__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void InitializeForCopilotActivation(struct APawn* PossessedPawn); // Function BasePlayerBotController.BasePlayerBotController_C.InitializeForCopilotActivation // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void CleanupForCopilotDeactivation(struct APawn* UnpossessedPawn); // Function BasePlayerBotController.BasePlayerBotController_C.CleanupForCopilotDeactivation // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_BasePlayerBotController(int32_t EntryPoint); // Function BasePlayerBotController.BasePlayerBotController_C.ExecuteUbergraph_BasePlayerBotController // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnControlRotationReached__DelegateSignature(); // Function BasePlayerBotController.BasePlayerBotController_C.OnControlRotationReached__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

