// WidgetBlueprintGeneratedClass Widget_Voting_Base.Widget_Voting_Base_C
// Size: 0x400 (Inherited: 0x330)
struct UWidget_Voting_Base_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct TSoftClassPtr<UObject> Surrender vote ref; // 0x338(0x30)
	struct AGameplayVote* ActiveVote; // 0x368(0x08)
	struct TArray<struct UVoteParticipantWidget_C*> ParticipantWidgets; // 0x370(0x10)
	struct UVoteControllerComponent* VoteController; // 0x380(0x08)
	enum class Enum_Vote_DisplayMode VoteDisplayMode; // 0x388(0x01)
	char pad_389[0x7]; // 0x389(0x07)
	struct FMulticastInlineDelegate OnShowHideWidget; // 0x390(0x10)
	struct TSoftClassPtr<UObject> Surrender debug vote ref; // 0x3a0(0x30)
	struct TSoftClassPtr<UObject> Remake debug vote ref; // 0x3d0(0x30)

	void UpdateTimeRemaining(struct UProgressBar* ProgressBar); // Function Widget_Voting_Base.Widget_Voting_Base_C.UpdateTimeRemaining // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateNoOption(struct UGameplayVoteOptionBase_C* NoOption); // Function Widget_Voting_Base.Widget_Voting_Base_C.UpdateNoOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateYesOption(struct UGameplayVoteOptionBase_C* YesOption); // Function Widget_Voting_Base.Widget_Voting_Base_C.UpdateYesOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void NoOptionSelected(struct UGameplayVoteOptionBase_C* NoOption); // Function Widget_Voting_Base.Widget_Voting_Base_C.NoOptionSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void YesOptionSelected(struct UGameplayVoteOptionBase_C* YesOption); // Function Widget_Voting_Base.Widget_Voting_Base_C.YesOptionSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Up Widget Text for Vote(struct AGameplayVoteBase_C* ActiveVote); // Function Widget_Voting_Base.Widget_Voting_Base_C.Set Up Widget Text for Vote // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	double GetTimeRemainingPercent(); // Function Widget_Voting_Base.Widget_Voting_Base_C.GetTimeRemainingPercent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetActiveGameplayVoteBase(struct AGameplayVoteBase_C*& ActiveGameplayVoteBase); // Function Widget_Voting_Base.Widget_Voting_Base_C.GetActiveGameplayVoteBase // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void ShowWidgetOnDeath(struct AShooterCharacter* Character, struct UDamageResponse* Response); // Function Widget_Voting_Base.Widget_Voting_Base_C.ShowWidgetOnDeath // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetActiveVote(struct AGameplayVote*& ActiveVote); // Function Widget_Voting_Base.Widget_Voting_Base_C.GetActiveVote // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void RegisterParticipantArray(struct TArray<struct UVoteParticipantWidget_C*>& ParticipantWidgets); // Function Widget_Voting_Base.Widget_Voting_Base_C.RegisterParticipantArray // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowWidget(); // Function Widget_Voting_Base.Widget_Voting_Base_C.ShowWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HideWidget(); // Function Widget_Voting_Base.Widget_Voting_Base_C.HideWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool ShouldHandleVote(struct AGameplayVote* Vote); // Function Widget_Voting_Base.Widget_Voting_Base_C.ShouldHandleVote // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UpdateParticipantsForVoteOption(struct UGameplayVoteOptionComponent* VoteOption, int32_t VoteIndex, int32_t& CurrentIndexRef); // Function Widget_Voting_Base.Widget_Voting_Base_C.UpdateParticipantsForVoteOption // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindEventsToActiveVote(); // Function Widget_Voting_Base.Widget_Voting_Base_C.BindEventsToActiveVote // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TearDownActiveVote(); // Function Widget_Voting_Base.Widget_Voting_Base_C.TearDownActiveVote // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AttemptParticipateVote(int32_t Index); // Function Widget_Voting_Base.Widget_Voting_Base_C.AttemptParticipateVote // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToControllerEvents(); // Function Widget_Voting_Base.Widget_Voting_Base_C.BindToControllerEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateVoteOptions(); // Function Widget_Voting_Base.Widget_Voting_Base_C.UpdateVoteOptions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateVoteState(); // Function Widget_Voting_Base.Widget_Voting_Base_C.UpdateVoteState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetParticipantStates(); // Function Widget_Voting_Base.Widget_Voting_Base_C.SetParticipantStates // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnDebugQueueVoteCalled_Event_1(int32_t Index); // Function Widget_Voting_Base.Widget_Voting_Base_C.OnDebugQueueVoteCalled_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnOptionsUpdated(struct AGameplayVote* Vote, struct TArray<struct UGameplayVoteOptionComponent*>& OPTIONS); // Function Widget_Voting_Base.Widget_Voting_Base_C.OnOptionsUpdated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCurrentStateUpdated(struct AGameplayVote* Vote, enum class EVoteState NewState); // Function Widget_Voting_Base.Widget_Voting_Base_C.OnCurrentStateUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Clicked Yes(); // Function Widget_Voting_Base.Widget_Voting_Base_C.On Clicked Yes // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Clicked No(); // Function Widget_Voting_Base.Widget_Voting_Base_C.On Clicked No // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Active Vote Updated(struct AGameplayVote* Vote); // Function Widget_Voting_Base.Widget_Voting_Base_C.On Active Vote Updated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnDebugParticipateVoteCalled_Event_1(int32_t Index); // Function Widget_Voting_Base.Widget_Voting_Base_C.OnDebugParticipateVoteCalled_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function Widget_Voting_Base.Widget_Voting_Base_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ShowWidgetAfterDelay(double Delay); // Function Widget_Voting_Base.Widget_Voting_Base_C.ShowWidgetAfterDelay // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Widget_Voting_Base(int32_t EntryPoint); // Function Widget_Voting_Base.Widget_Voting_Base_C.ExecuteUbergraph_Widget_Voting_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnShowHideWidget__DelegateSignature(bool IsShowing); // Function Widget_Voting_Base.Widget_Voting_Base_C.OnShowHideWidget__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

