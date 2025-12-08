// Class ModelingComponents.MeshTopologySelectionMechanic
// Size: 0xb00 (Inherited: 0x38)
struct UMeshTopologySelectionMechanic : UInteractionMechanic {
	char pad_38[0x48]; // 0x38(0x48)
	struct UMeshTopologySelectionMechanicProperties* Properties; // 0x80(0x08)
	char pad_88[0x68]; // 0x88(0x68)
	struct UMouseHoverBehavior* HoverBehavior; // 0xf0(0x08)
	struct USingleClickOrDragInputBehavior* ClickOrDragBehavior; // 0xf8(0x08)
	struct URectangleMarqueeMechanic* MarqueeMechanic; // 0x100(0x08)
	char pad_108[0x5c8]; // 0x108(0x5c8)
	struct APreviewGeometryActor* PreviewGeometryActor; // 0x6d0(0x08)
	struct UTriangleSetComponent* DrawnTriangleSetComponent; // 0x6d8(0x08)
	char pad_6E0[0x50]; // 0x6e0(0x50)
	struct UMaterialInterface* HighlightedFaceMaterial; // 0x730(0x08)
	char pad_738[0x3c8]; // 0x738(0x3c8)
};

// Class ModelingComponents.BoundarySelectionMechanic
// Size: 0xb00 (Inherited: 0xb00)
struct UBoundarySelectionMechanic : UMeshTopologySelectionMechanic {
};

// Class ModelingComponents.DynamicMeshCommitter
// Size: 0x30 (Inherited: 0x30)
struct UDynamicMeshCommitter : UInterface {
};

// Class ModelingComponents.DynamicMeshProvider
// Size: 0x30 (Inherited: 0x30)
struct UDynamicMeshProvider : UInterface {
};

// Class ModelingComponents.PersistentDynamicMeshSource
// Size: 0x30 (Inherited: 0x30)
struct UPersistentDynamicMeshSource : UInterface {
};

// Class ModelingComponents.GeometrySelectionVisualizationProperties
// Size: 0x110 (Inherited: 0xb0)
struct UGeometrySelectionVisualizationProperties : UInteractiveToolPropertySet {
	bool bEnableShowTriangleROIBorder; // 0xb0(0x01)
	bool bEnableShowEdgeSelectionVertices; // 0xb1(0x01)
	enum class EGeometrySelectionElementType SelectionElementType; // 0xb2(0x01)
	enum class EGeometrySelectionTopologyType SelectionTopologyType; // 0xb3(0x01)
	bool bShowSelection; // 0xb4(0x01)
	bool bShowTriangleROIBorder; // 0xb5(0x01)
	bool bShowHidden; // 0xb6(0x01)
	bool bShowEdgeSelectionVertices; // 0xb7(0x01)
	float LineThickness; // 0xb8(0x04)
	float PointSize; // 0xbc(0x04)
	float DepthBias; // 0xc0(0x04)
	struct FColor FaceColor; // 0xc4(0x04)
	struct FColor LineColor; // 0xc8(0x04)
	struct FColor PointColor; // 0xcc(0x04)
	struct FColor TriangleROIBorderColor; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct UMaterialInterface* TriangleMaterial; // 0xd8(0x08)
	struct UMaterialInterface* LineMaterial; // 0xe0(0x08)
	struct UMaterialInterface* PointMaterial; // 0xe8(0x08)
	struct UMaterialInterface* TriangleMaterialShowingHidden; // 0xf0(0x08)
	struct UMaterialInterface* LineMaterialShowingHidden; // 0xf8(0x08)
	struct UMaterialInterface* PointMaterialShowingHidden; // 0x100(0x08)
	char pad_108[0x8]; // 0x108(0x08)
};

// Class ModelingComponents.InteractiveToolActivity
// Size: 0x38 (Inherited: 0x38)
struct UInteractiveToolActivity : UInteractionMechanic {
};

// Class ModelingComponents.ToolActivityHost
// Size: 0x30 (Inherited: 0x30)
struct UToolActivityHost : UInterface {
};

// Class ModelingComponents.MeshTopologySelectionMechanicProperties
// Size: 0xc8 (Inherited: 0xb0)
struct UMeshTopologySelectionMechanicProperties : UInteractiveToolPropertySet {
	bool bSelectVertices; // 0xb0(0x01)
	bool bSelectEdges; // 0xb1(0x01)
	bool bSelectFaces; // 0xb2(0x01)
	bool bSelectEdgeLoops; // 0xb3(0x01)
	bool bSelectEdgeRings; // 0xb4(0x01)
	bool bHitBackFaces; // 0xb5(0x01)
	bool bEnableMarquee; // 0xb6(0x01)
	bool bMarqueeIgnoreOcclusion; // 0xb7(0x01)
	bool bPreferProjectedElement; // 0xb8(0x01)
	bool bSelectDownRay; // 0xb9(0x01)
	bool bIgnoreOcclusion; // 0xba(0x01)
	char pad_BB[0xd]; // 0xbb(0x0d)

	void SelectAll(); // Function ModelingComponents.MeshTopologySelectionMechanicProperties.SelectAll // (Final|Native|Public) // @ game+0x54688f0
	void InvertSelection(); // Function ModelingComponents.MeshTopologySelectionMechanicProperties.InvertSelection // (Final|Native|Public) // @ game+0x5468940
};

