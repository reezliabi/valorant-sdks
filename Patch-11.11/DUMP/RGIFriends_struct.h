// Enum RGIFriends.ERGIFriendsBlockPlayerResponseErrors
enum class ERGIFriendsBlockPlayerResponseErrors : uint8 {
	NoPuuidProvided = 0,
	MissingPuuidOrName = 1,
	AlreadyBlocked = 2,
	TargetingSelf = 3,
	InternalError = 4,
	ERGIFriendsBlockPlayerResponseErrors_MAX = 5
};

// Enum RGIFriends.ERGIFriendsDeclineRequestErrors
enum class ERGIFriendsDeclineRequestErrors : uint8 {
	RequestNotFound = 0,
	InternalError = 1,
	ERGIFriendsDeclineRequestErrors_MAX = 2
};

// Enum RGIFriends.ERGIFriendsRequestResponseErrors
enum class ERGIFriendsRequestResponseErrors : uint8 {
	NoGameNameAndTagLineProvided = 0,
	InvalidNameTagFormatting = 1,
	RequestSentToFriend = 2,
	RequestSentToBlockedPlayer = 3,
	RequestSentToBlockingPlayer = 4,
	RequestSentToSelf = 5,
	RequestedPlayerNotFound = 6,
	FriendListFull = 7,
	MaxOutgoingInvites = 8,
	MaxIncomingInvites = 9,
	InternalError = 10,
	ERGIFriendsRequestResponseErrors_MAX = 11
};

// Enum RGIFriends.ERGIFriendsPlatform
enum class ERGIFriendsPlatform : uint8 {
	FirstPartyA = 0,
	FirstPartyB = 1,
	FirstPartyC = 2,
	NotFirstParty = 3,
	Windows = 4,
	Mac = 5,
	Ios = 6,
	Android = 7,
	Web = 8,
	Riot = 9,
	Unknown = 10,
	ERGIFriendsPlatform_MAX = 11
};

// Enum RGIFriends.ERGIFriendRequestType
enum class ERGIFriendRequestType : uint8 {
	Inbound = 0,
	Outbound = 1,
	ERGIFriendRequestType_MAX = 2
};

// Enum RGIFriends.ERGIFriendsPermissionRequestResponseErrors
enum class ERGIFriendsPermissionRequestResponseErrors : uint8 {
	PermissionIdNotFound = 0,
	InternalError = 1,
	ERGIFriendsPermissionRequestResponseErrors_MAX = 2
};

// Enum RGIFriends.ERGIFriendsRemoveFriendErrors
enum class ERGIFriendsRemoveFriendErrors : uint8 {
	FriendNotFound = 0,
	InternalError = 1,
	ERGIFriendsRemoveFriendErrors_MAX = 2
};

// Enum RGIFriends.ERGIFriendsSetCrossPlatformSocialPermissionErrors
enum class ERGIFriendsSetCrossPlatformSocialPermissionErrors : uint8 {
	InternalError = 0,
	ERGIFriendsSetCrossPlatformSocialPermissionErrors_MAX = 1
};

// Enum RGIFriends.ERGIFriendsUnblockPlayerResponseErrors
enum class ERGIFriendsUnblockPlayerResponseErrors : uint8 {
	NoPuuidProvided = 0,
	NotBlocked = 1,
	TargetingSelf = 2,
	InternalError = 3,
	ERGIFriendsUnblockPlayerResponseErrors_MAX = 4
};

// Enum RGIFriends.ERGIFriendsUpdateFriendsResponseErrors
enum class ERGIFriendsUpdateFriendsResponseErrors : uint8 {
	FriendGroupEmpty = 0,
	MetaGroupName = 1,
	FriendNotFound = 2,
	StatusAlreadyTrue = 3,
	InternalError = 4,
	ERGIFriendsUpdateFriendsResponseErrors_MAX = 5
};

// Enum RGIFriends.ERGIFriendsUpdatePresenceErrors
enum class ERGIFriendsUpdatePresenceErrors : uint8 {
	NoPlayerPUUID = 0,
	InternalError = 1,
	ERGIFriendsUpdatePresenceErrors_MAX = 2
};

