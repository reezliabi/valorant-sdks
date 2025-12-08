// Enum ControlRig.ERigElementType
enum class ERigElementType : uint8 {
	None = 0,
	Bone = 1,
	Null = 2,
	Space = 2,
	Control = 4,
	Curve = 8,
	RigidBody = 16,
	Reference = 32,
	Last = 64,
	All = 63,
	ToResetAfterConstructionEvent = 13,
	ERigElementType_MAX = 65
};

// Enum ControlRig.ERigHierarchyNotification
enum class ERigHierarchyNotification : uint8 {
	ElementAdded = 0,
	ElementRemoved = 1,
	ElementRenamed = 2,
	ElementSelected = 3,
	ElementDeselected = 4,
	ParentChanged = 5,
	HierarchyReset = 6,
	ControlSettingChanged = 7,
	ControlVisibilityChanged = 8,
	ControlDrivenListChanged = 9,
	ControlShapeTransformChanged = 10,
	ParentWeightsChanged = 11,
	InteractionBracketOpened = 12,
	InteractionBracketClosed = 13,
	ElementReordered = 14,
	Max = 15,
	ERigHierarchyNotification_MAX = 16
};

// Enum ControlRig.ERigControlTransformChannel
enum class ERigControlTransformChannel : uint8 {
	TranslationX = 0,
	TranslationY = 1,
	TranslationZ = 2,
	Pitch = 3,
	Yaw = 4,
	Roll = 5,
	ScaleX = 6,
	ScaleY = 7,
	ScaleZ = 8,
	ERigControlTransformChannel_MAX = 9
};

// Enum ControlRig.ERigControlVisibility
enum class ERigControlVisibility : uint8 {
	UserDefined = 0,
	BasedOnSelection = 1,
	ERigControlVisibility_MAX = 2
};

// Enum ControlRig.ERigControlAxis
enum class ERigControlAxis : uint8 {
	X = 0,
	Y = 1,
	Z = 2,
	ERigControlAxis_MAX = 3
};

// Enum ControlRig.ERigControlType
enum class ERigControlType : uint8 {
	Bool = 0,
	Float = 1,
	Integer = 2,
	Vector2D = 3,
	Position = 4,
	Scale = 5,
	Rotator = 6,
	Transform = 7,
	TransformNoScale = 8,
	EulerTransform = 9,
	ERigControlType_MAX = 10
};

// Enum ControlRig.ERigControlAnimationType
enum class ERigControlAnimationType : uint8 {
	AnimationControl = 0,
	AnimationChannel = 1,
	ProxyControl = 2,
	VisualCue = 3,
	ERigControlAnimationType_MAX = 4
};

// Enum ControlRig.ERigExecutionType
enum class ERigExecutionType : uint8 {
	Runtime = 0,
	Editing = 1,
	Max = 2,
	ERigExecutionType_MAX = 3
};

// Enum ControlRig.ERigTransformStackEntryType
enum class ERigTransformStackEntryType : uint8 {
	TransformPose = 0,
	ControlOffset = 1,
	ControlShape = 2,
	CurveValue = 3,
	ERigTransformStackEntryType_MAX = 4
};

// Enum ControlRig.ERigTransformType
enum class ERigTransformType : uint8 {
	InitialLocal = 0,
	CurrentLocal = 1,
	InitialGlobal = 2,
	CurrentGlobal = 3,
	NumTransformTypes = 4,
	ERigTransformType_MAX = 5
};

// Enum ControlRig.EControlRigInteractionType
enum class EControlRigInteractionType : uint8 {
	None = 0,
	Translate = 1,
	Rotate = 2,
	Scale = 4,
	All = 7,
	EControlRigInteractionType_MAX = 8
};

// Enum ControlRig.EControlRigVectorKind
enum class EControlRigVectorKind : uint8 {
	Direction = 0,
	Location = 1,
	EControlRigVectorKind_MAX = 2
};

// Enum ControlRig.EControlRigComponentSpace
enum class EControlRigComponentSpace : uint8 {
	WorldSpace = 0,
	ActorSpace = 1,
	ComponentSpace = 2,
	RigSpace = 3,
	LocalSpace = 4,
	Max = 5,
	EControlRigComponentSpace_MAX = 6
};

// Enum ControlRig.EControlRigComponentMapDirection
enum class EControlRigComponentMapDirection : uint8 {
	Input = 0,
	Output = 1,
	EControlRigComponentMapDirection_MAX = 2
};

// Enum ControlRig.ETransformSpaceMode
enum class ETransformSpaceMode : uint8 {
	LocalSpace = 0,
	GlobalSpace = 1,
	BaseSpace = 2,
	BaseJoint = 3,
	Max = 4,
	ETransformSpaceMode_MAX = 5
};

// Enum ControlRig.ETransformGetterType
enum class ETransformGetterType : uint8 {
	Initial = 0,
	Current = 1,
	Max = 2,
	ETransformGetterType_MAX = 3
};

// Enum ControlRig.EControlRigTestDataPlaybackMode
enum class EControlRigTestDataPlaybackMode : uint8 {
	Live = 0,
	ReplayInputs = 1,
	GroundTruth = 2,
	Max = 3,
	EControlRigTestDataPlaybackMode_MAX = 4
};

// Enum ControlRig.ECRSimConstraintType
enum class ECRSimConstraintType : uint8 {
	Distance = 0,
	DistanceFromA = 1,
	DistanceFromB = 2,
	Plane = 3,
	ECRSimConstraintType_MAX = 4
};

// Enum ControlRig.ECRSimPointForceType
enum class ECRSimPointForceType : uint8 {
	Direction = 0,
	ECRSimPointForceType_MAX = 1
};

// Enum ControlRig.ECRSimSoftCollisionType
enum class ECRSimSoftCollisionType : uint8 {
	Plane = 0,
	Sphere = 1,
	Cone = 2,
	ECRSimSoftCollisionType_MAX = 3
};

// Enum ControlRig.EControlRigFKRigExecuteMode
enum class EControlRigFKRigExecuteMode : uint8 {
	Replace = 0,
	Additive = 1,
	Direct = 2,
	Max = 3,
	EControlRigFKRigExecuteMode_MAX = 4
};

// Enum ControlRig.ERigBoneType
enum class ERigBoneType : uint8 {
	Imported = 0,
	User = 1,
	ERigBoneType_MAX = 2
};

// Enum ControlRig.ERigMetadataType
enum class ERigMetadataType : uint8 {
	Bool = 0,
	BoolArray = 1,
	Float = 2,
	FloatArray = 3,
	Int32 = 4,
	Int32Array = 5,
	Name = 6,
	NameArray = 7,
	Vector = 8,
	VectorArray = 9,
	Rotator = 10,
	RotatorArray = 11,
	Quat = 12,
	QuatArray = 13,
	Transform = 14,
	TransformArray = 15,
	LinearColor = 16,
	LinearColorArray = 17,
	RigElementKey = 18,
	RigElementKeyArray = 19,
	Invalid = 20,
	ERigMetadataType_MAX = 21
};

// Enum ControlRig.ERigEvent
enum class ERigEvent : uint8 {
	None = 0,
	RequestAutoKey = 1,
	OpenUndoBracket = 2,
	CloseUndoBracket = 3,
	Max = 4,
	ERigEvent_MAX = 5
};

// Enum ControlRig.EControlRigSetKey
enum class EControlRigSetKey : uint8 {
	DoNotCare = 0,
	Always = 1,
	Never = 2,
	EControlRigSetKey_MAX = 3
};

// Enum ControlRig.ERigControlValueType
enum class ERigControlValueType : uint8 {
	Initial = 0,
	Current = 1,
	Minimum = 2,
	Maximum = 3,
	ERigControlValueType_MAX = 4
};

// Enum ControlRig.ERigSpaceType
enum class ERigSpaceType : uint8 {
	Global = 0,
	Bone = 1,
	Control = 2,
	Space = 3,
	ERigSpaceType_MAX = 4
};

// Enum ControlRig.EMovieSceneControlRigSpaceType
enum class EMovieSceneControlRigSpaceType : uint8 {
	Parent = 0,
	World = 1,
	ControlRig = 2,
	EMovieSceneControlRigSpaceType_MAX = 3
};

// Enum ControlRig.EControlRigDrawHierarchyMode
enum class EControlRigDrawHierarchyMode : uint8 {
	Axes = 0,
	Max = 1,
	EControlRigDrawHierarchyMode_MAX = 2
};

// Enum ControlRig.EAimMode
enum class EAimMode : uint8 {
	AimAtTarget = 0,
	OrientToTarget = 1,
	MAX = 2
};

// Enum ControlRig.EApplyTransformMode
enum class EApplyTransformMode : uint8 {
	Override = 0,
	Additive = 1,
	Max = 2,
	EApplyTransformMode_MAX = 3
};

// Enum ControlRig.ERigSwitchParentMode
enum class ERigSwitchParentMode : uint8 {
	World = 0,
	DefaultParent = 1,
	ParentItem = 2,
	ERigSwitchParentMode_MAX = 3
};

// Enum ControlRig.EControlRigCurveAlignment
enum class EControlRigCurveAlignment : uint8 {
	Front = 0,
	Stretched = 1,
	EControlRigCurveAlignment_MAX = 2
};

// Enum ControlRig.EControlRigModifyBoneMode
enum class EControlRigModifyBoneMode : uint8 {
	OverrideLocal = 0,
	OverrideGlobal = 1,
	AdditiveLocal = 2,
	AdditiveGlobal = 3,
	Max = 4,
	EControlRigModifyBoneMode_MAX = 5
};

// Enum ControlRig.EConstraintInterpType
enum class EConstraintInterpType : uint8 {
	Average = 0,
	Shortest = 1,
	Max = 2,
	EConstraintInterpType_MAX = 3
};

// ScriptStruct ControlRig.RigElementKey
// Size: 0x10 (Inherited: 0x00)
struct FRigElementKey {
	enum class ERigElementType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName Name; // 0x04(0x0c)
};

// ScriptStruct ControlRig.RigBaseElement
// Size: 0xe8 (Inherited: 0x00)
struct FRigBaseElement {
	char pad_0[0x8]; // 0x00(0x08)
	struct FRigElementKey Key; // 0x08(0x10)
	struct FString NameString; // 0x18(0x10)
	int32_t Index; // 0x28(0x04)
	int32_t SubIndex; // 0x2c(0x04)
	char pad_30[0xa8]; // 0x30(0xa8)
	int32_t CreatedAtInstructionIndex; // 0xd8(0x04)
	char pad_DC[0x8]; // 0xdc(0x08)
	bool bSelected; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
};

// ScriptStruct ControlRig.RigTransformElement
// Size: 0x2d0 (Inherited: 0xe8)
struct FRigTransformElement : FRigBaseElement {
	char pad_E8[0x8]; // 0xe8(0x08)
	struct FRigCurrentAndInitialTransform Pose; // 0xf0(0x1a0)
	char pad_290[0x40]; // 0x290(0x40)
};

// ScriptStruct ControlRig.RigCurrentAndInitialTransform
// Size: 0x1a0 (Inherited: 0x00)
struct FRigCurrentAndInitialTransform {
	struct FRigLocalAndGlobalTransform Current; // 0x00(0xd0)
	struct FRigLocalAndGlobalTransform Initial; // 0xd0(0xd0)
};

// ScriptStruct ControlRig.RigLocalAndGlobalTransform
// Size: 0xd0 (Inherited: 0x00)
struct FRigLocalAndGlobalTransform {
	struct FRigComputedTransform Local; // 0x00(0x60)
	struct FRigComputedTransform Global; // 0x60(0x60)
	char pad_C0[0x10]; // 0xc0(0x10)
};

// ScriptStruct ControlRig.RigComputedTransform
// Size: 0x60 (Inherited: 0x00)
struct FRigComputedTransform {
	struct FTransform Transform; // 0x00(0x60)
};

// ScriptStruct ControlRig.RigMultiParentElement
// Size: 0x3d0 (Inherited: 0x2d0)
struct FRigMultiParentElement : FRigTransformElement {
	char pad_2D0[0x100]; // 0x2d0(0x100)
};

// ScriptStruct ControlRig.RigControlElement
// Size: 0x910 (Inherited: 0x3d0)
struct FRigControlElement : FRigMultiParentElement {
	struct FRigControlSettings Settings; // 0x3d0(0x1c0)
	struct FRigCurrentAndInitialTransform Offset; // 0x590(0x1a0)
	struct FRigCurrentAndInitialTransform Shape; // 0x730(0x1a0)
	struct FRigPreferredEulerAngles PreferredEulerAngles; // 0x8d0(0x38)
	char pad_908[0x8]; // 0x908(0x08)
};

// ScriptStruct ControlRig.RigPreferredEulerAngles
// Size: 0x38 (Inherited: 0x00)
struct FRigPreferredEulerAngles {
	enum class EEulerRotationOrder RotationOrder; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FVector Current; // 0x08(0x18)
	struct FVector Initial; // 0x20(0x18)
};

// ScriptStruct ControlRig.RigControlSettings
// Size: 0x1c0 (Inherited: 0x00)
struct FRigControlSettings {
	enum class ERigControlAnimationType AnimationType; // 0x00(0x01)
	enum class ERigControlType ControlType; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FName DisplayName; // 0x04(0x0c)
	enum class ERigControlAxis PrimaryAxis; // 0x10(0x01)
	bool bIsCurve; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct TArray<struct FRigControlLimitEnabled> LimitEnabled; // 0x18(0x10)
	bool bDrawLimits; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FRigControlValue MinimumValue; // 0x2c(0x84)
	struct FRigControlValue MaximumValue; // 0xb0(0x84)
	bool bShapeVisible; // 0x134(0x01)
	enum class ERigControlVisibility ShapeVisibility; // 0x135(0x01)
	char pad_136[0x2]; // 0x136(0x02)
	struct FName ShapeName; // 0x138(0x0c)
	struct FLinearColor ShapeColor; // 0x144(0x10)
	bool bIsTransientControl; // 0x154(0x01)
	char pad_155[0x3]; // 0x155(0x03)
	struct UEnum* ControlEnum; // 0x158(0x08)
	struct FRigControlElementCustomization Customization; // 0x160(0x20)
	struct TArray<struct FRigElementKey> DrivenControls; // 0x180(0x10)
	char pad_190[0x10]; // 0x190(0x10)
	bool bGroupWithParentControl; // 0x1a0(0x01)
	bool bRestrictSpaceSwitching; // 0x1a1(0x01)
	char pad_1A2[0x6]; // 0x1a2(0x06)
	struct TArray<enum class ERigControlTransformChannel> FilteredChannels; // 0x1a8(0x10)
	enum class EEulerRotationOrder PreferredRotationOrder; // 0x1b8(0x01)
	bool bUsePreferredRotationOrder; // 0x1b9(0x01)
	char pad_1BA[0x6]; // 0x1ba(0x06)
};

// ScriptStruct ControlRig.RigControlElementCustomization
// Size: 0x20 (Inherited: 0x00)
struct FRigControlElementCustomization {
	struct TArray<struct FRigElementKey> AvailableSpaces; // 0x00(0x10)
	struct TArray<struct FRigElementKey> RemovedSpaces; // 0x10(0x10)
};

// ScriptStruct ControlRig.RigControlValue
// Size: 0x84 (Inherited: 0x00)
struct FRigControlValue {
	struct FRigControlValueStorage FloatStorage; // 0x00(0x84)
};

// ScriptStruct ControlRig.RigControlValueStorage
// Size: 0x84 (Inherited: 0x00)
struct FRigControlValueStorage {
	float Float00; // 0x00(0x04)
	float Float01; // 0x04(0x04)
	float Float02; // 0x08(0x04)
	float Float03; // 0x0c(0x04)
	float Float10; // 0x10(0x04)
	float Float11; // 0x14(0x04)
	float Float12; // 0x18(0x04)
	float Float13; // 0x1c(0x04)
	float Float20; // 0x20(0x04)
	float Float21; // 0x24(0x04)
	float Float22; // 0x28(0x04)
	float Float23; // 0x2c(0x04)
	float Float30; // 0x30(0x04)
	float Float31; // 0x34(0x04)
	float Float32; // 0x38(0x04)
	float Float33; // 0x3c(0x04)
	float Float00_3; // 0x40(0x04)
	float Float01_3; // 0x44(0x04)
	float Float02_3; // 0x48(0x04)
	float Float03_3; // 0x4c(0x04)
	float Float10_3; // 0x50(0x04)
	float Float11_3; // 0x54(0x04)
	float Float12_3; // 0x58(0x04)
	float Float13_3; // 0x5c(0x04)
	float Float20_3; // 0x60(0x04)
	float Float21_3; // 0x64(0x04)
	float Float22_3; // 0x68(0x04)
	float Float23_3; // 0x6c(0x04)
	float Float30_3; // 0x70(0x04)
	float Float31_3; // 0x74(0x04)
	float Float32_3; // 0x78(0x04)
	float Float33_3; // 0x7c(0x04)
	bool bValid; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
};

// ScriptStruct ControlRig.RigControlLimitEnabled
// Size: 0x02 (Inherited: 0x00)
struct FRigControlLimitEnabled {
	bool bMinimum; // 0x00(0x01)
	bool bMaximum; // 0x01(0x01)
};

// ScriptStruct ControlRig.RigInfluenceMapPerEvent
// Size: 0x60 (Inherited: 0x00)
struct FRigInfluenceMapPerEvent {
	struct TArray<struct FRigInfluenceMap> Maps; // 0x00(0x10)
	struct TMap<struct FName, int32_t> EventToIndex; // 0x10(0x50)
};

// ScriptStruct ControlRig.RigInfluenceMap
// Size: 0x70 (Inherited: 0x00)
struct FRigInfluenceMap {
	struct FName EventName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FRigInfluenceEntry> Entries; // 0x10(0x10)
	struct TMap<struct FRigElementKey, int32_t> KeyToIndex; // 0x20(0x50)
};

// ScriptStruct ControlRig.RigInfluenceEntry
// Size: 0x20 (Inherited: 0x00)
struct FRigInfluenceEntry {
	struct FRigElementKey Source; // 0x00(0x10)
	struct TArray<struct FRigElementKey> AffectedList; // 0x10(0x10)
};

// ScriptStruct ControlRig.RigHierarchySettings
// Size: 0x04 (Inherited: 0x00)
struct FRigHierarchySettings {
	int32_t ProceduralElementLimit; // 0x00(0x04)
};

// ScriptStruct ControlRig.MovieSceneControlRigInstanceData
// Size: 0x148 (Inherited: 0x08)
struct FMovieSceneControlRigInstanceData : FMovieSceneSequenceInstanceData {
	bool bAdditive; // 0x08(0x01)
	bool bApplyBoneFilter; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct FInputBlendPose BoneFilter; // 0x10(0x10)
	struct FMovieSceneFloatChannel Weight; // 0x20(0x110)
	struct FMovieSceneEvaluationOperand Operand; // 0x130(0x14)
	char pad_144[0x4]; // 0x144(0x04)
};

// ScriptStruct ControlRig.RigTransformStackEntry
// Size: 0x100 (Inherited: 0x00)
struct FRigTransformStackEntry {
	struct FRigElementKey Key; // 0x00(0x10)
	enum class ERigTransformStackEntryType EntryType; // 0x10(0x01)
	enum class ERigTransformType TransformType; // 0x11(0x01)
	char pad_12[0xe]; // 0x12(0x0e)
	struct FTransform OldTransform; // 0x20(0x60)
	struct FTransform NewTransform; // 0x80(0x60)
	bool bAffectChildren; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
	struct TArray<struct FString> Callstack; // 0xe8(0x10)
	char pad_F8[0x8]; // 0xf8(0x08)
};

// ScriptStruct ControlRig.RigSingleParentElement
// Size: 0x2e0 (Inherited: 0x2d0)
struct FRigSingleParentElement : FRigTransformElement {
	char pad_2D0[0x10]; // 0x2d0(0x10)
};

// ScriptStruct ControlRig.RigElementWeight
// Size: 0x0c (Inherited: 0x00)
struct FRigElementWeight {
	float Location; // 0x00(0x04)
	float Rotation; // 0x04(0x04)
	float Scale; // 0x08(0x04)
};

// ScriptStruct ControlRig.RigElementParentConstraint
// Size: 0x90 (Inherited: 0x00)
struct FRigElementParentConstraint {
	char pad_0[0x90]; // 0x00(0x90)
};

// ScriptStruct ControlRig.RigBoneElement
// Size: 0x2e0 (Inherited: 0x2e0)
struct FRigBoneElement : FRigSingleParentElement {
	enum class ERigBoneType BoneType; // 0x2d8(0x01)
};

// ScriptStruct ControlRig.RigNullElement
// Size: 0x3d0 (Inherited: 0x3d0)
struct FRigNullElement : FRigMultiParentElement {
};

// ScriptStruct ControlRig.RigCurveElement
// Size: 0xf0 (Inherited: 0xe8)
struct FRigCurveElement : FRigBaseElement {
	char pad_E8[0x8]; // 0xe8(0x08)
};

// ScriptStruct ControlRig.RigRigidBodySettings
// Size: 0x04 (Inherited: 0x00)
struct FRigRigidBodySettings {
	float Mass; // 0x00(0x04)
};

// ScriptStruct ControlRig.RigRigidBodyElement
// Size: 0x2e0 (Inherited: 0x2e0)
struct FRigRigidBodyElement : FRigSingleParentElement {
	struct FRigRigidBodySettings Settings; // 0x2d8(0x04)
};

// ScriptStruct ControlRig.RigReferenceElement
// Size: 0x2f0 (Inherited: 0x2e0)
struct FRigReferenceElement : FRigSingleParentElement {
	char pad_2E0[0x10]; // 0x2e0(0x10)
};

// ScriptStruct ControlRig.RigHierarchyCopyPasteContentPerElement
// Size: 0x1e0 (Inherited: 0x00)
struct FRigHierarchyCopyPasteContentPerElement {
	struct FRigElementKey Key; // 0x00(0x10)
	struct FString Content; // 0x10(0x10)
	struct TArray<struct FRigElementKey> Parents; // 0x20(0x10)
	struct TArray<struct FRigElementWeight> ParentWeights; // 0x30(0x10)
	struct FRigCurrentAndInitialTransform Pose; // 0x40(0x1a0)
};

// ScriptStruct ControlRig.RigHierarchyCopyPasteContent
// Size: 0x50 (Inherited: 0x00)
struct FRigHierarchyCopyPasteContent {
	struct TArray<struct FRigHierarchyCopyPasteContentPerElement> Elements; // 0x00(0x10)
	struct TArray<enum class ERigElementType> Types; // 0x10(0x10)
	struct TArray<struct FString> Contents; // 0x20(0x10)
	struct TArray<struct FTransform> LocalTransforms; // 0x30(0x10)
	struct TArray<struct FTransform> GlobalTransforms; // 0x40(0x10)
};

// ScriptStruct ControlRig.ControlRigExecuteContext
// Size: 0x160 (Inherited: 0x100)
struct FControlRigExecuteContext : FRigVMExecuteContext {
	char pad_100[0x60]; // 0x100(0x60)
};

// ScriptStruct ControlRig.RigUnit
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit : FRigVMStruct {
};

// ScriptStruct ControlRig.RigUnit_DebugBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_DebugBase : FRigUnit {
};

// ScriptStruct ControlRig.RigUnitMutable
// Size: 0x170 (Inherited: 0x08)
struct FRigUnitMutable : FRigUnit {
	char pad_8[0x8]; // 0x08(0x08)
	struct FControlRigExecuteContext ExecuteContext; // 0x10(0x160)
};

// ScriptStruct ControlRig.RigUnit_DebugBaseMutable
// Size: 0x170 (Inherited: 0x170)
struct FRigUnit_DebugBaseMutable : FRigUnitMutable {
};

// ScriptStruct ControlRig.RigUnit_HighlevelBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_HighlevelBase : FRigUnit {
};

// ScriptStruct ControlRig.RigUnit_HighlevelBaseMutable
// Size: 0x170 (Inherited: 0x170)
struct FRigUnit_HighlevelBaseMutable : FRigUnitMutable {
};

