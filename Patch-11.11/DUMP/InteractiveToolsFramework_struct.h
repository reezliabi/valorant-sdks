// Enum InteractiveToolsFramework.EGizmoElementState
enum class EGizmoElementState : uint8 {
	None = 0,
	Visible = 2,
	Hittable = 4,
	VisibleAndHittable = 6,
	EGizmoElementState_MAX = 7
};

// Enum InteractiveToolsFramework.EGizmoElementInteractionState
enum class EGizmoElementInteractionState : uint8 {
	None = 0,
	Hovering = 1,
	Interacting = 2,
	EGizmoElementInteractionState_MAX = 3
};

// Enum InteractiveToolsFramework.EGizmoElementViewDependentType
enum class EGizmoElementViewDependentType : uint8 {
	None = 0,
	Axis = 1,
	Plane = 2,
	EGizmoElementViewDependentType_MAX = 3
};

// Enum InteractiveToolsFramework.EGizmoElementViewAlignType
enum class EGizmoElementViewAlignType : uint8 {
	None = 0,
	PointOnly = 1,
	PointEye = 2,
	PointScreen = 3,
	Axial = 4,
	EGizmoElementViewAlignType_MAX = 5
};

// Enum InteractiveToolsFramework.EGizmoElementPartialType
enum class EGizmoElementPartialType : uint8 {
	None = 0,
	Partial = 1,
	PartialViewDependent = 2,
	EGizmoElementPartialType_MAX = 3
};

// Enum InteractiveToolsFramework.EStandardToolContextMaterials
enum class EStandardToolContextMaterials : uint8 {
	VertexColorMaterial = 1,
	EStandardToolContextMaterials_MAX = 2
};

// Enum InteractiveToolsFramework.EToolContextCoordinateSystem
enum class EToolContextCoordinateSystem : uint8 {
	World = 0,
	Local = 1,
	EToolContextCoordinateSystem_MAX = 2
};

// Enum InteractiveToolsFramework.EToolContextTransformGizmoMode
enum class EToolContextTransformGizmoMode : uint8 {
	NoGizmo = 0,
	Translation = 1,
	Rotation = 2,
	Scale = 3,
	Combined = 8,
	EToolContextTransformGizmoMode_MAX = 9
};

// Enum InteractiveToolsFramework.EToolMessageLevel
enum class EToolMessageLevel : uint8 {
	Internal = 0,
	UserMessage = 1,
	UserNotification = 2,
	UserWarning = 3,
	UserError = 4,
	EToolMessageLevel_MAX = 5
};

// Enum InteractiveToolsFramework.ESelectedObjectsModificationType
enum class ESelectedObjectsModificationType : uint8 {
	Replace = 0,
	Add = 1,
	Remove = 2,
	Clear = 3,
	ESelectedObjectsModificationType_MAX = 4
};

// Enum InteractiveToolsFramework.EViewInteractionState
enum class EViewInteractionState : uint8 {
	None = 0,
	Hovered = 1,
	Focused = 2,
	EViewInteractionState_MAX = 3
};

// Enum InteractiveToolsFramework.EGizmoElementArrowHeadType
enum class EGizmoElementArrowHeadType : uint8 {
	Cone = 0,
	Cube = 1,
	EGizmoElementArrowHeadType_MAX = 2
};

// Enum InteractiveToolsFramework.EInputCaptureSide
enum class EInputCaptureSide : uint8 {
	None = 0,
	Left = 1,
	Right = 2,
	Both = 3,
	Any = 99,
	EInputCaptureSide_MAX = 100
};

// Enum InteractiveToolsFramework.EInputCaptureRequestType
enum class EInputCaptureRequestType : uint8 {
	Begin = 1,
	Ignore = 2,
	EInputCaptureRequestType_MAX = 3
};

// Enum InteractiveToolsFramework.EInputCaptureState
enum class EInputCaptureState : uint8 {
	Begin = 1,
	Continue = 2,
	End = 3,
	Ignore = 4,
	EInputCaptureState_MAX = 5
};

// Enum InteractiveToolsFramework.EInputDevices
enum class EInputDevices : int32 {
	None = 0,
	Keyboard = 1,
	Mouse = 2,
	Gamepad = 4,
	OculusTouch = 8,
	HTCViveWands = 16,
	AnySpatialDevice = 24,
	TabletFingers = 1024,
	EInputDevices_MAX = 1025
};

// Enum InteractiveToolsFramework.ETransformGizmoSubElements
enum class ETransformGizmoSubElements : int32 {
	None = 0,
	TranslateAxisX = 2,
	TranslateAxisY = 4,
	TranslateAxisZ = 8,
	TranslateAllAxes = 14,
	TranslatePlaneXY = 16,
	TranslatePlaneXZ = 32,
	TranslatePlaneYZ = 64,
	TranslateAllPlanes = 112,
	RotateAxisX = 128,
	RotateAxisY = 256,
	RotateAxisZ = 512,
	RotateAllAxes = 896,
	ScaleAxisX = 1024,
	ScaleAxisY = 2048,
	ScaleAxisZ = 4096,
	ScaleAllAxes = 7168,
	ScalePlaneYZ = 8192,
	ScalePlaneXZ = 16384,
	ScalePlaneXY = 32768,
	ScaleAllPlanes = 57344,
	ScaleUniform = 65536,
	StandardTranslateRotate = 1022,
	TranslateRotateUniformScale = 66558,
	FullTranslateRotateScale = 131070,
	ETransformGizmoSubElements_MAX = 131071
};

