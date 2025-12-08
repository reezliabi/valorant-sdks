// WidgetBlueprintGeneratedClass Widget_Voting_FullScreen.Widget_Voting_FullScreen_C
// Size: 0x520 (Inherited: 0x400)
struct UWidget_Voting_FullScreen_C : UWidget_Voting_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UWidgetAnimation* TransitionOffScreen; // 0x408(0x08)
	struct UWidgetAnimation* VoteFailed; // 0x410(0x08)
	struct UWidgetAnimation* VotePassed_fixed; // 0x418(0x08)
	struct UWidgetAnimation* VoteActive; // 0x420(0x08)
	struct UWidgetAnimation* AnimReset; // 0x428(0x08)
	struct UTextBlock* BannerText; // 0x430(0x08)
	struct UTextBlock* DescriptionText; // 0x438(0x08)
	struct UInvalidationBox* DrawMatchInvalidationBox; // 0x440(0x08)
	struct UImage* Image; // 0x448(0x08)
	struct UImage* Image_216; // 0x450(0x08)
	struct UImage* Image_283; // 0x458(0x08)
	struct UImage* Image_463; // 0x460(0x08)
	struct UImage* NoOptionCheck; // 0x468(0x08)
	struct UTextBlock* NoOptionText; // 0x470(0x08)
	struct UTextBlock* NumYesVotesNeeded; // 0x478(0x08)
	struct UVoteParticipantWidget_C* Participant1; // 0x480(0x08)
	struct UVoteParticipantWidget_C* Participant1_2; // 0x488(0x08)
	struct UVoteParticipantWidget_C* Participant2; // 0x490(0x08)
	struct UVoteParticipantWidget_C* Participant2_2; // 0x498(0x08)
	struct UVoteParticipantWidget_C* Participant3; // 0x4a0(0x08)
	struct UVoteParticipantWidget_C* Participant3_2; // 0x4a8(0x08)
	struct UVoteParticipantWidget_C* Participant4; // 0x4b0(0x08)
	struct UVoteParticipantWidget_C* Participant4_2; // 0x4b8(0x08)
	struct UVoteParticipantWidget_C* Participant5; // 0x4c0(0x08)
	struct UVoteParticipantWidget_C* Participant5_2; // 0x4c8(0x08)
	struct UHorizontalBox* Participants; // 0x4d0(0x08)
	struct UTextBlock* ResultText; // 0x4d8(0x08)
	struct UHorizontalBox* Team2Elements; // 0x4e0(0x08)
	struct UTelemetryButton* VoteNoButton; // 0x4e8(0x08)
	struct UHorizontalBox* VoteOptionButtons; // 0x4f0(0x08)
	struct UProgressBar* VoteTimeRemaining; // 0x4f8(0x08)
	struct UTextBlock* VoteTitle; // 0x500(0x08)
	struct UTelemetryButton* VoteYesButton; // 0x508(0x08)
	struct UImage* YesOptionCheck; // 0x510(0x08)
	struct UTextBlock* YesOptionText; // 0x518(0x08)

	void SequenceEvent__ENTRYPOINTWidget_Voting_FullScreen(); // Function Widget_Voting_FullScreen.Widget_Voting_FullScreen_C.SequenceEvent__ENTRYPOINTWidget_Voting_FullScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void NoOptionSelected(struct UGameplayVoteOptionBase_C* NoOption); // Function Widget_Voting_FullScreen.Widget_Voting_FullScreen_C.NoOptionSelected // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void YesOptionSelected(struct UGameplayVoteOptionBase_C* YesOption); // Function Widget_Voting_FullScreen.Widget_Voting_FullScreen_C.YesOptionSelected // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateNoOption(struct UGameplayVoteOptionBase_C* NoOption); // Function Widget_Voting_FullScreen.Widget_Voting_FullScreen_C.UpdateNoOption // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateYesOption(struct UGameplayVoteOptionBase_C* YesOption); // Function Widget_Voting_FullScreen.Widget_Voting_FullScreen_C.UpdateYesOption // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Up Widget Text for Vote(struct AGameplayVoteBase_C* ActiveVote); // Function Widget_Voting_FullScreen.Widget_Voting_FullScreen_C.Set Up Widget Text for Vote // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetUpParticipantsArray(); // Function Widget_Voting_FullScreen.Widget_Voting_FullScreen_C.SetUpParticipantsArray // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AudioEvent(); // Function Widget_Voting_FullScreen.Widget_Voting_FullScreen_C.AudioEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Active Vote Updated(struct AGameplayVote* Vote); // Function Widget_Voting_FullScreen.Widget_Voting_FullScreen_C.On Active Vote Updated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__VoteYesButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature(); // Function Widget_Voting_FullScreen.Widget_Voting_FullScreen_C.BndEvt__VoteYesButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__VoteNoButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // Function Widget_Voting_FullScreen.Widget_Voting_FullScreen_C.BndEvt__VoteNoButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void HideAndResetWidget(); // Function Widget_Voting_FullScreen.Widget_Voting_FullScreen_C.HideAndResetWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function Widget_Voting_FullScreen.Widget_Voting_FullScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function Widget_Voting_FullScreen.Widget_Voting_FullScreen_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void HideWidget(); // Function Widget_Voting_FullScreen.Widget_Voting_FullScreen_C.HideWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowWidget(); // Function Widget_Voting_FullScreen.Widget_Voting_FullScreen_C.ShowWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function Widget_Voting_FullScreen.Widget_Voting_FullScreen_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Widget_Voting_FullScreen(int32_t EntryPoint); // Function Widget_Voting_FullScreen.Widget_Voting_FullScreen_C.ExecuteUbergraph_Widget_Voting_FullScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