// Enum RGIFriends.ERGIFriendsUsersCommunicationPermissionsResponseErrors
enum class ERGIFriendsUsersCommunicationPermissionsResponseErrors : uint8 {
	RiotGamesApiUpdateRequired = 0,
	NotAvailable = 1,
	PlatformUserNotConnected = 2,
	InternalError = 3,
	ERGIFriendsUsersCommunicationPermissionsResponseErrors_MAX = 4
};

// Enum RGIFriends.ERGIFriendsDisplayFirstPartyProfileResponseErrors
enum class ERGIFriendsDisplayFirstPartyProfileResponseErrors : uint8 {
	FirstPartyAPINotReady = 0,
	UserNotLoggedIn = 1,
	FirstPartyProfileNotFound = 2,
	InvalidIdFormat = 3,
	InternalError = 4,
	ERGIFriendsDisplayFirstPartyProfileResponseErrors_MAX = 5
};

// Enum RGIFriends.FRGIFriendsOnSetPrivateDataForLocalPlayerErrors
enum class FRGIFriendsOnSetPrivateDataForLocalPlayerErrors : uint8 {
	NoLoggedPlayer = 0,
	InternalError = 1,
	FRGIFriendsOnSetPrivateDataForLocalPlayerErrors_MAX = 2
};

// Enum RGIFriends.ERGIFriendsFriendStatus
enum class ERGIFriendsFriendStatus : uint8 {
	Chat = 0,
	Away = 1,
	Dnd = 2,
	FirstPartyOnline = 3,
	FirstPartyBlocked = 4,
	Offline = 5,
	ERGIFriendsFriendStatus_MAX = 6
};

// Enum RGIFriends.ERGIFriendsPlatformMask
enum class ERGIFriendsPlatformMask : uint8 {
	None = 0,
	FirstPartyA = 1,
	FirstPartyB = 2,
	FirstPartyC = 4,
	ERGIFriendsPlatformMask_MAX = 5
};

// Enum RGIFriends.ERGIFriendsUsersCommunicationPermissionsDenyReasons
enum class ERGIFriendsUsersCommunicationPermissionsDenyReasons : uint8 {
	Unknown = 0,
	NotAllowed = 1,
	MissingPrivilege = 2,
	PrivilegeRestrictsTarget = 3,
	BlockListRestrictsTarget = 4,
	MuteListRestrictsTarget = 5,
	PrivacySettingRestrictsTarget = 6,
	CrossNetworkUserMustBeFriend = 7,
	ERGIFriendsUsersCommunicationPermissionsDenyReasons_MAX = 8
};

// Enum RGIFriends.FRGIFriendsCommunicationPermissionState
enum class FRGIFriendsCommunicationPermissionState : uint8 {
	NotAllowed = 0,
	Allowed = 1,
	FRGIFriendsCommunicationPermissionState_MAX = 2
};

// Enum RGIFriends.FRGIFriendsCommunicationPermissionType
enum class FRGIFriendsCommunicationPermissionType : uint8 {
	Unknown = 0,
	Text = 1,
	Voice = 2,
	FRGIFriendsCommunicationPermissionType_MAX = 3
};

// Enum RGIFriends.ERGIFriendsPresencesPartyMemberRole
enum class ERGIFriendsPresencesPartyMemberRole : uint8 {
	Member = 0,
	Leader = 1,
	ERGIFriendsPresencesPartyMemberRole_MAX = 2
};

// Enum RGIFriends.ERGIFriendsPresencesPartyStatus
enum class ERGIFriendsPresencesPartyStatus : uint8 {
	Open = 0,
	Closed = 1,
	ERGIFriendsPresencesPartyStatus_MAX = 2
};

// Enum RGIFriends.ERGIFriendsCrossPlayPermissionsPlayerCompatibility
enum class ERGIFriendsCrossPlayPermissionsPlayerCompatibility : uint8 {
	Compatible = 0,
	LocalPlayerCrossPlayOff = 1,
	TargetPlayerCrossPlayOff = 2,
	Invalid = 3,
	ERGIFriendsCrossPlayPermissionsPlayerCompatibility_MAX = 4
};

