// Class NavigationSystem.CrowdManagerBase
// Size: 0x30 (Inherited: 0x30)
struct UCrowdManagerBase : UObject {
};

// Class NavigationSystem.NavigationGraphNode
// Size: 0x460 (Inherited: 0x460)
struct ANavigationGraphNode : AActor {
};

// Class NavigationSystem.NavigationGraphNodeComponent
// Size: 0x360 (Inherited: 0x330)
struct UNavigationGraphNodeComponent : USceneComponent {
	struct FNavGraphNode Node; // 0x330(0x18)
	struct UNavigationGraphNodeComponent* NextNodeComponent; // 0x348(0x08)
	struct UNavigationGraphNodeComponent* PrevNodeComponent; // 0x350(0x08)
	char pad_358[0x8]; // 0x358(0x08)
};

// Class NavigationSystem.NavigationPathGenerator
// Size: 0x30 (Inherited: 0x30)
struct UNavigationPathGenerator : UInterface {
};

// Class NavigationSystem.NavLinkCustomInterface
// Size: 0x30 (Inherited: 0x30)
struct UNavLinkCustomInterface : UInterface {
};

// Class NavigationSystem.NavLinkHostInterface
// Size: 0x30 (Inherited: 0x30)
struct UNavLinkHostInterface : UInterface {
};

// Class NavigationSystem.NavLinkTrivial
// Size: 0x58 (Inherited: 0x58)
struct UNavLinkTrivial : UNavLinkDefinition {
};

// Class NavigationSystem.NavNodeInterface
// Size: 0x30 (Inherited: 0x30)
struct UNavNodeInterface : UInterface {
};

// Class NavigationSystem.NavigationData
// Size: 0x688 (Inherited: 0x460)
struct ANavigationData : AActor {
	char pad_460[0x8]; // 0x460(0x08)
	struct UPrimitiveComponent* RenderingComp; // 0x468(0x08)
	struct FNavDataConfig NavDataConfig; // 0x470(0x98)
	char bEnableDrawing : 1; // 0x508(0x01)
	char bForceRebuildOnLoad : 1; // 0x508(0x01)
	char bAutoDestroyWhenNoNavigation : 1; // 0x508(0x01)
	char bCanBeMainNavData : 1; // 0x508(0x01)
	char bCanSpawnOnRebuild : 1; // 0x508(0x01)
	char bRebuildAtRuntime : 1; // 0x508(0x01)
	char pad_508_6 : 2; // 0x508(0x01)
	char pad_509[0x3]; // 0x509(0x03)
	enum class ERuntimeGenerationType RuntimeGeneration; // 0x50c(0x01)
	char pad_50D[0x3]; // 0x50d(0x03)
	float ObservedPathsTickInterval; // 0x510(0x04)
	uint32_t DataVersion; // 0x514(0x04)
	char pad_518[0x108]; // 0x518(0x108)
	struct TArray<struct FSupportedAreaData> SupportedAreas; // 0x620(0x10)
	char pad_630[0x58]; // 0x630(0x58)
};

// Class NavigationSystem.AbstractNavData
// Size: 0x688 (Inherited: 0x688)
struct AAbstractNavData : ANavigationData {
};

