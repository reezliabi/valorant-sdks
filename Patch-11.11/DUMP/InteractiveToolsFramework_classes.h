// Class InteractiveToolsFramework.AssetBackedTarget
// Size: 0x30 (Inherited: 0x30)
struct UAssetBackedTarget : UInterface {
};

// Class InteractiveToolsFramework.GizmoBaseComponent
// Size: 0x6c0 (Inherited: 0x690)
struct UGizmoBaseComponent : UPrimitiveComponent {
	struct FLinearColor Color; // 0x688(0x10)
	float HoverSizeMultiplier; // 0x698(0x04)
	float PixelHitDistanceThreshold; // 0x69c(0x04)
	struct UGizmoViewContext* GizmoViewContext; // 0x6a8(0x08)
	char pad_6B0[0x10]; // 0x6b0(0x10)

	void UpdateWorldLocalState(bool bWorldIn); // Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState // (Final|Native|Public) // @ game+0x53cade0
	void UpdateHoverState(bool bHoveringIn); // Function InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState // (Final|Native|Public) // @ game+0x53caee0
};

// Class InteractiveToolsFramework.InteractiveCommandArguments
// Size: 0x38 (Inherited: 0x30)
struct UInteractiveCommandArguments : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class InteractiveToolsFramework.InteractiveCommandResult
// Size: 0x30 (Inherited: 0x30)
struct UInteractiveCommandResult : UObject {
};

// Class InteractiveToolsFramework.InteractiveCommand
// Size: 0x30 (Inherited: 0x30)
struct UInteractiveCommand : UObject {
};

// Class InteractiveToolsFramework.InteractiveGizmoBuilder
// Size: 0x30 (Inherited: 0x30)
struct UInteractiveGizmoBuilder : UObject {
};

// Class InteractiveToolsFramework.ToolContextTransactionProvider
// Size: 0x30 (Inherited: 0x30)
struct UToolContextTransactionProvider : UInterface {
};

// Class InteractiveToolsFramework.InternalToolFrameworkActor
// Size: 0x468 (Inherited: 0x460)
struct AInternalToolFrameworkActor : AActor {
	bool bIsSelectableInEditor; // 0x460(0x01)
	char pad_461[0x7]; // 0x461(0x07)
};

// Class InteractiveToolsFramework.ToolFrameworkComponent
// Size: 0x30 (Inherited: 0x30)
struct UToolFrameworkComponent : UInterface {
};

// Class InteractiveToolsFramework.InteractiveToolCameraFocusAPI
// Size: 0x30 (Inherited: 0x30)
struct UInteractiveToolCameraFocusAPI : UInterface {
};

// Class InteractiveToolsFramework.InteractiveToolNestedAcceptCancelAPI
// Size: 0x30 (Inherited: 0x30)
struct UInteractiveToolNestedAcceptCancelAPI : UInterface {
};

// Class InteractiveToolsFramework.InteractiveToolExclusiveToolAPI
// Size: 0x30 (Inherited: 0x30)
struct UInteractiveToolExclusiveToolAPI : UInterface {
};

// Class InteractiveToolsFramework.InteractiveToolEditorGizmoAPI
// Size: 0x30 (Inherited: 0x30)
struct UInteractiveToolEditorGizmoAPI : UInterface {
};

// Class InteractiveToolsFramework.MaterialProvider
// Size: 0x30 (Inherited: 0x30)
struct UMaterialProvider : UInterface {
};

// Class InteractiveToolsFramework.MeshDescriptionCommitter
// Size: 0x30 (Inherited: 0x30)
struct UMeshDescriptionCommitter : UInterface {
};

// Class InteractiveToolsFramework.MeshDescriptionProvider
// Size: 0x30 (Inherited: 0x30)
struct UMeshDescriptionProvider : UInterface {
};

// Class InteractiveToolsFramework.GizmoBaseVec2ParameterSource
// Size: 0x50 (Inherited: 0x30)
struct UGizmoBaseVec2ParameterSource : UObject {
	char pad_30[0x20]; // 0x30(0x20)
};

// Class InteractiveToolsFramework.GizmoLocalVec2ParameterSource
// Size: 0x80 (Inherited: 0x50)
struct UGizmoLocalVec2ParameterSource : UGizmoBaseVec2ParameterSource {
	struct FVector2D Value; // 0x50(0x10)
	struct FGizmoVec2ParameterChange LastChange; // 0x60(0x20)
};

// Class InteractiveToolsFramework.GizmoBaseFloatParameterSource
// Size: 0x50 (Inherited: 0x30)
struct UGizmoBaseFloatParameterSource : UObject {
	char pad_30[0x20]; // 0x30(0x20)
};

// Class InteractiveToolsFramework.GizmoAxisTranslationParameterSource
// Size: 0x190 (Inherited: 0x50)
struct UGizmoAxisTranslationParameterSource : UGizmoBaseFloatParameterSource {
	char pad_50[0x80]; // 0x50(0x80)
	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0xd0(0x10)
	struct TScriptInterface<IGizmoTransformSource> TransformSource; // 0xe0(0x10)
	float Parameter; // 0xf0(0x04)
	struct FGizmoFloatParameterChange LastChange; // 0xf4(0x08)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct FVector CurTranslationAxis; // 0x100(0x18)
	struct FVector CurTranslationOrigin; // 0x118(0x18)
	struct FTransform InitialTransform; // 0x130(0x60)
};

// Class InteractiveToolsFramework.GizmoPlaneTranslationParameterSource
// Size: 0x220 (Inherited: 0x50)
struct UGizmoPlaneTranslationParameterSource : UGizmoBaseVec2ParameterSource {
	char pad_50[0xc0]; // 0x50(0xc0)
	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x110(0x10)
	struct TScriptInterface<IGizmoTransformSource> TransformSource; // 0x120(0x10)
	struct FVector2D Parameter; // 0x130(0x10)
	struct FGizmoVec2ParameterChange LastChange; // 0x140(0x20)
	struct FVector CurTranslationOrigin; // 0x160(0x18)
	struct FVector CurTranslationNormal; // 0x178(0x18)
	struct FVector CurTranslationAxisX; // 0x190(0x18)
	struct FVector CurTranslationAxisY; // 0x1a8(0x18)
	struct FTransform InitialTransform; // 0x1c0(0x60)
};

// Class InteractiveToolsFramework.GizmoAxisRotationParameterSource
// Size: 0x190 (Inherited: 0x50)
struct UGizmoAxisRotationParameterSource : UGizmoBaseFloatParameterSource {
	char pad_50[0x80]; // 0x50(0x80)
	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0xd0(0x10)
	struct TScriptInterface<IGizmoTransformSource> TransformSource; // 0xe0(0x10)
	float Angle; // 0xf0(0x04)
	struct FGizmoFloatParameterChange LastChange; // 0xf4(0x08)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct FVector CurRotationAxis; // 0x100(0x18)
	struct FVector CurRotationOrigin; // 0x118(0x18)
	struct FTransform InitialTransform; // 0x130(0x60)
};

// Class InteractiveToolsFramework.GizmoUniformScaleParameterSource
// Size: 0x170 (Inherited: 0x50)
struct UGizmoUniformScaleParameterSource : UGizmoBaseVec2ParameterSource {
	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x50(0x10)
	struct TScriptInterface<IGizmoTransformSource> TransformSource; // 0x60(0x10)
	float ScaleMultiplier; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FVector2D Parameter; // 0x78(0x10)
	struct FGizmoVec2ParameterChange LastChange; // 0x88(0x20)
	struct FVector CurScaleOrigin; // 0xa8(0x18)
	struct FVector CurScaleNormal; // 0xc0(0x18)
	struct FVector CurScaleAxisX; // 0xd8(0x18)
	struct FVector CurScaleAxisY; // 0xf0(0x18)
	char pad_108[0x8]; // 0x108(0x08)
	struct FTransform InitialTransform; // 0x110(0x60)
};

