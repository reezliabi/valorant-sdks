// Class RGIFriends.RGIFriendsCollectionViewModel
// Size: 0xe8 (Inherited: 0x70)
struct URGIFriendsCollectionViewModel : UMVVMViewModelBase {
	struct TArray<struct URGIFriendsPlayerViewModel*> Friends; // 0x70(0x10)
	struct URGIFriendsPlayerViewModel* SelectedFriendsPlayerViewModel; // 0x80(0x08)
	struct TScriptInterface<IRGIFriendsDataStore> DataStore; // 0x88(0x10)
	struct TMap<struct FString, struct URGIFriendsPlayerViewModel*> FriendMap; // 0x98(0x50)

	void HandleFriendsUpdated(struct FRGIFriendsPlayers& FriendList); // Function RGIFriends.RGIFriendsCollectionViewModel.HandleFriendsUpdated // (Final|Native|Private|HasOutParms) // @ game+0x516fb40
	struct URGIFriendsPlayerViewModel* GetSelectedFriendsPlayerViewModel(); // Function RGIFriends.RGIFriendsCollectionViewModel.GetSelectedFriendsPlayerViewModel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x516fcc0
	struct URGIFriendsPlayerViewModel* GetFriendByPuuid(struct FString Puuid); // Function RGIFriends.RGIFriendsCollectionViewModel.GetFriendByPuuid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5170040
	struct URGIFriendsPlayerViewModel* AddFriendToCollection(struct URGIFriendsPlayer* FriendData); // Function RGIFriends.RGIFriendsCollectionViewModel.AddFriendToCollection // (Final|Native|Public|BlueprintCallable) // @ game+0x516fce0
};

// Class RGIFriends.RGIFriendsPlayerViewModel
// Size: 0x1e0 (Inherited: 0x70)
struct URGIFriendsPlayerViewModel : UMVVMViewModelBase {
	struct FString Puuid; // 0x70(0x10)
	struct FString GameName; // 0x80(0x10)
	struct FString PreferredDisplayName; // 0x90(0x10)
	struct FString GameTag; // 0xa0(0x10)
	struct FString Product; // 0xb0(0x10)
	struct FString ProductPresenceName; // 0xc0(0x10)
	struct FString VoiceSessionId; // 0xd0(0x10)
	struct FString Note; // 0xe0(0x10)
	struct FString FirstPartyAAlias; // 0xf0(0x10)
	struct FString FirstPartyBAlias; // 0x100(0x10)
	struct FString FirstPartyBSuffix; // 0x110(0x10)
	struct FString Message; // 0x120(0x10)
	enum class ERGIFriendsFriendStatus Status; // 0x130(0x01)
	enum class ERGIFriendsPlatform Platform; // 0x131(0x01)
	char pad_132[0x2]; // 0x132(0x02)
	int32_t VisiblePlatforms; // 0x134(0x04)
	struct FString PresenceState; // 0x138(0x10)
	char pad_148[0x20]; // 0x148(0x20)
	bool bIsDiscordFriend; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
	struct FString DiscordDisplayName; // 0x170(0x10)
	bool bIsRiotFriend; // 0x180(0x01)
	bool bIsActivePlatformFriend; // 0x181(0x01)
	bool bIsRiotBlocked; // 0x182(0x01)
	bool bIsActivePlatformBlocked; // 0x183(0x01)
	char pad_184[0x4]; // 0x184(0x04)
	struct TArray<struct FRGIFriendsParty> Parties; // 0x188(0x10)
	struct URGIFriendsPlayer* Player; // 0x198(0x08)
	struct TScriptInterface<IRGIFriendsDataStore> DataStore; // 0x1a0(0x10)
	char pad_1B0[0x30]; // 0x1b0(0x30)
};

// Class RGIFriends.RGIFriendsPrivateCDataInterface
// Size: 0x30 (Inherited: 0x30)
struct URGIFriendsPrivateCDataInterface : UInterface {
};

