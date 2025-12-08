// Class AISpatialAwareness.AISpatialAwarenessAmortizationInterface
// Size: 0x30 (Inherited: 0x30)
struct UAISpatialAwarenessAmortizationInterface : UInterface {

	void PerformAmortizedWork(); // Function AISpatialAwareness.AISpatialAwarenessAmortizationInterface.PerformAmortizedWork // (Native|Event|Public|BlueprintEvent) // @ game+0x2571bc0
};

// Class AISpatialAwareness.AISpatialAwarenessAmortizationManagerComponent
// Size: 0x130 (Inherited: 0xd8)
struct UAISpatialAwarenessAmortizationManagerComponent : UActorComponent {
	int32_t AmortizedCallsPerQueuePerTick; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct TMap<struct UObject*, struct FAISpatialAwarenessAmortizationQueue> AmortizationQueues; // 0xe0(0x50)

	void RegisterAmortizedCall(struct UObject* QueueID, struct UObject* AmortizationInterface); // Function AISpatialAwareness.AISpatialAwarenessAmortizationManagerComponent.RegisterAmortizedCall // (Final|Native|Public|BlueprintCallable) // @ game+0x55ea8e0
	void DeregisterAmortizedCall(struct UObject* QueueID, struct UObject* AmortizationInterface); // Function AISpatialAwareness.AISpatialAwarenessAmortizationManagerComponent.DeregisterAmortizedCall // (Final|Native|Public|BlueprintCallable) // @ game+0x55ea6b0
};

// Class AISpatialAwareness.AISpatialAwarenessBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UAISpatialAwarenessBlueprintLibrary : UBlueprintFunctionLibrary {

	bool EqualEqual_FInfluenceLayerIDFInfluenceLayerID(struct FInfluenceLayerID& A, struct FInfluenceLayerID& B); // Function AISpatialAwareness.AISpatialAwarenessBlueprintLibrary.EqualEqual_FInfluenceLayerIDFInfluenceLayerID // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4b8cfe0
	bool EqualEqual_FInfluenceLayerBlockIDFInfluenceLayerBlockID(struct FInfluenceLayerBlockID& A, struct FInfluenceLayerBlockID& B); // Function AISpatialAwareness.AISpatialAwarenessBlueprintLibrary.EqualEqual_FInfluenceLayerBlockIDFInfluenceLayerBlockID // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4b8cfe0
};

// Class AISpatialAwareness.AISpatialAwarenessDebugControllerComponent
// Size: 0xf0 (Inherited: 0xd8)
struct UAISpatialAwarenessDebugControllerComponent : UActorComponent {
	struct APlayerController* CachedPlayerController; // 0xd8(0x08)
	struct UInfluenceMapDebuggerComponent* CachedInfluenceMapDebuggerComponent; // 0xe0(0x08)
	struct UMapMarkupWaypointDebuggerComponent* CachedMapMarkupWaypointDebuggerComponent; // 0xe8(0x08)

	void ServerStepPropagation(float PropagationStepAmount); // Function AISpatialAwareness.AISpatialAwarenessDebugControllerComponent.ServerStepPropagation // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x55eb300
	void ServerSetPropagationPaused(bool bPaused); // Function AISpatialAwareness.AISpatialAwarenessDebugControllerComponent.ServerSetPropagationPaused // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x55eb400
	void ServerSetLayerID(int32_t LayerID); // Function AISpatialAwareness.AISpatialAwarenessDebugControllerComponent.ServerSetLayerID // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x55eb000
	void ServerSetClientRequestedWaypointDebugData(struct FClientRequestedWaypointDebugData ClientRequestedDebugData); // Function AISpatialAwareness.AISpatialAwarenessDebugControllerComponent.ServerSetClientRequestedWaypointDebugData // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x55eb600
	void ServerSetClientRequestedInfluenceMapDebugData(struct FClientRequestedInfluenceMapDebugData ClientRequestedDebugData); // Function AISpatialAwareness.AISpatialAwarenessDebugControllerComponent.ServerSetClientRequestedInfluenceMapDebugData // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x55eb500
	void ServerSetBlockID(int32_t BlockID); // Function AISpatialAwareness.AISpatialAwarenessDebugControllerComponent.ServerSetBlockID // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x55eb100
	void ServerRegisterInfluenceAtPoint(float InfluenceValue); // Function AISpatialAwareness.AISpatialAwarenessDebugControllerComponent.ServerRegisterInfluenceAtPoint // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x55eb200
	void ServerCycleToNextActiveLayer(); // Function AISpatialAwareness.AISpatialAwarenessDebugControllerComponent.ServerCycleToNextActiveLayer // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x49c6c50
	void ServerCycleLayer(int32_t CycleAmount); // Function AISpatialAwareness.AISpatialAwarenessDebugControllerComponent.ServerCycleLayer // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x55eaf00
	void ClientReceiveWaypointDebugData(struct FMapMarkupWaypointDebugData DebugData); // Function AISpatialAwareness.AISpatialAwarenessDebugControllerComponent.ClientReceiveWaypointDebugData // (Net|Native|Event|Public|NetClient) // @ game+0x55eb700
	void ClientReceiveInfluenceDebugData(struct FInfluenceMapDebugData DebugData); // Function AISpatialAwareness.AISpatialAwarenessDebugControllerComponent.ClientReceiveInfluenceDebugData // (Net|Native|Event|Public|NetClient) // @ game+0x55eb8b0
};