// Class InteractiveToolsFramework.GizmoAxisScaleParameterSource
// Size: 0x120 (Inherited: 0x50)
struct UGizmoAxisScaleParameterSource : UGizmoBaseFloatParameterSource {
	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x50(0x10)
	struct TScriptInterface<IGizmoTransformSource> TransformSource; // 0x60(0x10)
	float ScaleMultiplier; // 0x70(0x04)
	bool bClampToZero; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	float Parameter; // 0x78(0x04)
	struct FGizmoFloatParameterChange LastChange; // 0x7c(0x08)
	char pad_84[0x4]; // 0x84(0x04)
	struct FVector CurScaleAxis; // 0x88(0x18)
	struct FVector CurScaleOrigin; // 0xa0(0x18)
	char pad_B8[0x8]; // 0xb8(0x08)
	struct FTransform InitialTransform; // 0xc0(0x60)
};

// Class InteractiveToolsFramework.GizmoPlaneScaleParameterSource
// Size: 0x1b0 (Inherited: 0x50)
struct UGizmoPlaneScaleParameterSource : UGizmoBaseVec2ParameterSource {
	char pad_50[0x40]; // 0x50(0x40)
	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x90(0x10)
	struct TScriptInterface<IGizmoTransformSource> TransformSource; // 0xa0(0x10)
	float ScaleMultiplier; // 0xb0(0x04)
	bool bUseEqualScaling; // 0xb4(0x01)
	bool bClampToZero; // 0xb5(0x01)
	char pad_B6[0x2]; // 0xb6(0x02)
	struct FVector2D Parameter; // 0xb8(0x10)
	struct FGizmoVec2ParameterChange LastChange; // 0xc8(0x20)
	struct FVector CurScaleOrigin; // 0xe8(0x18)
	struct FVector CurScaleNormal; // 0x100(0x18)
	struct FVector CurScaleAxisX; // 0x118(0x18)
	struct FVector CurScaleAxisY; // 0x130(0x18)
	char pad_148[0x8]; // 0x148(0x08)
	struct FTransform InitialTransform; // 0x150(0x60)
};

// Class InteractiveToolsFramework.PhysicsDataSource
// Size: 0x30 (Inherited: 0x30)
struct UPhysicsDataSource : UInterface {
};

// Class InteractiveToolsFramework.PrimitiveComponentBackedTarget
// Size: 0x30 (Inherited: 0x30)
struct UPrimitiveComponentBackedTarget : UInterface {
};

// Class InteractiveToolsFramework.SkeletalMeshBackedTarget
// Size: 0x30 (Inherited: 0x30)
struct USkeletalMeshBackedTarget : UAssetBackedTarget {
};

// Class InteractiveToolsFramework.StaticMeshBackedTarget
// Size: 0x30 (Inherited: 0x30)
struct UStaticMeshBackedTarget : UAssetBackedTarget {
};

// Class InteractiveToolsFramework.InputBehavior
// Size: 0x38 (Inherited: 0x30)
struct UInputBehavior : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class InteractiveToolsFramework.AnyButtonInputBehavior
// Size: 0x80 (Inherited: 0x38)
struct UAnyButtonInputBehavior : UInputBehavior {
	char pad_38[0x48]; // 0x38(0x48)
};

// Class InteractiveToolsFramework.ClickDragInputBehavior
// Size: 0x140 (Inherited: 0x80)
struct UClickDragInputBehavior : UAnyButtonInputBehavior {
	char pad_80[0xa0]; // 0x80(0xa0)
	bool bUpdateModifiersDuringDrag; // 0x120(0x01)
	char pad_121[0x1f]; // 0x121(0x1f)
};

// Class InteractiveToolsFramework.LocalClickDragInputBehavior
// Size: 0x280 (Inherited: 0x140)
struct ULocalClickDragInputBehavior : UClickDragInputBehavior {
	char pad_140[0x140]; // 0x140(0x140)
};

// Class InteractiveToolsFramework.KeyAsModifierInputBehavior
// Size: 0xa0 (Inherited: 0x38)
struct UKeyAsModifierInputBehavior : UInputBehavior {
	char pad_38[0x68]; // 0x38(0x68)
};

// Class InteractiveToolsFramework.MouseHoverBehavior
// Size: 0xa0 (Inherited: 0x38)
struct UMouseHoverBehavior : UInputBehavior {
	char pad_38[0x68]; // 0x38(0x68)
};

// Class InteractiveToolsFramework.LocalMouseHoverBehavior
// Size: 0x1f0 (Inherited: 0xa0)
struct ULocalMouseHoverBehavior : UMouseHoverBehavior {
	char pad_A0[0x150]; // 0xa0(0x150)
};

// Class InteractiveToolsFramework.MouseWheelInputBehavior
// Size: 0x130 (Inherited: 0x80)
struct UMouseWheelInputBehavior : UAnyButtonInputBehavior {
	char pad_80[0xb0]; // 0x80(0xb0)
};

// Class InteractiveToolsFramework.MultiClickSequenceInputBehavior
// Size: 0x130 (Inherited: 0x80)
struct UMultiClickSequenceInputBehavior : UAnyButtonInputBehavior {
	char pad_80[0xb0]; // 0x80(0xb0)
};

// Class InteractiveToolsFramework.SingleClickInputBehavior
// Size: 0x130 (Inherited: 0x80)
struct USingleClickInputBehavior : UAnyButtonInputBehavior {
	char pad_80[0x40]; // 0x80(0x40)
	bool HitTestOnRelease; // 0xc0(0x01)
	char pad_C1[0x6f]; // 0xc1(0x6f)
};

// Class InteractiveToolsFramework.LocalSingleClickInputBehavior
// Size: 0x200 (Inherited: 0x130)
struct ULocalSingleClickInputBehavior : USingleClickInputBehavior {
	char pad_130[0xd0]; // 0x130(0xd0)
};

// Class InteractiveToolsFramework.SingleClickOrDragInputBehavior
// Size: 0x180 (Inherited: 0x80)
struct USingleClickOrDragInputBehavior : UAnyButtonInputBehavior {
	char pad_80[0xa0]; // 0x80(0xa0)
	bool bBeginDragIfClickTargetNotHit; // 0x120(0x01)
	char pad_121[0x3]; // 0x121(0x03)
	float ClickDistanceThreshold; // 0x124(0x04)
	char pad_128[0x58]; // 0x128(0x58)
};

// Class InteractiveToolsFramework.SingleKeyCaptureBehavior
// Size: 0x130 (Inherited: 0x38)
struct USingleKeyCaptureBehavior : UInputBehavior {
	char pad_38[0xf8]; // 0x38(0xf8)
};

// Class InteractiveToolsFramework.WidgetBaseBehavior
// Size: 0x30 (Inherited: 0x30)
struct UWidgetBaseBehavior : UInterface {
};

// Class InteractiveToolsFramework.AxisAngleGizmoBuilder
// Size: 0x30 (Inherited: 0x30)
struct UAxisAngleGizmoBuilder : UInteractiveGizmoBuilder {
};

// Class InteractiveToolsFramework.InteractiveGizmo
// Size: 0x40 (Inherited: 0x30)
struct UInteractiveGizmo : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct UInputBehaviorSet* InputBehaviors; // 0x38(0x08)
};