// ScriptStruct ControlRig.StructReference
// Size: 0x08 (Inherited: 0x00)
struct FStructReference {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct ControlRig.AnimNode_ControlRigBase
// Size: 0x230 (Inherited: 0x58)
struct FAnimNode_ControlRigBase : FAnimNode_CustomProperty {
	struct FPoseLink Source; // 0x58(0x10)
	bool bResetInputPoseToInitial; // 0x68(0x01)
	bool bTransferInputPose; // 0x69(0x01)
	bool bTransferInputCurves; // 0x6a(0x01)
	bool bTransferPoseInGlobalSpace; // 0x6b(0x01)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct FBoneReference> InputBonesToTransfer; // 0x70(0x10)
	struct TArray<struct FBoneReference> OutputBonesToTransfer; // 0x80(0x10)
	char pad_90[0x170]; // 0x90(0x170)
	struct TWeakObjectPtr<struct UNodeMappingContainer> NodeMappingContainer; // 0x200(0x08)
	struct FControlRigIOSettings InputSettings; // 0x208(0x02)
	struct FControlRigIOSettings OutputSettings; // 0x20a(0x02)
	bool bExecute; // 0x20c(0x01)
	char pad_20D[0xb]; // 0x20d(0x0b)
	struct TArray<struct FControlRigAnimNodeEventName> EventQueue; // 0x218(0x10)
	char pad_228[0x8]; // 0x228(0x08)
};

// ScriptStruct ControlRig.ControlRigAnimNodeEventName
// Size: 0x0c (Inherited: 0x00)
struct FControlRigAnimNodeEventName {
	struct FName EventName; // 0x00(0x0c)
};

// ScriptStruct ControlRig.ControlRigIOSettings
// Size: 0x02 (Inherited: 0x00)
struct FControlRigIOSettings {
	bool bUpdatePose; // 0x00(0x01)
	bool bUpdateCurves; // 0x01(0x01)
};

// ScriptStruct ControlRig.AnimNode_ControlRig
// Size: 0x468 (Inherited: 0x230)
struct FAnimNode_ControlRig : FAnimNode_ControlRigBase {
	struct UControlRig* ControlRigClass; // 0x230(0x08)
	struct UControlRig* ControlRig; // 0x238(0x08)
	float Alpha; // 0x240(0x04)
	enum class EAnimAlphaInputType AlphaInputType; // 0x244(0x01)
	char bAlphaBoolEnabled : 1; // 0x245(0x01)
	char bSetRefPoseFromSkeleton : 1; // 0x245(0x01)
	char pad_245_2 : 6; // 0x245(0x01)
	char pad_246[0x2]; // 0x246(0x02)
	struct FInputScaleBias AlphaScaleBias; // 0x248(0x08)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x250(0x48)
	struct FName AlphaCurveName; // 0x298(0x0c)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x2a4(0x30)
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct TMap<struct FName, struct FName> InputMapping; // 0x2d8(0x50)
	struct TMap<struct FName, struct FName> OutputMapping; // 0x328(0x50)
	char pad_378[0xb0]; // 0x378(0xb0)
	int32_t LODThreshold; // 0x428(0x04)
	char pad_42C[0x3c]; // 0x42c(0x3c)
};

// ScriptStruct ControlRig.AnimNode_ControlRig_ExternalSource
// Size: 0x238 (Inherited: 0x230)
struct FAnimNode_ControlRig_ExternalSource : FAnimNode_ControlRigBase {
	struct TWeakObjectPtr<struct UControlRig> ControlRig; // 0x230(0x08)
};

// ScriptStruct ControlRig.ControlRigAnimInstanceProxy
// Size: 0x7d0 (Inherited: 0x730)
struct FControlRigAnimInstanceProxy : FAnimInstanceProxy {
	char pad_730[0xa0]; // 0x730(0xa0)
};

// ScriptStruct ControlRig.ControlRigComponentMappedElement
// Size: 0x100 (Inherited: 0x00)
struct FControlRigComponentMappedElement {
	struct FSoftComponentReference ComponentReference; // 0x00(0x58)
	int32_t TransformIndex; // 0x58(0x04)
	struct FName TransformName; // 0x5c(0x0c)
	enum class ERigElementType ElementType; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	struct FName ElementName; // 0x6c(0x0c)
	enum class EControlRigComponentMapDirection Direction; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FTransform Offset; // 0x80(0x60)
	float Weight; // 0xe0(0x04)
	enum class EControlRigComponentSpace Space; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	struct USceneComponent* SceneComponent; // 0xe8(0x08)
	int32_t ElementIndex; // 0xf0(0x04)
	int32_t SubIndex; // 0xf4(0x04)
	char pad_F8[0x8]; // 0xf8(0x08)
};

// ScriptStruct ControlRig.ControlRigComponentMappedComponent
// Size: 0x18 (Inherited: 0x00)
struct FControlRigComponentMappedComponent {
	struct USceneComponent* Component; // 0x00(0x08)
	struct FName ElementName; // 0x08(0x0c)
	enum class ERigElementType ElementType; // 0x14(0x01)
	enum class EControlRigComponentMapDirection Direction; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
};

// ScriptStruct ControlRig.ControlRigComponentMappedBone
// Size: 0x18 (Inherited: 0x00)
struct FControlRigComponentMappedBone {
	struct FName Source; // 0x00(0x0c)
	struct FName Target; // 0x0c(0x0c)
};

// ScriptStruct ControlRig.ControlRigComponentMappedCurve
// Size: 0x18 (Inherited: 0x00)
struct FControlRigComponentMappedCurve {
	struct FName Source; // 0x00(0x0c)
	struct FName Target; // 0x0c(0x0c)
};

// ScriptStruct ControlRig.ControlShapeActorCreationParam
// Size: 0x1d0 (Inherited: 0x00)
struct FControlShapeActorCreationParam {
	char pad_0[0x1d0]; // 0x00(0x1d0)
};

// ScriptStruct ControlRig.ControlRigShapeDefinition
// Size: 0xb0 (Inherited: 0x00)
struct FControlRigShapeDefinition {
	struct FName ShapeName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TSoftObjectPtr<UStaticMesh> StaticMesh; // 0x10(0x30)
	struct FTransform Transform; // 0x40(0x60)
	char pad_A0[0x10]; // 0xa0(0x10)
};

// ScriptStruct ControlRig.ControlRigTestDataVariable
// Size: 0x28 (Inherited: 0x00)
struct FControlRigTestDataVariable {
	struct FName Name; // 0x00(0x0c)
	struct FName CPPType; // 0x0c(0x0c)
	struct FString Value; // 0x18(0x10)
};

// ScriptStruct ControlRig.ControlRigTestDataFrame
// Size: 0x90 (Inherited: 0x00)
struct FControlRigTestDataFrame {
	double AbsoluteTime; // 0x00(0x08)
	double DeltaTime; // 0x08(0x08)
	struct TArray<struct FControlRigTestDataVariable> Variables; // 0x10(0x10)
	struct FRigPose Pose; // 0x20(0x70)
};

// ScriptStruct ControlRig.RigPose
// Size: 0x70 (Inherited: 0x00)
struct FRigPose {
	struct TArray<struct FRigPoseElement> Elements; // 0x00(0x10)
	int32_t HierarchyTopologyVersion; // 0x10(0x04)
	int32_t PoseHash; // 0x14(0x04)
	char pad_18[0x58]; // 0x18(0x58)
};

// ScriptStruct ControlRig.RigPoseElement
// Size: 0xf0 (Inherited: 0x00)
struct FRigPoseElement {
	struct FCachedRigElement Index; // 0x00(0x20)
	struct FTransform GlobalTransform; // 0x20(0x60)
	struct FTransform LocalTransform; // 0x80(0x60)
	float CurveValue; // 0xe0(0x04)
	char pad_E4[0xc]; // 0xe4(0x0c)
};

// ScriptStruct ControlRig.CachedRigElement
// Size: 0x20 (Inherited: 0x00)
struct FCachedRigElement {
	struct FRigElementKey Key; // 0x00(0x10)
	uint16_t Index; // 0x10(0x02)
	char pad_12[0x2]; // 0x12(0x02)
	int32_t ContainerVersion; // 0x14(0x04)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct ControlRig.ControlRigValidationContext
// Size: 0x28 (Inherited: 0x00)
struct FControlRigValidationContext {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct ControlRig.CRSimContainer
// Size: 0x18 (Inherited: 0x00)
struct FCRSimContainer {
	char pad_0[0x8]; // 0x00(0x08)
	float TimeStep; // 0x08(0x04)
	float AccumulatedTime; // 0x0c(0x04)
	float TimeLeftForStep; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ControlRig.CRSimLinearSpring
// Size: 0x10 (Inherited: 0x00)
struct FCRSimLinearSpring {
	int32_t SubjectA; // 0x00(0x04)
	int32_t SubjectB; // 0x04(0x04)
	float Coefficient; // 0x08(0x04)
	float Equilibrium; // 0x0c(0x04)
};

// ScriptStruct ControlRig.CRSimPointConstraint
// Size: 0x40 (Inherited: 0x00)
struct FCRSimPointConstraint {
	enum class ECRSimConstraintType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t SubjectA; // 0x04(0x04)
	int32_t SubjectB; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FVector DataA; // 0x10(0x18)
	struct FVector DataB; // 0x28(0x18)
};

// ScriptStruct ControlRig.CRSimPointContainer
// Size: 0x78 (Inherited: 0x18)
struct FCRSimPointContainer : FCRSimContainer {
	struct TArray<struct FRigVMSimPoint> Points; // 0x18(0x10)
	struct TArray<struct FCRSimLinearSpring> Springs; // 0x28(0x10)
	struct TArray<struct FCRSimPointForce> Forces; // 0x38(0x10)
	struct TArray<struct FCRSimSoftCollision> CollisionVolumes; // 0x48(0x10)
	struct TArray<struct FCRSimPointConstraint> Constraints; // 0x58(0x10)
	struct TArray<struct FRigVMSimPoint> PreviousStep; // 0x68(0x10)
};

// ScriptStruct ControlRig.CRSimSoftCollision
// Size: 0x80 (Inherited: 0x00)
struct FCRSimSoftCollision {
	struct FTransform Transform; // 0x00(0x60)
	enum class ECRSimSoftCollisionType ShapeType; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float MinimumDistance; // 0x64(0x04)
	float MaximumDistance; // 0x68(0x04)
	enum class ERigVMAnimEasingType FalloffType; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	float Coefficient; // 0x70(0x04)
	bool bInverted; // 0x74(0x01)
	char pad_75[0xb]; // 0x75(0x0b)
};

// ScriptStruct ControlRig.CRSimPointForce
// Size: 0x28 (Inherited: 0x00)
struct FCRSimPointForce {
	enum class ECRSimPointForceType ForceType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FVector Vector; // 0x08(0x18)
	float Coefficient; // 0x20(0x04)
	bool bNormalize; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct ControlRig.ConstraintNodeData
// Size: 0x140 (Inherited: 0x00)
struct FConstraintNodeData {
	struct FTransform RelativeParent; // 0x00(0x60)
	struct FConstraintOffset ConstraintOffset; // 0x60(0xc0)
	struct FName LinkedNode; // 0x120(0x0c)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct TArray<struct FTransformConstraint> Constraints; // 0x130(0x10)
};

// ScriptStruct ControlRig.AnimationHierarchy
// Size: 0x88 (Inherited: 0x78)
struct FAnimationHierarchy : FNodeHierarchyWithUserData {
	struct TArray<struct FConstraintNodeData> UserData; // 0x78(0x10)
};

// ScriptStruct ControlRig.RigElement
// Size: 0x18 (Inherited: 0x00)
struct FRigElement {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName Name; // 0x08(0x0c)
	int32_t Index; // 0x14(0x04)
};

// ScriptStruct ControlRig.RigBone
// Size: 0x170 (Inherited: 0x18)
struct FRigBone : FRigElement {
	struct FName ParentName; // 0x18(0x0c)
	int32_t ParentIndex; // 0x24(0x04)
	char pad_28[0x8]; // 0x28(0x08)
	struct FTransform InitialTransform; // 0x30(0x60)
	struct FTransform GlobalTransform; // 0x90(0x60)
	struct FTransform LocalTransform; // 0xf0(0x60)
	struct TArray<int32_t> Dependents; // 0x150(0x10)
	enum class ERigBoneType Type; // 0x160(0x01)
	char pad_161[0xf]; // 0x161(0x0f)
};

// ScriptStruct ControlRig.RigBoneHierarchy
// Size: 0x10 (Inherited: 0x00)
struct FRigBoneHierarchy {
	struct TArray<struct FRigBone> Bones; // 0x00(0x10)
};

// ScriptStruct ControlRig.RigControl
// Size: 0x370 (Inherited: 0x18)
struct FRigControl : FRigElement {
	enum class ERigControlType ControlType; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FName DisplayName; // 0x1c(0x0c)
	struct FName ParentName; // 0x28(0x0c)
	int32_t ParentIndex; // 0x34(0x04)
	struct FName SpaceName; // 0x38(0x0c)
	int32_t SpaceIndex; // 0x44(0x04)
	char pad_48[0x8]; // 0x48(0x08)
	struct FTransform OffsetTransform; // 0x50(0x60)
	struct FRigControlValue InitialValue; // 0xb0(0x84)
	struct FRigControlValue Value; // 0x134(0x84)
	enum class ERigControlAxis PrimaryAxis; // 0x1b8(0x01)
	bool bIsCurve; // 0x1b9(0x01)
	bool bAnimatable; // 0x1ba(0x01)
	bool bLimitTranslation; // 0x1bb(0x01)
	bool bLimitRotation; // 0x1bc(0x01)
	bool bLimitScale; // 0x1bd(0x01)
	bool bDrawLimits; // 0x1be(0x01)
	char pad_1BF[0x1]; // 0x1bf(0x01)
	struct FRigControlValue MinimumValue; // 0x1c0(0x84)
	struct FRigControlValue MaximumValue; // 0x244(0x84)
	bool bGizmoEnabled; // 0x2c8(0x01)
	bool bGizmoVisible; // 0x2c9(0x01)
	char pad_2CA[0x2]; // 0x2ca(0x02)
	struct FName GizmoName; // 0x2cc(0x0c)
	char pad_2D8[0x8]; // 0x2d8(0x08)
	struct FTransform GizmoTransform; // 0x2e0(0x60)
	struct FLinearColor GizmoColor; // 0x340(0x10)
	struct TArray<int32_t> Dependents; // 0x350(0x10)
	bool bIsTransientControl; // 0x360(0x01)
	char pad_361[0x7]; // 0x361(0x07)
	struct UEnum* ControlEnum; // 0x368(0x08)
};

// ScriptStruct ControlRig.RigControlHierarchy
// Size: 0x10 (Inherited: 0x00)
struct FRigControlHierarchy {
	struct TArray<struct FRigControl> Controls; // 0x00(0x10)
};

// ScriptStruct ControlRig.RigCurve
// Size: 0x20 (Inherited: 0x18)
struct FRigCurve : FRigElement {
	float Value; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ControlRig.RigCurveContainer
// Size: 0x10 (Inherited: 0x00)
struct FRigCurveContainer {
	struct TArray<struct FRigCurve> Curves; // 0x00(0x10)
};

// ScriptStruct ControlRig.RigHierarchyContainer
// Size: 0x40 (Inherited: 0x00)
struct FRigHierarchyContainer {
	struct FRigBoneHierarchy BoneHierarchy; // 0x00(0x10)
	struct FRigSpaceHierarchy SpaceHierarchy; // 0x10(0x10)
	struct FRigControlHierarchy ControlHierarchy; // 0x20(0x10)
	struct FRigCurveContainer CurveContainer; // 0x30(0x10)
};

// ScriptStruct ControlRig.RigSpaceHierarchy
// Size: 0x10 (Inherited: 0x00)
struct FRigSpaceHierarchy {
	struct TArray<struct FRigSpace> Spaces; // 0x00(0x10)
};

// ScriptStruct ControlRig.RigSpace
// Size: 0xf0 (Inherited: 0x18)
struct FRigSpace : FRigElement {
	enum class ERigSpaceType SpaceType; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FName ParentName; // 0x1c(0x0c)
	int32_t ParentIndex; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FTransform InitialTransform; // 0x30(0x60)
	struct FTransform LocalTransform; // 0x90(0x60)
};

// ScriptStruct ControlRig.RigHierarchyRef
// Size: 0x01 (Inherited: 0x00)
struct FRigHierarchyRef {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ControlRig.RigControlModifiedContext
// Size: 0x1c (Inherited: 0x00)
struct FRigControlModifiedContext {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct ControlRig.RigElementKeyCollection
// Size: 0x10 (Inherited: 0x00)
struct FRigElementKeyCollection {
	struct TArray<struct FRigElementKey> Keys; // 0x00(0x10)
};

// ScriptStruct ControlRig.RigEventContext
// Size: 0x30 (Inherited: 0x00)
struct FRigEventContext {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct ControlRig.RigBaseMetadata
// Size: 0x28 (Inherited: 0x00)
struct FRigBaseMetadata {
	char pad_0[0x10]; // 0x00(0x10)
	struct FName Name; // 0x10(0x0c)
	enum class ERigMetadataType Type; // 0x1c(0x01)
	char pad_1D[0xb]; // 0x1d(0x0b)
};

// ScriptStruct ControlRig.RigBoolMetadata
// Size: 0x30 (Inherited: 0x28)
struct FRigBoolMetadata : FRigBaseMetadata {
	bool Value; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct ControlRig.RigBoolArrayMetadata
// Size: 0x38 (Inherited: 0x28)
struct FRigBoolArrayMetadata : FRigBaseMetadata {
	struct TArray<bool> Value; // 0x28(0x10)
};

// ScriptStruct ControlRig.RigFloatMetadata
// Size: 0x30 (Inherited: 0x28)
struct FRigFloatMetadata : FRigBaseMetadata {
	float Value; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct ControlRig.RigFloatArrayMetadata
// Size: 0x38 (Inherited: 0x28)
struct FRigFloatArrayMetadata : FRigBaseMetadata {
	struct TArray<float> Value; // 0x28(0x10)
};

// ScriptStruct ControlRig.RigInt32Metadata
// Size: 0x30 (Inherited: 0x28)
struct FRigInt32Metadata : FRigBaseMetadata {
	int32_t Value; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct ControlRig.RigInt32ArrayMetadata
// Size: 0x38 (Inherited: 0x28)
struct FRigInt32ArrayMetadata : FRigBaseMetadata {
	struct TArray<int32_t> Value; // 0x28(0x10)
};

// ScriptStruct ControlRig.RigNameMetadata
// Size: 0x38 (Inherited: 0x28)
struct FRigNameMetadata : FRigBaseMetadata {
	struct FName Value; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct ControlRig.RigNameArrayMetadata
// Size: 0x38 (Inherited: 0x28)
struct FRigNameArrayMetadata : FRigBaseMetadata {
	struct TArray<struct FName> Value; // 0x28(0x10)
};

// ScriptStruct ControlRig.RigVectorMetadata
// Size: 0x40 (Inherited: 0x28)
struct FRigVectorMetadata : FRigBaseMetadata {
	struct FVector Value; // 0x28(0x18)
};

// ScriptStruct ControlRig.RigVectorArrayMetadata
// Size: 0x38 (Inherited: 0x28)
struct FRigVectorArrayMetadata : FRigBaseMetadata {
	struct TArray<struct FVector> Value; // 0x28(0x10)
};

// ScriptStruct ControlRig.RigRotatorMetadata
// Size: 0x40 (Inherited: 0x28)
struct FRigRotatorMetadata : FRigBaseMetadata {
	struct FRotator Value; // 0x28(0x18)
};

// ScriptStruct ControlRig.RigRotatorArrayMetadata
// Size: 0x38 (Inherited: 0x28)
struct FRigRotatorArrayMetadata : FRigBaseMetadata {
	struct TArray<struct FRotator> Value; // 0x28(0x10)
};

// ScriptStruct ControlRig.RigQuatMetadata
// Size: 0x50 (Inherited: 0x28)
struct FRigQuatMetadata : FRigBaseMetadata {
	char pad_28[0x8]; // 0x28(0x08)
	struct FQuat Value; // 0x30(0x20)
};

// ScriptStruct ControlRig.RigQuatArrayMetadata
// Size: 0x38 (Inherited: 0x28)
struct FRigQuatArrayMetadata : FRigBaseMetadata {
	struct TArray<struct FQuat> Value; // 0x28(0x10)
};

// ScriptStruct ControlRig.RigTransformMetadata
// Size: 0x90 (Inherited: 0x28)
struct FRigTransformMetadata : FRigBaseMetadata {
	char pad_28[0x8]; // 0x28(0x08)
	struct FTransform Value; // 0x30(0x60)
};

// ScriptStruct ControlRig.RigTransformArrayMetadata
// Size: 0x38 (Inherited: 0x28)
struct FRigTransformArrayMetadata : FRigBaseMetadata {
	struct TArray<struct FTransform> Value; // 0x28(0x10)
};

// ScriptStruct ControlRig.RigLinearColorMetadata
// Size: 0x38 (Inherited: 0x28)
struct FRigLinearColorMetadata : FRigBaseMetadata {
	struct FLinearColor Value; // 0x28(0x10)
};

// ScriptStruct ControlRig.RigLinearColorArrayMetadata
// Size: 0x38 (Inherited: 0x28)
struct FRigLinearColorArrayMetadata : FRigBaseMetadata {
	struct TArray<struct FLinearColor> Value; // 0x28(0x10)
};

// ScriptStruct ControlRig.RigElementKeyMetadata
// Size: 0x38 (Inherited: 0x28)
struct FRigElementKeyMetadata : FRigBaseMetadata {
	struct FRigElementKey Value; // 0x28(0x10)
};

// ScriptStruct ControlRig.RigElementKeyArrayMetadata
// Size: 0x38 (Inherited: 0x28)
struct FRigElementKeyArrayMetadata : FRigBaseMetadata {
	struct TArray<struct FRigElementKey> Value; // 0x28(0x10)
};

// ScriptStruct ControlRig.RigInfluenceEntryModifier
// Size: 0x10 (Inherited: 0x00)
struct FRigInfluenceEntryModifier {
	struct TArray<struct FRigElementKey> AffectedList; // 0x00(0x10)
};

// ScriptStruct ControlRig.AnimNode_ControlRigInputPose
// Size: 0x30 (Inherited: 0x10)
struct FAnimNode_ControlRigInputPose : FAnimNode_Base {
	struct FPoseLink InputPose; // 0x10(0x10)
	char pad_20[0x10]; // 0x20(0x10)
};

// ScriptStruct ControlRig.ControlRigLayerInstanceProxy
// Size: 0x7d0 (Inherited: 0x730)
struct FControlRigLayerInstanceProxy : FAnimInstanceProxy {
	char pad_730[0xa0]; // 0x730(0xa0)
};

// ScriptStruct ControlRig.ControlRigSequenceObjectReference
// Size: 0x08 (Inherited: 0x00)
struct FControlRigSequenceObjectReference {
	struct UControlRig* ControlRigClass; // 0x00(0x08)
};

// ScriptStruct ControlRig.ControlRigSequenceObjectReferences
// Size: 0x10 (Inherited: 0x00)
struct FControlRigSequenceObjectReferences {
	struct TArray<struct FControlRigSequenceObjectReference> Array; // 0x00(0x10)
};

// ScriptStruct ControlRig.ControlRigSequenceObjectReferenceMap
// Size: 0x20 (Inherited: 0x00)
struct FControlRigSequenceObjectReferenceMap {
	struct TArray<struct FGuid> BindingIds; // 0x00(0x10)
	struct TArray<struct FControlRigSequenceObjectReferences> References; // 0x10(0x10)
};

// ScriptStruct ControlRig.EnumParameterNameAndCurve
// Size: 0x118 (Inherited: 0x00)
struct FEnumParameterNameAndCurve {
	struct FName ParameterName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FMovieSceneByteChannel ParameterCurve; // 0x10(0x108)
};

// ScriptStruct ControlRig.IntegerParameterNameAndCurve
// Size: 0x110 (Inherited: 0x00)
struct FIntegerParameterNameAndCurve {
	struct FName ParameterName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FMovieSceneIntegerChannel ParameterCurve; // 0x10(0x100)
};

// ScriptStruct ControlRig.SpaceControlNameAndChannel
// Size: 0x120 (Inherited: 0x00)
struct FSpaceControlNameAndChannel {
	struct FName ControlName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FMovieSceneControlRigSpaceChannel SpaceCurve; // 0x10(0x110)
};

// ScriptStruct ControlRig.MovieSceneControlRigSpaceChannel
// Size: 0x110 (Inherited: 0x50)
struct FMovieSceneControlRigSpaceChannel : FMovieSceneChannel {
	struct TArray<struct FFrameNumber> KeyTimes; // 0x50(0x10)
	struct TArray<struct FMovieSceneControlRigSpaceBaseKey> KeyValues; // 0x60(0x10)
	struct FMovieSceneKeyHandleMap KeyHandles; // 0x70(0x88)
	char pad_F8[0x18]; // 0xf8(0x18)
};

// ScriptStruct ControlRig.MovieSceneControlRigSpaceBaseKey
// Size: 0x14 (Inherited: 0x00)
struct FMovieSceneControlRigSpaceBaseKey {
	enum class EMovieSceneControlRigSpaceType SpaceType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FRigElementKey ControlRigElement; // 0x04(0x10)
};

// ScriptStruct ControlRig.ChannelMapInfo
// Size: 0x40 (Inherited: 0x00)
struct FChannelMapInfo {
	int32_t ControlIndex; // 0x00(0x04)
	int32_t TotalChannelIndex; // 0x04(0x04)
	int32_t ChannelIndex; // 0x08(0x04)
	int32_t ParentControlIndex; // 0x0c(0x04)
	struct FName ChannelTypeName; // 0x10(0x0c)
	bool bDoesHaveSpace; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	int32_t SpaceChannelIndex; // 0x20(0x04)
	int32_t MaskIndex; // 0x24(0x04)
	int32_t CategoryIndex; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<uint32_t> ConstraintsIndex; // 0x30(0x10)
};

// ScriptStruct ControlRig.MovieSceneControlRigParameterTemplate
// Size: 0xc0 (Inherited: 0x80)
struct FMovieSceneControlRigParameterTemplate : FMovieSceneParameterSectionTemplate {
	struct TArray<struct FEnumParameterNameAndCurve> Enums; // 0x80(0x10)
	struct TArray<struct FIntegerParameterNameAndCurve> Integers; // 0x90(0x10)
	struct TArray<struct FSpaceControlNameAndChannel> Spaces; // 0xa0(0x10)
	struct TArray<struct FConstraintAndActiveChannel> Constraints; // 0xb0(0x10)
};

// ScriptStruct ControlRig.ControlRotationOrder
// Size: 0x02 (Inherited: 0x00)
struct FControlRotationOrder {
	enum class EEulerRotationOrder RotationOrder; // 0x00(0x01)
	bool bOverrideSetting; // 0x01(0x01)
};

// ScriptStruct ControlRig.ControlRigSettingsPerPinBool
// Size: 0x50 (Inherited: 0x00)
struct FControlRigSettingsPerPinBool {
	struct TMap<struct FString, bool> Values; // 0x00(0x50)
};

// ScriptStruct ControlRig.RigControlCopy
// Size: 0x240 (Inherited: 0x00)
struct FRigControlCopy {
	char pad_0[0x10]; // 0x00(0x10)
	struct FName Name; // 0x10(0x0c)
	enum class ERigControlType ControlType; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct FRigControlValue Value; // 0x20(0x84)
	struct FRigElementKey ParentKey; // 0xa4(0x10)
	char pad_B4[0xc]; // 0xb4(0x0c)
	struct FTransform OffsetTransform; // 0xc0(0x60)
	struct FTransform ParentTransform; // 0x120(0x60)
	struct FTransform LocalTransform; // 0x180(0x60)
	struct FTransform GlobalTransform; // 0x1e0(0x60)
};

// ScriptStruct ControlRig.ControlRigControlPose
// Size: 0x60 (Inherited: 0x00)
struct FControlRigControlPose {
	struct TArray<struct FRigControlCopy> CopyOfControls; // 0x00(0x10)
	char pad_10[0x50]; // 0x10(0x50)
};

// ScriptStruct ControlRig.RigDispatchFactory
// Size: 0x70 (Inherited: 0x70)
struct FRigDispatchFactory : FRigVMDispatchFactory {
};

// ScriptStruct ControlRig.RigDispatch_AnimAttributeBase
// Size: 0xa0 (Inherited: 0x70)
struct FRigDispatch_AnimAttributeBase : FRigDispatchFactory {
	char pad_70[0x30]; // 0x70(0x30)
};

// ScriptStruct ControlRig.RigDispatch_GetAnimAttribute
// Size: 0xa0 (Inherited: 0xa0)
struct FRigDispatch_GetAnimAttribute : FRigDispatch_AnimAttributeBase {
};

// ScriptStruct ControlRig.RigDispatch_SetAnimAttribute
// Size: 0xa0 (Inherited: 0xa0)
struct FRigDispatch_SetAnimAttribute : FRigDispatch_AnimAttributeBase {
};

// ScriptStruct ControlRig.RigUnit_SphereTraceWorld
// Size: 0x78 (Inherited: 0x08)
struct FRigUnit_SphereTraceWorld : FRigUnit {
	struct FVector Start; // 0x08(0x18)
	struct FVector End; // 0x20(0x18)
	enum class ECollisionChannel Channel; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float Radius; // 0x3c(0x04)
	bool bHit; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FVector HitLocation; // 0x48(0x18)
	struct FVector HitNormal; // 0x60(0x18)
};

// ScriptStruct ControlRig.RigUnit_SphereTraceByTraceChannel
// Size: 0x78 (Inherited: 0x08)
struct FRigUnit_SphereTraceByTraceChannel : FRigUnit {
	struct FVector Start; // 0x08(0x18)
	struct FVector End; // 0x20(0x18)
	enum class ETraceTypeQuery TraceChannel; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float Radius; // 0x3c(0x04)
	bool bHit; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FVector HitLocation; // 0x48(0x18)
	struct FVector HitNormal; // 0x60(0x18)
};

// ScriptStruct ControlRig.RigUnit_SphereTraceByObjectTypes
// Size: 0x80 (Inherited: 0x08)
struct FRigUnit_SphereTraceByObjectTypes : FRigUnit {
	struct FVector Start; // 0x08(0x18)
	struct FVector End; // 0x20(0x18)
	struct TArray<enum class EObjectTypeQuery> ObjectTypes; // 0x38(0x10)
	float Radius; // 0x48(0x04)
	bool bHit; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct FVector HitLocation; // 0x50(0x18)
	struct FVector HitNormal; // 0x68(0x18)
};

// ScriptStruct ControlRig.RigUnit_Control
// Size: 0x180 (Inherited: 0x08)
struct FRigUnit_Control : FRigUnit {
	struct FEulerTransform Transform; // 0x08(0x48)
	struct FTransform base; // 0x50(0x60)
	struct FTransform InitTransform; // 0xb0(0x60)
	struct FTransform Result; // 0x110(0x60)
	struct FTransformFilter Filter; // 0x170(0x09)
	bool bIsInitialized; // 0x179(0x01)
	char pad_17A[0x6]; // 0x17a(0x06)
};

// ScriptStruct ControlRig.RigUnit_Control_StaticMesh
// Size: 0x1e0 (Inherited: 0x180)
struct FRigUnit_Control_StaticMesh : FRigUnit_Control {
	struct FTransform MeshTransform; // 0x180(0x60)
};

// ScriptStruct ControlRig.RigDispatch_GetUserData
// Size: 0x70 (Inherited: 0x70)
struct FRigDispatch_GetUserData : FRigDispatchFactory {
};

// ScriptStruct ControlRig.RigUnit_SetupShapeLibraryFromUserData
// Size: 0x1b0 (Inherited: 0x170)
struct FRigUnit_SetupShapeLibraryFromUserData : FRigUnitMutable {
	struct FString Namespace; // 0x170(0x10)
	struct FString Path; // 0x180(0x10)
	struct FString LibraryName; // 0x190(0x10)
	bool ReplaceExisting; // 0x1a0(0x01)
	bool LogShapeLibraries; // 0x1a1(0x01)
	char pad_1A2[0xe]; // 0x1a2(0x0e)
};

// ScriptStruct ControlRig.RigUnit_ShapeExists
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_ShapeExists : FRigUnit {
	struct FName ShapeName; // 0x08(0x0c)
	bool Result; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct ControlRig.RigUnit_DebugBezier
// Size: 0x210 (Inherited: 0x110)
struct FRigUnit_DebugBezier : FRigVMFunction_DebugBaseMutable {
	struct FRigVMFourPointBezier Bezier; // 0x110(0x60)
	float MinimumU; // 0x170(0x04)
	float MaximumU; // 0x174(0x04)
	struct FLinearColor Color; // 0x178(0x10)
	float Thickness; // 0x188(0x04)
	int32_t Detail; // 0x18c(0x04)
	struct FName Space; // 0x190(0x0c)
	char pad_19C[0x4]; // 0x19c(0x04)
	struct FTransform WorldOffset; // 0x1a0(0x60)
	bool bEnabled; // 0x200(0x01)
	char pad_201[0xf]; // 0x201(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugBezierItemSpace
// Size: 0x210 (Inherited: 0x110)
struct FRigUnit_DebugBezierItemSpace : FRigVMFunction_DebugBaseMutable {
	struct FRigVMFourPointBezier Bezier; // 0x110(0x60)
	float MinimumU; // 0x170(0x04)
	float MaximumU; // 0x174(0x04)
	struct FLinearColor Color; // 0x178(0x10)
	float Thickness; // 0x188(0x04)
	int32_t Detail; // 0x18c(0x04)
	struct FRigElementKey Space; // 0x190(0x10)
	struct FTransform WorldOffset; // 0x1a0(0x60)
	bool bEnabled; // 0x200(0x01)
	char pad_201[0xf]; // 0x201(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugHierarchy
// Size: 0x200 (Inherited: 0x08)
struct FRigUnit_DebugHierarchy : FRigVMFunction_DebugBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FControlRigExecuteContext ExecuteContext; // 0x10(0x160)
	float Scale; // 0x170(0x04)
	struct FLinearColor Color; // 0x174(0x10)
	float Thickness; // 0x184(0x04)
	char pad_188[0x8]; // 0x188(0x08)
	struct FTransform WorldOffset; // 0x190(0x60)
	bool bEnabled; // 0x1f0(0x01)
	char pad_1F1[0xf]; // 0x1f1(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugPose
// Size: 0x270 (Inherited: 0x08)
struct FRigUnit_DebugPose : FRigVMFunction_DebugBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FControlRigExecuteContext ExecuteContext; // 0x10(0x160)
	struct FRigPose Pose; // 0x170(0x70)
	float Scale; // 0x1e0(0x04)
	struct FLinearColor Color; // 0x1e4(0x10)
	float Thickness; // 0x1f4(0x04)
	char pad_1F8[0x8]; // 0x1f8(0x08)
	struct FTransform WorldOffset; // 0x200(0x60)
	bool bEnabled; // 0x260(0x01)
	char pad_261[0xf]; // 0x261(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugLine
// Size: 0x230 (Inherited: 0x170)
struct FRigUnit_DebugLine : FRigUnit_DebugBaseMutable {
	struct FVector A; // 0x170(0x18)
	struct FVector B; // 0x188(0x18)
	struct FLinearColor Color; // 0x1a0(0x10)
	float Thickness; // 0x1b0(0x04)
	struct FName Space; // 0x1b4(0x0c)
	struct FTransform WorldOffset; // 0x1c0(0x60)
	bool bEnabled; // 0x220(0x01)
	char pad_221[0xf]; // 0x221(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugLineItemSpace
// Size: 0x240 (Inherited: 0x170)
struct FRigUnit_DebugLineItemSpace : FRigUnit_DebugBaseMutable {
	struct FVector A; // 0x170(0x18)
	struct FVector B; // 0x188(0x18)
	struct FLinearColor Color; // 0x1a0(0x10)
	float Thickness; // 0x1b0(0x04)
	struct FRigElementKey Space; // 0x1b4(0x10)
	char pad_1C4[0xc]; // 0x1c4(0x0c)
	struct FTransform WorldOffset; // 0x1d0(0x60)
	bool bEnabled; // 0x230(0x01)
	char pad_231[0xf]; // 0x231(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugLineStrip
// Size: 0x210 (Inherited: 0x170)
struct FRigUnit_DebugLineStrip : FRigUnit_DebugBaseMutable {
	struct TArray<struct FVector> Points; // 0x170(0x10)
	struct FLinearColor Color; // 0x180(0x10)
	float Thickness; // 0x190(0x04)
	struct FName Space; // 0x194(0x0c)
	struct FTransform WorldOffset; // 0x1a0(0x60)
	bool bEnabled; // 0x200(0x01)
	char pad_201[0xf]; // 0x201(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugLineStripItemSpace
// Size: 0x220 (Inherited: 0x170)
struct FRigUnit_DebugLineStripItemSpace : FRigUnit_DebugBaseMutable {
	struct TArray<struct FVector> Points; // 0x170(0x10)
	struct FLinearColor Color; // 0x180(0x10)
	float Thickness; // 0x190(0x04)
	struct FRigElementKey Space; // 0x194(0x10)
	char pad_1A4[0xc]; // 0x1a4(0x0c)
	struct FTransform WorldOffset; // 0x1b0(0x60)
	bool bEnabled; // 0x210(0x01)
	char pad_211[0xf]; // 0x211(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugRectangle
// Size: 0x270 (Inherited: 0x170)
struct FRigUnit_DebugRectangle : FRigUnit_DebugBaseMutable {
	struct FTransform Transform; // 0x170(0x60)
	struct FLinearColor Color; // 0x1d0(0x10)
	float Scale; // 0x1e0(0x04)
	float Thickness; // 0x1e4(0x04)
	struct FName Space; // 0x1e8(0x0c)
	char pad_1F4[0xc]; // 0x1f4(0x0c)
	struct FTransform WorldOffset; // 0x200(0x60)
	bool bEnabled; // 0x260(0x01)
	char pad_261[0xf]; // 0x261(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugRectangleItemSpace
// Size: 0x270 (Inherited: 0x170)
struct FRigUnit_DebugRectangleItemSpace : FRigUnit_DebugBaseMutable {
	struct FTransform Transform; // 0x170(0x60)
	struct FLinearColor Color; // 0x1d0(0x10)
	float Scale; // 0x1e0(0x04)
	float Thickness; // 0x1e4(0x04)
	struct FRigElementKey Space; // 0x1e8(0x10)
	char pad_1F8[0x8]; // 0x1f8(0x08)
	struct FTransform WorldOffset; // 0x200(0x60)
	bool bEnabled; // 0x260(0x01)
	char pad_261[0xf]; // 0x261(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugArc
// Size: 0x270 (Inherited: 0x170)
struct FRigUnit_DebugArc : FRigUnit_DebugBaseMutable {
	struct FTransform Transform; // 0x170(0x60)
	struct FLinearColor Color; // 0x1d0(0x10)
	float Radius; // 0x1e0(0x04)
	float MinimumDegrees; // 0x1e4(0x04)
	float MaximumDegrees; // 0x1e8(0x04)
	float Thickness; // 0x1ec(0x04)
	int32_t Detail; // 0x1f0(0x04)
	struct FName Space; // 0x1f4(0x0c)
	struct FTransform WorldOffset; // 0x200(0x60)
	bool bEnabled; // 0x260(0x01)
	char pad_261[0xf]; // 0x261(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugArcItemSpace
// Size: 0x280 (Inherited: 0x170)
struct FRigUnit_DebugArcItemSpace : FRigUnit_DebugBaseMutable {
	struct FTransform Transform; // 0x170(0x60)
	struct FLinearColor Color; // 0x1d0(0x10)
	float Radius; // 0x1e0(0x04)
	float MinimumDegrees; // 0x1e4(0x04)
	float MaximumDegrees; // 0x1e8(0x04)
	float Thickness; // 0x1ec(0x04)
	int32_t Detail; // 0x1f0(0x04)
	struct FRigElementKey Space; // 0x1f4(0x10)
	char pad_204[0xc]; // 0x204(0x0c)
	struct FTransform WorldOffset; // 0x210(0x60)
	bool bEnabled; // 0x270(0x01)
	char pad_271[0xf]; // 0x271(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugTransform
// Size: 0x110 (Inherited: 0x08)
struct FRigUnit_DebugTransform : FRigUnit_DebugBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x60)
	enum class ERigUnitDebugTransformMode Mode; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	struct FLinearColor Color; // 0x74(0x10)
	float Thickness; // 0x84(0x04)
	float Scale; // 0x88(0x04)
	struct FName Space; // 0x8c(0x0c)
	char pad_98[0x8]; // 0x98(0x08)
	struct FTransform WorldOffset; // 0xa0(0x60)
	bool bEnabled; // 0x100(0x01)
	char pad_101[0xf]; // 0x101(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugTransformMutable
// Size: 0x270 (Inherited: 0x170)
struct FRigUnit_DebugTransformMutable : FRigUnit_DebugBaseMutable {
	struct FTransform Transform; // 0x170(0x60)
	enum class ERigUnitDebugTransformMode Mode; // 0x1d0(0x01)
	char pad_1D1[0x3]; // 0x1d1(0x03)
	struct FLinearColor Color; // 0x1d4(0x10)
	float Thickness; // 0x1e4(0x04)
	float Scale; // 0x1e8(0x04)
	struct FName Space; // 0x1ec(0x0c)
	char pad_1F8[0x8]; // 0x1f8(0x08)
	struct FTransform WorldOffset; // 0x200(0x60)
	bool bEnabled; // 0x260(0x01)
	char pad_261[0xf]; // 0x261(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugTransformMutableItemSpace
// Size: 0x270 (Inherited: 0x170)
struct FRigUnit_DebugTransformMutableItemSpace : FRigUnit_DebugBaseMutable {
	struct FTransform Transform; // 0x170(0x60)
	enum class ERigUnitDebugTransformMode Mode; // 0x1d0(0x01)
	char pad_1D1[0x3]; // 0x1d1(0x03)
	struct FLinearColor Color; // 0x1d4(0x10)
	float Thickness; // 0x1e4(0x04)
	float Scale; // 0x1e8(0x04)
	struct FRigElementKey Space; // 0x1ec(0x10)
	char pad_1FC[0x4]; // 0x1fc(0x04)
	struct FTransform WorldOffset; // 0x200(0x60)
	bool bEnabled; // 0x260(0x01)
	char pad_261[0xf]; // 0x261(0x0f)
};

// ScriptStruct ControlRig.RigUnit_DebugTransformArrayMutable_WorkData
// Size: 0x10 (Inherited: 0x00)
struct FRigUnit_DebugTransformArrayMutable_WorkData {
	struct TArray<struct FTransform> DrawTransforms; // 0x00(0x10)
};

// ScriptStruct ControlRig.RigUnit_DebugTransformArrayMutable
// Size: 0x230 (Inherited: 0x170)
struct FRigUnit_DebugTransformArrayMutable : FRigUnit_DebugBaseMutable {
	struct TArray<struct FTransform> Transforms; // 0x170(0x10)
	enum class ERigUnitDebugTransformMode Mode; // 0x180(0x01)
	char pad_181[0x3]; // 0x181(0x03)
	struct FLinearColor Color; // 0x184(0x10)
	float Thickness; // 0x194(0x04)
	float Scale; // 0x198(0x04)
	struct FName Space; // 0x19c(0x0c)
	char pad_1A8[0x8]; // 0x1a8(0x08)
	struct FTransform WorldOffset; // 0x1b0(0x60)
	bool bEnabled; // 0x210(0x01)
	char pad_211[0x7]; // 0x211(0x07)
	struct FRigUnit_DebugTransformArrayMutable_WorkData WorkData; // 0x218(0x10)
	char pad_228[0x8]; // 0x228(0x08)
};

// ScriptStruct ControlRig.RigUnit_DebugTransformArrayMutableItemSpace
// Size: 0x230 (Inherited: 0x170)
struct FRigUnit_DebugTransformArrayMutableItemSpace : FRigUnit_DebugBaseMutable {
	struct TArray<struct FTransform> Transforms; // 0x170(0x10)
	struct TArray<int32_t> ParentIndices; // 0x180(0x10)
	enum class ERigUnitDebugTransformMode Mode; // 0x190(0x01)
	char pad_191[0x3]; // 0x191(0x03)
	struct FLinearColor Color; // 0x194(0x10)
	float Thickness; // 0x1a4(0x04)
	float Scale; // 0x1a8(0x04)
	struct FRigElementKey Space; // 0x1ac(0x10)
	char pad_1BC[0x4]; // 0x1bc(0x04)
	struct FTransform WorldOffset; // 0x1c0(0x60)
	bool bEnabled; // 0x220(0x01)
	char pad_221[0xf]; // 0x221(0x0f)
};

// ScriptStruct ControlRig.RigUnit_StartProfilingTimer
// Size: 0x110 (Inherited: 0x110)
struct FRigUnit_StartProfilingTimer : FRigVMFunction_DebugBaseMutable {
};

// ScriptStruct ControlRig.RigUnit_EndProfilingTimer
// Size: 0x140 (Inherited: 0x110)
struct FRigUnit_EndProfilingTimer : FRigVMFunction_DebugBaseMutable {
	int32_t NumberOfMeasurements; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
	struct FString Prefix; // 0x118(0x10)
	float AccumulatedTime; // 0x128(0x04)
	int32_t MeasurementsLeft; // 0x12c(0x04)
	bool bIsInitialized; // 0x130(0x01)
	char pad_131[0xf]; // 0x131(0x0f)
};

// ScriptStruct ControlRig.RigUnit_VisualDebugVector
// Size: 0x48 (Inherited: 0x08)
struct FRigUnit_VisualDebugVector : FRigUnit_DebugBase {
	struct FVector Value; // 0x08(0x18)
	bool bEnabled; // 0x20(0x01)
	enum class ERigUnitVisualDebugPointMode Mode; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
	struct FLinearColor Color; // 0x24(0x10)
	float Thickness; // 0x34(0x04)
	float Scale; // 0x38(0x04)
	struct FName BoneSpace; // 0x3c(0x0c)
};

// ScriptStruct ControlRig.RigUnit_VisualDebugVectorItemSpace
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_VisualDebugVectorItemSpace : FRigUnit_DebugBase {
	struct FVector Value; // 0x08(0x18)
	bool bEnabled; // 0x20(0x01)
	enum class ERigUnitVisualDebugPointMode Mode; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
	struct FLinearColor Color; // 0x24(0x10)
	float Thickness; // 0x34(0x04)
	float Scale; // 0x38(0x04)
	struct FRigElementKey Space; // 0x3c(0x10)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct ControlRig.RigUnit_VisualDebugQuat
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_VisualDebugQuat : FRigUnit_DebugBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Value; // 0x10(0x20)
	bool bEnabled; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float Thickness; // 0x34(0x04)
	float Scale; // 0x38(0x04)
	struct FName BoneSpace; // 0x3c(0x0c)
	char pad_48[0x8]; // 0x48(0x08)
};

// ScriptStruct ControlRig.RigUnit_VisualDebugQuatItemSpace
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_VisualDebugQuatItemSpace : FRigUnit_DebugBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Value; // 0x10(0x20)
	bool bEnabled; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float Thickness; // 0x34(0x04)
	float Scale; // 0x38(0x04)
	struct FRigElementKey Space; // 0x3c(0x10)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct ControlRig.RigUnit_VisualDebugTransform
// Size: 0x90 (Inherited: 0x08)
struct FRigUnit_VisualDebugTransform : FRigUnit_DebugBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Value; // 0x10(0x60)
	bool bEnabled; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	float Thickness; // 0x74(0x04)
	float Scale; // 0x78(0x04)
	struct FName BoneSpace; // 0x7c(0x0c)
	char pad_88[0x8]; // 0x88(0x08)
};

// ScriptStruct ControlRig.RigUnit_VisualDebugTransformItemSpace
// Size: 0x90 (Inherited: 0x08)
struct FRigUnit_VisualDebugTransformItemSpace : FRigUnit_DebugBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Value; // 0x10(0x60)
	bool bEnabled; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	float Thickness; // 0x74(0x04)
	float Scale; // 0x78(0x04)
	struct FRigElementKey Space; // 0x7c(0x10)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct ControlRig.RigUnit_ConvertTransform
// Size: 0xc0 (Inherited: 0x08)
struct FRigUnit_ConvertTransform : FRigUnit {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Input; // 0x10(0x60)
	struct FEulerTransform Result; // 0x70(0x48)
	char pad_B8[0x8]; // 0xb8(0x08)
};

// ScriptStruct ControlRig.RigUnit_ConvertEulerTransform
// Size: 0xb0 (Inherited: 0x08)
struct FRigUnit_ConvertEulerTransform : FRigUnit {
	struct FEulerTransform Input; // 0x08(0x48)
	struct FTransform Result; // 0x50(0x60)
};

// ScriptStruct ControlRig.RigUnit_ConvertRotation
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_ConvertRotation : FRigUnit {
	struct FRotator Input; // 0x08(0x18)
	struct FQuat Result; // 0x20(0x20)
};

// ScriptStruct ControlRig.RigUnit_ConvertVectorRotation
// Size: 0x40 (Inherited: 0x40)
struct FRigUnit_ConvertVectorRotation : FRigUnit_ConvertRotation {
};

// ScriptStruct ControlRig.RigUnit_ConvertQuaternion
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_ConvertQuaternion : FRigUnit {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Input; // 0x10(0x20)
	struct FRotator Result; // 0x30(0x18)
	char pad_48[0x8]; // 0x48(0x08)
};

// ScriptStruct ControlRig.RigUnit_ConvertVectorToRotation
// Size: 0x38 (Inherited: 0x08)
struct FRigUnit_ConvertVectorToRotation : FRigUnit {
	struct FVector Input; // 0x08(0x18)
	struct FRotator Result; // 0x20(0x18)
};

// ScriptStruct ControlRig.RigUnit_ConvertVectorToQuaternion
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_ConvertVectorToQuaternion : FRigUnit {
	struct FVector Input; // 0x08(0x18)
	struct FQuat Result; // 0x20(0x20)
};

// ScriptStruct ControlRig.RigUnit_ConvertRotationToVector
// Size: 0x38 (Inherited: 0x08)
struct FRigUnit_ConvertRotationToVector : FRigUnit {
	struct FRotator Input; // 0x08(0x18)
	struct FVector Result; // 0x20(0x18)
};

// ScriptStruct ControlRig.RigUnit_ConvertQuaternionToVector
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_ConvertQuaternionToVector : FRigUnit {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Input; // 0x10(0x20)
	struct FVector Result; // 0x30(0x18)
	char pad_48[0x8]; // 0x48(0x08)
};

// ScriptStruct ControlRig.RigUnit_ToSwingAndTwist
// Size: 0x90 (Inherited: 0x08)
struct FRigUnit_ToSwingAndTwist : FRigUnit {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Input; // 0x10(0x20)
	struct FVector TwistAxis; // 0x30(0x18)
	char pad_48[0x8]; // 0x48(0x08)
	struct FQuat Swing; // 0x50(0x20)
	struct FQuat Twist; // 0x70(0x20)
};

// ScriptStruct ControlRig.RigUnit_BinaryFloatOp
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_BinaryFloatOp : FRigUnit {
	float Argument0; // 0x08(0x04)
	float Argument1; // 0x0c(0x04)
	float Result; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ControlRig.RigUnit_Multiply_FloatFloat
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_Multiply_FloatFloat : FRigUnit_BinaryFloatOp {
};

// ScriptStruct ControlRig.RigUnit_Add_FloatFloat
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_Add_FloatFloat : FRigUnit_BinaryFloatOp {
};

// ScriptStruct ControlRig.RigUnit_Subtract_FloatFloat
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_Subtract_FloatFloat : FRigUnit_BinaryFloatOp {
};

// ScriptStruct ControlRig.RigUnit_Divide_FloatFloat
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_Divide_FloatFloat : FRigUnit_BinaryFloatOp {
};

// ScriptStruct ControlRig.RigUnit_Clamp_Float
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_Clamp_Float : FRigUnit {
	float Value; // 0x08(0x04)
	float Min; // 0x0c(0x04)
	float Max; // 0x10(0x04)
	float Result; // 0x14(0x04)
};

// ScriptStruct ControlRig.RigUnit_MapRange_Float
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_MapRange_Float : FRigUnit {
	float Value; // 0x08(0x04)
	float MinIn; // 0x0c(0x04)
	float MaxIn; // 0x10(0x04)
	float MinOut; // 0x14(0x04)
	float MaxOut; // 0x18(0x04)
	float Result; // 0x1c(0x04)
};

// ScriptStruct ControlRig.RigUnit_BinaryQuaternionOp
// Size: 0x70 (Inherited: 0x08)
struct FRigUnit_BinaryQuaternionOp : FRigUnit {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Argument0; // 0x10(0x20)
	struct FQuat Argument1; // 0x30(0x20)
	struct FQuat Result; // 0x50(0x20)
};

// ScriptStruct ControlRig.RigUnit_MultiplyQuaternion
// Size: 0x70 (Inherited: 0x70)
struct FRigUnit_MultiplyQuaternion : FRigUnit_BinaryQuaternionOp {
};

// ScriptStruct ControlRig.RigUnit_UnaryQuaternionOp
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_UnaryQuaternionOp : FRigUnit {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Argument; // 0x10(0x20)
	struct FQuat Result; // 0x30(0x20)
};

// ScriptStruct ControlRig.RigUnit_InverseQuaterion
// Size: 0x50 (Inherited: 0x50)
struct FRigUnit_InverseQuaterion : FRigUnit_UnaryQuaternionOp {
};

// ScriptStruct ControlRig.RigUnit_QuaternionToAxisAndAngle
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_QuaternionToAxisAndAngle : FRigUnit {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Argument; // 0x10(0x20)
	struct FVector Axis; // 0x30(0x18)
	float Angle; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct ControlRig.RigUnit_QuaternionFromAxisAndAngle
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_QuaternionFromAxisAndAngle : FRigUnit {
	struct FVector Axis; // 0x08(0x18)
	float Angle; // 0x20(0x04)
	char pad_24[0xc]; // 0x24(0x0c)
	struct FQuat Result; // 0x30(0x20)
};

// ScriptStruct ControlRig.RigUnit_QuaternionToAngle
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_QuaternionToAngle : FRigUnit {
	struct FVector Axis; // 0x08(0x18)
	struct FQuat Argument; // 0x20(0x20)
	float Angle; // 0x40(0x04)
	char pad_44[0xc]; // 0x44(0x0c)
};

// ScriptStruct ControlRig.RigUnit_BinaryTransformOp
// Size: 0x130 (Inherited: 0x08)
struct FRigUnit_BinaryTransformOp : FRigUnit {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Argument0; // 0x10(0x60)
	struct FTransform Argument1; // 0x70(0x60)
	struct FTransform Result; // 0xd0(0x60)
};

// ScriptStruct ControlRig.RigUnit_MultiplyTransform
// Size: 0x130 (Inherited: 0x130)
struct FRigUnit_MultiplyTransform : FRigUnit_BinaryTransformOp {
};

// ScriptStruct ControlRig.RigUnit_GetRelativeTransform
// Size: 0x130 (Inherited: 0x130)
struct FRigUnit_GetRelativeTransform : FRigUnit_BinaryTransformOp {
};

// ScriptStruct ControlRig.RigUnit_BinaryVectorOp
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_BinaryVectorOp : FRigUnit {
	struct FVector Argument0; // 0x08(0x18)
	struct FVector Argument1; // 0x20(0x18)
	struct FVector Result; // 0x38(0x18)
};

// ScriptStruct ControlRig.RigUnit_Multiply_VectorVector
// Size: 0x50 (Inherited: 0x50)
struct FRigUnit_Multiply_VectorVector : FRigUnit_BinaryVectorOp {
};

// ScriptStruct ControlRig.RigUnit_Add_VectorVector
// Size: 0x50 (Inherited: 0x50)
struct FRigUnit_Add_VectorVector : FRigUnit_BinaryVectorOp {
};

// ScriptStruct ControlRig.RigUnit_Subtract_VectorVector
// Size: 0x50 (Inherited: 0x50)
struct FRigUnit_Subtract_VectorVector : FRigUnit_BinaryVectorOp {
};

// ScriptStruct ControlRig.RigUnit_Divide_VectorVector
// Size: 0x50 (Inherited: 0x50)
struct FRigUnit_Divide_VectorVector : FRigUnit_BinaryVectorOp {
};

// ScriptStruct ControlRig.RigUnit_Distance_VectorVector
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_Distance_VectorVector : FRigUnit {
	struct FVector Argument0; // 0x08(0x18)
	struct FVector Argument1; // 0x20(0x18)
	float Result; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct ControlRig.AimTarget
// Size: 0x90 (Inherited: 0x00)
struct FAimTarget {
	float Weight; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)
	struct FTransform Transform; // 0x10(0x60)
	struct FVector AlignVector; // 0x70(0x18)
	char pad_88[0x8]; // 0x88(0x08)
};

// ScriptStruct ControlRig.RigUnit_AimConstraint_WorkData
// Size: 0x10 (Inherited: 0x00)
struct FRigUnit_AimConstraint_WorkData {
	struct TArray<struct FConstraintData> ConstraintData; // 0x00(0x10)
};

// ScriptStruct ControlRig.RigUnit_AimConstraint
// Size: 0x1e0 (Inherited: 0x170)
struct FRigUnit_AimConstraint : FRigUnitMutable {
	struct FName Joint; // 0x170(0x0c)
	enum class EAimMode AimMode; // 0x17c(0x01)
	enum class EAimMode UpMode; // 0x17d(0x01)
	char pad_17E[0x2]; // 0x17e(0x02)
	struct FVector AimVector; // 0x180(0x18)
	struct FVector UpVector; // 0x198(0x18)
	struct TArray<struct FAimTarget> AimTargets; // 0x1b0(0x10)
	struct TArray<struct FAimTarget> UpTargets; // 0x1c0(0x10)
	struct FRigUnit_AimConstraint_WorkData WorkData; // 0x1d0(0x10)
};

// ScriptStruct ControlRig.RigUnit_ApplyFK
// Size: 0x260 (Inherited: 0x170)
struct FRigUnit_ApplyFK : FRigUnitMutable {
	struct FName Joint; // 0x170(0x0c)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct FTransform Transform; // 0x180(0x60)
	struct FTransformFilter Filter; // 0x1e0(0x09)
	enum class EApplyTransformMode ApplyTransformMode; // 0x1e9(0x01)
	enum class ETransformSpaceMode ApplyTransformSpace; // 0x1ea(0x01)
	char pad_1EB[0x5]; // 0x1eb(0x05)
	struct FTransform BaseTransform; // 0x1f0(0x60)
	struct FName BaseJoint; // 0x250(0x0c)
	char pad_25C[0x4]; // 0x25c(0x04)
};

// ScriptStruct ControlRig.BlendTarget
// Size: 0x70 (Inherited: 0x00)
struct FBlendTarget {
	struct FTransform Transform; // 0x00(0x60)
	float Weight; // 0x60(0x04)
	char pad_64[0xc]; // 0x64(0x0c)
};

// ScriptStruct ControlRig.RigUnit_BlendTransform
// Size: 0xe0 (Inherited: 0x08)
struct FRigUnit_BlendTransform : FRigUnit {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Source; // 0x10(0x60)
	struct TArray<struct FBlendTarget> Targets; // 0x70(0x10)
	struct FTransform Result; // 0x80(0x60)
};

// ScriptStruct ControlRig.RigUnit_GetJointTransform
// Size: 0x250 (Inherited: 0x170)
struct FRigUnit_GetJointTransform : FRigUnitMutable {
	struct FName Joint; // 0x170(0x0c)
	enum class ETransformGetterType Type; // 0x17c(0x01)
	enum class ETransformSpaceMode TransformSpace; // 0x17d(0x01)
	char pad_17E[0x2]; // 0x17e(0x02)
	struct FTransform BaseTransform; // 0x180(0x60)
	struct FName BaseJoint; // 0x1e0(0x0c)
	char pad_1EC[0x4]; // 0x1ec(0x04)
	struct FTransform output; // 0x1f0(0x60)
};

// ScriptStruct ControlRig.RigUnit_TwoBoneIKFK
// Size: 0x490 (Inherited: 0x170)
struct FRigUnit_TwoBoneIKFK : FRigUnitMutable {
	struct FName StartJoint; // 0x170(0x0c)
	struct FName EndJoint; // 0x17c(0x0c)
	struct FVector PoleTarget; // 0x188(0x18)
	float Spin; // 0x1a0(0x04)
	char pad_1A4[0xc]; // 0x1a4(0x0c)
	struct FTransform EndEffector; // 0x1b0(0x60)
	float IKBlend; // 0x210(0x04)
	char pad_214[0xc]; // 0x214(0x0c)
	struct FTransform StartJointFKTransform; // 0x220(0x60)
	struct FTransform MidJointFKTransform; // 0x280(0x60)
	struct FTransform EndJointFKTransform; // 0x2e0(0x60)
	float PreviousFKIKBlend; // 0x340(0x04)
	char pad_344[0xc]; // 0x344(0x0c)
	struct FTransform StartJointIKTransform; // 0x350(0x60)
	struct FTransform MidJointIKTransform; // 0x3b0(0x60)
	struct FTransform EndJointIKTransform; // 0x410(0x60)
	int32_t StartJointIndex; // 0x470(0x04)
	int32_t MidJointIndex; // 0x474(0x04)
	int32_t EndJointIndex; // 0x478(0x04)
	float UpperLimbLength; // 0x47c(0x04)
	float LowerLimbLength; // 0x480(0x04)
	bool bIsInitialized; // 0x484(0x01)
	char pad_485[0xb]; // 0x485(0x0b)
};

// ScriptStruct ControlRig.RigUnit_DrawContainerGetInstruction
// Size: 0x90 (Inherited: 0x08)
struct FRigUnit_DrawContainerGetInstruction : FRigUnit {
	struct FName InstructionName; // 0x08(0x0c)
	struct FLinearColor Color; // 0x14(0x10)
	char pad_24[0xc]; // 0x24(0x0c)
	struct FTransform Transform; // 0x30(0x60)
};

// ScriptStruct ControlRig.RigUnit_DrawContainerSetColor
// Size: 0x190 (Inherited: 0x170)
struct FRigUnit_DrawContainerSetColor : FRigUnitMutable {
	struct FName InstructionName; // 0x170(0x0c)
	struct FLinearColor Color; // 0x17c(0x10)
	char pad_18C[0x4]; // 0x18c(0x04)
};

// ScriptStruct ControlRig.RigUnit_DrawContainerSetThickness
// Size: 0x180 (Inherited: 0x170)
struct FRigUnit_DrawContainerSetThickness : FRigUnitMutable {
	struct FName InstructionName; // 0x170(0x0c)
	float Thickness; // 0x17c(0x04)
};

// ScriptStruct ControlRig.RigUnit_DrawContainerSetTransform
// Size: 0x1e0 (Inherited: 0x170)
struct FRigUnit_DrawContainerSetTransform : FRigUnitMutable {
	struct FName InstructionName; // 0x170(0x0c)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct FTransform Transform; // 0x180(0x60)
};

// ScriptStruct ControlRig.RigUnit_BeginExecution
// Size: 0x170 (Inherited: 0x08)
struct FRigUnit_BeginExecution : FRigUnit {
	char pad_8[0x8]; // 0x08(0x08)
	struct FControlRigExecuteContext ExecuteContext; // 0x10(0x160)
};

// ScriptStruct ControlRig.RigUnit_CollectionBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_CollectionBase : FRigUnit {
};

// ScriptStruct ControlRig.RigUnit_CollectionBaseMutable
// Size: 0x170 (Inherited: 0x170)
struct FRigUnit_CollectionBaseMutable : FRigUnitMutable {
};

// ScriptStruct ControlRig.RigUnit_CollectionChain
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_CollectionChain : FRigUnit_CollectionBase {
	struct FRigElementKey FirstItem; // 0x08(0x10)
	struct FRigElementKey LastItem; // 0x18(0x10)
	bool Reverse; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FRigElementKeyCollection Collection; // 0x30(0x10)
};

// ScriptStruct ControlRig.RigUnit_CollectionChainArray
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_CollectionChainArray : FRigUnit_CollectionBase {
	struct FRigElementKey FirstItem; // 0x08(0x10)
	struct FRigElementKey LastItem; // 0x18(0x10)
	bool Reverse; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TArray<struct FRigElementKey> Items; // 0x30(0x10)
};

// ScriptStruct ControlRig.RigUnit_CollectionNameSearch
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_CollectionNameSearch : FRigUnit_CollectionBase {
	struct FName PartialName; // 0x08(0x0c)
	enum class ERigElementType TypeToSearch; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FRigElementKeyCollection Collection; // 0x18(0x10)
};

// ScriptStruct ControlRig.RigUnit_CollectionNameSearchArray
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_CollectionNameSearchArray : FRigUnit_CollectionBase {
	struct FName PartialName; // 0x08(0x0c)
	enum class ERigElementType TypeToSearch; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct TArray<struct FRigElementKey> Items; // 0x18(0x10)
};

// ScriptStruct ControlRig.RigUnit_CollectionChildren
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_CollectionChildren : FRigUnit_CollectionBase {
	struct FRigElementKey Parent; // 0x08(0x10)
	bool bIncludeParent; // 0x18(0x01)
	bool bRecursive; // 0x19(0x01)
	enum class ERigElementType TypeToSearch; // 0x1a(0x01)
	char pad_1B[0x5]; // 0x1b(0x05)
	struct FRigElementKeyCollection Collection; // 0x20(0x10)
};

// ScriptStruct ControlRig.RigUnit_CollectionChildrenArray
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_CollectionChildrenArray : FRigUnit_CollectionBase {
	struct FRigElementKey Parent; // 0x08(0x10)
	bool bIncludeParent; // 0x18(0x01)
	bool bRecursive; // 0x19(0x01)
	enum class ERigElementType TypeToSearch; // 0x1a(0x01)
	char pad_1B[0x5]; // 0x1b(0x05)
	struct TArray<struct FRigElementKey> Items; // 0x20(0x10)
};

// ScriptStruct ControlRig.RigUnit_CollectionGetAll
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_CollectionGetAll : FRigUnit_CollectionBase {
	enum class ERigElementType TypeToSearch; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct FRigElementKey> Items; // 0x10(0x10)
};

// ScriptStruct ControlRig.RigUnit_CollectionReplaceItems
// Size: 0x48 (Inherited: 0x08)
struct FRigUnit_CollectionReplaceItems : FRigUnit_CollectionBase {
	struct FRigElementKeyCollection Items; // 0x08(0x10)
	struct FName Old; // 0x18(0x0c)
	struct FName New; // 0x24(0x0c)
	bool RemoveInvalidItems; // 0x30(0x01)
	bool bAllowDuplicates; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct FRigElementKeyCollection Collection; // 0x38(0x10)
};

// ScriptStruct ControlRig.RigUnit_CollectionReplaceItemsArray
// Size: 0x48 (Inherited: 0x08)
struct FRigUnit_CollectionReplaceItemsArray : FRigUnit_CollectionBase {
	struct TArray<struct FRigElementKey> Items; // 0x08(0x10)
	struct FName Old; // 0x18(0x0c)
	struct FName New; // 0x24(0x0c)
	bool RemoveInvalidItems; // 0x30(0x01)
	bool bAllowDuplicates; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct TArray<struct FRigElementKey> Result; // 0x38(0x10)
};

// ScriptStruct ControlRig.RigUnit_CollectionItems
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_CollectionItems : FRigUnit_CollectionBase {
	struct TArray<struct FRigElementKey> Items; // 0x08(0x10)
	bool bAllowDuplicates; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FRigElementKeyCollection Collection; // 0x20(0x10)
};

// ScriptStruct ControlRig.RigUnit_CollectionGetItems
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_CollectionGetItems : FRigUnit_CollectionBase {
	struct FRigElementKeyCollection Collection; // 0x08(0x10)
	struct TArray<struct FRigElementKey> Items; // 0x18(0x10)
};

// ScriptStruct ControlRig.RigUnit_CollectionGetParentIndices
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_CollectionGetParentIndices : FRigUnit_CollectionBase {
	struct FRigElementKeyCollection Collection; // 0x08(0x10)
	struct TArray<int32_t> ParentIndices; // 0x18(0x10)
};

// ScriptStruct ControlRig.RigUnit_CollectionGetParentIndicesItemArray
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_CollectionGetParentIndicesItemArray : FRigUnit_CollectionBase {
	struct TArray<struct FRigElementKey> Items; // 0x08(0x10)
	struct TArray<int32_t> ParentIndices; // 0x18(0x10)
};

// ScriptStruct ControlRig.RigUnit_CollectionUnion
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_CollectionUnion : FRigUnit_CollectionBase {
	struct FRigElementKeyCollection A; // 0x08(0x10)
	struct FRigElementKeyCollection B; // 0x18(0x10)
	bool bAllowDuplicates; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FRigElementKeyCollection Collection; // 0x30(0x10)
};

// ScriptStruct ControlRig.RigUnit_CollectionIntersection
// Size: 0x38 (Inherited: 0x08)
struct FRigUnit_CollectionIntersection : FRigUnit_CollectionBase {
	struct FRigElementKeyCollection A; // 0x08(0x10)
	struct FRigElementKeyCollection B; // 0x18(0x10)
	struct FRigElementKeyCollection Collection; // 0x28(0x10)
};

// ScriptStruct ControlRig.RigUnit_CollectionDifference
// Size: 0x38 (Inherited: 0x08)
struct FRigUnit_CollectionDifference : FRigUnit_CollectionBase {
	struct FRigElementKeyCollection A; // 0x08(0x10)
	struct FRigElementKeyCollection B; // 0x18(0x10)
	struct FRigElementKeyCollection Collection; // 0x28(0x10)
};

// ScriptStruct ControlRig.RigUnit_CollectionReverse
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_CollectionReverse : FRigUnit_CollectionBase {
	struct FRigElementKeyCollection Collection; // 0x08(0x10)
	struct FRigElementKeyCollection Reversed; // 0x18(0x10)
};

// ScriptStruct ControlRig.RigUnit_CollectionCount
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_CollectionCount : FRigUnit_CollectionBase {
	struct FRigElementKeyCollection Collection; // 0x08(0x10)
	int32_t Count; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ControlRig.RigUnit_CollectionItemAtIndex
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_CollectionItemAtIndex : FRigUnit_CollectionBase {
	struct FRigElementKeyCollection Collection; // 0x08(0x10)
	int32_t Index; // 0x18(0x04)
	struct FRigElementKey Item; // 0x1c(0x10)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct ControlRig.RigUnit_CollectionLoop
// Size: 0x310 (Inherited: 0x170)
struct FRigUnit_CollectionLoop : FRigUnit_CollectionBaseMutable {
	struct FName BlockToRun; // 0x170(0x0c)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct FRigElementKeyCollection Collection; // 0x180(0x10)
	struct FRigElementKey Item; // 0x190(0x10)
	int32_t Index; // 0x1a0(0x04)
	int32_t Count; // 0x1a4(0x04)
	float Ratio; // 0x1a8(0x04)
	char pad_1AC[0x4]; // 0x1ac(0x04)
	struct FControlRigExecuteContext Completed; // 0x1b0(0x160)
};

// ScriptStruct ControlRig.RigUnit_CollectionAddItem
// Size: 0x38 (Inherited: 0x08)
struct FRigUnit_CollectionAddItem : FRigUnit_CollectionBase {
	struct FRigElementKeyCollection Collection; // 0x08(0x10)
	struct FRigElementKey Item; // 0x18(0x10)
	struct FRigElementKeyCollection Result; // 0x28(0x10)
};

// ScriptStruct ControlRig.RigUnit_DynamicHierarchyBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_DynamicHierarchyBase : FRigUnit {
};

// ScriptStruct ControlRig.RigUnit_DynamicHierarchyBaseMutable
// Size: 0x170 (Inherited: 0x170)
struct FRigUnit_DynamicHierarchyBaseMutable : FRigUnitMutable {
};

// ScriptStruct ControlRig.RigUnit_AddParent
// Size: 0x190 (Inherited: 0x170)
struct FRigUnit_AddParent : FRigUnit_DynamicHierarchyBaseMutable {
	struct FRigElementKey Child; // 0x170(0x10)
	struct FRigElementKey Parent; // 0x180(0x10)
};

// ScriptStruct ControlRig.RigUnit_SetDefaultParent
// Size: 0x190 (Inherited: 0x170)
struct FRigUnit_SetDefaultParent : FRigUnit_DynamicHierarchyBaseMutable {
	struct FRigElementKey Child; // 0x170(0x10)
	struct FRigElementKey Parent; // 0x180(0x10)
};

// ScriptStruct ControlRig.RigUnit_SwitchParent
// Size: 0x1a0 (Inherited: 0x170)
struct FRigUnit_SwitchParent : FRigUnit_DynamicHierarchyBaseMutable {
	enum class ERigSwitchParentMode Mode; // 0x170(0x01)
	char pad_171[0x3]; // 0x171(0x03)
	struct FRigElementKey Child; // 0x174(0x10)
	struct FRigElementKey Parent; // 0x184(0x10)
	bool bMaintainGlobal; // 0x194(0x01)
	char pad_195[0xb]; // 0x195(0x0b)
};

// ScriptStruct ControlRig.RigUnit_HierarchyGetParentWeights
// Size: 0x38 (Inherited: 0x08)
struct FRigUnit_HierarchyGetParentWeights : FRigUnit_DynamicHierarchyBase {
	struct FRigElementKey Child; // 0x08(0x10)
	struct TArray<struct FRigElementWeight> Weights; // 0x18(0x10)
	struct FRigElementKeyCollection Parents; // 0x28(0x10)
};

// ScriptStruct ControlRig.RigUnit_HierarchyGetParentWeightsArray
// Size: 0x38 (Inherited: 0x08)
struct FRigUnit_HierarchyGetParentWeightsArray : FRigUnit_DynamicHierarchyBase {
	struct FRigElementKey Child; // 0x08(0x10)
	struct TArray<struct FRigElementWeight> Weights; // 0x18(0x10)
	struct TArray<struct FRigElementKey> Parents; // 0x28(0x10)
};

// ScriptStruct ControlRig.RigUnit_HierarchySetParentWeights
// Size: 0x190 (Inherited: 0x170)
struct FRigUnit_HierarchySetParentWeights : FRigUnit_DynamicHierarchyBaseMutable {
	struct FRigElementKey Child; // 0x170(0x10)
	struct TArray<struct FRigElementWeight> Weights; // 0x180(0x10)
};

// ScriptStruct ControlRig.RigUnit_HierarchyReset
// Size: 0x170 (Inherited: 0x170)
struct FRigUnit_HierarchyReset : FRigUnit_DynamicHierarchyBaseMutable {
};

// ScriptStruct ControlRig.RigUnit_HierarchyImportFromSkeleton
// Size: 0x190 (Inherited: 0x170)
struct FRigUnit_HierarchyImportFromSkeleton : FRigUnit_DynamicHierarchyBaseMutable {
	struct FName Namespace; // 0x170(0x0c)
	bool bIncludeCurves; // 0x17c(0x01)
	char pad_17D[0x3]; // 0x17d(0x03)
	struct TArray<struct FRigElementKey> Items; // 0x180(0x10)
};

// ScriptStruct ControlRig.RigUnit_HierarchyRemoveElement
// Size: 0x190 (Inherited: 0x170)
struct FRigUnit_HierarchyRemoveElement : FRigUnit_DynamicHierarchyBaseMutable {
	struct FRigElementKey Item; // 0x170(0x10)
	bool bSuccess; // 0x180(0x01)
	char pad_181[0xf]; // 0x181(0x0f)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddElement
// Size: 0x1a0 (Inherited: 0x170)
struct FRigUnit_HierarchyAddElement : FRigUnit_DynamicHierarchyBaseMutable {
	struct FRigElementKey Parent; // 0x170(0x10)
	struct FName Name; // 0x180(0x0c)
	struct FRigElementKey Item; // 0x18c(0x10)
	char pad_19C[0x4]; // 0x19c(0x04)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddBone
// Size: 0x210 (Inherited: 0x1a0)
struct FRigUnit_HierarchyAddBone : FRigUnit_HierarchyAddElement {
	struct FTransform Transform; // 0x1a0(0x60)
	enum class ERigVMTransformSpace Space; // 0x200(0x01)
	char pad_201[0xf]; // 0x201(0x0f)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddNull
// Size: 0x210 (Inherited: 0x1a0)
struct FRigUnit_HierarchyAddNull : FRigUnit_HierarchyAddElement {
	struct FTransform Transform; // 0x1a0(0x60)
	enum class ERigVMTransformSpace Space; // 0x200(0x01)
	char pad_201[0xf]; // 0x201(0x0f)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddControl_Settings
// Size: 0x18 (Inherited: 0x00)
struct FRigUnit_HierarchyAddControl_Settings {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName DisplayName; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddControl_ShapeSettings
// Size: 0x80 (Inherited: 0x00)
struct FRigUnit_HierarchyAddControl_ShapeSettings {
	bool bVisible; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName Name; // 0x04(0x0c)
	struct FLinearColor Color; // 0x10(0x10)
	struct FTransform Transform; // 0x20(0x60)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddControl_ProxySettings
// Size: 0x20 (Inherited: 0x00)
struct FRigUnit_HierarchyAddControl_ProxySettings {
	bool bIsProxy; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FRigElementKey> DrivenControls; // 0x08(0x10)
	enum class ERigControlVisibility ShapeVisibility; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddControlFloat_LimitSettings
// Size: 0x10 (Inherited: 0x00)
struct FRigUnit_HierarchyAddControlFloat_LimitSettings {
	struct FRigControlLimitEnabled Limit; // 0x00(0x02)
	char pad_2[0x2]; // 0x02(0x02)
	float MinValue; // 0x04(0x04)
	float MaxValue; // 0x08(0x04)
	bool bDrawLimits; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddControlFloat_Settings
// Size: 0xd0 (Inherited: 0x18)
struct FRigUnit_HierarchyAddControlFloat_Settings : FRigUnit_HierarchyAddControl_Settings {
	enum class ERigControlAxis PrimaryAxis; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FRigUnit_HierarchyAddControlFloat_LimitSettings Limits; // 0x1c(0x10)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FRigUnit_HierarchyAddControl_ShapeSettings Shape; // 0x30(0x80)
	struct FRigUnit_HierarchyAddControl_ProxySettings Proxy; // 0xb0(0x20)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddControlElement
// Size: 0x210 (Inherited: 0x1a0)
struct FRigUnit_HierarchyAddControlElement : FRigUnit_HierarchyAddElement {
	struct FTransform OffsetTransform; // 0x1a0(0x60)
	enum class ERigVMTransformSpace OffsetSpace; // 0x200(0x01)
	char pad_201[0xf]; // 0x201(0x0f)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddControlFloat
// Size: 0x2e0 (Inherited: 0x210)
struct FRigUnit_HierarchyAddControlFloat : FRigUnit_HierarchyAddControlElement {
	float InitialValue; // 0x208(0x04)
	struct FRigUnit_HierarchyAddControlFloat_Settings Settings; // 0x210(0xd0)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddControlInteger_LimitSettings
// Size: 0x10 (Inherited: 0x00)
struct FRigUnit_HierarchyAddControlInteger_LimitSettings {
	struct FRigControlLimitEnabled Limit; // 0x00(0x02)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t MinValue; // 0x04(0x04)
	int32_t MaxValue; // 0x08(0x04)
	bool bDrawLimits; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddControlInteger_Settings
// Size: 0xd0 (Inherited: 0x18)
struct FRigUnit_HierarchyAddControlInteger_Settings : FRigUnit_HierarchyAddControl_Settings {
	enum class ERigControlAxis PrimaryAxis; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FRigUnit_HierarchyAddControlInteger_LimitSettings Limits; // 0x1c(0x10)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FRigUnit_HierarchyAddControl_ShapeSettings Shape; // 0x30(0x80)
	struct FRigUnit_HierarchyAddControl_ProxySettings Proxy; // 0xb0(0x20)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddControlInteger
// Size: 0x2e0 (Inherited: 0x210)
struct FRigUnit_HierarchyAddControlInteger : FRigUnit_HierarchyAddControlElement {
	int32_t InitialValue; // 0x208(0x04)
	struct FRigUnit_HierarchyAddControlInteger_Settings Settings; // 0x210(0xd0)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector2D_LimitSettings
// Size: 0x30 (Inherited: 0x00)
struct FRigUnit_HierarchyAddControlVector2D_LimitSettings {
	struct FRigControlLimitEnabled LimitX; // 0x00(0x02)
	struct FRigControlLimitEnabled LimitY; // 0x02(0x02)
	char pad_4[0x4]; // 0x04(0x04)
	struct FVector2D MinValue; // 0x08(0x10)
	struct FVector2D MaxValue; // 0x18(0x10)
	bool bDrawLimits; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector2D_Settings
// Size: 0x100 (Inherited: 0x18)
struct FRigUnit_HierarchyAddControlVector2D_Settings : FRigUnit_HierarchyAddControl_Settings {
	enum class ERigControlAxis PrimaryAxis; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FRigUnit_HierarchyAddControlVector2D_LimitSettings Limits; // 0x20(0x30)
	struct FRigUnit_HierarchyAddControl_ShapeSettings Shape; // 0x50(0x80)
	struct FRigUnit_HierarchyAddControl_ProxySettings Proxy; // 0xd0(0x20)
	struct TArray<enum class ERigControlTransformChannel> FilteredChannels; // 0xf0(0x10)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector2D
// Size: 0x320 (Inherited: 0x210)
struct FRigUnit_HierarchyAddControlVector2D : FRigUnit_HierarchyAddControlElement {
	struct FVector2D InitialValue; // 0x208(0x10)
	struct FRigUnit_HierarchyAddControlVector2D_Settings Settings; // 0x220(0x100)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector_LimitSettings
// Size: 0x40 (Inherited: 0x00)
struct FRigUnit_HierarchyAddControlVector_LimitSettings {
	struct FRigControlLimitEnabled LimitX; // 0x00(0x02)
	struct FRigControlLimitEnabled LimitY; // 0x02(0x02)
	struct FRigControlLimitEnabled LimitZ; // 0x04(0x02)
	char pad_6[0x2]; // 0x06(0x02)
	struct FVector MinValue; // 0x08(0x18)
	struct FVector MaxValue; // 0x20(0x18)
	bool bDrawLimits; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector_Settings
// Size: 0x110 (Inherited: 0x18)
struct FRigUnit_HierarchyAddControlVector_Settings : FRigUnit_HierarchyAddControl_Settings {
	enum class ERigVMTransformSpace InitialSpace; // 0x18(0x01)
	bool bIsPosition; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
	struct FRigUnit_HierarchyAddControlVector_LimitSettings Limits; // 0x20(0x40)
	struct FRigUnit_HierarchyAddControl_ShapeSettings Shape; // 0x60(0x80)
	struct FRigUnit_HierarchyAddControl_ProxySettings Proxy; // 0xe0(0x20)
	struct TArray<enum class ERigControlTransformChannel> FilteredChannels; // 0x100(0x10)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector
// Size: 0x330 (Inherited: 0x210)
struct FRigUnit_HierarchyAddControlVector : FRigUnit_HierarchyAddControlElement {
	struct FVector InitialValue; // 0x208(0x18)
	struct FRigUnit_HierarchyAddControlVector_Settings Settings; // 0x220(0x110)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddControlRotator_LimitSettings
// Size: 0x40 (Inherited: 0x00)
struct FRigUnit_HierarchyAddControlRotator_LimitSettings {
	struct FRigControlLimitEnabled LimitPitch; // 0x00(0x02)
	struct FRigControlLimitEnabled LimitYaw; // 0x02(0x02)
	struct FRigControlLimitEnabled LimitRoll; // 0x04(0x02)
	char pad_6[0x2]; // 0x06(0x02)
	struct FRotator MinValue; // 0x08(0x18)
	struct FRotator MaxValue; // 0x20(0x18)
	bool bDrawLimits; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddControlRotator_Settings
// Size: 0x110 (Inherited: 0x18)
struct FRigUnit_HierarchyAddControlRotator_Settings : FRigUnit_HierarchyAddControl_Settings {
	enum class ERigVMTransformSpace InitialSpace; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FRigUnit_HierarchyAddControlRotator_LimitSettings Limits; // 0x20(0x40)
	struct FRigUnit_HierarchyAddControl_ShapeSettings Shape; // 0x60(0x80)
	struct FRigUnit_HierarchyAddControl_ProxySettings Proxy; // 0xe0(0x20)
	struct TArray<enum class ERigControlTransformChannel> FilteredChannels; // 0x100(0x10)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddControlRotator
// Size: 0x330 (Inherited: 0x210)
struct FRigUnit_HierarchyAddControlRotator : FRigUnit_HierarchyAddControlElement {
	struct FRotator InitialValue; // 0x208(0x18)
	struct FRigUnit_HierarchyAddControlRotator_Settings Settings; // 0x220(0x110)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddControlTransform_Settings
// Size: 0xd0 (Inherited: 0x18)
struct FRigUnit_HierarchyAddControlTransform_Settings : FRigUnit_HierarchyAddControl_Settings {
	enum class ERigVMTransformSpace InitialSpace; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FRigUnit_HierarchyAddControl_ShapeSettings Shape; // 0x20(0x80)
	struct FRigUnit_HierarchyAddControl_ProxySettings Proxy; // 0xa0(0x20)
	struct TArray<enum class ERigControlTransformChannel> FilteredChannels; // 0xc0(0x10)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddControlTransform
// Size: 0x340 (Inherited: 0x210)
struct FRigUnit_HierarchyAddControlTransform : FRigUnit_HierarchyAddControlElement {
	struct FTransform InitialValue; // 0x210(0x60)
	struct FRigUnit_HierarchyAddControlTransform_Settings Settings; // 0x270(0xd0)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelBool
// Size: 0x1b0 (Inherited: 0x1a0)
struct FRigUnit_HierarchyAddAnimationChannelBool : FRigUnit_HierarchyAddElement {
	bool InitialValue; // 0x1a0(0x01)
	bool MinimumValue; // 0x1a1(0x01)
	bool MaximumValue; // 0x1a2(0x01)
	char pad_1A3[0xd]; // 0x1a3(0x0d)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelFloat
// Size: 0x1b0 (Inherited: 0x1a0)
struct FRigUnit_HierarchyAddAnimationChannelFloat : FRigUnit_HierarchyAddElement {
	float InitialValue; // 0x1a0(0x04)
	float MinimumValue; // 0x1a4(0x04)
	float MaximumValue; // 0x1a8(0x04)
	char pad_1AC[0x4]; // 0x1ac(0x04)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelInteger
// Size: 0x1b0 (Inherited: 0x1a0)
struct FRigUnit_HierarchyAddAnimationChannelInteger : FRigUnit_HierarchyAddElement {
	int32_t InitialValue; // 0x1a0(0x04)
	int32_t MinimumValue; // 0x1a4(0x04)
	int32_t MaximumValue; // 0x1a8(0x04)
	char pad_1AC[0x4]; // 0x1ac(0x04)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelVector2D
// Size: 0x1d0 (Inherited: 0x1a0)
struct FRigUnit_HierarchyAddAnimationChannelVector2D : FRigUnit_HierarchyAddElement {
	struct FVector2D InitialValue; // 0x1a0(0x10)
	struct FVector2D MinimumValue; // 0x1b0(0x10)
	struct FVector2D MaximumValue; // 0x1c0(0x10)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelVector
// Size: 0x1f0 (Inherited: 0x1a0)
struct FRigUnit_HierarchyAddAnimationChannelVector : FRigUnit_HierarchyAddElement {
	struct FVector InitialValue; // 0x1a0(0x18)
	struct FVector MinimumValue; // 0x1b8(0x18)
	struct FVector MaximumValue; // 0x1d0(0x18)
	char pad_1E8[0x8]; // 0x1e8(0x08)
};

// ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelRotator
// Size: 0x1f0 (Inherited: 0x1a0)
struct FRigUnit_HierarchyAddAnimationChannelRotator : FRigUnit_HierarchyAddElement {
	struct FRotator InitialValue; // 0x1a0(0x18)
	struct FRotator MinimumValue; // 0x1b8(0x18)
	struct FRotator MaximumValue; // 0x1d0(0x18)
	char pad_1E8[0x8]; // 0x1e8(0x08)
};

// ScriptStruct ControlRig.RigUnit_HierarchyGetShapeSettings
// Size: 0xa0 (Inherited: 0x08)
struct FRigUnit_HierarchyGetShapeSettings : FRigUnit_DynamicHierarchyBase {
	struct FRigElementKey Item; // 0x08(0x10)
	char pad_18[0x8]; // 0x18(0x08)
	struct FRigUnit_HierarchyAddControl_ShapeSettings Settings; // 0x20(0x80)
};

// ScriptStruct ControlRig.RigUnit_HierarchySetShapeSettings
// Size: 0x200 (Inherited: 0x170)
struct FRigUnit_HierarchySetShapeSettings : FRigUnit_DynamicHierarchyBaseMutable {
	struct FRigElementKey Item; // 0x170(0x10)
	struct FRigUnit_HierarchyAddControl_ShapeSettings Settings; // 0x180(0x80)
};

// ScriptStruct ControlRig.RigUnit_HierarchyBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_HierarchyBase : FRigUnit {
};

// ScriptStruct ControlRig.RigUnit_HierarchyBaseMutable
// Size: 0x170 (Inherited: 0x170)
struct FRigUnit_HierarchyBaseMutable : FRigUnitMutable {
};

// ScriptStruct ControlRig.RigUnit_HierarchyGetParent
// Size: 0x68 (Inherited: 0x08)
struct FRigUnit_HierarchyGetParent : FRigUnit_HierarchyBase {
	struct FRigElementKey Child; // 0x08(0x10)
	struct FRigElementKey Parent; // 0x18(0x10)
	struct FCachedRigElement CachedChild; // 0x28(0x20)
	struct FCachedRigElement CachedParent; // 0x48(0x20)
};

// ScriptStruct ControlRig.RigUnit_HierarchyGetParents
// Size: 0x60 (Inherited: 0x08)
struct FRigUnit_HierarchyGetParents : FRigUnit_HierarchyBase {
	struct FRigElementKey Child; // 0x08(0x10)
	bool bIncludeChild; // 0x18(0x01)
	bool bReverse; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
	struct FRigElementKeyCollection Parents; // 0x20(0x10)
	struct FCachedRigElement CachedChild; // 0x30(0x20)
	struct FRigElementKeyCollection CachedParents; // 0x50(0x10)
};

// ScriptStruct ControlRig.RigUnit_HierarchyGetParentsItemArray
// Size: 0x60 (Inherited: 0x08)
struct FRigUnit_HierarchyGetParentsItemArray : FRigUnit_HierarchyBase {
	struct FRigElementKey Child; // 0x08(0x10)
	bool bIncludeChild; // 0x18(0x01)
	bool bReverse; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
	struct TArray<struct FRigElementKey> Parents; // 0x20(0x10)
	struct FCachedRigElement CachedChild; // 0x30(0x20)
	struct FRigElementKeyCollection CachedParents; // 0x50(0x10)
};

// ScriptStruct ControlRig.RigUnit_HierarchyGetChildren
// Size: 0x60 (Inherited: 0x08)
struct FRigUnit_HierarchyGetChildren : FRigUnit_HierarchyBase {
	struct FRigElementKey Parent; // 0x08(0x10)
	bool bIncludeParent; // 0x18(0x01)
	bool bRecursive; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
	struct FRigElementKeyCollection Children; // 0x20(0x10)
	struct FCachedRigElement CachedParent; // 0x30(0x20)
	struct FRigElementKeyCollection CachedChildren; // 0x50(0x10)
};

// ScriptStruct ControlRig.RigUnit_HierarchyGetSiblings
// Size: 0x60 (Inherited: 0x08)
struct FRigUnit_HierarchyGetSiblings : FRigUnit_HierarchyBase {
	struct FRigElementKey Item; // 0x08(0x10)
	bool bIncludeItem; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FRigElementKeyCollection Siblings; // 0x20(0x10)
	struct FCachedRigElement CachedItem; // 0x30(0x20)
	struct FRigElementKeyCollection CachedSiblings; // 0x50(0x10)
};

// ScriptStruct ControlRig.RigUnit_HierarchyGetSiblingsItemArray
// Size: 0x60 (Inherited: 0x08)
struct FRigUnit_HierarchyGetSiblingsItemArray : FRigUnit_HierarchyBase {
	struct FRigElementKey Item; // 0x08(0x10)
	bool bIncludeItem; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<struct FRigElementKey> Siblings; // 0x20(0x10)
	struct FCachedRigElement CachedItem; // 0x30(0x20)
	struct FRigElementKeyCollection CachedSiblings; // 0x50(0x10)
};

// ScriptStruct ControlRig.RigUnit_HierarchyGetPose
// Size: 0x90 (Inherited: 0x08)
struct FRigUnit_HierarchyGetPose : FRigUnit_HierarchyBase {
	bool Initial; // 0x08(0x01)
	enum class ERigElementType ElementType; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct FRigElementKeyCollection ItemsToGet; // 0x10(0x10)
	struct FRigPose Pose; // 0x20(0x70)
};

// ScriptStruct ControlRig.RigUnit_HierarchyGetPoseItemArray
// Size: 0x90 (Inherited: 0x08)
struct FRigUnit_HierarchyGetPoseItemArray : FRigUnit_HierarchyBase {
	bool Initial; // 0x08(0x01)
	enum class ERigElementType ElementType; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct TArray<struct FRigElementKey> ItemsToGet; // 0x10(0x10)
	struct FRigPose Pose; // 0x20(0x70)
};

// ScriptStruct ControlRig.RigUnit_HierarchySetPose
// Size: 0x200 (Inherited: 0x170)
struct FRigUnit_HierarchySetPose : FRigUnit_HierarchyBaseMutable {
	struct FRigPose Pose; // 0x170(0x70)
	enum class ERigElementType ElementType; // 0x1e0(0x01)
	enum class ERigVMTransformSpace Space; // 0x1e1(0x01)
	char pad_1E2[0x6]; // 0x1e2(0x06)
	struct FRigElementKeyCollection ItemsToSet; // 0x1e8(0x10)
	float Weight; // 0x1f8(0x04)
	char pad_1FC[0x4]; // 0x1fc(0x04)
};

// ScriptStruct ControlRig.RigUnit_HierarchySetPoseItemArray
// Size: 0x200 (Inherited: 0x170)
struct FRigUnit_HierarchySetPoseItemArray : FRigUnit_HierarchyBaseMutable {
	struct FRigPose Pose; // 0x170(0x70)
	enum class ERigElementType ElementType; // 0x1e0(0x01)
	enum class ERigVMTransformSpace Space; // 0x1e1(0x01)
	char pad_1E2[0x6]; // 0x1e2(0x06)
	struct TArray<struct FRigElementKey> ItemsToSet; // 0x1e8(0x10)
	float Weight; // 0x1f8(0x04)
	char pad_1FC[0x4]; // 0x1fc(0x04)
};

// ScriptStruct ControlRig.RigUnit_PoseIsEmpty
// Size: 0x80 (Inherited: 0x08)
struct FRigUnit_PoseIsEmpty : FRigUnit_HierarchyBase {
	struct FRigPose Pose; // 0x08(0x70)
	bool IsEmpty; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// ScriptStruct ControlRig.RigUnit_PoseGetItems
// Size: 0x90 (Inherited: 0x08)
struct FRigUnit_PoseGetItems : FRigUnit_HierarchyBase {
	struct FRigPose Pose; // 0x08(0x70)
	enum class ERigElementType ElementType; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FRigElementKeyCollection Items; // 0x80(0x10)
};

// ScriptStruct ControlRig.RigUnit_PoseGetItemsItemArray
// Size: 0x90 (Inherited: 0x08)
struct FRigUnit_PoseGetItemsItemArray : FRigUnit_HierarchyBase {
	struct FRigPose Pose; // 0x08(0x70)
	enum class ERigElementType ElementType; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct TArray<struct FRigElementKey> Items; // 0x80(0x10)
};

// ScriptStruct ControlRig.RigUnit_PoseGetDelta
// Size: 0x128 (Inherited: 0x08)
struct FRigUnit_PoseGetDelta : FRigUnit_HierarchyBase {
	struct FRigPose PoseA; // 0x08(0x70)
	struct FRigPose PoseB; // 0x78(0x70)
	float PositionThreshold; // 0xe8(0x04)
	float RotationThreshold; // 0xec(0x04)
	float ScaleThreshold; // 0xf0(0x04)
	float CurveThreshold; // 0xf4(0x04)
	enum class ERigElementType ElementType; // 0xf8(0x01)
	enum class ERigVMTransformSpace Space; // 0xf9(0x01)
	char pad_FA[0x6]; // 0xfa(0x06)
	struct FRigElementKeyCollection ItemsToCompare; // 0x100(0x10)
	bool PosesAreEqual; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct FRigElementKeyCollection ItemsWithDelta; // 0x118(0x10)
};

// ScriptStruct ControlRig.RigUnit_PoseGetTransform
// Size: 0x100 (Inherited: 0x08)
struct FRigUnit_PoseGetTransform : FRigUnit_HierarchyBase {
	struct FRigPose Pose; // 0x08(0x70)
	struct FRigElementKey Item; // 0x78(0x10)
	enum class ERigVMTransformSpace Space; // 0x88(0x01)
	bool Valid; // 0x89(0x01)
	char pad_8A[0x6]; // 0x8a(0x06)
	struct FTransform Transform; // 0x90(0x60)
	float CurveValue; // 0xf0(0x04)
	int32_t CachedPoseElementIndex; // 0xf4(0x04)
	int32_t CachedPoseHash; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// ScriptStruct ControlRig.RigUnit_PoseGetTransformArray
// Size: 0x90 (Inherited: 0x08)
struct FRigUnit_PoseGetTransformArray : FRigUnit_HierarchyBase {
	struct FRigPose Pose; // 0x08(0x70)
	enum class ERigVMTransformSpace Space; // 0x78(0x01)
	bool Valid; // 0x79(0x01)
	char pad_7A[0x6]; // 0x7a(0x06)
	struct TArray<struct FTransform> Transforms; // 0x80(0x10)
};

// ScriptStruct ControlRig.RigUnit_PoseGetCurve
// Size: 0x98 (Inherited: 0x08)
struct FRigUnit_PoseGetCurve : FRigUnit_HierarchyBase {
	struct FRigPose Pose; // 0x08(0x70)
	struct FName Curve; // 0x78(0x0c)
	bool Valid; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	float CurveValue; // 0x88(0x04)
	int32_t CachedPoseElementIndex; // 0x8c(0x04)
	int32_t CachedPoseHash; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// ScriptStruct ControlRig.RigUnit_PoseLoop
// Size: 0x430 (Inherited: 0x170)
struct FRigUnit_PoseLoop : FRigUnit_HierarchyBaseMutable {
	struct FName BlockToRun; // 0x170(0x0c)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct FRigPose Pose; // 0x180(0x70)
	struct FRigElementKey Item; // 0x1f0(0x10)
	struct FTransform GlobalTransform; // 0x200(0x60)
	struct FTransform LocalTransform; // 0x260(0x60)
	float CurveValue; // 0x2c0(0x04)
	int32_t Index; // 0x2c4(0x04)
	int32_t Count; // 0x2c8(0x04)
	float Ratio; // 0x2cc(0x04)
	struct FControlRigExecuteContext Completed; // 0x2d0(0x160)
};

// ScriptStruct ControlRig.RigUnit_InteractionExecution
// Size: 0x170 (Inherited: 0x08)
struct FRigUnit_InteractionExecution : FRigUnit {
	char pad_8[0x8]; // 0x08(0x08)
	struct FControlRigExecuteContext ExecuteContext; // 0x10(0x160)
};

// ScriptStruct ControlRig.RigUnit_InverseExecution
// Size: 0x170 (Inherited: 0x08)
struct FRigUnit_InverseExecution : FRigUnit {
	char pad_8[0x8]; // 0x08(0x08)
	struct FControlRigExecuteContext ExecuteContext; // 0x10(0x160)
};

// ScriptStruct ControlRig.RigUnit_IsInteracting
// Size: 0x20 (Inherited: 0x08)
struct FRigUnit_IsInteracting : FRigUnit {
	bool bIsInteracting; // 0x08(0x01)
	bool bIsTranslating; // 0x09(0x01)
	bool bIsRotating; // 0x0a(0x01)
	bool bIsScaling; // 0x0b(0x01)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FRigElementKey> Items; // 0x10(0x10)
};

// ScriptStruct ControlRig.RigUnit_ItemBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_ItemBase : FRigUnit {
};

// ScriptStruct ControlRig.RigUnit_ItemBaseMutable
// Size: 0x170 (Inherited: 0x170)
struct FRigUnit_ItemBaseMutable : FRigUnitMutable {
};

// ScriptStruct ControlRig.RigUnit_ItemExists
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_ItemExists : FRigUnit_ItemBase {
	struct FRigElementKey Item; // 0x08(0x10)
	bool Exists; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FCachedRigElement CachedIndex; // 0x20(0x20)
};

// ScriptStruct ControlRig.RigUnit_ItemReplace
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_ItemReplace : FRigUnit_ItemBase {
	struct FRigElementKey Item; // 0x08(0x10)
	struct FName Old; // 0x18(0x0c)
	struct FName New; // 0x24(0x0c)
	struct FRigElementKey Result; // 0x30(0x10)
};

// ScriptStruct ControlRig.RigUnit_ItemEquals
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_ItemEquals : FRigUnit_ItemBase {
	struct FRigElementKey A; // 0x08(0x10)
	struct FRigElementKey B; // 0x18(0x10)
	bool Result; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct ControlRig.RigUnit_ItemNotEquals
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_ItemNotEquals : FRigUnit_ItemBase {
	struct FRigElementKey A; // 0x08(0x10)
	struct FRigElementKey B; // 0x18(0x10)
	bool Result; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct ControlRig.RigUnit_ItemTypeEquals
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_ItemTypeEquals : FRigUnit_ItemBase {
	struct FRigElementKey A; // 0x08(0x10)
	struct FRigElementKey B; // 0x18(0x10)
	bool Result; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct ControlRig.RigUnit_ItemTypeNotEquals
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_ItemTypeNotEquals : FRigUnit_ItemBase {
	struct FRigElementKey A; // 0x08(0x10)
	struct FRigElementKey B; // 0x18(0x10)
	bool Result; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct ControlRig.RigUnit_ItemToName
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_ItemToName : FRigUnit_ItemBase {
	struct FRigElementKey Value; // 0x08(0x10)
	struct FName Result; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ControlRig.RigUnit_PrepareForExecution
// Size: 0x170 (Inherited: 0x08)
struct FRigUnit_PrepareForExecution : FRigUnit {
	char pad_8[0x8]; // 0x08(0x08)
	struct FControlRigExecuteContext ExecuteContext; // 0x10(0x160)
};

// ScriptStruct ControlRig.RigUnit_SequenceExecution
// Size: 0x6f0 (Inherited: 0x08)
struct FRigUnit_SequenceExecution : FRigUnit {
	char pad_8[0x8]; // 0x08(0x08)
	struct FControlRigExecuteContext ExecuteContext; // 0x10(0x160)
	struct FControlRigExecuteContext A; // 0x170(0x160)
	struct FControlRigExecuteContext B; // 0x2d0(0x160)
	struct FControlRigExecuteContext C; // 0x430(0x160)
	struct FControlRigExecuteContext D; // 0x590(0x160)
};

// ScriptStruct ControlRig.RigUnit_AddBoneTransform
// Size: 0x210 (Inherited: 0x170)
struct FRigUnit_AddBoneTransform : FRigUnitMutable {
	struct FName bone; // 0x170(0x0c)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct FTransform Transform; // 0x180(0x60)
	float Weight; // 0x1e0(0x04)
	bool bPostMultiply; // 0x1e4(0x01)
	bool bPropagateToChildren; // 0x1e5(0x01)
	char pad_1E6[0x2]; // 0x1e6(0x02)
	struct FCachedRigElement CachedBone; // 0x1e8(0x20)
	char pad_208[0x8]; // 0x208(0x08)
};

// ScriptStruct ControlRig.RigUnit_Item
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_Item : FRigUnit {
	struct FRigElementKey Item; // 0x08(0x10)
};

// ScriptStruct ControlRig.RigUnit_ItemArray
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_ItemArray : FRigUnit {
	struct TArray<struct FRigElementKey> Items; // 0x08(0x10)
};

// ScriptStruct ControlRig.RigUnit_BoneName
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_BoneName : FRigUnit {
	struct FName bone; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ControlRig.RigUnit_SpaceName
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_SpaceName : FRigUnit {
	struct FName Space; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ControlRig.RigUnit_ControlName
// Size: 0x18 (Inherited: 0x08)
struct FRigUnit_ControlName : FRigUnit {
	struct FName Control; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ControlRig.RigUnit_GetAnimationChannelBase
// Size: 0x38 (Inherited: 0x08)
struct FRigUnit_GetAnimationChannelBase : FRigUnit {
	struct FName Control; // 0x08(0x0c)
	struct FName Channel; // 0x14(0x0c)
	bool bInitial; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FRigElementKey CachedChannelKey; // 0x24(0x10)
	int32_t CachedChannelHash; // 0x34(0x04)
};

// ScriptStruct ControlRig.RigUnit_GetBoolAnimationChannel
// Size: 0x40 (Inherited: 0x38)
struct FRigUnit_GetBoolAnimationChannel : FRigUnit_GetAnimationChannelBase {
	bool Value; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct ControlRig.RigUnit_GetFloatAnimationChannel
// Size: 0x40 (Inherited: 0x38)
struct FRigUnit_GetFloatAnimationChannel : FRigUnit_GetAnimationChannelBase {
	float Value; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct ControlRig.RigUnit_GetIntAnimationChannel
// Size: 0x40 (Inherited: 0x38)
struct FRigUnit_GetIntAnimationChannel : FRigUnit_GetAnimationChannelBase {
	int32_t Value; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct ControlRig.RigUnit_GetVector2DAnimationChannel
// Size: 0x48 (Inherited: 0x38)
struct FRigUnit_GetVector2DAnimationChannel : FRigUnit_GetAnimationChannelBase {
	struct FVector2D Value; // 0x38(0x10)
};

// ScriptStruct ControlRig.RigUnit_GetVectorAnimationChannel
// Size: 0x50 (Inherited: 0x38)
struct FRigUnit_GetVectorAnimationChannel : FRigUnit_GetAnimationChannelBase {
	struct FVector Value; // 0x38(0x18)
};

// ScriptStruct ControlRig.RigUnit_GetRotatorAnimationChannel
// Size: 0x50 (Inherited: 0x38)
struct FRigUnit_GetRotatorAnimationChannel : FRigUnit_GetAnimationChannelBase {
	struct FRotator Value; // 0x38(0x18)
};

// ScriptStruct ControlRig.RigUnit_GetTransformAnimationChannel
// Size: 0xa0 (Inherited: 0x38)
struct FRigUnit_GetTransformAnimationChannel : FRigUnit_GetAnimationChannelBase {
	char pad_38[0x8]; // 0x38(0x08)
	struct FTransform Value; // 0x40(0x60)
};

// ScriptStruct ControlRig.RigUnit_SetAnimationChannelBase
// Size: 0x1a0 (Inherited: 0x38)
struct FRigUnit_SetAnimationChannelBase : FRigUnit_GetAnimationChannelBase {
	char pad_38[0x8]; // 0x38(0x08)
	struct FControlRigExecuteContext ExecuteContext; // 0x40(0x160)
};

// ScriptStruct ControlRig.RigUnit_SetBoolAnimationChannel
// Size: 0x1b0 (Inherited: 0x1a0)
struct FRigUnit_SetBoolAnimationChannel : FRigUnit_SetAnimationChannelBase {
	bool Value; // 0x1a0(0x01)
	char pad_1A1[0xf]; // 0x1a1(0x0f)
};

// ScriptStruct ControlRig.RigUnit_SetFloatAnimationChannel
// Size: 0x1b0 (Inherited: 0x1a0)
struct FRigUnit_SetFloatAnimationChannel : FRigUnit_SetAnimationChannelBase {
	float Value; // 0x1a0(0x04)
	char pad_1A4[0xc]; // 0x1a4(0x0c)
};

// ScriptStruct ControlRig.RigUnit_SetIntAnimationChannel
// Size: 0x1b0 (Inherited: 0x1a0)
struct FRigUnit_SetIntAnimationChannel : FRigUnit_SetAnimationChannelBase {
	int32_t Value; // 0x1a0(0x04)
	char pad_1A4[0xc]; // 0x1a4(0x0c)
};

// ScriptStruct ControlRig.RigUnit_SetVector2DAnimationChannel
// Size: 0x1b0 (Inherited: 0x1a0)
struct FRigUnit_SetVector2DAnimationChannel : FRigUnit_SetAnimationChannelBase {
	struct FVector2D Value; // 0x1a0(0x10)
};

// ScriptStruct ControlRig.RigUnit_SetVectorAnimationChannel
// Size: 0x1c0 (Inherited: 0x1a0)
struct FRigUnit_SetVectorAnimationChannel : FRigUnit_SetAnimationChannelBase {
	struct FVector Value; // 0x1a0(0x18)
	char pad_1B8[0x8]; // 0x1b8(0x08)
};

// ScriptStruct ControlRig.RigUnit_SetRotatorAnimationChannel
// Size: 0x1c0 (Inherited: 0x1a0)
struct FRigUnit_SetRotatorAnimationChannel : FRigUnit_SetAnimationChannelBase {
	struct FRotator Value; // 0x1a0(0x18)
	char pad_1B8[0x8]; // 0x1b8(0x08)
};

// ScriptStruct ControlRig.RigUnit_SetTransformAnimationChannel
// Size: 0x200 (Inherited: 0x1a0)
struct FRigUnit_SetTransformAnimationChannel : FRigUnit_SetAnimationChannelBase {
	struct FTransform Value; // 0x1a0(0x60)
};

// ScriptStruct ControlRig.RigUnit_GetBoneTransform
// Size: 0xb0 (Inherited: 0x08)
struct FRigUnit_GetBoneTransform : FRigUnit {
	struct FName bone; // 0x08(0x0c)
	enum class ERigVMTransformSpace Space; // 0x14(0x01)
	char pad_15[0xb]; // 0x15(0x0b)
	struct FTransform Transform; // 0x20(0x60)
	struct FCachedRigElement CachedBone; // 0x80(0x20)
	bool bFirstUpdate; // 0xa0(0x01)
	char pad_A1[0xf]; // 0xa1(0x0f)
};

// ScriptStruct ControlRig.RigUnit_GetControlInitialTransform
// Size: 0xa0 (Inherited: 0x08)
struct FRigUnit_GetControlInitialTransform : FRigUnit {
	struct FName Control; // 0x08(0x0c)
	enum class ERigVMTransformSpace Space; // 0x14(0x01)
	char pad_15[0xb]; // 0x15(0x0b)
	struct FTransform Transform; // 0x20(0x60)
	struct FCachedRigElement CachedControlIndex; // 0x80(0x20)
};

// ScriptStruct ControlRig.RigUnit_GetControlBool
// Size: 0x38 (Inherited: 0x08)
struct FRigUnit_GetControlBool : FRigUnit {
	struct FName Control; // 0x08(0x0c)
	bool BoolValue; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FCachedRigElement CachedControlIndex; // 0x18(0x20)
};

// ScriptStruct ControlRig.RigUnit_GetControlFloat
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_GetControlFloat : FRigUnit {
	struct FName Control; // 0x08(0x0c)
	float FloatValue; // 0x14(0x04)
	float Minimum; // 0x18(0x04)
	float Maximum; // 0x1c(0x04)
	struct FCachedRigElement CachedControlIndex; // 0x20(0x20)
};

// ScriptStruct ControlRig.RigUnit_GetControlInteger
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_GetControlInteger : FRigUnit {
	struct FName Control; // 0x08(0x0c)
	int32_t IntegerValue; // 0x14(0x04)
	int32_t Minimum; // 0x18(0x04)
	int32_t Maximum; // 0x1c(0x04)
	struct FCachedRigElement CachedControlIndex; // 0x20(0x20)
};

// ScriptStruct ControlRig.RigUnit_GetControlVector2D
// Size: 0x68 (Inherited: 0x08)
struct FRigUnit_GetControlVector2D : FRigUnit {
	struct FName Control; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct FVector2D Vector; // 0x18(0x10)
	struct FVector2D Minimum; // 0x28(0x10)
	struct FVector2D Maximum; // 0x38(0x10)
	struct FCachedRigElement CachedControlIndex; // 0x48(0x20)
};

// ScriptStruct ControlRig.RigUnit_GetControlVector
// Size: 0x80 (Inherited: 0x08)
struct FRigUnit_GetControlVector : FRigUnit {
	struct FName Control; // 0x08(0x0c)
	enum class ERigVMTransformSpace Space; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FVector Vector; // 0x18(0x18)
	struct FVector Minimum; // 0x30(0x18)
	struct FVector Maximum; // 0x48(0x18)
	struct FCachedRigElement CachedControlIndex; // 0x60(0x20)
};

// ScriptStruct ControlRig.RigUnit_GetControlRotator
// Size: 0x80 (Inherited: 0x08)
struct FRigUnit_GetControlRotator : FRigUnit {
	struct FName Control; // 0x08(0x0c)
	enum class ERigVMTransformSpace Space; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FRotator Rotator; // 0x18(0x18)
	struct FRotator Minimum; // 0x30(0x18)
	struct FRotator Maximum; // 0x48(0x18)
	struct FCachedRigElement CachedControlIndex; // 0x60(0x20)
};

// ScriptStruct ControlRig.RigUnit_GetControlTransform
// Size: 0x160 (Inherited: 0x08)
struct FRigUnit_GetControlTransform : FRigUnit {
	struct FName Control; // 0x08(0x0c)
	enum class ERigVMTransformSpace Space; // 0x14(0x01)
	char pad_15[0xb]; // 0x15(0x0b)
	struct FTransform Transform; // 0x20(0x60)
	struct FTransform Minimum; // 0x80(0x60)
	struct FTransform Maximum; // 0xe0(0x60)
	struct FCachedRigElement CachedControlIndex; // 0x140(0x20)
};

// ScriptStruct ControlRig.RigUnit_GetCurveValue
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_GetCurveValue : FRigUnit {
	struct FName Curve; // 0x08(0x0c)
	bool Valid; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float Value; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FCachedRigElement CachedCurveIndex; // 0x20(0x20)
};

// ScriptStruct ControlRig.RigUnit_GetInitialBoneTransform
// Size: 0xa0 (Inherited: 0x08)
struct FRigUnit_GetInitialBoneTransform : FRigUnit {
	struct FName bone; // 0x08(0x0c)
	enum class ERigVMTransformSpace Space; // 0x14(0x01)
	char pad_15[0xb]; // 0x15(0x0b)
	struct FTransform Transform; // 0x20(0x60)
	struct FCachedRigElement CachedBone; // 0x80(0x20)
};

// ScriptStruct ControlRig.RigUnit_GetRelativeBoneTransform
// Size: 0xc0 (Inherited: 0x08)
struct FRigUnit_GetRelativeBoneTransform : FRigUnit {
	struct FName bone; // 0x08(0x0c)
	struct FName Space; // 0x14(0x0c)
	struct FTransform Transform; // 0x20(0x60)
	struct FCachedRigElement CachedBone; // 0x80(0x20)
	struct FCachedRigElement CachedSpace; // 0xa0(0x20)
};

// ScriptStruct ControlRig.RigUnit_GetRelativeTransformForItem
// Size: 0xd0 (Inherited: 0x08)
struct FRigUnit_GetRelativeTransformForItem : FRigUnit {
	struct FRigElementKey Child; // 0x08(0x10)
	bool bChildInitial; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FRigElementKey Parent; // 0x1c(0x10)
	bool bParentInitial; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct FTransform RelativeTransform; // 0x30(0x60)
	struct FCachedRigElement CachedChild; // 0x90(0x20)
	struct FCachedRigElement CachedParent; // 0xb0(0x20)
};

// ScriptStruct ControlRig.RigUnit_GetSpaceTransform
// Size: 0xa0 (Inherited: 0x08)
struct FRigUnit_GetSpaceTransform : FRigUnit {
	struct FName Space; // 0x08(0x0c)
	enum class ERigVMTransformSpace SpaceType; // 0x14(0x01)
	char pad_15[0xb]; // 0x15(0x0b)
	struct FTransform Transform; // 0x20(0x60)
	struct FCachedRigElement CachedSpaceIndex; // 0x80(0x20)
};

// ScriptStruct ControlRig.RigUnit_GetTransform
// Size: 0xa0 (Inherited: 0x08)
struct FRigUnit_GetTransform : FRigUnit {
	struct FRigElementKey Item; // 0x08(0x10)
	enum class ERigVMTransformSpace Space; // 0x18(0x01)
	bool bInitial; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
	struct FTransform Transform; // 0x20(0x60)
	struct FCachedRigElement CachedIndex; // 0x80(0x20)
};

// ScriptStruct ControlRig.RigUnit_GetTransformArray
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_GetTransformArray : FRigUnit {
	struct FRigElementKeyCollection Items; // 0x08(0x10)
	enum class ERigVMTransformSpace Space; // 0x18(0x01)
	bool bInitial; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
	struct TArray<struct FTransform> Transforms; // 0x20(0x10)
	struct TArray<struct FCachedRigElement> CachedIndex; // 0x30(0x10)
};

// ScriptStruct ControlRig.RigUnit_GetTransformItemArray
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_GetTransformItemArray : FRigUnit {
	struct TArray<struct FRigElementKey> Items; // 0x08(0x10)
	enum class ERigVMTransformSpace Space; // 0x18(0x01)
	bool bInitial; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
	struct TArray<struct FTransform> Transforms; // 0x20(0x10)
	struct TArray<struct FCachedRigElement> CachedIndex; // 0x30(0x10)
};

// ScriptStruct ControlRig.RigDispatch_MetadataBase
// Size: 0xa0 (Inherited: 0x70)
struct FRigDispatch_MetadataBase : FRigDispatchFactory {
	char pad_70[0x30]; // 0x70(0x30)
};

// ScriptStruct ControlRig.RigDispatch_GetMetadata
// Size: 0xa0 (Inherited: 0xa0)
struct FRigDispatch_GetMetadata : FRigDispatch_MetadataBase {
};

// ScriptStruct ControlRig.RigDispatch_SetMetadata
// Size: 0xa0 (Inherited: 0xa0)
struct FRigDispatch_SetMetadata : FRigDispatch_MetadataBase {
};

// ScriptStruct ControlRig.RigUnit_RemoveMetadata
// Size: 0x1b0 (Inherited: 0x170)
struct FRigUnit_RemoveMetadata : FRigUnitMutable {
	struct FRigElementKey Item; // 0x170(0x10)
	struct FName Name; // 0x180(0x0c)
	bool Removed; // 0x18c(0x01)
	char pad_18D[0x3]; // 0x18d(0x03)
	struct FCachedRigElement CachedIndex; // 0x190(0x20)
};

// ScriptStruct ControlRig.RigUnit_RemoveAllMetadata
// Size: 0x1b0 (Inherited: 0x170)
struct FRigUnit_RemoveAllMetadata : FRigUnitMutable {
	struct FRigElementKey Item; // 0x170(0x10)
	bool Removed; // 0x180(0x01)
	char pad_181[0x7]; // 0x181(0x07)
	struct FCachedRigElement CachedIndex; // 0x188(0x20)
	char pad_1A8[0x8]; // 0x1a8(0x08)
};

// ScriptStruct ControlRig.RigUnit_HasMetadata
// Size: 0x48 (Inherited: 0x08)
struct FRigUnit_HasMetadata : FRigUnit {
	struct FRigElementKey Item; // 0x08(0x10)
	struct FName Name; // 0x18(0x0c)
	enum class ERigMetadataType Type; // 0x24(0x01)
	bool Found; // 0x25(0x01)
	char pad_26[0x2]; // 0x26(0x02)
	struct FCachedRigElement CachedIndex; // 0x28(0x20)
};

// ScriptStruct ControlRig.RigUnit_FindItemsWithMetadata
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_FindItemsWithMetadata : FRigUnit {
	struct FName Name; // 0x08(0x0c)
	enum class ERigMetadataType Type; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct TArray<struct FRigElementKey> Items; // 0x18(0x10)
};

// ScriptStruct ControlRig.RigUnit_GetMetadataTags
// Size: 0x48 (Inherited: 0x08)
struct FRigUnit_GetMetadataTags : FRigUnit {
	struct FRigElementKey Item; // 0x08(0x10)
	struct TArray<struct FName> Tags; // 0x18(0x10)
	struct FCachedRigElement CachedIndex; // 0x28(0x20)
};

// ScriptStruct ControlRig.RigUnit_SetMetadataTag
// Size: 0x1b0 (Inherited: 0x170)
struct FRigUnit_SetMetadataTag : FRigUnitMutable {
	struct FRigElementKey Item; // 0x170(0x10)
	struct FName Tag; // 0x180(0x0c)
	char pad_18C[0x4]; // 0x18c(0x04)
	struct FCachedRigElement CachedIndex; // 0x190(0x20)
};

// ScriptStruct ControlRig.RigUnit_SetMetadataTagArray
// Size: 0x1b0 (Inherited: 0x170)
struct FRigUnit_SetMetadataTagArray : FRigUnitMutable {
	struct FRigElementKey Item; // 0x170(0x10)
	struct TArray<struct FName> Tags; // 0x180(0x10)
	struct FCachedRigElement CachedIndex; // 0x190(0x20)
};

// ScriptStruct ControlRig.RigUnit_RemoveMetadataTag
// Size: 0x1b0 (Inherited: 0x170)
struct FRigUnit_RemoveMetadataTag : FRigUnitMutable {
	struct FRigElementKey Item; // 0x170(0x10)
	struct FName Tag; // 0x180(0x0c)
	bool Removed; // 0x18c(0x01)
	char pad_18D[0x3]; // 0x18d(0x03)
	struct FCachedRigElement CachedIndex; // 0x190(0x20)
};

// ScriptStruct ControlRig.RigUnit_HasMetadataTag
// Size: 0x48 (Inherited: 0x08)
struct FRigUnit_HasMetadataTag : FRigUnit {
	struct FRigElementKey Item; // 0x08(0x10)
	struct FName Tag; // 0x18(0x0c)
	bool Found; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FCachedRigElement CachedIndex; // 0x28(0x20)
};

// ScriptStruct ControlRig.RigUnit_HasMetadataTagArray
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_HasMetadataTagArray : FRigUnit {
	struct FRigElementKey Item; // 0x08(0x10)
	struct TArray<struct FName> Tags; // 0x18(0x10)
	bool Found; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FCachedRigElement CachedIndex; // 0x30(0x20)
};

// ScriptStruct ControlRig.RigUnit_FindItemsWithMetadataTag
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_FindItemsWithMetadataTag : FRigUnit {
	struct FName Tag; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FRigElementKey> Items; // 0x18(0x10)
};

// ScriptStruct ControlRig.RigUnit_FindItemsWithMetadataTagArray
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_FindItemsWithMetadataTagArray : FRigUnit {
	struct TArray<struct FName> Tags; // 0x08(0x10)
	struct TArray<struct FRigElementKey> Items; // 0x18(0x10)
};

// ScriptStruct ControlRig.RigUnit_FilterItemsByMetadataTags
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_FilterItemsByMetadataTags : FRigUnit {
	struct TArray<struct FRigElementKey> Items; // 0x08(0x10)
	struct TArray<struct FName> Tags; // 0x18(0x10)
	bool Inclusive; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TArray<struct FRigElementKey> Result; // 0x30(0x10)
	struct TArray<struct FCachedRigElement> CachedIndices; // 0x40(0x10)
};

// ScriptStruct ControlRig.RigUnit_OffsetTransformForItem
// Size: 0x210 (Inherited: 0x170)
struct FRigUnit_OffsetTransformForItem : FRigUnitMutable {
	struct FRigElementKey Item; // 0x170(0x10)
	struct FTransform OffsetTransform; // 0x180(0x60)
	float Weight; // 0x1e0(0x04)
	bool bPropagateToChildren; // 0x1e4(0x01)
	char pad_1E5[0x3]; // 0x1e5(0x03)
	struct FCachedRigElement CachedIndex; // 0x1e8(0x20)
	char pad_208[0x8]; // 0x208(0x08)
};

// ScriptStruct ControlRig.RigUnit_ParentSwitchConstraint
// Size: 0x320 (Inherited: 0x170)
struct FRigUnit_ParentSwitchConstraint : FRigUnitMutable {
	struct FRigElementKey Subject; // 0x170(0x10)
	int32_t ParentIndex; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
	struct FRigElementKeyCollection Parents; // 0x188(0x10)
	char pad_198[0x8]; // 0x198(0x08)
	struct FTransform InitialGlobalTransform; // 0x1a0(0x60)
	float Weight; // 0x200(0x04)
	char pad_204[0xc]; // 0x204(0x0c)
	struct FTransform Transform; // 0x210(0x60)
	bool Switched; // 0x270(0x01)
	char pad_271[0x7]; // 0x271(0x07)
	struct FCachedRigElement CachedSubject; // 0x278(0x20)
	struct FCachedRigElement CachedParent; // 0x298(0x20)
	char pad_2B8[0x8]; // 0x2b8(0x08)
	struct FTransform RelativeOffset; // 0x2c0(0x60)
};

// ScriptStruct ControlRig.RigUnit_ParentSwitchConstraintArray
// Size: 0x320 (Inherited: 0x170)
struct FRigUnit_ParentSwitchConstraintArray : FRigUnitMutable {
	struct FRigElementKey Subject; // 0x170(0x10)
	int32_t ParentIndex; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
	struct TArray<struct FRigElementKey> Parents; // 0x188(0x10)
	char pad_198[0x8]; // 0x198(0x08)
	struct FTransform InitialGlobalTransform; // 0x1a0(0x60)
	float Weight; // 0x200(0x04)
	char pad_204[0xc]; // 0x204(0x0c)
	struct FTransform Transform; // 0x210(0x60)
	bool Switched; // 0x270(0x01)
	char pad_271[0x7]; // 0x271(0x07)
	struct FCachedRigElement CachedSubject; // 0x278(0x20)
	struct FCachedRigElement CachedParent; // 0x298(0x20)
	char pad_2B8[0x8]; // 0x2b8(0x08)
	struct FTransform RelativeOffset; // 0x2c0(0x60)
};

// ScriptStruct ControlRig.RigUnit_ProjectTransformToNewParent
// Size: 0x110 (Inherited: 0x08)
struct FRigUnit_ProjectTransformToNewParent : FRigUnit {
	struct FRigElementKey Child; // 0x08(0x10)
	bool bChildInitial; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FRigElementKey OldParent; // 0x1c(0x10)
	bool bOldParentInitial; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct FRigElementKey NewParent; // 0x30(0x10)
	bool bNewParentInitial; // 0x40(0x01)
	char pad_41[0xf]; // 0x41(0x0f)
	struct FTransform Transform; // 0x50(0x60)
	struct FCachedRigElement CachedChild; // 0xb0(0x20)
	struct FCachedRigElement CachedOldParent; // 0xd0(0x20)
	struct FCachedRigElement CachedNewParent; // 0xf0(0x20)
};

// ScriptStruct ControlRig.RigUnit_PropagateTransform
// Size: 0x1b0 (Inherited: 0x170)
struct FRigUnit_PropagateTransform : FRigUnitMutable {
	struct FRigElementKey Item; // 0x170(0x10)
	bool bRecomputeGlobal; // 0x180(0x01)
	bool bApplyToChildren; // 0x181(0x01)
	bool bRecursive; // 0x182(0x01)
	char pad_183[0x5]; // 0x183(0x05)
	struct FCachedRigElement CachedIndex; // 0x188(0x20)
	char pad_1A8[0x8]; // 0x1a8(0x08)
};

// ScriptStruct ControlRig.RigUnit_SendEvent
// Size: 0x190 (Inherited: 0x170)
struct FRigUnit_SendEvent : FRigUnitMutable {
	enum class ERigEvent event; // 0x170(0x01)
	char pad_171[0x3]; // 0x171(0x03)
	struct FRigElementKey Item; // 0x174(0x10)
	float OffsetInSeconds; // 0x184(0x04)
	bool bEnable; // 0x188(0x01)
	bool bOnlyDuringInteraction; // 0x189(0x01)
	char pad_18A[0x6]; // 0x18a(0x06)
};

// ScriptStruct ControlRig.RigUnit_SetBoneInitialTransform
// Size: 0x270 (Inherited: 0x170)
struct FRigUnit_SetBoneInitialTransform : FRigUnitMutable {
	struct FName bone; // 0x170(0x0c)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct FTransform Transform; // 0x180(0x60)
	struct FTransform Result; // 0x1e0(0x60)
	enum class ERigVMTransformSpace Space; // 0x240(0x01)
	bool bPropagateToChildren; // 0x241(0x01)
	char pad_242[0x6]; // 0x242(0x06)
	struct FCachedRigElement CachedBone; // 0x248(0x20)
	char pad_268[0x8]; // 0x268(0x08)
};

// ScriptStruct ControlRig.RigUnit_SetBoneRotation
// Size: 0x1d0 (Inherited: 0x170)
struct FRigUnit_SetBoneRotation : FRigUnitMutable {
	struct FName bone; // 0x170(0x0c)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct FQuat Rotation; // 0x180(0x20)
	enum class ERigVMTransformSpace Space; // 0x1a0(0x01)
	char pad_1A1[0x3]; // 0x1a1(0x03)
	float Weight; // 0x1a4(0x04)
	bool bPropagateToChildren; // 0x1a8(0x01)
	char pad_1A9[0x7]; // 0x1a9(0x07)
	struct FCachedRigElement CachedBone; // 0x1b0(0x20)
};

// ScriptStruct ControlRig.RigUnit_SetBoneTransform
// Size: 0x270 (Inherited: 0x170)
struct FRigUnit_SetBoneTransform : FRigUnitMutable {
	struct FName bone; // 0x170(0x0c)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct FTransform Transform; // 0x180(0x60)
	struct FTransform Result; // 0x1e0(0x60)
	enum class ERigVMTransformSpace Space; // 0x240(0x01)
	char pad_241[0x3]; // 0x241(0x03)
	float Weight; // 0x244(0x04)
	bool bPropagateToChildren; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)
	struct FCachedRigElement CachedBone; // 0x250(0x20)
};

// ScriptStruct ControlRig.RigUnit_SetBoneTranslation
// Size: 0x1d0 (Inherited: 0x170)
struct FRigUnit_SetBoneTranslation : FRigUnitMutable {
	struct FName bone; // 0x170(0x0c)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct FVector Translation; // 0x180(0x18)
	enum class ERigVMTransformSpace Space; // 0x198(0x01)
	char pad_199[0x3]; // 0x199(0x03)
	float Weight; // 0x19c(0x04)
	bool bPropagateToChildren; // 0x1a0(0x01)
	char pad_1A1[0x7]; // 0x1a1(0x07)
	struct FCachedRigElement CachedBone; // 0x1a8(0x20)
	char pad_1C8[0x8]; // 0x1c8(0x08)
};

// ScriptStruct ControlRig.RigUnit_GetControlColor
// Size: 0x48 (Inherited: 0x08)
struct FRigUnit_GetControlColor : FRigUnit {
	struct FName Control; // 0x08(0x0c)
	struct FLinearColor Color; // 0x14(0x10)
	char pad_24[0x4]; // 0x24(0x04)
	struct FCachedRigElement CachedControlIndex; // 0x28(0x20)
};

// ScriptStruct ControlRig.RigUnit_SetControlColor
// Size: 0x1b0 (Inherited: 0x170)
struct FRigUnit_SetControlColor : FRigUnitMutable {
	struct FName Control; // 0x170(0x0c)
	struct FLinearColor Color; // 0x17c(0x10)
	char pad_18C[0x4]; // 0x18c(0x04)
	struct FCachedRigElement CachedControlIndex; // 0x190(0x20)
};

// ScriptStruct ControlRig.RigUnit_GetControlDrivenList
// Size: 0x48 (Inherited: 0x08)
struct FRigUnit_GetControlDrivenList : FRigUnit {
	struct FName Control; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FRigElementKey> Driven; // 0x18(0x10)
	struct FCachedRigElement CachedControlIndex; // 0x28(0x20)
};

// ScriptStruct ControlRig.RigUnit_SetControlDrivenList
// Size: 0x1b0 (Inherited: 0x170)
struct FRigUnit_SetControlDrivenList : FRigUnitMutable {
	struct FName Control; // 0x170(0x0c)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct TArray<struct FRigElementKey> Driven; // 0x180(0x10)
	struct FCachedRigElement CachedControlIndex; // 0x190(0x20)
};

// ScriptStruct ControlRig.RigUnit_SetControlOffset
// Size: 0x210 (Inherited: 0x170)
struct FRigUnit_SetControlOffset : FRigUnitMutable {
	struct FName Control; // 0x170(0x0c)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct FTransform Offset; // 0x180(0x60)
	enum class ERigVMTransformSpace Space; // 0x1e0(0x01)
	char pad_1E1[0x7]; // 0x1e1(0x07)
	struct FCachedRigElement CachedControlIndex; // 0x1e8(0x20)
	char pad_208[0x8]; // 0x208(0x08)
};

// ScriptStruct ControlRig.RigUnit_GetShapeTransform
// Size: 0xa0 (Inherited: 0x08)
struct FRigUnit_GetShapeTransform : FRigUnit {
	struct FName Control; // 0x08(0x0c)
	char pad_14[0xc]; // 0x14(0x0c)
	struct FTransform Transform; // 0x20(0x60)
	struct FCachedRigElement CachedControlIndex; // 0x80(0x20)
};

// ScriptStruct ControlRig.RigUnit_SetShapeTransform
// Size: 0x200 (Inherited: 0x170)
struct FRigUnit_SetShapeTransform : FRigUnitMutable {
	struct FName Control; // 0x170(0x0c)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct FTransform Transform; // 0x180(0x60)
	struct FCachedRigElement CachedControlIndex; // 0x1e0(0x20)
};

// ScriptStruct ControlRig.RigUnit_SetControlBool
// Size: 0x1a0 (Inherited: 0x170)
struct FRigUnit_SetControlBool : FRigUnitMutable {
	struct FName Control; // 0x170(0x0c)
	bool BoolValue; // 0x17c(0x01)
	char pad_17D[0x3]; // 0x17d(0x03)
	struct FCachedRigElement CachedControlIndex; // 0x180(0x20)
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlBool_Entry
// Size: 0x10 (Inherited: 0x00)
struct FRigUnit_SetMultiControlBool_Entry {
	struct FName Control; // 0x00(0x0c)
	bool BoolValue; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlBool
// Size: 0x190 (Inherited: 0x170)
struct FRigUnit_SetMultiControlBool : FRigUnitMutable {
	struct TArray<struct FRigUnit_SetMultiControlBool_Entry> Entries; // 0x170(0x10)
	struct TArray<struct FCachedRigElement> CachedControlIndices; // 0x180(0x10)
};

// ScriptStruct ControlRig.RigUnit_SetControlFloat
// Size: 0x1b0 (Inherited: 0x170)
struct FRigUnit_SetControlFloat : FRigUnitMutable {
	struct FName Control; // 0x170(0x0c)
	float Weight; // 0x17c(0x04)
	float FloatValue; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
	struct FCachedRigElement CachedControlIndex; // 0x188(0x20)
	char pad_1A8[0x8]; // 0x1a8(0x08)
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlFloat_Entry
// Size: 0x10 (Inherited: 0x00)
struct FRigUnit_SetMultiControlFloat_Entry {
	struct FName Control; // 0x00(0x0c)
	float FloatValue; // 0x0c(0x04)
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlFloat
// Size: 0x1a0 (Inherited: 0x170)
struct FRigUnit_SetMultiControlFloat : FRigUnitMutable {
	struct TArray<struct FRigUnit_SetMultiControlFloat_Entry> Entries; // 0x170(0x10)
	float Weight; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
	struct TArray<struct FCachedRigElement> CachedControlIndices; // 0x188(0x10)
	char pad_198[0x8]; // 0x198(0x08)
};

// ScriptStruct ControlRig.RigUnit_SetControlInteger
// Size: 0x1b0 (Inherited: 0x170)
struct FRigUnit_SetControlInteger : FRigUnitMutable {
	struct FName Control; // 0x170(0x0c)
	int32_t Weight; // 0x17c(0x04)
	int32_t IntegerValue; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
	struct FCachedRigElement CachedControlIndex; // 0x188(0x20)
	char pad_1A8[0x8]; // 0x1a8(0x08)
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlInteger_Entry
// Size: 0x10 (Inherited: 0x00)
struct FRigUnit_SetMultiControlInteger_Entry {
	struct FName Control; // 0x00(0x0c)
	int32_t IntegerValue; // 0x0c(0x04)
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlInteger
// Size: 0x1a0 (Inherited: 0x170)
struct FRigUnit_SetMultiControlInteger : FRigUnitMutable {
	struct TArray<struct FRigUnit_SetMultiControlInteger_Entry> Entries; // 0x170(0x10)
	float Weight; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
	struct TArray<struct FCachedRigElement> CachedControlIndices; // 0x188(0x10)
	char pad_198[0x8]; // 0x198(0x08)
};

// ScriptStruct ControlRig.RigUnit_SetControlVector2D
// Size: 0x1b0 (Inherited: 0x170)
struct FRigUnit_SetControlVector2D : FRigUnitMutable {
	struct FName Control; // 0x170(0x0c)
	float Weight; // 0x17c(0x04)
	struct FVector2D Vector; // 0x180(0x10)
	struct FCachedRigElement CachedControlIndex; // 0x190(0x20)
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlVector2D_Entry
// Size: 0x20 (Inherited: 0x00)
struct FRigUnit_SetMultiControlVector2D_Entry {
	struct FName Control; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FVector2D Vector; // 0x10(0x10)
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlVector2D
// Size: 0x1a0 (Inherited: 0x170)
struct FRigUnit_SetMultiControlVector2D : FRigUnitMutable {
	struct TArray<struct FRigUnit_SetMultiControlVector2D_Entry> Entries; // 0x170(0x10)
	float Weight; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
	struct TArray<struct FCachedRigElement> CachedControlIndices; // 0x188(0x10)
	char pad_198[0x8]; // 0x198(0x08)
};

// ScriptStruct ControlRig.RigUnit_SetControlVector
// Size: 0x1c0 (Inherited: 0x170)
struct FRigUnit_SetControlVector : FRigUnitMutable {
	struct FName Control; // 0x170(0x0c)
	float Weight; // 0x17c(0x04)
	struct FVector Vector; // 0x180(0x18)
	enum class ERigVMTransformSpace Space; // 0x198(0x01)
	char pad_199[0x7]; // 0x199(0x07)
	struct FCachedRigElement CachedControlIndex; // 0x1a0(0x20)
};

// ScriptStruct ControlRig.RigUnit_SetControlRotator
// Size: 0x1c0 (Inherited: 0x170)
struct FRigUnit_SetControlRotator : FRigUnitMutable {
	struct FName Control; // 0x170(0x0c)
	float Weight; // 0x17c(0x04)
	struct FRotator Rotator; // 0x180(0x18)
	enum class ERigVMTransformSpace Space; // 0x198(0x01)
	char pad_199[0x7]; // 0x199(0x07)
	struct FCachedRigElement CachedControlIndex; // 0x1a0(0x20)
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlRotator_Entry
// Size: 0x30 (Inherited: 0x00)
struct FRigUnit_SetMultiControlRotator_Entry {
	struct FName Control; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FRotator Rotator; // 0x10(0x18)
	enum class ERigVMTransformSpace Space; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlRotator
// Size: 0x1a0 (Inherited: 0x170)
struct FRigUnit_SetMultiControlRotator : FRigUnitMutable {
	struct TArray<struct FRigUnit_SetMultiControlRotator_Entry> Entries; // 0x170(0x10)
	float Weight; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
	struct TArray<struct FCachedRigElement> CachedControlIndices; // 0x188(0x10)
	char pad_198[0x8]; // 0x198(0x08)
};

// ScriptStruct ControlRig.RigUnit_SetControlTransform
// Size: 0x210 (Inherited: 0x170)
struct FRigUnit_SetControlTransform : FRigUnitMutable {
	struct FName Control; // 0x170(0x0c)
	float Weight; // 0x17c(0x04)
	struct FTransform Transform; // 0x180(0x60)
	enum class ERigVMTransformSpace Space; // 0x1e0(0x01)
	char pad_1E1[0x7]; // 0x1e1(0x07)
	struct FCachedRigElement CachedControlIndex; // 0x1e8(0x20)
	char pad_208[0x8]; // 0x208(0x08)
};

// ScriptStruct ControlRig.RigUnit_GetControlVisibility
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_GetControlVisibility : FRigUnit {
	struct FRigElementKey Item; // 0x08(0x10)
	bool bVisible; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FCachedRigElement CachedControlIndex; // 0x20(0x20)
};

// ScriptStruct ControlRig.RigUnit_SetControlVisibility
// Size: 0x1b0 (Inherited: 0x170)
struct FRigUnit_SetControlVisibility : FRigUnitMutable {
	struct FRigElementKey Item; // 0x170(0x10)
	struct FString Pattern; // 0x180(0x10)
	bool bVisible; // 0x190(0x01)
	char pad_191[0x7]; // 0x191(0x07)
	struct TArray<struct FCachedRigElement> CachedControlIndices; // 0x198(0x10)
	char pad_1A8[0x8]; // 0x1a8(0x08)
};

// ScriptStruct ControlRig.RigUnit_SetCurveValue
// Size: 0x1a0 (Inherited: 0x170)
struct FRigUnit_SetCurveValue : FRigUnitMutable {
	struct FName Curve; // 0x170(0x0c)
	float Value; // 0x17c(0x04)
	struct FCachedRigElement CachedCurveIndex; // 0x180(0x20)
};

// ScriptStruct ControlRig.RigUnit_SetRelativeBoneTransform
// Size: 0x240 (Inherited: 0x170)
struct FRigUnit_SetRelativeBoneTransform : FRigUnitMutable {
	struct FName bone; // 0x170(0x0c)
	struct FName Space; // 0x17c(0x0c)
	char pad_188[0x8]; // 0x188(0x08)
	struct FTransform Transform; // 0x190(0x60)
	float Weight; // 0x1f0(0x04)
	bool bPropagateToChildren; // 0x1f4(0x01)
	char pad_1F5[0x3]; // 0x1f5(0x03)
	struct FCachedRigElement CachedBone; // 0x1f8(0x20)
	struct FCachedRigElement CachedSpaceIndex; // 0x218(0x20)
	char pad_238[0x8]; // 0x238(0x08)
};

// ScriptStruct ControlRig.RigUnit_SetRelativeTransformForItem
// Size: 0x250 (Inherited: 0x170)
struct FRigUnit_SetRelativeTransformForItem : FRigUnitMutable {
	struct FRigElementKey Child; // 0x170(0x10)
	struct FRigElementKey Parent; // 0x180(0x10)
	bool bParentInitial; // 0x190(0x01)
	char pad_191[0xf]; // 0x191(0x0f)
	struct FTransform Value; // 0x1a0(0x60)
	float Weight; // 0x200(0x04)
	bool bPropagateToChildren; // 0x204(0x01)
	char pad_205[0x3]; // 0x205(0x03)
	struct FCachedRigElement CachedChild; // 0x208(0x20)
	struct FCachedRigElement CachedParent; // 0x228(0x20)
	char pad_248[0x8]; // 0x248(0x08)
};

// ScriptStruct ControlRig.RigUnit_SetRelativeTranslationForItem
// Size: 0x200 (Inherited: 0x170)
struct FRigUnit_SetRelativeTranslationForItem : FRigUnitMutable {
	struct FRigElementKey Child; // 0x170(0x10)
	struct FRigElementKey Parent; // 0x180(0x10)
	bool bParentInitial; // 0x190(0x01)
	char pad_191[0x7]; // 0x191(0x07)
	struct FVector Value; // 0x198(0x18)
	float Weight; // 0x1b0(0x04)
	bool bPropagateToChildren; // 0x1b4(0x01)
	char pad_1B5[0x3]; // 0x1b5(0x03)
	struct FCachedRigElement CachedChild; // 0x1b8(0x20)
	struct FCachedRigElement CachedParent; // 0x1d8(0x20)
	char pad_1F8[0x8]; // 0x1f8(0x08)
};

// ScriptStruct ControlRig.RigUnit_SetRelativeRotationForItem
// Size: 0x210 (Inherited: 0x170)
struct FRigUnit_SetRelativeRotationForItem : FRigUnitMutable {
	struct FRigElementKey Child; // 0x170(0x10)
	struct FRigElementKey Parent; // 0x180(0x10)
	bool bParentInitial; // 0x190(0x01)
	char pad_191[0xf]; // 0x191(0x0f)
	struct FQuat Value; // 0x1a0(0x20)
	float Weight; // 0x1c0(0x04)
	bool bPropagateToChildren; // 0x1c4(0x01)
	char pad_1C5[0x3]; // 0x1c5(0x03)
	struct FCachedRigElement CachedChild; // 0x1c8(0x20)
	struct FCachedRigElement CachedParent; // 0x1e8(0x20)
	char pad_208[0x8]; // 0x208(0x08)
};

// ScriptStruct ControlRig.RigUnit_SetSpaceInitialTransform
// Size: 0x270 (Inherited: 0x170)
struct FRigUnit_SetSpaceInitialTransform : FRigUnitMutable {
	struct FName SpaceName; // 0x170(0x0c)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct FTransform Transform; // 0x180(0x60)
	struct FTransform Result; // 0x1e0(0x60)
	enum class ERigVMTransformSpace Space; // 0x240(0x01)
	char pad_241[0x7]; // 0x241(0x07)
	struct FCachedRigElement CachedSpaceIndex; // 0x248(0x20)
	char pad_268[0x8]; // 0x268(0x08)
};

// ScriptStruct ControlRig.RigUnit_SetSpaceTransform
// Size: 0x210 (Inherited: 0x170)
struct FRigUnit_SetSpaceTransform : FRigUnitMutable {
	struct FName Space; // 0x170(0x0c)
	float Weight; // 0x17c(0x04)
	struct FTransform Transform; // 0x180(0x60)
	enum class ERigVMTransformSpace SpaceType; // 0x1e0(0x01)
	char pad_1E1[0x7]; // 0x1e1(0x07)
	struct FCachedRigElement CachedSpaceIndex; // 0x1e8(0x20)
	char pad_208[0x8]; // 0x208(0x08)
};

// ScriptStruct ControlRig.RigUnit_SetTransform
// Size: 0x220 (Inherited: 0x170)
struct FRigUnit_SetTransform : FRigUnitMutable {
	struct FRigElementKey Item; // 0x170(0x10)
	enum class ERigVMTransformSpace Space; // 0x180(0x01)
	bool bInitial; // 0x181(0x01)
	char pad_182[0xe]; // 0x182(0x0e)
	struct FTransform Value; // 0x190(0x60)
	float Weight; // 0x1f0(0x04)
	bool bPropagateToChildren; // 0x1f4(0x01)
	char pad_1F5[0x3]; // 0x1f5(0x03)
	struct FCachedRigElement CachedIndex; // 0x1f8(0x20)
	char pad_218[0x8]; // 0x218(0x08)
};

// ScriptStruct ControlRig.RigUnit_SetTranslation
// Size: 0x1d0 (Inherited: 0x170)
struct FRigUnit_SetTranslation : FRigUnitMutable {
	struct FRigElementKey Item; // 0x170(0x10)
	enum class ERigVMTransformSpace Space; // 0x180(0x01)
	bool bInitial; // 0x181(0x01)
	char pad_182[0x6]; // 0x182(0x06)
	struct FVector Value; // 0x188(0x18)
	float Weight; // 0x1a0(0x04)
	bool bPropagateToChildren; // 0x1a4(0x01)
	char pad_1A5[0x3]; // 0x1a5(0x03)
	struct FCachedRigElement CachedIndex; // 0x1a8(0x20)
	char pad_1C8[0x8]; // 0x1c8(0x08)
};

// ScriptStruct ControlRig.RigUnit_SetRotation
// Size: 0x1e0 (Inherited: 0x170)
struct FRigUnit_SetRotation : FRigUnitMutable {
	struct FRigElementKey Item; // 0x170(0x10)
	enum class ERigVMTransformSpace Space; // 0x180(0x01)
	bool bInitial; // 0x181(0x01)
	char pad_182[0xe]; // 0x182(0x0e)
	struct FQuat Value; // 0x190(0x20)
	float Weight; // 0x1b0(0x04)
	bool bPropagateToChildren; // 0x1b4(0x01)
	char pad_1B5[0x3]; // 0x1b5(0x03)
	struct FCachedRigElement CachedIndex; // 0x1b8(0x20)
	char pad_1D8[0x8]; // 0x1d8(0x08)
};

// ScriptStruct ControlRig.RigUnit_SetScale
// Size: 0x1d0 (Inherited: 0x170)
struct FRigUnit_SetScale : FRigUnitMutable {
	struct FRigElementKey Item; // 0x170(0x10)
	enum class ERigVMTransformSpace Space; // 0x180(0x01)
	bool bInitial; // 0x181(0x01)
	char pad_182[0x6]; // 0x182(0x06)
	struct FVector Scale; // 0x188(0x18)
	float Weight; // 0x1a0(0x04)
	bool bPropagateToChildren; // 0x1a4(0x01)
	char pad_1A5[0x3]; // 0x1a5(0x03)
	struct FCachedRigElement CachedIndex; // 0x1a8(0x20)
	char pad_1C8[0x8]; // 0x1c8(0x08)
};

// ScriptStruct ControlRig.RigUnit_SetTransformArray
// Size: 0x1b0 (Inherited: 0x170)
struct FRigUnit_SetTransformArray : FRigUnitMutable {
	struct FRigElementKeyCollection Items; // 0x170(0x10)
	enum class ERigVMTransformSpace Space; // 0x180(0x01)
	bool bInitial; // 0x181(0x01)
	char pad_182[0x6]; // 0x182(0x06)
	struct TArray<struct FTransform> Transforms; // 0x188(0x10)
	float Weight; // 0x198(0x04)
	bool bPropagateToChildren; // 0x19c(0x01)
	char pad_19D[0x3]; // 0x19d(0x03)
	struct TArray<struct FCachedRigElement> CachedIndex; // 0x1a0(0x10)
};

// ScriptStruct ControlRig.RigUnit_SetTransformItemArray
// Size: 0x1b0 (Inherited: 0x170)
struct FRigUnit_SetTransformItemArray : FRigUnitMutable {
	struct TArray<struct FRigElementKey> Items; // 0x170(0x10)
	enum class ERigVMTransformSpace Space; // 0x180(0x01)
	bool bInitial; // 0x181(0x01)
	char pad_182[0x6]; // 0x182(0x06)
	struct TArray<struct FTransform> Transforms; // 0x188(0x10)
	float Weight; // 0x198(0x04)
	bool bPropagateToChildren; // 0x19c(0x01)
	char pad_19D[0x3]; // 0x19d(0x03)
	struct TArray<struct FCachedRigElement> CachedIndex; // 0x1a0(0x10)
};

// ScriptStruct ControlRig.RigUnit_UnsetCurveValue
// Size: 0x1a0 (Inherited: 0x170)
struct FRigUnit_UnsetCurveValue : FRigUnitMutable {
	struct FName Curve; // 0x170(0x0c)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct FCachedRigElement CachedCurveIndex; // 0x180(0x20)
};

// ScriptStruct ControlRig.RigUnit_ToWorldSpace_Transform
// Size: 0xd0 (Inherited: 0x08)
struct FRigUnit_ToWorldSpace_Transform : FRigUnit {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Value; // 0x10(0x60)
	struct FTransform World; // 0x70(0x60)
};

// ScriptStruct ControlRig.RigUnit_ToRigSpace_Transform
// Size: 0xd0 (Inherited: 0x08)
struct FRigUnit_ToRigSpace_Transform : FRigUnit {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Value; // 0x10(0x60)
	struct FTransform Global; // 0x70(0x60)
};

// ScriptStruct ControlRig.RigUnit_ToWorldSpace_Location
// Size: 0x38 (Inherited: 0x08)
struct FRigUnit_ToWorldSpace_Location : FRigUnit {
	struct FVector Value; // 0x08(0x18)
	struct FVector World; // 0x20(0x18)
};

// ScriptStruct ControlRig.RigUnit_ToRigSpace_Location
// Size: 0x38 (Inherited: 0x08)
struct FRigUnit_ToRigSpace_Location : FRigUnit {
	struct FVector Value; // 0x08(0x18)
	struct FVector Global; // 0x20(0x18)
};

// ScriptStruct ControlRig.RigUnit_ToWorldSpace_Rotation
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_ToWorldSpace_Rotation : FRigUnit {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Value; // 0x10(0x20)
	struct FQuat World; // 0x30(0x20)
};

// ScriptStruct ControlRig.RigUnit_ToRigSpace_Rotation
// Size: 0x50 (Inherited: 0x08)
struct FRigUnit_ToRigSpace_Rotation : FRigUnit {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Value; // 0x10(0x20)
	struct FQuat Global; // 0x30(0x20)
};

// ScriptStruct ControlRig.RigUnit_BoneHarmonics_BoneTarget
// Size: 0x10 (Inherited: 0x00)
struct FRigUnit_BoneHarmonics_BoneTarget {
	struct FName bone; // 0x00(0x0c)
	float Ratio; // 0x0c(0x04)
};

// ScriptStruct ControlRig.RigUnit_Harmonics_TargetItem
// Size: 0x14 (Inherited: 0x00)
struct FRigUnit_Harmonics_TargetItem {
	struct FRigElementKey Item; // 0x00(0x10)
	float Ratio; // 0x10(0x04)
};

// ScriptStruct ControlRig.RigUnit_BoneHarmonics_WorkData
// Size: 0x28 (Inherited: 0x00)
struct FRigUnit_BoneHarmonics_WorkData {
	struct TArray<struct FCachedRigElement> CachedItems; // 0x00(0x10)
	struct FVector WaveTime; // 0x10(0x18)
};

// ScriptStruct ControlRig.RigUnit_BoneHarmonics
// Size: 0x230 (Inherited: 0x170)
struct FRigUnit_BoneHarmonics : FRigUnit_HighlevelBaseMutable {
	struct TArray<struct FRigUnit_BoneHarmonics_BoneTarget> Bones; // 0x170(0x10)
	struct FVector WaveSpeed; // 0x180(0x18)
	struct FVector WaveFrequency; // 0x198(0x18)
	struct FVector WaveAmplitude; // 0x1b0(0x18)
	struct FVector WaveOffset; // 0x1c8(0x18)
	struct FVector WaveNoise; // 0x1e0(0x18)
	enum class ERigVMAnimEasingType WaveEase; // 0x1f8(0x01)
	char pad_1F9[0x3]; // 0x1f9(0x03)
	float WaveMinimum; // 0x1fc(0x04)
	float WaveMaximum; // 0x200(0x04)
	enum class EEulerRotationOrder RotationOrder; // 0x204(0x01)
	bool bPropagateToChildren; // 0x205(0x01)
	char pad_206[0x2]; // 0x206(0x02)
	struct FRigUnit_BoneHarmonics_WorkData WorkData; // 0x208(0x28)
};

// ScriptStruct ControlRig.RigUnit_ItemHarmonics
// Size: 0x230 (Inherited: 0x170)
struct FRigUnit_ItemHarmonics : FRigUnit_HighlevelBaseMutable {
	struct TArray<struct FRigUnit_Harmonics_TargetItem> Targets; // 0x170(0x10)
	struct FVector WaveSpeed; // 0x180(0x18)
	struct FVector WaveFrequency; // 0x198(0x18)
	struct FVector WaveAmplitude; // 0x1b0(0x18)
	struct FVector WaveOffset; // 0x1c8(0x18)
	struct FVector WaveNoise; // 0x1e0(0x18)
	enum class ERigVMAnimEasingType WaveEase; // 0x1f8(0x01)
	char pad_1F9[0x3]; // 0x1f9(0x03)
	float WaveMinimum; // 0x1fc(0x04)
	float WaveMaximum; // 0x200(0x04)
	enum class EEulerRotationOrder RotationOrder; // 0x204(0x01)
	char pad_205[0x3]; // 0x205(0x03)
	struct FRigUnit_BoneHarmonics_WorkData WorkData; // 0x208(0x28)
};

// ScriptStruct ControlRig.RigUnit_ChainHarmonics_Reach
// Size: 0x48 (Inherited: 0x00)
struct FRigUnit_ChainHarmonics_Reach {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FVector ReachTarget; // 0x08(0x18)
	struct FVector ReachAxis; // 0x20(0x18)
	float ReachMinimum; // 0x38(0x04)
	float ReachMaximum; // 0x3c(0x04)
	enum class ERigVMAnimEasingType ReachEase; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct ControlRig.RigUnit_ChainHarmonics_Wave
// Size: 0x78 (Inherited: 0x00)
struct FRigUnit_ChainHarmonics_Wave {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FVector WaveFrequency; // 0x08(0x18)
	struct FVector WaveAmplitude; // 0x20(0x18)
	struct FVector WaveOffset; // 0x38(0x18)
	struct FVector WaveNoise; // 0x50(0x18)
	float WaveMinimum; // 0x68(0x04)
	float WaveMaximum; // 0x6c(0x04)
	enum class ERigVMAnimEasingType WaveEase; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct ControlRig.RigUnit_ChainHarmonics_Pendulum
// Size: 0x58 (Inherited: 0x00)
struct FRigUnit_ChainHarmonics_Pendulum {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float PendulumStiffness; // 0x04(0x04)
	struct FVector PendulumGravity; // 0x08(0x18)
	float PendulumBlend; // 0x20(0x04)
	float PendulumDrag; // 0x24(0x04)
	float PendulumMinimum; // 0x28(0x04)
	float PendulumMaximum; // 0x2c(0x04)
	enum class ERigVMAnimEasingType PendulumEase; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FVector UnwindAxis; // 0x38(0x18)
	float UnwindMinimum; // 0x50(0x04)
	float UnwindMaximum; // 0x54(0x04)
};

// ScriptStruct ControlRig.RigUnit_ChainHarmonics_WorkData
// Size: 0x98 (Inherited: 0x00)
struct FRigUnit_ChainHarmonics_WorkData {
	struct FVector Time; // 0x00(0x18)
	struct TArray<struct FCachedRigElement> Items; // 0x18(0x10)
	struct TArray<float> Ratio; // 0x28(0x10)
	struct TArray<struct FVector> LocalTip; // 0x38(0x10)
	struct TArray<struct FVector> PendulumTip; // 0x48(0x10)
	struct TArray<struct FVector> PendulumPosition; // 0x58(0x10)
	struct TArray<struct FVector> PendulumVelocity; // 0x68(0x10)
	struct TArray<struct FVector> HierarchyLine; // 0x78(0x10)
	struct TArray<struct FVector> VelocityLines; // 0x88(0x10)
};

// ScriptStruct ControlRig.RigUnit_ChainHarmonics
// Size: 0x440 (Inherited: 0x170)
struct FRigUnit_ChainHarmonics : FRigUnit_HighlevelBaseMutable {
	struct FName ChainRoot; // 0x170(0x0c)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct FVector Speed; // 0x180(0x18)
	struct FRigUnit_ChainHarmonics_Reach Reach; // 0x198(0x48)
	struct FRigUnit_ChainHarmonics_Wave Wave; // 0x1e0(0x78)
	struct FRuntimeFloatCurve WaveCurve; // 0x258(0x88)
	struct FRigUnit_ChainHarmonics_Pendulum Pendulum; // 0x2e0(0x58)
	bool bDrawDebug; // 0x338(0x01)
	char pad_339[0x7]; // 0x339(0x07)
	struct FTransform DrawWorldOffset; // 0x340(0x60)
	struct FRigUnit_ChainHarmonics_WorkData WorkData; // 0x3a0(0x98)
	char pad_438[0x8]; // 0x438(0x08)
};

// ScriptStruct ControlRig.RigUnit_ChainHarmonicsPerItem
// Size: 0x440 (Inherited: 0x170)
struct FRigUnit_ChainHarmonicsPerItem : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKey ChainRoot; // 0x170(0x10)
	struct FVector Speed; // 0x180(0x18)
	struct FRigUnit_ChainHarmonics_Reach Reach; // 0x198(0x48)
	struct FRigUnit_ChainHarmonics_Wave Wave; // 0x1e0(0x78)
	struct FRuntimeFloatCurve WaveCurve; // 0x258(0x88)
	struct FRigUnit_ChainHarmonics_Pendulum Pendulum; // 0x2e0(0x58)
	bool bDrawDebug; // 0x338(0x01)
	char pad_339[0x7]; // 0x339(0x07)
	struct FTransform DrawWorldOffset; // 0x340(0x60)
	struct FRigUnit_ChainHarmonics_WorkData WorkData; // 0x3a0(0x98)
	char pad_438[0x8]; // 0x438(0x08)
};

// ScriptStruct ControlRig.RigUnit_AimBone_Target
// Size: 0x48 (Inherited: 0x00)
struct FRigUnit_AimBone_Target {
	float Weight; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FVector Axis; // 0x08(0x18)
	struct FVector Target; // 0x20(0x18)
	enum class EControlRigVectorKind Kind; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FName Space; // 0x3c(0x0c)
};

// ScriptStruct ControlRig.RigUnit_AimItem_Target
// Size: 0x50 (Inherited: 0x00)
struct FRigUnit_AimItem_Target {
	float Weight; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FVector Axis; // 0x08(0x18)
	struct FVector Target; // 0x20(0x18)
	enum class EControlRigVectorKind Kind; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FRigElementKey Space; // 0x3c(0x10)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct ControlRig.RigUnit_AimBone_DebugSettings
// Size: 0x70 (Inherited: 0x00)
struct FRigUnit_AimBone_DebugSettings {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Scale; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform WorldOffset; // 0x10(0x60)
};

// ScriptStruct ControlRig.RigUnit_AimBoneMath
// Size: 0x240 (Inherited: 0x08)
struct FRigUnit_AimBoneMath : FRigUnit_HighlevelBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform InputTransform; // 0x10(0x60)
	struct FRigUnit_AimItem_Target Primary; // 0x70(0x50)
	struct FRigUnit_AimItem_Target Secondary; // 0xc0(0x50)
	float Weight; // 0x110(0x04)
	char pad_114[0xc]; // 0x114(0x0c)
	struct FTransform Result; // 0x120(0x60)
	struct FRigUnit_AimBone_DebugSettings DebugSettings; // 0x180(0x70)
	struct FCachedRigElement PrimaryCachedSpace; // 0x1f0(0x20)
	struct FCachedRigElement SecondaryCachedSpace; // 0x210(0x20)
	bool bIsInitialized; // 0x230(0x01)
	char pad_231[0xf]; // 0x231(0x0f)
};

// ScriptStruct ControlRig.RigUnit_AimBone
// Size: 0x300 (Inherited: 0x170)
struct FRigUnit_AimBone : FRigUnit_HighlevelBaseMutable {
	struct FName bone; // 0x170(0x0c)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct FRigUnit_AimBone_Target Primary; // 0x180(0x48)
	struct FRigUnit_AimBone_Target Secondary; // 0x1c8(0x48)
	float Weight; // 0x210(0x04)
	bool bPropagateToChildren; // 0x214(0x01)
	char pad_215[0xb]; // 0x215(0x0b)
	struct FRigUnit_AimBone_DebugSettings DebugSettings; // 0x220(0x70)
	struct FCachedRigElement CachedBoneIndex; // 0x290(0x20)
	struct FCachedRigElement PrimaryCachedSpace; // 0x2b0(0x20)
	struct FCachedRigElement SecondaryCachedSpace; // 0x2d0(0x20)
	bool bIsInitialized; // 0x2f0(0x01)
	char pad_2F1[0xf]; // 0x2f1(0x0f)
};

// ScriptStruct ControlRig.RigUnit_AimItem
// Size: 0x310 (Inherited: 0x170)
struct FRigUnit_AimItem : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKey Item; // 0x170(0x10)
	struct FRigUnit_AimItem_Target Primary; // 0x180(0x50)
	struct FRigUnit_AimItem_Target Secondary; // 0x1d0(0x50)
	float Weight; // 0x220(0x04)
	char pad_224[0xc]; // 0x224(0x0c)
	struct FRigUnit_AimBone_DebugSettings DebugSettings; // 0x230(0x70)
	struct FCachedRigElement CachedItem; // 0x2a0(0x20)
	struct FCachedRigElement PrimaryCachedSpace; // 0x2c0(0x20)
	struct FCachedRigElement SecondaryCachedSpace; // 0x2e0(0x20)
	bool bIsInitialized; // 0x300(0x01)
	char pad_301[0xf]; // 0x301(0x0f)
};

// ScriptStruct ControlRig.RigUnit_AimConstraint_WorldUp
// Size: 0x30 (Inherited: 0x00)
struct FRigUnit_AimConstraint_WorldUp {
	struct FVector Target; // 0x00(0x18)
	enum class EControlRigVectorKind Kind; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FRigElementKey Space; // 0x1c(0x10)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct ControlRig.RigUnit_AimConstraint_AdvancedSettings
// Size: 0x80 (Inherited: 0x00)
struct FRigUnit_AimConstraint_AdvancedSettings {
	struct FRigUnit_AimBone_DebugSettings DebugSettings; // 0x00(0x70)
	enum class EEulerRotationOrder RotationOrderForFilter; // 0x70(0x01)
	char pad_71[0xf]; // 0x71(0x0f)
};

// ScriptStruct ControlRig.RigUnit_AimConstraintLocalSpaceOffset
// Size: 0x2e0 (Inherited: 0x170)
struct FRigUnit_AimConstraintLocalSpaceOffset : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKey Child; // 0x170(0x10)
	bool bMaintainOffset; // 0x180(0x01)
	struct FFilterOptionPerAxis Filter; // 0x181(0x03)
	char pad_184[0x4]; // 0x184(0x04)
	struct FVector AimAxis; // 0x188(0x18)
	struct FVector UpAxis; // 0x1a0(0x18)
	struct FRigUnit_AimConstraint_WorldUp WorldUp; // 0x1b8(0x30)
	struct TArray<struct FConstraintParent> Parents; // 0x1e8(0x10)
	char pad_1F8[0x8]; // 0x1f8(0x08)
	struct FRigUnit_AimConstraint_AdvancedSettings AdvancedSettings; // 0x200(0x80)
	float Weight; // 0x280(0x04)
	char pad_284[0x4]; // 0x284(0x04)
	struct FCachedRigElement WorldUpSpaceCache; // 0x288(0x20)
	struct FCachedRigElement ChildCache; // 0x2a8(0x20)
	struct TArray<struct FCachedRigElement> ParentCaches; // 0x2c8(0x10)
	bool bIsInitialized; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
};

// ScriptStruct ControlRig.ConstraintParent
// Size: 0x14 (Inherited: 0x00)
struct FConstraintParent {
	struct FRigElementKey Item; // 0x00(0x10)
	float Weight; // 0x10(0x04)
};

// ScriptStruct ControlRig.RigUnit_CCDIK_RotationLimit
// Size: 0x10 (Inherited: 0x00)
struct FRigUnit_CCDIK_RotationLimit {
	struct FName bone; // 0x00(0x0c)
	float Limit; // 0x0c(0x04)
};

// ScriptStruct ControlRig.RigUnit_CCDIK_RotationLimitPerItem
// Size: 0x14 (Inherited: 0x00)
struct FRigUnit_CCDIK_RotationLimitPerItem {
	struct FRigElementKey Item; // 0x00(0x10)
	float Limit; // 0x10(0x04)
};

// ScriptStruct ControlRig.RigUnit_CCDIK_WorkData
// Size: 0x60 (Inherited: 0x00)
struct FRigUnit_CCDIK_WorkData {
	struct TArray<struct FCCDIKChainLink> Chain; // 0x00(0x10)
	struct TArray<struct FCachedRigElement> CachedItems; // 0x10(0x10)
	struct TArray<int32_t> RotationLimitIndex; // 0x20(0x10)
	struct TArray<float> RotationLimitsPerItem; // 0x30(0x10)
	struct FCachedRigElement CachedEffector; // 0x40(0x20)
};

// ScriptStruct ControlRig.RigUnit_CCDIK
// Size: 0x280 (Inherited: 0x170)
struct FRigUnit_CCDIK : FRigUnit_HighlevelBaseMutable {
	struct FName StartBone; // 0x170(0x0c)
	struct FName EffectorBone; // 0x17c(0x0c)
	char pad_188[0x8]; // 0x188(0x08)
	struct FTransform EffectorTransform; // 0x190(0x60)
	float Precision; // 0x1f0(0x04)
	float Weight; // 0x1f4(0x04)
	int32_t MaxIterations; // 0x1f8(0x04)
	bool bStartFromTail; // 0x1fc(0x01)
	char pad_1FD[0x3]; // 0x1fd(0x03)
	float BaseRotationLimit; // 0x200(0x04)
	char pad_204[0x4]; // 0x204(0x04)
	struct TArray<struct FRigUnit_CCDIK_RotationLimit> RotationLimits; // 0x208(0x10)
	bool bPropagateToChildren; // 0x218(0x01)
	char pad_219[0x7]; // 0x219(0x07)
	struct FRigUnit_CCDIK_WorkData WorkData; // 0x220(0x60)
};

// ScriptStruct ControlRig.RigUnit_CCDIKPerItem
// Size: 0x270 (Inherited: 0x170)
struct FRigUnit_CCDIKPerItem : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKeyCollection Items; // 0x170(0x10)
	struct FTransform EffectorTransform; // 0x180(0x60)
	float Precision; // 0x1e0(0x04)
	float Weight; // 0x1e4(0x04)
	int32_t MaxIterations; // 0x1e8(0x04)
	bool bStartFromTail; // 0x1ec(0x01)
	char pad_1ED[0x3]; // 0x1ed(0x03)
	float BaseRotationLimit; // 0x1f0(0x04)
	char pad_1F4[0x4]; // 0x1f4(0x04)
	struct TArray<struct FRigUnit_CCDIK_RotationLimitPerItem> RotationLimits; // 0x1f8(0x10)
	bool bPropagateToChildren; // 0x208(0x01)
	char pad_209[0x7]; // 0x209(0x07)
	struct FRigUnit_CCDIK_WorkData WorkData; // 0x210(0x60)
};

// ScriptStruct ControlRig.RigUnit_CCDIKItemArray
// Size: 0x270 (Inherited: 0x170)
struct FRigUnit_CCDIKItemArray : FRigUnit_HighlevelBaseMutable {
	struct TArray<struct FRigElementKey> Items; // 0x170(0x10)
	struct FTransform EffectorTransform; // 0x180(0x60)
	float Precision; // 0x1e0(0x04)
	float Weight; // 0x1e4(0x04)
	int32_t MaxIterations; // 0x1e8(0x04)
	bool bStartFromTail; // 0x1ec(0x01)
	char pad_1ED[0x3]; // 0x1ed(0x03)
	float BaseRotationLimit; // 0x1f0(0x04)
	char pad_1F4[0x4]; // 0x1f4(0x04)
	struct TArray<struct FRigUnit_CCDIK_RotationLimitPerItem> RotationLimits; // 0x1f8(0x10)
	bool bPropagateToChildren; // 0x208(0x01)
	char pad_209[0x7]; // 0x209(0x07)
	struct FRigUnit_CCDIK_WorkData WorkData; // 0x210(0x60)
};

// ScriptStruct ControlRig.RigUnit_DistributeRotation_Rotation
// Size: 0x30 (Inherited: 0x00)
struct FRigUnit_DistributeRotation_Rotation {
	struct FQuat Rotation; // 0x00(0x20)
	float Ratio; // 0x20(0x04)
	char pad_24[0xc]; // 0x24(0x0c)
};

// ScriptStruct ControlRig.RigUnit_DistributeRotation_WorkData
// Size: 0x50 (Inherited: 0x00)
struct FRigUnit_DistributeRotation_WorkData {
	struct TArray<struct FCachedRigElement> CachedItems; // 0x00(0x10)
	struct TArray<int32_t> ItemRotationA; // 0x10(0x10)
	struct TArray<int32_t> ItemRotationB; // 0x20(0x10)
	struct TArray<float> ItemRotationT; // 0x30(0x10)
	struct TArray<struct FTransform> ItemLocalTransforms; // 0x40(0x10)
};

// ScriptStruct ControlRig.RigUnit_DistributeRotation
// Size: 0x200 (Inherited: 0x170)
struct FRigUnit_DistributeRotation : FRigUnit_HighlevelBaseMutable {
	struct FName StartBone; // 0x170(0x0c)
	struct FName EndBone; // 0x17c(0x0c)
	struct TArray<struct FRigUnit_DistributeRotation_Rotation> Rotations; // 0x188(0x10)
	enum class ERigVMAnimEasingType RotationEaseType; // 0x198(0x01)
	char pad_199[0x3]; // 0x199(0x03)
	float Weight; // 0x19c(0x04)
	bool bPropagateToChildren; // 0x1a0(0x01)
	char pad_1A1[0x7]; // 0x1a1(0x07)
	struct FRigUnit_DistributeRotation_WorkData WorkData; // 0x1a8(0x50)
	char pad_1F8[0x8]; // 0x1f8(0x08)
};

// ScriptStruct ControlRig.RigUnit_DistributeRotationForCollection
// Size: 0x1f0 (Inherited: 0x170)
struct FRigUnit_DistributeRotationForCollection : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKeyCollection Items; // 0x170(0x10)
	struct TArray<struct FRigUnit_DistributeRotation_Rotation> Rotations; // 0x180(0x10)
	enum class ERigVMAnimEasingType RotationEaseType; // 0x190(0x01)
	char pad_191[0x3]; // 0x191(0x03)
	float Weight; // 0x194(0x04)
	struct FRigUnit_DistributeRotation_WorkData WorkData; // 0x198(0x50)
	char pad_1E8[0x8]; // 0x1e8(0x08)
};

// ScriptStruct ControlRig.RigUnit_DistributeRotationForItemArray
// Size: 0x1f0 (Inherited: 0x170)
struct FRigUnit_DistributeRotationForItemArray : FRigUnit_HighlevelBaseMutable {
	struct TArray<struct FRigElementKey> Items; // 0x170(0x10)
	struct TArray<struct FRigUnit_DistributeRotation_Rotation> Rotations; // 0x180(0x10)
	enum class ERigVMAnimEasingType RotationEaseType; // 0x190(0x01)
	char pad_191[0x3]; // 0x191(0x03)
	float Weight; // 0x194(0x04)
	struct FRigUnit_DistributeRotation_WorkData WorkData; // 0x198(0x50)
	char pad_1E8[0x8]; // 0x1e8(0x08)
};

// ScriptStruct ControlRig.RigUnit_FABRIK_WorkData
// Size: 0x40 (Inherited: 0x00)
struct FRigUnit_FABRIK_WorkData {
	struct TArray<struct FFABRIKChainLink> Chain; // 0x00(0x10)
	struct TArray<struct FCachedRigElement> CachedItems; // 0x10(0x10)
	struct FCachedRigElement CachedEffector; // 0x20(0x20)
};

// ScriptStruct ControlRig.RigUnit_FABRIK
// Size: 0x250 (Inherited: 0x170)
struct FRigUnit_FABRIK : FRigUnit_HighlevelBaseMutable {
	struct FName StartBone; // 0x170(0x0c)
	struct FName EffectorBone; // 0x17c(0x0c)
	char pad_188[0x8]; // 0x188(0x08)
	struct FTransform EffectorTransform; // 0x190(0x60)
	float Precision; // 0x1f0(0x04)
	float Weight; // 0x1f4(0x04)
	bool bPropagateToChildren; // 0x1f8(0x01)
	char pad_1F9[0x3]; // 0x1f9(0x03)
	int32_t MaxIterations; // 0x1fc(0x04)
	struct FRigUnit_FABRIK_WorkData WorkData; // 0x200(0x40)
	bool bSetEffectorTransform; // 0x240(0x01)
	char pad_241[0xf]; // 0x241(0x0f)
};

// ScriptStruct ControlRig.RigUnit_FABRIKPerItem
// Size: 0x240 (Inherited: 0x170)
struct FRigUnit_FABRIKPerItem : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKeyCollection Items; // 0x170(0x10)
	struct FTransform EffectorTransform; // 0x180(0x60)
	float Precision; // 0x1e0(0x04)
	float Weight; // 0x1e4(0x04)
	bool bPropagateToChildren; // 0x1e8(0x01)
	char pad_1E9[0x3]; // 0x1e9(0x03)
	int32_t MaxIterations; // 0x1ec(0x04)
	struct FRigUnit_FABRIK_WorkData WorkData; // 0x1f0(0x40)
	bool bSetEffectorTransform; // 0x230(0x01)
	char pad_231[0xf]; // 0x231(0x0f)
};

// ScriptStruct ControlRig.RigUnit_FABRIKItemArray
// Size: 0x240 (Inherited: 0x170)
struct FRigUnit_FABRIKItemArray : FRigUnit_HighlevelBaseMutable {
	struct TArray<struct FRigElementKey> Items; // 0x170(0x10)
	struct FTransform EffectorTransform; // 0x180(0x60)
	float Precision; // 0x1e0(0x04)
	float Weight; // 0x1e4(0x04)
	bool bPropagateToChildren; // 0x1e8(0x01)
	char pad_1E9[0x3]; // 0x1e9(0x03)
	int32_t MaxIterations; // 0x1ec(0x04)
	struct FRigUnit_FABRIK_WorkData WorkData; // 0x1f0(0x40)
	bool bSetEffectorTransform; // 0x230(0x01)
	char pad_231[0xf]; // 0x231(0x0f)
};

// ScriptStruct ControlRig.RigUnit_FitChainToCurve_Rotation
// Size: 0x30 (Inherited: 0x00)
struct FRigUnit_FitChainToCurve_Rotation {
	struct FQuat Rotation; // 0x00(0x20)
	float Ratio; // 0x20(0x04)
	char pad_24[0xc]; // 0x24(0x0c)
};

// ScriptStruct ControlRig.RigUnit_FitChainToCurve_DebugSettings
// Size: 0x90 (Inherited: 0x00)
struct FRigUnit_FitChainToCurve_DebugSettings {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Scale; // 0x04(0x04)
	struct FLinearColor CurveColor; // 0x08(0x10)
	struct FLinearColor SegmentsColor; // 0x18(0x10)
	char pad_28[0x8]; // 0x28(0x08)
	struct FTransform WorldOffset; // 0x30(0x60)
};

// ScriptStruct ControlRig.RigUnit_FitChainToCurve_WorkData
// Size: 0x98 (Inherited: 0x00)
struct FRigUnit_FitChainToCurve_WorkData {
	float ChainLength; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FVector> ItemPositions; // 0x08(0x10)
	struct TArray<float> ItemSegments; // 0x18(0x10)
	struct TArray<struct FVector> CurvePositions; // 0x28(0x10)
	struct TArray<float> CurveSegments; // 0x38(0x10)
	struct TArray<struct FCachedRigElement> CachedItems; // 0x48(0x10)
	struct TArray<int32_t> ItemRotationA; // 0x58(0x10)
	struct TArray<int32_t> ItemRotationB; // 0x68(0x10)
	struct TArray<float> ItemRotationT; // 0x78(0x10)
	struct TArray<struct FTransform> ItemLocalTransforms; // 0x88(0x10)
};

// ScriptStruct ControlRig.RigUnit_FitChainToCurve
// Size: 0x390 (Inherited: 0x170)
struct FRigUnit_FitChainToCurve : FRigUnit_HighlevelBaseMutable {
	struct FName StartBone; // 0x170(0x0c)
	struct FName EndBone; // 0x17c(0x0c)
	struct FRigVMFourPointBezier Bezier; // 0x188(0x60)
	enum class EControlRigCurveAlignment Alignment; // 0x1e8(0x01)
	char pad_1E9[0x3]; // 0x1e9(0x03)
	float Minimum; // 0x1ec(0x04)
	float Maximum; // 0x1f0(0x04)
	int32_t SamplingPrecision; // 0x1f4(0x04)
	struct FVector PrimaryAxis; // 0x1f8(0x18)
	struct FVector SecondaryAxis; // 0x210(0x18)
	struct FVector PoleVectorPosition; // 0x228(0x18)
	struct TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations; // 0x240(0x10)
	enum class ERigVMAnimEasingType RotationEaseType; // 0x250(0x01)
	char pad_251[0x3]; // 0x251(0x03)
	float Weight; // 0x254(0x04)
	bool bPropagateToChildren; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings; // 0x260(0x90)
	struct FRigUnit_FitChainToCurve_WorkData WorkData; // 0x2f0(0x98)
	char pad_388[0x8]; // 0x388(0x08)
};

// ScriptStruct ControlRig.RigUnit_FitChainToCurvePerItem
// Size: 0x390 (Inherited: 0x170)
struct FRigUnit_FitChainToCurvePerItem : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKeyCollection Items; // 0x170(0x10)
	struct FRigVMFourPointBezier Bezier; // 0x180(0x60)
	enum class EControlRigCurveAlignment Alignment; // 0x1e0(0x01)
	char pad_1E1[0x3]; // 0x1e1(0x03)
	float Minimum; // 0x1e4(0x04)
	float Maximum; // 0x1e8(0x04)
	int32_t SamplingPrecision; // 0x1ec(0x04)
	struct FVector PrimaryAxis; // 0x1f0(0x18)
	struct FVector SecondaryAxis; // 0x208(0x18)
	struct FVector PoleVectorPosition; // 0x220(0x18)
	struct TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations; // 0x238(0x10)
	enum class ERigVMAnimEasingType RotationEaseType; // 0x248(0x01)
	char pad_249[0x3]; // 0x249(0x03)
	float Weight; // 0x24c(0x04)
	bool bPropagateToChildren; // 0x250(0x01)
	char pad_251[0xf]; // 0x251(0x0f)
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings; // 0x260(0x90)
	struct FRigUnit_FitChainToCurve_WorkData WorkData; // 0x2f0(0x98)
	char pad_388[0x8]; // 0x388(0x08)
};

// ScriptStruct ControlRig.RigUnit_FitChainToCurveItemArray
// Size: 0x390 (Inherited: 0x170)
struct FRigUnit_FitChainToCurveItemArray : FRigUnit_HighlevelBaseMutable {
	struct TArray<struct FRigElementKey> Items; // 0x170(0x10)
	struct FRigVMFourPointBezier Bezier; // 0x180(0x60)
	enum class EControlRigCurveAlignment Alignment; // 0x1e0(0x01)
	char pad_1E1[0x3]; // 0x1e1(0x03)
	float Minimum; // 0x1e4(0x04)
	float Maximum; // 0x1e8(0x04)
	int32_t SamplingPrecision; // 0x1ec(0x04)
	struct FVector PrimaryAxis; // 0x1f0(0x18)
	struct FVector SecondaryAxis; // 0x208(0x18)
	struct FVector PoleVectorPosition; // 0x220(0x18)
	struct TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations; // 0x238(0x10)
	enum class ERigVMAnimEasingType RotationEaseType; // 0x248(0x01)
	char pad_249[0x3]; // 0x249(0x03)
	float Weight; // 0x24c(0x04)
	bool bPropagateToChildren; // 0x250(0x01)
	char pad_251[0xf]; // 0x251(0x0f)
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings; // 0x260(0x90)
	struct FRigUnit_FitChainToCurve_WorkData WorkData; // 0x2f0(0x98)
	char pad_388[0x8]; // 0x388(0x08)
};

// ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms_PerBone
// Size: 0x70 (Inherited: 0x00)
struct FRigUnit_ModifyBoneTransforms_PerBone {
	struct FName bone; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FTransform Transform; // 0x10(0x60)
};

// ScriptStruct ControlRig.RigUnit_ModifyTransforms_WorkData
// Size: 0x10 (Inherited: 0x00)
struct FRigUnit_ModifyTransforms_WorkData {
	struct TArray<struct FCachedRigElement> CachedItems; // 0x00(0x10)
};

// ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms_WorkData
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_ModifyBoneTransforms_WorkData : FRigUnit_ModifyTransforms_WorkData {
};

// ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms
// Size: 0x1a0 (Inherited: 0x170)
struct FRigUnit_ModifyBoneTransforms : FRigUnit_HighlevelBaseMutable {
	struct TArray<struct FRigUnit_ModifyBoneTransforms_PerBone> BoneToModify; // 0x170(0x10)
	float Weight; // 0x180(0x04)
	float WeightMinimum; // 0x184(0x04)
	float WeightMaximum; // 0x188(0x04)
	enum class EControlRigModifyBoneMode Mode; // 0x18c(0x01)
	char pad_18D[0x3]; // 0x18d(0x03)
	struct FRigUnit_ModifyBoneTransforms_WorkData WorkData; // 0x190(0x10)
};

// ScriptStruct ControlRig.RigUnit_ModifyTransforms_PerItem
// Size: 0x70 (Inherited: 0x00)
struct FRigUnit_ModifyTransforms_PerItem {
	struct FRigElementKey Item; // 0x00(0x10)
	struct FTransform Transform; // 0x10(0x60)
};

// ScriptStruct ControlRig.RigUnit_ModifyTransforms
// Size: 0x1a0 (Inherited: 0x170)
struct FRigUnit_ModifyTransforms : FRigUnit_HighlevelBaseMutable {
	struct TArray<struct FRigUnit_ModifyTransforms_PerItem> ItemToModify; // 0x170(0x10)
	float Weight; // 0x180(0x04)
	float WeightMinimum; // 0x184(0x04)
	float WeightMaximum; // 0x188(0x04)
	enum class EControlRigModifyBoneMode Mode; // 0x18c(0x01)
	char pad_18D[0x3]; // 0x18d(0x03)
	struct FRigUnit_ModifyTransforms_WorkData WorkData; // 0x190(0x10)
};

// ScriptStruct ControlRig.RigUnit_MultiFABRIK_WorkData
// Size: 0x68 (Inherited: 0x00)
struct FRigUnit_MultiFABRIK_WorkData {
	char pad_0[0x68]; // 0x00(0x68)
};

// ScriptStruct ControlRig.RigUnit_MultiFABRIK_EndEffector
// Size: 0x28 (Inherited: 0x00)
struct FRigUnit_MultiFABRIK_EndEffector {
	struct FName bone; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FVector Location; // 0x10(0x18)
};

// ScriptStruct ControlRig.RigUnit_MultiFABRIK
// Size: 0x210 (Inherited: 0x170)
struct FRigUnit_MultiFABRIK : FRigUnit_HighlevelBaseMutable {
	struct FName RootBone; // 0x170(0x0c)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct TArray<struct FRigUnit_MultiFABRIK_EndEffector> Effectors; // 0x180(0x10)
	float Precision; // 0x190(0x04)
	bool bPropagateToChildren; // 0x194(0x01)
	char pad_195[0x3]; // 0x195(0x03)
	int32_t MaxIterations; // 0x198(0x04)
	char pad_19C[0x4]; // 0x19c(0x04)
	struct FRigUnit_MultiFABRIK_WorkData WorkData; // 0x1a0(0x68)
	bool bIsInitialized; // 0x208(0x01)
	char pad_209[0x7]; // 0x209(0x07)
};

// ScriptStruct ControlRig.RigUnit_SlideChain_WorkData
// Size: 0x48 (Inherited: 0x00)
struct FRigUnit_SlideChain_WorkData {
	float ChainLength; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<float> ItemSegments; // 0x08(0x10)
	struct TArray<struct FCachedRigElement> CachedItems; // 0x18(0x10)
	struct TArray<struct FTransform> Transforms; // 0x28(0x10)
	struct TArray<struct FTransform> BlendedTransforms; // 0x38(0x10)
};

// ScriptStruct ControlRig.RigUnit_SlideChain
// Size: 0x1e0 (Inherited: 0x170)
struct FRigUnit_SlideChain : FRigUnit_HighlevelBaseMutable {
	struct FName StartBone; // 0x170(0x0c)
	struct FName EndBone; // 0x17c(0x0c)
	float SlideAmount; // 0x188(0x04)
	bool bPropagateToChildren; // 0x18c(0x01)
	char pad_18D[0x3]; // 0x18d(0x03)
	struct FRigUnit_SlideChain_WorkData WorkData; // 0x190(0x48)
	char pad_1D8[0x8]; // 0x1d8(0x08)
};

// ScriptStruct ControlRig.RigUnit_SlideChainPerItem
// Size: 0x1d0 (Inherited: 0x170)
struct FRigUnit_SlideChainPerItem : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKeyCollection Items; // 0x170(0x10)
	float SlideAmount; // 0x180(0x04)
	bool bPropagateToChildren; // 0x184(0x01)
	char pad_185[0x3]; // 0x185(0x03)
	struct FRigUnit_SlideChain_WorkData WorkData; // 0x188(0x48)
};

// ScriptStruct ControlRig.RigUnit_SlideChainItemArray
// Size: 0x1d0 (Inherited: 0x170)
struct FRigUnit_SlideChainItemArray : FRigUnit_HighlevelBaseMutable {
	struct TArray<struct FRigElementKey> Items; // 0x170(0x10)
	float SlideAmount; // 0x180(0x04)
	bool bPropagateToChildren; // 0x184(0x01)
	char pad_185[0x3]; // 0x185(0x03)
	struct FRigUnit_SlideChain_WorkData WorkData; // 0x188(0x48)
};

// ScriptStruct ControlRig.RegionScaleFactors
// Size: 0x10 (Inherited: 0x00)
struct FRegionScaleFactors {
	float PositiveWidth; // 0x00(0x04)
	float NegativeWidth; // 0x04(0x04)
	float PositiveHeight; // 0x08(0x04)
	float NegativeHeight; // 0x0c(0x04)
};

// ScriptStruct ControlRig.SphericalRegion
// Size: 0x14 (Inherited: 0x00)
struct FSphericalRegion {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct ControlRig.SphericalPoseReaderDebugSettings
// Size: 0x10 (Inherited: 0x00)
struct FSphericalPoseReaderDebugSettings {
	bool bDrawDebug; // 0x00(0x01)
	bool bDraw2D; // 0x01(0x01)
	bool bDrawLocalAxes; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float DebugScale; // 0x04(0x04)
	int32_t DebugSegments; // 0x08(0x04)
	float DebugThickness; // 0x0c(0x04)
};

// ScriptStruct ControlRig.RigUnit_SphericalPoseReader
// Size: 0x320 (Inherited: 0x170)
struct FRigUnit_SphericalPoseReader : FRigUnit_HighlevelBaseMutable {
	float OutputParam; // 0x170(0x04)
	struct FRigElementKey DriverItem; // 0x174(0x10)
	char pad_184[0x4]; // 0x184(0x04)
	struct FVector DriverAxis; // 0x188(0x18)
	struct FVector RotationOffset; // 0x1a0(0x18)
	float ActiveRegionSize; // 0x1b8(0x04)
	struct FRegionScaleFactors ActiveRegionScaleFactors; // 0x1bc(0x10)
	float FalloffSize; // 0x1cc(0x04)
	struct FRegionScaleFactors FalloffRegionScaleFactors; // 0x1d0(0x10)
	bool FlipWidthScaling; // 0x1e0(0x01)
	bool FlipHeightScaling; // 0x1e1(0x01)
	char pad_1E2[0x2]; // 0x1e2(0x02)
	struct FRigElementKey OptionalParentItem; // 0x1e4(0x10)
	struct FSphericalPoseReaderDebugSettings Debug; // 0x1f4(0x10)
	struct FSphericalRegion InnerRegion; // 0x204(0x14)
	struct FSphericalRegion OuterRegion; // 0x218(0x14)
	char pad_22C[0x4]; // 0x22c(0x04)
	struct FVector DriverNormal; // 0x230(0x18)
	struct FVector Driver2D; // 0x248(0x18)
	struct FCachedRigElement DriverCache; // 0x260(0x20)
	struct FCachedRigElement OptionalParentCache; // 0x280(0x20)
	struct FTransform LocalDriverTransformInit; // 0x2a0(0x60)
	struct FVector CachedRotationOffset; // 0x300(0x18)
	bool bCachedInitTransforms; // 0x318(0x01)
	char pad_319[0x7]; // 0x319(0x07)
};

// ScriptStruct ControlRig.RigUnit_SpringIK_DebugSettings
// Size: 0x80 (Inherited: 0x00)
struct FRigUnit_SpringIK_DebugSettings {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Scale; // 0x04(0x04)
	struct FLinearColor Color; // 0x08(0x10)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform WorldOffset; // 0x20(0x60)
};

// ScriptStruct ControlRig.RigUnit_SpringIK_WorkData
// Size: 0xb8 (Inherited: 0x00)
struct FRigUnit_SpringIK_WorkData {
	struct TArray<struct FCachedRigElement> CachedBones; // 0x00(0x10)
	struct FCachedRigElement CachedPoleVector; // 0x10(0x20)
	struct TArray<struct FTransform> Transforms; // 0x30(0x10)
	struct FCRSimPointContainer Simulation; // 0x40(0x78)
};

// ScriptStruct ControlRig.RigUnit_SpringIK
// Size: 0x350 (Inherited: 0x170)
struct FRigUnit_SpringIK : FRigUnit_HighlevelBaseMutable {
	struct FName StartBone; // 0x170(0x0c)
	struct FName EndBone; // 0x17c(0x0c)
	float HierarchyStrength; // 0x188(0x04)
	float EffectorStrength; // 0x18c(0x04)
	float EffectorRatio; // 0x190(0x04)
	float RootStrength; // 0x194(0x04)
	float RootRatio; // 0x198(0x04)
	float Damping; // 0x19c(0x04)
	struct FVector PoleVector; // 0x1a0(0x18)
	bool bFlipPolePlane; // 0x1b8(0x01)
	enum class EControlRigVectorKind PoleVectorKind; // 0x1b9(0x01)
	char pad_1BA[0x2]; // 0x1ba(0x02)
	struct FName PoleVectorSpace; // 0x1bc(0x0c)
	struct FVector PrimaryAxis; // 0x1c8(0x18)
	struct FVector SecondaryAxis; // 0x1e0(0x18)
	bool bLiveSimulation; // 0x1f8(0x01)
	char pad_1F9[0x3]; // 0x1f9(0x03)
	int32_t Iterations; // 0x1fc(0x04)
	bool bLimitLocalPosition; // 0x200(0x01)
	bool bPropagateToChildren; // 0x201(0x01)
	char pad_202[0xe]; // 0x202(0x0e)
	struct FRigUnit_SpringIK_DebugSettings DebugSettings; // 0x210(0x80)
	struct FRigUnit_SpringIK_WorkData WorkData; // 0x290(0xb8)
	char pad_348[0x8]; // 0x348(0x08)
};

// ScriptStruct ControlRig.ConstraintTarget
// Size: 0x70 (Inherited: 0x00)
struct FConstraintTarget {
	struct FTransform Transform; // 0x00(0x60)
	float Weight; // 0x60(0x04)
	bool bMaintainOffset; // 0x64(0x01)
	struct FTransformFilter Filter; // 0x65(0x09)
	char pad_6E[0x2]; // 0x6e(0x02)
};

// ScriptStruct ControlRig.RigUnit_TransformConstraint_WorkData
// Size: 0x60 (Inherited: 0x00)
struct FRigUnit_TransformConstraint_WorkData {
	struct TArray<struct FConstraintData> ConstraintData; // 0x00(0x10)
	struct TMap<int32_t, int32_t> ConstraintDataToTargets; // 0x10(0x50)
};

// ScriptStruct ControlRig.RigUnit_TransformConstraint
// Size: 0x270 (Inherited: 0x170)
struct FRigUnit_TransformConstraint : FRigUnit_HighlevelBaseMutable {
	struct FName bone; // 0x170(0x0c)
	enum class ETransformSpaceMode BaseTransformSpace; // 0x17c(0x01)
	char pad_17D[0x3]; // 0x17d(0x03)
	struct FTransform BaseTransform; // 0x180(0x60)
	struct FName BaseBone; // 0x1e0(0x0c)
	char pad_1EC[0x4]; // 0x1ec(0x04)
	struct TArray<struct FConstraintTarget> Targets; // 0x1f0(0x10)
	bool bUseInitialTransforms; // 0x200(0x01)
	char pad_201[0x7]; // 0x201(0x07)
	struct FRigUnit_TransformConstraint_WorkData WorkData; // 0x208(0x60)
	char pad_268[0x8]; // 0x268(0x08)
};

// ScriptStruct ControlRig.RigUnit_TransformConstraintPerItem
// Size: 0x280 (Inherited: 0x170)
struct FRigUnit_TransformConstraintPerItem : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKey Item; // 0x170(0x10)
	enum class ETransformSpaceMode BaseTransformSpace; // 0x180(0x01)
	char pad_181[0xf]; // 0x181(0x0f)
	struct FTransform BaseTransform; // 0x190(0x60)
	struct FRigElementKey BaseItem; // 0x1f0(0x10)
	struct TArray<struct FConstraintTarget> Targets; // 0x200(0x10)
	bool bUseInitialTransforms; // 0x210(0x01)
	char pad_211[0x7]; // 0x211(0x07)
	struct FRigUnit_TransformConstraint_WorkData WorkData; // 0x218(0x60)
	char pad_278[0x8]; // 0x278(0x08)
};

// ScriptStruct ControlRig.RigUnit_ParentConstraint_AdvancedSettings
// Size: 0x02 (Inherited: 0x00)
struct FRigUnit_ParentConstraint_AdvancedSettings {
	enum class EConstraintInterpType InterpolationType; // 0x00(0x01)
	enum class EEulerRotationOrder RotationOrderForFilter; // 0x01(0x01)
};

// ScriptStruct ControlRig.RigUnit_ParentConstraint
// Size: 0x1e0 (Inherited: 0x170)
struct FRigUnit_ParentConstraint : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKey Child; // 0x170(0x10)
	bool bMaintainOffset; // 0x180(0x01)
	struct FTransformFilter Filter; // 0x181(0x09)
	char pad_18A[0x6]; // 0x18a(0x06)
	struct TArray<struct FConstraintParent> Parents; // 0x190(0x10)
	struct FRigUnit_ParentConstraint_AdvancedSettings AdvancedSettings; // 0x1a0(0x02)
	char pad_1A2[0x2]; // 0x1a2(0x02)
	float Weight; // 0x1a4(0x04)
	struct FCachedRigElement ChildCache; // 0x1a8(0x20)
	struct TArray<struct FCachedRigElement> ParentCaches; // 0x1c8(0x10)
	char pad_1D8[0x8]; // 0x1d8(0x08)
};

// ScriptStruct ControlRig.RigUnit_PositionConstraint
// Size: 0x1a0 (Inherited: 0x170)
struct FRigUnit_PositionConstraint : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKey Child; // 0x170(0x10)
	bool bMaintainOffset; // 0x180(0x01)
	struct FFilterOptionPerAxis Filter; // 0x181(0x03)
	char pad_184[0x4]; // 0x184(0x04)
	struct TArray<struct FConstraintParent> Parents; // 0x188(0x10)
	float Weight; // 0x198(0x04)
	char pad_19C[0x4]; // 0x19c(0x04)
};

// ScriptStruct ControlRig.RigUnit_PositionConstraintLocalSpaceOffset
// Size: 0x1d0 (Inherited: 0x170)
struct FRigUnit_PositionConstraintLocalSpaceOffset : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKey Child; // 0x170(0x10)
	bool bMaintainOffset; // 0x180(0x01)
	struct FFilterOptionPerAxis Filter; // 0x181(0x03)
	char pad_184[0x4]; // 0x184(0x04)
	struct TArray<struct FConstraintParent> Parents; // 0x188(0x10)
	float Weight; // 0x198(0x04)
	char pad_19C[0x4]; // 0x19c(0x04)
	struct FCachedRigElement ChildCache; // 0x1a0(0x20)
	struct TArray<struct FCachedRigElement> ParentCaches; // 0x1c0(0x10)
};

// ScriptStruct ControlRig.RigUnit_RotationConstraint_AdvancedSettings
// Size: 0x02 (Inherited: 0x00)
struct FRigUnit_RotationConstraint_AdvancedSettings {
	enum class EConstraintInterpType InterpolationType; // 0x00(0x01)
	enum class EEulerRotationOrder RotationOrderForFilter; // 0x01(0x01)
};

// ScriptStruct ControlRig.RigUnit_RotationConstraint
// Size: 0x1a0 (Inherited: 0x170)
struct FRigUnit_RotationConstraint : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKey Child; // 0x170(0x10)
	bool bMaintainOffset; // 0x180(0x01)
	struct FFilterOptionPerAxis Filter; // 0x181(0x03)
	char pad_184[0x4]; // 0x184(0x04)
	struct TArray<struct FConstraintParent> Parents; // 0x188(0x10)
	struct FRigUnit_RotationConstraint_AdvancedSettings AdvancedSettings; // 0x198(0x02)
	char pad_19A[0x2]; // 0x19a(0x02)
	float Weight; // 0x19c(0x04)
};

// ScriptStruct ControlRig.RigUnit_RotationConstraintLocalSpaceOffset
// Size: 0x1d0 (Inherited: 0x170)
struct FRigUnit_RotationConstraintLocalSpaceOffset : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKey Child; // 0x170(0x10)
	bool bMaintainOffset; // 0x180(0x01)
	struct FFilterOptionPerAxis Filter; // 0x181(0x03)
	char pad_184[0x4]; // 0x184(0x04)
	struct TArray<struct FConstraintParent> Parents; // 0x188(0x10)
	struct FRigUnit_RotationConstraint_AdvancedSettings AdvancedSettings; // 0x198(0x02)
	char pad_19A[0x2]; // 0x19a(0x02)
	float Weight; // 0x19c(0x04)
	struct FCachedRigElement ChildCache; // 0x1a0(0x20)
	struct TArray<struct FCachedRigElement> ParentCaches; // 0x1c0(0x10)
};

// ScriptStruct ControlRig.RigUnit_ScaleConstraint
// Size: 0x1a0 (Inherited: 0x170)
struct FRigUnit_ScaleConstraint : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKey Child; // 0x170(0x10)
	bool bMaintainOffset; // 0x180(0x01)
	struct FFilterOptionPerAxis Filter; // 0x181(0x03)
	char pad_184[0x4]; // 0x184(0x04)
	struct TArray<struct FConstraintParent> Parents; // 0x188(0x10)
	float Weight; // 0x198(0x04)
	char pad_19C[0x4]; // 0x19c(0x04)
};

// ScriptStruct ControlRig.RigUnit_ScaleConstraintLocalSpaceOffset
// Size: 0x1d0 (Inherited: 0x170)
struct FRigUnit_ScaleConstraintLocalSpaceOffset : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKey Child; // 0x170(0x10)
	bool bMaintainOffset; // 0x180(0x01)
	struct FFilterOptionPerAxis Filter; // 0x181(0x03)
	char pad_184[0x4]; // 0x184(0x04)
	struct TArray<struct FConstraintParent> Parents; // 0x188(0x10)
	float Weight; // 0x198(0x04)
	char pad_19C[0x4]; // 0x19c(0x04)
	struct FCachedRigElement ChildCache; // 0x1a0(0x20)
	struct TArray<struct FCachedRigElement> ParentCaches; // 0x1c0(0x10)
};

// ScriptStruct ControlRig.RigUnit_TwistBones_WorkData
// Size: 0x30 (Inherited: 0x00)
struct FRigUnit_TwistBones_WorkData {
	struct TArray<struct FCachedRigElement> CachedItems; // 0x00(0x10)
	struct TArray<float> ItemRatios; // 0x10(0x10)
	struct TArray<struct FTransform> ItemTransforms; // 0x20(0x10)
};

// ScriptStruct ControlRig.RigUnit_TwistBones
// Size: 0x200 (Inherited: 0x170)
struct FRigUnit_TwistBones : FRigUnit_HighlevelBaseMutable {
	struct FName StartBone; // 0x170(0x0c)
	struct FName EndBone; // 0x17c(0x0c)
	struct FVector TwistAxis; // 0x188(0x18)
	struct FVector PoleAxis; // 0x1a0(0x18)
	enum class ERigVMAnimEasingType TwistEaseType; // 0x1b8(0x01)
	char pad_1B9[0x3]; // 0x1b9(0x03)
	float Weight; // 0x1bc(0x04)
	bool bPropagateToChildren; // 0x1c0(0x01)
	char pad_1C1[0x7]; // 0x1c1(0x07)
	struct FRigUnit_TwistBones_WorkData WorkData; // 0x1c8(0x30)
	char pad_1F8[0x8]; // 0x1f8(0x08)
};

// ScriptStruct ControlRig.RigUnit_TwistBonesPerItem
// Size: 0x1f0 (Inherited: 0x170)
struct FRigUnit_TwistBonesPerItem : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKeyCollection Items; // 0x170(0x10)
	struct FVector TwistAxis; // 0x180(0x18)
	struct FVector PoleAxis; // 0x198(0x18)
	enum class ERigVMAnimEasingType TwistEaseType; // 0x1b0(0x01)
	char pad_1B1[0x3]; // 0x1b1(0x03)
	float Weight; // 0x1b4(0x04)
	bool bPropagateToChildren; // 0x1b8(0x01)
	char pad_1B9[0x7]; // 0x1b9(0x07)
	struct FRigUnit_TwistBones_WorkData WorkData; // 0x1c0(0x30)
};

// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimple_DebugSettings
// Size: 0x70 (Inherited: 0x00)
struct FRigUnit_TwoBoneIKSimple_DebugSettings {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Scale; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform WorldOffset; // 0x10(0x60)
};

// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimple
// Size: 0x370 (Inherited: 0x170)
struct FRigUnit_TwoBoneIKSimple : FRigUnit_HighlevelBaseMutable {
	struct FName BoneA; // 0x170(0x0c)
	struct FName BoneB; // 0x17c(0x0c)
	struct FName EffectorBone; // 0x188(0x0c)
	char pad_194[0xc]; // 0x194(0x0c)
	struct FTransform Effector; // 0x1a0(0x60)
	struct FVector PrimaryAxis; // 0x200(0x18)
	struct FVector SecondaryAxis; // 0x218(0x18)
	float SecondaryAxisWeight; // 0x230(0x04)
	char pad_234[0x4]; // 0x234(0x04)
	struct FVector PoleVector; // 0x238(0x18)
	enum class EControlRigVectorKind PoleVectorKind; // 0x250(0x01)
	char pad_251[0x3]; // 0x251(0x03)
	struct FName PoleVectorSpace; // 0x254(0x0c)
	bool bEnableStretch; // 0x260(0x01)
	char pad_261[0x3]; // 0x261(0x03)
	float StretchStartRatio; // 0x264(0x04)
	float StretchMaximumRatio; // 0x268(0x04)
	float Weight; // 0x26c(0x04)
	float BoneALength; // 0x270(0x04)
	float BoneBLength; // 0x274(0x04)
	bool bPropagateToChildren; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
	struct FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings; // 0x280(0x70)
	struct FCachedRigElement CachedBoneAIndex; // 0x2f0(0x20)
	struct FCachedRigElement CachedBoneBIndex; // 0x310(0x20)
	struct FCachedRigElement CachedEffectorBoneIndex; // 0x330(0x20)
	struct FCachedRigElement CachedPoleVectorSpaceIndex; // 0x350(0x20)
};

// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimplePerItem
// Size: 0x370 (Inherited: 0x170)
struct FRigUnit_TwoBoneIKSimplePerItem : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKey ItemA; // 0x170(0x10)
	struct FRigElementKey ItemB; // 0x180(0x10)
	struct FRigElementKey EffectorItem; // 0x190(0x10)
	struct FTransform Effector; // 0x1a0(0x60)
	struct FVector PrimaryAxis; // 0x200(0x18)
	struct FVector SecondaryAxis; // 0x218(0x18)
	float SecondaryAxisWeight; // 0x230(0x04)
	char pad_234[0x4]; // 0x234(0x04)
	struct FVector PoleVector; // 0x238(0x18)
	enum class EControlRigVectorKind PoleVectorKind; // 0x250(0x01)
	char pad_251[0x3]; // 0x251(0x03)
	struct FRigElementKey PoleVectorSpace; // 0x254(0x10)
	bool bEnableStretch; // 0x264(0x01)
	char pad_265[0x3]; // 0x265(0x03)
	float StretchStartRatio; // 0x268(0x04)
	float StretchMaximumRatio; // 0x26c(0x04)
	float Weight; // 0x270(0x04)
	float ItemALength; // 0x274(0x04)
	float ItemBLength; // 0x278(0x04)
	bool bPropagateToChildren; // 0x27c(0x01)
	char pad_27D[0x3]; // 0x27d(0x03)
	struct FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings; // 0x280(0x70)
	struct FCachedRigElement CachedItemAIndex; // 0x2f0(0x20)
	struct FCachedRigElement CachedItemBIndex; // 0x310(0x20)
	struct FCachedRigElement CachedEffectorItemIndex; // 0x330(0x20)
	struct FCachedRigElement CachedPoleVectorSpaceIndex; // 0x350(0x20)
};

// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimpleVectors
// Size: 0x80 (Inherited: 0x08)
struct FRigUnit_TwoBoneIKSimpleVectors : FRigUnit_HighlevelBase {
	struct FVector Root; // 0x08(0x18)
	struct FVector PoleVector; // 0x20(0x18)
	struct FVector Effector; // 0x38(0x18)
	bool bEnableStretch; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float StretchStartRatio; // 0x54(0x04)
	float StretchMaximumRatio; // 0x58(0x04)
	float BoneALength; // 0x5c(0x04)
	float BoneBLength; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FVector Elbow; // 0x68(0x18)
};

// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimpleTransforms
// Size: 0x1a0 (Inherited: 0x08)
struct FRigUnit_TwoBoneIKSimpleTransforms : FRigUnit_HighlevelBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Root; // 0x10(0x60)
	struct FVector PoleVector; // 0x70(0x18)
	char pad_88[0x8]; // 0x88(0x08)
	struct FTransform Effector; // 0x90(0x60)
	struct FVector PrimaryAxis; // 0xf0(0x18)
	struct FVector SecondaryAxis; // 0x108(0x18)
	float SecondaryAxisWeight; // 0x120(0x04)
	bool bEnableStretch; // 0x124(0x01)
	char pad_125[0x3]; // 0x125(0x03)
	float StretchStartRatio; // 0x128(0x04)
	float StretchMaximumRatio; // 0x12c(0x04)
	float BoneALength; // 0x130(0x04)
	float BoneBLength; // 0x134(0x04)
	char pad_138[0x8]; // 0x138(0x08)
	struct FTransform Elbow; // 0x140(0x60)
};

// ScriptStruct ControlRig.RigUnit_PointSimulation_DebugSettings
// Size: 0x80 (Inherited: 0x00)
struct FRigUnit_PointSimulation_DebugSettings {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Scale; // 0x04(0x04)
	float CollisionScale; // 0x08(0x04)
	bool bDrawPointsAsSpheres; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FLinearColor Color; // 0x10(0x10)
	struct FTransform WorldOffset; // 0x20(0x60)
};

// ScriptStruct ControlRig.RigUnit_PointSimulation_BoneTarget
// Size: 0x18 (Inherited: 0x00)
struct FRigUnit_PointSimulation_BoneTarget {
	struct FName bone; // 0x00(0x0c)
	int32_t TranslationPoint; // 0x0c(0x04)
	int32_t PrimaryAimPoint; // 0x10(0x04)
	int32_t SecondaryAimPoint; // 0x14(0x04)
};

// ScriptStruct ControlRig.RigUnit_PointSimulation_WorkData
// Size: 0x88 (Inherited: 0x00)
struct FRigUnit_PointSimulation_WorkData {
	struct FCRSimPointContainer Simulation; // 0x00(0x78)
	struct TArray<struct FCachedRigElement> BoneIndices; // 0x78(0x10)
};

// ScriptStruct ControlRig.RigUnit_PointSimulation
// Size: 0x320 (Inherited: 0x110)
struct FRigUnit_PointSimulation : FRigVMFunction_SimBaseMutable {
	struct TArray<struct FRigVMSimPoint> Points; // 0x110(0x10)
	struct TArray<struct FCRSimLinearSpring> Links; // 0x120(0x10)
	struct TArray<struct FCRSimPointForce> Forces; // 0x130(0x10)
	struct TArray<struct FCRSimSoftCollision> CollisionVolumes; // 0x140(0x10)
	float SimulatedStepsPerSecond; // 0x150(0x04)
	enum class ERigVMSimPointIntegrateType IntegratorType; // 0x154(0x01)
	char pad_155[0x3]; // 0x155(0x03)
	float VerletBlend; // 0x158(0x04)
	char pad_15C[0x4]; // 0x15c(0x04)
	struct TArray<struct FRigUnit_PointSimulation_BoneTarget> BoneTargets; // 0x160(0x10)
	bool bLimitLocalPosition; // 0x170(0x01)
	bool bPropagateToChildren; // 0x171(0x01)
	char pad_172[0x6]; // 0x172(0x06)
	struct FVector PrimaryAimAxis; // 0x178(0x18)
	struct FVector SecondaryAimAxis; // 0x190(0x18)
	char pad_1A8[0x8]; // 0x1a8(0x08)
	struct FRigUnit_PointSimulation_DebugSettings DebugSettings; // 0x1b0(0x80)
	struct FRigVMFourPointBezier Bezier; // 0x230(0x60)
	struct FRigUnit_PointSimulation_WorkData WorkData; // 0x290(0x88)
	char pad_318[0x8]; // 0x318(0x08)
};

// ScriptStruct ControlRig.RigUnit_SpringInterp
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_SpringInterp : FRigVMFunction_SimBase {
	float Current; // 0x08(0x04)
	float Target; // 0x0c(0x04)
	float Stiffness; // 0x10(0x04)
	float CriticalDamping; // 0x14(0x04)
	float Mass; // 0x18(0x04)
	float Result; // 0x1c(0x04)
	struct FFloatSpringState SpringState; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct ControlRig.RigUnit_SpringInterpVector
// Size: 0x98 (Inherited: 0x08)
struct FRigUnit_SpringInterpVector : FRigVMFunction_SimBase {
	struct FVector Current; // 0x08(0x18)
	struct FVector Target; // 0x20(0x18)
	float Stiffness; // 0x38(0x04)
	float CriticalDamping; // 0x3c(0x04)
	float Mass; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FVector Result; // 0x48(0x18)
	struct FVectorSpringState SpringState; // 0x60(0x38)
};

// ScriptStruct ControlRig.RigUnit_SpringInterpV2
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_SpringInterpV2 : FRigVMFunction_SimBase {
	float Target; // 0x08(0x04)
	float Strength; // 0x0c(0x04)
	float CriticalDamping; // 0x10(0x04)
	float Force; // 0x14(0x04)
	bool bUseCurrentInput; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float Current; // 0x1c(0x04)
	float TargetVelocityAmount; // 0x20(0x04)
	bool bInitializeFromTarget; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float Result; // 0x28(0x04)
	float Velocity; // 0x2c(0x04)
	float SimulatedResult; // 0x30(0x04)
	struct FFloatSpringState SpringState; // 0x34(0x0c)
};

// ScriptStruct ControlRig.RigUnit_SpringInterpVectorV2
// Size: 0xe8 (Inherited: 0x08)
struct FRigUnit_SpringInterpVectorV2 : FRigVMFunction_SimBase {
	struct FVector Target; // 0x08(0x18)
	float Strength; // 0x20(0x04)
	float CriticalDamping; // 0x24(0x04)
	struct FVector Force; // 0x28(0x18)
	bool bUseCurrentInput; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FVector Current; // 0x48(0x18)
	float TargetVelocityAmount; // 0x60(0x04)
	bool bInitializeFromTarget; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct FVector Result; // 0x68(0x18)
	struct FVector Velocity; // 0x80(0x18)
	struct FVector SimulatedResult; // 0x98(0x18)
	struct FVectorSpringState SpringState; // 0xb0(0x38)
};

// ScriptStruct ControlRig.RigUnit_SpringInterpQuaternionV2
// Size: 0x130 (Inherited: 0x08)
struct FRigUnit_SpringInterpQuaternionV2 : FRigVMFunction_SimBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Target; // 0x10(0x20)
	float Strength; // 0x30(0x04)
	float CriticalDamping; // 0x34(0x04)
	struct FVector Torque; // 0x38(0x18)
	bool bUseCurrentInput; // 0x50(0x01)
	char pad_51[0xf]; // 0x51(0x0f)
	struct FQuat Current; // 0x60(0x20)
	float TargetVelocityAmount; // 0x80(0x04)
	bool bInitializeFromTarget; // 0x84(0x01)
	char pad_85[0xb]; // 0x85(0x0b)
	struct FQuat Result; // 0x90(0x20)
	struct FVector AngularVelocity; // 0xb0(0x18)
	char pad_C8[0x8]; // 0xc8(0x08)
	struct FQuat SimulatedResult; // 0xd0(0x20)
	struct FQuaternionSpringState SpringState; // 0xf0(0x40)
};