// Class ModelingComponents.GeometrySelectionEditCommandArguments
// Size: 0x58 (Inherited: 0x38)
struct UGeometrySelectionEditCommandArguments : UInteractiveCommandArguments {
	char pad_38[0x20]; // 0x38(0x20)
};

// Class ModelingComponents.GeometrySelectionEditCommandResult
// Size: 0xa8 (Inherited: 0x30)
struct UGeometrySelectionEditCommandResult : UInteractiveCommandResult {
	char pad_30[0x78]; // 0x30(0x78)
};

// Class ModelingComponents.GeometrySelectionEditCommand
// Size: 0x30 (Inherited: 0x30)
struct UGeometrySelectionEditCommand : UInteractiveCommand {
};

// Class ModelingComponents.VoxelProperties
// Size: 0xc8 (Inherited: 0xb0)
struct UVoxelProperties : UInteractiveToolPropertySet {
	int32_t VoxelCount; // 0xb0(0x04)
	bool bAutoSimplify; // 0xb4(0x01)
	bool bRemoveInternalSurfaces; // 0xb5(0x01)
	char pad_B6[0x2]; // 0xb6(0x02)
	double SimplifyMaxErrorFactor; // 0xb8(0x08)
	double CubeRootMinComponentVolume; // 0xc0(0x08)
};

// Class ModelingComponents.MultiSelectionMeshEditingToolBuilder
// Size: 0x30 (Inherited: 0x30)
struct UMultiSelectionMeshEditingToolBuilder : UInteractiveToolWithToolTargetsBuilder {
};

// Class ModelingComponents.BaseCreateFromSelectedToolBuilder
// Size: 0x30 (Inherited: 0x30)
struct UBaseCreateFromSelectedToolBuilder : UMultiSelectionMeshEditingToolBuilder {
};

// Class ModelingComponents.OnAcceptHandleSourcesPropertiesBase
// Size: 0xb0 (Inherited: 0xb0)
struct UOnAcceptHandleSourcesPropertiesBase : UInteractiveToolPropertySet {
};

// Class ModelingComponents.OnAcceptHandleSourcesProperties
// Size: 0xb8 (Inherited: 0xb0)
struct UOnAcceptHandleSourcesProperties : UOnAcceptHandleSourcesPropertiesBase {
	enum class EHandleSourcesMethod HandleInputs; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

// Class ModelingComponents.BaseCreateFromSelectedHandleSourceProperties
// Size: 0xe0 (Inherited: 0xb8)
struct UBaseCreateFromSelectedHandleSourceProperties : UOnAcceptHandleSourcesProperties {
	enum class EBaseCreateFromSelectedTargetType OutputWriteTo; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct FString OutputNewName; // 0xc0(0x10)
	struct FString OutputExistingName; // 0xd0(0x10)
};

// Class ModelingComponents.TransformInputsToolProperties
// Size: 0xb8 (Inherited: 0xb0)
struct UTransformInputsToolProperties : UInteractiveToolPropertySet {
	bool bShowTransformGizmo; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

// Class ModelingComponents.MultiSelectionMeshEditingTool
// Size: 0xc8 (Inherited: 0xc0)
struct UMultiSelectionMeshEditingTool : UMultiSelectionTool {
	struct TWeakObjectPtr<struct UWorld> TargetWorld; // 0xc0(0x08)
};

// Class ModelingComponents.BaseCreateFromSelectedTool
// Size: 0x110 (Inherited: 0xc8)
struct UBaseCreateFromSelectedTool : UMultiSelectionMeshEditingTool {
	char pad_C8[0x8]; // 0xc8(0x08)
	struct UTransformInputsToolProperties* TransformProperties; // 0xd0(0x08)
	struct UCreateMeshObjectTypeProperties* OutputTypeProperties; // 0xd8(0x08)
	struct UBaseCreateFromSelectedHandleSourceProperties* HandleSourcesProperties; // 0xe0(0x08)
	struct UMeshOpPreviewWithBackgroundCompute* Preview; // 0xe8(0x08)
	struct TArray<struct UTransformProxy*> TransformProxies; // 0xf0(0x10)
	struct TArray<struct UCombinedTransformGizmo*> TransformGizmos; // 0x100(0x10)
};

// Class ModelingComponents.BaseMeshProcessingToolBuilder
// Size: 0x30 (Inherited: 0x30)
struct UBaseMeshProcessingToolBuilder : UInteractiveToolWithToolTargetsBuilder {
};

// Class ModelingComponents.BaseMeshProcessingTool
// Size: 0x410 (Inherited: 0xb8)
struct UBaseMeshProcessingTool : USingleSelectionTool {
	char pad_B8[0x20]; // 0xb8(0x20)
	struct UMeshOpPreviewWithBackgroundCompute* Preview; // 0xd8(0x08)
	char pad_E0[0x330]; // 0xe0(0x330)
};

// Class ModelingComponents.BaseVoxelTool
// Size: 0x128 (Inherited: 0x110)
struct UBaseVoxelTool : UBaseCreateFromSelectedTool {
	struct UVoxelProperties* VoxProperties; // 0x110(0x08)
	char pad_118[0x10]; // 0x118(0x10)
};

// Class ModelingComponents.MeshSurfacePointMeshEditingToolBuilder
// Size: 0x38 (Inherited: 0x38)
struct UMeshSurfacePointMeshEditingToolBuilder : UMeshSurfacePointToolBuilder {
};

// Class ModelingComponents.SingleSelectionMeshEditingToolBuilder
// Size: 0x30 (Inherited: 0x30)
struct USingleSelectionMeshEditingToolBuilder : UInteractiveToolWithToolTargetsBuilder {
};

// Class ModelingComponents.SingleSelectionMeshEditingTool
// Size: 0xc8 (Inherited: 0xb8)
struct USingleSelectionMeshEditingTool : USingleSelectionTool {
	struct TWeakObjectPtr<struct UWorld> TargetWorld; // 0xb8(0x08)
	struct UPersistentMeshSelection* InputSelection; // 0xc0(0x08)
};

// Class ModelingComponents.SingleTargetWithSelectionToolBuilder
// Size: 0x30 (Inherited: 0x30)
struct USingleTargetWithSelectionToolBuilder : UInteractiveToolWithToolTargetsBuilder {
};

// Class ModelingComponents.SingleTargetWithSelectionTool
// Size: 0x130 (Inherited: 0xb8)
struct USingleTargetWithSelectionTool : USingleSelectionTool {
	struct TWeakObjectPtr<struct UWorld> TargetWorld; // 0xb8(0x08)
	char pad_C0[0x60]; // 0xc0(0x60)
	struct UGeometrySelectionVisualizationProperties* GeometrySelectionVizProperties; // 0x120(0x08)
	struct UPreviewGeometry* GeometrySelectionViz; // 0x128(0x08)
};

// Class ModelingComponents.DynamicMeshReplacementChangeTarget
// Size: 0x60 (Inherited: 0x30)
struct UDynamicMeshReplacementChangeTarget : UObject {
	char pad_30[0x30]; // 0x30(0x30)
};

// Class ModelingComponents.OctreeDynamicMeshComponent
// Size: 0x850 (Inherited: 0x740)
struct UOctreeDynamicMeshComponent : UBaseDynamicMeshComponent {
	char pad_740[0x50]; // 0x740(0x50)
	struct UDynamicMesh* MeshObject; // 0x790(0x08)
	char pad_798[0xb8]; // 0x798(0xb8)

