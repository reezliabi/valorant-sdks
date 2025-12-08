// Enum Party.ESocialChannelType
enum class ESocialChannelType : uint8 {
	General = 0,
	Founder = 1,
	Party = 2,
	Team = 3,
	System = 4,
	Private = 5,
	ESocialChannelType_MAX = 6
};

// Enum Party.EPartyType
enum class EPartyType : uint8 {
	Public = 0,
	FriendsOnly = 1,
	Private = 2,
	EPartyType_MAX = 3
};

// Enum Party.EPartyInviteRestriction
enum class EPartyInviteRestriction : uint8 {
	AnyMember = 0,
	LeaderOnly = 1,
	NoInvites = 2,
	EPartyInviteRestriction_MAX = 3
};

// Enum Party.EPartyJoinDenialReason
enum class EPartyJoinDenialReason : uint8 {
	NoReason = 0,
	JoinAttemptAborted = 1,
	Busy = 2,
	OssUnavailable = 3,
	PartyFull = 4,
	GameFull = 5,
	NotPartyLeader = 6,
	PartyPrivate = 7,
	JoinerCrossplayRestricted = 8,
	MemberCrossplayRestricted = 9,
	GameModeRestricted = 10,
	Banned = 11,
	NotLoggedIn = 12,
	CheckingForRejoin = 13,
	TargetUserMissingPresence = 14,
	TargetUserUnjoinable = 15,
	TargetUserAway = 16,
	AlreadyLeaderInPlatformSession = 17,
	TargetUserPlayingDifferentGame = 18,
	TargetUserMissingPlatformSession = 19,
	PlatformSessionMissingJoinInfo = 20,
	FailedToStartFindConsoleSession = 21,
	MissingPartyClassForTypeId = 22,
	TargetUserBlocked = 23,
	InvalidJoinInfo = 24,
	NotFriends = 25,
	CustomReason0 = 26,
	CustomReason1 = 27,
	CustomReason2 = 28,
	CustomReason3 = 29,
	CustomReason4 = 30,
	CustomReason5 = 31,
	CustomReason6 = 32,
	CustomReason7 = 33,
	CustomReason8 = 34,
	CustomReason9 = 35,
	CustomReason10 = 36,
	CustomReason11 = 37,
	CustomReason12 = 38,
	CustomReason13 = 39,
	CustomReason14 = 40,
	CustomReason15 = 41,
	CustomReason16 = 42,
	CustomReason17 = 43,
	CustomReason18 = 44,
	CustomReason19 = 45,
	CustomReason20 = 46,
	CustomReason21 = 47,
	CustomReason22 = 48,
	CustomReason23 = 49,
	CustomReason24 = 50,
	CustomReason25 = 51,
	CustomReason26 = 52,
	CustomReason27 = 53,
	CustomReason28 = 54,
	CustomReason29 = 55,
	CustomReason30 = 56,
	CustomReason31 = 57,
	CustomReason32 = 58,
	CustomReason33 = 59,
	CustomReason34 = 60,
	CustomReason35 = 61,
	CustomReason36 = 62,
	CustomReason37 = 63,
	CustomReason38 = 64,
	CustomReason39 = 65,
	MAX = 66
};

// Enum Party.EApprovalAction
enum class EApprovalAction : uint8 {
	Approve = 0,
	Enqueue = 1,
	EnqueueAndStartBeacon = 2,
	Deny = 3,
	EApprovalAction_MAX = 4
};

// Enum Party.ESocialPartyInviteMethod
enum class ESocialPartyInviteMethod : uint8 {
	Other = 0,
	Notification = 1,
	AcceptRequestToJoin = 2,
	Custom0 = 3,
	Custom1 = 4,
	Custom2 = 5,
	Custom3 = 6,
	Custom4 = 7,
	Custom5 = 8,
	Custom6 = 9,
	Custom7 = 10,
	Custom8 = 11,
	Custom9 = 12,
	MAX = 13
};

// Enum Party.ESocialPartyInviteFailureReason
enum class ESocialPartyInviteFailureReason : uint8 {
	Success = 0,
	NotOnline = 1,
	NotAcceptingMembers = 2,
	NotFriends = 3,
	AlreadyInParty = 4,
	OssValidationFailed = 5,
	PlatformInviteFailed = 6,
	PartyInviteFailed = 7,
	InviteRateLimitExceeded = 8,
	ESocialPartyInviteFailureReason_MAX = 9
};

// Enum Party.ESocialSubsystem
enum class ESocialSubsystem : uint8 {
	Primary = 0,
	Platform = 1,
	MAX = 2
};

// Enum Party.ESocialRelationship
enum class ESocialRelationship : uint8 {
	Any = 0,
	FriendInviteReceived = 1,
	FriendInviteSent = 2,
	PartyInvite = 3,
	Friend = 4,
	BlockedPlayer = 5,
	SuggestedFriend = 6,
	RecentPlayer = 7,
	JoinRequest = 8,
	ESocialRelationship_MAX = 9
};

// Enum Party.ECrossplayPreference
enum class ECrossplayPreference : uint8 {
	NoSelection = 0,
	OptedIn = 1,
	OptedOut = 2,
	OptedOutRestricted = 3,
	ECrossplayPreference_MAX = 4
};

