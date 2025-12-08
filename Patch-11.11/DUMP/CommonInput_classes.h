// Class CommonInput.CommonInputActionDomain
// Size: 0x48 (Inherited: 0x38)
struct UCommonInputActionDomain : UDataAsset {
	enum class ECommonInputEventFlowBehavior Behavior; // 0x38(0x04)
	enum class ECommonInputEventFlowBehavior InnerBehavior; // 0x3c(0x04)
	bool bUseActionDomainDesiredInputConfig; // 0x40(0x01)
	enum class ECommonInputMode InputMode; // 0x41(0x01)
	enum class EMouseCaptureMode MouseCaptureMode; // 0x42(0x01)
	char pad_43[0x5]; // 0x43(0x05)
};

// Class CommonInput.CommonInputActionDomainTable
// Size: 0x50 (Inherited: 0x38)
struct UCommonInputActionDomainTable : UDataAsset {
	struct TArray<struct UCommonInputActionDomain*> ActionDomains; // 0x38(0x10)
	enum class ECommonInputMode InputMode; // 0x48(0x01)
	enum class EMouseCaptureMode MouseCaptureMode; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// Class CommonInput.CommonUIInputData
// Size: 0xa0 (Inherited: 0x30)
struct UCommonUIInputData : UObject {
	struct FDataTableRowHandle DefaultClickAction; // 0x30(0x18)
	struct FDataTableRowHandle DefaultBackAction; // 0x48(0x18)
	struct TSoftClassPtr<UObject> DefaultHoldData; // 0x60(0x30)
	struct UInputAction* EnhancedInputClickAction; // 0x90(0x08)
	struct UInputAction* EnhancedInputBackAction; // 0x98(0x08)
};

// Class CommonInput.CommonUIHoldData
// Size: 0x48 (Inherited: 0x30)
struct UCommonUIHoldData : UObject {
	struct FInputHoldData KeyboardAndMouse; // 0x30(0x08)
	struct FInputHoldData Gamepad; // 0x38(0x08)
	struct FInputHoldData Touch; // 0x40(0x08)
};

// Class CommonInput.CommonInputBaseControllerData
// Size: 0x118 (Inherited: 0x30)
struct UCommonInputBaseControllerData : UObject {
	enum class ECommonInputType InputType; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FName GamepadName; // 0x34(0x0c)
	struct FText GamepadDisplayName; // 0x40(0x18)
	struct FText GamepadCategory; // 0x58(0x18)
	struct FText GamepadPlatformName; // 0x70(0x18)
	struct TArray<struct FInputDeviceIdentifierPair> GamepadHardwareIdMapping; // 0x88(0x10)
	struct TSoftObjectPtr<UTexture2D> ControllerTexture; // 0x98(0x30)
	struct TSoftObjectPtr<UTexture2D> ControllerButtonMaskTexture; // 0xc8(0x30)
	struct TArray<struct FCommonInputKeyBrushConfiguration> InputBrushDataMap; // 0xf8(0x10)
	struct TArray<struct FCommonInputKeySetBrushConfiguration> InputBrushKeySets; // 0x108(0x10)