// Class InteractiveToolsFramework.AxisAngleGizmo
// Size: 0x1e0 (Inherited: 0x40)
struct UAxisAngleGizmo : UInteractiveGizmo {
	char pad_40[0x10]; // 0x40(0x10)
	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x50(0x10)
	struct TScriptInterface<IGizmoFloatParameterSource> AngleSource; // 0x60(0x10)
	struct TScriptInterface<IGizmoClickTarget> HitTarget; // 0x70(0x10)
	struct TScriptInterface<IGizmoStateTarget> StateTarget; // 0x80(0x10)
	struct UClickDragInputBehavior* MouseBehavior; // 0x90(0x08)
	char pad_98[0x88]; // 0x98(0x88)
	bool bInInteraction; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
	struct FVector RotationOrigin; // 0x128(0x18)
	struct FVector RotationAxis; // 0x140(0x18)
	struct FVector RotationPlaneX; // 0x158(0x18)
	struct FVector RotationPlaneY; // 0x170(0x18)
	struct FVector InteractionStartPoint; // 0x188(0x18)
	struct FVector InteractionCurPoint; // 0x1a0(0x18)
	float InteractionStartAngle; // 0x1b8(0x04)
	float InteractionCurAngle; // 0x1bc(0x04)
	char pad_1C0[0x20]; // 0x1c0(0x20)
};

// Class InteractiveToolsFramework.AxisPositionGizmoBuilder
// Size: 0x30 (Inherited: 0x30)
struct UAxisPositionGizmoBuilder : UInteractiveGizmoBuilder {
};

// Class InteractiveToolsFramework.AxisPositionGizmo
// Size: 0x1d0 (Inherited: 0x40)
struct UAxisPositionGizmo : UInteractiveGizmo {
	char pad_40[0x10]; // 0x40(0x10)
	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x50(0x10)
	struct TScriptInterface<IGizmoFloatParameterSource> ParameterSource; // 0x60(0x10)
	struct UGizmoViewContext* GizmoViewContext; // 0x70(0x08)
	struct TScriptInterface<IGizmoClickTarget> HitTarget; // 0x78(0x10)
	struct TScriptInterface<IGizmoStateTarget> StateTarget; // 0x88(0x10)
	struct UClickDragInputBehavior* MouseBehavior; // 0x98(0x08)
	bool bEnableSignedAxis; // 0xa0(0x01)
	char pad_A1[0x90]; // 0xa1(0x90)
	bool bInInteraction; // 0x131(0x01)
	char pad_132[0x6]; // 0x132(0x06)
	struct FVector InteractionOrigin; // 0x138(0x18)
	struct FVector InteractionAxis; // 0x150(0x18)
	struct FVector InteractionStartPoint; // 0x168(0x18)
	struct FVector InteractionCurPoint; // 0x180(0x18)
	float InteractionStartParameter; // 0x198(0x04)
	float InteractionCurParameter; // 0x19c(0x04)
	float ParameterSign; // 0x1a0(0x04)
	char pad_1A4[0x2c]; // 0x1a4(0x2c)
};

// Class InteractiveToolsFramework.GizmoConstantAxisSource
// Size: 0x68 (Inherited: 0x30)
struct UGizmoConstantAxisSource : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FVector Origin; // 0x38(0x18)
	struct FVector Direction; // 0x50(0x18)
};

// Class InteractiveToolsFramework.GizmoConstantFrameAxisSource
// Size: 0x98 (Inherited: 0x30)
struct UGizmoConstantFrameAxisSource : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FVector Origin; // 0x38(0x18)
	struct FVector Direction; // 0x50(0x18)
	struct FVector TangentX; // 0x68(0x18)
	struct FVector TangentY; // 0x80(0x18)
};

// Class InteractiveToolsFramework.GizmoWorldAxisSource
// Size: 0x58 (Inherited: 0x30)
struct UGizmoWorldAxisSource : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FVector Origin; // 0x38(0x18)
	int32_t AxisIndex; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class InteractiveToolsFramework.GizmoComponentAxisSource
// Size: 0x48 (Inherited: 0x30)
struct UGizmoComponentAxisSource : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct USceneComponent* Component; // 0x38(0x08)
	int32_t AxisIndex; // 0x40(0x04)
	bool bLocalAxes; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// Class InteractiveToolsFramework.BrushStampIndicatorBuilder
// Size: 0x30 (Inherited: 0x30)
struct UBrushStampIndicatorBuilder : UInteractiveGizmoBuilder {
};

// Class InteractiveToolsFramework.BrushStampIndicator
// Size: 0xe0 (Inherited: 0x40)
struct UBrushStampIndicator : UInteractiveGizmo {
	bool bVisible; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float BrushRadius; // 0x44(0x04)
	float BrushFalloff; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FVector BrushPosition; // 0x50(0x18)
	struct FVector BrushNormal; // 0x68(0x18)
	bool bDrawIndicatorLines; // 0x80(0x01)
	bool bDrawRadiusCircle; // 0x81(0x01)
	char pad_82[0x2]; // 0x82(0x02)
	int32_t SampleStepCount; // 0x84(0x04)
	struct FLinearColor LineColor; // 0x88(0x10)
	float LineThickness; // 0x98(0x04)
	bool bDepthTested; // 0x9c(0x01)
	bool bDrawSecondaryLines; // 0x9d(0x01)
	char pad_9E[0x2]; // 0x9e(0x02)
	float SecondaryLineThickness; // 0xa0(0x04)
	struct FLinearColor SecondaryLineColor; // 0xa4(0x10)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct UPrimitiveComponent* AttachedComponent; // 0xb8(0x08)
	char pad_C0[0x20]; // 0xc0(0x20)
};

// Class InteractiveToolsFramework.GizmoActor
// Size: 0x468 (Inherited: 0x468)
struct AGizmoActor : AInternalToolFrameworkActor {
};

// Class InteractiveToolsFramework.CombinedTransformGizmoActor
// Size: 0x4f0 (Inherited: 0x468)
struct ACombinedTransformGizmoActor : AGizmoActor {
	struct UPrimitiveComponent* TranslateX; // 0x468(0x08)
	struct UPrimitiveComponent* TranslateY; // 0x470(0x08)
	struct UPrimitiveComponent* TranslateZ; // 0x478(0x08)
	struct UPrimitiveComponent* TranslateYZ; // 0x480(0x08)
	struct UPrimitiveComponent* TranslateXZ; // 0x488(0x08)
	struct UPrimitiveComponent* TranslateXY; // 0x490(0x08)
	struct UPrimitiveComponent* RotateX; // 0x498(0x08)
	struct UPrimitiveComponent* RotateY; // 0x4a0(0x08)
	struct UPrimitiveComponent* RotateZ; // 0x4a8(0x08)
	struct UPrimitiveComponent* RotationSphere; // 0x4b0(0x08)
	struct UPrimitiveComponent* UniformScale; // 0x4b8(0x08)
	struct UPrimitiveComponent* AxisScaleX; // 0x4c0(0x08)
	struct UPrimitiveComponent* AxisScaleY; // 0x4c8(0x08)
	struct UPrimitiveComponent* AxisScaleZ; // 0x4d0(0x08)
	struct UPrimitiveComponent* PlaneScaleYZ; // 0x4d8(0x08)
	struct UPrimitiveComponent* PlaneScaleXZ; // 0x4e0(0x08)
	struct UPrimitiveComponent* PlaneScaleXY; // 0x4e8(0x08)
};

// Class InteractiveToolsFramework.CombinedTransformGizmoBuilder
// Size: 0xf0 (Inherited: 0x30)
struct UCombinedTransformGizmoBuilder : UInteractiveGizmoBuilder {
	char pad_30[0xc0]; // 0x30(0xc0)
};

