// Enum CoreUObject.EAutomationEventType
enum class EAutomationEventType : uint8 {
	Info = 0,
	Warning = 1,
	Error = 2,
	EAutomationEventType_MAX = 3
};

// Enum CoreUObject.ERangeBoundTypes
enum class ERangeBoundTypes : uint8 {
	Exclusive = 0,
	Inclusive = 1,
	Open = 2,
	ERangeBoundTypes_MAX = 3
};

// Enum CoreUObject.EInterpCurveMode
enum class EInterpCurveMode : uint8 {
	CIM_Linear = 0,
	CIM_CurveAuto = 1,
	CIM_Constant = 2,
	CIM_CurveUser = 3,
	CIM_CurveBreak = 4,
	CIM_CurveAutoClamped = 5,
	CIM_MAX = 6
};

// Enum CoreUObject.EInputDeviceConnectionState
enum class EInputDeviceConnectionState : uint8 {
	Invalid = 0,
	Unknown = 1,
	Disconnected = 2,
	Connected = 3,
	EInputDeviceConnectionState_MAX = 4
};

// Enum CoreUObject.ELocalizedTextSourceCategory
enum class ELocalizedTextSourceCategory : uint8 {
	Game = 0,
	Engine = 1,
	Editor = 2,
	ELocalizedTextSourceCategory_MAX = 3
};

// Enum CoreUObject.EStringMeasurementUnits
enum class EStringMeasurementUnits : uint8 {
	CodeUnits_UTF16 = 0,
	CodeUnits_UTF8 = 1,
	CodePoints = 2,
	EStringMeasurementUnits_MAX = 3
};

// Enum CoreUObject.ELifetimeCondition
enum class ELifetimeCondition : uint8 {
	COND_None = 0,
	COND_InitialOnly = 1,
	COND_OwnerOnly = 2,
	COND_SkipOwner = 3,
	COND_SimulatedOnly = 4,
	COND_AutonomousOnly = 5,
	COND_SimulatedOrPhysics = 6,
	COND_InitialOrOwner = 7,
	COND_Custom = 8,
	COND_ReplayOrOwner = 9,
	COND_ReplayOnly = 10,
	COND_SimulatedOnlyNoReplay = 11,
	COND_SimulatedOrPhysicsNoReplay = 12,
	COND_SkipReplay = 13,
	COND_Dynamic = 14,
	COND_Never = 15,
	COND_NetGroup = 16,
	COND_Max = 17,
	COND_Max = 18
};

// Enum CoreUObject.ESearchCase
enum class ESearchCase : uint8 {
	CaseSensitive = 0,
	IgnoreCase = 1,
	ESearchCase_MAX = 2
};

// Enum CoreUObject.ESearchDir
enum class ESearchDir : uint8 {
	FromStart = 0,
	FromEnd = 1,
	ESearchDir_MAX = 2
};

// Enum CoreUObject.ELogTimes
enum class ELogTimes : uint8 {
	None = 0,
	UTC = 1,
	SinceGStartTime = 2,
	Local = 3,
	ELogTimes_MAX = 4
};

// Enum CoreUObject.EAxis
enum class EAxis : uint8 {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	EAxis_MAX = 4
};

// Enum CoreUObject.EAxisList
enum class EAxisList : uint8 {
	None = 0,
	X = 1,
	Y = 2,
	Z = 4,
	Screen = 8,
	XY = 3,
	XZ = 5,
	YZ = 6,
	XYZ = 7,
	All = 15,
	ZRotation = 6,
	Rotate2D = 8,
	EAxisList_MAX = 16
};

// Enum CoreUObject.EPixelFormat
enum class EPixelFormat : uint8 {
	PF_Unknown = 0,
	PF_A32B32G32R32F = 1,
	PF_B8G8R8A8 = 2,
	PF_G8 = 3,
	PF_G16 = 4,
	PF_DXT1 = 5,
	PF_DXT3 = 6,
	PF_DXT5 = 7,
	PF_UYVY = 8,
	PF_FloatRGB = 9,
	PF_FloatRGBA = 10,
	PF_DepthStencil = 11,
	PF_ShadowDepth = 12,
	PF_R32_FLOAT = 13,
	PF_G16R16 = 14,
	PF_G16R16F = 15,
	PF_G16R16F_FILTER = 16,
	PF_G32R32F = 17,
	PF_A2B10G10R10 = 18,
	PF_A16B16G16R16 = 19,
	PF_D24 = 20,
	PF_R16F = 21,
	PF_R16F_FILTER = 22,
	PF_BC5 = 23,
	PF_V8U8 = 24,
	PF_A1 = 25,
	PF_FloatR11G11B10 = 26,
	PF_A8 = 27,
	PF_R32_UINT = 28,
	PF_R32_SINT = 29,
	PF_PVRTC2 = 30,
	PF_PVRTC4 = 31,
	PF_R16_UINT = 32,
	PF_R16_SINT = 33,
	PF_R16G16B16A16_UINT = 34,
	PF_R16G16B16A16_SINT = 35,
	PF_R5G6B5_UNORM = 36,
	PF_R8G8B8A8 = 37,
	PF_A8R8G8B8 = 38,
	PF_BC4 = 39,
	PF_R8G8 = 40,
	PF_ATC_RGB = 41,
	PF_ATC_RGBA_E = 42,
	PF_ATC_RGBA_I = 43,
	PF_X24_G8 = 44,
	PF_ETC1 = 45,
	PF_ETC2_RGB = 46,
	PF_ETC2_RGBA = 47,
	PF_R32G32B32A32_UINT = 48,
	PF_R16G16_UINT = 49,
	PF_ASTC_4x4 = 50,
	PF_ASTC_6x6 = 51,
	PF_ASTC_8x8 = 52,
	PF_ASTC_10x10 = 53,
	PF_ASTC_12x12 = 54,
	PF_BC6H = 55,
	PF_BC7 = 56,
	PF_R8_UINT = 57,
	PF_L8 = 58,
	PF_XGXR8 = 59,
	PF_R8G8B8A8_UINT = 60,
	PF_R8G8B8A8_SNORM = 61,
	PF_R16G16B16A16_UNORM = 62,
	PF_R16G16B16A16_SNORM = 63,
	PF_PLATFORM_HDR_1 = 64,
	PF_PLATFORM_HDR_2 = 65,
	PF_PLATFORM_HDR_3 = 66,
	PF_NV12 = 67,
	PF_R32G32_UINT = 68,
	PF_ETC2_R11_EAC = 69,
	PF_ETC2_RG11_EAC = 70,
	PF_R8 = 71,
	PF_B5G5R5A1_UNORM = 72,
	PF_ASTC_4x4_HDR = 73,
	PF_ASTC_6x6_HDR = 74,
	PF_ASTC_8x8_HDR = 75,
	PF_ASTC_10x10_HDR = 76,
	PF_ASTC_12x12_HDR = 77,
	PF_G16R16_SNORM = 78,
	PF_R8G8_UINT = 79,
	PF_R32G32B32_UINT = 80,
	PF_R32G32B32_SINT = 81,
	PF_R32G32B32F = 82,
	PF_R8_SINT = 83,
	PF_R64_UINT = 84,
	PF_R9G9B9EXP5 = 85,
	PF_P010 = 86,
	PF_ASTC_4x4_NORM_RG = 87,
	PF_ASTC_6x6_NORM_RG = 88,
	PF_ASTC_8x8_NORM_RG = 89,
	PF_ASTC_10x10_NORM_RG = 90,
	PF_ASTC_12x12_NORM_RG = 91,
	PF_MAX = 92
};