	struct TArray<struct FName> GetRegisteredGamepads(); // Function CommonInput.CommonInputBaseControllerData.GetRegisteredGamepads // (Final|Native|Static|Public) // @ game+0x4e1ae50
};

// Class CommonInput.CommonInputPlatformSettings
// Size: 0x88 (Inherited: 0x50)
struct UCommonInputPlatformSettings : UPlatformSettings {
	enum class ECommonInputType DefaultInputType; // 0x50(0x01)
	bool bSupportsMouseAndKeyboard; // 0x51(0x01)
	bool bSupportsTouch; // 0x52(0x01)
	bool bSupportsGamepad; // 0x53(0x01)
	struct FName DefaultGamepadName; // 0x54(0x0c)
	bool bCanChangeGamepadType; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct TArray<struct TSoftClassPtr<UObject>> ControllerData; // 0x68(0x10)
	struct TArray<struct UCommonInputBaseControllerData*> ControllerDataClasses; // 0x78(0x10)
};

// Class CommonInput.CommonInputSettings
// Size: 0x140 (Inherited: 0x48)
struct UCommonInputSettings : UDeveloperSettings {
	struct TSoftClassPtr<UObject> InputData; // 0x48(0x30)
	struct FPerPlatformSettings PlatformInput; // 0x78(0x10)
	struct TMap<struct FName, struct FCommonInputPlatformBaseData> CommonInputPlatformData; // 0x88(0x50)
	bool bEnableInputMethodThrashingProtection; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	int32_t InputMethodThrashingLimit; // 0xdc(0x04)
	double InputMethodThrashingWindowInSeconds; // 0xe0(0x08)
	double InputMethodThrashingCooldownInSeconds; // 0xe8(0x08)
	bool bAllowOutOfFocusDeviceInput; // 0xf0(0x01)
	bool bEnableDefaultInputConfig; // 0xf1(0x01)
	bool bEnableEnhancedInputSupport; // 0xf2(0x01)
	char pad_F3[0x5]; // 0xf3(0x05)
	struct TSoftObjectPtr<UCommonInputActionDomainTable> ActionDomainTable; // 0xf8(0x30)
	char pad_128[0x8]; // 0x128(0x08)
	struct UCommonUIInputData* InputDataClass; // 0x130(0x08)
	struct UCommonInputActionDomainTable* ActionDomainTablePtr; // 0x138(0x08)

	bool IsEnhancedInputSupportEnabled(); // Function CommonInput.CommonInputSettings.IsEnhancedInputSupportEnabled // (Final|Native|Static|Public) // @ game+0x4e1e000
};

// Class CommonInput.CommonInputSubsystem
// Size: 0x120 (Inherited: 0x38)
struct UCommonInputSubsystem : ULocalPlayerSubsystem {
	char pad_38[0x38]; // 0x38(0x38)
	struct FMulticastInlineDelegate OnInputMethodChanged; // 0x70(0x10)
	int32_t NumberOfInputMethodChangesRecently; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	double LastInputMethodChangeTime; // 0x88(0x08)
	double LastTimeInputMethodThrashingBegan; // 0x90(0x08)
	enum class ECommonInputType LastInputType; // 0x98(0x01)
	enum class ECommonInputType CurrentInputType; // 0x99(0x01)
	char pad_9A[0x2]; // 0x9a(0x02)
	struct FName GamepadInputType; // 0x9c(0x0c)
	struct TMap<struct FName, enum class ECommonInputType> CurrentInputLocks; // 0xa8(0x50)
	char pad_F8[0x8]; // 0xf8(0x08)
	struct UCommonInputActionDomainTable* ActionDomainTable; // 0x100(0x08)
	bool bIsGamepadSimulatedClick; // 0x108(0x01)
	char pad_109[0x17]; // 0x109(0x17)

	bool ShouldShowInputKeys(); // Function CommonInput.CommonInputSubsystem.ShouldShowInputKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e1f720
	void SetGamepadInputType(struct FName InGamepadInputType); // Function CommonInput.CommonInputSubsystem.SetGamepadInputType // (Final|Native|Public|BlueprintCallable) // @ game+0x4e1f790
	void SetCurrentInputType(enum class ECommonInputType NewInputType); // Function CommonInput.CommonInputSubsystem.SetCurrentInputType // (Final|Native|Public|BlueprintCallable) // @ game+0x4e1f910
	bool IsUsingPointerInput(); // Function CommonInput.CommonInputSubsystem.IsUsingPointerInput // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e1f750
	bool IsInputMethodActive(enum class ECommonInputType InputMethod); // Function CommonInput.CommonInputSubsystem.IsInputMethodActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e1fa90
	enum class ECommonInputType GetDefaultInputType(); // Function CommonInput.CommonInputSubsystem.GetDefaultInputType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e1fa00
	enum class ECommonInputType GetCurrentInputType(); // Function CommonInput.CommonInputSubsystem.GetCurrentInputType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e1fa70
	struct FName GetCurrentGamepadName(); // Function CommonInput.CommonInputSubsystem.GetCurrentGamepadName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e1f8e0
	void BroadcastInputMethodChanged(); // Function CommonInput.CommonInputSubsystem.BroadcastInputMethodChanged // (Final|Native|Protected) // @ game+0x4e1f700
};

