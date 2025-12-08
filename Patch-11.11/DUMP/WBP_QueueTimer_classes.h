// WidgetBlueprintGeneratedClass WBP_QueueTimer.WBP_QueueTimer_C
// Size: 0x1cd4 (Inherited: 0x1ae0)
struct UWBP_QueueTimer_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UWidgetAnimation* Looping; // 0x1ae8(0x08)
	struct UWidgetAnimation* Intro; // 0x1af0(0x08)
	struct UAresCommonRichText* AresCommonRichText_141; // 0x1af8(0x08)
	struct UCommonRichTextBlock* ButtonDisplayText; // 0x1b00(0x08)
	struct UAresCommonText* TimerText; // 0x1b08(0x08)
	struct FText DisplayText; // 0x1b10(0x18)
	struct FMulticastInlineDelegate OnStyleChange; // 0x1b28(0x10)
	struct FText KBMDisplayText; // 0x1b38(0x18)
	struct UAresCommonInputActionManager* ActionManager; // 0x1b50(0x08)
	struct FMulticastInlineDelegate OnHoverClicked; // 0x1b58(0x10)
	struct FAresActionBindingHandle HoverClickHandle; // 0x1b68(0x04)
	char pad_1B6C[0x4]; // 0x1b6c(0x04)
	double Anim_Focused; // 0x1b70(0x08)
	struct FName isFocus; // 0x1b78(0x0c)
	bool bIsActivelyHolding; // 0x1b84(0x01)
	bool bActionComplete; // 0x1b85(0x01)
	char pad_1B86[0x2]; // 0x1b86(0x02)
	struct FName IsActive; // 0x1b88(0x0c)
	bool bAnimPlayed; // 0x1b94(0x01)
	char pad_1B95[0x3]; // 0x1b95(0x03)
	struct FName SABot; // 0x1b98(0x0c)
	char pad_1BA4[0x4]; // 0x1ba4(0x04)
	double Anim_SABot; // 0x1ba8(0x08)
	double Anim_SAMid; // 0x1bb0(0x08)
	double Anim_SATopX; // 0x1bb8(0x08)
	double Anim_SATopY; // 0x1bc0(0x08)
	double Anim_SAWHHide; // 0x1bc8(0x08)
	double Anim_SAWHShow; // 0x1bd0(0x08)
	double Anim_SABGOpacity; // 0x1bd8(0x08)
	double Anim_SBBotY; // 0x1be0(0x08)
	double Anim_SBMid; // 0x1be8(0x08)
	double Anim_SBTopY; // 0x1bf0(0x08)
	struct FName SAMid; // 0x1bf8(0x0c)
	struct FName SATopX; // 0x1c04(0x0c)
	struct FName SATopY; // 0x1c10(0x0c)
	struct FName SAWHHide; // 0x1c1c(0x0c)
	struct FName SAWHShow; // 0x1c28(0x0c)
	struct FName SABGOpacity; // 0x1c34(0x0c)
	struct FName SBBotY; // 0x1c40(0x0c)
	struct FName SBMid; // 0x1c4c(0x0c)
	struct FName SBTopY; // 0x1c58(0x0c)
	char pad_1C64[0x4]; // 0x1c64(0x04)
	double Anim_SCHighlight; // 0x1c68(0x08)
	double Anim_SCTop; // 0x1c70(0x08)
	struct FName SCHighlight; // 0x1c78(0x0c)
	struct FName SCTop; // 0x1c84(0x0c)
	double Anim_SABG; // 0x1c90(0x08)
	struct FName SABG; // 0x1c98(0x0c)
	char pad_1CA4[0x4]; // 0x1ca4(0x04)
	double Anim_SCBot; // 0x1ca8(0x08)
	struct FName SCBot; // 0x1cb0(0x0c)
	char pad_1CBC[0x4]; // 0x1cbc(0x04)
	double Anim_RadActive; // 0x1cc0(0x08)
	struct FName RadActive; // 0x1cc8(0x0c)

	void SetAnim_SABGOpacAnim(double Anim_SABGOpacity); // Function WBP_QueueTimer.WBP_QueueTimer_C.SetAnim_SABGOpacAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetAnim_RadActive(double Anim_SABot); // Function WBP_QueueTimer.WBP_QueueTimer_C.SetAnim_RadActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetAnim_SCBot(double Anim_SABot); // Function WBP_QueueTimer.WBP_QueueTimer_C.SetAnim_SCBot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetAnim_SABG(double Anim_SABot); // Function WBP_QueueTimer.WBP_QueueTimer_C.SetAnim_SABG // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetAnim_SCTop(double Anim_SABot); // Function WBP_QueueTimer.WBP_QueueTimer_C.SetAnim_SCTop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetAnim_SCHighlight(double Anim_SABot); // Function WBP_QueueTimer.WBP_QueueTimer_C.SetAnim_SCHighlight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetAnim_SBTopY(double Anim_SABot); // Function WBP_QueueTimer.WBP_QueueTimer_C.SetAnim_SBTopY // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetAnim_SBMid(double Anim_SABot); // Function WBP_QueueTimer.WBP_QueueTimer_C.SetAnim_SBMid // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetAnim_SBBotY(double Anim_SABot); // Function WBP_QueueTimer.WBP_QueueTimer_C.SetAnim_SBBotY // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetAnim_SAWHShow(double Anim_SABot); // Function WBP_QueueTimer.WBP_QueueTimer_C.SetAnim_SAWHShow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetAnim_SAWHHide(double Anim_SABot); // Function WBP_QueueTimer.WBP_QueueTimer_C.SetAnim_SAWHHide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetAnim_SATopY(double Anim_SABot); // Function WBP_QueueTimer.WBP_QueueTimer_C.SetAnim_SATopY // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetAnim_SATopX(double Anim_SABot); // Function WBP_QueueTimer.WBP_QueueTimer_C.SetAnim_SATopX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetAnim_SAMid(double Anim_SABot); // Function WBP_QueueTimer.WBP_QueueTimer_C.SetAnim_SAMid // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetAnim_SABot(double Anim_SABot); // Function WBP_QueueTimer.WBP_QueueTimer_C.SetAnim_SABot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetAnim_Focused(double Anim_Focused); // Function WBP_QueueTimer.WBP_QueueTimer_C.SetAnim_Focused // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function WBP_QueueTimer.WBP_QueueTimer_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleHoverClicked(struct FName ActionName); // Function WBP_QueueTimer.WBP_QueueTimer_C.HandleHoverClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function WBP_QueueTimer.WBP_QueueTimer_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateTimerDisplay(enum class ESlateVisibility NewVisibility, struct FText InText); // Function WBP_QueueTimer.WBP_QueueTimer_C.UpdateTimerDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_QueueTimer.WBP_QueueTimer_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function WBP_QueueTimer.WBP_QueueTimer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnOutroFinished(); // Function WBP_QueueTimer.WBP_QueueTimer_C.OnOutroFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function WBP_QueueTimer.WBP_QueueTimer_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnActionProgress(float HeldPercent); // Function WBP_QueueTimer.WBP_QueueTimer_C.OnActionProgress // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_QueueTimer(int32_t EntryPoint); // Function WBP_QueueTimer.WBP_QueueTimer_C.ExecuteUbergraph_WBP_QueueTimer // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnHoverClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_QueueTimer.WBP_QueueTimer_C.OnHoverClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnStyleChange__DelegateSignature(); // Function WBP_QueueTimer.WBP_QueueTimer_C.OnStyleChange__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