	void SetDynamicMesh(struct UDynamicMesh* NewMesh); // Function ModelingComponents.OctreeDynamicMeshComponent.SetDynamicMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x54766f0
};

// Class ModelingComponents.LineSetComponent
// Size: 0x750 (Inherited: 0x6d0)
struct ULineSetComponent : UMeshComponent {
	struct UMaterialInterface* LineMaterial; // 0x6d0(0x08)
	struct FBoxSphereBounds Bounds; // 0x6d8(0x38)
	bool bBoundsDirty; // 0x710(0x01)
	char pad_711[0x3f]; // 0x711(0x3f)
};

// Class ModelingComponents.MeshElementsVisualizerProperties
// Size: 0xe0 (Inherited: 0xb0)
struct UMeshElementsVisualizerProperties : UInteractiveToolPropertySet {
	bool bVisible; // 0xb0(0x01)
	bool bShowWireframe; // 0xb1(0x01)
	bool bShowBorders; // 0xb2(0x01)
	bool bShowUVSeams; // 0xb3(0x01)
	bool bShowNormalSeams; // 0xb4(0x01)
	bool bShowTangentSeams; // 0xb5(0x01)
	bool bShowColorSeams; // 0xb6(0x01)
	char pad_B7[0x1]; // 0xb7(0x01)
	float ThicknessScale; // 0xb8(0x04)
	struct FColor WireframeColor; // 0xbc(0x04)
	struct FColor BoundaryEdgeColor; // 0xc0(0x04)
	struct FColor UVSeamColor; // 0xc4(0x04)
	struct FColor NormalSeamColor; // 0xc8(0x04)
	struct FColor TangentSeamColor; // 0xcc(0x04)
	struct FColor ColorSeamColor; // 0xd0(0x04)
	float DepthBias; // 0xd4(0x04)
	bool bAdjustDepthBiasUsingMeshSize; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
};

// Class ModelingComponents.PreviewGeometry
// Size: 0x128 (Inherited: 0x30)
struct UPreviewGeometry : UObject {
	struct APreviewGeometryActor* ParentActor; // 0x30(0x08)
	struct TMap<struct FString, struct UTriangleSetComponent*> TriangleSets; // 0x38(0x50)
	struct TMap<struct FString, struct ULineSetComponent*> LineSets; // 0x88(0x50)
	struct TMap<struct FString, struct UPointSetComponent*> PointSets; // 0xd8(0x50)