// Class RGIFriends.RGIFriendsUserSettings
// Size: 0x90 (Inherited: 0x48)
struct URGIFriendsUserSettings : UDeveloperSettings {
	bool bUseMockedData; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TSoftObjectPtr<URGIFriendsMockedData> MockedData; // 0x50(0x30)
	struct UObject* CustomPrivateDataClass; // 0x80(0x08)
	bool bGenerateFakePuuidWhenEmpty; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class RGIFriends.RGIFriendsPlayer
// Size: 0x1d8 (Inherited: 0x30)
struct URGIFriendsPlayer : UObject {
	char pad_30[0x18]; // 0x30(0x18)
	struct FString GameName; // 0x48(0x10)
	struct FString PreferredDisplayName; // 0x58(0x10)
	struct FString GameTag; // 0x68(0x10)
	struct FString Puuid; // 0x78(0x10)
	struct FString Region; // 0x88(0x10)
	struct FString Note; // 0x98(0x10)
	struct FString VoiceSessionId; // 0xa8(0x10)
	enum class ERGIFriendsPlatform Platform; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct FString Product; // 0xc0(0x10)
	struct FString ProductPresenceName; // 0xd0(0x10)
	bool bIsRiotFriend; // 0xe0(0x01)
	bool bIsActivePlatformFriend; // 0xe1(0x01)
	bool bIsRiotBlocked; // 0xe2(0x01)
	bool bIsActivePlatformBlocked; // 0xe3(0x01)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FString FirstPartyAAlias; // 0xe8(0x10)
	struct FString FirstPartyBAlias; // 0xf8(0x10)
	struct FString FirstPartyBSuffix; // 0x108(0x10)
	char pad_118[0x1]; // 0x118(0x01)
	enum class ERGIFriendsFriendStatus Status; // 0x119(0x01)
	char pad_11A[0x6]; // 0x11a(0x06)
	struct FString Message; // 0x120(0x10)
	struct TArray<struct FRGIFriendsParty> Parties; // 0x130(0x10)
	char pad_140[0x30]; // 0x140(0x30)
	struct FRGIFriendsCrossPlayPermissions CrossPlayPermissions; // 0x170(0x20)
	char pad_190[0x48]; // 0x190(0x48)
};

// Class RGIFriends.RGIFriendsDataStore
// Size: 0x30 (Inherited: 0x30)
struct URGIFriendsDataStore : UInterface {
};

// Class RGIFriends.RGIFriendsMockedData
// Size: 0xd0 (Inherited: 0x38)
struct URGIFriendsMockedData : UPrimaryDataAsset {
	struct URGIFriendsPlayer* LoggedPlayer; // 0x38(0x08)
	struct FRGIFriendsPresenceLocalizedContent LoggedPlayerPresenceLocalizedContent; // 0x40(0x40)
	struct TArray<struct URGIFriendsPlayer*> Friends; // 0x80(0x10)
	struct TArray<struct URGIFriendsPlayer*> BlockedPlayers; // 0x90(0x10)
	struct TArray<struct FRGIFriendsFriendRequest> FriendsRequests; // 0xa0(0x10)
	struct TArray<struct URGIFriendsPlayer*> PartyPlayers; // 0xb0(0x10)
	struct TArray<struct FRGIFriendsLoggedPlayerPermissionDetails> LoggedPlayerPermissionDetails; // 0xc0(0x10)
};

// Class RGIFriends.FriendsMockedDataStore
// Size: 0x458 (Inherited: 0x30)
struct UFriendsMockedDataStore : UObject {
	char pad_30[0x270]; // 0x30(0x270)
	struct URGIFriendsPlayer* LoggedPlayer; // 0x2a0(0x08)
	struct FRGIFriendsPresenceLocalizedContent LoggedPlayerPresenceLocalizedContent; // 0x2a8(0x40)
	struct FRGIFriendsPlayers Friends; // 0x2e8(0x50)
	struct FRGIFriendsPlayers BlockedPlayers; // 0x338(0x50)
	struct FRGIFriendsFriendRequests FriendRequests; // 0x388(0x50)
	struct TMap<struct FString, struct URGIFriendsPlayer*> PartyMembers; // 0x3d8(0x50)
	struct FRGIFriendsLoggedPlayerPermissions LoggedPlayerPermissions; // 0x428(0x10)
	struct FRGIFriendsAliasList AliasList; // 0x438(0x10)
	struct UObject* CustomPrivateDataObject; // 0x448(0x08)
	char pad_450[0x8]; // 0x450(0x08)