// Enum CoreUObject.EMouseCursor
enum class EMouseCursor : uint8 {
	None = 0,
	Default = 1,
	TextEditBeam = 2,
	ResizeLeftRight = 3,
	ResizeUpDown = 4,
	ResizeSouthEast = 5,
	ResizeSouthWest = 6,
	CardinalCross = 7,
	Crosshairs = 8,
	Hand = 9,
	GrabHand = 10,
	GrabHandClosed = 11,
	SlashedCircle = 12,
	EyeDropper = 13,
	EMouseCursor_MAX = 14
};

// Enum CoreUObject.EUnit
enum class EUnit : uint8 {
	Micrometers = 0,
	Millimeters = 1,
	Centimeters = 2,
	Meters = 3,
	Kilometers = 4,
	Inches = 5,
	Feet = 6,
	Yards = 7,
	Miles = 8,
	Lightyears = 9,
	Degrees = 10,
	Radians = 11,
	CentimetersPerSecond = 12,
	MetersPerSecond = 13,
	KilometersPerHour = 14,
	MilesPerHour = 15,
	Celsius = 16,
	Farenheit = 17,
	Kelvin = 18,
	Micrograms = 19,
	Milligrams = 20,
	Grams = 21,
	Kilograms = 22,
	MetricTons = 23,
	Ounces = 24,
	Pounds = 25,
	Stones = 26,
	Newtons = 27,
	PoundsForce = 28,
	KilogramsForce = 29,
	KilogramCentimetersPerSecondSquared = 30,
	NewtonMeters = 31,
	KilogramCentimetersSquaredPerSecondSquared = 32,
	Hertz = 33,
	Kilohertz = 34,
	Megahertz = 35,
	Gigahertz = 36,
	RevolutionsPerMinute = 37,
	Bytes = 38,
	Kilobytes = 39,
	Megabytes = 40,
	Gigabytes = 41,
	Terabytes = 42,
	Lumens = 43,
	Milliseconds = 50,
	Seconds = 51,
	Minutes = 52,
	Hours = 53,
	Days = 54,
	Months = 55,
	Years = 56,
	Multiplier = 59,
	Percentage = 58,
	Unspecified = 64,
	EUnit_MAX = 65
};

// Enum CoreUObject.EPropertyAccessChangeNotifyMode
enum class EPropertyAccessChangeNotifyMode : uint8 {
	Default = 0,
	Never = 1,
	Always = 2,
	EPropertyAccessChangeNotifyMode_MAX = 3
};

// Enum CoreUObject.EAppMsgCategory
enum class EAppMsgCategory : uint8 {
	Warning = 0,
	Error = 1,
	Success = 2,
	Info = 3,
	EAppMsgCategory_MAX = 4
};

// Enum CoreUObject.EAppReturnType
enum class EAppReturnType : uint8 {
	No = 0,
	Yes = 1,
	YesAll = 2,
	NoAll = 3,
	Cancel = 4,
	Ok = 5,
	Retry = 6,
	Continue = 7,
	EAppReturnType_MAX = 8
};

// Enum CoreUObject.EAppMsgType
enum class EAppMsgType : uint8 {
	Ok = 0,
	YesNo = 1,
	OkCancel = 2,
	YesNoCancel = 3,
	CancelRetryContinue = 4,
	YesNoYesAllNoAll = 5,
	YesNoYesAllNoAllCancel = 6,
	YesNoYesAll = 7,
	EAppMsgType_MAX = 8
};

// Enum CoreUObject.EInputDeviceTriggerMask
enum class EInputDeviceTriggerMask : uint8 {
	None = 0,
	Left = 1,
	Right = 2,
	All = 3,
	EInputDeviceTriggerMask_MAX = 4
};

// Enum CoreUObject.EDataValidationResult
enum class EDataValidationResult : uint8 {
	Invalid = 0,
	Valid = 1,
	NotValidated = 2,
	EDataValidationResult_MAX = 3
};

