// BlueprintGeneratedClass Module1_BasicRecoilControlV2Mission.Module1_BasicRecoilControlV2Mission_C
// Size: 0x858 (Inherited: 0x5f8)
struct AModule1_BasicRecoilControlV2Mission_C : ABaseNPEMission_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5f8(0x08)
	struct UNPE_ObjectiveComponent_C* NPE_ListenToSova; // 0x600(0x08)
	struct UComp_PlayerCharacter_AuthAmmoReplenisher_C* Comp_PlayerCharacter_AuthAmmoReplenisher; // 0x608(0x08)
	struct UFollowDynamicPathObjectiveComponent_C* FollowDynamicPath_ToMoveInacc; // 0x610(0x08)
	struct UFollowDynamicPathObjectiveComponent_C* FollowDynamicPath_ToJumping; // 0x618(0x08)
	struct UBasicMovementIntroObjective_C* Movement_Jump; // 0x620(0x08)
	struct UShootTargetcontinuousObjective_C* ShootTarget_Continuous_SprayBullseye; // 0x628(0x08)
	struct UShootTargetcontinuousObjective_C* ShootTarget_Continuous_LearnSpray; // 0x630(0x08)
	struct FString SpawnPointName; // 0x638(0x10)
	struct TSoftClassPtr<UObject> DesiredPrimaryWeaponClass; // 0x648(0x30)
	struct ANPE_Doors_C* EndMissionDoor; // 0x678(0x08)
	struct FEffectID FXC_Id_LeftTriggerPrompt; // 0x680(0x20)
	struct FEffectID Jump Prompt; // 0x6a0(0x20)
	struct AAresEquippable* PrimaryWeapon; // 0x6c0(0x08)
	bool HasFailedLearnSprayOnce; // 0x6c8(0x01)
	bool HasFailedSprayBullseyeOnce; // 0x6c9(0x01)
	bool HasFailedOutOfSprayBullseye; // 0x6ca(0x01)
	bool HasCompletedLearnSpray; // 0x6cb(0x01)
	bool CanQueueFailLine; // 0x6cc(0x01)
	char pad_6CD[0x3]; // 0x6cd(0x03)
	int32_t ADSVOIndex; // 0x6d0(0x04)
	char pad_6D4[0x4]; // 0x6d4(0x04)
	struct TSoftObjectPtr<ASprayWall_BP_C> SprayWallActor; // 0x6d8(0x30)
	struct AEffectContainer* RecoilHelperFXC; // 0x708(0x08)
	struct FEffectID RecoilHelperEffectHandle; // 0x710(0x20)
	struct AEffectContainer* TargetObjectiveInactiveFXC; // 0x730(0x08)
	struct FEffectID TargetObjectiveInactiveEffectHandle; // 0x738(0x20)
	struct AModule1_StartModuleMission_C* Module1MissionReference; // 0x758(0x08)
	struct AActor* MovementInaccuracy; // 0x760(0x08)
	struct AAresEquippable* Primary; // 0x768(0x08)
	int32_t SprayBullseyeFailCount; // 0x770(0x04)
	char pad_774[0x4]; // 0x774(0x04)
	struct ANPE_Doors_C* ToDocksDoor; // 0x778(0x08)
	struct ATriggerVolume* JumpTriggerVolume1; // 0x780(0x08)
	double ObjectiveInactionReminderTimer; // 0x788(0x08)
	struct FTimerHandle ObjectiveReminderTimer; // 0x790(0x08)
	int32_t TMP_VOIndex; // 0x798(0x04)
	int32_t TMP_VOIndex_2; // 0x79c(0x04)
	int32_t TMP_VOIndex_3; // 0x7a0(0x04)
	int32_t TMP_VOIndex_4; // 0x7a4(0x04)
	int32_t TMP_VOIndex_5; // 0x7a8(0x04)
	int32_t TMP_VOIndex_6; // 0x7ac(0x04)
	struct FTimerHandle FocusPromptTimer; // 0x7b0(0x08)
	bool FocusPromptPrevEnabled; // 0x7b8(0x01)
	char pad_7B9[0x7]; // 0x7b9(0x07)
	struct FTimerHandle TEMP_MUTE_TIMER; // 0x7c0(0x08)
	struct FTimerHandle HardADSPromptTimer; // 0x7c8(0x08)
	bool HardADSReleasePromptPrevEnabled; // 0x7d0(0x01)
	char pad_7D1[0x7]; // 0x7d1(0x07)
	struct FEffectID ReleaseHardADSFXC; // 0x7d8(0x20)
	double TimeBeforeFailOutRecoil; // 0x7f8(0x08)
	double GameTimeRecoilStart; // 0x800(0x08)
	struct ATriggerVolume* ToJumpTrigger; // 0x808(0x08)
	struct FEffectID EarlyMoveToPing; // 0x810(0x20)
	struct UAkAudioEvent* BeginMissionVO; // 0x830(0x08)
	struct UAkAudioEvent* SprayBullseyeVO; // 0x838(0x08)
	struct UAkAudioEvent* ADSEarlyFail1; // 0x840(0x08)
	struct UAkAudioEvent* ADSEarlyFail2; // 0x848(0x08)
	struct UAkAudioEvent* ADSEarlyVO3; // 0x850(0x08)

	void EnableFocusModePromptCheck(); // Function Module1_BasicRecoilControlV2Mission.Module1_BasicRecoilControlV2Mission_C.EnableFocusModePromptCheck // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TransitionOutOfSprayBullseyeObjective(); // Function Module1_BasicRecoilControlV2Mission.Module1_BasicRecoilControlV2Mission_C.TransitionOutOfSprayBullseyeObjective // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TransitionToEndOfMission(); // Function Module1_BasicRecoilControlV2Mission.Module1_BasicRecoilControlV2Mission_C.TransitionToEndOfMission // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Calcuate Shoot Target Move Speed(double MaxSpeed, double MinSpeed, double TimeDelay, double& FinalSpeed); // Function Module1_BasicRecoilControlV2Mission.Module1_BasicRecoilControlV2Mission_C.Calcuate Shoot Target Move Speed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthEquipAndReloadPrimary(struct AAresEquippable* Primary); // Function Module1_BasicRecoilControlV2Mission.Module1_BasicRecoilControlV2Mission_C.AuthEquipAndReloadPrimary // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function Module1_BasicRecoilControlV2Mission.Module1_BasicRecoilControlV2Mission_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void Auth_BeginMissionEvent(struct AMission* ChangedMission, enum class EMissionStatus OldStatus, enum class EMissionStatus NewStatus); // Function Module1_BasicRecoilControlV2Mission.Module1_BasicRecoilControlV2Mission_C.Auth_BeginMissionEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Auth_StopShootingFail(); // Function Module1_BasicRecoilControlV2Mission.Module1_BasicRecoilControlV2Mission_C.Auth_StopShootingFail // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Auth_ADSFail(); // Function Module1_BasicRecoilControlV2Mission.Module1_BasicRecoilControlV2Mission_C.Auth_ADSFail // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Auth_OnVOLineEnd(struct UAkAudioEvent* Ak Audio Event); // Function Module1_BasicRecoilControlV2Mission.Module1_BasicRecoilControlV2Mission_C.Auth_OnVOLineEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Auth_ShouldADSFail(); // Function Module1_BasicRecoilControlV2Mission.Module1_BasicRecoilControlV2Mission_C.Auth_ShouldADSFail // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetTargetInactiveState(bool SetInactive); // Function Module1_BasicRecoilControlV2Mission.Module1_BasicRecoilControlV2Mission_C.SetTargetInactiveState // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Auth_ForceEquipPrimaryAndReload(); // Function Module1_BasicRecoilControlV2Mission.Module1_BasicRecoilControlV2Mission_C.Auth_ForceEquipPrimaryAndReload // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReloadWhenShootingStops(struct UScriptStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function Module1_BasicRecoilControlV2Mission.Module1_BasicRecoilControlV2Mission_C.ReloadWhenShootingStops // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Auth_OnLearnSprayStatusChange(struct UObjectiveComponent* ChangedObjective, enum class EObjectiveType Type, enum class EObjectiveStatus OldStatus, enum class EObjectiveStatus NewStatus, int32_t OldProgress, int32_t NewProgress); // Function Module1_BasicRecoilControlV2Mission.Module1_BasicRecoilControlV2Mission_C.Auth_OnLearnSprayStatusChange // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Auth_OnLearnSprayActivated(); // Function Module1_BasicRecoilControlV2Mission.Module1_BasicRecoilControlV2Mission_C.Auth_OnLearnSprayActivated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Auth_OnLearnSprayFailed(); // Function Module1_BasicRecoilControlV2Mission.Module1_BasicRecoilControlV2Mission_C.Auth_OnLearnSprayFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Auth_OnLearnSprayCompleted(); // Function Module1_BasicRecoilControlV2Mission.Module1_BasicRecoilControlV2Mission_C.Auth_OnLearnSprayCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Auth_OnSprayBullseyeStatusChange(struct UObjectiveComponent* ChangedObjective, enum class EObjectiveType Type, enum class EObjectiveStatus OldStatus, enum class EObjectiveStatus NewStatus, int32_t OldProgress, int32_t NewProgress); // Function Module1_BasicRecoilControlV2Mission.Module1_BasicRecoilControlV2Mission_C.Auth_OnSprayBullseyeStatusChange // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Auth_OnSprayBullseyeActivated(); // Function Module1_BasicRecoilControlV2Mission.Module1_BasicRecoilControlV2Mission_C.Auth_OnSprayBullseyeActivated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Auth_OnSprayBullseyeFailed(); // Function Module1_BasicRecoilControlV2Mission.Module1_BasicRecoilControlV2Mission_C.Auth_OnSprayBullseyeFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Auth_OnSprayBullseyeCompleted(); // Function Module1_BasicRecoilControlV2Mission.Module1_BasicRecoilControlV2Mission_C.Auth_OnSprayBullseyeCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Auth_OnFollowJumpPathCompleted(struct UObjectiveComponent* ChangedObjective, enum class EObjectiveType Type, enum class EObjectiveStatus OldStatus, enum class EObjectiveStatus NewStatus, int32_t OldProgress, int32_t NewProgress); // Function Module1_BasicRecoilControlV2Mission.Module1_BasicRecoilControlV2Mission_C.Auth_OnFollowJumpPathCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Auth_OnJumpCompleted(struct UObjectiveComponent* ChangedObjective, enum class EObjectiveType Type, enum class EObjectiveStatus OldStatus, enum class EObjectiveStatus NewStatus, int32_t OldProgress, int32_t NewProgress); // Function Module1_BasicRecoilControlV2Mission.Module1_BasicRecoilControlV2Mission_C.Auth_OnJumpCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Auth_OnFollowToInaccCompleted(struct UObjectiveComponent* ChangedObjective, enum class EObjectiveType Type, enum class EObjectiveStatus OldStatus, enum class EObjectiveStatus NewStatus, int32_t OldProgress, int32_t NewProgress); // Function Module1_BasicRecoilControlV2Mission.Module1_BasicRecoilControlV2Mission_C.Auth_OnFollowToInaccCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void JumpedOnceComplete(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function Module1_BasicRecoilControlV2Mission.Module1_BasicRecoilControlV2Mission_C.JumpedOnceComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RemindToJumpOnCrate(); // Function Module1_BasicRecoilControlV2Mission.Module1_BasicRecoilControlV2Mission_C.RemindToJumpOnCrate // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Auth_ToggleFOCUSPrompt(bool ZoomIn); // Function Module1_BasicRecoilControlV2Mission.Module1_BasicRecoilControlV2Mission_C.Auth_ToggleFOCUSPrompt // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Auth_StoppedFocusFail(); // Function Module1_BasicRecoilControlV2Mission.Module1_BasicRecoilControlV2Mission_C.Auth_StoppedFocusFail // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Auth_NoFocusFail(); // Function Module1_BasicRecoilControlV2Mission.Module1_BasicRecoilControlV2Mission_C.Auth_NoFocusFail // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void FocusModePromptCheck(); // Function Module1_BasicRecoilControlV2Mission.Module1_BasicRecoilControlV2Mission_C.FocusModePromptCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HardADSPromptCheckEvent(); // Function Module1_BasicRecoilControlV2Mission.Module1_BasicRecoilControlV2Mission_C.HardADSPromptCheckEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlaySprayBullseyeFailAndFocusVO(); // Function Module1_BasicRecoilControlV2Mission.Module1_BasicRecoilControlV2Mission_C.PlaySprayBullseyeFailAndFocusVO // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Module1_BasicRecoilControlV2Mission(int32_t EntryPoint); // Function Module1_BasicRecoilControlV2Mission.Module1_BasicRecoilControlV2Mission_C.ExecuteUbergraph_Module1_BasicRecoilControlV2Mission // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