	void OnCustomPrivateDataUpdated(struct FString SerializedData); // Function RGIFriends.FriendsMockedDataStore.OnCustomPrivateDataUpdated // (Final|Native|Public) // @ game+0x51766f0
};

// Class RGIFriends.RGIFriendsNoOpDataStore
// Size: 0x400 (Inherited: 0x30)
struct URGIFriendsNoOpDataStore : UObject {
	char pad_30[0x258]; // 0x30(0x258)
	struct URGIFriendsPlayer* LoggedPlayer; // 0x288(0x08)
	struct FRGIFriendsPlayers Friends; // 0x290(0x50)
	struct FRGIFriendsFriendRequests FriendRequests; // 0x2e0(0x50)
	struct FRGIFriendsPlayers BlockedPlayers; // 0x330(0x50)
	struct TMap<struct FString, struct FRGIFriendsUserCommunicationPermissions> UsersPermissions; // 0x380(0x50)
	struct FRGIFriendsLoggedPlayerPermissions LoggedPlayerPermissions; // 0x3d0(0x10)
	struct FRGIFriendsPermissionDetails PermissionDetails; // 0x3e0(0x10)
	struct FRGIFriendsAliasList AliasList; // 0x3f0(0x10)
};

// Class RGIFriends.RGIFriendsFriendRequestNotificationData
// Size: 0x68 (Inherited: 0x30)
struct URGIFriendsFriendRequestNotificationData : UObject {
	struct FString PlayerName; // 0x30(0x10)
	struct FString PlayerTag; // 0x40(0x10)
	struct FString Puuid; // 0x50(0x10)
	enum class ERGIFriendsPlatform Platform; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class RGIFriends.RGIFriendsSubsystem
// Size: 0x3a8 (Inherited: 0x38)
struct URGIFriendsSubsystem : UGameInstanceSubsystem {
	char pad_38[0x258]; // 0x38(0x258)
	struct TScriptInterface<IRGIFriendsDataStore> DataStore; // 0x290(0x10)
	struct URGIFriendsCollectionViewModel* FriendsCollectionViewModel; // 0x2a0(0x08)
	char pad_2A8[0x28]; // 0x2a8(0x28)
	struct FMulticastInlineDelegate OnFriendsUpdatedDynamic; // 0x2d0(0x10)
	char pad_2E0[0x18]; // 0x2e0(0x18)
	struct FMulticastInlineDelegate OnLoggedPlayerUpdatedDynamic; // 0x2f8(0x10)
	char pad_308[0x18]; // 0x308(0x18)
	struct FMulticastInlineDelegate OnBlockedPlayersUpdatedDynamic; // 0x320(0x10)
	char pad_330[0x18]; // 0x330(0x18)
	struct FMulticastInlineDelegate OnFriendsRequestListUpdatedDynamic; // 0x348(0x10)
	char pad_358[0x18]; // 0x358(0x18)
	struct FMulticastInlineDelegate OnProfileViewStateChangedDynamic; // 0x370(0x10)
	char pad_380[0x18]; // 0x380(0x18)
	struct FMulticastInlineDelegate OnLoggedPlayerPermissionsUpdatedDynamic; // 0x398(0x10)

