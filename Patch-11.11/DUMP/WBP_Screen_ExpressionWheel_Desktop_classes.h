// WidgetBlueprintGeneratedClass WBP_Screen_ExpressionWheel_Desktop.WBP_Screen_ExpressionWheel_Desktop_C
// Size: 0x64c (Inherited: 0x578)
struct UWBP_Screen_ExpressionWheel_Desktop_C : UWBP_Screen_ExpressionWheel_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x578(0x08)
	struct UWBP_Panel_ExpressionWheel_C* ExpressionWheelWidget_PC; // 0x580(0x08)
	struct UWBP_Panel_RadialMenuInstructions_Console_C* InstructionsWidget; // 0x588(0x08)
	struct UCanvasPanel* ParentCanvas; // 0x590(0x08)
	struct UOverlay* WheelContainer; // 0x598(0x08)
	struct FTimerHandle HoldInputTimer; // 0x5a0(0x08)
	double WheelActivateDeadzone; // 0x5a8(0x08)
	struct FTimerHandle StickNeutralPositionCheckTimer; // 0x5b0(0x08)
	double HoldInputActivationTime; // 0x5b8(0x08)
	struct FVector2D StickVectorWhenClosed; // 0x5c0(0x10)
	struct FMulticastInlineDelegate EventRadialOptionSelected; // 0x5d0(0x10)
	double InspectActivationTime; // 0x5e0(0x08)
	struct FTimerHandle InspectInputTimer; // 0x5e8(0x08)
	struct FMulticastInlineDelegate EventInspectTriggered; // 0x5f0(0x10)
	bool IsInvisibleInputCapturing; // 0x600(0x01)
	bool bIsManualCancel; // 0x601(0x01)
	bool bShouldTriggerInspect; // 0x602(0x01)
	char pad_603[0x5]; // 0x603(0x05)
	struct FMulticastInlineDelegate EventRadialOptionCast_1; // 0x608(0x10)
	struct FMulticastInlineDelegate EventHandleCenterHighlight; // 0x618(0x10)
	bool isSprayButtonPressed; // 0x628(0x01)
	bool bIsCenterSelected; // 0x629(0x01)
	char pad_62A[0x6]; // 0x62a(0x06)
	struct FMulticastInlineDelegate EventHandleCancelHighlight; // 0x630(0x10)
	struct FName HoldActionName; // 0x640(0x0c)

	void ToggleListenForWheelHoldKey(bool isWheelHoldEnabled); // Function WBP_Screen_ExpressionWheel_Desktop.WBP_Screen_ExpressionWheel_Desktop_C.ToggleListenForWheelHoldKey // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitializeVM(); // Function WBP_Screen_ExpressionWheel_Desktop.WBP_Screen_ExpressionWheel_Desktop_C.InitializeVM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnExpressionWheelInputUp(); // Function WBP_Screen_ExpressionWheel_Desktop.WBP_Screen_ExpressionWheel_Desktop_C.OnExpressionWheelInputUp // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnExpressionWheelInputDown(); // Function WBP_Screen_ExpressionWheel_Desktop.WBP_Screen_ExpressionWheel_Desktop_C.OnExpressionWheelInputDown // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void K2_BindToViewModel(); // Function WBP_Screen_ExpressionWheel_Desktop.WBP_Screen_ExpressionWheel_Desktop_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Cancel Wheel(); // Function WBP_Screen_ExpressionWheel_Desktop.WBP_Screen_ExpressionWheel_Desktop_C.Cancel Wheel // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowWheel(); // Function WBP_Screen_ExpressionWheel_Desktop.WBP_Screen_ExpressionWheel_Desktop_C.ShowWheel // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On AES Wheel Hold Enabled Changed(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function WBP_Screen_ExpressionWheel_Desktop.WBP_Screen_ExpressionWheel_Desktop_C.On AES Wheel Hold Enabled Changed // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On AES Wheel Hold Value Changed(enum class EAresFloatSettingName SettingName, float OldValue, float NewValue); // Function WBP_Screen_ExpressionWheel_Desktop.WBP_Screen_ExpressionWheel_Desktop_C.On AES Wheel Hold Value Changed // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnHide(); // Function WBP_Screen_ExpressionWheel_Desktop.WBP_Screen_ExpressionWheel_Desktop_C.BP_OnHide // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void OnScoreboardVisibilityChange(bool IsVisible); // Function WBP_Screen_ExpressionWheel_Desktop.WBP_Screen_ExpressionWheel_Desktop_C.OnScoreboardVisibilityChange // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnQuickSprayPressed(); // Function WBP_Screen_ExpressionWheel_Desktop.WBP_Screen_ExpressionWheel_Desktop_C.OnQuickSprayPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnShow(); // Function WBP_Screen_ExpressionWheel_Desktop.WBP_Screen_ExpressionWheel_Desktop_C.BP_OnShow // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void EarlySetup(); // Function WBP_Screen_ExpressionWheel_Desktop.WBP_Screen_ExpressionWheel_Desktop_C.EarlySetup // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Hide Wheel(); // Function WBP_Screen_ExpressionWheel_Desktop.WBP_Screen_ExpressionWheel_Desktop_C.Hide Wheel // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Screen_ExpressionWheel_Desktop(int32_t EntryPoint); // Function WBP_Screen_ExpressionWheel_Desktop.WBP_Screen_ExpressionWheel_Desktop_C.ExecuteUbergraph_WBP_Screen_ExpressionWheel_Desktop // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void EventHandleCancelHighlight__DelegateSignature(bool bIsSelected); // Function WBP_Screen_ExpressionWheel_Desktop.WBP_Screen_ExpressionWheel_Desktop_C.EventHandleCancelHighlight__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EventHandleCenterHighlight__DelegateSignature(bool bIsCenterHighlighted); // Function WBP_Screen_ExpressionWheel_Desktop.WBP_Screen_ExpressionWheel_Desktop_C.EventHandleCenterHighlight__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EventRadialOptionCast_0__DelegateSignature(int32_t SelectedIndex, bool ShouldTriggerInspect); // Function WBP_Screen_ExpressionWheel_Desktop.WBP_Screen_ExpressionWheel_Desktop_C.EventRadialOptionCast_0__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EventInspectTriggered__DelegateSignature(); // Function WBP_Screen_ExpressionWheel_Desktop.WBP_Screen_ExpressionWheel_Desktop_C.EventInspectTriggered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EventRadialOptionSelected__DelegateSignature(); // Function WBP_Screen_ExpressionWheel_Desktop.WBP_Screen_ExpressionWheel_Desktop_C.EventRadialOptionSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