// ScriptStruct CoreUObject.ARFilter
// Size: 0x150 (Inherited: 0x00)
struct FARFilter {
	struct TArray<struct FName> PackageNames; // 0x00(0x10)
	struct TArray<struct FName> PackagePaths; // 0x10(0x10)
	struct TArray<None> SoftObjectPaths; // 0x20(0x10)
	struct TArray<struct FName> ClassNames; // 0x30(0x10)
	struct TArray<struct FTopLevelAssetPath> ClassPaths; // 0x40(0x10)
	char pad_50[0x50]; // 0x50(0x50)
	struct TSet<struct FName> RecursiveClassesExclusionSet; // 0xa0(0x50)
	struct TSet<struct FTopLevelAssetPath> RecursiveClassPathsExclusionSet; // 0xf0(0x50)
	bool bRecursivePaths; // 0x140(0x01)
	bool bRecursiveClasses; // 0x141(0x01)
	bool bIncludeOnlyOnDiskAssets; // 0x142(0x01)
	char pad_143[0xd]; // 0x143(0x0d)
};

// ScriptStruct CoreUObject.TopLevelAssetPath
// Size: 0x18 (Inherited: 0x00)
struct FTopLevelAssetPath {
	struct FName PackageName; // 0x00(0x0c)
	struct FName AssetName; // 0x0c(0x0c)
};

// ScriptStruct CoreUObject.SoftObjectPath
// Size: 0x28 (Inherited: 0x00)
struct FSoftObjectPath {
	struct FTopLevelAssetPath AssetPath; // 0x00(0x18)
	struct FString SubPathString; // 0x18(0x10)
};

// ScriptStruct CoreUObject.AssetBundleData
// Size: 0x10 (Inherited: 0x00)
struct FAssetBundleData {
	struct TArray<None> Bundles; // 0x00(0x10)
};

// ScriptStruct CoreUObject.AssetBundleEntry
// Size: 0x20 (Inherited: 0x00)
struct FAssetBundleEntry {
	struct FName BundleName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FTopLevelAssetPath> AssetPaths; // 0x10(0x10)
};

// ScriptStruct CoreUObject.AssetData
// Size: 0x80 (Inherited: 0x00)
struct FAssetData {
	struct FName PackageName; // 0x00(0x0c)
	struct FName PackagePath; // 0x0c(0x0c)
	struct FName AssetName; // 0x18(0x0c)
	struct FName AssetClass; // 0x24(0x0c)
	struct FTopLevelAssetPath AssetClassPath; // 0x30(0x18)
	char pad_48[0x38]; // 0x48(0x38)
};

// ScriptStruct CoreUObject.AutomationEvent
// Size: 0x38 (Inherited: 0x00)
struct FAutomationEvent {
	enum class EAutomationEventType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Message; // 0x08(0x10)
	struct FString Context; // 0x18(0x10)
	struct FGuid Artifact; // 0x28(0x10)
};

// ScriptStruct CoreUObject.Guid
// Size: 0x10 (Inherited: 0x00)
struct FGuid {
	int32_t A; // 0x00(0x04)
	int32_t B; // 0x04(0x04)
	int32_t C; // 0x08(0x04)
	int32_t D; // 0x0c(0x04)
};

// ScriptStruct CoreUObject.AutomationExecutionEntry
// Size: 0x58 (Inherited: 0x00)
struct FAutomationExecutionEntry {
	struct FAutomationEvent event; // 0x00(0x38)
	struct FString Filename; // 0x38(0x10)
	int32_t LineNumber; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FDateTime Timestamp; // 0x50(0x08)
};

