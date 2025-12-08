// WidgetBlueprintGeneratedClass MatchDetailsMVPScreenV2.MatchDetailsMVPScreenV2_C
// Size: 0x6d9 (Inherited: 0x328)
struct UMatchDetailsMVPScreenV2_C : UMatchDetailsMVPScreen_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* Intro; // 0x330(0x08)
	struct UImage* AllyMVP_Image_Shadow; // 0x338(0x08)
	struct UImage* AllyMVPCharacterImage; // 0x340(0x08)
	struct UMatchDetailsPlayerCard_C* AllyMVPPlayerCard; // 0x348(0x08)
	struct UTextBlock* AllyTeamScore; // 0x350(0x08)
	struct UAresWidgetSwitcher* BackgroundSwitcher; // 0x358(0x08)
	struct UImage* BGDefeat; // 0x360(0x08)
	struct UImage* BGVictory; // 0x368(0x08)
	struct UImage* BlackIntroFade; // 0x370(0x08)
	struct UScaleBox* DefeatTextScaleBox; // 0x378(0x08)
	struct UScaleBox* DrawTextScaleBox; // 0x380(0x08)
	struct UTextBlock* EnemyTeamScore; // 0x388(0x08)
	struct UWidgetSwitcher* GameOutcomeTextSwitcher; // 0x390(0x08)
	struct UWBP_MenuButtonPrimary_C* MenuButtonContinue; // 0x398(0x08)
	struct UImage* Player2_Image_Shadow; // 0x3a0(0x08)
	struct UImage* Player2CharacterImage; // 0x3a8(0x08)
	struct UMatchDetailsPlayerCard_C* Player2PlayerCard; // 0x3b0(0x08)
	struct UImage* Player3_Image_Shadow; // 0x3b8(0x08)
	struct UImage* Player3CharacterImage; // 0x3c0(0x08)
	struct UMatchDetailsPlayerCard_C* Player3PlayerCard; // 0x3c8(0x08)
	struct UImage* Player4_Image_Shadow; // 0x3d0(0x08)
	struct UImage* Player4CharacterImage; // 0x3d8(0x08)
	struct UMatchDetailsPlayerCard_C* Player4Playercard; // 0x3e0(0x08)
	struct UImage* Player5_Image_Shadow; // 0x3e8(0x08)
	struct UImage* Player5CharacterImage; // 0x3f0(0x08)
	struct UMatchDetailsPlayerCard_C* Player5PlayerCard; // 0x3f8(0x08)
	struct UTechDeco_C* TechDeco; // 0x400(0x08)
	struct UScaleBox* VictoryTextScaleBox; // 0x408(0x08)
	struct FName AllyTeamID; // 0x410(0x0c)
	char pad_41C[0x4]; // 0x41c(0x04)
	struct FProcessedMatchDetails ProcessedMatchDetails; // 0x420(0x278)
	struct TArray<struct UMatchDetailsPlayerCard_C*> PlayerCards; // 0x698(0x10)
	struct TArray<struct UImage*> PlayerCharacterImages; // 0x6a8(0x10)
	struct TArray<struct UImage*> PlayerShadowImages; // 0x6b8(0x10)
	struct FString MVPSubject; // 0x6c8(0x10)
	enum class EMVPCriteria MVPCriteria; // 0x6d8(0x01)

	void SequenceEvent__ENTRYPOINTMatchDetailsMVPScreenV2_4(); // Function MatchDetailsMVPScreenV2.MatchDetailsMVPScreenV2_C.SequenceEvent__ENTRYPOINTMatchDetailsMVPScreenV2_4 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent__ENTRYPOINTMatchDetailsMVPScreenV2_3(); // Function MatchDetailsMVPScreenV2.MatchDetailsMVPScreenV2_C.SequenceEvent__ENTRYPOINTMatchDetailsMVPScreenV2_3 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent__ENTRYPOINTMatchDetailsMVPScreenV2_2(); // Function MatchDetailsMVPScreenV2.MatchDetailsMVPScreenV2_C.SequenceEvent__ENTRYPOINTMatchDetailsMVPScreenV2_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent__ENTRYPOINTMatchDetailsMVPScreenV2_1(); // Function MatchDetailsMVPScreenV2.MatchDetailsMVPScreenV2_C.SequenceEvent__ENTRYPOINTMatchDetailsMVPScreenV2_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent__ENTRYPOINTMatchDetailsMVPScreenV2(); // Function MatchDetailsMVPScreenV2.MatchDetailsMVPScreenV2_C.SequenceEvent__ENTRYPOINTMatchDetailsMVPScreenV2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Trigger Scorecard Anim 1(struct UDelegateAnimationConductorNode* Node); // Function MatchDetailsMVPScreenV2.MatchDetailsMVPScreenV2_C.Trigger Scorecard Anim 1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTransitionWidgetVisibilityChanged(enum class ESlateVisibility NewVisibility); // Function MatchDetailsMVPScreenV2.MatchDetailsMVPScreenV2_C.OnTransitionWidgetVisibilityChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindAnimationToTransitionManager(); // Function MatchDetailsMVPScreenV2.MatchDetailsMVPScreenV2_C.BindAnimationToTransitionManager // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitData(struct FProcessedMatchDetails ProcessedMatchDetails, struct FString targetSubject); // Function MatchDetailsMVPScreenV2.MatchDetailsMVPScreenV2_C.InitData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetPlayerCardAndCharacterImage(struct FProcessedPlayerDetails ProcessedPlayerDetails, int32_t NumRounds, struct UMatchDetailsPlayerCard_C* PlayerCard, struct UImage* CharacterImage, struct UImage* ShadowImage, bool bIsMVP); // Function MatchDetailsMVPScreenV2.MatchDetailsMVPScreenV2_C.SetPlayerCardAndCharacterImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitMVP(); // Function MatchDetailsMVPScreenV2.MatchDetailsMVPScreenV2_C.InitMVP // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreatePlayerCardAndImageArrays(); // Function MatchDetailsMVPScreenV2.MatchDetailsMVPScreenV2_C.CreatePlayerCardAndImageArrays // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Init Game Outcome(enum class EMatchOutcome MatchOutcome); // Function MatchDetailsMVPScreenV2.MatchDetailsMVPScreenV2_C.Init Game Outcome // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitAllyTeamPlayers(); // Function MatchDetailsMVPScreenV2.MatchDetailsMVPScreenV2_C.InitAllyTeamPlayers // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SFX(); // Function MatchDetailsMVPScreenV2.MatchDetailsMVPScreenV2_C.SFX // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Play_ScoreCard_2(); // Function MatchDetailsMVPScreenV2.MatchDetailsMVPScreenV2_C.Play_ScoreCard_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Play_ScoreCard_3(); // Function MatchDetailsMVPScreenV2.MatchDetailsMVPScreenV2_C.Play_ScoreCard_3 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Play_ScoreCard_4(); // Function MatchDetailsMVPScreenV2.MatchDetailsMVPScreenV2_C.Play_ScoreCard_4 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Play_TechDeco_Intro(); // Function MatchDetailsMVPScreenV2.MatchDetailsMVPScreenV2_C.Play_TechDeco_Intro // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function MatchDetailsMVPScreenV2.MatchDetailsMVPScreenV2_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function MatchDetailsMVPScreenV2.MatchDetailsMVPScreenV2_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__MatchDetailsMVPScreenV2_MenuButtonContinue_K2Node_ComponentBoundEvent_0_OnUniversalButtonVoidEvent__DelegateSignature(); // Function MatchDetailsMVPScreenV2.MatchDetailsMVPScreenV2_C.BndEvt__MatchDetailsMVPScreenV2_MenuButtonContinue_K2Node_ComponentBoundEvent_0_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_MatchDetailsMVPScreenV2(int32_t EntryPoint); // Function MatchDetailsMVPScreenV2.MatchDetailsMVPScreenV2_C.ExecuteUbergraph_MatchDetailsMVPScreenV2 // (Final|UbergraphFunction) // @ game+0x19be2f0
};

