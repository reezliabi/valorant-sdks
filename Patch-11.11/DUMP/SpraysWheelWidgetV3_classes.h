// WidgetBlueprintGeneratedClass SpraysWheelWidgetV3.SpraysWheelWidgetV3_C
// Size: 0x3d0 (Inherited: 0x330)
struct USpraysWheelWidgetV3_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UWidgetAnimation* TimerRotation; // 0x338(0x08)
	struct UWidgetAnimation* ExpandInnerRing; // 0x340(0x08)
	struct UWidgetAnimation* FadeDown; // 0x348(0x08)
	struct UTextBlock* Cooldown; // 0x350(0x08)
	struct UTextBlock* CooldownText; // 0x358(0x08)
	struct UOverlay* CooldownTextBox; // 0x360(0x08)
	struct UInGameWheel_C* InnerWheel; // 0x368(0x08)
	struct UCanvasPanel* ParentCanvas; // 0x370(0x08)
	struct UImage* Timer; // 0x378(0x08)
	struct TArray<struct FRadialMenuSlotDescriptor> SlotDescriptors; // 0x380(0x10)
	struct USprayLoadoutComponent* SprayLoadoutComp; // 0x390(0x08)
	struct FTimerHandle CooldownTimer; // 0x398(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x3a0(0x08)
	struct TArray<struct UImage*> ContextualIcons; // 0x3a8(0x10)
	struct UMaterialInstanceDynamic* TimerMaterial; // 0x3b8(0x08)
	struct UCharacterSprayComponent_C* CharacterSprayComponent; // 0x3c0(0x08)
	struct AShooterPlayerState* Shooter Player State; // 0x3c8(0x08)

	void TryCast(int32_t SlotIndex, bool& Succeeded); // Function SpraysWheelWidgetV3.SpraysWheelWidgetV3_C.TryCast // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Initialize Inner Wheel(); // Function SpraysWheelWidgetV3.SpraysWheelWidgetV3_C.Initialize Inner Wheel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Initialize Components(); // Function SpraysWheelWidgetV3.SpraysWheelWidgetV3_C.Initialize Components // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Setup Character Spray Component(struct AShooterCharacter* Shooter Character); // Function SpraysWheelWidgetV3.SpraysWheelWidgetV3_C.Setup Character Spray Component // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Wheel Summon Key Released(); // Function SpraysWheelWidgetV3.SpraysWheelWidgetV3_C.On Wheel Summon Key Released // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Wheel Summon Key Held(); // Function SpraysWheelWidgetV3.SpraysWheelWidgetV3_C.On Wheel Summon Key Held // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Wheel Delay Setting Changed(enum class EAresFloatSettingName SettingName, float OldValue, float NewValue); // Function SpraysWheelWidgetV3.SpraysWheelWidgetV3_C.On Wheel Delay Setting Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Spray Failure(); // Function SpraysWheelWidgetV3.SpraysWheelWidgetV3_C.On Spray Failure // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Radial Menu Visibility Changed(enum class ESlateVisibility Visible); // Function SpraysWheelWidgetV3.SpraysWheelWidgetV3_C.On Radial Menu Visibility Changed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Update Cooldown Text(); // Function SpraysWheelWidgetV3.SpraysWheelWidgetV3_C.On Update Cooldown Text // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Cooldown Elapsed(); // Function SpraysWheelWidgetV3.SpraysWheelWidgetV3_C.On Cooldown Elapsed // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Spray Visual Cooldown(); // Function SpraysWheelWidgetV3.SpraysWheelWidgetV3_C.Set Spray Visual Cooldown // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Refresh Slots State(); // Function SpraysWheelWidgetV3.SpraysWheelWidgetV3_C.Refresh Slots State // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Rep Spray Loadout(); // Function SpraysWheelWidgetV3.SpraysWheelWidgetV3_C.On Rep Spray Loadout // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Initialize Spray Loadout(); // Function SpraysWheelWidgetV3.SpraysWheelWidgetV3_C.Initialize Spray Loadout // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Validate New Spray(bool& CanSpray); // Function SpraysWheelWidgetV3.SpraysWheelWidgetV3_C.Validate New Spray // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Use Totem(int32_t SelectedTotemIndex); // Function SpraysWheelWidgetV3.SpraysWheelWidgetV3_C.Use Totem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Cast Spray(int32_t SelectedSprayIndex, bool& Succeeded); // Function SpraysWheelWidgetV3.SpraysWheelWidgetV3_C.Cast Spray // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Generate Slot Descriptors(); // Function SpraysWheelWidgetV3.SpraysWheelWidgetV3_C.Generate Slot Descriptors // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function SpraysWheelWidgetV3.SpraysWheelWidgetV3_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function SpraysWheelWidgetV3.SpraysWheelWidgetV3_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnGamePhaseChanged(enum class EAresGamePhase NewGamePhase, int32_t RoundNumberEnded); // Function SpraysWheelWidgetV3.SpraysWheelWidgetV3_C.OnGamePhaseChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnQuickSprayPressed(); // Function SpraysWheelWidgetV3.SpraysWheelWidgetV3_C.OnQuickSprayPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function SpraysWheelWidgetV3.SpraysWheelWidgetV3_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void On AES Wheel Hold Enabled Changed(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function SpraysWheelWidgetV3.SpraysWheelWidgetV3_C.On AES Wheel Hold Enabled Changed // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAresPlayerStateChanged_Event(struct AAresPlayerStateBase* NewValue); // Function SpraysWheelWidgetV3.SpraysWheelWidgetV3_C.OnAresPlayerStateChanged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_SpraysWheelWidgetV3(int32_t EntryPoint); // Function SpraysWheelWidgetV3.SpraysWheelWidgetV3_C.ExecuteUbergraph_SpraysWheelWidgetV3 // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