// Enum RGIFriends.ERGIFriendsCrossPlayPermissionsPartyCompatibility
enum class ERGIFriendsCrossPlayPermissionsPartyCompatibility : uint8 {
	Compatible = 0,
	NewMemberDoesNotSupportCrossPlay = 1,
	TargetPartyDoesNotSupportCrossPlay = 2,
	Invalid = 3,
	PartyFull = 4,
	MissingData = 5,
	ERGIFriendsCrossPlayPermissionsPartyCompatibility_MAX = 6
};

// Enum RGIFriends.ERGIFriendsActivityProgressType
enum class ERGIFriendsActivityProgressType : uint8 {
	StartTime = 0,
	EndTime = 1,
	Custom = 2,
	ERGIFriendsActivityProgressType_MAX = 3
};

// Enum RGIFriends.ERGIFriendsLinkDiscordAccountErrors
enum class ERGIFriendsLinkDiscordAccountErrors : uint8 {
	InternalError = 0,
	ERGIFriendsLinkDiscordAccountErrors_MAX = 1
};

// ScriptStruct RGIFriends.RGIFriendsPuuidGameNameAndTagMapping
// Size: 0x50 (Inherited: 0x00)
struct FRGIFriendsPuuidGameNameAndTagMapping {
	struct TMap<struct FString, struct FRGIFriendsGameNameAndTag> MapOfPuuidsToGameNameAndTag; // 0x00(0x50)
};

// ScriptStruct RGIFriends.RGIFriendsGameNameAndTag
// Size: 0x50 (Inherited: 0x00)
struct FRGIFriendsGameNameAndTag {
	struct FString GameName; // 0x00(0x10)
	struct FString Tag; // 0x10(0x10)
	struct FString FirstPartyAAlias; // 0x20(0x10)
	struct FString FirstPartyBAlias; // 0x30(0x10)
	struct FString FirstPartyBSuffix; // 0x40(0x10)
};

// ScriptStruct RGIFriends.RGIFriendsPlayers
// Size: 0x50 (Inherited: 0x00)
struct FRGIFriendsPlayers {
	struct TMap<struct FString, struct URGIFriendsPlayer*> MapOfPlayers; // 0x00(0x50)
};

// ScriptStruct RGIFriends.RGIFriendsFriendRequests
// Size: 0x50 (Inherited: 0x00)
struct FRGIFriendsFriendRequests {
	struct TMap<struct FString, struct FRGIFriendsFriendRequest> MapOfPuuidsToRequests; // 0x00(0x50)
};