	bool SetPointSetVisibility(struct FString PointSetIdentifier, bool bVisible); // Function ModelingComponents.PreviewGeometry.SetPointSetVisibility // (Final|Native|Public) // @ game+0x5494d60
	bool SetPointSetMaterial(struct FString PointSetIdentifier, struct UMaterialInterface* NewMaterial); // Function ModelingComponents.PreviewGeometry.SetPointSetMaterial // (Final|Native|Public) // @ game+0x5494b10
	bool SetLineSetVisibility(struct FString LineSetIdentifier, bool bVisible); // Function ModelingComponents.PreviewGeometry.SetLineSetVisibility // (Final|Native|Public) // @ game+0x5495950
	bool SetLineSetMaterial(struct FString LineSetIdentifier, struct UMaterialInterface* NewMaterial); // Function ModelingComponents.PreviewGeometry.SetLineSetMaterial // (Final|Native|Public) // @ game+0x5495700
	void SetAllPointSetsMaterial(struct UMaterialInterface* Material); // Function ModelingComponents.PreviewGeometry.SetAllPointSetsMaterial // (Final|Native|Public) // @ game+0x5494a20
	void SetAllLineSetsMaterial(struct UMaterialInterface* Material); // Function ModelingComponents.PreviewGeometry.SetAllLineSetsMaterial // (Final|Native|Public) // @ game+0x5495610
	bool RemovePointSet(struct FString PointSetIdentifier, bool bDestroy); // Function ModelingComponents.PreviewGeometry.RemovePointSet // (Final|Native|Public) // @ game+0x54950b0
	bool RemoveLineSet(struct FString LineSetIdentifier, bool bDestroy); // Function ModelingComponents.PreviewGeometry.RemoveLineSet // (Final|Native|Public) // @ game+0x5495ca0
	void RemoveAllPointSets(bool bDestroy); // Function ModelingComponents.PreviewGeometry.RemoveAllPointSets // (Final|Native|Public) // @ game+0x5494fb0
	void RemoveAllLineSets(bool bDestroy); // Function ModelingComponents.PreviewGeometry.RemoveAllLineSets // (Final|Native|Public) // @ game+0x5495ba0
	struct APreviewGeometryActor* GetActor(); // Function ModelingComponents.PreviewGeometry.GetActor // (Final|Native|Public|Const) // @ game+0x54964c0
	struct UTriangleSetComponent* FindTriangleSet(struct FString TriangleSetIdentifier); // Function ModelingComponents.PreviewGeometry.FindTriangleSet // (Final|Native|Public) // @ game+0x5496200
	struct UPointSetComponent* FindPointSet(struct FString PointSetIdentifier); // Function ModelingComponents.PreviewGeometry.FindPointSet // (Final|Native|Public) // @ game+0x5495340
	struct ULineSetComponent* FindLineSet(struct FString LineSetIdentifier); // Function ModelingComponents.PreviewGeometry.FindLineSet // (Final|Native|Public) // @ game+0x5495f30
	void Disconnect(); // Function ModelingComponents.PreviewGeometry.Disconnect // (Final|Native|Public) // @ game+0x54964e0
	void CreateInWorld(struct UWorld* World, struct FTransform& WithTransform); // Function ModelingComponents.PreviewGeometry.CreateInWorld // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0x5496530
	struct UTriangleSetComponent* AddTriangleSet(struct FString TriangleSetIdentifier); // Function ModelingComponents.PreviewGeometry.AddTriangleSet // (Final|Native|Public) // @ game+0x5496380
	struct UPointSetComponent* AddPointSet(struct FString PointSetIdentifier); // Function ModelingComponents.PreviewGeometry.AddPointSet // (Final|Native|Public) // @ game+0x54954d0
	struct ULineSetComponent* AddLineSet(struct FString LineSetIdentifier); // Function ModelingComponents.PreviewGeometry.AddLineSet // (Final|Native|Public) // @ game+0x54960c0
};

// Class ModelingComponents.MeshElementsVisualizer
// Size: 0x150 (Inherited: 0x128)
struct UMeshElementsVisualizer : UPreviewGeometry {
	struct UMeshElementsVisualizerProperties* Settings; // 0x128(0x08)
	struct UMeshWireframeComponent* WireframeComponent; // 0x130(0x08)
	char pad_138[0x18]; // 0x138(0x18)
};

// Class ModelingComponents.MeshWireframeComponent
// Size: 0x780 (Inherited: 0x6d0)
struct UMeshWireframeComponent : UMeshComponent {
	float LineDepthBias; // 0x6d0(0x04)
	float LineDepthBiasSizeScale; // 0x6d4(0x04)
	float ThicknessScale; // 0x6d8(0x04)
	bool bEnableWireframe; // 0x6dc(0x01)
	char pad_6DD[0x3]; // 0x6dd(0x03)
	struct FColor WireframeColor; // 0x6e0(0x04)
	float WireframeThickness; // 0x6e4(0x04)
	bool bEnableBoundaryEdges; // 0x6e8(0x01)
	char pad_6E9[0x3]; // 0x6e9(0x03)
	struct FColor BoundaryEdgeColor; // 0x6ec(0x04)
	float BoundaryEdgeThickness; // 0x6f0(0x04)
	bool bEnableUVSeams; // 0x6f4(0x01)
	char pad_6F5[0x3]; // 0x6f5(0x03)
	struct FColor UVSeamColor; // 0x6f8(0x04)
	float UVSeamThickness; // 0x6fc(0x04)
	bool bEnableNormalSeams; // 0x700(0x01)
	char pad_701[0x3]; // 0x701(0x03)
	struct FColor NormalSeamColor; // 0x704(0x04)
	float NormalSeamThickness; // 0x708(0x04)
	bool bEnableTangentSeams; // 0x70c(0x01)
	char pad_70D[0x3]; // 0x70d(0x03)
	struct FColor TangentSeamColor; // 0x710(0x04)
	float TangentSeamThickness; // 0x714(0x04)
	bool bEnableColorSeams; // 0x718(0x01)
	char pad_719[0x3]; // 0x719(0x03)
	struct FColor ColorSeamColor; // 0x71c(0x04)
	float ColorSeamThickness; // 0x720(0x04)
	char pad_724[0x4]; // 0x724(0x04)
	struct UMaterialInterface* LineMaterial; // 0x728(0x08)
	struct FBoxSphereBounds LocalBounds; // 0x730(0x38)
	char pad_768[0x18]; // 0x768(0x18)
};

// Class ModelingComponents.PointSetComponent
// Size: 0x750 (Inherited: 0x6d0)
struct UPointSetComponent : UMeshComponent {
	struct UMaterialInterface* PointMaterial; // 0x6d0(0x08)
	struct FBoxSphereBounds Bounds; // 0x6d8(0x38)
	bool bBoundsDirty; // 0x710(0x01)
	char pad_711[0x3f]; // 0x711(0x3f)
};

// Class ModelingComponents.PreviewMesh
// Size: 0x140 (Inherited: 0x30)
struct UPreviewMesh : UObject {
	char pad_30[0x18]; // 0x30(0x18)
	bool bBuildSpatialDataStructure; // 0x48(0x01)
	char pad_49[0xf]; // 0x49(0x0f)
	struct UDynamicMeshComponent* DynamicMeshComponent; // 0x58(0x08)
	char pad_60[0xe0]; // 0x60(0xe0)
};

// Class ModelingComponents.PolyEditPreviewMesh
// Size: 0x550 (Inherited: 0x140)
struct UPolyEditPreviewMesh : UPreviewMesh {
	char pad_140[0x410]; // 0x140(0x410)
};

// Class ModelingComponents.PreviewGeometryActor
// Size: 0x468 (Inherited: 0x468)
struct APreviewGeometryActor : AInternalToolFrameworkActor {
};

// Class ModelingComponents.TriangleSetComponent
// Size: 0x7d0 (Inherited: 0x6d0)
struct UTriangleSetComponent : UMeshComponent {
	struct FBoxSphereBounds Bounds; // 0x6d0(0x38)
	bool bBoundsDirty; // 0x708(0x01)
	char pad_709[0xc7]; // 0x709(0xc7)
};

// Class ModelingComponents.UVLayoutPreviewProperties
// Size: 0xd8 (Inherited: 0xb0)
struct UUVLayoutPreviewProperties : UInteractiveToolPropertySet {
	bool bEnabled; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	enum class EUVLayoutPreviewSide Side; // 0xb4(0x04)
	float Scale; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct FVector2D Offset; // 0xc0(0x10)
	bool bShowWireframe; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
};

// Class ModelingComponents.UVLayoutPreview
// Size: 0x170 (Inherited: 0x30)
struct UUVLayoutPreview : UObject {
	struct UUVLayoutPreviewProperties* Settings; // 0x30(0x08)
	struct UPreviewMesh* PreviewMesh; // 0x38(0x08)
	struct UMeshElementsVisualizer* MeshElementsVisualizer; // 0x40(0x08)
	struct UTriangleSetComponent* TriangleComponent; // 0x48(0x08)
	bool bShowBackingRectangle; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct UMaterialInterface* BackingRectangleMaterial; // 0x58(0x08)
	char pad_60[0x110]; // 0x60(0x110)
};

// Class ModelingComponents.CollectSurfacePathMechanic
// Size: 0x5d0 (Inherited: 0x38)
struct UCollectSurfacePathMechanic : UInteractionMechanic {
	char pad_38[0x598]; // 0x38(0x598)
};

// Class ModelingComponents.CollisionPrimitivesMechanic
// Size: 0x570 (Inherited: 0x38)
struct UCollisionPrimitivesMechanic : UInteractionMechanic {
	char pad_38[0x218]; // 0x38(0x218)
	struct UPreviewGeometry* PreviewGeometry; // 0x250(0x08)
	struct ULineSetComponent* DrawnPrimitiveEdges; // 0x258(0x08)
	char pad_260[0x150]; // 0x260(0x150)
	struct UTransformProxy* TranslateTransformProxy; // 0x3b0(0x08)
	struct UTransformProxy* SphereTransformProxy; // 0x3b8(0x08)
	struct UTransformProxy* BoxTransformProxy; // 0x3c0(0x08)
	struct UTransformProxy* CapsuleTransformProxy; // 0x3c8(0x08)
	struct UTransformProxy* FullTransformProxy; // 0x3d0(0x08)
	struct UTransformProxy* CurrentActiveProxy; // 0x3d8(0x08)
	struct UCombinedTransformGizmo* TranslateTransformGizmo; // 0x3e0(0x08)
	struct UCombinedTransformGizmo* SphereTransformGizmo; // 0x3e8(0x08)
	struct UCombinedTransformGizmo* BoxTransformGizmo; // 0x3f0(0x08)
	struct UCombinedTransformGizmo* CapsuleTransformGizmo; // 0x3f8(0x08)
	struct UCombinedTransformGizmo* FullTransformGizmo; // 0x400(0x08)
	char pad_408[0x50]; // 0x408(0x50)
	struct URectangleMarqueeMechanic* MarqueeMechanic; // 0x458(0x08)
	char pad_460[0x110]; // 0x460(0x110)
};

// Class ModelingComponents.ConstructionPlaneMechanic
// Size: 0x100 (Inherited: 0x38)
struct UConstructionPlaneMechanic : UInteractionMechanic {
	char pad_38[0xa0]; // 0x38(0xa0)
	struct UCombinedTransformGizmo* PlaneTransformGizmo; // 0xd8(0x08)
	struct UTransformProxy* PlaneTransformProxy; // 0xe0(0x08)
	char pad_E8[0x8]; // 0xe8(0x08)
	struct USingleClickInputBehavior* ClickToSetPlaneBehavior; // 0xf0(0x08)
	struct ULocalSingleClickInputBehavior* MiddleClickToSetGizmoBehavior; // 0xf8(0x08)
};

// Class ModelingComponents.CurveControlPointsMechanic
// Size: 0x680 (Inherited: 0x38)
struct UCurveControlPointsMechanic : UInteractionMechanic {
	char pad_38[0x10]; // 0x38(0x10)
	struct USingleClickInputBehavior* ClickBehavior; // 0x48(0x08)
	struct UMouseHoverBehavior* HoverBehavior; // 0x50(0x08)
	char pad_58[0x490]; // 0x58(0x490)
	struct APreviewGeometryActor* PreviewGeometryActor; // 0x4e8(0x08)
	struct UPointSetComponent* DrawnControlPoints; // 0x4f0(0x08)
	struct ULineSetComponent* DrawnControlSegments; // 0x4f8(0x08)
	struct UPointSetComponent* PreviewPoint; // 0x500(0x08)
	struct ULineSetComponent* PreviewSegment; // 0x508(0x08)
	char pad_510[0x78]; // 0x510(0x78)
	struct UTransformProxy* PointTransformProxy; // 0x588(0x08)
	struct UCombinedTransformGizmo* PointTransformGizmo; // 0x590(0x08)
	char pad_598[0xe8]; // 0x598(0xe8)
};

// Class ModelingComponents.DragAlignmentMechanic
// Size: 0x280 (Inherited: 0x38)
struct UDragAlignmentMechanic : UInteractionMechanic {
	char pad_38[0x248]; // 0x38(0x248)
};

// Class ModelingComponents.DragAlignmentInteraction
// Size: 0x2d0 (Inherited: 0x30)
struct UDragAlignmentInteraction : UObject {
	char pad_30[0x2a0]; // 0x30(0x2a0)
};

// Class ModelingComponents.LatticeControlPointsMechanic
// Size: 0x500 (Inherited: 0x38)
struct ULatticeControlPointsMechanic : UInteractionMechanic {
	char pad_38[0x1e8]; // 0x38(0x1e8)
	struct APreviewGeometryActor* PreviewGeometryActor; // 0x220(0x08)
	struct UPointSetComponent* DrawnControlPoints; // 0x228(0x08)
	struct ULineSetComponent* DrawnLatticeEdges; // 0x230(0x08)
	char pad_238[0xa8]; // 0x238(0xa8)
	struct UTransformProxy* PointTransformProxy; // 0x2e0(0x08)
	struct UCombinedTransformGizmo* PointTransformGizmo; // 0x2e8(0x08)
	char pad_2F0[0x58]; // 0x2f0(0x58)
	struct URectangleMarqueeMechanic* MarqueeMechanic; // 0x348(0x08)
	char pad_350[0x1b0]; // 0x350(0x1b0)
};

// Class ModelingComponents.PlaneDistanceFromHitMechanic
// Size: 0x530 (Inherited: 0x38)
struct UPlaneDistanceFromHitMechanic : UInteractionMechanic {
	char pad_38[0x4f8]; // 0x38(0x4f8)
};

// Class ModelingComponents.PolyLassoMarqueeMechanic
// Size: 0x1d0 (Inherited: 0x38)
struct UPolyLassoMarqueeMechanic : UInteractionMechanic {
	char pad_38[0x58]; // 0x38(0x58)
	float SpacingTolerance; // 0x90(0x04)
	float LineThickness; // 0x94(0x04)
	struct FLinearColor LineColor; // 0x98(0x10)
	struct FLinearColor ClosedColor; // 0xa8(0x10)
	bool bEnableFreehandPolygons; // 0xb8(0x01)
	bool bEnableMultiClickPolygons; // 0xb9(0x01)
	char pad_BA[0x6]; // 0xba(0x06)
	struct UClickDragInputBehavior* ClickDragBehavior; // 0xc0(0x08)
	struct UMouseHoverBehavior* HoverBehavior; // 0xc8(0x08)
	char pad_D0[0x100]; // 0xd0(0x100)
};

// Class ModelingComponents.RectangleMarqueeMechanic
// Size: 0x230 (Inherited: 0x38)
struct URectangleMarqueeMechanic : UInteractionMechanic {
	char pad_38[0x8]; // 0x38(0x08)
	bool bUseExternalClickDragBehavior; // 0x40(0x01)
	bool bUseExternalUpdateCameraState; // 0x41(0x01)
	char pad_42[0x4e]; // 0x42(0x4e)
	double OnDragRectangleChangedDeferredThreshold; // 0x90(0x08)
	char pad_98[0x48]; // 0x98(0x48)
	struct UClickDragInputBehavior* ClickDragBehavior; // 0xe0(0x08)
	char pad_E8[0x148]; // 0xe8(0x148)
};

// Class ModelingComponents.RectangleMarqueeInteraction
// Size: 0x210 (Inherited: 0x30)
struct URectangleMarqueeInteraction : UObject {
	char pad_30[0x1e0]; // 0x30(0x1e0)
};

// Class ModelingComponents.SpaceCurveDeformationMechanicPropertySet
// Size: 0xc0 (Inherited: 0xb0)
struct USpaceCurveDeformationMechanicPropertySet : UInteractiveToolPropertySet {
	enum class ESpaceCurveControlPointTransformMode TransformMode; // 0xb0(0x04)
	enum class ESpaceCurveControlPointOriginMode TransformOrigin; // 0xb4(0x04)
	float Softness; // 0xb8(0x04)
	enum class ESpaceCurveControlPointFalloffType SoftFalloff; // 0xbc(0x04)
};

// Class ModelingComponents.SpaceCurveDeformationMechanic
// Size: 0x2e0 (Inherited: 0x38)
struct USpaceCurveDeformationMechanic : UInteractionMechanic {
	char pad_38[0x10]; // 0x38(0x10)
	struct USingleClickInputBehavior* ClickBehavior; // 0x48(0x08)
	struct UMouseHoverBehavior* HoverBehavior; // 0x50(0x08)
	char pad_58[0x18]; // 0x58(0x18)
	struct USpaceCurveDeformationMechanicPropertySet* TransformProperties; // 0x70(0x08)
	char pad_78[0xf8]; // 0x78(0xf8)
	struct APreviewGeometryActor* PreviewGeometryActor; // 0x170(0x08)
	struct UPointSetComponent* RenderPoints; // 0x178(0x08)
	struct ULineSetComponent* RenderSegments; // 0x180(0x08)
	char pad_188[0x38]; // 0x188(0x38)
	struct UTransformProxy* PointTransformProxy; // 0x1c0(0x08)
	struct UCombinedTransformGizmo* PointTransformGizmo; // 0x1c8(0x08)
	char pad_1D0[0x110]; // 0x1d0(0x110)
};

// Class ModelingComponents.SpatialCurveDistanceMechanic
// Size: 0x420 (Inherited: 0x38)
struct USpatialCurveDistanceMechanic : UInteractionMechanic {
	char pad_38[0x3e8]; // 0x38(0x3e8)
};

// Class ModelingComponents.MeshOpPreviewWithBackgroundCompute
// Size: 0xc0 (Inherited: 0x30)
struct UMeshOpPreviewWithBackgroundCompute : UObject {
	char pad_30[0x30]; // 0x30(0x30)
	struct UPreviewMesh* PreviewMesh; // 0x60(0x08)
	struct TArray<struct UMaterialInterface*> StandardMaterials; // 0x68(0x10)
	struct UMaterialInterface* OverrideMaterial; // 0x78(0x08)
	struct UMaterialInterface* WorkingMaterial; // 0x80(0x08)
	struct UMaterialInterface* SecondaryMaterial; // 0x88(0x08)
	struct TWeakObjectPtr<struct UWorld> PreviewWorld; // 0x90(0x08)
	char pad_98[0x28]; // 0x98(0x28)
};

// Class ModelingComponents.ModelingComponentsSettings
// Size: 0x50 (Inherited: 0x48)
struct UModelingComponentsSettings : UDeveloperSettings {
	bool bEnableRayTracingWhileEditing; // 0x48(0x01)
	bool bEnableRayTracing; // 0x49(0x01)
	bool bGenerateLightmapUVs; // 0x4a(0x01)
	bool bEnableCollision; // 0x4b(0x01)
	enum class ECollisionTraceFlag CollisionMode; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

// Class ModelingComponents.ModelingComponentsEditorSettings
// Size: 0x60 (Inherited: 0x48)
struct UModelingComponentsEditorSettings : UDeveloperSettings {
	enum class EModelingComponentsPlaneVisualizationMode GridMode; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	int32_t NumGridLines; // 0x4c(0x04)
	float GridSpacing; // 0x50(0x04)
	float GridScale; // 0x54(0x04)
	float GridSize; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class ModelingComponents.ModelingObjectsCreationAPI
// Size: 0x30 (Inherited: 0x30)
struct UModelingObjectsCreationAPI : UObject {

