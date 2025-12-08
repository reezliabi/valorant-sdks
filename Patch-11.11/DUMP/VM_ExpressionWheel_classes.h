// BlueprintGeneratedClass VM_ExpressionWheel.VM_ExpressionWheel_C
// Size: 0x150 (Inherited: 0x90)
struct UVM_ExpressionWheel_C : UExpressionWheelViewModel {
	struct USprayLoadoutComponent* SprayLoadoutComponent; // 0x90(0x08)
	struct AShooterPlayerState* ShooterPlayerState; // 0x98(0x08)
	struct TArray<struct FRadialMenuSlotDescriptor> SlotDescriptors; // 0xa0(0x10)
	struct FMulticastInlineDelegate OnLoadoutUpdated; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnCooldownStarted; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnCooldownElapsed; // 0xd0(0x10)
	struct UCharacterSprayComponent* CharacterSprayComponent; // 0xe0(0x08)
	struct FMulticastInlineDelegate OnSprayFailure; // 0xe8(0x10)
	struct FTimerHandle CooldownTimer; // 0xf8(0x08)
	double CooldownTimerAmount; // 0x100(0x08)
	struct UWBP_Screen_ExpressionWheel_Base_C* InitializedView; // 0x108(0x08)
	enum class EAresGamePhase CurrentGamePhase; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct FMulticastInlineDelegate OnWheelVisibilityChanged; // 0x118(0x10)
	struct FMulticastInlineDelegate OnCenterSelectionChanged; // 0x128(0x10)
	struct TArray<struct UActorComponent*> Loadout Components; // 0x138(0x10)
	struct AShooterPlayerState* NewShooterPlayerState; // 0x148(0x08)

	void HandleSpawnedCharacterChanged(struct AShooterCharacter* NewValue); // Function VM_ExpressionWheel.VM_ExpressionWheel_C.HandleSpawnedCharacterChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CheckPlayerInfo(); // Function VM_ExpressionWheel.VM_ExpressionWheel_C.CheckPlayerInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetExpressionItemType(int32_t SlotIndex, enum class EAresExpressionType& ExpressionType); // Function VM_ExpressionWheel.VM_ExpressionWheel_C.GetExpressionItemType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GenerateExpressionSlotDescriptors(struct TArray<struct FRadialMenuSlotDescriptor>& SlotDescriptors); // Function VM_ExpressionWheel.VM_ExpressionWheel_C.GenerateExpressionSlotDescriptors // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleRadialPiecesCreatedAndEnabled(); // Function VM_ExpressionWheel.VM_ExpressionWheel_C.HandleRadialPiecesCreatedAndEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleCenterSelection(bool bIsCenterHighlighted); // Function VM_ExpressionWheel.VM_ExpressionWheel_C.HandleCenterSelection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleWheelVisibilityChanged(enum class ESlateVisibility InVisibility); // Function VM_ExpressionWheel.VM_ExpressionWheel_C.HandleWheelVisibilityChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleGamePhaseChanged(enum class EAresGamePhase NewGamePhase, int32_t RoundNumberEnded); // Function VM_ExpressionWheel.VM_ExpressionWheel_C.HandleGamePhaseChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleTryInspect(); // Function VM_ExpressionWheel.VM_ExpressionWheel_C.HandleTryInspect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetExpressionItemsEnabled(struct TArray<struct UWBP_Panel_ExpressionRadialItem_C*>& Items, bool Enable); // Function VM_ExpressionWheel.VM_ExpressionWheel_C.SetExpressionItemsEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleCooldownTimerElapsed(); // Function VM_ExpressionWheel.VM_ExpressionWheel_C.HandleCooldownTimerElapsed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleCooldownTimerStarted(); // Function VM_ExpressionWheel.VM_ExpressionWheel_C.HandleCooldownTimerStarted // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleTryCast(int32_t SelectedIndex, bool ShouldInspectTrigger); // Function VM_ExpressionWheel.VM_ExpressionWheel_C.HandleTryCast // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleOnSprayFailure(); // Function VM_ExpressionWheel.VM_ExpressionWheel_C.HandleOnSprayFailure // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitializeCharacterSprayComponent(struct AShooterCharacter* NewValue); // Function VM_ExpressionWheel.VM_ExpressionWheel_C.InitializeCharacterSprayComponent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GenerateSlotDescriptors(struct TArray<struct FRadialMenuSlotDescriptor>& SlotDescriptors); // Function VM_ExpressionWheel.VM_ExpressionWheel_C.GenerateSlotDescriptors // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EnableContextualTextBasedOnGamePhase(bool& Enable); // Function VM_ExpressionWheel.VM_ExpressionWheel_C.EnableContextualTextBasedOnGamePhase // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetRadialItems(struct TArray<struct UWBP_Panel_ExpressionRadialItem_C*>& ExpressionWheelRadialItems); // Function VM_ExpressionWheel.VM_ExpressionWheel_C.GetRadialItems // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void HandleExpressionLoadoutReplication(); // Function VM_ExpressionWheel.VM_ExpressionWheel_C.HandleExpressionLoadoutReplication // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitializeComponents(struct AAresPlayerStateBase* NewValue); // Function VM_ExpressionWheel.VM_ExpressionWheel_C.InitializeComponents // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PostInitializationExpressionWheel(struct UWBP_Screen_ExpressionWheel_Base_C* View); // Function VM_ExpressionWheel.VM_ExpressionWheel_C.PostInitializationExpressionWheel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCenterSelectionChanged__DelegateSignature(bool IsCenterHighlighted); // Function VM_ExpressionWheel.VM_ExpressionWheel_C.OnCenterSelectionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnWheelVisibilityChanged__DelegateSignature(enum class ESlateVisibility Visibility); // Function VM_ExpressionWheel.VM_ExpressionWheel_C.OnWheelVisibilityChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSprayFailure__DelegateSignature(); // Function VM_ExpressionWheel.VM_ExpressionWheel_C.OnSprayFailure__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCooldownElapsed__DelegateSignature(); // Function VM_ExpressionWheel.VM_ExpressionWheel_C.OnCooldownElapsed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCooldownStarted__DelegateSignature(); // Function VM_ExpressionWheel.VM_ExpressionWheel_C.OnCooldownStarted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnLoadoutUpdated__DelegateSignature(struct TArray<struct FRadialMenuSlotDescriptor>& SlotDescriptors); // Function VM_ExpressionWheel.VM_ExpressionWheel_C.OnLoadoutUpdated__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

