// Enum IrisCore.EDataStreamSendStatus
enum class EDataStreamSendStatus : uint8 {
	Send = 0,
	Pause = 1,
	EDataStreamSendStatus_MAX = 2
};

// Enum IrisCore.ENetObjectCountLimiterMode
enum class ENetObjectCountLimiterMode : uint8 {
	RoundRobin = 0,
	Fill = 1,
	ENetObjectCountLimiterMode_MAX = 2
};

// Enum IrisCore.ENetFilterType
enum class ENetFilterType : uint8 {
	PrePoll_Raw = 0,
	PostPoll_FragmentBased = 1,
	ENetFilterType_MAX = 2
};

// ScriptStruct IrisCore.DataStreamDefinition
// Size: 0x28 (Inherited: 0x00)
struct FDataStreamDefinition {
	struct FName DataStreamName; // 0x00(0x0c)
	struct FName ClassName; // 0x0c(0x0c)
	ClassPtrProperty Class; // 0x18(0x08)
	enum class EDataStreamSendStatus DefaultSendStatus; // 0x20(0x01)
	bool bAutoCreate; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct IrisCore.NetSerializerConfig
// Size: 0x10 (Inherited: 0x00)
struct FNetSerializerConfig {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct IrisCore.DateTimeNetSerializerConfig
// Size: 0x10 (Inherited: 0x10)
struct FDateTimeNetSerializerConfig : FNetSerializerConfig {
};

// ScriptStruct IrisCore.EnumInt8NetSerializerConfig
// Size: 0x20 (Inherited: 0x10)
struct FEnumInt8NetSerializerConfig : FNetSerializerConfig {
	int8_t LowerBound; // 0x10(0x01)
	int8_t UpperBound; // 0x11(0x01)
	char BitCount; // 0x12(0x01)
	char pad_13[0xd]; // 0x13(0x0d)
};

// ScriptStruct IrisCore.EnumInt16NetSerializerConfig
// Size: 0x20 (Inherited: 0x10)
struct FEnumInt16NetSerializerConfig : FNetSerializerConfig {
	int16_t LowerBound; // 0x10(0x02)
	int16_t UpperBound; // 0x12(0x02)
	char BitCount; // 0x14(0x01)
	char pad_15[0xb]; // 0x15(0x0b)
};

// ScriptStruct IrisCore.EnumInt32NetSerializerConfig
// Size: 0x28 (Inherited: 0x10)
struct FEnumInt32NetSerializerConfig : FNetSerializerConfig {
	int32_t LowerBound; // 0x10(0x04)
	int32_t UpperBound; // 0x14(0x04)
	char BitCount; // 0x18(0x01)
	char pad_19[0xf]; // 0x19(0x0f)
};

// ScriptStruct IrisCore.EnumInt64NetSerializerConfig
// Size: 0x30 (Inherited: 0x10)
struct FEnumInt64NetSerializerConfig : FNetSerializerConfig {
	int64_t LowerBound; // 0x10(0x08)
	int64_t UpperBound; // 0x18(0x08)
	char BitCount; // 0x20(0x01)
	char pad_21[0xf]; // 0x21(0x0f)
};

// ScriptStruct IrisCore.EnumUint8NetSerializerConfig
// Size: 0x20 (Inherited: 0x10)
struct FEnumUint8NetSerializerConfig : FNetSerializerConfig {
	char LowerBound; // 0x10(0x01)
	char UpperBound; // 0x11(0x01)
	char BitCount; // 0x12(0x01)
	char pad_13[0xd]; // 0x13(0x0d)
};

// ScriptStruct IrisCore.EnumUint16NetSerializerConfig
// Size: 0x20 (Inherited: 0x10)
struct FEnumUint16NetSerializerConfig : FNetSerializerConfig {
	uint16_t LowerBound; // 0x10(0x02)
	uint16_t UpperBound; // 0x12(0x02)
	char BitCount; // 0x14(0x01)
	char pad_15[0xb]; // 0x15(0x0b)
};

// ScriptStruct IrisCore.EnumUint32NetSerializerConfig
// Size: 0x28 (Inherited: 0x10)
struct FEnumUint32NetSerializerConfig : FNetSerializerConfig {
	uint32_t LowerBound; // 0x10(0x04)
	uint32_t UpperBound; // 0x14(0x04)
	char BitCount; // 0x18(0x01)
	char pad_19[0xf]; // 0x19(0x0f)
};

// ScriptStruct IrisCore.EnumUint64NetSerializerConfig
// Size: 0x30 (Inherited: 0x10)
struct FEnumUint64NetSerializerConfig : FNetSerializerConfig {
	uint64_t LowerBound; // 0x10(0x08)
	uint64_t UpperBound; // 0x18(0x08)
	char BitCount; // 0x20(0x01)
	char pad_21[0xf]; // 0x21(0x0f)
};

// ScriptStruct IrisCore.FloatNetSerializerConfig
// Size: 0x10 (Inherited: 0x10)
struct FFloatNetSerializerConfig : FNetSerializerConfig {
};

// ScriptStruct IrisCore.DoubleNetSerializerConfig
// Size: 0x10 (Inherited: 0x10)
struct FDoubleNetSerializerConfig : FNetSerializerConfig {
};

// ScriptStruct IrisCore.GuidNetSerializerConfig
// Size: 0x10 (Inherited: 0x10)
struct FGuidNetSerializerConfig : FNetSerializerConfig {
};

// ScriptStruct IrisCore.BitfieldNetSerializerConfig
// Size: 0x18 (Inherited: 0x10)
struct FBitfieldNetSerializerConfig : FNetSerializerConfig {
	char BitMask; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct IrisCore.ArrayPropertyNetSerializerConfig
// Size: 0x40 (Inherited: 0x10)
struct FArrayPropertyNetSerializerConfig : FNetSerializerConfig {
	uint16_t MaxElementCount; // 0x10(0x02)
	uint16_t ElementCountBitCount; // 0x12(0x02)
	char pad_14[0x4]; // 0x14(0x04)
	struct TFieldPath<FArrayProperty> Property; // 0x18(0x20)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct IrisCore.LastResortPropertyNetSerializerConfig
// Size: 0x38 (Inherited: 0x10)
struct FLastResortPropertyNetSerializerConfig : FNetSerializerConfig {
	struct TFieldPath<FProperty> Property; // 0x10(0x20)
	uint32_t MaxAllowedObjectReferences; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct IrisCore.NetRoleNetSerializerConfig
// Size: 0x28 (Inherited: 0x10)
struct FNetRoleNetSerializerConfig : FNetSerializerConfig {
	int32_t RelativeInternalOffsetToOtherRole; // 0x10(0x04)
	int32_t RelativeExternalOffsetToOtherRole; // 0x14(0x04)
	char LowerBound; // 0x18(0x01)
	char UpperBound; // 0x19(0x01)
	char BitCount; // 0x1a(0x01)
	char AutonomousProxyValue; // 0x1b(0x01)
	char SimulatedProxyValue; // 0x1c(0x01)
	char pad_1D[0xb]; // 0x1d(0x0b)
};

// ScriptStruct IrisCore.FieldPathNetSerializerConfig
// Size: 0x30 (Inherited: 0x10)
struct FFieldPathNetSerializerConfig : FNetSerializerConfig {
	struct TFieldPath<FProperty> Property; // 0x10(0x20)
};

// ScriptStruct IrisCore.FieldPathNetSerializerSerializationHelper
// Size: 0x18 (Inherited: 0x00)
struct FFieldPathNetSerializerSerializationHelper {
	struct TWeakObjectPtr<struct UStruct> Owner; // 0x00(0x08)
	struct TArray<struct FName> PropertyPath; // 0x08(0x10)
};

// ScriptStruct IrisCore.IntNetSerializerConfig
// Size: 0x18 (Inherited: 0x10)
struct FIntNetSerializerConfig : FNetSerializerConfig {
	char BitCount; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct IrisCore.Int8RangeNetSerializerConfig
// Size: 0x18 (Inherited: 0x10)
struct FInt8RangeNetSerializerConfig : FNetSerializerConfig {
	int8_t LowerBound; // 0x10(0x01)
	int8_t UpperBound; // 0x11(0x01)
	char BitCount; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
};

// ScriptStruct IrisCore.Int16RangeNetSerializerConfig
// Size: 0x18 (Inherited: 0x10)
struct FInt16RangeNetSerializerConfig : FNetSerializerConfig {
	int16_t LowerBound; // 0x10(0x02)
	int16_t UpperBound; // 0x12(0x02)
	char BitCount; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct IrisCore.Int32RangeNetSerializerConfig
// Size: 0x20 (Inherited: 0x10)
struct FInt32RangeNetSerializerConfig : FNetSerializerConfig {
	int32_t LowerBound; // 0x10(0x04)
	int32_t UpperBound; // 0x14(0x04)
	char BitCount; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct IrisCore.Int64RangeNetSerializerConfig
// Size: 0x28 (Inherited: 0x10)
struct FInt64RangeNetSerializerConfig : FNetSerializerConfig {
	int64_t LowerBound; // 0x10(0x08)
	int64_t UpperBound; // 0x18(0x08)
	char BitCount; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct IrisCore.IrisFastArraySerializer
// Size: 0x120 (Inherited: 0x108)
struct FIrisFastArraySerializer : FFastArraySerializer {
	char pad_108[0x4]; // 0x108(0x04)
	uint32_t ChangeMaskStorage[0x4]; // 0x10c(0x10)
	char pad_11C[0x4]; // 0x11c(0x04)
};

// ScriptStruct IrisCore.NetBlobHandlerDefinition
// Size: 0x0c (Inherited: 0x00)
struct FNetBlobHandlerDefinition {
	struct FName ClassName; // 0x00(0x0c)
};

// ScriptStruct IrisCore.NetObjectFilterDefinition
// Size: 0x24 (Inherited: 0x00)
struct FNetObjectFilterDefinition {
	struct FName FilterName; // 0x00(0x0c)
	struct FName ClassName; // 0x0c(0x0c)
	struct FName ConfigClassName; // 0x18(0x0c)
};

// ScriptStruct IrisCore.NetObjectPrioritizerDefinition
// Size: 0x38 (Inherited: 0x00)
struct FNetObjectPrioritizerDefinition {
	struct FName PrioritizerName; // 0x00(0x0c)
	struct FName ClassName; // 0x0c(0x0c)
	ClassPtrProperty Class; // 0x18(0x08)
	struct FName ConfigClassName; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	ClassPtrProperty ConfigClass; // 0x30(0x08)
};

// ScriptStruct IrisCore.BoolNetSerializerConfig
// Size: 0x10 (Inherited: 0x10)
struct FBoolNetSerializerConfig : FNetSerializerConfig {
};

// ScriptStruct IrisCore.StructNetSerializerConfig
// Size: 0x18 (Inherited: 0x10)
struct FStructNetSerializerConfig : FNetSerializerConfig {
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct IrisCore.NopNetSerializerConfig
// Size: 0x10 (Inherited: 0x10)
struct FNopNetSerializerConfig : FNetSerializerConfig {
};

// ScriptStruct IrisCore.ObjectNetSerializerConfig
// Size: 0x10 (Inherited: 0x10)
struct FObjectNetSerializerConfig : FNetSerializerConfig {
};

// ScriptStruct IrisCore.WeakObjectNetSerializerConfig
// Size: 0x10 (Inherited: 0x10)
struct FWeakObjectNetSerializerConfig : FNetSerializerConfig {
};

// ScriptStruct IrisCore.ScriptInterfaceNetSerializerConfig
// Size: 0x18 (Inherited: 0x10)
struct FScriptInterfaceNetSerializerConfig : FNetSerializerConfig {
	ClassPtrProperty InterfaceClass; // 0x10(0x08)
};

// ScriptStruct IrisCore.ObjectReplicationBridgePollConfig
// Size: 0x14 (Inherited: 0x00)
struct FObjectReplicationBridgePollConfig {
	struct FName ClassName; // 0x00(0x0c)
	float PollFrequency; // 0x0c(0x04)
	bool bIncludeSubclasses; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct IrisCore.ObjectReplicationBridgeFilterConfig
// Size: 0x18 (Inherited: 0x00)
struct FObjectReplicationBridgeFilterConfig {
	struct FName ClassName; // 0x00(0x0c)
	struct FName DynamicFilterName; // 0x0c(0x0c)
};

// ScriptStruct IrisCore.ObjectReplicationBridgePrioritizerConfig
// Size: 0x1c (Inherited: 0x00)
struct FObjectReplicationBridgePrioritizerConfig {
	struct FName ClassName; // 0x00(0x0c)
	struct FName PrioritizerName; // 0x0c(0x0c)
	bool bForceEnableOnAllInstances; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct IrisCore.ObjectReplicationBridgeDeltaCompressionConfig
// Size: 0x10 (Inherited: 0x00)
struct FObjectReplicationBridgeDeltaCompressionConfig {
	struct FName ClassName; // 0x00(0x0c)
	bool bEnableDeltaCompression; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct IrisCore.PackedInt64NetSerializerConfig
// Size: 0x10 (Inherited: 0x10)
struct FPackedInt64NetSerializerConfig : FNetSerializerConfig {
};

// ScriptStruct IrisCore.PackedUint64NetSerializerConfig
// Size: 0x10 (Inherited: 0x10)
struct FPackedUint64NetSerializerConfig : FNetSerializerConfig {
};

// ScriptStruct IrisCore.PackedInt32NetSerializerConfig
// Size: 0x10 (Inherited: 0x10)
struct FPackedInt32NetSerializerConfig : FNetSerializerConfig {
};

// ScriptStruct IrisCore.PackedUint32NetSerializerConfig
// Size: 0x10 (Inherited: 0x10)
struct FPackedUint32NetSerializerConfig : FNetSerializerConfig {
};

// ScriptStruct IrisCore.VectorNetQuantizeNetSerializerConfig
// Size: 0x10 (Inherited: 0x10)
struct FVectorNetQuantizeNetSerializerConfig : FNetSerializerConfig {
};

// ScriptStruct IrisCore.VectorNetQuantize10NetSerializerConfig
// Size: 0x10 (Inherited: 0x10)
struct FVectorNetQuantize10NetSerializerConfig : FNetSerializerConfig {
};

// ScriptStruct IrisCore.VectorNetQuantize100NetSerializerConfig
// Size: 0x10 (Inherited: 0x10)
struct FVectorNetQuantize100NetSerializerConfig : FNetSerializerConfig {
};

// ScriptStruct IrisCore.VectorNetQuantizeNormalNetSerializerConfig
// Size: 0x10 (Inherited: 0x10)
struct FVectorNetQuantizeNormalNetSerializerConfig : FNetSerializerConfig {
};

// ScriptStruct IrisCore.PolymorphicStructNetSerializerConfig
// Size: 0x28 (Inherited: 0x10)
struct FPolymorphicStructNetSerializerConfig : FNetSerializerConfig {
	char pad_10[0x18]; // 0x10(0x18)
};

// ScriptStruct IrisCore.PolymorphicArrayStructNetSerializerConfig
// Size: 0x28 (Inherited: 0x28)
struct FPolymorphicArrayStructNetSerializerConfig : FPolymorphicStructNetSerializerConfig {
};

// ScriptStruct IrisCore.UnitQuatNetSerializerConfig
// Size: 0x10 (Inherited: 0x10)
struct FUnitQuatNetSerializerConfig : FNetSerializerConfig {
};

// ScriptStruct IrisCore.UnitQuat4fNetSerializerConfig
// Size: 0x10 (Inherited: 0x10)
struct FUnitQuat4fNetSerializerConfig : FNetSerializerConfig {
};

// ScriptStruct IrisCore.UnitQuat4dNetSerializerConfig
// Size: 0x10 (Inherited: 0x10)
struct FUnitQuat4dNetSerializerConfig : FNetSerializerConfig {
};

// ScriptStruct IrisCore.RotatorNetSerializerConfig
// Size: 0x10 (Inherited: 0x10)
struct FRotatorNetSerializerConfig : FNetSerializerConfig {
};

// ScriptStruct IrisCore.RotatorAsByteNetSerializerConfig
// Size: 0x10 (Inherited: 0x10)
struct FRotatorAsByteNetSerializerConfig : FNetSerializerConfig {
};

// ScriptStruct IrisCore.RotatorAsShortNetSerializerConfig
// Size: 0x10 (Inherited: 0x10)
struct FRotatorAsShortNetSerializerConfig : FNetSerializerConfig {
};

// ScriptStruct IrisCore.SoftObjectNetSerializerConfig
// Size: 0x10 (Inherited: 0x10)
struct FSoftObjectNetSerializerConfig : FNetSerializerConfig {
};

// ScriptStruct IrisCore.SoftObjectPathNetSerializerConfig
// Size: 0x10 (Inherited: 0x10)
struct FSoftObjectPathNetSerializerConfig : FNetSerializerConfig {
};

// ScriptStruct IrisCore.SoftClassPathNetSerializerConfig
// Size: 0x10 (Inherited: 0x10)
struct FSoftClassPathNetSerializerConfig : FNetSerializerConfig {
};

// ScriptStruct IrisCore.NameNetSerializerConfig
// Size: 0x10 (Inherited: 0x10)
struct FNameNetSerializerConfig : FNetSerializerConfig {
};

// ScriptStruct IrisCore.StringNetSerializerConfig
// Size: 0x10 (Inherited: 0x10)
struct FStringNetSerializerConfig : FNetSerializerConfig {
};

// ScriptStruct IrisCore.UintNetSerializerConfig
// Size: 0x18 (Inherited: 0x10)
struct FUintNetSerializerConfig : FNetSerializerConfig {
	char BitCount; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct IrisCore.Uint8RangeNetSerializerConfig
// Size: 0x18 (Inherited: 0x10)
struct FUint8RangeNetSerializerConfig : FNetSerializerConfig {
	char LowerBound; // 0x10(0x01)
	char UpperBound; // 0x11(0x01)
	char BitCount; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
};

// ScriptStruct IrisCore.Uint16RangeNetSerializerConfig
// Size: 0x18 (Inherited: 0x10)
struct FUint16RangeNetSerializerConfig : FNetSerializerConfig {
	uint16_t LowerBound; // 0x10(0x02)
	uint16_t UpperBound; // 0x12(0x02)
	char BitCount; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct IrisCore.Uint32RangeNetSerializerConfig
// Size: 0x20 (Inherited: 0x10)
struct FUint32RangeNetSerializerConfig : FNetSerializerConfig {
	uint32_t LowerBound; // 0x10(0x04)
	uint32_t UpperBound; // 0x14(0x04)
	char BitCount; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct IrisCore.Uint64RangeNetSerializerConfig
// Size: 0x28 (Inherited: 0x10)
struct FUint64RangeNetSerializerConfig : FNetSerializerConfig {
	uint64_t LowerBound; // 0x10(0x08)
	uint64_t UpperBound; // 0x18(0x08)
	char BitCount; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct IrisCore.VectorNetSerializerConfig
// Size: 0x10 (Inherited: 0x10)
struct FVectorNetSerializerConfig : FNetSerializerConfig {
};

// ScriptStruct IrisCore.Vector3fNetSerializerConfig
// Size: 0x10 (Inherited: 0x10)
struct FVector3fNetSerializerConfig : FNetSerializerConfig {
};

// ScriptStruct IrisCore.Vector3dNetSerializerConfig
// Size: 0x10 (Inherited: 0x10)
struct FVector3dNetSerializerConfig : FNetSerializerConfig {
};

// ScriptStruct IrisCore.SupportsStructNetSerializerConfig
// Size: 0x10 (Inherited: 0x00)
struct FSupportsStructNetSerializerConfig {
	struct FName StructName; // 0x00(0x0c)
	bool bCanUseStructNetSerializer; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