// ScriptStruct CoreUObject.DateTime
// Size: 0x08 (Inherited: 0x00)
struct FDateTime {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct CoreUObject.Box
// Size: 0x38 (Inherited: 0x00)
struct FBox {
	struct FVector Min; // 0x00(0x18)
	struct FVector Max; // 0x18(0x18)
	bool IsValid; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct CoreUObject.Vector
// Size: 0x18 (Inherited: 0x00)
struct FVector {
	double X; // 0x00(0x08)
	double Y; // 0x08(0x08)
	double Z; // 0x10(0x08)
};

// ScriptStruct CoreUObject.Box2D
// Size: 0x28 (Inherited: 0x00)
struct FBox2D {
	struct FVector2D Min; // 0x00(0x10)
	struct FVector2D Max; // 0x10(0x10)
	bool bIsValid; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct CoreUObject.Vector2D
// Size: 0x10 (Inherited: 0x00)
struct FVector2D {
	double X; // 0x00(0x08)
	double Y; // 0x08(0x08)
};

// ScriptStruct CoreUObject.Box2f
// Size: 0x14 (Inherited: 0x00)
struct FBox2f {
	struct FVector2f Min; // 0x00(0x08)
	struct FVector2f Max; // 0x08(0x08)
	bool bIsValid; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct CoreUObject.Vector2f
// Size: 0x08 (Inherited: 0x00)
struct FVector2f {
	float X; // 0x00(0x04)
	float Y; // 0x04(0x04)
};

// ScriptStruct CoreUObject.Box3d
// Size: 0x38 (Inherited: 0x00)
struct FBox3d {
	struct FVector3d Min; // 0x00(0x18)
	struct FVector3d Max; // 0x18(0x18)
	bool IsValid; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct CoreUObject.Vector3d
// Size: 0x18 (Inherited: 0x00)
struct FVector3d {
	double X; // 0x00(0x08)
	double Y; // 0x08(0x08)
	double Z; // 0x10(0x08)
};

// ScriptStruct CoreUObject.Box3f
// Size: 0x1c (Inherited: 0x00)
struct FBox3f {
	struct FVector3f Min; // 0x00(0x0c)
	struct FVector3f Max; // 0x0c(0x0c)
	bool IsValid; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct CoreUObject.Vector3f
// Size: 0x0c (Inherited: 0x00)
struct FVector3f {
	float X; // 0x00(0x04)
	float Y; // 0x04(0x04)
	float Z; // 0x08(0x04)
};

// ScriptStruct CoreUObject.BoxSphereBounds
// Size: 0x38 (Inherited: 0x00)
struct FBoxSphereBounds {
	struct FVector Origin; // 0x00(0x18)
	struct FVector BoxExtent; // 0x18(0x18)
	double SphereRadius; // 0x30(0x08)
};

// ScriptStruct CoreUObject.BoxSphereBounds3d
// Size: 0x38 (Inherited: 0x00)
struct FBoxSphereBounds3d {
	struct FVector3d Origin; // 0x00(0x18)
	struct FVector3d BoxExtent; // 0x18(0x18)
	double SphereRadius; // 0x30(0x08)
};

// ScriptStruct CoreUObject.BoxSphereBounds3f
// Size: 0x1c (Inherited: 0x00)
struct FBoxSphereBounds3f {
	struct FVector3f Origin; // 0x00(0x0c)
	struct FVector3f BoxExtent; // 0x0c(0x0c)
	float SphereRadius; // 0x18(0x04)
};

// ScriptStruct CoreUObject.Color
// Size: 0x04 (Inherited: 0x00)
struct FColor {
	char B; // 0x00(0x01)
	char G; // 0x01(0x01)
	char R; // 0x02(0x01)
	char A; // 0x03(0x01)
};

// ScriptStruct CoreUObject.DirectoryPath
// Size: 0x10 (Inherited: 0x00)
struct FDirectoryPath {
	struct FString Path; // 0x00(0x10)
};

// ScriptStruct CoreUObject.DoubleRange
// Size: 0x20 (Inherited: 0x00)
struct FDoubleRange {
	struct FDoubleRangeBound LowerBound; // 0x00(0x10)
	struct FDoubleRangeBound UpperBound; // 0x10(0x10)
};

// ScriptStruct CoreUObject.DoubleRangeBound
// Size: 0x10 (Inherited: 0x00)
struct FDoubleRangeBound {
	enum class ERangeBoundTypes Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	double Value; // 0x08(0x08)
};

// ScriptStruct CoreUObject.FallbackStruct
// Size: 0x01 (Inherited: 0x00)
struct FFallbackStruct {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct CoreUObject.FilePath
// Size: 0x10 (Inherited: 0x00)
struct FFilePath {
	struct FString FilePath; // 0x00(0x10)
};

// ScriptStruct CoreUObject.FloatInterval
// Size: 0x08 (Inherited: 0x00)
struct FFloatInterval {
	float Min; // 0x00(0x04)
	float Max; // 0x04(0x04)
};

// ScriptStruct CoreUObject.FloatRange
// Size: 0x10 (Inherited: 0x00)
struct FFloatRange {
	struct FFloatRangeBound LowerBound; // 0x00(0x08)
	struct FFloatRangeBound UpperBound; // 0x08(0x08)
};

// ScriptStruct CoreUObject.FloatRangeBound
// Size: 0x08 (Inherited: 0x00)
struct FFloatRangeBound {
	enum class ERangeBoundTypes Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Value; // 0x04(0x04)
};

// ScriptStruct CoreUObject.FrameNumber
// Size: 0x04 (Inherited: 0x00)
struct FFrameNumber {
	int32_t Value; // 0x00(0x04)
};

// ScriptStruct CoreUObject.FrameNumberRange
// Size: 0x10 (Inherited: 0x00)
struct FFrameNumberRange {
	struct FFrameNumberRangeBound LowerBound; // 0x00(0x08)
	struct FFrameNumberRangeBound UpperBound; // 0x08(0x08)
};

// ScriptStruct CoreUObject.FrameNumberRangeBound
// Size: 0x08 (Inherited: 0x00)
struct FFrameNumberRangeBound {
	enum class ERangeBoundTypes Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FFrameNumber Value; // 0x04(0x04)
};

// ScriptStruct CoreUObject.FrameRate
// Size: 0x08 (Inherited: 0x00)
struct FFrameRate {
	int32_t Numerator; // 0x00(0x04)
	int32_t Denominator; // 0x04(0x04)
};

// ScriptStruct CoreUObject.FrameTime
// Size: 0x08 (Inherited: 0x00)
struct FFrameTime {
	struct FFrameNumber FrameNumber; // 0x00(0x04)
	float SubFrame; // 0x04(0x04)
};

// ScriptStruct CoreUObject.InputDeviceId
// Size: 0x04 (Inherited: 0x00)
struct FInputDeviceId {
	int32_t InternalId; // 0x00(0x04)
};

// ScriptStruct CoreUObject.Int32Interval
// Size: 0x08 (Inherited: 0x00)
struct FInt32Interval {
	int32_t Min; // 0x00(0x04)
	int32_t Max; // 0x04(0x04)
};

// ScriptStruct CoreUObject.Int32Point
// Size: 0x08 (Inherited: 0x00)
struct FInt32Point {
	int32_t X; // 0x00(0x04)
	int32_t Y; // 0x04(0x04)
};

// ScriptStruct CoreUObject.Int32Range
// Size: 0x10 (Inherited: 0x00)
struct FInt32Range {
	struct FInt32RangeBound LowerBound; // 0x00(0x08)
	struct FInt32RangeBound UpperBound; // 0x08(0x08)
};

// ScriptStruct CoreUObject.Int32RangeBound
// Size: 0x08 (Inherited: 0x00)
struct FInt32RangeBound {
	enum class ERangeBoundTypes Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Value; // 0x04(0x04)
};

// ScriptStruct CoreUObject.Int32Vector
// Size: 0x0c (Inherited: 0x00)
struct FInt32Vector {
	int32_t X; // 0x00(0x04)
	int32_t Y; // 0x04(0x04)
	int32_t Z; // 0x08(0x04)
};

// ScriptStruct CoreUObject.Int32Vector2
// Size: 0x08 (Inherited: 0x00)
struct FInt32Vector2 {
	int32_t X; // 0x00(0x04)
	int32_t Y; // 0x04(0x04)
};

// ScriptStruct CoreUObject.Int32Vector4
// Size: 0x10 (Inherited: 0x00)
struct FInt32Vector4 {
	int32_t X; // 0x00(0x04)
	int32_t Y; // 0x04(0x04)
	int32_t Z; // 0x08(0x04)
	int32_t W; // 0x0c(0x04)
};

// ScriptStruct CoreUObject.Int64Point
// Size: 0x10 (Inherited: 0x00)
struct FInt64Point {
	int64_t X; // 0x00(0x08)
	int64_t Y; // 0x08(0x08)
};

// ScriptStruct CoreUObject.Int64Vector
// Size: 0x18 (Inherited: 0x00)
struct FInt64Vector {
	int64_t X; // 0x00(0x08)
	int64_t Y; // 0x08(0x08)
	int64_t Z; // 0x10(0x08)
};

// ScriptStruct CoreUObject.Int64Vector2
// Size: 0x10 (Inherited: 0x00)
struct FInt64Vector2 {
	int64_t X; // 0x00(0x08)
	int64_t Y; // 0x08(0x08)
};

// ScriptStruct CoreUObject.Int64Vector4
// Size: 0x20 (Inherited: 0x00)
struct FInt64Vector4 {
	int64_t X; // 0x00(0x08)
	int64_t Y; // 0x08(0x08)
	int64_t Z; // 0x10(0x08)
	int64_t W; // 0x18(0x08)
};

// ScriptStruct CoreUObject.InterpCurveFloat
// Size: 0x18 (Inherited: 0x00)
struct FInterpCurveFloat {
	struct TArray<struct FInterpCurvePointFloat> Points; // 0x00(0x10)
	bool bIsLooped; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float LoopKeyOffset; // 0x14(0x04)
};

// ScriptStruct CoreUObject.InterpCurvePointFloat
// Size: 0x14 (Inherited: 0x00)
struct FInterpCurvePointFloat {
	float InVal; // 0x00(0x04)
	float OutVal; // 0x04(0x04)
	float ArriveTangent; // 0x08(0x04)
	float LeaveTangent; // 0x0c(0x04)
	enum class EInterpCurveMode InterpMode; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct CoreUObject.InterpCurveLinearColor
// Size: 0x18 (Inherited: 0x00)
struct FInterpCurveLinearColor {
	struct TArray<struct FInterpCurvePointLinearColor> Points; // 0x00(0x10)
	bool bIsLooped; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float LoopKeyOffset; // 0x14(0x04)
};

// ScriptStruct CoreUObject.InterpCurvePointLinearColor
// Size: 0x38 (Inherited: 0x00)
struct FInterpCurvePointLinearColor {
	float InVal; // 0x00(0x04)
	struct FLinearColor OutVal; // 0x04(0x10)
	struct FLinearColor ArriveTangent; // 0x14(0x10)
	struct FLinearColor LeaveTangent; // 0x24(0x10)
	enum class EInterpCurveMode InterpMode; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// ScriptStruct CoreUObject.LinearColor
// Size: 0x10 (Inherited: 0x00)
struct FLinearColor {
	float R; // 0x00(0x04)
	float G; // 0x04(0x04)
	float B; // 0x08(0x04)
	float A; // 0x0c(0x04)
};

// ScriptStruct CoreUObject.InterpCurvePointQuat
// Size: 0x80 (Inherited: 0x00)
struct FInterpCurvePointQuat {
	float InVal; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)
	struct FQuat OutVal; // 0x10(0x20)
	struct FQuat ArriveTangent; // 0x30(0x20)
	struct FQuat LeaveTangent; // 0x50(0x20)
	enum class EInterpCurveMode InterpMode; // 0x70(0x01)
	char pad_71[0xf]; // 0x71(0x0f)
};

// ScriptStruct CoreUObject.Quat
// Size: 0x20 (Inherited: 0x00)
struct FQuat {
	double X; // 0x00(0x08)
	double Y; // 0x08(0x08)
	double Z; // 0x10(0x08)
	double W; // 0x18(0x08)
};

// ScriptStruct CoreUObject.InterpCurvePointTwoVectors
// Size: 0xa0 (Inherited: 0x00)
struct FInterpCurvePointTwoVectors {
	float InVal; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FTwoVectors OutVal; // 0x08(0x30)
	struct FTwoVectors ArriveTangent; // 0x38(0x30)
	struct FTwoVectors LeaveTangent; // 0x68(0x30)
	enum class EInterpCurveMode InterpMode; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// ScriptStruct CoreUObject.TwoVectors
// Size: 0x30 (Inherited: 0x00)
struct FTwoVectors {
	struct FVector v1; // 0x00(0x18)
	struct FVector v2; // 0x18(0x18)
};

// ScriptStruct CoreUObject.InterpCurvePointVector
// Size: 0x58 (Inherited: 0x00)
struct FInterpCurvePointVector {
	float InVal; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FVector OutVal; // 0x08(0x18)
	struct FVector ArriveTangent; // 0x20(0x18)
	struct FVector LeaveTangent; // 0x38(0x18)
	enum class EInterpCurveMode InterpMode; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct CoreUObject.InterpCurvePointVector2D
// Size: 0x40 (Inherited: 0x00)
struct FInterpCurvePointVector2D {
	float InVal; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FVector2D OutVal; // 0x08(0x10)
	struct FVector2D ArriveTangent; // 0x18(0x10)
	struct FVector2D LeaveTangent; // 0x28(0x10)
	enum class EInterpCurveMode InterpMode; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct CoreUObject.InterpCurveQuat
// Size: 0x18 (Inherited: 0x00)
struct FInterpCurveQuat {
	struct TArray<struct FInterpCurvePointQuat> Points; // 0x00(0x10)
	bool bIsLooped; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float LoopKeyOffset; // 0x14(0x04)
};

// ScriptStruct CoreUObject.InterpCurveTwoVectors
// Size: 0x18 (Inherited: 0x00)
struct FInterpCurveTwoVectors {
	struct TArray<struct FInterpCurvePointTwoVectors> Points; // 0x00(0x10)
	bool bIsLooped; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float LoopKeyOffset; // 0x14(0x04)
};

// ScriptStruct CoreUObject.InterpCurveVector
// Size: 0x18 (Inherited: 0x00)
struct FInterpCurveVector {
	struct TArray<struct FInterpCurvePointVector> Points; // 0x00(0x10)
	bool bIsLooped; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float LoopKeyOffset; // 0x14(0x04)
};

// ScriptStruct CoreUObject.InterpCurveVector2D
// Size: 0x18 (Inherited: 0x00)
struct FInterpCurveVector2D {
	struct TArray<struct FInterpCurvePointVector2D> Points; // 0x00(0x10)
	bool bIsLooped; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float LoopKeyOffset; // 0x14(0x04)
};

// ScriptStruct CoreUObject.IntPoint
// Size: 0x08 (Inherited: 0x00)
struct FIntPoint {
	int32_t X; // 0x00(0x04)
	int32_t Y; // 0x04(0x04)
};

// ScriptStruct CoreUObject.IntVector
// Size: 0x0c (Inherited: 0x00)
struct FIntVector {
	int32_t X; // 0x00(0x04)
	int32_t Y; // 0x04(0x04)
	int32_t Z; // 0x08(0x04)
};

// ScriptStruct CoreUObject.IntVector2
// Size: 0x08 (Inherited: 0x00)
struct FIntVector2 {
	int32_t X; // 0x00(0x04)
	int32_t Y; // 0x04(0x04)
};

// ScriptStruct CoreUObject.IntVector4
// Size: 0x10 (Inherited: 0x00)
struct FIntVector4 {
	int32_t X; // 0x00(0x04)
	int32_t Y; // 0x04(0x04)
	int32_t Z; // 0x08(0x04)
	int32_t W; // 0x0c(0x04)
};

// ScriptStruct CoreUObject.Matrix
// Size: 0x80 (Inherited: 0x00)
struct FMatrix {
	struct FPlane XPlane; // 0x00(0x20)
	struct FPlane YPlane; // 0x20(0x20)
	struct FPlane ZPlane; // 0x40(0x20)
	struct FPlane WPlane; // 0x60(0x20)
};

// ScriptStruct CoreUObject.Plane
// Size: 0x20 (Inherited: 0x18)
struct FPlane : FVector {
	double W; // 0x18(0x08)
};

// ScriptStruct CoreUObject.Matrix44d
// Size: 0x80 (Inherited: 0x00)
struct FMatrix44d {
	struct FPlane4d XPlane; // 0x00(0x20)
	struct FPlane4d YPlane; // 0x20(0x20)
	struct FPlane4d ZPlane; // 0x40(0x20)
	struct FPlane4d WPlane; // 0x60(0x20)
};

// ScriptStruct CoreUObject.Plane4d
// Size: 0x20 (Inherited: 0x18)
struct FPlane4d : FVector3d {
	double W; // 0x18(0x08)
};

// ScriptStruct CoreUObject.Matrix44f
// Size: 0x40 (Inherited: 0x00)
struct FMatrix44f {
	struct FPlane4f XPlane; // 0x00(0x10)
	struct FPlane4f YPlane; // 0x10(0x10)
	struct FPlane4f ZPlane; // 0x20(0x10)
	struct FPlane4f WPlane; // 0x30(0x10)
};

// ScriptStruct CoreUObject.Plane4f
// Size: 0x10 (Inherited: 0x0c)
struct FPlane4f : FVector3f {
	float W; // 0x0c(0x04)
};

// ScriptStruct CoreUObject.OrientedBox
// Size: 0x78 (Inherited: 0x00)
struct FOrientedBox {
	struct FVector Center; // 0x00(0x18)
	struct FVector AxisX; // 0x18(0x18)
	struct FVector AxisY; // 0x30(0x18)
	struct FVector AxisZ; // 0x48(0x18)
	double ExtentX; // 0x60(0x08)
	double ExtentY; // 0x68(0x08)
	double ExtentZ; // 0x70(0x08)
};

// ScriptStruct CoreUObject.PackedNormal
// Size: 0x04 (Inherited: 0x00)
struct FPackedNormal {
	char X; // 0x00(0x01)
	char Y; // 0x01(0x01)
	char Z; // 0x02(0x01)
	char W; // 0x03(0x01)
};

// ScriptStruct CoreUObject.PackedRGB10A2N
// Size: 0x04 (Inherited: 0x00)
struct FPackedRGB10A2N {
	int32_t Packed; // 0x00(0x04)
};

// ScriptStruct CoreUObject.PackedRGBA16N
// Size: 0x08 (Inherited: 0x00)
struct FPackedRGBA16N {
	int32_t XY; // 0x00(0x04)
	int32_t ZW; // 0x04(0x04)
};

// ScriptStruct CoreUObject.PlatformInputDeviceState
// Size: 0x08 (Inherited: 0x00)
struct FPlatformInputDeviceState {
	struct FPlatformUserId OwningPlatformUser; // 0x00(0x04)
	enum class EInputDeviceConnectionState ConnectionState; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct CoreUObject.PlatformUserId
// Size: 0x04 (Inherited: 0x00)
struct FPlatformUserId {
	int32_t InternalId; // 0x00(0x04)
};

// ScriptStruct CoreUObject.PolyglotTextData
// Size: 0xb8 (Inherited: 0x00)
struct FPolyglotTextData {
	enum class ELocalizedTextSourceCategory Category; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString NativeCulture; // 0x08(0x10)
	struct FString Namespace; // 0x18(0x10)
	struct FString Key; // 0x28(0x10)
	struct FString NativeString; // 0x38(0x10)
	struct TMap<struct FString, struct FString> LocalizedStrings; // 0x48(0x50)
	bool bIsMinimalPatch; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct FText CachedText; // 0xa0(0x18)
};

// ScriptStruct CoreUObject.PrimaryAssetId
// Size: 0x18 (Inherited: 0x00)
struct FPrimaryAssetId {
	struct FPrimaryAssetType PrimaryAssetType; // 0x00(0x0c)
	struct FName PrimaryAssetName; // 0x0c(0x0c)
};

// ScriptStruct CoreUObject.PrimaryAssetType
// Size: 0x0c (Inherited: 0x00)
struct FPrimaryAssetType {
	struct FName Name; // 0x00(0x0c)
};

// ScriptStruct CoreUObject.QualifiedFrameTime
// Size: 0x10 (Inherited: 0x00)
struct FQualifiedFrameTime {
	struct FFrameTime Time; // 0x00(0x08)
	struct FFrameRate Rate; // 0x08(0x08)
};

// ScriptStruct CoreUObject.Quat4d
// Size: 0x20 (Inherited: 0x00)
struct FQuat4d {
	double X; // 0x00(0x08)
	double Y; // 0x08(0x08)
	double Z; // 0x10(0x08)
	double W; // 0x18(0x08)
};

// ScriptStruct CoreUObject.Quat4f
// Size: 0x10 (Inherited: 0x00)
struct FQuat4f {
	float X; // 0x00(0x04)
	float Y; // 0x04(0x04)
	float Z; // 0x08(0x04)
	float W; // 0x0c(0x04)
};

// ScriptStruct CoreUObject.RandomStream
// Size: 0x18 (Inherited: 0x00)
struct FRandomStream {
	char pad_0[0x10]; // 0x00(0x10)
	int32_t InitialSeed; // 0x10(0x04)
	int32_t Seed; // 0x14(0x04)
};

// ScriptStruct CoreUObject.Ray
// Size: 0x30 (Inherited: 0x00)
struct FRay {
	struct FVector Origin; // 0x00(0x18)
	struct FVector Direction; // 0x18(0x18)
};

// ScriptStruct CoreUObject.Ray3d
// Size: 0x30 (Inherited: 0x00)
struct FRay3d {
	struct FVector3d Origin; // 0x00(0x18)
	struct FVector3d Direction; // 0x18(0x18)
};

// ScriptStruct CoreUObject.Ray3f
// Size: 0x18 (Inherited: 0x00)
struct FRay3f {
	struct FVector3f Origin; // 0x00(0x0c)
	struct FVector3f Direction; // 0x0c(0x0c)
};

// ScriptStruct CoreUObject.Rotator
// Size: 0x18 (Inherited: 0x00)
struct FRotator {
	double Pitch; // 0x00(0x08)
	double Yaw; // 0x08(0x08)
	double Roll; // 0x10(0x08)
};

// ScriptStruct CoreUObject.Rotator3d
// Size: 0x18 (Inherited: 0x00)
struct FRotator3d {
	double Pitch; // 0x00(0x08)
	double Yaw; // 0x08(0x08)
	double Roll; // 0x10(0x08)
};

// ScriptStruct CoreUObject.Rotator3f
// Size: 0x0c (Inherited: 0x00)
struct FRotator3f {
	float Pitch; // 0x00(0x04)
	float Yaw; // 0x04(0x04)
	float Roll; // 0x08(0x04)
};

// ScriptStruct CoreUObject.SoftClassPath
// Size: 0x28 (Inherited: 0x28)
struct FSoftClassPath : FSoftObjectPath {
};

// ScriptStruct CoreUObject.Sphere
// Size: 0x20 (Inherited: 0x00)
struct FSphere {
	struct FVector Center; // 0x00(0x18)
	double W; // 0x18(0x08)
};

// ScriptStruct CoreUObject.Sphere3d
// Size: 0x20 (Inherited: 0x00)
struct FSphere3d {
	struct FVector3d Center; // 0x00(0x18)
	double W; // 0x18(0x08)
};

// ScriptStruct CoreUObject.Sphere3f
// Size: 0x10 (Inherited: 0x00)
struct FSphere3f {
	struct FVector3f Center; // 0x00(0x0c)
	float W; // 0x0c(0x04)
};

// ScriptStruct CoreUObject.TemplateString
// Size: 0x10 (Inherited: 0x00)
struct FTemplateString {
	struct FString Template; // 0x00(0x10)
};

// ScriptStruct CoreUObject.TestUndeclaredScriptStructObjectReferencesTest
// Size: 0x68 (Inherited: 0x00)
struct FTestUndeclaredScriptStructObjectReferencesTest {
	struct UObject* StrongObjectPointer; // 0x00(0x08)
	struct TSoftObjectPtr<UObject> SoftObjectPointer; // 0x08(0x30)
	struct FSoftObjectPath SoftObjectPath; // 0x38(0x28)
	struct TWeakObjectPtr<struct UObject> WeakObjectPointer; // 0x60(0x08)
};

// ScriptStruct CoreUObject.TestUninitializedScriptStructMembersTest
// Size: 0x18 (Inherited: 0x00)
struct FTestUninitializedScriptStructMembersTest {
	struct UObject* UninitializedObjectReference; // 0x00(0x08)
	struct UObject* InitializedObjectReference; // 0x08(0x08)
	float UnusedValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct CoreUObject.Timecode
// Size: 0x14 (Inherited: 0x00)
struct FTimecode {
	int32_t Hours; // 0x00(0x04)
	int32_t Minutes; // 0x04(0x04)
	int32_t Seconds; // 0x08(0x04)
	int32_t Frames; // 0x0c(0x04)
	bool bDropFrameFormat; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct CoreUObject.Timespan
// Size: 0x08 (Inherited: 0x00)
struct FTimespan {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct CoreUObject.Transform
// Size: 0x60 (Inherited: 0x00)
struct FTransform {
	struct FQuat Rotation; // 0x00(0x20)
	struct FVector Translation; // 0x20(0x18)
	char pad_38[0x8]; // 0x38(0x08)
	struct FVector Scale3D; // 0x40(0x18)
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct CoreUObject.Transform3d
// Size: 0x60 (Inherited: 0x00)
struct FTransform3d {
	struct FQuat4d Rotation; // 0x00(0x20)
	struct FVector3d Translation; // 0x20(0x18)
	char pad_38[0x8]; // 0x38(0x08)
	struct FVector3d Scale3D; // 0x40(0x18)
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct CoreUObject.Transform3f
// Size: 0x30 (Inherited: 0x00)
struct FTransform3f {
	struct FQuat4f Rotation; // 0x00(0x10)
	struct FVector3f Translation; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FVector3f Scale3D; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct CoreUObject.Uint32Point
// Size: 0x08 (Inherited: 0x00)
struct FUint32Point {
	int32_t X; // 0x00(0x04)
	int32_t Y; // 0x04(0x04)
};

// ScriptStruct CoreUObject.Uint32Vector
// Size: 0x0c (Inherited: 0x00)
struct FUint32Vector {
	uint32_t X; // 0x00(0x04)
	uint32_t Y; // 0x04(0x04)
	uint32_t Z; // 0x08(0x04)
};

// ScriptStruct CoreUObject.Uint32Vector2
// Size: 0x08 (Inherited: 0x00)
struct FUint32Vector2 {
	uint32_t X; // 0x00(0x04)
	uint32_t Y; // 0x04(0x04)
};

// ScriptStruct CoreUObject.Uint32Vector4
// Size: 0x10 (Inherited: 0x00)
struct FUint32Vector4 {
	uint32_t X; // 0x00(0x04)
	uint32_t Y; // 0x04(0x04)
	uint32_t Z; // 0x08(0x04)
	uint32_t W; // 0x0c(0x04)
};

// ScriptStruct CoreUObject.Uint64Point
// Size: 0x10 (Inherited: 0x00)
struct FUint64Point {
	int64_t X; // 0x00(0x08)
	int64_t Y; // 0x08(0x08)
};

// ScriptStruct CoreUObject.Uint64Vector
// Size: 0x18 (Inherited: 0x00)
struct FUint64Vector {
	uint64_t X; // 0x00(0x08)
	uint64_t Y; // 0x08(0x08)
	uint64_t Z; // 0x10(0x08)
};

// ScriptStruct CoreUObject.Uint64Vector2
// Size: 0x10 (Inherited: 0x00)
struct FUint64Vector2 {
	uint64_t X; // 0x00(0x08)
	uint64_t Y; // 0x08(0x08)
};

// ScriptStruct CoreUObject.Uint64Vector4
// Size: 0x20 (Inherited: 0x00)
struct FUint64Vector4 {
	uint64_t X; // 0x00(0x08)
	uint64_t Y; // 0x08(0x08)
	uint64_t Z; // 0x10(0x08)
	uint64_t W; // 0x18(0x08)
};

// ScriptStruct CoreUObject.UintPoint
// Size: 0x08 (Inherited: 0x00)
struct FUintPoint {
	int32_t X; // 0x00(0x04)
	int32_t Y; // 0x04(0x04)
};

// ScriptStruct CoreUObject.UintVector
// Size: 0x0c (Inherited: 0x00)
struct FUintVector {
	uint32_t X; // 0x00(0x04)
	uint32_t Y; // 0x04(0x04)
	uint32_t Z; // 0x08(0x04)
};

// ScriptStruct CoreUObject.UintVector2
// Size: 0x08 (Inherited: 0x00)
struct FUintVector2 {
	uint32_t X; // 0x00(0x04)
	uint32_t Y; // 0x04(0x04)
};

// ScriptStruct CoreUObject.UintVector4
// Size: 0x10 (Inherited: 0x00)
struct FUintVector4 {
	uint32_t X; // 0x00(0x04)
	uint32_t Y; // 0x04(0x04)
	uint32_t Z; // 0x08(0x04)
	uint32_t W; // 0x0c(0x04)
};

// ScriptStruct CoreUObject.UnicodeStringLength
// Size: 0x08 (Inherited: 0x00)
struct FUnicodeStringLength {
	enum class EStringMeasurementUnits Units; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Length; // 0x04(0x04)
};

// ScriptStruct CoreUObject.Vector4
// Size: 0x20 (Inherited: 0x00)
struct FVector4 {
	double X; // 0x00(0x08)
	double Y; // 0x08(0x08)
	double Z; // 0x10(0x08)
	double W; // 0x18(0x08)
};

// ScriptStruct CoreUObject.Vector4d
// Size: 0x20 (Inherited: 0x00)
struct FVector4d {
	double X; // 0x00(0x08)
	double Y; // 0x08(0x08)
	double Z; // 0x10(0x08)
	double W; // 0x18(0x08)
};

// ScriptStruct CoreUObject.Vector4f
// Size: 0x10 (Inherited: 0x00)
struct FVector4f {
	float X; // 0x00(0x04)
	float Y; // 0x04(0x04)
	float Z; // 0x08(0x04)
	float W; // 0x0c(0x04)
};

