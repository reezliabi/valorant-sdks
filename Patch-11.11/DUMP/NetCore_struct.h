// Enum NetCore.ENetworkFailure
enum class ENetworkFailure : uint8 {
	NetDriverAlreadyExists = 0,
	NetDriverCreateFailure = 1,
	NetDriverListenFailure = 2,
	ConnectionLost = 3,
	ConnectionTimeout = 4,
	FailureReceived = 5,
	OutdatedClient = 6,
	OutdatedServer = 7,
	PendingConnectionFailure = 8,
	NetGuidMismatch = 9,
	NetChecksumMismatch = 10,
	ENetworkFailure_MAX = 11
};

// Enum NetCore.EPushModelGlobalBehavior
enum class EPushModelGlobalBehavior : uint8 {
	Disabled = 0,
	OptIn = 1,
	EnabledByDefault = 2,
	EPushModelGlobalBehavior_MAX = 3
};

// Enum NetCore.ENetCloseResult
enum class ENetCloseResult : uint8 {
	NetDriverAlreadyExists = 0,
	NetDriverCreateFailure = 1,
	NetDriverListenFailure = 2,
	ConnectionLost = 3,
	ConnectionTimeout = 4,
	FailureReceived = 5,
	OutdatedClient = 6,
	OutdatedServer = 7,
	PendingConnectionFailure = 8,
	NetGuidMismatch = 9,
	NetChecksumMismatch = 10,
	SecurityMalformedPacket = 11,
	SecurityInvalidData = 12,
	SecurityClosed = 13,
	SecurityRPCThresholdExceeded = 14,
	Unknown = 15,
	Success = 16,
	Extended = 17,
	HostClosedConnection = 18,
	Disconnect = 19,
	Upgrade = 20,
	PreLoginFailure = 21,
	JoinFailure = 22,
	JoinSplitFailure = 23,
	AddressResolutionFailed = 24,
	RPCDoS = 25,
	Cleanup = 26,
	MissingLevelPackage = 27,
	PacketHandlerIncomingError = 28,
	ZeroLastByte = 29,
	ZeroSize = 30,
	ReadHeaderFail = 31,
	ReadHeaderExtraFail = 32,
	AckSequenceMismatch = 33,
	BunchBadChannelIndex = 34,
	BunchChannelNameFail = 35,
	BunchWrongChannelType = 36,
	BunchHeaderOverflow = 37,
	BunchDataOverflow = 38,
	BunchServerPackageMapExports = 39,
	BunchPrematureControlChannel = 40,
	BunchPrematureChannel = 41,
	BunchPrematureControlClose = 42,
	UnknownChannelType = 43,
	PrematureSend = 44,
	CorruptData = 45,
	SocketSendFailure = 46,
	BadChildConnectionIndex = 47,
	LogLimitInstant = 48,
	LogLimitSustained = 49,
	EncryptionFailure = 50,
	EncryptionTokenMissing = 51,
	ReceivedNetGUIDBunchFail = 52,
	MaxReliableExceeded = 53,
	ReceivedNextBunchFail = 54,
	ReceivedNextBunchQueueFail = 55,
	PartialInitialReliableDestroy = 56,
	PartialMergeReliableDestroy = 57,
	PartialInitialNonByteAligned = 58,
	PartialNonByteAligned = 59,
	PartialFinalPackageMapExports = 60,
	PartialTooLarge = 61,
	AlreadyOpen = 62,
	ReliableBeforeOpen = 63,
	ReliableBufferOverflow = 64,
	RPCReliableBufferOverflow = 65,
	ControlChannelClose = 66,
	ControlChannelEndianCheck = 67,
	ControlChannelPlayerChannelFail = 68,
	ControlChannelMessageUnknown = 69,
	ControlChannelMessageFail = 70,
	ControlChannelMessagePayloadFail = 71,
	ControlChannelBunchOverflowed = 72,
	ControlChannelQueueBunchOverflowed = 73,
	ClientHasMustBeMappedGUIDs = 74,
	ClientSentDestructionInfo = 75,
	UnregisteredMustBeMappedGUID = 76,
	ObjectReplicatorReceivedBunchFail = 77,
	ContentBlockFail = 78,
	ContentBlockHeaderRepLayoutFail = 79,
	ContentBlockHeaderIsActorFail = 80,
	ContentBlockHeaderObjFail = 81,
	ContentBlockHeaderPrematureEnd = 82,
	ContentBlockHeaderSubObjectActor = 83,
	ContentBlockHeaderBadParent = 84,
	ContentBlockHeaderInvalidCreate = 85,
	ContentBlockHeaderStablyNamedFail = 86,
	ContentBlockHeaderNoSubObjectClass = 87,
	ContentBlockHeaderUObjectSubObject = 88,
	ContentBlockHeaderAActorSubObject = 89,
	ContentBlockHeaderFail = 90,
	ContentBlockPayloadBitsFail = 91,
	FieldHeaderRepIndex = 92,
	FieldHeaderBadRepIndex = 93,
	FieldHeaderPayloadBitsFail = 94,
	FieldPayloadFail = 95,
	BeaconControlFlowError = 96,
	BeaconUnableToParsePacket = 97,
	BeaconAuthenticationFailure = 98,
	BeaconLoginInvalidIdError = 99,
	BeaconLoginInvalidAuthHandlerError = 100,
	BeaconAuthError = 101,
	BeaconSpawnClientWorldPackageNameError = 102,
	BeaconSpawnExistingActorError = 103,
	BeaconSpawnFailureError = 104,
	BeaconSpawnNetGUIDAckNoActor = 105,
	BeaconSpawnNetGUIDAckNoHost = 106,
	BeaconSpawnUnexpectedError = 107,
	FaultDisconnect = 108,
	NotRecoverable = 109,
	ENetCloseResult_MAX = 110
};

