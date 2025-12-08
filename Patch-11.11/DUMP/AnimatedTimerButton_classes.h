// WidgetBlueprintGeneratedClass AnimatedTimerButton.AnimatedTimerButton_C
// Size: 0x3f0 (Inherited: 0x318)
struct UAnimatedTimerButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* hover; // 0x320(0x08)
	struct UWidgetAnimation* BarFilling; // 0x328(0x08)
	struct UImage* BarBg; // 0x330(0x08)
	struct UImage* BarImage; // 0x338(0x08)
	struct UImage* BarTint; // 0x340(0x08)
	struct UImage* BarTintSelectedPipLeft; // 0x348(0x08)
	struct UImage* BarTintSelectedPipRight; // 0x350(0x08)
	struct UTextBlock* BundleName; // 0x358(0x08)
	struct UTextBlock* BundleName_hover; // 0x360(0x08)
	struct UTelemetryButton* Button; // 0x368(0x08)
	struct UButton* TitleButton; // 0x370(0x08)
	bool SendTelemetry; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)
	struct FString ActionTarget; // 0x380(0x10)
	struct FMulticastInlineDelegate OnClicked; // 0x390(0x10)
	struct FMulticastInlineDelegate OnTimeExpired; // 0x3a0(0x10)
	struct FTimespan DisplayTime; // 0x3b0(0x08)
	struct UMaterialInstanceDynamic* BarMaterial; // 0x3b8(0x08)
	double TimeToFill; // 0x3c0(0x08)
	bool AnimationCanceled; // 0x3c8(0x01)
	char pad_3C9[0x7]; // 0x3c9(0x07)
	struct FMulticastInlineDelegate OnAnimationStateChanged; // 0x3d0(0x10)
	double LastPausedTime; // 0x3e0(0x08)
	struct UMaterialInstanceDynamic* Additive; // 0x3e8(0x08)

	void SequenceEvent__ENTRYPOINTAnimatedTimerButton_8(); // Function AnimatedTimerButton.AnimatedTimerButton_C.SequenceEvent__ENTRYPOINTAnimatedTimerButton_8 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent__ENTRYPOINTAnimatedTimerButton_7(); // Function AnimatedTimerButton.AnimatedTimerButton_C.SequenceEvent__ENTRYPOINTAnimatedTimerButton_7 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent__ENTRYPOINTAnimatedTimerButton_6(); // Function AnimatedTimerButton.AnimatedTimerButton_C.SequenceEvent__ENTRYPOINTAnimatedTimerButton_6 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent__ENTRYPOINTAnimatedTimerButton_5(); // Function AnimatedTimerButton.AnimatedTimerButton_C.SequenceEvent__ENTRYPOINTAnimatedTimerButton_5 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent__ENTRYPOINTAnimatedTimerButton_4(); // Function AnimatedTimerButton.AnimatedTimerButton_C.SequenceEvent__ENTRYPOINTAnimatedTimerButton_4 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent__ENTRYPOINTAnimatedTimerButton_3(); // Function AnimatedTimerButton.AnimatedTimerButton_C.SequenceEvent__ENTRYPOINTAnimatedTimerButton_3 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent__ENTRYPOINTAnimatedTimerButton_2(); // Function AnimatedTimerButton.AnimatedTimerButton_C.SequenceEvent__ENTRYPOINTAnimatedTimerButton_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent__ENTRYPOINTAnimatedTimerButton_1(); // Function AnimatedTimerButton.AnimatedTimerButton_C.SequenceEvent__ENTRYPOINTAnimatedTimerButton_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent__ENTRYPOINTAnimatedTimerButton(); // Function AnimatedTimerButton.AnimatedTimerButton_C.SequenceEvent__ENTRYPOINTAnimatedTimerButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	double PauseTimer(); // Function AnimatedTimerButton.AnimatedTimerButton_C.PauseTimer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Stop Current Animation(); // Function AnimatedTimerButton.AnimatedTimerButton_C.Stop Current Animation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleAnimationFinished(); // Function AnimatedTimerButton.AnimatedTimerButton_C.HandleAnimationFinished // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetText(struct FText InputText); // Function AnimatedTimerButton.AnimatedTimerButton_C.SetText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AnimateBarTimer(bool ResumeFromPause); // Function AnimatedTimerButton.AnimatedTimerButton_C.AnimateBarTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function AnimatedTimerButton.AnimatedTimerButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function AnimatedTimerButton.AnimatedTimerButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function AnimatedTimerButton.AnimatedTimerButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnAnimationStarted(struct UWidgetAnimation* Animation); // Function AnimatedTimerButton.AnimatedTimerButton_C.OnAnimationStarted // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function AnimatedTimerButton.AnimatedTimerButton_C.OnAnimationFinished // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void Audio Event(); // Function AnimatedTimerButton.AnimatedTimerButton_C.Audio Event // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function AnimatedTimerButton.AnimatedTimerButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function AnimatedTimerButton.AnimatedTimerButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TitleButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function AnimatedTimerButton.AnimatedTimerButton_C.BndEvt__TitleButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TitleButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function AnimatedTimerButton.AnimatedTimerButton_C.BndEvt__TitleButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TitleButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature(); // Function AnimatedTimerButton.AnimatedTimerButton_C.BndEvt__TitleButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_AnimatedTimerButton(int32_t EntryPoint); // Function AnimatedTimerButton.AnimatedTimerButton_C.ExecuteUbergraph_AnimatedTimerButton // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnAnimationStateChanged__DelegateSignature(enum class ETimerAnimationState AnimationState); // Function AnimatedTimerButton.AnimatedTimerButton_C.OnAnimationStateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTimeExpired__DelegateSignature(bool WasCancelled); // Function AnimatedTimerButton.AnimatedTimerButton_C.OnTimeExpired__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnClicked__DelegateSignature(struct UAnimatedTimerButton_C* Timer); // Function AnimatedTimerButton.AnimatedTimerButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