// Class NavigationSystem.NavArea
// Size: 0x50 (Inherited: 0x38)
struct UNavArea : UNavAreaBase {
	float DefaultCost; // 0x38(0x04)
	float FixedAreaEnteringCost; // 0x3c(0x04)
	struct FColor DrawColor; // 0x40(0x04)
	struct FNavAgentSelector SupportedAgents; // 0x44(0x04)
	char bSupportsAgent0 : 1; // 0x48(0x01)
	char bSupportsAgent1 : 1; // 0x48(0x01)
	char bSupportsAgent2 : 1; // 0x48(0x01)
	char bSupportsAgent3 : 1; // 0x48(0x01)
	char bSupportsAgent4 : 1; // 0x48(0x01)
	char bSupportsAgent5 : 1; // 0x48(0x01)
	char bSupportsAgent6 : 1; // 0x48(0x01)
	char bSupportsAgent7 : 1; // 0x48(0x01)
	char bSupportsAgent8 : 1; // 0x49(0x01)
	char bSupportsAgent9 : 1; // 0x49(0x01)
	char bSupportsAgent10 : 1; // 0x49(0x01)
	char bSupportsAgent11 : 1; // 0x49(0x01)
	char bSupportsAgent12 : 1; // 0x49(0x01)
	char bSupportsAgent13 : 1; // 0x49(0x01)
	char bSupportsAgent14 : 1; // 0x49(0x01)
	char bSupportsAgent15 : 1; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// Class NavigationSystem.NavAreaMeta
// Size: 0x50 (Inherited: 0x50)
struct UNavAreaMeta : UNavArea {
};

// Class NavigationSystem.NavAreaMeta_SwitchByAgent
// Size: 0xd0 (Inherited: 0x50)
struct UNavAreaMeta_SwitchByAgent : UNavAreaMeta {
	struct UNavArea* Agent0Area; // 0x50(0x08)
	struct UNavArea* Agent1Area; // 0x58(0x08)
	struct UNavArea* Agent2Area; // 0x60(0x08)
	struct UNavArea* Agent3Area; // 0x68(0x08)
	struct UNavArea* Agent4Area; // 0x70(0x08)
	struct UNavArea* Agent5Area; // 0x78(0x08)
	struct UNavArea* Agent6Area; // 0x80(0x08)
	struct UNavArea* Agent7Area; // 0x88(0x08)
	struct UNavArea* Agent8Area; // 0x90(0x08)
	struct UNavArea* Agent9Area; // 0x98(0x08)
	struct UNavArea* Agent10Area; // 0xa0(0x08)
	struct UNavArea* Agent11Area; // 0xa8(0x08)
	struct UNavArea* Agent12Area; // 0xb0(0x08)
	struct UNavArea* Agent13Area; // 0xb8(0x08)
	struct UNavArea* Agent14Area; // 0xc0(0x08)
	struct UNavArea* Agent15Area; // 0xc8(0x08)
};

// Class NavigationSystem.NavArea_Default
// Size: 0x50 (Inherited: 0x50)
struct UNavArea_Default : UNavArea {
};

// Class NavigationSystem.NavArea_LowHeight
// Size: 0x50 (Inherited: 0x50)
struct UNavArea_LowHeight : UNavArea {
};

// Class NavigationSystem.NavArea_Null
// Size: 0x50 (Inherited: 0x50)
struct UNavArea_Null : UNavArea {
};

// Class NavigationSystem.NavArea_Obstacle
// Size: 0x50 (Inherited: 0x50)
struct UNavArea_Obstacle : UNavArea {
};

// Class NavigationSystem.NavCollision
// Size: 0xd8 (Inherited: 0x78)
struct UNavCollision : UNavCollisionBase {
	char pad_78[0x10]; // 0x78(0x10)
	struct TArray<struct FNavCollisionCylinder> CylinderCollision; // 0x88(0x10)
	struct TArray<struct FNavCollisionBox> BoxCollision; // 0x98(0x10)
	struct UNavArea* AreaClass; // 0xa8(0x08)
	char bGatherConvexGeometry : 1; // 0xb0(0x01)
	char bCreateOnClient : 1; // 0xb0(0x01)
	char pad_B0_2 : 6; // 0xb0(0x01)
	char pad_B1[0x27]; // 0xb1(0x27)
};

// Class NavigationSystem.NavigationQueryFilter
// Size: 0x50 (Inherited: 0x30)
struct UNavigationQueryFilter : UObject {
	struct TArray<struct FNavigationFilterArea> Areas; // 0x30(0x10)
	struct FNavigationFilterFlags IncludeFlags; // 0x40(0x04)
	struct FNavigationFilterFlags ExcludeFlags; // 0x44(0x04)
	char pad_48[0x8]; // 0x48(0x08)
};

// Class NavigationSystem.RecastFilter_UseDefaultArea
// Size: 0x50 (Inherited: 0x50)
struct URecastFilter_UseDefaultArea : UNavigationQueryFilter {
};

// Class NavigationSystem.NavigationGraph
// Size: 0x688 (Inherited: 0x688)
struct ANavigationGraph : ANavigationData {
};

// Class NavigationSystem.NavigationInvokerComponent
// Size: 0xe8 (Inherited: 0xd8)
struct UNavigationInvokerComponent : UActorComponent {
	float TileGenerationRadius; // 0xd8(0x04)
	float TileRemovalRadius; // 0xdc(0x04)
	struct FNavAgentSelector SupportedAgents; // 0xe0(0x04)
	enum class ENavigationInvokerPriority Priority; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
};

// Class NavigationSystem.NavigationPath
// Size: 0x90 (Inherited: 0x30)
struct UNavigationPath : UObject {
	struct FMulticastInlineDelegate PathUpdatedNotifier; // 0x30(0x10)
	struct TArray<struct FVector> PathPoints; // 0x40(0x10)
	enum class ENavigationOptionFlag RecalculateOnInvalidation; // 0x50(0x01)
	char pad_51[0x3f]; // 0x51(0x3f)