	struct FCreateTextureObjectResult CreateTextureObject(struct FCreateTextureObjectParams& CreateTexParams); // Function ModelingComponents.ModelingObjectsCreationAPI.CreateTextureObject // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x54c1fb0
	struct FCreateActorResult CreateNewActor(struct FCreateActorParams& CreateActorParams); // Function ModelingComponents.ModelingObjectsCreationAPI.CreateNewActor // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x54c1c80
	struct FCreateMeshObjectResult CreateMeshObject(struct FCreateMeshObjectParams& CreateMeshParams); // Function ModelingComponents.ModelingObjectsCreationAPI.CreateMeshObject // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x54c2110
	struct FCreateMaterialObjectResult CreateMaterialObject(struct FCreateMaterialObjectParams& CreateMaterialParams); // Function ModelingComponents.ModelingObjectsCreationAPI.CreateMaterialObject // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x54c1e50
};

// Class ModelingComponents.PreviewMeshActor
// Size: 0x468 (Inherited: 0x468)
struct APreviewMeshActor : AInternalToolFrameworkActor {
};

// Class ModelingComponents.CreateMeshObjectTypeProperties
// Size: 0xe0 (Inherited: 0xb0)
struct UCreateMeshObjectTypeProperties : UInteractiveToolPropertySet {
	struct FString OutputType; // 0xb0(0x10)
	struct AVolume* VolumeType; // 0xc0(0x08)
	struct TArray<struct FString> OutputTypeNamesList; // 0xc8(0x10)
	bool bShowVolumeList; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)