// Class AISpatialAwareness.BTService_RunWaypointQuery
// Size: 0x1d8 (Inherited: 0x78)
struct UBTService_RunWaypointQuery : UBTService {
	struct UEnvQuery* PrimaryQueryTemplate; // 0x78(0x08)
	struct FBlackboardKeySelector PrimaryQueryBlackboardKey; // 0x80(0x30)
	struct UEnvQuery* SecondaryQueryTemplate; // 0xb0(0x08)
	struct FBlackboardKeySelector SecondaryQueryBlackboardKey; // 0xb8(0x30)
	float SecondaryQueryCombinedScoreWeight; // 0xe8(0x04)
	float SecondaryQueryScoreTolerance; // 0xec(0x04)
	bool bDiscardPrimaryResultWithFailedSecondaryQuery; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	float FoundWaypointTimeoutDuration; // 0xf4(0x04)
	bool bRunQueryIfFoundWaypointValid; // 0xf8(0x01)
	bool bUsePreviousWaypointOnNoneFound; // 0xf9(0x01)
	enum class EInfluenceLayerTag InfluenceTypeCheckTag; // 0xfa(0x01)
	char pad_FB[0x5]; // 0xfb(0x05)
	struct UWaypointQueryEventsHelperBase* GameplayEventsHelperType; // 0x100(0x08)
	char pad_108[0x20]; // 0x108(0x20)
	struct UWaypointQueryEventsHelperBase* GameplayEventsHelper; // 0x128(0x08)
	struct TMap<int32_t, struct FWaypointQueryInfo> CachedWaypointQueryInfo; // 0x130(0x50)
	struct FWaypointQueryInfo CachedPreviousWaypointInfo; // 0x180(0x30)
	struct APawn* CachedOwnerPawn; // 0x1b0(0x08)
	struct AAIController* CachedOwnerController; // 0x1b8(0x08)
	char pad_1C0[0x18]; // 0x1c0(0x18)

	void InvalidatePreviousWaypointInfo(); // Function AISpatialAwareness.BTService_RunWaypointQuery.InvalidatePreviousWaypointInfo // (Final|Native|Public|BlueprintCallable) // @ game+0x55ec480
	struct APawn* GetOwnerPawn(); // Function AISpatialAwareness.BTService_RunWaypointQuery.GetOwnerPawn // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x55ec4f0
};

// Class AISpatialAwareness.EnvQueryContext_QuerierOccupiedRooms
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_QuerierOccupiedRooms : UEnvQueryContext {
};

// Class AISpatialAwareness.EnvQueryContext_SecondaryWaypointQueryPawn
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_SecondaryWaypointQueryPawn : UEnvQueryContext {
};

// Class AISpatialAwareness.EnvQueryContext_SecondaryWaypointQueryWaypoint
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_SecondaryWaypointQueryWaypoint : UEnvQueryContext {
};

// Class AISpatialAwareness.EnvQueryGenerator_ConnectedWaypoints
// Size: 0x60 (Inherited: 0x58)
struct UEnvQueryGenerator_ConnectedWaypoints : UEnvQueryGenerator {
	struct UEnvQueryContext* Context; // 0x58(0x08)
};

// Class AISpatialAwareness.EnvQueryGenerator_WaypointsInRoom
// Size: 0x60 (Inherited: 0x58)
struct UEnvQueryGenerator_WaypointsInRoom : UEnvQueryGenerator {
	struct UEnvQueryContext* MarkupRoomContext; // 0x58(0x08)
};

// Class AISpatialAwareness.EnvQueryTest_WaypointInfluenceValue
// Size: 0x240 (Inherited: 0x238)
struct UEnvQueryTest_WaypointInfluenceValue : UEnvQueryTest {
	enum class EInfluenceLayerTag LayerTag; // 0x238(0x01)
	enum class EWaypointInfluenceQueryReturnType QueryReturnType; // 0x239(0x01)
	bool bIgnoreQuerierInfluenceContribution; // 0x23a(0x01)
	bool bDiscardZeroInfluenceWaypoints; // 0x23b(0x01)
	char pad_23C[0x4]; // 0x23c(0x04)
};

// Class AISpatialAwareness.EnvQueryTest_WaypointType
// Size: 0x248 (Inherited: 0x238)
struct UEnvQueryTest_WaypointType : UEnvQueryTest {
	char WaypointTypeFlags; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct AMapMarkupWaypoint* WaypointClass; // 0x240(0x08)
};

// Class AISpatialAwareness.EnvQueryTest_WaypointVisibility
// Size: 0x240 (Inherited: 0x238)
struct UEnvQueryTest_WaypointVisibility : UEnvQueryTest {
	enum class EEnvTestWaypointVisibilityMode CheckMode; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
};

// Class AISpatialAwareness.InfluenceClearerComponentBase
// Size: 0x100 (Inherited: 0xd8)
struct UInfluenceClearerComponentBase : UActorComponent {
	float ClearTickRate; // 0xd8(0x04)
	enum class EInfluenceLayerTag ClearLayerTag; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	struct TArray<enum class EInfluenceSourceTag> ClearSourceTags; // 0xe0(0x10)
	struct FInfluenceLayerBlockID OwnerLayerBlockID; // 0xf0(0x04)
	enum class ELayerBlockBehavior LayerBlockBehavior; // 0xf4(0x01)
	bool bEnabled; // 0xf5(0x01)
	char pad_F6[0xa]; // 0xf6(0x0a)

