// WidgetBlueprintGeneratedClass WBP_Panel_RadialSprayWheel.WBP_Panel_RadialSprayWheel_C
// Size: 0x4e8 (Inherited: 0x420)
struct UWBP_Panel_RadialSprayWheel_C : URadialMenuBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x420(0x08)
	struct UWidgetAnimation* Anim_Unfocus; // 0x428(0x08)
	struct UWidgetAnimation* Anim_Focus; // 0x430(0x08)
	struct UOverlay* ItemWidgets; // 0x438(0x08)
	struct UImage* Wheel; // 0x440(0x08)
	int32_t NumSegments; // 0x448(0x04)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct UMaterialInstanceDynamic* WheelMaterial; // 0x450(0x08)
	struct FTimerHandle TickEvent; // 0x458(0x08)
	double SelectionPositionAngle; // 0x460(0x08)
	double HalfArcAngle; // 0x468(0x08)
	double SelectionMagnitude; // 0x470(0x08)
	double RadiusSelectableOuter; // 0x478(0x08)
	double RadiusSelectableInner; // 0x480(0x08)
	struct UTexture* EmptyTexture; // 0x488(0x08)
	double Icon Size; // 0x490(0x08)
	struct FVector DPadAxis; // 0x498(0x18)
	struct TArray<struct FAresConditionalInputActionData> ConditionalInputActions; // 0x4b0(0x10)
	bool Display Context Icon; // 0x4c0(0x01)
	char pad_4C1[0x7]; // 0x4c1(0x07)
	double Caution Ratio; // 0x4c8(0x08)
	bool HoveredIsSelected; // 0x4d0(0x01)
	char pad_4D1[0x7]; // 0x4d1(0x07)
	double IsFocused; // 0x4d8(0x08)
	int32_t LastHoveredSegment; // 0x4e0(0x04)
	int32_t LastSelectedSegment; // 0x4e4(0x04)

	enum class EActivationPreference GetActivationPreferenceForAction(struct FAresConditionalInputAction Action); // Function WBP_Panel_RadialSprayWheel.WBP_Panel_RadialSprayWheel_C.GetActivationPreferenceForAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	int32_t UpdateHoveredItem(float Angle, float Magnitude); // Function WBP_Panel_RadialSprayWheel.WBP_Panel_RadialSprayWheel_C.UpdateHoveredItem // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_Panel_RadialSprayWheel.WBP_Panel_RadialSprayWheel_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetHoveredMouseCursorAngleFromCenter(struct FGeometry InGeometry, double& Angle); // Function WBP_Panel_RadialSprayWheel.WBP_Panel_RadialSprayWheel_C.GetHoveredMouseCursorAngleFromCenter // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIsFocused(double IsFocused); // Function WBP_Panel_RadialSprayWheel.WBP_Panel_RadialSprayWheel_C.SetIsFocused // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Initialize(int32_t StartIndex); // Function WBP_Panel_RadialSprayWheel.WBP_Panel_RadialSprayWheel_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Panel_RadialSprayWheel.WBP_Panel_RadialSprayWheel_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_Panel_RadialSprayWheel.WBP_Panel_RadialSprayWheel_C.OnKeyUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_Panel_RadialSprayWheel.WBP_Panel_RadialSprayWheel_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ResetRadialMenu(); // Function WBP_Panel_RadialSprayWheel.WBP_Panel_RadialSprayWheel_C.ResetRadialMenu // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateSegments(); // Function WBP_Panel_RadialSprayWheel.WBP_Panel_RadialSprayWheel_C.CreateSegments // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateWheelStateFromInput(); // Function WBP_Panel_RadialSprayWheel.WBP_Panel_RadialSprayWheel_C.UpdateWheelStateFromInput // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	int32_t UpdateSelectedItem(float Angle, float Magnitude); // Function WBP_Panel_RadialSprayWheel.WBP_Panel_RadialSprayWheel_C.UpdateSelectedItem // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetNavigationRules(); // Function WBP_Panel_RadialSprayWheel.WBP_Panel_RadialSprayWheel_C.SetNavigationRules // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Parse Stick Angle(); // Function WBP_Panel_RadialSprayWheel.WBP_Panel_RadialSprayWheel_C.Parse Stick Angle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	double CalculateAngleFromVector2D(struct FVector2D A); // Function WBP_Panel_RadialSprayWheel.WBP_Panel_RadialSprayWheel_C.CalculateAngleFromVector2D // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetupMaterial(); // Function WBP_Panel_RadialSprayWheel.WBP_Panel_RadialSprayWheel_C.SetupMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_RadialSprayWheel.WBP_Panel_RadialSprayWheel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function WBP_Panel_RadialSprayWheel.WBP_Panel_RadialSprayWheel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function WBP_Panel_RadialSprayWheel.WBP_Panel_RadialSprayWheel_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void SlowTick(); // Function WBP_Panel_RadialSprayWheel.WBP_Panel_RadialSprayWheel_C.SlowTick // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function WBP_Panel_RadialSprayWheel.WBP_Panel_RadialSprayWheel_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function WBP_Panel_RadialSprayWheel.WBP_Panel_RadialSprayWheel_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Panel_RadialSprayWheel(int32_t EntryPoint); // Function WBP_Panel_RadialSprayWheel.WBP_Panel_RadialSprayWheel_C.ExecuteUbergraph_WBP_Panel_RadialSprayWheel // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

