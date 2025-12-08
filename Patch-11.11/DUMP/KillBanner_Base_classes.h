// WidgetBlueprintGeneratedClass KillBanner_Base.KillBanner_Base_C
// Size: 0x530 (Inherited: 0x318)
struct UKillBanner_Base_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* HeadshotCleanup; // 0x320(0x08)
	struct UWidgetAnimation* HeadshotFlicker; // 0x328(0x08)
	struct UWidgetAnimation* IntroAnimation; // 0x330(0x08)
	struct UTextBlock* Assister1; // 0x338(0x08)
	struct UTextBlock* Assister2; // 0x340(0x08)
	struct UTextBlock* Assister3; // 0x348(0x08)
	struct UTextBlock* Assister4; // 0x350(0x08)
	struct UTextBlock* Assister5; // 0x358(0x08)
	struct UVerticalBox* AssistersBox; // 0x360(0x08)
	struct UTextBlock* AssistersTitle; // 0x368(0x08)
	struct UImage* BadgeDefault; // 0x370(0x08)
	struct UAnimatedMaterialWidget_C* FrameMaterial; // 0x378(0x08)
	struct UImage* FrameTexture; // 0x380(0x08)
	struct UOverlay* GlobalHolder; // 0x388(0x08)
	struct UImage* GlowOverlay; // 0x390(0x08)
	struct UHeadShot_Base_C* HeadShot_Base; // 0x398(0x08)
	struct UOverlay* HeadShotCallout; // 0x3a0(0x08)
	struct UHeadShotParticles_C* HeadShotParticles; // 0x3a8(0x08)
	struct UImage* HS_Bg; // 0x3b0(0x08)
	struct UAnimatedMaterialWidget_C* KillBadgeMaterial; // 0x3b8(0x08)
	struct UKillBanner_FX_C* KillBanner_FX; // 0x3c0(0x08)
	struct UKillBanner_Wheel_C* KillBanner_Wheel; // 0x3c8(0x08)
	struct UOverlay* OptionalEffects; // 0x3d0(0x08)
	struct UImage* Shadow; // 0x3d8(0x08)
	struct UAnimatedSpriteWidget_C* Tier1FireEffect; // 0x3e0(0x08)
	struct UAnimatedSpriteWidget_C* Tier2Sparks; // 0x3e8(0x08)
	int32_t CurrentKillCount; // 0x3f0(0x04)
	bool IsHeadshot; // 0x3f4(0x01)
	char pad_3F5[0x3]; // 0x3f5(0x03)
	int32_t MaxKills; // 0x3f8(0x04)
	char pad_3FC[0x4]; // 0x3fc(0x04)
	struct FKillBannerStruct KillBannerData; // 0x400(0xf8)
	struct UOptionalKillBannerEffects_Parent_C* OptionalFXRef; // 0x4f8(0x08)
	struct FMulticastInlineDelegate OnFinishedPlaying; // 0x500(0x10)
	bool IsPreview; // 0x510(0x01)
	char pad_511[0x7]; // 0x511(0x07)
	struct TArray<struct FAresAssist> Assisters; // 0x518(0x10)
	struct FTimerHandle StopTimer; // 0x528(0x08)

	void SequenceEvent__ENTRYPOINTKillBanner_Base_4(); // Function KillBanner_Base.KillBanner_Base_C.SequenceEvent__ENTRYPOINTKillBanner_Base_4 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent__ENTRYPOINTKillBanner_Base_3(); // Function KillBanner_Base.KillBanner_Base_C.SequenceEvent__ENTRYPOINTKillBanner_Base_3 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent__ENTRYPOINTKillBanner_Base_2(); // Function KillBanner_Base.KillBanner_Base_C.SequenceEvent__ENTRYPOINTKillBanner_Base_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent__ENTRYPOINTKillBanner_Base_1(); // Function KillBanner_Base.KillBanner_Base_C.SequenceEvent__ENTRYPOINTKillBanner_Base_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent__ENTRYPOINTKillBanner_Base(); // Function KillBanner_Base.KillBanner_Base_C.SequenceEvent__ENTRYPOINTKillBanner_Base // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetBrushWithMaterialOrTexture(struct UObject* BadgeTextureOrMaterial); // Function KillBanner_Base.KillBanner_Base_C.SetBrushWithMaterialOrTexture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ClearOptionalFX(); // Function KillBanner_Base.KillBanner_Base_C.ClearOptionalFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GenerateOptionalFX(struct FKillBannerOverrideElementStruct FxElement); // Function KillBanner_Base.KillBanner_Base_C.GenerateOptionalFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OverrideBadgeTexture(struct UObject* KillBannerTexture, struct UTexture2D* BadgeDissolveTexture); // Function KillBanner_Base.KillBanner_Base_C.OverrideBadgeTexture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetGlow(struct UTexture2D* GlowTexture); // Function KillBanner_Base.KillBanner_Base_C.SetGlow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ResetBadgeBrush(struct UObject* BadgeDefaultOrMaterial); // Function KillBanner_Base.KillBanner_Base_C.ResetBadgeBrush // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void FormatAssistText(struct FAresAssist Assist, struct FText& AssistText); // Function KillBanner_Base.KillBanner_Base_C.FormatAssistText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void PopulateAssisterWidgets(); // Function KillBanner_Base.KillBanner_Base_C.PopulateAssisterWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayKillBannerSound(bool WasVisible, int32_t KillCount); // Function KillBanner_Base.KillBanner_Base_C.PlayKillBannerSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StopKillBannerAnimation(); // Function KillBanner_Base.KillBanner_Base_C.StopKillBannerAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StartKillBannerAnimation(); // Function KillBanner_Base.KillBanner_Base_C.StartKillBannerAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PassDataToWidgets(); // Function KillBanner_Base.KillBanner_Base_C.PassDataToWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ConfigureKillBanner(struct FKillBannerStruct& EquippableSkinUIData, int32_t KillCount, int32_t MaxKills, bool WasHeadshot, bool bIsPreview, struct TArray<struct FAresAssist>& Assisters); // Function KillBanner_Base.KillBanner_Base_C.ConfigureKillBanner // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TriggerEmblemFadeout(); // Function KillBanner_Base.KillBanner_Base_C.TriggerEmblemFadeout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TriggerGeneralFadeout(); // Function KillBanner_Base.KillBanner_Base_C.TriggerGeneralFadeout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TriggerFX(); // Function KillBanner_Base.KillBanner_Base_C.TriggerFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TriggerGeneralFadeIn(); // Function KillBanner_Base.KillBanner_Base_C.TriggerGeneralFadeIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TriggerWheelSpin(); // Function KillBanner_Base.KillBanner_Base_C.TriggerWheelSpin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TriggerPieSliceFadeIn(); // Function KillBanner_Base.KillBanner_Base_C.TriggerPieSliceFadeIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StartAnimation(); // Function KillBanner_Base.KillBanner_Base_C.StartAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function KillBanner_Base.KillBanner_Base_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function KillBanner_Base.KillBanner_Base_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function KillBanner_Base.KillBanner_Base_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void DelayedSound(double Delay, bool WasVisible, int32_t KillCount); // Function KillBanner_Base.KillBanner_Base_C.DelayedSound // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function KillBanner_Base.KillBanner_Base_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_KillBanner_Base(int32_t EntryPoint); // Function KillBanner_Base.KillBanner_Base_C.ExecuteUbergraph_KillBanner_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnFinishedPlaying__DelegateSignature(); // Function KillBanner_Base.KillBanner_Base_C.OnFinishedPlaying__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

