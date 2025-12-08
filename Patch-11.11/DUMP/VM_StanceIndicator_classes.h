// BlueprintGeneratedClass VM_StanceIndicator.VM_StanceIndicator_C
// Size: 0xb0 (Inherited: 0x38)
struct UVM_StanceIndicator_C : UObjectWithWorldContext {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x38(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x40(0x08)
	struct FMulticastInlineDelegate OnStanceChanged; // 0x48(0x10)
	bool bIsCrouching; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct UStanceIndicatorNoiseVisualizationComponent_C* CachedAudioVisComponent; // 0x60(0x08)
	struct FMulticastInlineDelegate OnShowNoiseIndicatorChanged; // 0x68(0x10)
	bool bEnabled; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FMulticastInlineDelegate OnWidgetVisibilityChanged; // 0x80(0x10)
	enum class ESlateVisibility WidgetVisibility; // 0x90(0x01)
	bool bShowNoiseIndicator; // 0x91(0x01)
	bool bShouldDisplayStanceIndicator; // 0x92(0x01)
	char pad_93[0x5]; // 0x93(0x05)
	struct FMulticastInlineDelegate RebroadcastSoundPlayed; // 0x98(0x10)
	struct AShooterCharacter* CachedShooterCharacter; // 0xa8(0x08)

	void HandleCharacterChange(struct AShooterCharacter* NewCharacter); // Function VM_StanceIndicator.VM_StanceIndicator_C.HandleCharacterChange // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On View Target Mode Changed(enum class EAresPlayerViewTargetMode NewPlayerViewTargetMode); // Function VM_StanceIndicator.VM_StanceIndicator_C.On View Target Mode Changed // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToPlayerController(); // Function VM_StanceIndicator.VM_StanceIndicator_C.BindToPlayerController // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetStance(bool bIsCrouching); // Function VM_StanceIndicator.VM_StanceIndicator_C.SetStance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetStance(bool& bIsCrouching); // Function VM_StanceIndicator.VM_StanceIndicator_C.GetStance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetShowNoiseIndicator(bool& bShowNoiseIndicator); // Function VM_StanceIndicator.VM_StanceIndicator_C.GetShowNoiseIndicator // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetShowNoiseIndicator(bool Value); // Function VM_StanceIndicator.VM_StanceIndicator_C.SetShowNoiseIndicator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetWidgetVisibility(enum class ESlateVisibility Value); // Function VM_StanceIndicator.VM_StanceIndicator_C.SetWidgetVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetWidgetVisibility(enum class ESlateVisibility& WidgetVisibility); // Function VM_StanceIndicator.VM_StanceIndicator_C.GetWidgetVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UpdateWidgetVisibility(); // Function VM_StanceIndicator.VM_StanceIndicator_C.UpdateWidgetVisibility // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToHUDModel(bool Bind); // Function VM_StanceIndicator.VM_StanceIndicator_C.BindToHUDModel // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAudioVisualizationStateChanged(bool IsVisualizingAudio); // Function VM_StanceIndicator.VM_StanceIndicator_C.OnAudioVisualizationStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSpawnedCharacterChanged(struct AShooterCharacter* Character); // Function VM_StanceIndicator.VM_StanceIndicator_C.OnSpawnedCharacterChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCharacterPostureChanged(enum class EAresCharacterPosture NewPosture); // Function VM_StanceIndicator.VM_StanceIndicator_C.OnCharacterPostureChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEnabledStateChanged(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function VM_StanceIndicator.VM_StanceIndicator_C.OnEnabledStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Initialize(struct UCoordinatedHUDModel* HUDModel); // Function VM_StanceIndicator.VM_StanceIndicator_C.Initialize // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnExternalComponentAdded(struct AShooterCharacter* Character, struct UActorComponent* Component); // Function VM_StanceIndicator.VM_StanceIndicator_C.OnExternalComponentAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSoundPlayed(); // Function VM_StanceIndicator.VM_StanceIndicator_C.OnSoundPlayed // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnViewTargetChanged(struct AActor* NewViewTarget); // Function VM_StanceIndicator.VM_StanceIndicator_C.OnViewTargetChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_VM_StanceIndicator(int32_t EntryPoint); // Function VM_StanceIndicator.VM_StanceIndicator_C.ExecuteUbergraph_VM_StanceIndicator // (Final|UbergraphFunction) // @ game+0x19be2f0
	void RebroadcastSoundPlayed__DelegateSignature(); // Function VM_StanceIndicator.VM_StanceIndicator_C.RebroadcastSoundPlayed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnWidgetVisibilityChanged__DelegateSignature(enum class ESlateVisibility NewVisibility); // Function VM_StanceIndicator.VM_StanceIndicator_C.OnWidgetVisibilityChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnShowNoiseIndicatorChanged__DelegateSignature(bool bShow); // Function VM_StanceIndicator.VM_StanceIndicator_C.OnShowNoiseIndicatorChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnStanceChanged__DelegateSignature(bool bIsCrouching); // Function VM_StanceIndicator.VM_StanceIndicator_C.OnStanceChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