	void Enable(); // Function AISpatialAwareness.InfluenceClearerComponentBase.Enable // (Final|Native|Public|BlueprintCallable) // @ game+0x55ed400
	void Disable(); // Function AISpatialAwareness.InfluenceClearerComponentBase.Disable // (Final|Native|Public|BlueprintCallable) // @ game+0x55ed3e0
};

// Class AISpatialAwareness.InfluenceMap
// Size: 0x4a0 (Inherited: 0x460)
struct AInfluenceMap : AActor {
	struct UInfluenceMapNodeGraphComponent* InfluenceMapNodeGraphComponent; // 0x460(0x08)
	struct UInfluenceMapSourceManagerComponent* InfluenceMapSourceManagerComponent; // 0x468(0x08)
	struct UInfluencePropagationComponent* InfluencePropagationComponent; // 0x470(0x08)
	struct UInfluenceMapRoomManagerComponent* InfluenceMapRoomManagerComponent; // 0x478(0x08)
	struct UInfluenceMapDebuggerComponent* InfluenceMapDebuggerComponent; // 0x480(0x08)
	struct UMapMarkupWaypointDebuggerComponent* MapMarkupWaypointDebuggerComponent; // 0x488(0x08)
	struct UAISpatialAwarenessAmortizationManagerComponent* AmortizationManagerComponent; // 0x490(0x08)
	int32_t NumExpectedPropagatingLayers; // 0x498(0x04)
	char pad_49C[0x4]; // 0x49c(0x04)

	int32_t GetNumExpectedPropagatingLayers(); // Function AISpatialAwareness.InfluenceMap.GetNumExpectedPropagatingLayers // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x55ed690
	struct AInfluenceMap* AuthGetInfluenceMap(struct UObject* WorldContextObject); // Function AISpatialAwareness.InfluenceMap.AuthGetInfluenceMap // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x55ed6b0
};

// Class AISpatialAwareness.InfluenceMapDebuggerComponent
// Size: 0x2d8 (Inherited: 0xd8)
struct UInfluenceMapDebuggerComponent : UActorComponent {
	char pad_D8[0x38]; // 0xd8(0x38)
	struct AInfluenceMap* CachedInfluenceMap; // 0x110(0x08)
	struct ULayerBlockAssignerComponentBase* CachedBlockAssignerComponent; // 0x118(0x08)
	struct UInfluenceMapNodeGraphComponent* CachedNodeGraphComp; // 0x120(0x08)
	struct UInfluenceMapSourceManagerComponent* CachedSourceManagerComp; // 0x128(0x08)
	struct UInfluencePropagationComponent* CachedPropagationComp; // 0x130(0x08)
	struct ARecastNavMesh* CachedNavMesh; // 0x138(0x08)
	struct FInfluenceMapDebugData InfluenceMapDebugData; // 0x140(0x98)
	struct TMap<struct APlayerController*, int32_t> FocusedNodeIndexMap; // 0x1d8(0x50)
	struct TArray<struct FSavedInfoMap> SavedInfoArray; // 0x228(0x10)
	struct TMap<int32_t, struct AMapMarkupWaypoint*> NodeIndexToWaypointMap; // 0x238(0x50)
	struct TMap<struct APlayerController*, struct FClientRequestedInfluenceMapDebugData> ClientRequestedDebugDataMap; // 0x288(0x50)
};

// Class AISpatialAwareness.InfluenceMapNodeGraphComponent
// Size: 0x1a0 (Inherited: 0xd8)
struct UInfluenceMapNodeGraphComponent : UActorComponent {
	struct UNodePlacementStrategyBase* NodePlacementStrategyClass; // 0xd8(0x08)
	struct TMap<struct FIntVector, int32_t> InfluenceMapNodeIndices; // 0xe0(0x50)
	struct TArray<struct FInfluenceMapNode> InfluenceMapNodes; // 0x130(0x10)
	struct TMap<int32_t, struct FNodeOperationsList> PendingNodeOperations; // 0x140(0x50)
	struct UNodePlacementStrategyBase* NodePlacementStrategy; // 0x190(0x08)
	struct UInfluencePropagationComponent* CachedPropagationComponent; // 0x198(0x08)

	struct TArray<int32_t> GetSurroundingNodeIndicesAtLocation(struct FVector& Location); // Function AISpatialAwareness.InfluenceMapNodeGraphComponent.GetSurroundingNodeIndicesAtLocation // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x55f1c20
	int32_t GetNumNodes(); // Function AISpatialAwareness.InfluenceMapNodeGraphComponent.GetNumNodes // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x55f13b0
	struct FVector GetNodeLocation(int32_t NodeIndex); // Function AISpatialAwareness.InfluenceMapNodeGraphComponent.GetNodeLocation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x55f11b0
	int32_t GetNearestInfluenceMapNodeIndex(struct FVector& Location); // Function AISpatialAwareness.InfluenceMapNodeGraphComponent.GetNearestInfluenceMapNodeIndex // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x55f1db0
	struct TArray<int32_t> GetInfluenceMapNodeIndicesInSphere(struct FVector& Location, float Radius); // Function AISpatialAwareness.InfluenceMapNodeGraphComponent.GetInfluenceMapNodeIndicesInSphere // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x55f19e0
	struct TArray<int32_t> GetInfluenceMapNodeIndicesInCone(struct FVector& Location, struct FVector& ViewDirection, float PeripheralVisionAngleCos, float PointOfViewBackwardOffset, float NearClippingRadiusSq, float SightRadiusSq); // Function AISpatialAwareness.InfluenceMapNodeGraphComponent.GetInfluenceMapNodeIndicesInCone // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x55f1560
	struct TArray<int32_t> GetInfluenceMapNodeIndicesInBox(struct FBox& Box); // Function AISpatialAwareness.InfluenceMapNodeGraphComponent.GetInfluenceMapNodeIndicesInBox // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x55f13d0
};

