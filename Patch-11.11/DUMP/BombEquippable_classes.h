// BlueprintGeneratedClass BombEquippable.BombEquippable_C
// Size: 0x11d9 (Inherited: 0x10e0)
struct ABombEquippable_C : AAresEquippable {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10e0(0x08)
	struct UPlayspaceVisibilityComponent* PlayspaceVisibility; // 0x10e8(0x08)
	struct UUsableUnequipStateComponent_C* UsableUnequipOnCompleteStateComponent; // 0x10f0(0x08)
	struct UUsableUnequipStateComponent_C* UsableUnequipOnCancelStateComponent; // 0x10f8(0x08)
	struct UTestBranch_EffectsActive_StateComponent_C* TestBranch_EffectsActive_StateComponent; // 0x1100(0x08)
	struct UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource; // 0x1108(0x08)
	struct USphereComponent* CalloutCollider; // 0x1110(0x08)
	struct UCalloutRegionTrackingComponent* CalloutRegionTracking; // 0x1118(0x08)
	struct UTeamRoleComponent* TeamRole; // 0x1120(0x08)
	struct URespondToEventStateComponent* PrimaryTriggerBombAction; // 0x1128(0x08)
	struct URespondToEventStateComponent* WaitForPrimaryTrigger; // 0x1130(0x08)
	struct UScriptStateComponent* IdleState; // 0x1138(0x08)
	struct UEquippableStateMachineComponent* PrimaryTriggerActionStateMachine; // 0x1140(0x08)
	struct UWaitForUsingUsableStateComponent* WaitForUsingUsableState; // 0x1148(0x08)
	struct UWhileUsingUsableStateComponent* WhileUsingUsableState; // 0x1150(0x08)
	struct UBombMinimapComponent_C* BombMinimapComponent; // 0x1158(0x08)
	struct UEquippableVisibilityComponent* EquippableVisibility; // 0x1160(0x08)
	struct UBombEquippableVOComponent_C* BombEquippableVOTriggers; // 0x1168(0x08)
	struct UCapsuleComponent* Targeting Shape; // 0x1170(0x08)
	struct UEquipStateComponent* EquipState; // 0x1178(0x08)
	struct UAresOutlineComponent* Outline3P_TempBomb; // 0x1180(0x08)
	struct UAresOutlineComponent* Outline3P; // 0x1188(0x08)
	struct UAresOutlineComponent* Outline1P; // 0x1190(0x08)
	struct FMulticastInlineDelegate OnBombPickedUp; // 0x1198(0x10)
	struct FMulticastInlineDelegate OnBombDropped; // 0x11a8(0x10)
	struct FEffectID Enemy Bomb Plant ID; // 0x11b8(0x20)
	bool bOnGround; // 0x11d8(0x01)

	struct UBaseCrosshairHudElement* GetCurrentCrosshairHudElementClass(); // Function BombEquippable.BombEquippable_C.GetCurrentCrosshairHudElementClass // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x19be2f0
	void IsBombInInventory(bool& IsBombInInventory); // Function BombEquippable.BombEquippable_C.IsBombInInventory // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetEquippableAnimationGroup(); // Function BombEquippable.BombEquippable_C.GetEquippableAnimationGroup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetEquippableAnimationType(); // Function BombEquippable.BombEquippable_C.GetEquippableAnimationType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool AllowPickup(struct AShooterCharacter* TargetCharacter); // Function BombEquippable.BombEquippable_C.AllowPickup // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveAuthSetOwningCharacter(struct AShooterCharacter* NewCharacter); // Function BombEquippable.BombEquippable_C.ReceiveAuthSetOwningCharacter // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveAuthClearOwningCharacter(struct AShooterCharacter* OldCharacter); // Function BombEquippable.BombEquippable_C.ReceiveAuthClearOwningCharacter // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function BombEquippable.BombEquippable_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WhileUsingUsableState_K2Node_ComponentBoundEvent_2_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function BombEquippable.BombEquippable_C.BndEvt__WhileUsingUsableState_K2Node_ComponentBoundEvent_2_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__PlantBombWithClick_K2Node_ComponentBoundEvent_1_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function BombEquippable.BombEquippable_C.BndEvt__PlantBombWithClick_K2Node_ComponentBoundEvent_1_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__PlantBombWithClick_K2Node_ComponentBoundEvent_4_OnStateExitSignature__DelegateSignature(struct UScriptStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function BombEquippable.BombEquippable_C.BndEvt__PlantBombWithClick_K2Node_ComponentBoundEvent_4_OnStateExitSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ClientItemEquipped(); // Function BombEquippable.BombEquippable_C.ClientItemEquipped // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void AuthOnEquipped(); // Function BombEquippable.BombEquippable_C.AuthOnEquipped // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void MulticastPlayBombPickedUpAudio(struct AShooterCharacter* NewCharacter); // Function BombEquippable.BombEquippable_C.MulticastPlayBombPickedUpAudio // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBombDropped_Event(struct AShooterCharacter* OldBombHolder); // Function BombEquippable.BombEquippable_C.OnBombDropped_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBombPickedUp_Event(struct AShooterCharacter* NewBombHolder); // Function BombEquippable.BombEquippable_C.OnBombPickedUp_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_BombEquippable(int32_t EntryPoint); // Function BombEquippable.BombEquippable_C.ExecuteUbergraph_BombEquippable // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnBombDropped__DelegateSignature(struct AShooterCharacter* OldCharacter); // Function BombEquippable.BombEquippable_C.OnBombDropped__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBombPickedUp__DelegateSignature(struct AShooterCharacter* Character); // Function BombEquippable.BombEquippable_C.OnBombPickedUp__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