// ScriptStruct RGIFriends.RGIFriendsFriendRequest
// Size: 0x38 (Inherited: 0x00)
struct FRGIFriendsFriendRequest {
	struct FString PlayerName; // 0x00(0x10)
	struct FString PlayerTag; // 0x10(0x10)
	struct FString Puuid; // 0x20(0x10)
	enum class ERGIFriendRequestType RequestType; // 0x30(0x01)
	enum class ERGIFriendsPlatform Platform; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// ScriptStruct RGIFriends.RGIFriendsLoggedPlayerPermissions
// Size: 0x10 (Inherited: 0x00)
struct FRGIFriendsLoggedPlayerPermissions {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct RGIFriends.RGIFriendsPermissionDetails
// Size: 0x10 (Inherited: 0x00)
struct FRGIFriendsPermissionDetails {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct RGIFriends.RGIFriendsUsersCommunicationPermissions
// Size: 0x50 (Inherited: 0x00)
struct FRGIFriendsUsersCommunicationPermissions {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct RGIFriends.ReflectedFriendEntry
// Size: 0x18 (Inherited: 0x00)
struct FReflectedFriendEntry {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct RGIFriends.RGIFriendsCommunicationPermission
// Size: 0x18 (Inherited: 0x00)
struct FRGIFriendsCommunicationPermission {
	enum class FRGIFriendsCommunicationPermissionState Permission; // 0x00(0x01)
	enum class FRGIFriendsCommunicationPermissionType Type; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<enum class ERGIFriendsUsersCommunicationPermissionsDenyReasons> Reasons; // 0x08(0x10)
};

// ScriptStruct RGIFriends.RGIFriendsPartyMember
// Size: 0x18 (Inherited: 0x00)
struct FRGIFriendsPartyMember {
	struct FString Puuid; // 0x00(0x10)
	int32_t TimeJoined; // 0x10(0x04)
	enum class ERGIFriendsPlatform Platform; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct RGIFriends.RGIFriendsCrossPlayPermissions
// Size: 0x20 (Inherited: 0x00)
struct FRGIFriendsCrossPlayPermissions {
	bool bHasPlayerCrossPlayEnabled; // 0x00(0x01)
	bool bIsInParty; // 0x01(0x01)
	bool bHasPartyCrossPlayEnabled; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct TArray<enum class ERGIFriendsPlatform> PartyMemberPlatforms; // 0x08(0x10)
	uint32_t CurrentPartySize; // 0x18(0x04)
	uint32_t MaxPartySize; // 0x1c(0x04)
};

// ScriptStruct RGIFriends.RGIFriendsCrossPlayPermissionsCheckResult
// Size: 0x03 (Inherited: 0x00)
struct FRGIFriendsCrossPlayPermissionsCheckResult {
	enum class ERGIFriendsCrossPlayPermissionsPlayerCompatibility PlayerCompatibility; // 0x00(0x01)
	enum class ERGIFriendsCrossPlayPermissionsPartyCompatibility InviteCompatibility; // 0x01(0x01)
	enum class ERGIFriendsCrossPlayPermissionsPartyCompatibility JoinCompatibility; // 0x02(0x01)
};

// ScriptStruct RGIFriends.RGIFriendsParty
// Size: 0x68 (Inherited: 0x00)
struct FRGIFriendsParty {
	struct FString PartyId; // 0x00(0x10)
	struct FString Join; // 0x10(0x10)
	struct TArray<struct FString> Actions; // 0x20(0x10)
	struct FText Title; // 0x30(0x18)
	int32_t TimeCreated; // 0x48(0x04)
	int32_t MaxPartySize; // 0x4c(0x04)
	int32_t CurrentPartySize; // 0x50(0x04)
	enum class ERGIFriendsPresencesPartyStatus Status; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	struct TArray<struct FRGIFriendsPartyMember> Members; // 0x58(0x10)
};

// ScriptStruct RGIFriends.RGIFriendsActivityProgress
// Size: 0x18 (Inherited: 0x00)
struct FRGIFriendsActivityProgress {
	enum class ERGIFriendsActivityProgressType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Value; // 0x08(0x10)
};

// ScriptStruct RGIFriends.RGIFriendsPresenceActivity
// Size: 0x58 (Inherited: 0x00)
struct FRGIFriendsPresenceActivity {
	struct TArray<struct FString> Actors; // 0x00(0x10)
	struct FString Location; // 0x10(0x10)
	struct FString Mode; // 0x20(0x10)
	struct FRGIFriendsActivityProgress Progress; // 0x30(0x18)
	struct FString Spectate; // 0x48(0x10)
};

// ScriptStruct RGIFriends.RGIFriendsPresenceLocalizedContent
// Size: 0x40 (Inherited: 0x00)
struct FRGIFriendsPresenceLocalizedContent {
	struct FString State; // 0x00(0x10)
	struct FString Location; // 0x10(0x10)
	struct FString Mode; // 0x20(0x10)
	struct TArray<struct FString> Actors; // 0x30(0x10)
};

// ScriptStruct RGIFriends.RGIFriendsUserCommunicationPermissions
// Size: 0x20 (Inherited: 0x00)
struct FRGIFriendsUserCommunicationPermissions {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct RGIFriends.RGIFriendsLoggedPlayerPermissionDetails
// Size: 0x30 (Inherited: 0x00)
struct FRGIFriendsLoggedPlayerPermissionDetails {
	struct FString PermissionId; // 0x00(0x10)
	bool bHasPermission; // 0x10(0x01)
	char pad_11[0x1f]; // 0x11(0x1f)
};

// ScriptStruct RGIFriends.RGIFriendsLoggedPlayerPrivateData
// Size: 0x50 (Inherited: 0x00)
struct FRGIFriendsLoggedPlayerPrivateData {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct RGIFriends.RGIFriendsPermissionDetail
// Size: 0x28 (Inherited: 0x00)
struct FRGIFriendsPermissionDetail {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct RGIFriends.RGIFriendsAliasList
// Size: 0x10 (Inherited: 0x00)
struct FRGIFriendsAliasList {
	char pad_0[0x10]; // 0x00(0x10)
};

