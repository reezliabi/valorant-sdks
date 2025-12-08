// Class GeometryFramework.MeshCommandChangeTarget
// Size: 0x30 (Inherited: 0x30)
struct UMeshCommandChangeTarget : UInterface {
};

// Class GeometryFramework.MeshReplacementCommandChangeTarget
// Size: 0x30 (Inherited: 0x30)
struct UMeshReplacementCommandChangeTarget : UInterface {
};

// Class GeometryFramework.MeshVertexCommandChangeTarget
// Size: 0x30 (Inherited: 0x30)
struct UMeshVertexCommandChangeTarget : UInterface {
};

// Class GeometryFramework.BaseDynamicMeshComponent
// Size: 0x740 (Inherited: 0x6d0)
struct UBaseDynamicMeshComponent : UMeshComponent {
	char pad_6D0[0x20]; // 0x6d0(0x20)
	bool bExplicitShowWireframe; // 0x6f0(0x01)
	char pad_6F1[0x3]; // 0x6f1(0x03)
	struct FLinearColor WireframeColor; // 0x6f4(0x10)
	enum class EDynamicMeshComponentColorOverrideMode ColorMode; // 0x704(0x01)
	char pad_705[0x3]; // 0x705(0x03)
	struct FColor ConstantColor; // 0x708(0x04)
	enum class EDynamicMeshVertexColorTransformMode ColorSpaceMode; // 0x70c(0x01)
	bool bEnableFlatShading; // 0x70d(0x01)
	bool bEnableViewModeOverrides; // 0x70e(0x01)
	char pad_70F[0x1]; // 0x70f(0x01)
	struct UMaterialInterface* OverrideRenderMaterial; // 0x710(0x08)
	struct UMaterialInterface* SecondaryRenderMaterial; // 0x718(0x08)
	char pad_720[0x1]; // 0x720(0x01)
	bool bEnableRayTracing; // 0x721(0x01)
	char pad_722[0x6]; // 0x722(0x06)
	struct TArray<struct UMaterialInterface*> BaseMaterials; // 0x728(0x10)
	char pad_738[0x8]; // 0x738(0x08)

	void SetViewModeOverridesEnabled(bool bEnabled); // Function GeometryFramework.BaseDynamicMeshComponent.SetViewModeOverridesEnabled // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x544dec0
	void SetVertexColorSpaceTransformMode(enum class EDynamicMeshVertexColorTransformMode NewMode); // Function GeometryFramework.BaseDynamicMeshComponent.SetVertexColorSpaceTransformMode // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x544e180
	void SetShadowsEnabled(bool bEnabled); // Function GeometryFramework.BaseDynamicMeshComponent.SetShadowsEnabled // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x544e000
	void SetSecondaryRenderMaterial(struct UMaterialInterface* Material); // Function GeometryFramework.BaseDynamicMeshComponent.SetSecondaryRenderMaterial // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x544da60
	void SetSecondaryBuffersVisibility(bool bSetVisible); // Function GeometryFramework.BaseDynamicMeshComponent.SetSecondaryBuffersVisibility // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x544d8f0
	void SetOverrideRenderMaterial(struct UMaterialInterface* Material); // Function GeometryFramework.BaseDynamicMeshComponent.SetOverrideRenderMaterial // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x544dd80
	void SetEnableWireframeRenderPass(bool bEnable); // Function GeometryFramework.BaseDynamicMeshComponent.SetEnableWireframeRenderPass // (Native|Public|BlueprintCallable) // @ game+0x544e530
	void SetEnableRaytracing(bool bSetEnabled); // Function GeometryFramework.BaseDynamicMeshComponent.SetEnableRaytracing // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x544d7b0
	void SetEnableFlatShading(bool bEnable); // Function GeometryFramework.BaseDynamicMeshComponent.SetEnableFlatShading // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x46325c0
	void SetConstantOverrideColor(struct FColor NewColor); // Function GeometryFramework.BaseDynamicMeshComponent.SetConstantOverrideColor // (RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x544e2c0
	void SetColorOverrideMode(enum class EDynamicMeshComponentColorOverrideMode NewMode); // Function GeometryFramework.BaseDynamicMeshComponent.SetColorOverrideMode // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x544e3f0
	bool HasOverrideRenderMaterial(int32_t K); // Function GeometryFramework.BaseDynamicMeshComponent.HasOverrideRenderMaterial // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x544dc70
	bool GetViewModeOverridesEnabled(); // Function GeometryFramework.BaseDynamicMeshComponent.GetViewModeOverridesEnabled // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x544de80
	enum class EDynamicMeshVertexColorTransformMode GetVertexColorSpaceTransformMode(); // Function GeometryFramework.BaseDynamicMeshComponent.GetVertexColorSpaceTransformMode // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x544e140
	bool GetShadowsEnabled(); // Function GeometryFramework.BaseDynamicMeshComponent.GetShadowsEnabled // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x544dfc0
	struct UMaterialInterface* GetSecondaryRenderMaterial(); // Function GeometryFramework.BaseDynamicMeshComponent.GetSecondaryRenderMaterial // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x544d9f0
	bool GetSecondaryBuffersVisibility(); // Function GeometryFramework.BaseDynamicMeshComponent.GetSecondaryBuffersVisibility // (RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x544d8b0
	struct UMaterialInterface* GetOverrideRenderMaterial(int32_t MaterialIndex); // Function GeometryFramework.BaseDynamicMeshComponent.GetOverrideRenderMaterial // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x544db60
	bool GetFlatShadingEnabled(); // Function GeometryFramework.BaseDynamicMeshComponent.GetFlatShadingEnabled // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x544e100
	bool GetEnableWireframeRenderPass(); // Function GeometryFramework.BaseDynamicMeshComponent.GetEnableWireframeRenderPass // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x544e4f0
	bool GetEnableRaytracing(); // Function GeometryFramework.BaseDynamicMeshComponent.GetEnableRaytracing // (RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x544d770
	struct UDynamicMesh* GetDynamicMesh(); // Function GeometryFramework.BaseDynamicMeshComponent.GetDynamicMesh // (Native|Public|BlueprintCallable) // @ game+0x544e630
	struct FColor GetConstantOverrideColor(); // Function GeometryFramework.BaseDynamicMeshComponent.GetConstantOverrideColor // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x544e280
	enum class EDynamicMeshComponentColorOverrideMode GetColorOverrideMode(); // Function GeometryFramework.BaseDynamicMeshComponent.GetColorOverrideMode // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x544e3b0
	void ClearSecondaryRenderMaterial(); // Function GeometryFramework.BaseDynamicMeshComponent.ClearSecondaryRenderMaterial // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x544da30
	void ClearOverrideRenderMaterial(); // Function GeometryFramework.BaseDynamicMeshComponent.ClearOverrideRenderMaterial // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x4632bf0
};