// Class AISpatialAwareness.InfluenceMapRoomManagerComponent
// Size: 0x140 (Inherited: 0xd8)
struct UInfluenceMapRoomManagerComponent : UActorComponent {
	struct AActor* RoomOccupierClass; // 0xd8(0x08)
	struct TSet<struct AActor*> WaypointVisCheckIgnoreTypes; // 0xe0(0x50)
	struct TArray<struct AMapMarkupRoom*> MapMarkupRooms; // 0x130(0x10)

	struct TArray<struct AMapMarkupRoom*> GetMapMarkupRooms(); // Function AISpatialAwareness.InfluenceMapRoomManagerComponent.GetMapMarkupRooms // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x55f23e0
	struct TArray<struct AMapMarkupRoom*> AuthGetRoomsForActor(struct AActor* InActor); // Function AISpatialAwareness.InfluenceMapRoomManagerComponent.AuthGetRoomsForActor // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x55f2410
};

// Class AISpatialAwareness.InfluenceMapSourceManagerComponent
// Size: 0x130 (Inherited: 0xd8)
struct UInfluenceMapSourceManagerComponent : UActorComponent {
	struct FMulticastInlineDelegate OnInfluenceSourceRegistered; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnInfluenceSourceDeregistered; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnInfluenceValuesCleared; // 0xf8(0x10)
	bool bPropagatingSourceStampedNodesImmuneToClears; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct TArray<struct FInfluenceMapLayer> InfluenceSourceLayers; // 0x110(0x10)
	char pad_120[0x10]; // 0x120(0x10)

	bool IsValidBlockID(struct FInfluenceLayerBlockID& BlockID); // Function AISpatialAwareness.InfluenceMapSourceManagerComponent.IsValidBlockID // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x55f2a20
	bool IsInfluenceSourceRegistered(struct UInfluenceSourceComponentBase* SourceComp); // Function AISpatialAwareness.InfluenceMapSourceManagerComponent.IsInfluenceSourceRegistered // (Final|Native|Public|BlueprintCallable) // @ game+0x55f2b20
};

// Class AISpatialAwareness.InfluenceNodeVisibilityCheckerInterface
// Size: 0x30 (Inherited: 0x30)
struct UInfluenceNodeVisibilityCheckerInterface : UInterface {
};

// Class AISpatialAwareness.InfluenceNodeVisibilityCheckerLineTrace
// Size: 0x38 (Inherited: 0x30)
struct UInfluenceNodeVisibilityCheckerLineTrace : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class AISpatialAwareness.InfluenceSourceComponentBase
// Size: 0x1e8 (Inherited: 0xd8)
struct UInfluenceSourceComponentBase : UActorComponent {
	struct FInfluenceSourceRegistrationData RegistrationData; // 0xd8(0xe0)
	float ReseedTickRate; // 0x1b8(0x04)
	char pad_1BC[0x4]; // 0x1bc(0x04)
	struct TArray<struct FInfluenceLayerBlockID> ReseedBlockIDs; // 0x1c0(0x10)
	char pad_1D0[0x18]; // 0x1d0(0x18)

	bool IsReseedingOnBlock(struct FInfluenceLayerBlockID& InBlock); // Function AISpatialAwareness.InfluenceSourceComponentBase.IsReseedingOnBlock // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x55f4a80
	struct FInfluenceIdentifiers GetSourceIdentifiers(); // Function AISpatialAwareness.InfluenceSourceComponentBase.GetSourceIdentifiers // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x55f4bb0
	struct FInfluenceSourceRegistrationData GetRegistrationData(); // Function AISpatialAwareness.InfluenceSourceComponentBase.GetRegistrationData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x55f4cf0
	void AuthUpdateReseedBlockIDs(struct TArray<struct FInfluenceLayerBlockID>& InNewReseed); // Function AISpatialAwareness.InfluenceSourceComponentBase.AuthUpdateReseedBlockIDs // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x4a1cab0
	void AuthStopPropagationReseedTimer(); // Function AISpatialAwareness.InfluenceSourceComponentBase.AuthStopPropagationReseedTimer // (Final|Native|Public|BlueprintCallable) // @ game+0x386c9d0
	void AuthStartPropagationReseedTimer(); // Function AISpatialAwareness.InfluenceSourceComponentBase.AuthStartPropagationReseedTimer // (Final|Native|Public|BlueprintCallable) // @ game+0x386c9d0
	void AuthSetInfluencePropagationPaused(bool bPaused); // Function AISpatialAwareness.InfluenceSourceComponentBase.AuthSetInfluencePropagationPaused // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x338cfe0
	void AuthResetReseedBlockIDs(bool bAllBlocksReseed); // Function AISpatialAwareness.InfluenceSourceComponentBase.AuthResetReseedBlockIDs // (Final|Native|Protected|BlueprintCallable) // @ game+0x338cfe0
	bool AuthRegisterSource(struct FName Reason); // Function AISpatialAwareness.InfluenceSourceComponentBase.AuthRegisterSource // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x55f4d20
	void AuthRegisterOnPropagatingBlocks(struct TArray<struct FInfluenceLayerBlockID>& InRegisterBlockIDs, struct FName Reason); // Function AISpatialAwareness.InfluenceSourceComponentBase.AuthRegisterOnPropagatingBlocks // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x55f48c0
	void AuthModifyPropagationParameters(struct FPropagationParameters& NewPropagationParameters); // Function AISpatialAwareness.InfluenceSourceComponentBase.AuthModifyPropagationParameters // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x55f4c20
	bool AuthDeregisterSource(struct FName Reason); // Function AISpatialAwareness.InfluenceSourceComponentBase.AuthDeregisterSource // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x55f4d20
};

