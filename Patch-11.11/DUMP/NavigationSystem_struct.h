// Enum NavigationSystem.ERuntimeGenerationType
enum class ERuntimeGenerationType : uint8 {
	Static = 0,
	DynamicModifiersOnly = 1,
	Dynamic = 2,
	LegacyGeneration = 3,
	ERuntimeGenerationType_MAX = 4
};

// Enum NavigationSystem.ENavCostDisplay
enum class ENavCostDisplay : uint8 {
	TotalCost = 0,
	HeuristicOnly = 1,
	RealCostOnly = 2,
	ENavCostDisplay_MAX = 3
};

// Enum NavigationSystem.ERecastPartitioning
enum class ERecastPartitioning : uint8 {
	Monotone = 0,
	Watershed = 1,
	ChunkyMonotone = 2,
	ERecastPartitioning_MAX = 3
};

// Enum NavigationSystem.EHeightFieldRenderMode
enum class EHeightFieldRenderMode : uint8 {
	Solid = 0,
	Walkable = 1,
	EHeightFieldRenderMode_MAX = 2
};

// Enum NavigationSystem.ENavSystemOverridePolicy
enum class ENavSystemOverridePolicy : uint8 {
	Override = 0,
	Append = 1,
	Skip = 2,
	ENavSystemOverridePolicy_MAX = 3
};

// ScriptStruct NavigationSystem.NavCollisionCylinder
// Size: 0x20 (Inherited: 0x00)
struct FNavCollisionCylinder {
	struct FVector Offset; // 0x00(0x18)
	float Radius; // 0x18(0x04)
	float Height; // 0x1c(0x04)
};

// ScriptStruct NavigationSystem.NavCollisionBox
// Size: 0x30 (Inherited: 0x00)
struct FNavCollisionBox {
	struct FVector Offset; // 0x00(0x18)
	struct FVector Extent; // 0x18(0x18)
};