// Class InteractiveToolsFramework.CombinedTransformGizmo
// Size: 0x3b0 (Inherited: 0x40)
struct UCombinedTransformGizmo : UInteractiveGizmo {
	struct UTransformProxy* ActiveTarget; // 0x40(0x08)
	bool bSnapToWorldGrid; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	bool bGridSizeIsExplicit; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct FVector ExplicitGridSize; // 0x50(0x18)
	bool bRotationGridSizeIsExplicit; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FRotator ExplicitRotationGridSize; // 0x70(0x18)
	bool bSnapToWorldRotGrid; // 0x88(0x01)
	bool bUseContextCoordinateSystem; // 0x89(0x01)
	char pad_8A[0x2]; // 0x8a(0x02)
	enum class EToolContextCoordinateSystem CurrentCoordinateSystem; // 0x8c(0x04)
	bool bUseContextGizmoMode; // 0x90(0x01)
	enum class EToolContextTransformGizmoMode ActiveGizmoMode; // 0x91(0x01)
	char pad_92[0x12e]; // 0x92(0x12e)
	struct TArray<struct UPrimitiveComponent*> ActiveComponents; // 0x1c0(0x10)
	struct TArray<struct UInteractiveGizmo*> ActiveGizmos; // 0x1d0(0x10)
	char pad_1E0[0x50]; // 0x1e0(0x50)
	struct UGizmoConstantFrameAxisSource* CameraAxisSource; // 0x230(0x08)
	struct UGizmoComponentAxisSource* AxisXSource; // 0x238(0x08)
	struct UGizmoComponentAxisSource* AxisYSource; // 0x240(0x08)
	struct UGizmoComponentAxisSource* AxisZSource; // 0x248(0x08)
	struct UGizmoComponentAxisSource* UnitAxisXSource; // 0x250(0x08)
	struct UGizmoComponentAxisSource* UnitAxisYSource; // 0x258(0x08)
	struct UGizmoComponentAxisSource* UnitAxisZSource; // 0x260(0x08)
	struct UGizmoTransformChangeStateTarget* StateTarget; // 0x268(0x08)
	char pad_270[0x140]; // 0x270(0x140)
};

// Class InteractiveToolsFramework.GizmoArrowComponent
// Size: 0x6e0 (Inherited: 0x6c0)
struct UGizmoArrowComponent : UGizmoBaseComponent {
	struct FVector Direction; // 0x6b8(0x18)
	float Gap; // 0x6d0(0x04)
	float Length; // 0x6d4(0x04)
	float Thickness; // 0x6d8(0x04)
};

// Class InteractiveToolsFramework.GizmoBoxComponent
// Size: 0x710 (Inherited: 0x6c0)
struct UGizmoBoxComponent : UGizmoBaseComponent {
	struct FVector Origin; // 0x6b8(0x18)
	struct FQuat Rotation; // 0x6d0(0x20)
	struct FVector Dimensions; // 0x6f0(0x18)
	float LineThickness; // 0x708(0x04)
	bool bRemoveHiddenLines; // 0x70c(0x01)
	bool bEnableAxisFlip; // 0x70d(0x01)
};

// Class InteractiveToolsFramework.GizmoCircleComponent
// Size: 0x6e0 (Inherited: 0x6c0)
struct UGizmoCircleComponent : UGizmoBaseComponent {
	struct FVector Normal; // 0x6b8(0x18)
	float Radius; // 0x6d0(0x04)
	float Thickness; // 0x6d4(0x04)
	int32_t NumSides; // 0x6d8(0x04)
	bool bViewAligned; // 0x6dc(0x01)
	bool bDrawFullCircle; // 0x6dd(0x01)
	bool bOnlyAllowFrontFacingHits; // 0x6de(0x01)
};

// Class InteractiveToolsFramework.GizmoElementBase
// Size: 0x110 (Inherited: 0x30)
struct UGizmoElementBase : UObject {
	bool bEnabled; // 0x30(0x01)
	bool bEnabledForPerspectiveProjection; // 0x31(0x01)
	bool bEnabledForOrthographicProjection; // 0x32(0x01)
	bool bEnabledForDefaultState; // 0x33(0x01)
	bool bEnabledForHoveringState; // 0x34(0x01)
	bool bEnabledForInteractingState; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
	uint32_t PartIdentifier; // 0x38(0x04)
	struct FGizmoElementMeshRenderStateAttributes MeshRenderAttributes; // 0x3c(0x60)
	enum class EGizmoElementState ElementState; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
	enum class EGizmoElementInteractionState ElementInteractionState; // 0xa0(0x04)
	enum class EGizmoElementViewDependentType ViewDependentType; // 0xa4(0x04)
	struct FVector ViewDependentAxis; // 0xa8(0x18)
	float ViewDependentAngleTol; // 0xc0(0x04)
	float ViewDependentAxialMaxCosAngleTol; // 0xc4(0x04)
	float ViewDependentPlanarMinCosAngleTol; // 0xc8(0x04)
	enum class EGizmoElementViewAlignType ViewAlignType; // 0xcc(0x04)
	struct FVector ViewAlignAxis; // 0xd0(0x18)
	struct FVector ViewAlignNormal; // 0xe8(0x18)
	float ViewAlignAxialAngleTol; // 0x100(0x04)
	float ViewAlignAxialMaxCosAngleTol; // 0x104(0x04)
	float PixelHitDistanceThreshold; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
};

// Class InteractiveToolsFramework.GizmoElementLineBase
// Size: 0x160 (Inherited: 0x110)
struct UGizmoElementLineBase : UGizmoElementBase {
	struct FGizmoElementLineRenderStateAttributes LineRenderAttributes; // 0x110(0x3c)
	float LineThickness; // 0x14c(0x04)
	bool bScreenSpaceLine; // 0x150(0x01)
	char pad_151[0x3]; // 0x151(0x03)
	float HoverLineThicknessMultiplier; // 0x154(0x04)
	float InteractLineThicknessMultiplier; // 0x158(0x04)
	char pad_15C[0x4]; // 0x15c(0x04)
};

// Class InteractiveToolsFramework.GizmoElementCircleBase
// Size: 0x1d0 (Inherited: 0x160)
struct UGizmoElementCircleBase : UGizmoElementLineBase {
	struct FVector Center; // 0x160(0x18)
	struct FVector Axis0; // 0x178(0x18)
	struct FVector Axis1; // 0x190(0x18)
	double Radius; // 0x1a8(0x08)
	int32_t NumSegments; // 0x1b0(0x04)
	enum class EGizmoElementPartialType PartialType; // 0x1b4(0x04)
	double PartialStartAngle; // 0x1b8(0x08)
	double PartialEndAngle; // 0x1c0(0x08)
	double PartialViewDependentMaxCosTol; // 0x1c8(0x08)
};

// Class InteractiveToolsFramework.GizmoElementArc
// Size: 0x1d8 (Inherited: 0x1d0)
struct UGizmoElementArc : UGizmoElementCircleBase {
	double InnerRadius; // 0x1d0(0x08)
};

// Class InteractiveToolsFramework.GizmoElementArrow
// Size: 0x190 (Inherited: 0x110)
struct UGizmoElementArrow : UGizmoElementBase {
	char pad_110[0x8]; // 0x110(0x08)
	struct UGizmoElementCylinder* CylinderElement; // 0x118(0x08)
	struct UGizmoElementCone* ConeElement; // 0x120(0x08)
	struct UGizmoElementBox* BoxElement; // 0x128(0x08)
	struct FVector base; // 0x130(0x18)
	struct FVector Direction; // 0x148(0x18)
	struct FVector SideDirection; // 0x160(0x18)
	float BodyLength; // 0x178(0x04)
	float BodyRadius; // 0x17c(0x04)
	float HeadLength; // 0x180(0x04)
	float HeadRadius; // 0x184(0x04)
	int32_t NumSides; // 0x188(0x04)
	enum class EGizmoElementArrowHeadType HeadType; // 0x18c(0x04)
};

// Class InteractiveToolsFramework.GizmoElementBox
// Size: 0x170 (Inherited: 0x110)
struct UGizmoElementBox : UGizmoElementBase {
	struct FVector Center; // 0x110(0x18)
	struct FVector Dimensions; // 0x128(0x18)
	struct FVector UpDirection; // 0x140(0x18)
	struct FVector SideDirection; // 0x158(0x18)
};