	bool IsValid(); // Function NavigationSystem.NavigationPath.IsValid // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x50026e0
	bool IsStringPulled(); // Function NavigationSystem.NavigationPath.IsStringPulled // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ae4720
	bool IsPartial(); // Function NavigationSystem.NavigationPath.IsPartial // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5002700
	double GetPathLength(); // Function NavigationSystem.NavigationPath.GetPathLength // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x50027a0
	double GetPathCost(); // Function NavigationSystem.NavigationPath.GetPathCost // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5002740
	struct FString GetDebugString(); // Function NavigationSystem.NavigationPath.GetDebugString // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5002aa0
	void EnableRecalculationOnInvalidation(enum class ENavigationOptionFlag DoRecalculation); // Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x50027d0
	void EnableDebugDrawing(bool bShouldDrawDebugData, struct FLinearColor PathColor); // Function NavigationSystem.NavigationPath.EnableDebugDrawing // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x50028f0
};

// Class NavigationSystem.NavigationSystemV1
// Size: 0x15c0 (Inherited: 0x30)
struct UNavigationSystemV1 : UNavigationSystemBase {
	struct ANavigationData* MainNavData; // 0x30(0x08)
	struct ANavigationData* AbstractNavData; // 0x38(0x08)
	struct FName DefaultAgentName; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TSoftClassPtr<UObject> CrowdManagerClass; // 0x50(0x30)
	char bAutoCreateNavigationData : 1; // 0x80(0x01)
	char bSpawnNavDataInNavBoundsLevel : 1; // 0x80(0x01)
	char bAllowClientSideNavigation : 1; // 0x80(0x01)
	char bShouldDiscardSubLevelNavData : 1; // 0x80(0x01)
	char bTickWhilePaused : 1; // 0x80(0x01)
	char bSupportRebuilding : 1; // 0x80(0x01)
	char bInitialBuildingLocked : 1; // 0x80(0x01)
	char pad_80_7 : 1; // 0x80(0x01)
	char bSkipAgentHeightCheckWhenPickingNavData : 1; // 0x81(0x01)
	char pad_81_1 : 7; // 0x81(0x01)
	char pad_82[0x2]; // 0x82(0x02)
	int32_t GeometryExportTriangleCountWarningThreshold; // 0x84(0x04)
	char bGenerateNavigationOnlyAroundNavigationInvokers : 1; // 0x88(0x01)
	char pad_88_1 : 7; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float ActiveTilesUpdateInterval; // 0x8c(0x04)
	enum class ENavDataGatheringModeConfig DataGatheringMode; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	float DirtyAreaWarningSizeThreshold; // 0x94(0x04)
	float GatheringNavModifiersWarningLimitTime; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct TArray<struct FNavDataConfig> SupportedAgents; // 0xa0(0x10)
	struct FNavAgentSelector SupportedAgentsMask; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FBox BuildBounds; // 0xb8(0x38)
	struct TArray<struct ANavigationData*> NavDataSet; // 0xf0(0x10)
	struct TArray<struct ANavigationData*> NavDataRegistrationQueue; // 0x100(0x10)
	char pad_110[0x10]; // 0x110(0x10)
	struct FMulticastInlineDelegate OnNavDataRegisteredEvent; // 0x120(0x10)
	struct FMulticastInlineDelegate OnNavigationGenerationFinishedDelegate; // 0x130(0x10)
	char pad_140[0xf8]; // 0x140(0xf8)
	enum class FNavigationSystemRunMode OperationMode; // 0x238(0x01)
	char pad_239[0x1387]; // 0x239(0x1387)

