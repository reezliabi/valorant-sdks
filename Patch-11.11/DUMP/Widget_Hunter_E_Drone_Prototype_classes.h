// WidgetBlueprintGeneratedClass Widget_Hunter_E_Drone_Prototype.Widget_Hunter_E_Drone_Prototype_C
// Size: 0x518 (Inherited: 0x330)
struct UWidget_Hunter_E_Drone_Prototype_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UWidgetAnimation* DartArmedAnimation_fixed; // 0x338(0x08)
	struct UWidgetAnimation* Intro; // 0x340(0x08)
	struct UWidgetAnimation* DamageAnimation; // 0x348(0x08)
	struct UImage* Angle_Left; // 0x350(0x08)
	struct UImage* Angle_Right; // 0x358(0x08)
	struct UImage* Arrow; // 0x360(0x08)
	struct UImage* BottomCircle_Solo; // 0x368(0x08)
	struct UImage* BottomCirle; // 0x370(0x08)
	struct UImage* Bottominnerleft; // 0x378(0x08)
	struct UImage* Bottominnerright; // 0x380(0x08)
	struct UImage* BottomOutterleft; // 0x388(0x08)
	struct UImage* BottomOutterright; // 0x390(0x08)
	struct UImage* BstteryIcon; // 0x398(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x3a0(0x08)
	struct UCanvasPanel* DartArmed; // 0x3a8(0x08)
	struct UImage* DartIcon; // 0x3b0(0x08)
	struct UTextBlock* Dartready; // 0x3b8(0x08)
	struct UProgressBar* FakeArmor; // 0x3c0(0x08)
	struct UProgressBar* FakeDart; // 0x3c8(0x08)
	struct UProgressBar* FakeTime; // 0x3d0(0x08)
	struct UImage* Guide; // 0x3d8(0x08)
	struct UImage* HealthIcon; // 0x3e0(0x08)
	struct UHunter_E_Drone_EdgeLine_C* Hunter_E_Drone_EdgeLine; // 0x3e8(0x08)
	struct UImage* Image_2; // 0x3f0(0x08)
	struct UImage* Image_3; // 0x3f8(0x08)
	struct UImage* Image_4; // 0x400(0x08)
	struct UImage* Image_5; // 0x408(0x08)
	struct UImage* LeftLine; // 0x410(0x08)
	struct UImage* LeftRing; // 0x418(0x08)
	struct UImage* LineBottom; // 0x420(0x08)
	struct UImage* LineTop; // 0x428(0x08)
	struct UImage* MiddleCircle; // 0x430(0x08)
	struct UImage* MovableCrossHair; // 0x438(0x08)
	struct UImage* MovableCrossHait_Normal; // 0x440(0x08)
	struct UProgressBar* ProgressBar_Armor; // 0x448(0x08)
	struct UProgressBar* ProgressBar_Dart; // 0x450(0x08)
	struct UImage* RightLine; // 0x458(0x08)
	struct UImage* RightRing; // 0x460(0x08)
	struct UScaleBox* ScaleBox_1; // 0x468(0x08)
	struct UProgressBar* TimeRemaining; // 0x470(0x08)
	struct UImage* TopInnerleft; // 0x478(0x08)
	struct UImage* TopInnerright; // 0x480(0x08)
	struct UImage* TopOtterright; // 0x488(0x08)
	struct UImage* TopOutterright; // 0x490(0x08)
	struct AShooterCharacter* OwningDrone; // 0x498(0x08)
	double CurrentHealthPercent; // 0x4a0(0x08)
	struct AAbility_Hunter_E_Drone_Abilities_Prototype_C* AbilityComponent; // 0x4a8(0x08)
	struct FVector2D ScreenCenter; // 0x4b0(0x10)
	double MaxDistanceFromScreenCenter; // 0x4c0(0x08)
	double MaxDistanceFromScreenCenterSquared; // 0x4c8(0x08)
	struct FVector2D CurrentRecticlePosition; // 0x4d0(0x10)
	bool WasOnCooldown; // 0x4e0(0x01)
	char pad_4E1[0x7]; // 0x4e1(0x07)
	struct UTimedStateComponent* DurationState; // 0x4e8(0x08)
	double XOffset; // 0x4f0(0x08)
	double YOffset; // 0x4f8(0x08)
	bool AimInUse; // 0x500(0x01)
	char pad_501[0x7]; // 0x501(0x07)
	struct UCurveFloat* DistanceVelocityCurve; // 0x508(0x08)
	double GamepadDroneSensitivity; // 0x510(0x08)

	void InitializeDistanceVelocityCurve(struct UCurveFloat*& DistanceVelocityCurve); // Function Widget_Hunter_E_Drone_Prototype.Widget_Hunter_E_Drone_Prototype_C.InitializeDistanceVelocityCurve // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateAltitude(); // Function Widget_Hunter_E_Drone_Prototype.Widget_Hunter_E_Drone_Prototype_C.UpdateAltitude // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateVisibleCrossHairPosisiton(); // Function Widget_Hunter_E_Drone_Prototype.Widget_Hunter_E_Drone_Prototype_C.UpdateVisibleCrossHairPosisiton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	enum class ESlateVisibility Get_MousePrompts_Visibility_1(); // Function Widget_Hunter_E_Drone_Prototype.Widget_Hunter_E_Drone_Prototype_C.Get_MousePrompts_Visibility_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	double Get_ProgressBar_1_Percent_2(); // Function Widget_Hunter_E_Drone_Prototype.Widget_Hunter_E_Drone_Prototype_C.Get_ProgressBar_1_Percent_2 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	enum class ESlateVisibility Get_ProgressBar_1_Visibility_1(); // Function Widget_Hunter_E_Drone_Prototype.Widget_Hunter_E_Drone_Prototype_C.Get_ProgressBar_1_Visibility_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	double Get_TimeRemaining_Percent_1(); // Function Widget_Hunter_E_Drone_Prototype.Widget_Hunter_E_Drone_Prototype_C.Get_TimeRemaining_Percent_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	double Get_ProgressBar_1_Percent_1(); // Function Widget_Hunter_E_Drone_Prototype.Widget_Hunter_E_Drone_Prototype_C.Get_ProgressBar_1_Percent_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	double Get_ProgressBar_0_Percent_1(); // Function Widget_Hunter_E_Drone_Prototype.Widget_Hunter_E_Drone_Prototype_C.Get_ProgressBar_0_Percent_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Construct(); // Function Widget_Hunter_E_Drone_Prototype.Widget_Hunter_E_Drone_Prototype_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void SetupDroneHUD(struct AAbility_Hunter_E_Drone_Abilities_Prototype_C* AbilityComponent, struct UTimedStateComponent* DurationState); // Function Widget_Hunter_E_Drone_Prototype.Widget_Hunter_E_Drone_Prototype_C.SetupDroneHUD // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void LaserUnequipped(); // Function Widget_Hunter_E_Drone_Prototype.Widget_Hunter_E_Drone_Prototype_C.LaserUnequipped // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnStateExit_Event_1(struct UScriptStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function Widget_Hunter_E_Drone_Prototype.Widget_Hunter_E_Drone_Prototype_C.OnStateExit_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function Widget_Hunter_E_Drone_Prototype.Widget_Hunter_E_Drone_Prototype_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnStateEnter_ChargingDart(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Widget_Hunter_E_Drone_Prototype.Widget_Hunter_E_Drone_Prototype_C.OnStateEnter_ChargingDart // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnStateExit_Dart Readydy(struct UScriptStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function Widget_Hunter_E_Drone_Prototype.Widget_Hunter_E_Drone_Prototype_C.OnStateExit_Dart Readydy // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function Widget_Hunter_E_Drone_Prototype.Widget_Hunter_E_Drone_Prototype_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Widget_Hunter_E_Drone_Prototype(int32_t EntryPoint); // Function Widget_Hunter_E_Drone_Prototype.Widget_Hunter_E_Drone_Prototype_C.ExecuteUbergraph_Widget_Hunter_E_Drone_Prototype // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