// ScriptStruct NavigationSystem.NavigationFilterArea
// Size: 0x18 (Inherited: 0x00)
struct FNavigationFilterArea {
	struct UNavArea* AreaClass; // 0x00(0x08)
	float TravelCostOverride; // 0x08(0x04)
	float EnteringCostOverride; // 0x0c(0x04)
	char bIsExcluded : 1; // 0x10(0x01)
	char bOverrideTravelCost : 1; // 0x10(0x01)
	char bOverrideEnteringCost : 1; // 0x10(0x01)
	char pad_10_3 : 5; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct NavigationSystem.NavigationFilterFlags
// Size: 0x04 (Inherited: 0x00)
struct FNavigationFilterFlags {
	char bNavFlag0 : 1; // 0x00(0x01)
	char bNavFlag1 : 1; // 0x00(0x01)
	char bNavFlag2 : 1; // 0x00(0x01)
	char bNavFlag3 : 1; // 0x00(0x01)
	char bNavFlag4 : 1; // 0x00(0x01)
	char bNavFlag5 : 1; // 0x00(0x01)
	char bNavFlag6 : 1; // 0x00(0x01)
	char bNavFlag7 : 1; // 0x00(0x01)
	char bNavFlag8 : 1; // 0x01(0x01)
	char bNavFlag9 : 1; // 0x01(0x01)
	char bNavFlag10 : 1; // 0x01(0x01)
	char bNavFlag11 : 1; // 0x01(0x01)
	char bNavFlag12 : 1; // 0x01(0x01)
	char bNavFlag13 : 1; // 0x01(0x01)
	char bNavFlag14 : 1; // 0x01(0x01)
	char bNavFlag15 : 1; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
};

// ScriptStruct NavigationSystem.NavGraphEdge
// Size: 0x18 (Inherited: 0x00)
struct FNavGraphEdge {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct NavigationSystem.NavGraphNode
// Size: 0x18 (Inherited: 0x00)
struct FNavGraphNode {
	struct UObject* Owner; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct NavigationSystem.SupportedAreaData
// Size: 0x20 (Inherited: 0x00)
struct FSupportedAreaData {
	struct FString AreaClassName; // 0x00(0x10)
	int32_t AreaID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	ClassPtrProperty AreaClass; // 0x18(0x08)
};

// ScriptStruct NavigationSystem.NavLinkCustomInstanceData
// Size: 0x78 (Inherited: 0x68)
struct FNavLinkCustomInstanceData : FActorComponentInstanceData {
	struct FNavLinkId CustomLinkId; // 0x68(0x08)
	struct FNavLinkAuxiliaryId AuxiliaryCustomLinkId; // 0x70(0x08)
};

// ScriptStruct NavigationSystem.RecastNavMeshGenerationProperties
// Size: 0x44 (Inherited: 0x00)
struct FRecastNavMeshGenerationProperties {
	int32_t TilePoolSize; // 0x00(0x04)
	float TileSizeUU; // 0x04(0x04)
	float CellSize; // 0x08(0x04)
	float CellHeight; // 0x0c(0x04)
	float AgentRadius; // 0x10(0x04)
	float AgentHeight; // 0x14(0x04)
	float AgentMaxSlope; // 0x18(0x04)
	float AgentMaxStepHeight; // 0x1c(0x04)
	float MinRegionArea; // 0x20(0x04)
	float MergeRegionSize; // 0x24(0x04)
	float MaxSimplificationError; // 0x28(0x04)
	int32_t TileNumberHardLimit; // 0x2c(0x04)
	int32_t ExpectedMaxLayersPerTile; // 0x30(0x04)
	enum class ERecastPartitioning RegionPartitioning; // 0x34(0x01)
	enum class ERecastPartitioning LayerPartitioning; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
	int32_t RegionChunkSplits; // 0x38(0x04)
	int32_t LayerChunkSplits; // 0x3c(0x04)
	char bSortNavigationAreasByCost : 1; // 0x40(0x01)
	char bPerformVoxelFiltering : 1; // 0x40(0x01)
	char bMarkLowHeightAreas : 1; // 0x40(0x01)
	char bUseExtraTopCellWhenMarkingAreas : 1; // 0x40(0x01)
	char bFilterLowSpanSequences : 1; // 0x40(0x01)
	char bFilterLowSpanFromTileCache : 1; // 0x40(0x01)
	char bFixedTilePoolSize : 1; // 0x40(0x01)
	char bIsWorldPartitioned : 1; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
};

// ScriptStruct NavigationSystem.RecastNavMeshTileGenerationDebug
// Size: 0x1c (Inherited: 0x00)
struct FRecastNavMeshTileGenerationDebug {
	char bEnabled : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FIntVector TileCoordinate; // 0x04(0x0c)
	char bGenerateDebugTileOnly : 1; // 0x10(0x01)
	char bCollisionGeometry : 1; // 0x10(0x01)
	char pad_10_2 : 6; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	enum class EHeightFieldRenderMode HeightFieldRenderMode; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	char bHeightfieldFromRasterization : 1; // 0x18(0x01)
	char bHeightfieldPostInclusionBoundsFiltering : 1; // 0x18(0x01)
	char bHeightfieldPostHeightFiltering : 1; // 0x18(0x01)
	char bHeightfieldBounds : 1; // 0x18(0x01)
	char bCompactHeightfield : 1; // 0x18(0x01)
	char bCompactHeightfieldEroded : 1; // 0x18(0x01)
	char bCompactHeightfieldRegions : 1; // 0x18(0x01)
	char bCompactHeightfieldDistances : 1; // 0x18(0x01)
	char bTileCacheLayerAreas : 1; // 0x19(0x01)
	char bTileCacheLayerRegions : 1; // 0x19(0x01)
	char bTileCacheContours : 1; // 0x19(0x01)
	char bTileCachePolyMesh : 1; // 0x19(0x01)
	char bTileCacheDetailMesh : 1; // 0x19(0x01)
	char pad_19_5 : 3; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
};

// ScriptStruct NavigationSystem.NavMeshResolutionParam
// Size: 0x0c (Inherited: 0x00)
struct FNavMeshResolutionParam {
	float CellSize; // 0x00(0x04)
	float CellHeight; // 0x04(0x04)
	float AgentMaxStepHeight; // 0x08(0x04)
};