	void ViewFirstPartyProfile(struct FString ID, struct FDelegate OnSuccess, struct FDelegate OnError, bool bIsFirstPartyId); // Function RGIFriends.RGIFriendsSubsystem.ViewFirstPartyProfile // (Final|Native|Public|BlueprintCallable) // @ game+0x517cb40
	void UnblockPlayer(struct FString Puuid, struct FDelegate OnSuccess, struct FDelegate OnError); // Function RGIFriends.RGIFriendsSubsystem.UnblockPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x517d210
	void SetClientSideCrossPlatformSocialPermission(bool bNewPermissionState, struct FDelegate& OnSuccess, struct FDelegate& OnError); // Function RGIFriends.RGIFriendsSubsystem.SetClientSideCrossPlatformSocialPermission // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x517c2d0
	void SetBuddyNote(struct FString Puuid, struct FString NoteString, struct FDelegate OnSuccess, struct FDelegate OnError); // Function RGIFriends.RGIFriendsSubsystem.SetBuddyNote // (Final|Native|Public|BlueprintCallable) // @ game+0x517ce80
	void SendPresence(struct FDelegate& OnSuccess, struct FDelegate& OnError); // Function RGIFriends.RGIFriendsSubsystem.SendPresence // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x517c0d0
	void SendFriendRequest(struct FString GameNameAndTagLine, struct FDelegate OnSuccess, struct FDelegate OnError); // Function RGIFriends.RGIFriendsSubsystem.SendFriendRequest // (Final|Native|Public|BlueprintCallable) // @ game+0x517df80
	void RequestLoggedPlayerInactiveAliasList(); // Function RGIFriends.RGIFriendsSubsystem.RequestLoggedPlayerInactiveAliasList // (Native|Public|BlueprintCallable) // @ game+0x517b810
	void RemoveFriend(struct FString Puuid, struct FDelegate OnSuccess, struct FDelegate OnError); // Function RGIFriends.RGIFriendsSubsystem.RemoveFriend // (Final|Native|Public|BlueprintCallable) // @ game+0x517dcd0
	struct FText GetVersion(); // Function RGIFriends.RGIFriendsSubsystem.GetVersion // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x517bdb0
	void GetUsersCommunicationPermissions(struct TMap<struct FString, enum class ERGIFriendsPlatform>& Players, struct FDelegate& OnSuccess, struct FDelegate& OnError); // Function RGIFriends.RGIFriendsSubsystem.GetUsersCommunicationPermissions // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x517c570
	void GetPlayerNamesFromPuuids(struct TArray<struct FString>& Puuids, struct FDelegate OnSuccess); // Function RGIFriends.RGIFriendsSubsystem.GetPlayerNamesFromPuuids // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x517c870
	void GetPermissionRequest(struct FString PermissionId, struct FDelegate& OnSuccess, struct FDelegate& OnError); // Function RGIFriends.RGIFriendsSubsystem.GetPermissionRequest // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x517be00
	struct FRGIFriendsPresenceLocalizedContent GetLoggedPlayerPresenceLocalizedContent(); // Function RGIFriends.RGIFriendsSubsystem.GetLoggedPlayerPresenceLocalizedContent // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x517ba30
	struct FRGIFriendsLoggedPlayerPermissions GetLoggedPlayerPermissions(); // Function RGIFriends.RGIFriendsSubsystem.GetLoggedPlayerPermissions // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x517b850
	struct URGIFriendsPlayer* GetLoggedPlayer(); // Function RGIFriends.RGIFriendsSubsystem.GetLoggedPlayer // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x517bac0
	bool GetIsReady(); // Function RGIFriends.RGIFriendsSubsystem.GetIsReady // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x517bd10
	struct FRGIFriendsPlayers GetFriends(); // Function RGIFriends.RGIFriendsSubsystem.GetFriends // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x517bcc0
	struct FRGIFriendsFriendRequests GetFriendRequests(); // Function RGIFriends.RGIFriendsSubsystem.GetFriendRequests // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x517bb10
	struct URGIFriendsPlayer* GetFriend(struct FString Puuid); // Function RGIFriends.RGIFriendsSubsystem.GetFriend // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x517bb60
	struct UObject* GetCustomPrivateDataObject(); // Function RGIFriends.RGIFriendsSubsystem.GetCustomPrivateDataObject // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x517bd60
	struct FRGIFriendsPlayers GetBlockedPlayers(); // Function RGIFriends.RGIFriendsSubsystem.GetBlockedPlayers // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x517b9e0
	void DeclineFriendRequest(struct FString Puuid, struct FDelegate OnSuccess, struct FDelegate OnError); // Function RGIFriends.RGIFriendsSubsystem.DeclineFriendRequest // (Final|Native|Public|BlueprintCallable) // @ game+0x517d770
	void BlockPlayer(struct FString Puuid, struct FDelegate OnSuccess, struct FDelegate OnError); // Function RGIFriends.RGIFriendsSubsystem.BlockPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x517d4c0
	void AcceptFriendRequest(struct FString Puuid, struct FDelegate OnSuccess, struct FDelegate OnError); // Function RGIFriends.RGIFriendsSubsystem.AcceptFriendRequest // (Final|Native|Public|BlueprintCallable) // @ game+0x517da20
};

