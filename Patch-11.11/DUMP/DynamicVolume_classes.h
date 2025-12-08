// Class DynamicVolume.DynamicVolumeBuilder
// Size: 0x30 (Inherited: 0x30)
struct UDynamicVolumeBuilder : UObject {
};

// Class DynamicVolume.DynamicVolumeComponent
// Size: 0x440 (Inherited: 0x330)
struct UDynamicVolumeComponent : USceneComponent {
	struct FMulticastInlineDelegate OnVolumeInitialized; // 0x330(0x10)
	struct FMulticastInlineDelegate OnVolumeFinishedBuilding; // 0x340(0x10)
	struct FMulticastInlineDelegate OnActorsBeginOverlap; // 0x350(0x10)
	struct FMulticastInlineDelegate OnActorsEndOverlap; // 0x360(0x10)
	char pad_370[0x60]; // 0x370(0x60)
	float DebugDrawFadeTime; // 0x3d0(0x04)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct UPrimitiveComponent* VolumeMaxExtentShape; // 0x3d8(0x08)
	float VolumeResolution; // 0x3e0(0x04)
	char pad_3E4[0x4]; // 0x3e4(0x04)
	double BuilderTimeLimitPerTick; // 0x3e8(0x08)
	double OverlapTimeLimitPerTick; // 0x3f0(0x08)
	bool bAxisAligned; // 0x3f8(0x01)
	char pad_3F9[0x27]; // 0x3f9(0x27)
	struct TArray<struct AActor*> ActorsThatBeganOverlapSinceLastTick; // 0x420(0x10)
	struct TArray<struct AActor*> ActorsThatEndedOverlapSinceLastTick; // 0x430(0x10)

	void SetCollisionEnabled(enum class ECollisionEnabled NewType); // Function DynamicVolume.DynamicVolumeComponent.SetCollisionEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x51bb360
	void OnBoundingShapeEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function DynamicVolume.DynamicVolumeComponent.OnBoundingShapeEndOverlap // (Final|Native|Private) // @ game+0x51ba800
	void OnBoundingShapeBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function DynamicVolume.DynamicVolumeComponent.OnBoundingShapeBeginOverlap // (Final|Native|Private|HasOutParms) // @ game+0x51bab90
	bool IsFinishedBuilding(); // Function DynamicVolume.DynamicVolumeComponent.IsFinishedBuilding // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x51bb000
	bool IsActorInsideVolume(struct AActor* ActorToTest); // Function DynamicVolume.DynamicVolumeComponent.IsActorInsideVolume // (Native|Public|BlueprintCallable) // @ game+0x51bb040
	struct FTransform GetVolumeTransform(); // Function DynamicVolume.DynamicVolumeComponent.GetVolumeTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x51bb2e0
	float GetVolumeResolution(); // Function DynamicVolume.DynamicVolumeComponent.GetVolumeResolution // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x51bb340
	struct UDynamicVolumeBuilder* GetVolumeBuilderPriorToBuild(); // Function DynamicVolume.DynamicVolumeComponent.GetVolumeBuilderPriorToBuild // (Final|Native|Public|BlueprintCallable) // @ game+0x51bb190
	float GetBuildSpreadDistance(); // Function DynamicVolume.DynamicVolumeComponent.GetBuildSpreadDistance // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x51bb150
	void DrawDebugLines(struct TArray<struct FBatchedLine> DebugLine); // Function DynamicVolume.DynamicVolumeComponent.DrawDebugLines // (Final|Net|NetReliableNative|Event|NetMulticast|Private|Const) // @ game+0x51ba6d0
};