// Class InteractiveToolsFramework.GizmoElementCircle
// Size: 0x1d8 (Inherited: 0x1d0)
struct UGizmoElementCircle : UGizmoElementCircleBase {
	bool bDrawMesh; // 0x1d0(0x01)
	bool bDrawLine; // 0x1d1(0x01)
	bool bHitMesh; // 0x1d2(0x01)
	bool bHitLine; // 0x1d3(0x01)
	char pad_1D4[0x4]; // 0x1d4(0x04)
};

// Class InteractiveToolsFramework.GizmoElementCone
// Size: 0x150 (Inherited: 0x110)
struct UGizmoElementCone : UGizmoElementBase {
	struct FVector Origin; // 0x110(0x18)
	struct FVector Direction; // 0x128(0x18)
	float Height; // 0x140(0x04)
	float Radius; // 0x144(0x04)
	int32_t NumSides; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
};

// Class InteractiveToolsFramework.GizmoElementCylinder
// Size: 0x150 (Inherited: 0x110)
struct UGizmoElementCylinder : UGizmoElementBase {
	struct FVector base; // 0x110(0x18)
	struct FVector Direction; // 0x128(0x18)
	float Height; // 0x140(0x04)
	float Radius; // 0x144(0x04)
	int32_t NumSides; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
};

// Class InteractiveToolsFramework.GizmoElementGroup
// Size: 0x178 (Inherited: 0x160)
struct UGizmoElementGroup : UGizmoElementLineBase {
	bool bConstantScale; // 0x160(0x01)
	bool bHitOwner; // 0x161(0x01)
	char pad_162[0x6]; // 0x162(0x06)
	struct TArray<struct UGizmoElementBase*> Elements; // 0x168(0x10)
};

// Class InteractiveToolsFramework.GizmoElementHitTarget
// Size: 0x90 (Inherited: 0x30)
struct UGizmoElementHitTarget : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct UGizmoElementBase* GizmoElement; // 0x38(0x08)
	struct UGizmoViewContext* GizmoViewContext; // 0x40(0x08)
	struct UTransformProxy* GizmoTransformProxy; // 0x48(0x08)
	char pad_50[0x40]; // 0x50(0x40)
};

// Class InteractiveToolsFramework.GizmoElementHitMultiTarget
// Size: 0x90 (Inherited: 0x30)
struct UGizmoElementHitMultiTarget : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct UGizmoElementBase* GizmoElement; // 0x38(0x08)
	struct UGizmoViewContext* GizmoViewContext; // 0x40(0x08)
	struct UTransformProxy* GizmoTransformProxy; // 0x48(0x08)
	char pad_50[0x40]; // 0x50(0x40)
};

// Class InteractiveToolsFramework.GizmoElementRectangle
// Size: 0x1b8 (Inherited: 0x160)
struct UGizmoElementRectangle : UGizmoElementLineBase {
	struct FVector Center; // 0x160(0x18)
	float Width; // 0x178(0x04)
	float Height; // 0x17c(0x04)
	struct FVector UpDirection; // 0x180(0x18)
	struct FVector SideDirection; // 0x198(0x18)
	bool bDrawMesh; // 0x1b0(0x01)
	bool bDrawLine; // 0x1b1(0x01)
	bool bHitMesh; // 0x1b2(0x01)
	bool bHitLine; // 0x1b3(0x01)
	char pad_1B4[0x4]; // 0x1b4(0x04)
};

// Class InteractiveToolsFramework.GizmoElementTorus
// Size: 0x1e0 (Inherited: 0x1d0)
struct UGizmoElementTorus : UGizmoElementCircleBase {
	double InnerRadius; // 0x1d0(0x08)
	int32_t NumInnerSlices; // 0x1d8(0x04)
	bool bEndCaps; // 0x1dc(0x01)
	char pad_1DD[0x3]; // 0x1dd(0x03)
};

// Class InteractiveToolsFramework.GizmoTransformSource
// Size: 0x30 (Inherited: 0x30)
struct UGizmoTransformSource : UInterface {

	void SetTransform(struct FTransform& NewTransform); // Function InteractiveToolsFramework.GizmoTransformSource.SetTransform // (Native|Public|HasOutParms|HasDefaults) // @ game+0x53f8cd0
	struct FTransform GetTransform(); // Function InteractiveToolsFramework.GizmoTransformSource.GetTransform // (Native|Public|HasDefaults|Const) // @ game+0x53f8e40
};

// Class InteractiveToolsFramework.GizmoAxisSource
// Size: 0x30 (Inherited: 0x30)
struct UGizmoAxisSource : UInterface {

	bool HasTangentVectors(); // Function InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors // (Native|Public|Const) // @ game+0x53f9150
	void GetTangentVectors(struct FVector& TangentXOut, struct FVector& TangentYOut); // Function InteractiveToolsFramework.GizmoAxisSource.GetTangentVectors // (Native|Public|HasOutParms|HasDefaults|Const) // @ game+0x53f8fa0
	struct FVector GetOrigin(); // Function InteractiveToolsFramework.GizmoAxisSource.GetOrigin // (Native|Public|HasDefaults|Const) // @ game+0x53f91e0
	struct FVector GetDirection(); // Function InteractiveToolsFramework.GizmoAxisSource.GetDirection // (Native|Public|HasDefaults|Const) // @ game+0x53f9190
};

// Class InteractiveToolsFramework.GizmoClickTarget
// Size: 0x30 (Inherited: 0x30)
struct UGizmoClickTarget : UInterface {

	void UpdateInteractingState(bool bInteracting); // Function InteractiveToolsFramework.GizmoClickTarget.UpdateInteractingState // (Native|Public) // @ game+0x53f9360
	void UpdateHoverState(bool bHovering); // Function InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState // (Native|Public) // @ game+0x53f9460
};

// Class InteractiveToolsFramework.GizmoClickMultiTarget
// Size: 0x30 (Inherited: 0x30)
struct UGizmoClickMultiTarget : UInterface {

	void UpdateInteractingState(bool bInteracting, uint32_t InPartIdentifier); // Function InteractiveToolsFramework.GizmoClickMultiTarget.UpdateInteractingState // (Native|Public) // @ game+0x53f97d0
	void UpdateHoverState(bool bHovering, uint32_t InPartIdentifier); // Function InteractiveToolsFramework.GizmoClickMultiTarget.UpdateHoverState // (Native|Public) // @ game+0x53f9970
	void UpdateHittableState(bool bHittable, uint32_t InPartIdentifier); // Function InteractiveToolsFramework.GizmoClickMultiTarget.UpdateHittableState // (Native|Public) // @ game+0x53f9630
};

// Class InteractiveToolsFramework.GizmoRenderTarget
// Size: 0x30 (Inherited: 0x30)
struct UGizmoRenderTarget : UInterface {
};

// Class InteractiveToolsFramework.GizmoRenderMultiTarget
// Size: 0x30 (Inherited: 0x30)
struct UGizmoRenderMultiTarget : UInterface {

	void UpdateVisibilityState(bool bVisible, uint32_t InPartIdentifier); // Function InteractiveToolsFramework.GizmoRenderMultiTarget.UpdateVisibilityState // (Native|Public) // @ game+0x53f9970
};

// Class InteractiveToolsFramework.GizmoStateTarget
// Size: 0x30 (Inherited: 0x30)
struct UGizmoStateTarget : UInterface {

	void EndUpdate(); // Function InteractiveToolsFramework.GizmoStateTarget.EndUpdate // (Native|Public) // @ game+0x53f9cd0
	void BeginUpdate(); // Function InteractiveToolsFramework.GizmoStateTarget.BeginUpdate // (Native|Public) // @ game+0x2571bc0
};

// Class InteractiveToolsFramework.GizmoFloatParameterSource
// Size: 0x30 (Inherited: 0x30)
struct UGizmoFloatParameterSource : UInterface {