// Class AISpatialAwareness.InfluencePointSourceComponent
// Size: 0x1f8 (Inherited: 0x1e8)
struct UInfluencePointSourceComponent : UInfluenceSourceComponentBase {
	float InfluenceValue; // 0x1e8(0x04)
	char pad_1EC[0xc]; // 0x1ec(0x0c)

	float GetInfluenceValue(); // Function AISpatialAwareness.InfluencePointSourceComponent.GetInfluenceValue // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x55f32c0
};

// Class AISpatialAwareness.InfluencePropagationComponent
// Size: 0xe8 (Inherited: 0xd8)
struct UInfluencePropagationComponent : UActorComponent {
	struct UInfluencePropagatorMovement* InfluencePropagatorMovement; // 0xd8(0x08)
	bool bAllPropagationPaused; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	float PropagationTimeOffset; // 0xe4(0x04)

	void OnInfluenceValuesCleared(struct TArray<int32_t>& LayerIndices, struct TArray<int32_t>& ClearedNodes); // Function AISpatialAwareness.InfluencePropagationComponent.OnInfluenceValuesCleared // (Final|Native|Public|HasOutParms) // @ game+0x55f34b0
	void OnInfluenceSourceRegistered(struct TArray<int32_t>& LayerIndices, struct FInfluenceSourceRegistrationData& RegistrationData); // Function AISpatialAwareness.InfluencePropagationComponent.OnInfluenceSourceRegistered // (Final|Native|Public|HasOutParms) // @ game+0x55f3b10
	void OnInfluenceSourceDeregistered(struct TArray<int32_t>& LayerIndices, struct FInfluenceSourceRegistrationData& RegistrationData); // Function AISpatialAwareness.InfluencePropagationComponent.OnInfluenceSourceDeregistered // (Final|Native|Public|HasOutParms) // @ game+0x55f36a0
};

// Class AISpatialAwareness.InfluencePropagatorBase
// Size: 0x48 (Inherited: 0x30)
struct UInfluencePropagatorBase : UObject {
	struct UInfluenceMapSourceManagerComponent* CachedInfluenceMapSourceManagerComponent; // 0x30(0x08)
	struct UInfluenceMapNodeGraphComponent* CachedInfluenceMapNodeGraphComponent; // 0x38(0x08)
	struct UInfluencePropagationComponent* CachedPropagationComponent; // 0x40(0x08)
};

// Class AISpatialAwareness.InfluencePropagatorMovement
// Size: 0xb0 (Inherited: 0x48)
struct UInfluencePropagatorMovement : UInfluencePropagatorBase {
	char pad_48[0x8]; // 0x48(0x08)
	struct TMap<int32_t, struct FMovementLayerPropagationInfo> PropagatingLayerInfo; // 0x50(0x50)
	char pad_A0[0x10]; // 0xa0(0x10)
};

// Class AISpatialAwareness.InfluenceSphereClearerComponent
// Size: 0x118 (Inherited: 0x100)
struct UInfluenceSphereClearerComponent : UInfluenceClearerComponentBase {
	float SphereRadius; // 0x100(0x04)
	char pad_104[0x14]; // 0x104(0x14)
};

// Class AISpatialAwareness.InfluenceStaticMeshClearerComponent
// Size: 0x128 (Inherited: 0x100)
struct UInfluenceStaticMeshClearerComponent : UInfluenceClearerComponentBase {
	bool bCacheInitialNodeLocations; // 0x100(0x01)
	char pad_101[0x27]; // 0x101(0x27)
};

// Class AISpatialAwareness.InfluenceVisionConeClearerComponent
// Size: 0x108 (Inherited: 0x100)
struct UInfluenceVisionConeClearerComponent : UInfluenceClearerComponentBase {
	struct UInfluenceMapSourceManagerComponent* CachedSourceManagerComp; // 0x100(0x08)

	void OnNodesInConeUpdated(struct TArray<int32_t>& NodesInCone, struct TArray<int32_t>& VisibleNodes); // Function AISpatialAwareness.InfluenceVisionConeClearerComponent.OnNodesInConeUpdated // (Final|Native|Private|HasOutParms) // @ game+0x55f7090
};

// Class AISpatialAwareness.InfluenceVisionConeSourceComponent
// Size: 0x1f8 (Inherited: 0x1e8)
struct UInfluenceVisionConeSourceComponent : UInfluenceSourceComponentBase {
	float InfluenceValue; // 0x1e8(0x04)
	bool bEnabled; // 0x1ec(0x01)
	char pad_1ED[0xb]; // 0x1ed(0x0b)