// Enum NetCore.EFastArraySerializerDeltaFlags
enum class EFastArraySerializerDeltaFlags : uint8 {
	None = 0,
	HasBeenSerialized = 1,
	HasDeltaBeenRequested = 2,
	IsUsingDeltaSerialization = 4,
	EFastArraySerializerDeltaFlags_MAX = 5
};

// ScriptStruct NetCore.FastArraySerializerItem
// Size: 0x0c (Inherited: 0x00)
struct FFastArraySerializerItem {
	int32_t ReplicationID; // 0x00(0x04)
	int32_t ReplicationKey; // 0x04(0x04)
	int32_t MostRecentArrayReplicationKey; // 0x08(0x04)
};

// ScriptStruct NetCore.FastArraySerializer
// Size: 0x108 (Inherited: 0x00)
struct FFastArraySerializer {
	char pad_0[0x54]; // 0x00(0x54)
	int32_t ArrayReplicationKey; // 0x54(0x04)
	char pad_58[0xa8]; // 0x58(0xa8)
	enum class EFastArraySerializerDeltaFlags DeltaFlags; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
};

// ScriptStruct NetCore.NetAnalyticsDataConfig
// Size: 0x10 (Inherited: 0x00)
struct FNetAnalyticsDataConfig {
	struct FName DataName; // 0x00(0x0c)
	bool bEnabled; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct NetCore.StateStruct
// Size: 0x18 (Inherited: 0x00)
struct FStateStruct {
	char pad_0[0x8]; // 0x00(0x08)
	struct FString StateName; // 0x08(0x10)
};

// ScriptStruct NetCore.EscalationState
// Size: 0x30 (Inherited: 0x18)
struct FEscalationState : FStateStruct {
	bool bLogEscalate; // 0x18(0x01)
	bool bDormant; // 0x19(0x01)
	int16_t CooloffTime; // 0x1a(0x02)
	int16_t AutoEscalateTime; // 0x1c(0x02)
	int8_t HighestTimePeriod; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
	struct TArray<int8_t> AllTimePeriods; // 0x20(0x10)
};

// ScriptStruct NetCore.NetFaultState
// Size: 0x40 (Inherited: 0x30)
struct FNetFaultState : FEscalationState {
	bool bCloseConnection; // 0x30(0x01)
	char pad_31[0x1]; // 0x31(0x01)
	int16_t EscalateQuotaFaultsPerPeriod; // 0x32(0x02)
	int8_t EscalateQuotaFaultPercentPerPeriod; // 0x34(0x01)
	char pad_35[0x1]; // 0x35(0x01)
	int16_t DescalateQuotaFaultsPerPeriod; // 0x36(0x02)
	int8_t DescalateQuotaFaultPercentPerPeriod; // 0x38(0x01)
	int8_t EscalateQuotaTimePeriod; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
};