// Class GeometryFramework.DynamicMeshComponent
// Size: 0x9a0 (Inherited: 0x740)
struct UDynamicMeshComponent : UBaseDynamicMeshComponent {
	struct UDynamicMesh* MeshObject; // 0x740(0x08)
	char pad_748[0x138]; // 0x748(0x138)
	enum class EDynamicMeshComponentTangentsMode TangentsType; // 0x880(0x01)
	char pad_881[0x3f]; // 0x881(0x3f)
	enum class ECollisionTraceFlag CollisionType; // 0x8c0(0x01)
	bool bUseAsyncCooking; // 0x8c1(0x01)
	bool bEnableComplexCollision; // 0x8c2(0x01)
	bool bDeferCollisionUpdates; // 0x8c3(0x01)
	char pad_8C4[0x4]; // 0x8c4(0x04)
	struct UBodySetup* MeshBodySetup; // 0x8c8(0x08)
	char pad_8D0[0x38]; // 0x8d0(0x38)
	struct FKAggregateGeom AggGeom; // 0x908(0x78)
	struct TArray<struct UBodySetup*> AsyncBodySetupQueue; // 0x980(0x10)
	char pad_990[0x10]; // 0x990(0x10)

	bool ValidateMaterialSlots(bool bCreateIfMissing, bool bDeleteExtraSlots); // Function GeometryFramework.DynamicMeshComponent.ValidateMaterialSlots // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x5454900
	void UpdateCollision(bool bOnlyIfPending); // Function GeometryFramework.DynamicMeshComponent.UpdateCollision // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x54542e0
	void SetTangentsType(enum class EDynamicMeshComponentTangentsMode NewTangentsType); // Function GeometryFramework.DynamicMeshComponent.SetTangentsType // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x54547f0
	void SetDynamicMesh(struct UDynamicMesh* NewMesh); // Function GeometryFramework.DynamicMeshComponent.SetDynamicMesh // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x5455020
	void SetDeferredCollisionUpdatesEnabled(bool bEnabled, bool bImmediateUpdate); // Function GeometryFramework.DynamicMeshComponent.SetDeferredCollisionUpdatesEnabled // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x54543e0
	void SetComplexAsSimpleCollisionEnabled(bool bEnabled, bool bImmediateUpdate); // Function GeometryFramework.DynamicMeshComponent.SetComplexAsSimpleCollisionEnabled // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x54545b0
	void NotifyMeshVertexAttributesModified(bool bPositions, bool bNormals, bool bUVs, bool bColors); // Function GeometryFramework.DynamicMeshComponent.NotifyMeshVertexAttributesModified // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x5454ce0
	void NotifyMeshModified(); // Function GeometryFramework.DynamicMeshComponent.NotifyMeshModified // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x5454ff0
	enum class EDynamicMeshComponentTangentsMode GetTangentsTypePure(); // Function GeometryFramework.DynamicMeshComponent.GetTangentsTypePure // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x54547c0
	enum class EDynamicMeshComponentTangentsMode GetTangentsType(); // Function GeometryFramework.DynamicMeshComponent.GetTangentsType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x54547c0
	void EnableComplexAsSimpleCollision(); // Function GeometryFramework.DynamicMeshComponent.EnableComplexAsSimpleCollision // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x5454740
	void ConfigureMaterialSet(struct TArray<struct UMaterialInterface*>& NewMaterialSet); // Function GeometryFramework.DynamicMeshComponent.ConfigureMaterialSet // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5454b60
};

