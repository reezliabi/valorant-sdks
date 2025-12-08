// Class IrisCore.DataStream
// Size: 0x30 (Inherited: 0x30)
struct UDataStream : UObject {
};

// Class IrisCore.DataStreamDefinitions
// Size: 0x48 (Inherited: 0x30)
struct UDataStreamDefinitions : UObject {
	struct TArray<struct FDataStreamDefinition> DataStreamDefinitions; // 0x30(0x10)
	char pad_40[0x8]; // 0x40(0x08)
};

// Class IrisCore.DataStreamManager
// Size: 0x38 (Inherited: 0x30)
struct UDataStreamManager : UDataStream {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class IrisCore.NetObjectFilterConfig
// Size: 0x38 (Inherited: 0x30)
struct UNetObjectFilterConfig : UObject {
	enum class ENetFilterType FilterType; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class IrisCore.FilterOutNetObjectFilterConfig
// Size: 0x38 (Inherited: 0x38)
struct UFilterOutNetObjectFilterConfig : UNetObjectFilterConfig {
};

// Class IrisCore.NetObjectFilter
// Size: 0x58 (Inherited: 0x30)
struct UNetObjectFilter : UObject {
	char pad_30[0x28]; // 0x30(0x28)
};

// Class IrisCore.FilterOutNetObjectFilter
// Size: 0x58 (Inherited: 0x58)
struct UFilterOutNetObjectFilter : UNetObjectFilter {
};

// Class IrisCore.IrisObjectReferencePackageMap
// Size: 0xf0 (Inherited: 0xe8)
struct UIrisObjectReferencePackageMap : UPackageMap {
	char pad_E8[0x8]; // 0xe8(0x08)
};

// Class IrisCore.NetObjectPrioritizer
// Size: 0x30 (Inherited: 0x30)
struct UNetObjectPrioritizer : UObject {
};

// Class IrisCore.LocationBasedNetObjectPrioritizer
// Size: 0x68 (Inherited: 0x30)
struct ULocationBasedNetObjectPrioritizer : UNetObjectPrioritizer {
	char pad_30[0x38]; // 0x30(0x38)
};

// Class IrisCore.NetBlobHandler
// Size: 0x40 (Inherited: 0x30)
struct UNetBlobHandler : UObject {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class IrisCore.NetBlobHandlerDefinitions
// Size: 0x40 (Inherited: 0x30)
struct UNetBlobHandlerDefinitions : UObject {
	struct TArray<struct FNetBlobHandlerDefinition> NetBlobHandlerDefinitions; // 0x30(0x10)
};

// Class IrisCore.NetObjectBlobHandler
// Size: 0x40 (Inherited: 0x40)
struct UNetObjectBlobHandler : UNetBlobHandler {
};

// Class IrisCore.NetObjectConnectionFilterConfig
// Size: 0x40 (Inherited: 0x38)
struct UNetObjectConnectionFilterConfig : UNetObjectFilterConfig {
	uint16_t MaxObjectCount; // 0x38(0x02)
	char pad_3A[0x6]; // 0x3a(0x06)
};

// Class IrisCore.NetObjectConnectionFilter
// Size: 0xa8 (Inherited: 0x58)
struct UNetObjectConnectionFilter : UNetObjectFilter {
	char pad_58[0x50]; // 0x58(0x50)
};

// Class IrisCore.NetObjectPrioritizerConfig
// Size: 0x30 (Inherited: 0x30)
struct UNetObjectPrioritizerConfig : UObject {
};

// Class IrisCore.NetObjectCountLimiterConfig
// Size: 0x48 (Inherited: 0x30)
struct UNetObjectCountLimiterConfig : UNetObjectPrioritizerConfig {
	enum class ENetObjectCountLimiterMode Mode; // 0x30(0x04)
	uint32_t MaxObjectCount; // 0x34(0x04)
	float Priority; // 0x38(0x04)
	float OwningConnectionPriority; // 0x3c(0x04)
	bool bEnableOwnedObjectsFastLane; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class IrisCore.NetObjectCountLimiter
// Size: 0x98 (Inherited: 0x30)
struct UNetObjectCountLimiter : UNetObjectPrioritizer {
	char pad_30[0x68]; // 0x30(0x68)
};

// Class IrisCore.NetObjectFilterDefinitions
// Size: 0x40 (Inherited: 0x30)
struct UNetObjectFilterDefinitions : UObject {
	struct TArray<struct FNetObjectFilterDefinition> NetObjectFilterDefinitions; // 0x30(0x10)
};

// Class IrisCore.NetObjectGridFilterConfig
// Size: 0x80 (Inherited: 0x38)
struct UNetObjectGridFilterConfig : UNetObjectFilterConfig {
	uint32_t ViewPosRelevancyFrameCount; // 0x38(0x04)
	float CellSizeX; // 0x3c(0x04)
	float CellSizeY; // 0x40(0x04)
	float MaxCullDistance; // 0x44(0x04)
	float DefaultCullDistance; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FVector MinPos; // 0x50(0x18)
	struct FVector MaxPos; // 0x68(0x18)
};

// Class IrisCore.NetObjectGridFilter
// Size: 0x100 (Inherited: 0x58)
struct UNetObjectGridFilter : UNetObjectFilter {
	char pad_58[0xa8]; // 0x58(0xa8)
};

// Class IrisCore.NetObjectGridWorldLocFilter
// Size: 0x108 (Inherited: 0x100)
struct UNetObjectGridWorldLocFilter : UNetObjectGridFilter {
	char pad_100[0x8]; // 0x100(0x08)
};

// Class IrisCore.NetObjectGridFragmentLocFilter
// Size: 0x150 (Inherited: 0x100)
struct UNetObjectGridFragmentLocFilter : UNetObjectGridFilter {
	char pad_100[0x50]; // 0x100(0x50)
};

// Class IrisCore.NetObjectPrioritizerDefinitions
// Size: 0x40 (Inherited: 0x30)
struct UNetObjectPrioritizerDefinitions : UObject {
	struct TArray<struct FNetObjectPrioritizerDefinition> NetObjectPrioritizerDefinitions; // 0x30(0x10)
};

// Class IrisCore.NetRPCHandler
// Size: 0x48 (Inherited: 0x40)
struct UNetRPCHandler : UNetBlobHandler {
	char pad_40[0x8]; // 0x40(0x08)
};

// Class IrisCore.NetTokenDataStream
// Size: 0x80 (Inherited: 0x30)
struct UNetTokenDataStream : UDataStream {
	char pad_30[0x50]; // 0x30(0x50)
};

// Class IrisCore.NopNetObjectFilterConfig
// Size: 0x38 (Inherited: 0x38)
struct UNopNetObjectFilterConfig : UNetObjectFilterConfig {
};

// Class IrisCore.NopNetObjectFilter
// Size: 0x58 (Inherited: 0x58)
struct UNopNetObjectFilter : UNetObjectFilter {
};

// Class IrisCore.ReplicationBridge
// Size: 0x118 (Inherited: 0x30)
struct UReplicationBridge : UObject {
	char pad_30[0xe8]; // 0x30(0xe8)
};

// Class IrisCore.ObjectReplicationBridge
// Size: 0x4c0 (Inherited: 0x118)
struct UObjectReplicationBridge : UReplicationBridge {
	char pad_118[0x3a8]; // 0x118(0x3a8)
};

// Class IrisCore.ObjectReplicationBridgeConfig
// Size: 0x88 (Inherited: 0x30)
struct UObjectReplicationBridgeConfig : UObject {
	struct TArray<struct FObjectReplicationBridgePollConfig> PollConfigs; // 0x30(0x10)
	struct TArray<struct FObjectReplicationBridgeFilterConfig> FilterConfigs; // 0x40(0x10)
	struct TArray<struct FObjectReplicationBridgePrioritizerConfig> PrioritizerConfigs; // 0x50(0x10)
	struct TArray<struct FObjectReplicationBridgeDeltaCompressionConfig> DeltaCompressionConfigs; // 0x60(0x10)
	struct FName DefaultSpatialFilterName; // 0x70(0x0c)
	struct FName RequiredNetDriverChannelClassName; // 0x7c(0x0c)
};

// Class IrisCore.SequentialPartialNetBlobHandlerConfig
// Size: 0x38 (Inherited: 0x30)
struct USequentialPartialNetBlobHandlerConfig : UObject {
	uint32_t MaxPartBitCount; // 0x30(0x04)
	uint32_t MaxPartCount; // 0x34(0x04)
};

// Class IrisCore.PartialNetObjectAttachmentHandlerConfig
// Size: 0x40 (Inherited: 0x38)
struct UPartialNetObjectAttachmentHandlerConfig : USequentialPartialNetBlobHandlerConfig {
	uint32_t BitCountSplitThreshold; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class IrisCore.SequentialPartialNetBlobHandler
// Size: 0x50 (Inherited: 0x40)
struct USequentialPartialNetBlobHandler : UNetBlobHandler {
	char pad_40[0x10]; // 0x40(0x10)
};

// Class IrisCore.PartialNetObjectAttachmentHandler
// Size: 0x50 (Inherited: 0x50)
struct UPartialNetObjectAttachmentHandler : USequentialPartialNetBlobHandler {
};

// Class IrisCore.ReplicationDataStream
// Size: 0x40 (Inherited: 0x30)
struct UReplicationDataStream : UDataStream {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class IrisCore.ReplicationSystem
// Size: 0x60 (Inherited: 0x30)
struct UReplicationSystem : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct UReplicationBridge* ReplicationBridge; // 0x40(0x08)
	char pad_48[0x18]; // 0x48(0x18)
};

// Class IrisCore.SphereNetObjectPrioritizerConfig
// Size: 0x48 (Inherited: 0x30)
struct USphereNetObjectPrioritizerConfig : UNetObjectPrioritizerConfig {
	float InnerRadius; // 0x30(0x04)
	float OuterRadius; // 0x34(0x04)
	float InnerPriority; // 0x38(0x04)
	float OuterPriority; // 0x3c(0x04)
	float OutsidePriority; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class IrisCore.SphereNetObjectPrioritizer
// Size: 0x70 (Inherited: 0x68)
struct USphereNetObjectPrioritizer : ULocationBasedNetObjectPrioritizer {
	char pad_68[0x8]; // 0x68(0x08)
};

// Class IrisCore.SphereWithOwnerBoostNetObjectPrioritizerConfig
// Size: 0x50 (Inherited: 0x48)
struct USphereWithOwnerBoostNetObjectPrioritizerConfig : USphereNetObjectPrioritizerConfig {
	float OwnerPriorityBoost; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class IrisCore.SphereWithOwnerBoostNetObjectPrioritizer
// Size: 0xa8 (Inherited: 0x70)
struct USphereWithOwnerBoostNetObjectPrioritizer : USphereNetObjectPrioritizer {
	char pad_70[0x38]; // 0x70(0x38)
};

// Class IrisCore.ReplicationStateDescriptorConfig
// Size: 0x40 (Inherited: 0x30)
struct UReplicationStateDescriptorConfig : UObject {
	struct TArray<struct FSupportsStructNetSerializerConfig> SupportsStructNetSerializerList; // 0x30(0x10)
};

