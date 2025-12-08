// WidgetBlueprintGeneratedClass FirstPersonHUD.FirstPersonHUD_C
// Size: 0x4a8 (Inherited: 0x330)
struct UFirstPersonHUD_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UWidgetAnimation* TopBlur; // 0x338(0x08)
	struct UWidgetAnimation* bottomBlur; // 0x340(0x08)
	struct UWidgetAnimation* rightBlur; // 0x348(0x08)
	struct UWidgetAnimation* leftBlur; // 0x350(0x08)
	struct UCanvasPanel* AbilityHUDParent; // 0x358(0x08)
	struct UActiveTimeoutWidget_C* ActiveTimeoutWidget; // 0x360(0x08)
	struct UBlindsDrivenTimer_C* AttributeDrivenTimer; // 0x368(0x08)
	struct UAwayPenaltyWidget_C* AwayPenaltyWidget; // 0x370(0x08)
	struct UImage* baseHit; // 0x378(0x08)
	struct UBlindedSourcePointsContainer_C* BlindedSourcePointsContainer; // 0x380(0x08)
	struct UBlindsDrivenMaterialOverlay_C* BlindsMaterialOverlay; // 0x388(0x08)
	struct UBuildNumberDisplay_C* BuildNumberDisplay; // 0x390(0x08)
	struct UDirectionalIndicatorHUDElement_C* DirectionalIndicatorHUDElement_19; // 0x398(0x08)
	struct UDirectionalIndicatorHUDThreat_C* DirectionalIndicatorHUDThreat; // 0x3a0(0x08)
	struct UCanvasPanel* DrawOverOverlayContainer; // 0x3a8(0x08)
	struct UHUDMoneyReadout_C* HUDMoneyReadout; // 0x3b0(0x08)
	struct UCanvasPanel* InnerContainer; // 0x3b8(0x08)
	struct UInvalidationBox* InvalidationBox_baseHit; // 0x3c0(0x08)
	struct UInvalidationBox* InvalidationBox_leftHit; // 0x3c8(0x08)
	struct UInvalidationBox* InvalidationBox_rightHit; // 0x3d0(0x08)
	struct UInvalidationBox* InvalidationBox_TopHit; // 0x3d8(0x08)
	struct UImage* LeftHit; // 0x3e0(0x08)
	struct UCanvasPanel* MissionModuleContainer; // 0x3e8(0x08)
	struct UObserverFollowTargetAnnouncement_C* ObserverFollowTargetAnnouncement; // 0x3f0(0x08)
	struct UCanvasPanel* OverlayContainer; // 0x3f8(0x08)
	struct UPlayerFacingPerfGraphGroup_C* PlayerFacingPerfGraphGroup; // 0x400(0x08)
	struct UOverlay* PlayerFacingPerfOverlay; // 0x408(0x08)
	struct UPlayerFacingPerfTextGroup_C* PlayerFacingPerfTextGroup; // 0x410(0x08)
	struct UImage* RightHit; // 0x418(0x08)
	struct USafeZone* SafeZone_2; // 0x420(0x08)
	struct UScreenTransitionOverlay_C* ScreenTransitionOverlay; // 0x428(0x08)
	struct UTeamVoiceActivity_C* TeamVoiceActivity_182; // 0x430(0x08)
	struct UImage* TopHit; // 0x438(0x08)
	struct UUsablesHUDElement_C* UsablesHUDElement_27; // 0x440(0x08)
	struct UWBP_HUDElement_VoiceInfo_C* WBP_HUDElement_VoiceInfo; // 0x448(0x08)
	struct UWBP_View_StanceIndicator_C* WBP_View_StanceIndicator; // 0x450(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x458(0x08)
	struct FVector Direction; // 0x460(0x18)
	struct FRotator ReverseDirectionRotator; // 0x478(0x18)
	struct UHorizontalBox* AbilityBoxBase_1; // 0x490(0x08)
	struct AShooterCharacter* DisplayedSpawnedCharacter; // 0x498(0x08)
	struct UCoordinatedShooterUIModel* ShooterUIModel; // 0x4a0(0x08)

	void Update Flash Background for Platform(); // Function FirstPersonHUD.FirstPersonHUD_C.Update Flash Background for Platform // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HideCrosshairSettingChanged(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function FirstPersonHUD.FirstPersonHUD_C.HideCrosshairSettingChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HideUISettingChanged(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function FirstPersonHUD.FirstPersonHUD_C.HideUISettingChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SpawnedCharacterChanged_Event(struct AShooterCharacter* New Value); // Function FirstPersonHUD.FirstPersonHUD_C.SpawnedCharacterChanged_Event // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InDangerChanged(struct UAresAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute& Attribute, float OldValue, float NewValue); // Function FirstPersonHUD.FirstPersonHUD_C.InDangerChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCinematicModeUpdated_Event(); // Function FirstPersonHUD.FirstPersonHUD_C.OnCinematicModeUpdated_Event // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnDamaged_Event(struct UDamageResponse* Response); // Function FirstPersonHUD.FirstPersonHUD_C.OnDamaged_Event // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAliveStateChanged_Event(bool NewValue); // Function FirstPersonHUD.FirstPersonHUD_C.OnAliveStateChanged_Event // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetHUDModels(); // Function FirstPersonHUD.FirstPersonHUD_C.SetHUDModels // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EnableStanceIndicatorForGamepad(); // Function FirstPersonHUD.FirstPersonHUD_C.EnableStanceIndicatorForGamepad // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AdjustLayoutForDevice(); // Function FirstPersonHUD.FirstPersonHUD_C.AdjustLayoutForDevice // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddWidgetToMissionModuleContainer(struct UUserWidget* WidgetClass); // Function FirstPersonHUD.FirstPersonHUD_C.AddWidgetToMissionModuleContainer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleCustomDamageFeedback(struct UDmgType_Base_C* DmgClass); // Function FirstPersonHUD.FirstPersonHUD_C.HandleCustomDamageFeedback // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void stopOnHitAnimations(); // Function FirstPersonHUD.FirstPersonHUD_C.stopOnHitAnimations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandlePlayerViewTargetModeChanged(enum class EAresPlayerViewTargetMode NewPlayerViewTargetMode); // Function FirstPersonHUD.FirstPersonHUD_C.HandlePlayerViewTargetModeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerViewTargetModeChanged(enum class EAresPlayerViewTargetMode NewPlayerViewTargetMode); // Function FirstPersonHUD.FirstPersonHUD_C.OnPlayerViewTargetModeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetCoordinatedShooterUIModel(struct UCoordinatedShooterUIModel* CoordinatedShooterUIModel); // Function FirstPersonHUD.FirstPersonHUD_C.SetCoordinatedShooterUIModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnShooterHUDReady(struct AShooterHUD* ShooterHUD); // Function FirstPersonHUD.FirstPersonHUD_C.OnShooterHUDReady // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function FirstPersonHUD.FirstPersonHUD_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnViewTargetChanged(struct AActor* NewViewTarget); // Function FirstPersonHUD.FirstPersonHUD_C.OnViewTargetChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function FirstPersonHUD.FirstPersonHUD_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_FirstPersonHUD(int32_t EntryPoint); // Function FirstPersonHUD.FirstPersonHUD_C.ExecuteUbergraph_FirstPersonHUD // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

