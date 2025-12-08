// WidgetBlueprintGeneratedClass MatchDetailsProgressionAccountLevel.MatchDetailsProgressionAccountLevel_C
// Size: 0x484 (Inherited: 0x318)
struct UMatchDetailsProgressionAccountLevel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* LevelUp; // 0x320(0x08)
	struct UWidgetAnimation* Default; // 0x328(0x08)
	struct UAccountLevel_C* AccountLevel; // 0x330(0x08)
	struct UAccountXPSource_C* AccountXPSource; // 0x338(0x08)
	struct UImage* BurstImage; // 0x340(0x08)
	struct UImage* CloudBurstLeft; // 0x348(0x08)
	struct UImage* CloudBurstRight; // 0x350(0x08)
	struct UImage* LevelUp_Gif; // 0x358(0x08)
	struct UOverlay* Progress_ForAnimationOnly; // 0x360(0x08)
	struct UProgressBar* ProgressBar; // 0x368(0x08)
	struct UProgressBar* ProgressBar_Blue; // 0x370(0x08)
	struct UProgressBar* ProgressBar_Yellow; // 0x378(0x08)
	struct USlider* Slider_169; // 0x380(0x08)
	struct UOverlay* Sources; // 0x388(0x08)
	struct UTextBlock* Status_Right; // 0x390(0x08)
	struct FAccountXPMatch MatchDetails; // 0x398(0x48)
	struct FDateTime AnimatingSince; // 0x3e0(0x08)
	struct FDateTime AnimatingUntil; // 0x3e8(0x08)
	struct FDateTime AnimatingProgressColorSince; // 0x3f0(0x08)
	struct FDateTime AnimatingProgressColorUntil; // 0x3f8(0x08)
	bool IsAnimating; // 0x400(0x01)
	bool IsAnimatingProgressColor; // 0x401(0x01)
	char pad_402[0x6]; // 0x402(0x06)
	struct TArray<struct FAccountXPXPSource> MatchXPSources; // 0x408(0x10)
	int32_t CurrentLevel; // 0x418(0x04)
	char pad_41C[0x4]; // 0x41c(0x04)
	struct FMulticastInlineDelegate AccountXPAnimationComplete; // 0x420(0x10)
	struct FLinearColor ProgressBarBaseColor; // 0x430(0x10)
	struct FLinearColor ProgressBarAnimationColor; // 0x440(0x10)
	double ProgressBarFadeStart; // 0x450(0x08)
	struct UMaterialInstanceDynamic* AdditiveVariable; // 0x458(0x08)
	struct TArray<struct FAccountXPXPMultiplier> MatchXPMultipliers; // 0x460(0x10)
	double ProgressBarFadeLerpMax; // 0x470(0x08)
	int32_t StartingXP; // 0x478(0x04)
	int32_t EndingXP; // 0x47c(0x04)
	int32_t PreviousAccountLevel; // 0x480(0x04)

	void Update XP and Level(int32_t Level, int32_t XP); // Function MatchDetailsProgressionAccountLevel.MatchDetailsProgressionAccountLevel_C.Update XP and Level // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Start Animate From Lerp(int32_t StartXP, int32_t EndXP); // Function MatchDetailsProgressionAccountLevel.MatchDetailsProgressionAccountLevel_C.Start Animate From Lerp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Animate From Lerp(double LerpValue, bool& isLerping); // Function MatchDetailsProgressionAccountLevel.MatchDetailsProgressionAccountLevel_C.Animate From Lerp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetMatchCollectiveMultiplier(double& Multiplier); // Function MatchDetailsProgressionAccountLevel.MatchDetailsProgressionAccountLevel_C.GetMatchCollectiveMultiplier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Update Progress Bar Yellow(int32_t XP); // Function MatchDetailsProgressionAccountLevel.MatchDetailsProgressionAccountLevel_C.Update Progress Bar Yellow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ConvertTotalXPToLevelAndXP(int32_t TotalXP, int32_t& Level, int32_t& XP); // Function MatchDetailsProgressionAccountLevel.MatchDetailsProgressionAccountLevel_C.ConvertTotalXPToLevelAndXP // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Reset(); // Function MatchDetailsProgressionAccountLevel.MatchDetailsProgressionAccountLevel_C.Reset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowProgressYellowEndState(); // Function MatchDetailsProgressionAccountLevel.MatchDetailsProgressionAccountLevel_C.ShowProgressYellowEndState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Show End State(); // Function MatchDetailsProgressionAccountLevel.MatchDetailsProgressionAccountLevel_C.Show End State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Convert to Source Text(struct FAccountXPXPSource& AccountXPXPSource, struct FText& Result); // Function MatchDetailsProgressionAccountLevel.MatchDetailsProgressionAccountLevel_C.Convert to Source Text // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ConvertProgressToTotalXP(struct FAccountXPPlayerProgress Progress, int32_t LevelMaxXP, int32_t& XP); // Function MatchDetailsProgressionAccountLevel.MatchDetailsProgressionAccountLevel_C.ConvertProgressToTotalXP // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Animate Progress Color(); // Function MatchDetailsProgressionAccountLevel.MatchDetailsProgressionAccountLevel_C.Animate Progress Color // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Animate Account Level(); // Function MatchDetailsProgressionAccountLevel.MatchDetailsProgressionAccountLevel_C.Animate Account Level // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Animate Status Text(); // Function MatchDetailsProgressionAccountLevel.MatchDetailsProgressionAccountLevel_C.Animate Status Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Animate Level and XP(); // Function MatchDetailsProgressionAccountLevel.MatchDetailsProgressionAccountLevel_C.Animate Level and XP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Animate All Progress(); // Function MatchDetailsProgressionAccountLevel.MatchDetailsProgressionAccountLevel_C.Animate All Progress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetLevelMaxXP(int32_t& MaxXP); // Function MatchDetailsProgressionAccountLevel.MatchDetailsProgressionAccountLevel_C.GetLevelMaxXP // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void TickAnimation(); // Function MatchDetailsProgressionAccountLevel.MatchDetailsProgressionAccountLevel_C.TickAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update Status Text(int32_t CurrentLevel, int32_t CurrentXP, int32_t LevelMaxXP); // Function MatchDetailsProgressionAccountLevel.MatchDetailsProgressionAccountLevel_C.Update Status Text // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update Progress Bar(int32_t XP); // Function MatchDetailsProgressionAccountLevel.MatchDetailsProgressionAccountLevel_C.Update Progress Bar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update Account Level(int32_t Level); // Function MatchDetailsProgressionAccountLevel.MatchDetailsProgressionAccountLevel_C.Update Account Level // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Init(struct FAccountXPMatch Match); // Function MatchDetailsProgressionAccountLevel.MatchDetailsProgressionAccountLevel_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function MatchDetailsProgressionAccountLevel.MatchDetailsProgressionAccountLevel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function MatchDetailsProgressionAccountLevel.MatchDetailsProgressionAccountLevel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function MatchDetailsProgressionAccountLevel.MatchDetailsProgressionAccountLevel_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void AnimateAccountXPSources(); // Function MatchDetailsProgressionAccountLevel.MatchDetailsProgressionAccountLevel_C.AnimateAccountXPSources // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_MatchDetailsProgressionAccountLevel(int32_t EntryPoint); // Function MatchDetailsProgressionAccountLevel.MatchDetailsProgressionAccountLevel_C.ExecuteUbergraph_MatchDetailsProgressionAccountLevel // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void AccountXPAnimationComplete__DelegateSignature(); // Function MatchDetailsProgressionAccountLevel.MatchDetailsProgressionAccountLevel_C.AccountXPAnimationComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