	void UnregisterNavigationInvoker(struct AActor* Invoker); // Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x5005590
	void SetMaxSimultaneousTileGenerationJobsCount(int32_t MaxNumberOfJobs); // Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x5005a00
	void SetGeometryGatheringMode(enum class ENavDataGatheringModeConfig NewMode); // Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x5005490
	void ResetMaxSimultaneousTileGenerationJobsCount(); // Function NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x5005900
	void RegisterNavigationInvoker(struct AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius); // Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x5005690
	void OnNavigationBoundsUpdated(struct ANavMeshBoundsVolume* NavVolume); // Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x5005060
	bool NavigationRaycast(struct UObject* WorldContextObject, struct FVector& RayStart, struct FVector& RayEnd, struct FVector& HitLocation, struct UNavigationQueryFilter* FilterClass, struct AController* Querier); // Function NavigationSystem.NavigationSystemV1.NavigationRaycast // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5005b70
	bool K2_ReplaceAreaInOctreeData(struct UObject* Object, struct UNavArea* OldArea, struct UNavArea* NewArea); // Function NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x5005210
	bool K2_ProjectPointToNavigation(struct UObject* WorldContextObject, struct FVector& Point, struct FVector& ProjectedLocation, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass, struct FVector QueryExtent); // Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5007700
	bool K2_GetRandomReachablePointInRadius(struct UObject* WorldContextObject, struct FVector& Origin, struct FVector& RandomLocation, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x50072e0
	bool K2_GetRandomPointInNavigableRadius(struct UObject* WorldContextObject, struct FVector& Origin, struct FVector& RandomLocation, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5004c40
	bool K2_GetRandomLocationInNavigableRadius(struct UObject* WorldContextObject, struct FVector& Origin, struct FVector& RandomLocation, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5004c40
	bool IsNavigationBeingBuiltOrLocked(struct UObject* WorldContextObject); // Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5006880
	bool IsNavigationBeingBuilt(struct UObject* WorldContextObject); // Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5006970
	enum class ENavigationQueryResult GetPathLength(struct UObject* WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, double& PathLength, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetPathLength // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5006a60
	enum class ENavigationQueryResult GetPathCost(struct UObject* WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, double& PathCost, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetPathCost // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5006ea0
	struct UNavigationSystemV1* GetNavigationSystem(struct UObject* WorldContextObject); // Function NavigationSystem.NavigationSystemV1.GetNavigationSystem // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5007b20
	struct UNavigationPath* FindPathToLocationSynchronously(struct UObject* WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, struct AActor* PathfindingContext, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5006500
	struct UNavigationPath* FindPathToActorSynchronously(struct UObject* WorldContextObject, struct FVector& PathStart, struct AActor* GoalActor, float TetherDistance, struct AActor* PathfindingContext, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5005fc0
};

// Class NavigationSystem.NavigationSystemModuleConfig
// Size: 0x78 (Inherited: 0x70)
struct UNavigationSystemModuleConfig : UNavigationSystemConfig {
	char bStrictlyStatic : 1; // 0x70(0x01)
	char bCreateOnClient : 1; // 0x70(0x01)
	char bAutoSpawnMissingNavData : 1; // 0x70(0x01)
	char bSpawnNavDataInNavBoundsLevel : 1; // 0x70(0x01)
	char pad_70_4 : 4; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class NavigationSystem.NavigationTestingActor
// Size: 0x590 (Inherited: 0x460)
struct ANavigationTestingActor : AActor {
	char pad_460[0x10]; // 0x460(0x10)
	struct UCapsuleComponent* CapsuleComponent; // 0x470(0x08)
	struct UNavigationInvokerComponent* InvokerComponent; // 0x478(0x08)
	char bActAsNavigationInvoker : 1; // 0x480(0x01)
	char pad_480_1 : 7; // 0x480(0x01)
	char pad_481[0x7]; // 0x481(0x07)
	struct FNavAgentProperties NavAgentProps; // 0x488(0x40)
	struct FVector QueryingExtent; // 0x4c8(0x18)
	struct ANavigationData* MyNavData; // 0x4e0(0x08)
	struct FVector ProjectedLocation; // 0x4e8(0x18)
	char bProjectedLocationValid : 1; // 0x500(0x01)
	char bSearchStart : 1; // 0x500(0x01)
	char pad_500_2 : 6; // 0x500(0x01)
	char pad_501[0x3]; // 0x501(0x03)
	float CostLimitFactor; // 0x504(0x04)
	float MinimumCostLimit; // 0x508(0x04)
	char bBacktracking : 1; // 0x50c(0x01)
	char bUseHierarchicalPathfinding : 1; // 0x50c(0x01)
	char bGatherDetailedInfo : 1; // 0x50c(0x01)
	char bRequireNavigableEndLocation : 1; // 0x50c(0x01)
	char bDrawDistanceToWall : 1; // 0x50c(0x01)
	char bShowNodePool : 1; // 0x50c(0x01)
	char bShowBestPath : 1; // 0x50c(0x01)
	char bShowDiffWithPreviousStep : 1; // 0x50c(0x01)
	char bShouldBeVisibleInGame : 1; // 0x50d(0x01)
	char pad_50D_1 : 7; // 0x50d(0x01)
	char pad_50E[0x2]; // 0x50e(0x02)
	enum class ENavCostDisplay CostDisplayMode; // 0x510(0x01)
	char pad_511[0x7]; // 0x511(0x07)
	struct FVector2D TextCanvasOffset; // 0x518(0x10)
	char bPathExist : 1; // 0x528(0x01)
	char bPathIsPartial : 1; // 0x528(0x01)
	char bPathSearchOutOfNodes : 1; // 0x528(0x01)
	char pad_528_3 : 5; // 0x528(0x01)
	char pad_529[0x3]; // 0x529(0x03)
	float PathfindingTime; // 0x52c(0x04)
	double PathCost; // 0x530(0x08)
	int32_t PathfindingSteps; // 0x538(0x04)
	char pad_53C[0x4]; // 0x53c(0x04)
	struct ANavigationTestingActor* OtherActor; // 0x540(0x08)
	struct UNavigationQueryFilter* FilterClass; // 0x548(0x08)
	int32_t ShowStepIndex; // 0x550(0x04)
	float OffsetFromCornersDistance; // 0x554(0x04)
	char pad_558[0x38]; // 0x558(0x38)
};

// Class NavigationSystem.NavLinkComponent
// Size: 0x6a0 (Inherited: 0x690)
struct UNavLinkComponent : UPrimitiveComponent {
	struct TArray<struct FNavigationLink> Links; // 0x690(0x10)
};

// Class NavigationSystem.NavRelevantComponent
// Size: 0x128 (Inherited: 0xd8)
struct UNavRelevantComponent : UActorComponent {
	char pad_D8[0x40]; // 0xd8(0x40)
	char bAttachToOwnersRoot : 1; // 0x118(0x01)
	char pad_118_1 : 7; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
	struct UObject* CachedNavParent; // 0x120(0x08)

	void SetNavigationRelevancy(bool bRelevant); // Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x5070990
};

// Class NavigationSystem.NavLinkCustomComponent
// Size: 0x218 (Inherited: 0x128)
struct UNavLinkCustomComponent : UNavRelevantComponent {
	char pad_128[0x8]; // 0x128(0x08)
	uint32_t NavLinkUserId; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	struct FNavLinkId CustomLinkId; // 0x138(0x08)
	struct FNavLinkAuxiliaryId AuxiliaryCustomLinkId; // 0x140(0x08)
	struct UNavArea* EnabledAreaClass; // 0x148(0x08)
	struct UNavArea* DisabledAreaClass; // 0x150(0x08)
	struct FNavAgentSelector SupportedAgents; // 0x158(0x04)
	char pad_15C[0x4]; // 0x15c(0x04)
	struct FVector LinkRelativeStart; // 0x160(0x18)
	struct FVector LinkRelativeEnd; // 0x178(0x18)
	enum class ENavLinkDirection LinkDirection; // 0x190(0x01)
	char pad_191[0x3]; // 0x191(0x03)
	char bLinkEnabled : 1; // 0x194(0x01)
	char bNotifyWhenEnabled : 1; // 0x194(0x01)
	char bNotifyWhenDisabled : 1; // 0x194(0x01)
	char bCreateBoxObstacle : 1; // 0x194(0x01)
	char pad_194_4 : 4; // 0x194(0x01)
	char pad_195[0x3]; // 0x195(0x03)
	struct FVector ObstacleOffset; // 0x198(0x18)
	struct FVector ObstacleExtent; // 0x1b0(0x18)
	struct UNavArea* ObstacleAreaClass; // 0x1c8(0x08)
	float BroadcastRadius; // 0x1d0(0x04)
	float BroadcastInterval; // 0x1d4(0x04)
	enum class ECollisionChannel BroadcastChannel; // 0x1d8(0x01)
	char pad_1D9[0x3f]; // 0x1d9(0x3f)
};

// Class NavigationSystem.NavLinkRenderingComponent
// Size: 0x690 (Inherited: 0x690)
struct UNavLinkRenderingComponent : UPrimitiveComponent {
};

// Class NavigationSystem.NavMeshBoundsVolume
// Size: 0x4a0 (Inherited: 0x498)
struct ANavMeshBoundsVolume : AVolume {
	struct FNavAgentSelector SupportedAgents; // 0x498(0x04)
	char pad_49C[0x4]; // 0x49c(0x04)
};

// Class NavigationSystem.NavMeshRenderingComponent
// Size: 0x6f0 (Inherited: 0x6e0)
struct UNavMeshRenderingComponent : UDebugDrawComponent {
	char pad_6E0[0x10]; // 0x6e0(0x10)
};

// Class NavigationSystem.NavTestRenderingComponent
// Size: 0x6e0 (Inherited: 0x6e0)
struct UNavTestRenderingComponent : UDebugDrawComponent {
};

// Class NavigationSystem.RecastNavMesh
// Size: 0x7a0 (Inherited: 0x688)
struct ARecastNavMesh : ANavigationData {
	char bDrawTriangleEdges : 1; // 0x688(0x01)
	char bDrawPolyEdges : 1; // 0x688(0x01)
	char bDrawFilledPolys : 1; // 0x688(0x01)
	char bDrawNavMeshEdges : 1; // 0x688(0x01)
	char bDrawTileBounds : 1; // 0x688(0x01)
	char bDrawTileResolutions : 1; // 0x688(0x01)
	char bDrawPathCollidingGeometry : 1; // 0x688(0x01)
	char bDrawTileLabels : 1; // 0x688(0x01)
	char bDrawTileBuildTimes : 1; // 0x689(0x01)
	char bDrawTileBuildTimesHeatMap : 1; // 0x689(0x01)
	char bDrawPolygonLabels : 1; // 0x689(0x01)
	char bDrawDefaultPolygonCost : 1; // 0x689(0x01)
	char bDrawPolygonFlags : 1; // 0x689(0x01)
	char bDrawLabelsOnPathNodes : 1; // 0x689(0x01)
	char bDrawNavLinks : 1; // 0x689(0x01)
	char bDrawFailedNavLinks : 1; // 0x689(0x01)
	char bDrawClusters : 1; // 0x68a(0x01)
	char bDrawOctree : 1; // 0x68a(0x01)
	char bDrawOctreeDetails : 1; // 0x68a(0x01)
	char bDrawMarkedForbiddenPolys : 1; // 0x68a(0x01)
	char bDistinctlyDrawTilesBeingBuilt : 1; // 0x68a(0x01)
	char pad_68A_5 : 3; // 0x68a(0x01)
	char pad_68B[0x1]; // 0x68b(0x01)
	float DrawOffset; // 0x68c(0x04)
	struct FRecastNavMeshTileGenerationDebug TileGenerationDebug; // 0x690(0x1c)
	char bFixedTilePoolSize : 1; // 0x6ac(0x01)
	char pad_6AC_1 : 7; // 0x6ac(0x01)
	char pad_6AD[0x3]; // 0x6ad(0x03)
	int32_t TilePoolSize; // 0x6b0(0x04)
	float TileSizeUU; // 0x6b4(0x04)
	float CellSize; // 0x6b8(0x04)
	float CellHeight; // 0x6bc(0x04)
	struct FNavMeshResolutionParam NavMeshResolutionParams[0x3]; // 0x6c0(0x24)
	float AgentRadius; // 0x6e4(0x04)
	float AgentHeight; // 0x6e8(0x04)
	float AgentMaxSlope; // 0x6ec(0x04)
	float AgentMaxStepHeight; // 0x6f0(0x04)
	float MinRegionArea; // 0x6f4(0x04)
	float MergeRegionSize; // 0x6f8(0x04)
	float MaxSimplificationError; // 0x6fc(0x04)
	int32_t MaxSimultaneousTileGenerationJobsCount; // 0x700(0x04)
	int32_t TileNumberHardLimit; // 0x704(0x04)
	int32_t ExpectedMaxLayersPerTile; // 0x708(0x04)
	int32_t PolyRefTileBits; // 0x70c(0x04)
	int32_t PolyRefNavPolyBits; // 0x710(0x04)
	int32_t PolyRefSaltBits; // 0x714(0x04)
	struct FVector NavMeshOriginOffset; // 0x718(0x18)
	float DefaultDrawDistance; // 0x730(0x04)
	float DefaultMaxSearchNodes; // 0x734(0x04)
	float DefaultMaxHierarchicalSearchNodes; // 0x738(0x04)
	enum class ERecastPartitioning RegionPartitioning; // 0x73c(0x01)
	enum class ERecastPartitioning LayerPartitioning; // 0x73d(0x01)
	char pad_73E[0x2]; // 0x73e(0x02)
	int32_t RegionChunkSplits; // 0x740(0x04)
	int32_t LayerChunkSplits; // 0x744(0x04)
	char bSortNavigationAreasByCost : 1; // 0x748(0x01)
	char bIsWorldPartitioned : 1; // 0x748(0x01)
	char bPerformVoxelFiltering : 1; // 0x748(0x01)
	char bMarkLowHeightAreas : 1; // 0x748(0x01)
	char bUseExtraTopCellWhenMarkingAreas : 1; // 0x748(0x01)
	char bFilterLowSpanSequences : 1; // 0x748(0x01)
	char bFilterLowSpanFromTileCache : 1; // 0x748(0x01)
	char bDoFullyAsyncNavDataGathering : 1; // 0x748(0x01)
	char bUseBetterOffsetsFromCorners : 1; // 0x749(0x01)
	char bStoreEmptyTileLayers : 1; // 0x749(0x01)
	char bUseVirtualFilters : 1; // 0x749(0x01)
	char bUseVirtualGeometryFilteringAndDirtying : 1; // 0x749(0x01)
	char bAllowNavLinkAsPathEnd : 1; // 0x749(0x01)
	char pad_749_5 : 3; // 0x749(0x01)
	char pad_74A[0x2]; // 0x74a(0x02)
	int32_t TimeSliceFilterLedgeSpansMaxYProcess; // 0x74c(0x04)
	double TimeSliceLongDurationDebug; // 0x750(0x08)
	uint32_t InvokerTilePriorityBumpDistanceThresholdInTileUnits; // 0x758(0x04)
	char InvokerTilePriorityBumpIncrease; // 0x75c(0x01)
	char pad_75D[0x3]; // 0x75d(0x03)
	char bUseVoxelCache : 1; // 0x760(0x01)
	char pad_760_1 : 7; // 0x760(0x01)
	char pad_761[0x3]; // 0x761(0x03)
	float TileSetUpdateInterval; // 0x764(0x04)
	float HeuristicScale; // 0x768(0x04)
	float VerticalDeviationFromGroundCompensation; // 0x76c(0x04)
	char pad_770[0x30]; // 0x770(0x30)

	bool K2_ReplaceAreaInTileBounds(struct FBox Bounds, struct UNavArea* OldArea, struct UNavArea* NewArea, bool ReplaceLinks); // Function NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5043af0
};

// Class NavigationSystem.RecastNavMeshDataChunk
// Size: 0x50 (Inherited: 0x40)
struct URecastNavMeshDataChunk : UNavigationDataChunk {
	char pad_40[0x10]; // 0x40(0x10)
};

// Class NavigationSystem.NavModifierComponent
// Size: 0x1d0 (Inherited: 0x128)
struct UNavModifierComponent : UNavRelevantComponent {
	struct UNavArea* AreaClass; // 0x128(0x08)
	struct FVector FailsafeExtent; // 0x130(0x18)
	enum class ENavigationDataResolution NavMeshResolution; // 0x148(0x01)
	char bIncludeAgentHeight : 1; // 0x149(0x01)
	char pad_149_1 : 7; // 0x149(0x01)
	char pad_14A[0x86]; // 0x14a(0x86)

	void SetAreaClass(struct UNavArea* NewAreaClass); // Function NavigationSystem.NavModifierComponent.SetAreaClass // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x506cc70
};

// Class NavigationSystem.NavModifierVolume
// Size: 0x4b0 (Inherited: 0x498)
struct ANavModifierVolume : AVolume {
	char pad_498[0x8]; // 0x498(0x08)
	struct UNavArea* AreaClass; // 0x4a0(0x08)
	bool bMaskFillCollisionUnderneathForNavmesh; // 0x4a8(0x01)
	enum class ENavigationDataResolution NavMeshResolution; // 0x4a9(0x01)
	char pad_4AA[0x6]; // 0x4aa(0x06)

	void SetAreaClass(struct UNavArea* NewAreaClass); // Function NavigationSystem.NavModifierVolume.SetAreaClass // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x5070370
};

// Class NavigationSystem.NavSystemConfigOverride
// Size: 0x470 (Inherited: 0x460)
struct ANavSystemConfigOverride : AActor {
	struct UNavigationSystemConfig* NavigationSystemConfig; // 0x460(0x08)
	enum class ENavSystemOverridePolicy OverridePolicy; // 0x468(0x01)
	char bLoadOnClient : 1; // 0x469(0x01)
	char pad_469_1 : 7; // 0x469(0x01)
	char pad_46A[0x6]; // 0x46a(0x06)
};