	void OnNodesInConeUpdated(struct TArray<int32_t>& NodesInCone, struct TArray<int32_t>& VisibleNodes); // Function AISpatialAwareness.InfluenceVisionConeSourceComponent.OnNodesInConeUpdated // (Final|Native|Private|HasOutParms) // @ game+0x55f7090
	float GetInfluenceValue(); // Function AISpatialAwareness.InfluenceVisionConeSourceComponent.GetInfluenceValue // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x55f32c0
	void Enable(); // Function AISpatialAwareness.InfluenceVisionConeSourceComponent.Enable // (Final|Native|Public|BlueprintCallable) // @ game+0x55f74b0
	void Disable(); // Function AISpatialAwareness.InfluenceVisionConeSourceComponent.Disable // (Final|Native|Public|BlueprintCallable) // @ game+0x55f73f0
};

// Class AISpatialAwareness.LayerBlockAssignerComponentBase
// Size: 0xd8 (Inherited: 0xd8)
struct ULayerBlockAssignerComponentBase : UActorComponent {

	struct FString GetStringIdentifierForBlockID(struct FInfluenceLayerBlockID BlockID); // Function AISpatialAwareness.LayerBlockAssignerComponentBase.GetStringIdentifierForBlockID // (Event|Public|BlueprintEvent|Const) // @ game+0x19be2f0
	int32_t GetNumLayerBlocks(); // Function AISpatialAwareness.LayerBlockAssignerComponentBase.GetNumLayerBlocks // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x55f76d0
	struct FInfluenceLayerBlockID GetNextLayerBlockID(); // Function AISpatialAwareness.LayerBlockAssignerComponentBase.GetNextLayerBlockID // (Final|Native|Protected|BlueprintCallable|Const) // @ game+0x55f76a0
	struct FInfluenceLayerBlockID GetLayerBlockIDForActor(struct AActor* InActor); // Function AISpatialAwareness.LayerBlockAssignerComponentBase.GetLayerBlockIDForActor // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x55f7710
	struct ULayerBlockAssignerComponentBase* AuthGetLayerBlockAssigner(struct UObject* WorldContextObject); // Function AISpatialAwareness.LayerBlockAssignerComponentBase.AuthGetLayerBlockAssigner // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x55f7820
	void AssignLayerBlockIDs(); // Function AISpatialAwareness.LayerBlockAssignerComponentBase.AssignLayerBlockIDs // (Event|Public|BlueprintEvent|Const) // @ game+0x19be2f0
};

// Class AISpatialAwareness.MapMarkupRoom
// Size: 0x4f8 (Inherited: 0x460)
struct AMapMarkupRoom : AActor {
	struct FGameplayTagContainer RoomTags; // 0x460(0x20)
	struct TArray<struct AMapMarkupRoom*> NavConnectedRooms; // 0x480(0x10)
	struct TArray<struct AMapMarkupWaypoint*> RoomWaypoints; // 0x490(0x10)
	struct TSet<struct AActor*> OccupyingActors; // 0x4a0(0x50)
	struct UInfluenceMapRoomManagerComponent* CachedRoomManagerComponent; // 0x4f0(0x08)

	bool IsActorInRoom(struct AActor* InActor); // Function AISpatialAwareness.MapMarkupRoom.IsActorInRoom // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x55f7d10
	struct TArray<struct AMapMarkupWaypoint*> GetWaypointsOfType(char TypeFlags); // Function AISpatialAwareness.MapMarkupRoom.GetWaypointsOfType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x55f7e90
	struct TArray<struct AMapMarkupWaypoint*> GetWaypointsOfClass(struct AMapMarkupWaypoint* WaypointType); // Function AISpatialAwareness.MapMarkupRoom.GetWaypointsOfClass // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x55f80a0
	struct TArray<struct AMapMarkupWaypoint*> GetWaypoints(); // Function AISpatialAwareness.MapMarkupRoom.GetWaypoints // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x55f8330
	struct TArray<struct AMapMarkupRoom*> GetNavConnectedRooms(); // Function AISpatialAwareness.MapMarkupRoom.GetNavConnectedRooms // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x55f8300
	struct TArray<struct AActor*> GetActorsInRoom(); // Function AISpatialAwareness.MapMarkupRoom.GetActorsInRoom // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x55f7c60
};

// Class AISpatialAwareness.MapMarkupWaypoint
// Size: 0x4f0 (Inherited: 0x460)
struct AMapMarkupWaypoint : AActor {
	struct TMap<struct FName, struct FEnvNamedValue> WaypointQueryNamedParams; // 0x460(0x50)
	float MinValueAfterDecay; // 0x4b0(0x04)
	float MaxValueAfterGrowth; // 0x4b4(0x04)
	struct TArray<struct AMapMarkupWaypoint*> ConnectedWaypoints; // 0x4b8(0x10)
	struct TArray<struct AMapMarkupRoom*> OwningRooms; // 0x4c8(0x10)
	int32_t CachedNodeIndex; // 0x4d8(0x04)
	char WaypointTypeFlags; // 0x4dc(0x01)
	char pad_4DD[0x3]; // 0x4dd(0x03)
	struct UInfluenceMapNodeGraphComponent* CachedNodeGraphComponent; // 0x4e0(0x08)
	struct UInfluenceMapSourceManagerComponent* CachedSourceManagerComponent; // 0x4e8(0x08)

