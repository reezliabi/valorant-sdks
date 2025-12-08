// BlueprintGeneratedClass FXC_BountyHunter_X_Deafen.FXC_BountyHunter_X_Deafen_C
// Size: 0x7b9 (Inherited: 0x6a1)
struct AFXC_BountyHunter_X_Deafen_C : AFXC_Global_Nearsight_C {
	char pad_6A1[0x7]; // 0x6a1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6a8(0x08)
	struct UComp_FXC_Deafen_C* Comp_FXC_Deafen; // 0x6b0(0x08)
	struct UComp_FXC_AudioBasic_C* Comp_FXC_AudioBasic; // 0x6b8(0x08)
	struct UComp_FXC_Audio_Loop_C* Comp_FXC_AudioLoop_Ambi; // 0x6c0(0x08)
	struct UParticleSystemComponent* 3P_Effect; // 0x6c8(0x08)
	struct UComp_FXC_SpawnParticle_ShooterCharacter_C* Comp_FXC_SpawnParticle_ShooterCharacter1P; // 0x6d0(0x08)
	float Timeline_1_Lerp_C97A80F74FEAAE0664BF3AA50BA5A60C; // 0x6d8(0x04)
	enum class ETimelineDirection Timeline_1__Direction_C97A80F74FEAAE0664BF3AA50BA5A60C; // 0x6dc(0x01)
	char pad_6DD[0x3]; // 0x6dd(0x03)
	struct UTimelineComponent* Timeline_2; // 0x6e0(0x08)
	float VisibilityDistanceFade_AlphaFade_D5666B884D97AF48BC08E7AE8C5626D1; // 0x6e8(0x04)
	float VisibilityDistanceFade_HeadAlpha_D5666B884D97AF48BC08E7AE8C5626D1; // 0x6ec(0x04)
	enum class ETimelineDirection VisibilityDistanceFade__Direction_D5666B884D97AF48BC08E7AE8C5626D1; // 0x6f0(0x01)
	char pad_6F1[0x7]; // 0x6f1(0x07)
	struct UTimelineComponent* VisibilityDistanceFade; // 0x6f8(0x08)
	float Timeline_0_AlphaFade_229E36804338AF091B87AAB98EE599C7; // 0x700(0x04)
	float Timeline_0_HeadAlpha_229E36804338AF091B87AAB98EE599C7; // 0x704(0x04)
	enum class ETimelineDirection Timeline_0__Direction_229E36804338AF091B87AAB98EE599C7; // 0x708(0x01)
	char pad_709[0x7]; // 0x709(0x07)
	struct UTimelineComponent* Timeline_1; // 0x710(0x08)
	float HudTimeline_Alpha_Dissolve_AD71FA40499970DA9043BBBFD117638E; // 0x718(0x04)
	enum class ETimelineDirection HudTimeline__Direction_AD71FA40499970DA9043BBBFD117638E; // 0x71c(0x01)
	char pad_71D[0x3]; // 0x71d(0x03)
	struct UTimelineComponent* HudTimeline; // 0x720(0x08)
	float NearsightTimeline_Scale_823297854AE001116395A09A8825E21A; // 0x728(0x04)
	enum class ETimelineDirection NearsightTimeline__Direction_823297854AE001116395A09A8825E21A; // 0x72c(0x01)
	char pad_72D[0x3]; // 0x72d(0x03)
	struct UTimelineComponent* NearsightTimeline; // 0x730(0x08)
	double NearsightFadeInDuration; // 0x738(0x08)
	double NearsightFadeOutDuration; // 0x740(0x08)
	struct AShooterCharacter* TargetShooterCharacter; // 0x748(0x08)
	double HudFadeInDuration; // 0x750(0x08)
	double HudFadeOutDuration; // 0x758(0x08)
	bool IsFadingOut; // 0x760(0x01)
	char pad_761[0x7]; // 0x761(0x07)
	double NearsightedParticleAlpha; // 0x768(0x08)
	bool FXC_Stopped; // 0x770(0x01)
	bool LowPassOn; // 0x771(0x01)
	char pad_772[0x6]; // 0x772(0x06)
	double FinalOccluderRadius; // 0x778(0x08)
	double FinalFadeRadius; // 0x780(0x08)
	struct UParticleSystem* Ally3P; // 0x788(0x08)
	struct UParticleSystem* Enemy3P; // 0x790(0x08)
	bool WasInVisibilityDistanceLastFrame; // 0x798(0x01)
	char pad_799[0x7]; // 0x799(0x07)
	double StartHeadFadeLerp; // 0x7a0(0x08)
	double StartAlphaFadeLerp; // 0x7a8(0x08)
	double VisibilityDistanceSquared; // 0x7b0(0x08)
	bool EffectStopped; // 0x7b8(0x01)

