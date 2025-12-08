// WidgetBlueprintGeneratedClass NPE_MissionInfo.NPE_MissionInfo_C
// Size: 0x430 (Inherited: 0x341)
struct UNPE_MissionInfo_C : UMissionInfo_HUDElement_C {
	char pad_341[0x7]; // 0x341(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UWidgetAnimation* MissionFail; // 0x350(0x08)
	struct UWidgetAnimation* MissionOutro; // 0x358(0x08)
	struct UWidgetAnimation* MissionIntro; // 0x360(0x08)
	struct UWidgetAnimation* ObjectiveMissionCompleted; // 0x368(0x08)
	struct UWidgetAnimation* ProgressFill; // 0x370(0x08)
	struct UWidgetAnimation* failure_bg_anim; // 0x378(0x08)
	struct UWidgetAnimation* success_bg_anim; // 0x380(0x08)
	struct UWidgetAnimation* ObjectiveIntro; // 0x388(0x08)
	struct UImage* BGFULL; // 0x390(0x08)
	struct UImage* FailureBackground; // 0x398(0x08)
	struct UImage* MissionProgressBar; // 0x3a0(0x08)
	struct UTextBlock* MissionTitleTextBox; // 0x3a8(0x08)
	struct UNPE_MissionObjective_C* NPE_MissionObjective; // 0x3b0(0x08)
	struct UTextBlock* ObjectiveNumberTextBox; // 0x3b8(0x08)
	struct UImage* SuccessBackground; // 0x3c0(0x08)
	struct AMission* CurrentMission; // 0x3c8(0x08)
	struct UMaterialInstanceDynamic* ProgressBar_MI; // 0x3d0(0x08)
	bool bIsProgressAnimPlaying; // 0x3d8(0x01)
	bool AdditionalAnimQueued; // 0x3d9(0x01)
	char pad_3DA[0x6]; // 0x3da(0x06)
	double ProgressAnimLerp; // 0x3e0(0x08)
	double CurrentMissionProgressPercent; // 0x3e8(0x08)
	double NewMissionProgressPercent; // 0x3f0(0x08)
	int32_t CurrentObjectiveNumber; // 0x3f8(0x04)
	int32_t TotalObjectiveNumber; // 0x3fc(0x04)
	struct TArray<struct UObjectiveComponent*> ObjectiveOrderList; // 0x400(0x10)
	struct UNPE_ObjectiveComponent_C* CurrentObjective; // 0x410(0x08)
	enum class NPEMissionHUDStates_Enum CurrentState; // 0x418(0x01)
	char pad_419[0x7]; // 0x419(0x07)
	struct TArray<struct FString> RightAlignLanguages; // 0x420(0x10)

	void SequenceEvent__ENTRYPOINTNPE_MissionInfo(); // Function NPE_MissionInfo.NPE_MissionInfo_C.SequenceEvent__ENTRYPOINTNPE_MissionInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HasValidMission(bool& bHasValidMission); // Function NPE_MissionInfo.NPE_MissionInfo_C.HasValidMission // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	double GetMissionProgressPercent(); // Function NPE_MissionInfo.NPE_MissionInfo_C.GetMissionProgressPercent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetFailAnimation(struct UWidgetAnimation*& FailAnim); // Function NPE_MissionInfo.NPE_MissionInfo_C.GetFailAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetSuccessAnimation(struct UWidgetAnimation*& SuccessAnim); // Function NPE_MissionInfo.NPE_MissionInfo_C.GetSuccessAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Update to New Mission(struct AMission* Mission); // Function NPE_MissionInfo.NPE_MissionInfo_C.Update to New Mission // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent_1(); // Function NPE_MissionInfo.NPE_MissionInfo_C.SequenceEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SwitchToNewMission(); // Function NPE_MissionInfo.NPE_MissionInfo_C.SwitchToNewMission // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMissionReset(struct AMission* ChangedMission); // Function NPE_MissionInfo.NPE_MissionInfo_C.OnMissionReset // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnObjectiveStatusChanged(struct UObjectiveComponent* Objective, enum class EObjectiveType Type, enum class EObjectiveStatus OldStatus, enum class EObjectiveStatus NewStatus); // Function NPE_MissionInfo.NPE_MissionInfo_C.OnObjectiveStatusChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMissionStatusChanged(struct AMission* Mission, enum class EMissionStatus OldStatus, enum class EMissionStatus NewStatus); // Function NPE_MissionInfo.NPE_MissionInfo_C.OnMissionStatusChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function NPE_MissionInfo.NPE_MissionInfo_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateMissionProgress(); // Function NPE_MissionInfo.NPE_MissionInfo_C.UpdateMissionProgress // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void FirstPlayComplete(); // Function NPE_MissionInfo.NPE_MissionInfo_C.FirstPlayComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function NPE_MissionInfo.NPE_MissionInfo_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void UpdateObjectiveNumber(); // Function NPE_MissionInfo.NPE_MissionInfo_C.UpdateObjectiveNumber // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function NPE_MissionInfo.NPE_MissionInfo_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnMissionOutroComplete(); // Function NPE_MissionInfo.NPE_MissionInfo_C.OnMissionOutroComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateObjectiveInfo(); // Function NPE_MissionInfo.NPE_MissionInfo_C.UpdateObjectiveInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMissionIntroComplete(); // Function NPE_MissionInfo.NPE_MissionInfo_C.OnMissionIntroComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void FinalFillFinished(); // Function NPE_MissionInfo.NPE_MissionInfo_C.FinalFillFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RecordObjective(); // Function NPE_MissionInfo.NPE_MissionInfo_C.RecordObjective // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ForceUpdateMissionProgress(); // Function NPE_MissionInfo.NPE_MissionInfo_C.ForceUpdateMissionProgress // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PerformNewOutroCall(); // Function NPE_MissionInfo.NPE_MissionInfo_C.PerformNewOutroCall // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateActionPromptText(); // Function NPE_MissionInfo.NPE_MissionInfo_C.UpdateActionPromptText // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_NPE_MissionInfo(int32_t EntryPoint); // Function NPE_MissionInfo.NPE_MissionInfo_C.ExecuteUbergraph_NPE_MissionInfo // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