	bool WaypointIsType(char TypeFlags); // Function AISpatialAwareness.MapMarkupWaypoint.WaypointIsType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x55f8920
	float QueryInfluence(struct AActor* Querent, struct FInfluenceLayerBlockID& BlockID, enum class EInfluenceLayerTag InfluenceType, enum class EWaypointInfluenceQueryReturnType ReturnType, bool bIgnoreQuerent); // Function AISpatialAwareness.MapMarkupWaypoint.QueryInfluence // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x55f8bd0
	bool IsInRoom(struct AMapMarkupRoom* InRoom); // Function AISpatialAwareness.MapMarkupWaypoint.IsInRoom // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x55f87d0
	bool HasInfluenceOfType(struct FInfluenceLayerBlockID& BlockID, enum class EInfluenceLayerTag LayerTag); // Function AISpatialAwareness.MapMarkupWaypoint.HasInfluenceOfType // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x55f8a20
	struct TArray<struct AMapMarkupRoom*> GetOwningRooms(); // Function AISpatialAwareness.MapMarkupWaypoint.GetOwningRooms // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x55f88f0
	float GetInfluenceValue(struct FInfluenceLayerBlockID& BlockID, struct FInfluenceLayerID& LayerID); // Function AISpatialAwareness.MapMarkupWaypoint.GetInfluenceValue // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x55f9270
	struct FString GetDebugString(); // Function AISpatialAwareness.MapMarkupWaypoint.GetDebugString // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x55f8730
};

// Class AISpatialAwareness.MapMarkupWaypointDebuggerComponent
// Size: 0x1c0 (Inherited: 0xd8)
struct UMapMarkupWaypointDebuggerComponent : UActorComponent {
	struct FMapMarkupWaypointDebugData WaypointDebugData; // 0xd8(0x30)
	struct AInfluenceMap* CachedInfluenceMap; // 0x108(0x08)
	struct TArray<struct AMapMarkupWaypoint*> CachedWaypoints; // 0x110(0x10)
	struct TMap<struct APlayerController*, struct AMapMarkupWaypoint*> FocusedWaypointsMap; // 0x120(0x50)
	struct TMap<struct APlayerController*, struct FClientRequestedWaypointDebugData> ClientRequestedDebugDataMap; // 0x170(0x50)
};

// Class AISpatialAwareness.NodePlacementStrategyBase
// Size: 0x98 (Inherited: 0x30)
struct UNodePlacementStrategyBase : UObject {
	struct TMap<uint64_t, struct FWaypointsForNavMeshPoly> CachedWaypoints; // 0x30(0x50)
	char pad_80[0x18]; // 0x80(0x18)

	void OnNavDataRegistered(struct ANavigationData* NavData); // Function AISpatialAwareness.NodePlacementStrategyBase.OnNavDataRegistered // (Final|Native|Private) // @ game+0x55fa370
};

// Class AISpatialAwareness.NodePlacementStrategyNavMeshPolys
// Size: 0xa0 (Inherited: 0x98)
struct UNodePlacementStrategyNavMeshPolys : UNodePlacementStrategyBase {
	float UpwardNavLinkConnectionLimit; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// Class AISpatialAwareness.RoomAssignerComponent
// Size: 0x110 (Inherited: 0xd8)
struct URoomAssignerComponent : UActorComponent {
	float ReadyCheckResponseTimerDuration; // 0xd8(0x04)
	float ImmediatePassAfterReadyTimerDuration; // 0xdc(0x04)
	struct TArray<struct APlayerState*> PendingRoomReadyChecks; // 0xe0(0x10)
	struct TArray<struct APlayerState*> PassedRoomReadyChecks; // 0xf0(0x10)
	char pad_100[0x10]; // 0x100(0x10)

	void ServerUpdateReadyCheck(struct APlayerState* InPlayerState, bool bIsReady); // Function AISpatialAwareness.RoomAssignerComponent.ServerUpdateReadyCheck // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x55fa9d0
	void ReceiveReadyCheckUpdate(struct APlayerState* InPlayerState, bool bIsReady); // Function AISpatialAwareness.RoomAssignerComponent.ReceiveReadyCheckUpdate // (Final|Native|Protected|BlueprintCallable) // @ game+0x55fac70
	bool HasPendingReadyChecks(); // Function AISpatialAwareness.RoomAssignerComponent.HasPendingReadyChecks // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x55fb210
	bool HasPassedReadyChecks(); // Function AISpatialAwareness.RoomAssignerComponent.HasPassedReadyChecks // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x55fb1e0
	struct TArray<struct APlayerState*> GetPendingReadyChecks(); // Function AISpatialAwareness.RoomAssignerComponent.GetPendingReadyChecks // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x55fb0f0
	struct TArray<struct APlayerState*> GetPassedReadyChecks(); // Function AISpatialAwareness.RoomAssignerComponent.GetPassedReadyChecks // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x55fb000
	void AuthRemoveFromReadyCheck(struct APlayerState* InPlayerState); // Function AISpatialAwareness.RoomAssignerComponent.AuthRemoveFromReadyCheck // (Final|Native|Protected|BlueprintCallable) // @ game+0x33ba9c0
	void AuthOnReadyCheckPassedResponse(struct APlayerState* InPlayerState); // Function AISpatialAwareness.RoomAssignerComponent.AuthOnReadyCheckPassedResponse // (Native|Event|Protected|BlueprintEvent) // @ game+0x55fab70
	void AuthOnAllReadyChecksPassedResponse(); // Function AISpatialAwareness.RoomAssignerComponent.AuthOnAllReadyChecksPassedResponse // (Native|Event|Protected|BlueprintEvent) // @ game+0x46074d0
	void AuthInitPendingReadyChecks(struct TArray<struct APlayerState*> InNewPendingReadyChecks); // Function AISpatialAwareness.RoomAssignerComponent.AuthInitPendingReadyChecks // (Final|Native|Protected|BlueprintCallable) // @ game+0x55fae60
	void AuthImmediatePassAllPendingReadyChecks(); // Function AISpatialAwareness.RoomAssignerComponent.AuthImmediatePassAllPendingReadyChecks // (Final|Native|Protected|BlueprintCallable) // @ game+0x386c9d0
	void AuthCleanReadyCheckData(); // Function AISpatialAwareness.RoomAssignerComponent.AuthCleanReadyCheckData // (Final|Native|Protected|BlueprintCallable) // @ game+0x386c9d0
};

// Class AISpatialAwareness.RoomPathFinderComponent
// Size: 0xe0 (Inherited: 0xd8)
struct URoomPathFinderComponent : UActorComponent {
	char pad_D8[0x8]; // 0xd8(0x08)