	void LocalIsInVisiblityRange(bool& NewParam); // Function FXC_BountyHunter_X_Deafen.FXC_BountyHunter_X_Deafen_C.LocalIsInVisiblityRange // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UpdateParticlePerspective(); // Function FXC_BountyHunter_X_Deafen.FXC_BountyHunter_X_Deafen_C.UpdateParticlePerspective // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetupParticleAlliance(); // Function FXC_BountyHunter_X_Deafen.FXC_BountyHunter_X_Deafen_C.SetupParticleAlliance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateLowPass(bool TurnOn); // Function FXC_BountyHunter_X_Deafen.FXC_BountyHunter_X_Deafen_C.UpdateLowPass // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetScaledRadius(double Scale, double& OccluderRadius, double& FadeRadius); // Function FXC_BountyHunter_X_Deafen.FXC_BountyHunter_X_Deafen_C.GetScaledRadius // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void NearsightTimeline__FinishedFunc(); // Function FXC_BountyHunter_X_Deafen.FXC_BountyHunter_X_Deafen_C.NearsightTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x19be2f0
	void NearsightTimeline__UpdateFunc(); // Function FXC_BountyHunter_X_Deafen.FXC_BountyHunter_X_Deafen_C.NearsightTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x19be2f0
	void HudTimeline__FinishedFunc(); // Function FXC_BountyHunter_X_Deafen.FXC_BountyHunter_X_Deafen_C.HudTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x19be2f0
	void HudTimeline__UpdateFunc(); // Function FXC_BountyHunter_X_Deafen.FXC_BountyHunter_X_Deafen_C.HudTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x19be2f0
	void Timeline_0__FinishedFunc(); // Function FXC_BountyHunter_X_Deafen.FXC_BountyHunter_X_Deafen_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x19be2f0
	void Timeline_0__UpdateFunc(); // Function FXC_BountyHunter_X_Deafen.FXC_BountyHunter_X_Deafen_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x19be2f0
	void VisibilityDistanceFade__FinishedFunc(); // Function FXC_BountyHunter_X_Deafen.FXC_BountyHunter_X_Deafen_C.VisibilityDistanceFade__FinishedFunc // (BlueprintEvent) // @ game+0x19be2f0
	void VisibilityDistanceFade__UpdateFunc(); // Function FXC_BountyHunter_X_Deafen.FXC_BountyHunter_X_Deafen_C.VisibilityDistanceFade__UpdateFunc // (BlueprintEvent) // @ game+0x19be2f0
	void Timeline_1__FinishedFunc(); // Function FXC_BountyHunter_X_Deafen.FXC_BountyHunter_X_Deafen_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x19be2f0
	void Timeline_1__UpdateFunc(); // Function FXC_BountyHunter_X_Deafen.FXC_BountyHunter_X_Deafen_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x19be2f0
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_BountyHunter_X_Deafen.FXC_BountyHunter_X_Deafen_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_BountyHunter_X_Deafen.FXC_BountyHunter_X_Deafen_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Nearsight Fade Out(); // Function FXC_BountyHunter_X_Deafen.FXC_BountyHunter_X_Deafen_C.Nearsight Fade Out // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Reverse Nearsight Fade(); // Function FXC_BountyHunter_X_Deafen.FXC_BountyHunter_X_Deafen_C.Reverse Nearsight Fade // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Nearsight Fade In(); // Function FXC_BountyHunter_X_Deafen.FXC_BountyHunter_X_Deafen_C.Nearsight Fade In // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Hud Fade Out(); // Function FXC_BountyHunter_X_Deafen.FXC_BountyHunter_X_Deafen_C.Hud Fade Out // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Reverse Hud Fade(); // Function FXC_BountyHunter_X_Deafen.FXC_BountyHunter_X_Deafen_C.Reverse Hud Fade // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Hud Fade In(); // Function FXC_BountyHunter_X_Deafen.FXC_BountyHunter_X_Deafen_C.Hud Fade In // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function FXC_BountyHunter_X_Deafen.FXC_BountyHunter_X_Deafen_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveTick(float DeltaSeconds); // Function FXC_BountyHunter_X_Deafen.FXC_BountyHunter_X_Deafen_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void StopVisibilityFade(); // Function FXC_BountyHunter_X_Deafen.FXC_BountyHunter_X_Deafen_C.StopVisibilityFade // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_FXC_BountyHunter_X_Deafen(int32_t EntryPoint); // Function FXC_BountyHunter_X_Deafen.FXC_BountyHunter_X_Deafen_C.ExecuteUbergraph_FXC_BountyHunter_X_Deafen // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

