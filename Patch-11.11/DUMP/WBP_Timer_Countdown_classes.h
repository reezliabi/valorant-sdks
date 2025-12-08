// WidgetBlueprintGeneratedClass WBP_Timer_Countdown.WBP_Timer_Countdown_C
// Size: 0x510 (Inherited: 0x3e0)
struct UWBP_Timer_Countdown_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAresCommonText* TimerText; // 0x3e8(0x08)
	struct UCommonTextStyle* Style; // 0x3f0(0x08)
	struct UCommonTextStyle* UrgentTextStyle; // 0x3f8(0x08)
	int32_t HideDaysDisplayWhenRemainingDaysLessThan1; // 0x400(0x04)
	bool HideHoursDisplayWhenRemainingHoursLessThan1; // 0x404(0x01)
	bool HideMinutesDisplayWhenRemainingMinutesLessThan1; // 0x405(0x01)
	char pad_406[0x2]; // 0x406(0x02)
	int32_t Hide Seconds Display when Remaining Minutes Greater Than; // 0x408(0x04)
	bool UsingUTC; // 0x40c(0x01)
	char pad_40D[0x3]; // 0x40d(0x03)
	struct FDateTime ExpirationDateTime; // 0x410(0x08)
	struct FText Text; // 0x418(0x18)
	struct FText DHMS_FormatText; // 0x430(0x18)
	struct FText HMS_FormatText; // 0x448(0x18)
	struct FText HM_FormatText; // 0x460(0x18)
	struct FText MS_FormatText; // 0x478(0x18)
	struct FText M_FormatText; // 0x490(0x18)
	struct FText S_FormatText; // 0x4a8(0x18)
	int32_t MostSignificantMinimalIntegralDigitOverride; // 0x4c0(0x04)
	int32_t DayMinimalIntegralDigits; // 0x4c4(0x04)
	int32_t HourMinimalIntegralDigits; // 0x4c8(0x04)
	int32_t MinuteMinimalIntegralDigits; // 0x4cc(0x04)
	int32_t SecondMinimalIntegralDigits; // 0x4d0(0x04)
	char pad_4D4[0x4]; // 0x4d4(0x04)
	struct UVM_Interface_CountdownTimer_C* TimerViewModel; // 0x4d8(0x08)
	struct UVM_Interface_CountdownTimer_C* TimerViewModelClass; // 0x4e0(0x08)
	struct FTimerHandle TimerHandle; // 0x4e8(0x08)
	double TimerRefresh; // 0x4f0(0x08)
	bool DidBroadcastTimerFinished; // 0x4f8(0x01)
	char pad_4F9[0x7]; // 0x4f9(0x07)
	struct FMulticastInlineDelegate OnTimerExpired; // 0x500(0x10)

	void UpdateTimerStyle(struct UCommonTextStyle* NewStyle); // Function WBP_Timer_Countdown.WBP_Timer_Countdown_C.UpdateTimerStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetMostSignificantIntegralDigitOverride(int32_t TimerDisplayBitmask, int32_t DayFlag, int32_t HourFlag, int32_t MinuteFlag, int32_t SecondFlag, int32_t& UpdatedDayMinimalIntegralDigits, int32_t& UpdatedHourMinimalIntegralDigits, int32_t& UpdatedMinuteMinimalIntegralDigits, int32_t& UpdatedSecondMinimalIntegralDigits); // Function WBP_Timer_Countdown.WBP_Timer_Countdown_C.GetMostSignificantIntegralDigitOverride // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BitmaskContainsFlag(int32_t BitMask, int32_t Flag, bool& FlagInBitmask); // Function WBP_Timer_Countdown.WBP_Timer_Countdown_C.BitmaskContainsFlag // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void ShouldShowSeconds(struct FTimespan CountdownTimeSpan, bool& ShowSeconds); // Function WBP_Timer_Countdown.WBP_Timer_Countdown_C.ShouldShowSeconds // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void ShouldShowMinutes(struct FTimespan CountdownTimeSpan, bool& ShowMinutes); // Function WBP_Timer_Countdown.WBP_Timer_Countdown_C.ShouldShowMinutes // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void ShouldShowHours(struct FTimespan CountdownTimeSpan, bool& ShowHours); // Function WBP_Timer_Countdown.WBP_Timer_Countdown_C.ShouldShowHours // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void ShouldShowDays(struct FTimespan CountdownTimeSpan, bool& ShowDays); // Function WBP_Timer_Countdown.WBP_Timer_Countdown_C.ShouldShowDays // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void BindEvents(bool Bind); // Function WBP_Timer_Countdown.WBP_Timer_Countdown_C.BindEvents // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitViewModel(); // Function WBP_Timer_Countdown.WBP_Timer_Countdown_C.InitViewModel // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnHasValidDataChanged(bool IsValid); // Function WBP_Timer_Countdown.WBP_Timer_Countdown_C.OnHasValidDataChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTimerIntervalChanged(double Interval); // Function WBP_Timer_Countdown.WBP_Timer_Countdown_C.OnTimerIntervalChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSetUrgentFormatting(); // Function WBP_Timer_Countdown.WBP_Timer_Countdown_C.OnSetUrgentFormatting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnExpirationTimeChanged(struct FDateTime ExpirationTime); // Function WBP_Timer_Countdown.WBP_Timer_Countdown_C.OnExpirationTimeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateExpirationTime(struct FDateTime ExpirationTime); // Function WBP_Timer_Countdown.WBP_Timer_Countdown_C.UpdateExpirationTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateTimerDisplay(); // Function WBP_Timer_Countdown.WBP_Timer_Countdown_C.UpdateTimerDisplay // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetFormattedTimerValue(struct FTimespan CountdownTimeSpan); // Function WBP_Timer_Countdown.WBP_Timer_Countdown_C.SetFormattedTimerValue // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function WBP_Timer_Countdown.WBP_Timer_Countdown_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_Timer_Countdown.WBP_Timer_Countdown_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void K2_BindToViewModel(); // Function WBP_Timer_Countdown.WBP_Timer_Countdown_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function WBP_Timer_Countdown.WBP_Timer_Countdown_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Timer_Countdown(int32_t EntryPoint); // Function WBP_Timer_Countdown.WBP_Timer_Countdown_C.ExecuteUbergraph_WBP_Timer_Countdown // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnTimerExpired__DelegateSignature(); // Function WBP_Timer_Countdown.WBP_Timer_Countdown_C.OnTimerExpired__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