// Class GeometryFramework.DynamicMeshActor
// Size: 0x478 (Inherited: 0x460)
struct ADynamicMeshActor : AActor {
	struct UDynamicMeshComponent* DynamicMeshComponent; // 0x460(0x08)
	bool bEnableComputeMeshPool; // 0x468(0x01)
	char pad_469[0x7]; // 0x469(0x07)
	struct UDynamicMeshPool* DynamicMeshPool; // 0x470(0x08)

	bool ReleaseComputeMesh(struct UDynamicMesh* Mesh); // Function GeometryFramework.DynamicMeshActor.ReleaseComputeMesh // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x545a1b0
	void ReleaseAllComputeMeshes(); // Function GeometryFramework.DynamicMeshActor.ReleaseAllComputeMeshes // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x545a150
	struct UDynamicMeshComponent* GetDynamicMeshComponent(); // Function GeometryFramework.DynamicMeshActor.GetDynamicMeshComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x41d31e0
	struct UDynamicMeshPool* GetComputeMeshPool(); // Function GeometryFramework.DynamicMeshActor.GetComputeMeshPool // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x545a3e0
	void FreeAllComputeMeshes(); // Function GeometryFramework.DynamicMeshActor.FreeAllComputeMeshes // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x545a0c0
	struct UDynamicMesh* AllocateComputeMesh(); // Function GeometryFramework.DynamicMeshActor.AllocateComputeMesh // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x545a360
};

// Class GeometryFramework.DynamicMeshGenerator
// Size: 0x30 (Inherited: 0x30)
struct UDynamicMeshGenerator : UObject {
};

// Class GeometryFramework.DynamicMesh
// Size: 0xb8 (Inherited: 0x30)
struct UDynamicMesh : UObject {
	char pad_30[0x48]; // 0x30(0x48)
	struct FMulticastInlineDelegate MeshModifiedBPEvent; // 0x78(0x10)
	char pad_88[0x20]; // 0x88(0x20)
	struct UDynamicMeshGenerator* MeshGenerator; // 0xa8(0x08)
	bool bEnableMeshGenerator; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)

	struct UDynamicMesh* ResetToCube(); // Function GeometryFramework.DynamicMesh.ResetToCube // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x545b7a0
	struct UDynamicMesh* Reset(); // Function GeometryFramework.DynamicMesh.Reset // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x545b7d0
	bool IsEmpty(); // Function GeometryFramework.DynamicMesh.IsEmpty // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x545b770
	int32_t GetTriangleCount(); // Function GeometryFramework.DynamicMesh.GetTriangleCount // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x545b740
};

// Class GeometryFramework.DynamicMeshPool
// Size: 0x50 (Inherited: 0x30)
struct UDynamicMeshPool : UObject {
	struct TArray<struct UDynamicMesh*> CachedMeshes; // 0x30(0x10)
	struct TArray<struct UDynamicMesh*> AllCreatedMeshes; // 0x40(0x10)

	void ReturnMesh(struct UDynamicMesh* Mesh); // Function GeometryFramework.DynamicMeshPool.ReturnMesh // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x545bb80
	void ReturnAllMeshes(); // Function GeometryFramework.DynamicMeshPool.ReturnAllMeshes // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x545bb60
	struct UDynamicMesh* RequestMesh(); // Function GeometryFramework.DynamicMeshPool.RequestMesh // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x545bcf0
	void FreeAllMeshes(); // Function GeometryFramework.DynamicMeshPool.FreeAllMeshes // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x545bb00
};