// Enum InteractiveToolsFramework.EToolShutdownType
enum class EToolShutdownType : uint8 {
	Completed = 0,
	Accept = 1,
	Cancel = 2,
	EToolShutdownType_MAX = 3
};

// Enum InteractiveToolsFramework.EToolSide
enum class EToolSide : uint8 {
	Left = 1,
	Mouse = 1,
	Right = 2,
	EToolSide_MAX = 3
};

// Enum InteractiveToolsFramework.EToolChangeTrackingMode
enum class EToolChangeTrackingMode : uint8 {
	NoChangeTracking = 1,
	UndoToExit = 2,
	FullUndoRedo = 3,
	EToolChangeTrackingMode_MAX = 4
};

// Enum InteractiveToolsFramework.ESceneSnapQueryType
enum class ESceneSnapQueryType : uint8 {
	Position = 1,
	Rotation = 2,
	ESceneSnapQueryType_MAX = 3
};

// Enum InteractiveToolsFramework.ESceneSnapQueryTargetType
enum class ESceneSnapQueryTargetType : uint8 {
	None = 0,
	MeshVertex = 1,
	MeshEdge = 2,
	Grid = 4,
	All = 7,
	ESceneSnapQueryTargetType_MAX = 8
};

// ScriptStruct InteractiveToolsFramework.GizmoVec2ParameterChange
// Size: 0x20 (Inherited: 0x00)
struct FGizmoVec2ParameterChange {
	struct FVector2D InitialValue; // 0x00(0x10)
	struct FVector2D CurrentValue; // 0x10(0x10)
};

// ScriptStruct InteractiveToolsFramework.GizmoElementColorAttribute
// Size: 0x14 (Inherited: 0x00)
struct FGizmoElementColorAttribute {
	struct FLinearColor Value; // 0x00(0x10)
	bool bHasValue; // 0x10(0x01)
	bool bOverridesChildState; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
};

// ScriptStruct InteractiveToolsFramework.GizmoElementMaterialAttribute
// Size: 0x0c (Inherited: 0x00)
struct FGizmoElementMaterialAttribute {
	struct TWeakObjectPtr<struct UMaterialInterface> Value; // 0x00(0x08)
	bool bOverridesChildState; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct InteractiveToolsFramework.GizmoElementMeshRenderStateAttributes
// Size: 0x60 (Inherited: 0x00)
struct FGizmoElementMeshRenderStateAttributes {
	struct FGizmoElementMaterialAttribute Material; // 0x00(0x0c)
	struct FGizmoElementMaterialAttribute HoverMaterial; // 0x0c(0x0c)
	struct FGizmoElementMaterialAttribute InteractMaterial; // 0x18(0x0c)
	struct FGizmoElementColorAttribute VertexColor; // 0x24(0x14)
	struct FGizmoElementColorAttribute HoverVertexColor; // 0x38(0x14)
	struct FGizmoElementColorAttribute InteractVertexColor; // 0x4c(0x14)
};

// ScriptStruct InteractiveToolsFramework.GizmoElementLineRenderStateAttributes
// Size: 0x3c (Inherited: 0x00)
struct FGizmoElementLineRenderStateAttributes {
	struct FGizmoElementColorAttribute LineColor; // 0x00(0x14)
	struct FGizmoElementColorAttribute HoverLineColor; // 0x14(0x14)
	struct FGizmoElementColorAttribute InteractLineColor; // 0x28(0x14)
};

// ScriptStruct InteractiveToolsFramework.GizmoFloatParameterChange
// Size: 0x08 (Inherited: 0x00)
struct FGizmoFloatParameterChange {
	float InitialValue; // 0x00(0x04)
	float CurrentValue; // 0x04(0x04)
};

// ScriptStruct InteractiveToolsFramework.BrushStampData
// Size: 0x130 (Inherited: 0x00)
struct FBrushStampData {
	char pad_0[0x130]; // 0x00(0x130)
};

// ScriptStruct InteractiveToolsFramework.BehaviorInfo
// Size: 0x20 (Inherited: 0x00)
struct FBehaviorInfo {
	struct UInputBehavior* Behavior; // 0x00(0x08)
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct InteractiveToolsFramework.InputRayHit
// Size: 0x40 (Inherited: 0x00)
struct FInputRayHit {
	bool bHit; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	double HitDepth; // 0x08(0x08)
	struct FVector HitNormal; // 0x10(0x18)
	bool bHasHitNormal; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t HitIdentifier; // 0x2c(0x04)
	char pad_30[0x8]; // 0x30(0x08)
	struct TWeakObjectPtr<struct UObject> HitObject; // 0x38(0x08)
};

// ScriptStruct InteractiveToolsFramework.InputDeviceRay
// Size: 0x48 (Inherited: 0x00)
struct FInputDeviceRay {
	struct FRay WorldRay; // 0x00(0x30)
	bool bHas2D; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FVector2D ScreenPosition; // 0x38(0x10)
};

// ScriptStruct InteractiveToolsFramework.ActiveGizmo
// Size: 0x30 (Inherited: 0x00)
struct FActiveGizmo {
	struct UInteractiveGizmo* Gizmo; // 0x00(0x08)
	char pad_8[0x28]; // 0x08(0x28)
};