	float GetCostBetweenRooms(struct AMapMarkupRoom* FromRoom, struct AMapMarkupRoom* ToRoom); // Function AISpatialAwareness.RoomPathFinderComponent.GetCostBetweenRooms // (Native|Event|Protected|BlueprintEvent) // @ game+0x55fb7e0
	bool FindRoomPath(struct AMapMarkupRoom* Start, struct AMapMarkupRoom* Dest, struct TArray<struct AMapMarkupRoom*>& OutPath, float& OutDistance); // Function AISpatialAwareness.RoomPathFinderComponent.FindRoomPath // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x55fb980
};

// Class AISpatialAwareness.RoomPathfinderDataComponent
// Size: 0x130 (Inherited: 0xd8)
struct URoomPathfinderDataComponent : UActorComponent {
	struct TMap<struct APlayerState*, struct FRoomPathfinderData> AssignedRoomPathfindingData; // 0xd8(0x50)
	char pad_128[0x8]; // 0x128(0x08)

	void MulticastSetRoomData(struct TArray<struct APlayerState*> InPlayerStates, struct TArray<struct FRoomPathfinderData> InData); // Function AISpatialAwareness.RoomPathfinderDataComponent.MulticastSetRoomData // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x55fc010
	struct FRoomPathfinderData GetRoomData(struct APlayerState* InPlayerState); // Function AISpatialAwareness.RoomPathfinderDataComponent.GetRoomData // (Final|Native|Public|BlueprintCallable) // @ game+0x55fc2b0
	void ClearRoomData(struct APlayerState* InPlayerState); // Function AISpatialAwareness.RoomPathfinderDataComponent.ClearRoomData // (Final|Native|Public|BlueprintCallable) // @ game+0x55fc590
	void AssignRoomData(struct APlayerState* InPlayerState, struct FRoomPathfinderData& InData); // Function AISpatialAwareness.RoomPathfinderDataComponent.AssignRoomData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x55fc6a0
};

// Class AISpatialAwareness.VisionConeNodeDetectorComponent
// Size: 0x150 (Inherited: 0xd8)
struct UVisionConeNodeDetectorComponent : UActorComponent {
	char pad_D8[0x8]; // 0xd8(0x08)
	struct FMulticastInlineDelegate OnInfluenceNodesInConeUpdated; // 0xe0(0x10)
	struct UObject* VisibilityCheckerClass; // 0xf0(0x08)
	float RefreshTickRate; // 0xf8(0x04)
	float SightRadius; // 0xfc(0x04)
	float PeripheralVisionHalfAngleDegrees; // 0x100(0x04)
	float PointOfViewBackwardOffset; // 0x104(0x04)
	float NearClippingRadius; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct UObject* VisibilityCheckerObject; // 0x110(0x08)
	char pad_118[0x8]; // 0x118(0x08)
	struct TArray<int32_t> CachedNodesInCone; // 0x120(0x10)
	struct TArray<int32_t> CachedVisibleNodes; // 0x130(0x10)
	struct UInfluenceMapNodeGraphComponent* CachedNodeGraphComp; // 0x140(0x08)
	char pad_148[0x8]; // 0x148(0x08)

	void AuthSetRefreshTickRate(float NewRefreshTickRate); // Function AISpatialAwareness.VisionConeNodeDetectorComponent.AuthSetRefreshTickRate // (Final|Native|Public|BlueprintCallable) // @ game+0x3d3aa20
	void AuthSetRefreshTickActive(bool bActivate); // Function AISpatialAwareness.VisionConeNodeDetectorComponent.AuthSetRefreshTickActive // (Final|Native|Public|BlueprintCallable) // @ game+0x338cfe0
};

// Class AISpatialAwareness.WaypointQueryEventsHelperBase
// Size: 0x38 (Inherited: 0x30)
struct UWaypointQueryEventsHelperBase : UObject {
	struct UBTService_RunWaypointQuery* OwnerService; // 0x30(0x08)

	void UnbindGameplayEvents(); // Function AISpatialAwareness.WaypointQueryEventsHelperBase.UnbindGameplayEvents // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BindGameplayEvents(); // Function AISpatialAwareness.WaypointQueryEventsHelperBase.BindGameplayEvents // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
};

