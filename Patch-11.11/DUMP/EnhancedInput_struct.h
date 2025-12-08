// Enum EnhancedInput.EPlayerMappableKeySlot
enum class EPlayerMappableKeySlot : uint8 {
	First = 0,
	Second = 1,
	Third = 2,
	Fourth = 3,
	Fifth = 4,
	Sixth = 5,
	Seventh = 6,
	Unspecified = 7,
	Max = 8,
	EPlayerMappableKeySlot_MAX = 9
};

// Enum EnhancedInput.EInputActionValueType
enum class EInputActionValueType : uint8 {
	Boolean = 0,
	Axis1D = 1,
	Axis2D = 2,
	Axis3D = 3,
	EInputActionValueType_MAX = 4
};

// Enum EnhancedInput.EMappingQueryResult
enum class EMappingQueryResult : uint8 {
	Error_EnhancedInputNotEnabled = 0,
	Error_InputContextNotInActiveContexts = 1,
	Error_InvalidAction = 2,
	NotMappable = 3,
	MappingAvailable = 4,
	EMappingQueryResult_MAX = 5
};

// Enum EnhancedInput.EMappingQueryIssue
enum class EMappingQueryIssue : uint8 {
	NoIssue = 0,
	ReservedByAction = 1,
	HidesExistingMapping = 2,
	HiddenByExistingMapping = 4,
	CollisionWithMappingInSameContext = 8,
	ForcesTypePromotion = 16,
	ForcesTypeDemotion = 32,
	EMappingQueryIssue_MAX = 33
};

// Enum EnhancedInput.EPlayerMappableKeySettingBehaviors
enum class EPlayerMappableKeySettingBehaviors : uint8 {
	InheritSettingsFromAction = 0,
	OverrideSettings = 1,
	IgnoreSettings = 2,
	EPlayerMappableKeySettingBehaviors_MAX = 3
};

// Enum EnhancedInput.EInputMappingRebuildType
enum class EInputMappingRebuildType : uint8 {
	None = 0,
	Rebuild = 1,
	RebuildWithFlush = 2,
	EInputMappingRebuildType_MAX = 3
};

// Enum EnhancedInput.EInputActionAccumulationBehavior
enum class EInputActionAccumulationBehavior : uint8 {
	TakeHighestAbsoluteValue = 0,
	Cumulative = 1,
	EInputActionAccumulationBehavior_MAX = 2
};

// Enum EnhancedInput.EDeadZoneType
enum class EDeadZoneType : uint8 {
	Axial = 0,
	Radial = 1,
	EDeadZoneType_MAX = 2
};

// Enum EnhancedInput.EFOVScalingType
enum class EFOVScalingType : uint8 {
	Standard = 0,
	UE4_BackCompat = 1,
	EFOVScalingType_MAX = 2
};

// Enum EnhancedInput.EInputAxisSwizzle
enum class EInputAxisSwizzle : uint8 {
	YXZ = 0,
	ZYX = 1,
	XZY = 2,
	YZX = 3,
	ZXY = 4,
	EInputAxisSwizzle_MAX = 5
};

// Enum EnhancedInput.ETriggerState
enum class ETriggerState : uint8 {
	None = 0,
	Ongoing = 1,
	Triggered = 2,
	ETriggerState_MAX = 3
};

// Enum EnhancedInput.ETriggerEvent
enum class ETriggerEvent : uint8 {
	None = 0,
	Triggered = 1,
	Started = 2,
	Ongoing = 4,
	Canceled = 8,
	Completed = 16,
	ETriggerEvent_MAX = 17
};

// Enum EnhancedInput.ETriggerType
enum class ETriggerType : uint8 {
	Explicit = 0,
	Implicit = 1,
	Blocker = 2,
	ETriggerType_MAX = 3
};

// Enum EnhancedInput.ETriggerEventsSupported
enum class ETriggerEventsSupported : uint8 {
	None = 0,
	Instant = 1,
	Uninterruptible = 2,
	Ongoing = 4,
	All = 7,
	ETriggerEventsSupported_MAX = 8
};