	void SetParameter(float NewValue); // Function InteractiveToolsFramework.GizmoFloatParameterSource.SetParameter // (Native|Public) // @ game+0x53f9e00
	float GetParameter(); // Function InteractiveToolsFramework.GizmoFloatParameterSource.GetParameter // (Native|Public|Const) // @ game+0x53f9f00
	void EndModify(); // Function InteractiveToolsFramework.GizmoFloatParameterSource.EndModify // (Native|Public) // @ game+0x53f9dd0
	void BeginModify(); // Function InteractiveToolsFramework.GizmoFloatParameterSource.BeginModify // (Native|Public) // @ game+0x53f9cd0
};

// Class InteractiveToolsFramework.GizmoVec2ParameterSource
// Size: 0x30 (Inherited: 0x30)
struct UGizmoVec2ParameterSource : UInterface {

	void SetParameter(struct FVector2D& NewValue); // Function InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter // (Native|Public|HasOutParms|HasDefaults) // @ game+0x53fa070
	struct FVector2D GetParameter(); // Function InteractiveToolsFramework.GizmoVec2ParameterSource.GetParameter // (Native|Public|HasDefaults|Const) // @ game+0x53fa160
	void EndModify(); // Function InteractiveToolsFramework.GizmoVec2ParameterSource.EndModify // (Native|Public) // @ game+0x53f9dd0
	void BeginModify(); // Function InteractiveToolsFramework.GizmoVec2ParameterSource.BeginModify // (Native|Public) // @ game+0x53f9cd0
};

// Class InteractiveToolsFramework.GizmoLineHandleComponent
// Size: 0x700 (Inherited: 0x6c0)
struct UGizmoLineHandleComponent : UGizmoBaseComponent {
	struct FVector Normal; // 0x6b8(0x18)
	float HandleSize; // 0x6d0(0x04)
	float Thickness; // 0x6d4(0x04)
	struct FVector Direction; // 0x6d8(0x18)
	float Length; // 0x6f0(0x04)
	bool bImageScale; // 0x6f4(0x01)
	char pad_6FD[0x3]; // 0x6fd(0x03)
};

// Class InteractiveToolsFramework.GizmoRectangleComponent
// Size: 0x710 (Inherited: 0x6c0)
struct UGizmoRectangleComponent : UGizmoBaseComponent {
	struct FVector DirectionX; // 0x6b8(0x18)
	struct FVector DirectionY; // 0x6d0(0x18)
	bool bOrientYAccordingToCamera; // 0x6e8(0x01)
	float OffsetX; // 0x6ec(0x04)
	float OffsetY; // 0x6f0(0x04)
	float LengthX; // 0x6f4(0x04)
	float LengthY; // 0x6f8(0x04)
	float Thickness; // 0x6fc(0x04)
	char SegmentFlags; // 0x700(0x01)
	char pad_706[0xa]; // 0x706(0x0a)
};

// Class InteractiveToolsFramework.GizmoViewContext
// Size: 0x1e0 (Inherited: 0x30)
struct UGizmoViewContext : UObject {
	char pad_30[0x1b0]; // 0x30(0x1b0)
};

// Class InteractiveToolsFramework.GizmoLambdaHitTarget
// Size: 0x100 (Inherited: 0x30)
struct UGizmoLambdaHitTarget : UObject {
	char pad_30[0xd0]; // 0x30(0xd0)
};

// Class InteractiveToolsFramework.GizmoComponentHitTarget
// Size: 0x100 (Inherited: 0x30)
struct UGizmoComponentHitTarget : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct UPrimitiveComponent* Component; // 0x38(0x08)
	char pad_40[0xc0]; // 0x40(0xc0)
};

// Class InteractiveToolsFramework.IntervalGizmoActor
// Size: 0x480 (Inherited: 0x468)
struct AIntervalGizmoActor : AGizmoActor {
	struct UGizmoLineHandleComponent* UpIntervalComponent; // 0x468(0x08)
	struct UGizmoLineHandleComponent* DownIntervalComponent; // 0x470(0x08)
	struct UGizmoLineHandleComponent* ForwardIntervalComponent; // 0x478(0x08)
};

// Class InteractiveToolsFramework.IntervalGizmoBuilder
// Size: 0xc0 (Inherited: 0x30)
struct UIntervalGizmoBuilder : UInteractiveGizmoBuilder {
	char pad_30[0x90]; // 0x30(0x90)
};

// Class InteractiveToolsFramework.IntervalGizmo
// Size: 0x200 (Inherited: 0x40)
struct UIntervalGizmo : UInteractiveGizmo {
	struct UGizmoTransformChangeStateTarget* StateTarget; // 0x40(0x08)
	char pad_48[0x58]; // 0x48(0x58)
	struct UTransformProxy* TransformProxy; // 0xa0(0x08)
	struct TArray<struct UPrimitiveComponent*> ActiveComponents; // 0xa8(0x10)
	struct TArray<struct UInteractiveGizmo*> ActiveGizmos; // 0xb8(0x10)
	char pad_C8[0x18]; // 0xc8(0x18)
	struct UGizmoComponentAxisSource* AxisYSource; // 0xe0(0x08)
	struct UGizmoComponentAxisSource* AxisZSource; // 0xe8(0x08)
	char pad_F0[0x110]; // 0xf0(0x110)
};

// Class InteractiveToolsFramework.GizmoAxisIntervalParameterSource
// Size: 0x68 (Inherited: 0x50)
struct UGizmoAxisIntervalParameterSource : UGizmoBaseFloatParameterSource {
	struct TScriptInterface<IGizmoFloatParameterSource> FloatParameterSource; // 0x50(0x10)
	float MinParameter; // 0x60(0x04)
	float MaxParameter; // 0x64(0x04)
};