	bool ShouldShowPropertySet(); // Function ModelingComponents.CreateMeshObjectTypeProperties.ShouldShowPropertySet // (Final|Native|Public|Const) // @ game+0x54c8c50
	struct TArray<struct FString> GetOutputTypeNamesFunc(); // Function ModelingComponents.CreateMeshObjectTypeProperties.GetOutputTypeNamesFunc // (Final|Native|Public) // @ game+0x54c8ca0
	enum class ECreateObjectTypeHint GetCurrentCreateMeshType(); // Function ModelingComponents.CreateMeshObjectTypeProperties.GetCurrentCreateMeshType // (Final|Native|Public|Const) // @ game+0x54c8c20
};

// Class ModelingComponents.OnAcceptHandleSourcesPropertiesSingle
// Size: 0xb8 (Inherited: 0xb0)
struct UOnAcceptHandleSourcesPropertiesSingle : UOnAcceptHandleSourcesPropertiesBase {
	enum class EHandleSourcesMethod HandleInputs; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

// Class ModelingComponents.PolygroupLayersProperties
// Size: 0xd0 (Inherited: 0xb0)
struct UPolygroupLayersProperties : UInteractiveToolPropertySet {
	struct FName ActiveGroupLayer; // 0xb0(0x0c)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct TArray<struct FString> GroupLayersList; // 0xc0(0x10)

