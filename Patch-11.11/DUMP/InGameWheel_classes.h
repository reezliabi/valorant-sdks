// WidgetBlueprintGeneratedClass InGameWheel.InGameWheel_C
// Size: 0x3e4 (Inherited: 0x318)
struct UInGameWheel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* InnerRing; // 0x320(0x08)
	struct UCanvasPanel* ParentCanvas; // 0x328(0x08)
	struct URadialMenuV2_C* RadialMenuV2; // 0x330(0x08)
	struct UHorizontalBox* RightKeyCancelWidget; // 0x338(0x08)
	bool WasCancelled; // 0x340(0x01)
	enum class EGameFeatureToggleName InFeatureToggleName; // 0x341(0x01)
	char pad_342[0x6]; // 0x342(0x06)
	double InWheelShowupDelay; // 0x348(0x08)
	bool InShouldCheckToggle; // 0x350(0x01)
	char pad_351[0x7]; // 0x351(0x07)
	struct FTimerHandle WheelShowupTimer; // 0x358(0x08)
	bool InTouchEditMode; // 0x360(0x01)
	bool WasClosedWithGamepad; // 0x361(0x01)
	char pad_362[0x6]; // 0x362(0x06)
	struct FVector2D GamepadStickVectorWhenClosed; // 0x368(0x10)
	struct TScriptInterface<IWheelWidgetInterface_C> InOuterWidget; // 0x378(0x10)
	int32_t TokenCount; // 0x388(0x04)
	char pad_38C[0x4]; // 0x38c(0x04)
	double LastCastTime; // 0x390(0x08)
	double InMinInterval; // 0x398(0x08)
	double EnabledOpacity; // 0x3a0(0x08)
	double DisabledOpacity; // 0x3a8(0x08)
	struct FMulticastInlineDelegate WheelVisibilityChanged; // 0x3b0(0x10)
	int32_t InTokensPerCycle; // 0x3c0(0x04)
	bool RightKeyCancelEnabled; // 0x3c4(0x01)
	bool Summon Disabled; // 0x3c5(0x01)
	char pad_3C6[0x2]; // 0x3c6(0x02)
	struct FMulticastInlineDelegate OnSummonKeyPressed; // 0x3c8(0x10)
	struct FName Action Name; // 0x3d8(0x0c)

	void Update Showup Delay(double& Delay (s)); // Function InGameWheel.InGameWheel_C.Update Showup Delay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CheckToggle(bool& IsPassed); // Function InGameWheel.InGameWheel_C.CheckToggle // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ResetTokens(); // Function InGameWheel.InGameWheel_C.ResetTokens // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetWheelVisibility(enum class ESlateVisibility NewVisibility); // Function InGameWheel.InGameWheel_C.SetWheelVisibility // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateAvailability(); // Function InGameWheel.InGameWheel_C.UpdateAvailability // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnShooterPlayerStateReady(struct AShooterPlayerState* ShooterPlayerState); // Function InGameWheel.InGameWheel_C.OnShooterPlayerStateReady // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PostCastProcess(bool Succeeded); // Function InGameWheel.InGameWheel_C.PostCastProcess // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreCastCheck(bool& Succeeded); // Function InGameWheel.InGameWheel_C.PreCastCheck // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HideInnerRing(); // Function InGameWheel.InGameWheel_C.HideInnerRing // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowInnerRing(); // Function InGameWheel.InGameWheel_C.ShowInnerRing // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool CheckIfGamepadStickReleased(struct FVector2D StickVectorWhenClosed); // Function InGameWheel.InGameWheel_C.CheckIfGamepadStickReleased // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void InitializeRateLimiter(struct FRadialMenuRateLimitSettings RateLimitSettings); // Function InGameWheel.InGameWheel_C.InitializeRateLimiter // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitializeShowAndHide(struct FRadialMenuShowAndHideSettings& ShowAndHideSettings); // Function InGameWheel.InGameWheel_C.InitializeShowAndHide // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetLastSelected(int32_t& LastSelected); // Function InGameWheel.InGameWheel_C.GetLastSelected // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TryCastCurrentOption(bool Check If Was Cancelled); // Function InGameWheel.InGameWheel_C.TryCastCurrentOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateSlotDisabledState(int32_t SlotIndex, bool Disabled); // Function InGameWheel.InGameWheel_C.UpdateSlotDisabledState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Initialize Wheel(struct FRadialMenuShowAndHideSettings& ShowAndHideSettings, bool ShouldCheckToggle, struct FRadialMenuRateLimitSettings& RateLimitSettings, struct TArray<struct FRadialMenuSlotDescriptor>& SlotDescriptors, struct TScriptInterface<IWheelWidgetInterface_C> OuterWidget); // Function InGameWheel.InGameWheel_C.Initialize Wheel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function InGameWheel.InGameWheel_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function InGameWheel.InGameWheel_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void SummonKeyReleased(); // Function InGameWheel.InGameWheel_C.SummonKeyReleased // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AliveStateChanged(bool NewValue); // Function InGameWheel.InGameWheel_C.AliveStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SummonKeyHeld(); // Function InGameWheel.InGameWheel_C.SummonKeyHeld // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CancelWheel(); // Function InGameWheel.InGameWheel_C.CancelWheel // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SummonKeyPressed(); // Function InGameWheel.InGameWheel_C.SummonKeyPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAresPlayerStateChanged_Event(struct AAresPlayerStateBase* NewValue); // Function InGameWheel.InGameWheel_C.OnAresPlayerStateChanged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CloseWheel(); // Function InGameWheel.InGameWheel_C.CloseWheel // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_InGameWheel(int32_t EntryPoint); // Function InGameWheel.InGameWheel_C.ExecuteUbergraph_InGameWheel // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnSummonKeyPressed__DelegateSignature(); // Function InGameWheel.InGameWheel_C.OnSummonKeyPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void WheelVisibilityChanged__DelegateSignature(enum class ESlateVisibility Visible); // Function InGameWheel.InGameWheel_C.WheelVisibilityChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