// Class InteractiveToolsFramework.GizmoLocalFloatParameterSource
// Size: 0x60 (Inherited: 0x50)
struct UGizmoLocalFloatParameterSource : UGizmoBaseFloatParameterSource {
	float Value; // 0x50(0x04)
	struct FGizmoFloatParameterChange LastChange; // 0x54(0x08)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class InteractiveToolsFramework.PlanePositionGizmoBuilder
// Size: 0x30 (Inherited: 0x30)
struct UPlanePositionGizmoBuilder : UInteractiveGizmoBuilder {
};

// Class InteractiveToolsFramework.PlanePositionGizmo
// Size: 0x270 (Inherited: 0x40)
struct UPlanePositionGizmo : UInteractiveGizmo {
	char pad_40[0x10]; // 0x40(0x10)
	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x50(0x10)
	struct TScriptInterface<IGizmoVec2ParameterSource> ParameterSource; // 0x60(0x10)
	struct TScriptInterface<IGizmoClickTarget> HitTarget; // 0x70(0x10)
	struct TScriptInterface<IGizmoStateTarget> StateTarget; // 0x80(0x10)
	struct UClickDragInputBehavior* MouseBehavior; // 0x90(0x08)
	bool bEnableSignedAxis; // 0x98(0x01)
	bool bFlipX; // 0x99(0x01)
	bool bFlipY; // 0x9a(0x01)
	char pad_9B[0x85]; // 0x9b(0x85)
	bool bInInteraction; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
	struct FVector InteractionOrigin; // 0x128(0x18)
	struct FVector InteractionNormal; // 0x140(0x18)
	struct FVector InteractionAxisX; // 0x158(0x18)
	struct FVector InteractionAxisY; // 0x170(0x18)
	struct FVector InteractionStartPoint; // 0x188(0x18)
	struct FVector InteractionCurPoint; // 0x1a0(0x18)
	struct FVector2D InteractionStartParameter; // 0x1b8(0x10)
	struct FVector2D InteractionCurParameter; // 0x1c8(0x10)
	struct FVector2D ParameterSigns; // 0x1d8(0x10)
	char pad_1E8[0x88]; // 0x1e8(0x88)
};

// Class InteractiveToolsFramework.RepositionableTransformGizmoBuilder
// Size: 0xf0 (Inherited: 0xf0)
struct URepositionableTransformGizmoBuilder : UCombinedTransformGizmoBuilder {
};

// Class InteractiveToolsFramework.RepositionableTransformGizmo
// Size: 0x450 (Inherited: 0x3b0)
struct URepositionableTransformGizmo : UCombinedTransformGizmo {
	char pad_3B0[0x90]; // 0x3b0(0x90)
	struct UGizmoTransformChangeStateTarget* RepositionStateTarget; // 0x440(0x08)
	char pad_448[0x8]; // 0x448(0x08)
};

// Class InteractiveToolsFramework.ScalableSphereGizmoBuilder
// Size: 0x30 (Inherited: 0x30)
struct UScalableSphereGizmoBuilder : UInteractiveGizmoBuilder {
};

// Class InteractiveToolsFramework.ScalableSphereGizmo
// Size: 0x110 (Inherited: 0x40)
struct UScalableSphereGizmo : UInteractiveGizmo {
	char pad_40[0x50]; // 0x40(0x50)
	float HitErrorThreshold; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct FText TransactionDescription; // 0x98(0x18)
	float Radius; // 0xb0(0x04)
	bool bIsHovering; // 0xb4(0x01)
	bool bIsDragging; // 0xb5(0x01)
	char pad_B6[0x2]; // 0xb6(0x02)
	struct UTransformProxy* ActiveTarget; // 0xb8(0x08)
	struct FVector ActiveAxis; // 0xc0(0x18)
	struct FVector DragStartWorldPosition; // 0xd8(0x18)
	struct FVector DragCurrentPositionProjected; // 0xf0(0x18)
	float InteractionStartParameter; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
};

// Class InteractiveToolsFramework.ScalableSphereGizmoInputBehavior
// Size: 0xd0 (Inherited: 0x80)
struct UScalableSphereGizmoInputBehavior : UAnyButtonInputBehavior {
	char pad_80[0x50]; // 0x80(0x50)
};

// Class InteractiveToolsFramework.GizmoNilStateTarget
// Size: 0x38 (Inherited: 0x30)
struct UGizmoNilStateTarget : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class InteractiveToolsFramework.GizmoLambdaStateTarget
// Size: 0xc0 (Inherited: 0x30)
struct UGizmoLambdaStateTarget : UObject {
	char pad_30[0x90]; // 0x30(0x90)
};

// Class InteractiveToolsFramework.GizmoObjectModifyStateTarget
// Size: 0x68 (Inherited: 0x30)
struct UGizmoObjectModifyStateTarget : UObject {
	char pad_30[0x28]; // 0x30(0x28)
	struct TScriptInterface<IToolContextTransactionProvider> TransactionManager; // 0x58(0x10)
};

// Class InteractiveToolsFramework.GizmoTransformChangeStateTarget
// Size: 0x150 (Inherited: 0x30)
struct UGizmoTransformChangeStateTarget : UObject {
	char pad_30[0x28]; // 0x30(0x28)
	struct TScriptInterface<IToolContextTransactionProvider> TransactionManager; // 0x58(0x10)
	char pad_68[0xe8]; // 0x68(0xe8)
};

// Class InteractiveToolsFramework.CombinedTransformGizmoContextObject
// Size: 0x60 (Inherited: 0x30)
struct UCombinedTransformGizmoContextObject : UObject {
	char pad_30[0x30]; // 0x30(0x30)
};

// Class InteractiveToolsFramework.TransformProxy
// Size: 0x1b0 (Inherited: 0x30)
struct UTransformProxy : UObject {
	char pad_30[0xa8]; // 0x30(0xa8)
	bool bRotatePerObject; // 0xd8(0x01)
	bool bSetPivotMode; // 0xd9(0x01)
	char pad_DA[0x16]; // 0xda(0x16)
	struct FTransform SharedTransform; // 0xf0(0x60)
	struct FTransform InitialSharedTransform; // 0x150(0x60)
};

// Class InteractiveToolsFramework.GizmoBaseTransformSource
// Size: 0x50 (Inherited: 0x30)
struct UGizmoBaseTransformSource : UObject {
	char pad_30[0x20]; // 0x30(0x20)
};

// Class InteractiveToolsFramework.GizmoComponentWorldTransformSource
// Size: 0x60 (Inherited: 0x50)
struct UGizmoComponentWorldTransformSource : UGizmoBaseTransformSource {
	struct USceneComponent* Component; // 0x50(0x08)
	bool bModifyComponentOnTransform; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// Class InteractiveToolsFramework.GizmoScaledTransformSource
// Size: 0xe0 (Inherited: 0x50)
struct UGizmoScaledTransformSource : UGizmoBaseTransformSource {
	struct TScriptInterface<IGizmoTransformSource> ChildTransformSource; // 0x50(0x10)
	char pad_60[0x80]; // 0x60(0x80)
};

// Class InteractiveToolsFramework.GizmoTransformProxyTransformSource
// Size: 0x78 (Inherited: 0x50)
struct UGizmoTransformProxyTransformSource : UGizmoBaseTransformSource {
	struct UTransformProxy* Proxy; // 0x50(0x08)
	char pad_58[0x20]; // 0x58(0x20)
};

// Class InteractiveToolsFramework.GizmoScaledAndUnscaledTransformSources
// Size: 0x70 (Inherited: 0x50)
struct UGizmoScaledAndUnscaledTransformSources : UGizmoBaseTransformSource {
	struct TScriptInterface<IGizmoTransformSource> ScaledTransformSource; // 0x50(0x10)
	struct TScriptInterface<IGizmoTransformSource> UnscaledTransformSource; // 0x60(0x10)
};

// Class InteractiveToolsFramework.InteractiveToolPropertySet
// Size: 0xb0 (Inherited: 0x30)
struct UInteractiveToolPropertySet : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct TMap<struct FString, struct UInteractiveToolPropertySet*> CachedPropertiesMap; // 0x40(0x50)
	bool bIsPropertySetEnabled; // 0x90(0x01)
	char pad_91[0x1f]; // 0x91(0x1f)
};

// Class InteractiveToolsFramework.BrushBaseProperties
// Size: 0xc8 (Inherited: 0xb0)
struct UBrushBaseProperties : UInteractiveToolPropertySet {
	float BrushSize; // 0xb0(0x04)
	bool bSpecifyRadius; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	float BrushRadius; // 0xb8(0x04)
	float BrushStrength; // 0xbc(0x04)
	float BrushFalloffAmount; // 0xc0(0x04)
	bool bShowStrength; // 0xc4(0x01)
	bool bShowFalloff; // 0xc5(0x01)
	char pad_C6[0x2]; // 0xc6(0x02)
};

// Class InteractiveToolsFramework.BrushAdjusterInputBehavior
// Size: 0xd0 (Inherited: 0x80)
struct UBrushAdjusterInputBehavior : UAnyButtonInputBehavior {
	char pad_80[0x50]; // 0x80(0x50)
};

// Class InteractiveToolsFramework.InteractiveTool
// Size: 0xa8 (Inherited: 0x30)
struct UInteractiveTool : UObject {
	char pad_30[0x38]; // 0x30(0x38)
	struct UInputBehaviorSet* InputBehaviors; // 0x68(0x08)
	struct TArray<struct UObject*> ToolPropertyObjects; // 0x70(0x10)
	char pad_80[0x28]; // 0x80(0x28)
};

// Class InteractiveToolsFramework.SingleSelectionTool
// Size: 0xb8 (Inherited: 0xa8)
struct USingleSelectionTool : UInteractiveTool {
	char pad_A8[0x8]; // 0xa8(0x08)
	struct UToolTarget* Target; // 0xb0(0x08)
};

// Class InteractiveToolsFramework.MeshSurfacePointTool
// Size: 0x110 (Inherited: 0xb8)
struct UMeshSurfacePointTool : USingleSelectionTool {
	char pad_B8[0x50]; // 0xb8(0x50)
	struct TWeakObjectPtr<struct UWorld> TargetWorld; // 0x108(0x08)
};

// Class InteractiveToolsFramework.BaseBrushTool
// Size: 0x2a8 (Inherited: 0x110)
struct UBaseBrushTool : UMeshSurfacePointTool {
	struct UBrushBaseProperties* BrushProperties; // 0x110(0x08)
	bool bInBrushStroke; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	float WorldToLocalScale; // 0x11c(0x04)
	struct FBrushStampData LastBrushStamp; // 0x120(0x130)
	char pad_250[0x10]; // 0x250(0x10)
	struct TSoftClassPtr<UObject> PropertyClass; // 0x260(0x30)
	struct UBrushStampIndicator* BrushStampIndicator; // 0x290(0x08)
	char pad_298[0x10]; // 0x298(0x10)
};

// Class InteractiveToolsFramework.InteractiveToolBuilder
// Size: 0x30 (Inherited: 0x30)
struct UInteractiveToolBuilder : UObject {
};

// Class InteractiveToolsFramework.ClickDragToolBuilder
// Size: 0x30 (Inherited: 0x30)
struct UClickDragToolBuilder : UInteractiveToolBuilder {
};

// Class InteractiveToolsFramework.ClickDragTool
// Size: 0xb0 (Inherited: 0xa8)
struct UClickDragTool : UInteractiveTool {
	char pad_A8[0x8]; // 0xa8(0x08)
};

// Class InteractiveToolsFramework.InteractiveToolWithToolTargetsBuilder
// Size: 0x30 (Inherited: 0x30)
struct UInteractiveToolWithToolTargetsBuilder : UInteractiveToolBuilder {
};

// Class InteractiveToolsFramework.MeshSurfacePointToolBuilder
// Size: 0x38 (Inherited: 0x30)
struct UMeshSurfacePointToolBuilder : UInteractiveToolWithToolTargetsBuilder {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class InteractiveToolsFramework.SingleClickToolBuilder
// Size: 0x30 (Inherited: 0x30)
struct USingleClickToolBuilder : UInteractiveToolBuilder {
};

// Class InteractiveToolsFramework.SingleClickTool
// Size: 0xb0 (Inherited: 0xa8)
struct USingleClickTool : UInteractiveTool {
	char pad_A8[0x8]; // 0xa8(0x08)
};

// Class InteractiveToolsFramework.ContextObjectStore
// Size: 0x40 (Inherited: 0x30)
struct UContextObjectStore : UObject {
	struct TArray<struct UObject*> ContextObjects; // 0x30(0x10)
};

// Class InteractiveToolsFramework.InputBehaviorSet
// Size: 0x40 (Inherited: 0x30)
struct UInputBehaviorSet : UObject {
	struct TArray<struct FBehaviorInfo> Behaviors; // 0x30(0x10)
};

// Class InteractiveToolsFramework.InputBehaviorSource
// Size: 0x30 (Inherited: 0x30)
struct UInputBehaviorSource : UInterface {
};

// Class InteractiveToolsFramework.LocalInputBehaviorSource
// Size: 0x80 (Inherited: 0x30)
struct ULocalInputBehaviorSource : UObject {
	char pad_30[0x50]; // 0x30(0x50)
};

// Class InteractiveToolsFramework.InputRouter
// Size: 0x1b8 (Inherited: 0x30)
struct UInputRouter : UObject {
	bool bAutoInvalidateOnHover; // 0x30(0x01)
	bool bAutoInvalidateOnCapture; // 0x31(0x01)
	char pad_32[0xe]; // 0x32(0x0e)
	struct UInputBehaviorSet* ActiveInputBehaviors; // 0x40(0x08)
	char pad_48[0x170]; // 0x48(0x170)
};

// Class InteractiveToolsFramework.InteractionMechanic
// Size: 0x38 (Inherited: 0x30)
struct UInteractionMechanic : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class InteractiveToolsFramework.InteractiveGizmoManager
// Size: 0xc8 (Inherited: 0x30)
struct UInteractiveGizmoManager : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct FActiveGizmo> ActiveGizmos; // 0x38(0x10)
	char pad_48[0x18]; // 0x48(0x18)
	struct TMap<struct FString, struct UInteractiveGizmoBuilder*> GizmoBuilders; // 0x60(0x50)
	char pad_B0[0x18]; // 0xb0(0x18)
};

// Class InteractiveToolsFramework.InteractiveToolManager
// Size: 0x1a0 (Inherited: 0x30)
struct UInteractiveToolManager : UObject {
	char pad_30[0x30]; // 0x30(0x30)
	struct UInteractiveTool* ActiveLeftTool; // 0x60(0x08)
	struct UInteractiveTool* ActiveRightTool; // 0x68(0x08)
	char pad_70[0x80]; // 0x70(0x80)
	struct TMap<struct FString, struct UInteractiveToolBuilder*> ToolBuilders; // 0xf0(0x50)
	char pad_140[0x60]; // 0x140(0x60)
};

// Class InteractiveToolsFramework.InteractiveToolsContext
// Size: 0x340 (Inherited: 0x30)
struct UInteractiveToolsContext : UObject {
	char pad_30[0x30]; // 0x30(0x30)
	struct UInputRouter* InputRouter; // 0x60(0x08)
	struct UToolTargetManager* TargetManager; // 0x68(0x08)
	struct UInteractiveToolManager* ToolManager; // 0x70(0x08)
	struct UInteractiveGizmoManager* GizmoManager; // 0x78(0x08)
	struct UContextObjectStore* ContextObjectStore; // 0x80(0x08)
	char pad_88[0x288]; // 0x88(0x288)
	struct TSoftClassPtr<UObject> ToolManagerClass; // 0x310(0x30)
};

// Class InteractiveToolsFramework.MultiSelectionTool
// Size: 0xc0 (Inherited: 0xa8)
struct UMultiSelectionTool : UInteractiveTool {
	char pad_A8[0x8]; // 0xa8(0x08)
	struct TArray<struct UToolTarget*> Targets; // 0xb0(0x10)
};

// Class InteractiveToolsFramework.SceneSnappingManager
// Size: 0x30 (Inherited: 0x30)
struct USceneSnappingManager : UObject {
};

// Class InteractiveToolsFramework.SelectionSet
// Size: 0x48 (Inherited: 0x30)
struct USelectionSet : UObject {
	char pad_30[0x18]; // 0x30(0x18)
};

// Class InteractiveToolsFramework.MeshSelectionSet
// Size: 0x88 (Inherited: 0x48)
struct UMeshSelectionSet : USelectionSet {
	struct TArray<int32_t> Vertices; // 0x48(0x10)
	struct TArray<int32_t> Edges; // 0x58(0x10)
	struct TArray<int32_t> Faces; // 0x68(0x10)
	struct TArray<int32_t> Groups; // 0x78(0x10)
};

// Class InteractiveToolsFramework.ToolTargetManager
// Size: 0x48 (Inherited: 0x30)
struct UToolTargetManager : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct UToolTargetFactory*> Factories; // 0x38(0x10)
};

// Class InteractiveToolsFramework.ToolTarget
// Size: 0x30 (Inherited: 0x30)
struct UToolTarget : UObject {
};

// Class InteractiveToolsFramework.PrimitiveComponentToolTarget
// Size: 0x40 (Inherited: 0x30)
struct UPrimitiveComponentToolTarget : UToolTarget {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class InteractiveToolsFramework.ToolTargetFactory
// Size: 0x30 (Inherited: 0x30)
struct UToolTargetFactory : UObject {
};

// Class InteractiveToolsFramework.PrimitiveComponentToolTargetFactory
// Size: 0x30 (Inherited: 0x30)
struct UPrimitiveComponentToolTargetFactory : UToolTargetFactory {
};