// Class DynamicVolume.GroundVolumeAreaVisualizationComponent
// Size: 0x3d0 (Inherited: 0x330)
struct UGroundVolumeAreaVisualizationComponent : USceneComponent {
	struct FFloatInterval HorizontalFadeOut; // 0x330(0x08)
	float VolumeExpansionAmountForOutsideNodes; // 0x338(0x04)
	float UVBorderScale; // 0x33c(0x04)
	struct FFloatInterval VerticalFadeOut; // 0x340(0x08)
	struct FName GroundVolumeComponentName; // 0x348(0x0c)
	float MaskPixelDensity; // 0x354(0x04)
	float HeightTolerance; // 0x358(0x04)
	float SplitPlaneTolerance; // 0x35c(0x04)
	bool bLimitPerFrameFragmentProcessing; // 0x360(0x01)
	char pad_361[0x1]; // 0x361(0x01)
	uint16_t PerFrameFragmentProcessingLimit; // 0x362(0x02)
	enum class GroundVolumeDrawPriority DrawPriority; // 0x364(0x01)
	char pad_365[0x3]; // 0x365(0x03)
	int32_t CustomDrawPriority; // 0x368(0x04)
	char pad_36C[0x4]; // 0x36c(0x04)
	struct UGroundVolumeComponent* GroundVolumeComponent; // 0x370(0x08)
	struct USceneCaptureComponent2D* DepthCapture; // 0x378(0x08)
	char pad_380[0x8]; // 0x380(0x08)
	struct UTexture2D* AreaTexture; // 0x388(0x08)
	char pad_390[0x40]; // 0x390(0x40)

	void OnGroundVolumeInitialized(); // Function DynamicVolume.GroundVolumeAreaVisualizationComponent.OnGroundVolumeInitialized // (Final|Native|Private) // @ game+0x51bc520
	bool IsFinishedBuilding(); // Function DynamicVolume.GroundVolumeAreaVisualizationComponent.IsFinishedBuilding // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x51bc640
	float GetVisualRadiusTexAligned(); // Function DynamicVolume.GroundVolumeAreaVisualizationComponent.GetVisualRadiusTexAligned // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x51bc570
	float GetVisualRadius(); // Function DynamicVolume.GroundVolumeAreaVisualizationComponent.GetVisualRadius // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x51bc540
	struct UTexture* GetDepthVisualizationTexture(); // Function DynamicVolume.GroundVolumeAreaVisualizationComponent.GetDepthVisualizationTexture // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x51bc610
	float GetDepthCaptureHeight(); // Function DynamicVolume.GroundVolumeAreaVisualizationComponent.GetDepthCaptureHeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x51bc5f0
	struct TArray<struct FBox> GetCosmeticBoxes(); // Function DynamicVolume.GroundVolumeAreaVisualizationComponent.GetCosmeticBoxes // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x51bc5a0
	struct UTexture* GetAreaVisualizationTexture(); // Function DynamicVolume.GroundVolumeAreaVisualizationComponent.GetAreaVisualizationTexture // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x51bc5d0
};

// Class DynamicVolume.GroundVolumeBuilderLineMethodBase
// Size: 0x200 (Inherited: 0x30)
struct UGroundVolumeBuilderLineMethodBase : UObject {
	char pad_30[0x1d0]; // 0x30(0x1d0)
};

// Class DynamicVolume.GroundVolumeBuilderLineMethodV1
// Size: 0x240 (Inherited: 0x200)
struct UGroundVolumeBuilderLineMethodV1 : UGroundVolumeBuilderLineMethodBase {
	char pad_200[0x40]; // 0x200(0x40)
};