// Enum Party.EPlatformIconDisplayRule
enum class EPlatformIconDisplayRule : uint8 {
	Always = 0,
	AlwaysIfDifferent = 1,
	AlwaysWhenInCrossplayParty = 2,
	AlwaysIfDifferentWhenInCrossplayParty = 3,
	Never = 4,
	EPlatformIconDisplayRule_MAX = 5
};

// ScriptStruct Party.PartyMemberPlatformData
// Size: 0xa0 (Inherited: 0x00)
struct FPartyMemberPlatformData {
	struct FUserPlatform Platform; // 0x00(0x60)
	struct FUniqueNetIdRepl UniqueId; // 0x60(0x30)
	struct FString SessionId; // 0x90(0x10)
};

// ScriptStruct Party.UserPlatform
// Size: 0x60 (Inherited: 0x00)
struct FUserPlatform {
	struct FSocialPlatformDescription PlatformDescription; // 0x00(0x60)
};

// ScriptStruct Party.SocialPlatformDescription
// Size: 0x60 (Inherited: 0x00)
struct FSocialPlatformDescription {
	struct FString Name; // 0x00(0x10)
	struct FString PlatformType; // 0x10(0x10)
	struct FName OnlineSubsystem; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString SessionType; // 0x30(0x10)
	struct FString ExternalAccountType; // 0x40(0x10)
	struct FString CrossplayPool; // 0x50(0x10)
};

// ScriptStruct Party.PartyMemberJoinInProgressRequest
// Size: 0x38 (Inherited: 0x00)
struct FPartyMemberJoinInProgressRequest {
	struct FUniqueNetIdRepl Target; // 0x00(0x30)
	int64_t Time; // 0x30(0x08)
};

// ScriptStruct Party.PartyMemberJoinInProgressResponse
// Size: 0x48 (Inherited: 0x00)
struct FPartyMemberJoinInProgressResponse {
	struct FUniqueNetIdRepl Requester; // 0x00(0x30)
	int64_t RequestTime; // 0x30(0x08)
	int64_t ResponseTime; // 0x38(0x08)
	char DenialReason; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct Party.PartyMemberJoinInProgressData
// Size: 0x48 (Inherited: 0x00)
struct FPartyMemberJoinInProgressData {
	struct FPartyMemberJoinInProgressRequest Request; // 0x00(0x38)
	struct TArray<struct FPartyMemberJoinInProgressResponse> Responses; // 0x38(0x10)
};

// ScriptStruct Party.OnlinePartyRepDataBase
// Size: 0x18 (Inherited: 0x00)
struct FOnlinePartyRepDataBase {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Party.PartyMemberRepData
// Size: 0x278 (Inherited: 0x18)
struct FPartyMemberRepData : FOnlinePartyRepDataBase {
	char pad_18[0x10]; // 0x18(0x10)
	struct FPartyMemberPlatformData PlatformData; // 0x28(0xa0)
	char pad_C8[0x90]; // 0xc8(0x90)
	enum class ECrossplayPreference CrossplayPreference; // 0x158(0x01)
	char pad_159[0x37]; // 0x159(0x37)
	struct FString JoinMethod; // 0x190(0x10)
	char pad_1A0[0x30]; // 0x1a0(0x30)
	struct FPartyMemberJoinInProgressData JoinInProgressData; // 0x1d0(0x48)
	char pad_218[0x60]; // 0x218(0x60)
};

// ScriptStruct Party.PartyPlatformSessionInfo
// Size: 0x50 (Inherited: 0x00)
struct FPartyPlatformSessionInfo {
	struct FString SessionType; // 0x00(0x10)
	struct FString SessionId; // 0x10(0x10)
	struct FUniqueNetIdRepl OwnerPrimaryId; // 0x20(0x30)
};

// ScriptStruct Party.PartyPrivacySettings
// Size: 0x03 (Inherited: 0x00)
struct FPartyPrivacySettings {
	enum class EPartyType PartyType; // 0x00(0x01)
	enum class EPartyInviteRestriction PartyInviteRestriction; // 0x01(0x01)
	bool bOnlyLeaderFriendsCanJoin; // 0x02(0x01)
};

// ScriptStruct Party.PartyRepData
// Size: 0x80 (Inherited: 0x18)
struct FPartyRepData : FOnlinePartyRepDataBase {
	char pad_18[0x9]; // 0x18(0x09)
	struct FPartyPrivacySettings PrivacySettings; // 0x21(0x03)
	char pad_24[0x34]; // 0x24(0x34)
	struct TArray<struct FPartyPlatformSessionInfo> PlatformSessions; // 0x58(0x10)
	char pad_68[0x18]; // 0x68(0x18)
};

// ScriptStruct Party.SocialChatChannelConfig
// Size: 0x40 (Inherited: 0x00)
struct FSocialChatChannelConfig {
	struct USocialUser* SocialUser; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
	struct TArray<struct USocialChatChannel*> ListenChannels; // 0x18(0x10)
	char pad_28[0x18]; // 0x28(0x18)
};