// ScriptStruct EnhancedInput.InputActionValue
// Size: 0x20 (Inherited: 0x00)
struct FInputActionValue {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct EnhancedInput.PlayerMappableKeyProfileCreationArgs
// Size: 0x38 (Inherited: 0x00)
struct FPlayerMappableKeyProfileCreationArgs {
	struct UEnhancedPlayerMappableKeyProfile* ProfileType; // 0x00(0x08)
	struct FGameplayTag ProfileIdentifier; // 0x08(0x0c)
	struct FPlatformUserId UserId; // 0x14(0x04)
	struct FText DisplayName; // 0x18(0x18)
	char bSetAsCurrentProfile : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct EnhancedInput.PlayerKeyMapping
// Size: 0xb0 (Inherited: 0x00)
struct FPlayerKeyMapping {
	struct FName MappingName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText DisplayName; // 0x10(0x18)
	struct FText DisplayCategory; // 0x28(0x18)
	enum class EPlayerMappableKeySlot Slot; // 0x40(0x01)
	char bIsDirty : 1; // 0x41(0x01)
	char pad_41_1 : 7; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
	struct FKey DefaultKey; // 0x48(0x20)
	struct FKey CurrentKey; // 0x68(0x20)
	struct FHardwareDeviceIdentifier HardwareDeviceId; // 0x88(0x20)
	struct UInputAction* AssociatedInputAction; // 0xa8(0x08)
};

// ScriptStruct EnhancedInput.MapPlayerKeyArgs
// Size: 0x50 (Inherited: 0x00)
struct FMapPlayerKeyArgs {
	struct FName MappingName; // 0x00(0x0c)
	enum class EPlayerMappableKeySlot Slot; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FKey NewKey; // 0x10(0x20)
	struct FName HardwareDeviceId; // 0x30(0x0c)
	struct FGameplayTag ProfileId; // 0x3c(0x0c)
	char bCreateMatchingSlotIfNeeded : 1; // 0x48(0x01)
	char bDeferOnSettingsChangedBroadcast : 1; // 0x48(0x01)
	char pad_48_2 : 6; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct EnhancedInput.KeyMappingRow
// Size: 0x50 (Inherited: 0x00)
struct FKeyMappingRow {
	struct TSet<struct FPlayerKeyMapping> Mappings; // 0x00(0x50)
};

// ScriptStruct EnhancedInput.PlayerMappableKeyQueryOptions
// Size: 0x38 (Inherited: 0x00)
struct FPlayerMappableKeyQueryOptions {
	struct FName MappingName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FKey KeyToMatch; // 0x10(0x20)
	enum class EPlayerMappableKeySlot SlotToMatch; // 0x30(0x01)
	char bMatchBasicKeyTypes : 1; // 0x31(0x01)
	char bMatchKeyAxisType : 1; // 0x31(0x01)
	char pad_31_2 : 6; // 0x31(0x01)
	enum class EHardwareDevicePrimaryType RequiredDeviceType; // 0x32(0x01)
	char pad_33[0x1]; // 0x33(0x01)
	int32_t RequiredDeviceFlags; // 0x34(0x04)
};

// ScriptStruct EnhancedInput.MappingQueryIssue
// Size: 0x18 (Inherited: 0x00)
struct FMappingQueryIssue {
	enum class EMappingQueryIssue Issue; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UInputMappingContext* BlockingContext; // 0x08(0x08)
	struct UInputAction* BlockingAction; // 0x10(0x08)
};

// ScriptStruct EnhancedInput.PlayerMappableKeySlot
// Size: 0x04 (Inherited: 0x00)
struct FPlayerMappableKeySlot {
	int32_t SlotNumber; // 0x00(0x04)
};

// ScriptStruct EnhancedInput.PlayerMappableKeyOptions
// Size: 0x48 (Inherited: 0x00)
struct FPlayerMappableKeyOptions {
	struct UObject* MetaData; // 0x00(0x08)
	struct FName Name; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText DisplayName; // 0x18(0x18)
	struct FText DisplayCategory; // 0x30(0x18)
};

// ScriptStruct EnhancedInput.EnhancedActionKeyMapping
// Size: 0x58 (Inherited: 0x00)
struct FEnhancedActionKeyMapping {
	struct TArray<struct UInputTrigger*> Triggers; // 0x00(0x10)
	struct TArray<struct UInputModifier*> Modifiers; // 0x10(0x10)
	struct UInputAction* Action; // 0x20(0x08)
	struct FKey Key; // 0x28(0x20)
	char bShouldBeIgnored : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	enum class EPlayerMappableKeySettingBehaviors SettingBehavior; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
	struct UPlayerMappableKeySettings* PlayerMappableKeySettings; // 0x50(0x08)
};

// ScriptStruct EnhancedInput.BlueprintEnhancedInputActionBinding
// Size: 0x18 (Inherited: 0x00)
struct FBlueprintEnhancedInputActionBinding {
	struct UInputAction* InputAction; // 0x00(0x08)
	enum class ETriggerEvent TriggerEvent; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FName FunctionNameToBind; // 0x0c(0x0c)
};

// ScriptStruct EnhancedInput.DefaultContextSetting
// Size: 0x38 (Inherited: 0x00)
struct FDefaultContextSetting {
	struct TSoftObjectPtr<UInputMappingContext> InputMappingContext; // 0x00(0x30)
	int32_t Priority; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct EnhancedInput.ModifyContextOptions
// Size: 0x01 (Inherited: 0x00)
struct FModifyContextOptions {
	char bIgnoreAllPressedKeysUntilRelease : 1; // 0x00(0x01)
	char bForceImmediately : 1; // 0x00(0x01)
	char bNotifyUserSettings : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
};

// ScriptStruct EnhancedInput.KeyConsumptionOptions
// Size: 0x18 (Inherited: 0x00)
struct FKeyConsumptionOptions {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct EnhancedInput.InjectedInputArray
// Size: 0x10 (Inherited: 0x00)
struct FInjectedInputArray {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct EnhancedInput.InputActionInstance
// Size: 0x60 (Inherited: 0x00)
struct FInputActionInstance {
	struct UInputAction* SourceAction; // 0x00(0x08)
	char pad_8[0xb]; // 0x08(0x0b)
	enum class ETriggerEvent TriggerEvent; // 0x13(0x01)
	float LastTriggeredWorldTime; // 0x14(0x04)
	struct TArray<struct UInputTrigger*> Triggers; // 0x18(0x10)
	struct TArray<struct UInputModifier*> Modifiers; // 0x28(0x10)
	char pad_38[0x20]; // 0x38(0x20)
	float ElapsedProcessedTime; // 0x58(0x04)
	float ElapsedTriggeredTime; // 0x5c(0x04)
};

// ScriptStruct EnhancedInput.BlueprintInputDebugKeyDelegateBinding
// Size: 0x40 (Inherited: 0x00)
struct FBlueprintInputDebugKeyDelegateBinding {
	struct FInputChord InputChord; // 0x00(0x28)
	enum class EInputEvent InputKeyEvent; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FName FunctionNameToBind; // 0x2c(0x0c)
	bool bExecuteWhenPaused; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct EnhancedInput.InputComboStepData
// Size: 0x10 (Inherited: 0x00)
struct FInputComboStepData {
	struct UInputAction* ComboStepAction; // 0x00(0x08)
	char ComboStepCompletionStates; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float TimeToPressKey; // 0x0c(0x04)
};

// ScriptStruct EnhancedInput.InputCancelAction
// Size: 0x10 (Inherited: 0x00)
struct FInputCancelAction {
	struct UInputAction* CancelAction; // 0x00(0x08)
	char CancellationStates; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