// Class DynamicVolume.GroundVolumeBuilder
// Size: 0x40 (Inherited: 0x30)
struct UGroundVolumeBuilder : UDynamicVolumeBuilder {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class DynamicVolume.GroundVolumeBuilderLineMethod
// Size: 0xf0 (Inherited: 0x40)
struct UGroundVolumeBuilderLineMethod : UGroundVolumeBuilder {
	bool bUseMaximumVolumeConstraint; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	double MaximumVolumeConstraint; // 0x48(0x08)
	int32_t RaycastMaxNodesPerWalk; // 0x50(0x04)
	bool bUseGoalPosition; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	struct FVector GoalPosition; // 0x58(0x18)
	float WalkHeight; // 0x70(0x04)
	bool bExtendCeilingAboveWalkHeight; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	double ExtendCeilingAboveWalkHeight; // 0x78(0x08)
	float MaximumFallHeight; // 0x80(0x04)
	float PopUpHeight; // 0x84(0x04)
	int32_t MaximumPopUpEnergy; // 0x88(0x04)
	bool bUseFallHeightStop; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	float FallHeightStopFalloffSize; // 0x90(0x04)
	float ZLayerHeightTolerance; // 0x94(0x04)
	float RampAngleTolerance; // 0x98(0x04)
	float FloorPushDownTolerance; // 0x9c(0x04)
	float WallPushOffTolerance; // 0xa0(0x04)
	float FallOffHeightReRaycastTolerance; // 0xa4(0x04)
	float DownwardRampReRaycastHeightTolerance; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct TArray<struct FName> IgnoreObjectsWithTag; // 0xb0(0x10)
	enum class ECollisionChannel RaycastCollisionChannel; // 0xc0(0x01)
	enum class ECollisionChannel PreciseRaycastCollisionChannel; // 0xc1(0x01)
	char pad_C2[0x6]; // 0xc2(0x06)
	struct TArray<enum class ECollisionChannel> RaycastObjectFilterWithinChannel; // 0xc8(0x10)
	struct UGroundVolumeBuilderLineMethodBase* ImplClass; // 0xd8(0x08)
	char pad_E0[0x8]; // 0xe0(0x08)
	struct UGroundVolumeBuilderLineMethodBase* Impl; // 0xe8(0x08)
};

// Class DynamicVolume.GroundVolumeBuilderLineMethodV2
// Size: 0x2b0 (Inherited: 0x200)
struct UGroundVolumeBuilderLineMethodV2 : UGroundVolumeBuilderLineMethodBase {
	char pad_200[0xb0]; // 0x200(0xb0)
};

// Class DynamicVolume.GroundVolumeComponent
// Size: 0x640 (Inherited: 0x440)
struct UGroundVolumeComponent : UDynamicVolumeComponent {
	float PlayerJumpOverlapMaxHeight; // 0x440(0x04)
	bool bEstimateJumpFromHeightUponEnterVolume; // 0x444(0x01)
	char pad_445[0x3]; // 0x445(0x03)
	float CeilingBelowObjectAngle; // 0x448(0x04)
	float CeilingBelowObjectIgnoreHeight; // 0x44c(0x04)
	bool bActivateFragmentsOnCreate; // 0x450(0x01)
	char pad_451[0x7]; // 0x451(0x07)
	struct FMulticastInlineDelegate OnGroundVolumeFragmentActivated; // 0x458(0x10)
	struct UGroundVolumeBuilder* GroundVolumeBuilder; // 0x468(0x08)
	int32_t FinalCount; // 0x470(0x04)
	char pad_474[0x4]; // 0x474(0x04)
	struct FGroundVolumeFragmentArray FragmentInfo; // 0x478(0x170)
	char pad_5E8[0x58]; // 0x5e8(0x58)

	void SetFragmentActive(int32_t SparseFragmentIndex); // Function DynamicVolume.GroundVolumeComponent.SetFragmentActive // (Final|Native|Public|BlueprintCallable) // @ game+0x51bec90
	float GetTravelDistance(struct FVector& WorldPosition); // Function DynamicVolume.GroundVolumeComponent.GetTravelDistance // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const) // @ game+0x51bf2b0
	struct TArray<int32_t> GetFragmentsAtGridPos(struct FIntPoint& GridPos); // Function DynamicVolume.GroundVolumeComponent.GetFragmentsAtGridPos // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x51bf130
	struct FVector GetFragmentGridLocation(struct FIntPoint GridPos); // Function DynamicVolume.GroundVolumeComponent.GetFragmentGridLocation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x51be160
	int32_t GetFragmentCount(); // Function DynamicVolume.GroundVolumeComponent.GetFragmentCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x51bf290
	bool GetFragmentAtWorldPositionIfInside(struct FVector& WorldPosition, float Height, bool FindInactiveFragements, struct FGroundVolumeFragment& OutFragment); // Function DynamicVolume.GroundVolumeComponent.GetFragmentAtWorldPositionIfInside // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x51be3d0
	bool GetFragmentAtSparseIndex(int32_t SparseFragmentIndex, struct FGroundVolumeFragment& OutFragment); // Function DynamicVolume.GroundVolumeComponent.GetFragmentAtSparseIndex // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x51bedc0
	bool GetFragmentAtFragmentIndex(struct FIntPoint& GridPos, int32_t FragmentIndex, struct FGroundVolumeFragment& OutFragment); // Function DynamicVolume.GroundVolumeComponent.GetFragmentAtFragmentIndex // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x51be890
	float GetDistanceToEdge(struct FVector& Location); // Function DynamicVolume.GroundVolumeComponent.GetDistanceToEdge // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const) // @ game+0x51bf3b0
	void DebugDrawText(); // Function DynamicVolume.GroundVolumeComponent.DebugDrawText // (Final|Native|Public) // @ game+0x386c9d0
};