	struct TArray<struct FString> GetGroupLayersFunc(); // Function ModelingComponents.PolygroupLayersProperties.GetGroupLayersFunc // (Final|Native|Public) // @ game+0x54c9c00
};

// Class ModelingComponents.WeightMapSetProperties
// Size: 0xd8 (Inherited: 0xb0)
struct UWeightMapSetProperties : UInteractiveToolPropertySet {
	struct FName WeightMap; // 0xb0(0x0c)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct TArray<struct FString> WeightMapsList; // 0xc0(0x10)
	bool bInvertWeightMap; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)

	struct TArray<struct FString> GetWeightMapsFunc(); // Function ModelingComponents.WeightMapSetProperties.GetWeightMapsFunc // (Final|Native|Public) // @ game+0x54c9c00
};

// Class ModelingComponents.GeometrySelectionManager
// Size: 0x290 (Inherited: 0x30)
struct UGeometrySelectionManager : UObject {
	char pad_30[0x28]; // 0x30(0x28)
	struct UGeometrySelectionEditCommandArguments* SelectionArguments; // 0x58(0x08)
	char pad_60[0x8]; // 0x60(0x08)
	struct UInteractiveToolsContext* ToolsContext; // 0x68(0x08)
	char pad_70[0x220]; // 0x70(0x220)
};

// Class ModelingComponents.PersistentMeshSelection
// Size: 0x90 (Inherited: 0x30)
struct UPersistentMeshSelection : UObject {
	char pad_30[0x60]; // 0x30(0x60)
};

// Class ModelingComponents.PersistentMeshSelectionManager
// Size: 0x48 (Inherited: 0x30)
struct UPersistentMeshSelectionManager : UObject {
	struct UInteractiveToolsContext* ParentContext; // 0x30(0x08)
	struct UPersistentMeshSelection* ActiveSelection; // 0x38(0x08)
	struct UPreviewGeometry* SelectionDisplay; // 0x40(0x08)
};

// Class ModelingComponents.PolygonSelectionMechanicProperties
// Size: 0xc8 (Inherited: 0xc8)
struct UPolygonSelectionMechanicProperties : UMeshTopologySelectionMechanicProperties {
};

// Class ModelingComponents.PolygonSelectionMechanic
// Size: 0xb10 (Inherited: 0xb00)
struct UPolygonSelectionMechanic : UMeshTopologySelectionMechanic {
	struct UPolygonSelectionMechanicProperties* Properties; // 0xb00(0x08)
	char pad_B08[0x8]; // 0xb08(0x08)
};

// Class ModelingComponents.ModelingSceneSnappingManager
// Size: 0x158 (Inherited: 0x30)
struct UModelingSceneSnappingManager : USceneSnappingManager {
	struct UInteractiveToolsContext* ParentContext; // 0x30(0x08)
	char pad_38[0x120]; // 0x38(0x120)
};

// Class ModelingComponents.MultiTransformer
// Size: 0x1b0 (Inherited: 0x30)
struct UMultiTransformer : UObject {
	char pad_30[0x60]; // 0x30(0x60)
	struct UInteractiveGizmoManager* GizmoManager; // 0x90(0x08)
	char pad_98[0x70]; // 0x98(0x70)
	struct UCombinedTransformGizmo* TransformGizmo; // 0x108(0x08)
	struct UTransformProxy* TransformProxy; // 0x110(0x08)
	struct UDragAlignmentMechanic* DragAlignmentMechanic; // 0x118(0x08)
	char pad_120[0x90]; // 0x120(0x90)
};

