// Class OnlineSubsystemUtils.AchievementBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UAchievementBlueprintLibrary : UBlueprintFunctionLibrary {

	void GetCachedAchievementProgress(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementID, bool& bFoundID, float& Progress); // Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4c8d560
	void GetCachedAchievementDescription(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementID, bool& bFoundID, struct FText& Title, struct FText& LockedDescription, struct FText& UnlockedDescription, bool& bHidden); // Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4c8cf80
};

// Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
// Size: 0x70 (Inherited: 0x38)
struct UAchievementQueryCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x18]; // 0x58(0x18)

	struct UAchievementQueryCallbackProxy* CacheAchievements(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4c8e070
	struct UAchievementQueryCallbackProxy* CacheAchievementDescriptions(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4c8deb0
};

// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
// Size: 0x90 (Inherited: 0x38)
struct UAchievementWriteCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x38]; // 0x58(0x38)

	struct UAchievementWriteCallbackProxy* WriteAchievementProgress(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementName, float Progress, int32_t UserTag); // Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4c8e6b0
};

// Class OnlineSubsystemUtils.ConnectionCallbackProxy
// Size: 0x80 (Inherited: 0x38)
struct UConnectionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x28]; // 0x58(0x28)

	struct UConnectionCallbackProxy* ConnectToService(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4c8f4a0
};

// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
// Size: 0xa0 (Inherited: 0x38)
struct UCreateSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x48]; // 0x58(0x48)

	struct UCreateSessionCallbackProxy* CreateSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, int32_t PublicConnections, bool bUseLAN); // Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4c903e0
};

// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
// Size: 0x80 (Inherited: 0x38)
struct UDestroySessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x28]; // 0x58(0x28)

	struct UDestroySessionCallbackProxy* DestroySession(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4c90fa0
};

// Class OnlineSubsystemUtils.EndMatchCallbackProxy
// Size: 0x88 (Inherited: 0x38)
struct UEndMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x30]; // 0x58(0x30)

	struct UEndMatchCallbackProxy* EndMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct TScriptInterface<ITurnBasedMatchInterface> MatchActor, struct FString MatchID, enum class EMPMatchOutcome LocalPlayerOutcome, enum class EMPMatchOutcome OtherPlayersOutcome); // Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4c91800
};

// Class OnlineSubsystemUtils.EndTurnCallbackProxy
// Size: 0x80 (Inherited: 0x38)
struct UEndTurnCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x28]; // 0x58(0x28)

	struct UEndTurnCallbackProxy* EndTurn(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, struct TScriptInterface<ITurnBasedMatchInterface> TurnBasedMatchInterface); // Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4c92340
};

// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
// Size: 0x98 (Inherited: 0x38)
struct UFindSessionsCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x40]; // 0x58(0x40)

	struct FString GetServerName(struct FBlueprintSessionResult& Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4c933f0
	int32_t GetPingInMs(struct FBlueprintSessionResult& Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4c935e0
	int32_t GetMaxPlayers(struct FBlueprintSessionResult& Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4c93180
	int32_t GetCurrentPlayers(struct FBlueprintSessionResult& Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4c932c0
	struct UFindSessionsCallbackProxy* FindSessions(struct UObject* WorldContextObject, struct APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4c93710
};

// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
// Size: 0x90 (Inherited: 0x38)
struct UFindTurnBasedMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x38]; // 0x58(0x38)

	struct UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct TScriptInterface<ITurnBasedMatchInterface> MatchActor, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, bool ShowExistingMatches); // Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4c945a0
};

// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
// Size: 0xb0 (Inherited: 0x30)
struct UInAppPurchaseCallbackProxy2 : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x60]; // 0x50(0x60)

	struct UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseUnprocessedPurchases(struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4c96db0
	struct UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseQueryOwned(struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4c968b0
	struct UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchase(struct APlayerController* PlayerController, struct FInAppPurchaseProductRequest2& ProductRequest); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4c972c0
};

// Class OnlineSubsystemUtils.InAppPurchaseCheckoutCallbackProxy
// Size: 0xa8 (Inherited: 0x30)
struct UInAppPurchaseCheckoutCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x58]; // 0x50(0x58)

	struct UInAppPurchaseCheckoutCallbackProxy* CreateProxyObjectForInAppPurchaseCheckout(struct APlayerController* PlayerController, struct FInAppPurchaseProductRequest2& ProductRequest); // Function OnlineSubsystemUtils.InAppPurchaseCheckoutCallbackProxy.CreateProxyObjectForInAppPurchaseCheckout // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4c98340
};

// Class OnlineSubsystemUtils.InAppPurchaseFinalizeProxy
// Size: 0x30 (Inherited: 0x30)
struct UInAppPurchaseFinalizeProxy : UObject {

	struct UInAppPurchaseFinalizeProxy* CreateProxyObjectForInAppPurchaseFinalize(struct FInAppPurchaseReceiptInfo2& InAppPurchaseReceipt, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseFinalizeProxy.CreateProxyObjectForInAppPurchaseFinalize // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4c996d0
};

// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
// Size: 0x70 (Inherited: 0x30)
struct UInAppPurchaseQueryCallbackProxy2 : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)

	struct UInAppPurchaseQueryCallbackProxy2* CreateProxyObjectForInAppPurchaseQuery(struct APlayerController* PlayerController, struct TArray<struct FString>& ProductIdentifiers); // Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4c9a3d0
};

// Class OnlineSubsystemUtils.InAppPurchaseReceiptsCallbackProxy
// Size: 0x90 (Inherited: 0x30)
struct UInAppPurchaseReceiptsCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x40]; // 0x50(0x40)

	struct UInAppPurchaseReceiptsCallbackProxy* CreateProxyObjectForInAppPurchaseRestoreOwnedProducts(struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseReceiptsCallbackProxy.CreateProxyObjectForInAppPurchaseRestoreOwnedProducts // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4c9b8a0
	struct UInAppPurchaseReceiptsCallbackProxy* CreateProxyObjectForInAppPurchaseQueryOwnedProducts(struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseReceiptsCallbackProxy.CreateProxyObjectForInAppPurchaseQueryOwnedProducts // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4c9be30
	struct UInAppPurchaseReceiptsCallbackProxy* CreateProxyObjectForInAppPurchaseGetKnownReceipts(struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseReceiptsCallbackProxy.CreateProxyObjectForInAppPurchaseGetKnownReceipts // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4c9c3c0
};

// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
// Size: 0xb8 (Inherited: 0x30)
struct UInAppPurchaseRestoreCallbackProxy2 : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x68]; // 0x50(0x68)

	struct UInAppPurchaseRestoreCallbackProxy2* CreateProxyObjectForInAppPurchaseRestore(struct TArray<struct FInAppPurchaseProductRequest2>& ConsumableProductFlags, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4c9d350
};

// Class OnlineSubsystemUtils.IpConnection
// Size: 0x1ef0 (Inherited: 0x1e60)
struct UIpConnection : UNetConnection {
	char pad_1E60[0x74]; // 0x1e60(0x74)
	float SocketErrorDisconnectDelay; // 0x1ed4(0x04)
	char pad_1ED8[0x18]; // 0x1ed8(0x18)
};

// Class OnlineSubsystemUtils.IpNetDriver
// Size: 0x900 (Inherited: 0x850)
struct UIpNetDriver : UNetDriver {
	char LogPortUnreach : 1; // 0x850(0x01)
	char AllowPlayerPortUnreach : 1; // 0x850(0x01)
	char bExitOnBindFailure : 1; // 0x850(0x01)
	char pad_850_3 : 5; // 0x850(0x01)
	char pad_851[0x3]; // 0x851(0x03)
	uint32_t MaxPortCountToTry; // 0x854(0x04)
	char pad_858[0x4]; // 0x858(0x04)
	uint32_t ServerDesiredSocketReceiveBufferBytes; // 0x85c(0x04)
	uint32_t ServerDesiredSocketSendBufferBytes; // 0x860(0x04)
	uint32_t ClientDesiredSocketReceiveBufferBytes; // 0x864(0x04)
	uint32_t ClientDesiredSocketSendBufferBytes; // 0x868(0x04)
	char pad_86C[0x4]; // 0x86c(0x04)
	double MaxSecondsInReceive; // 0x870(0x08)
	int32_t NbPacketsBetweenReceiveTimeTest; // 0x878(0x04)
	float ResolutionConnectionTimeout; // 0x87c(0x04)
	char pad_880[0x80]; // 0x880(0x80)
};

// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
// Size: 0x1a0 (Inherited: 0x38)
struct UJoinSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x148]; // 0x58(0x148)

	struct UJoinSessionCallbackProxy* JoinSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FBlueprintSessionResult& SearchResult); // Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4ca8f00
};

// Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct ULeaderboardBlueprintLibrary : UBlueprintFunctionLibrary {

	bool WriteLeaderboardInteger(struct APlayerController* PlayerController, struct FName StatName, int32_t StatValue); // Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4ca9960
};

// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
// Size: 0x70 (Inherited: 0x30)
struct ULeaderboardFlushCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)

	struct ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(struct APlayerController* PlayerController, struct FName SessionName); // Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4caa170
};

// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
// Size: 0xa0 (Inherited: 0x30)
struct ULeaderboardQueryCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x50]; // 0x50(0x50)

	struct ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(struct APlayerController* PlayerController, struct FName StatName); // Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4caaae0
};

// Class OnlineSubsystemUtils.LogoutCallbackProxy
// Size: 0x70 (Inherited: 0x38)
struct ULogoutCallbackProxy : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x18]; // 0x58(0x18)

	struct ULogoutCallbackProxy* Logout(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4cabba0
};

// Class OnlineSubsystemUtils.OnlineBeacon
// Size: 0x498 (Inherited: 0x460)
struct AOnlineBeacon : AActor {
	char pad_460[0x8]; // 0x460(0x08)
	float BeaconConnectionInitialTimeout; // 0x468(0x04)
	float BeaconConnectionTimeout; // 0x46c(0x04)
	struct UNetDriver* NetDriver; // 0x470(0x08)
	char pad_478[0x20]; // 0x478(0x20)
};

// Class OnlineSubsystemUtils.OnlineBeaconClient
// Size: 0x4f8 (Inherited: 0x498)
struct AOnlineBeaconClient : AOnlineBeacon {
	struct AOnlineBeaconHostObject* BeaconOwner; // 0x498(0x08)
	struct UNetConnection* BeaconConnection; // 0x4a0(0x08)
	enum class EBeaconConnectionState ConnectionState; // 0x4a8(0x01)
	char pad_4A9[0x4f]; // 0x4a9(0x4f)

	void ClientOnConnected(); // Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected // (Final|Net|NetReliableNative|Event|Private|NetClient) // @ game+0x4b418a0
};

// Class OnlineSubsystemUtils.OnlineBeaconHost
// Size: 0x5a8 (Inherited: 0x498)
struct AOnlineBeaconHost : AOnlineBeacon {
	int32_t ListenPort; // 0x498(0x04)
	bool bReuseAddressAndPort; // 0x49c(0x01)
	bool bAuthRequired; // 0x49d(0x01)
	char pad_49E[0x2]; // 0x49e(0x02)
	uint32_t MaxAuthTokenSize; // 0x4a0(0x04)
	char pad_4A4[0x54]; // 0x4a4(0x54)
	struct TArray<struct AOnlineBeaconClient*> ClientActors; // 0x4f8(0x10)
	char pad_508[0xa0]; // 0x508(0xa0)
};

// Class OnlineSubsystemUtils.OnlineBeaconHostObject
// Size: 0x488 (Inherited: 0x460)
struct AOnlineBeaconHostObject : AActor {
	struct FString BeaconTypeName; // 0x460(0x10)
	struct AOnlineBeaconClient* ClientBeaconActorClass; // 0x470(0x08)
	struct TArray<struct AOnlineBeaconClient*> ClientActors; // 0x478(0x10)
};

// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
// Size: 0x198 (Inherited: 0x30)
struct UOnlineEngineInterfaceImpl : UOnlineEngineInterface {
	struct TMap<struct FName, struct FName> MappedUniqueNetIdTypes; // 0x30(0x50)
	struct TArray<struct FName> CompatibleUniqueNetIdTypes; // 0x80(0x10)
	struct FName VoiceSubsystemNameOverride; // 0x90(0x0c)
	char pad_9C[0xfc]; // 0x9c(0xfc)
};

// Class OnlineSubsystemUtils.OnlinePIESettings
// Size: 0x60 (Inherited: 0x48)
struct UOnlinePIESettings : UDeveloperSettings {
	bool bOnlinePIEEnabled; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TArray<struct FPIELoginSettingsInternal> Logins; // 0x50(0x10)
};

// Class OnlineSubsystemUtils.OnlineServicesEngineInterfaceImpl
// Size: 0x30 (Inherited: 0x30)
struct UOnlineServicesEngineInterfaceImpl : UOnlineEngineInterface {
};

// Class OnlineSubsystemUtils.OnlineSessionClient
// Size: 0x1e8 (Inherited: 0x30)
struct UOnlineSessionClient : UOnlineSession {
	char pad_30[0x1b0]; // 0x30(0x1b0)
	bool bIsFromInvite; // 0x1e0(0x01)
	bool bHandlingDisconnect; // 0x1e1(0x01)
	char pad_1E2[0x6]; // 0x1e2(0x06)
};

// Class OnlineSubsystemUtils.PartyBeaconClient
// Size: 0x5c0 (Inherited: 0x4f8)
struct APartyBeaconClient : AOnlineBeaconClient {
	char pad_4F8[0x30]; // 0x4f8(0x30)
	struct FString DestSessionId; // 0x528(0x10)
	struct FPartyReservation PendingReservation; // 0x538(0x58)
	enum class EClientRequestType RequestType; // 0x590(0x01)
	bool bPendingReservationSent; // 0x591(0x01)
	bool bCancelReservation; // 0x592(0x01)
	char pad_593[0x2d]; // 0x593(0x2d)

	void ServerUpdateReservationRequest(struct FString SessionId, struct FPartyReservation ReservationUpdate); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x4cd2340
	void ServerReservationRequest(struct FString SessionId, struct FPartyReservation Reservation); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x4cd2830
	void ServerRemoveMemberFromReservationRequest(struct FString SessionId, struct FPartyReservation ReservationUpdate); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x4cd1900
	void ServerCancelReservationRequest(struct FUniqueNetIdRepl PartyLeader); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x4cd1730
	void ServerAddOrUpdateReservationRequest(struct FString SessionId, struct FPartyReservation Reservation); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerAddOrUpdateReservationRequest // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x4cd1e50
	void ClientSendReservationUpdates(int32_t NumRemainingReservations); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x4cd2d20
	void ClientSendReservationFull(); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x413a7b0
	void ClientReservationResponse(enum class EPartyReservationResult ReservationResponse); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x4cd2f20
	void ClientCancelReservationResponse(enum class EPartyReservationResult ReservationResponse); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x4cd2e20
};

// Class OnlineSubsystemUtils.PartyBeaconHost
// Size: 0x500 (Inherited: 0x488)
struct APartyBeaconHost : AOnlineBeaconHostObject {
	struct UPartyBeaconState* State; // 0x488(0x08)
	char pad_490[0x60]; // 0x490(0x60)
	bool bLogoutOnSessionTimeout; // 0x4f0(0x01)
	bool bIsValidationStrRequired; // 0x4f1(0x01)
	char pad_4F2[0x2]; // 0x4f2(0x02)
	float SessionTimeoutSecs; // 0x4f4(0x04)
	float TravelSessionTimeoutSecs; // 0x4f8(0x04)
	char pad_4FC[0x4]; // 0x4fc(0x04)
};

// Class OnlineSubsystemUtils.PartyBeaconState
// Size: 0xb0 (Inherited: 0x30)
struct UPartyBeaconState : UObject {
	struct FName SessionName; // 0x30(0x0c)
	int32_t NumConsumedReservations; // 0x3c(0x04)
	int32_t MaxReservations; // 0x40(0x04)
	int32_t NumTeams; // 0x44(0x04)
	int32_t NumPlayersPerTeam; // 0x48(0x04)
	struct FName TeamAssignmentMethod; // 0x4c(0x0c)
	int32_t ReservedHostTeamNum; // 0x58(0x04)
	int32_t ForceTeamNum; // 0x5c(0x04)
	bool bRestrictCrossConsole; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct TArray<struct FString> PlatformCrossplayRestrictions; // 0x68(0x10)
	struct TArray<struct FPartyBeaconCrossplayPlatformMapping> PlatformTypeMapping; // 0x78(0x10)
	bool bEnableRemovalRequests; // 0x88(0x01)
	bool bRespectCompetitiveIntegrity; // 0x89(0x01)
	char pad_8A[0x6]; // 0x8a(0x06)
	struct TArray<struct FPartyReservation> Reservations; // 0x90(0x10)
	char pad_A0[0x10]; // 0xa0(0x10)
};

// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
// Size: 0x80 (Inherited: 0x38)
struct UQuitMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x28]; // 0x58(0x28)

	struct UQuitMatchCallbackProxy* QuitMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, enum class EMPMatchOutcome Outcome, int32_t TurnTimeoutInSeconds); // Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4cdd630
};

// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
// Size: 0x68 (Inherited: 0x38)
struct UShowLoginUICallbackProxy : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x10]; // 0x58(0x10)

	struct UShowLoginUICallbackProxy* ShowExternalLoginUI(struct UObject* WorldContextObject, struct APlayerController* InPlayerController); // Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4cde0f0
};

// Class OnlineSubsystemUtils.SpectatorBeaconClient
// Size: 0x5f0 (Inherited: 0x4f8)
struct ASpectatorBeaconClient : AOnlineBeaconClient {
	char pad_4F8[0x30]; // 0x4f8(0x30)
	struct FString DestSessionId; // 0x528(0x10)
	struct FSpectatorReservation PendingReservation; // 0x538(0x88)
	enum class ESpectatorClientRequestType RequestType; // 0x5c0(0x01)
	bool bPendingReservationSent; // 0x5c1(0x01)
	bool bCancelReservation; // 0x5c2(0x01)
	char pad_5C3[0x2d]; // 0x5c3(0x2d)

	void ServerReservationRequest(struct FString SessionId, struct FSpectatorReservation Reservation); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x4cded70
	void ServerCancelReservationRequest(struct FUniqueNetIdRepl Spectator); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x4cd1730
	void ClientSendReservationUpdates(int32_t NumRemainingReservations); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x4cdf190
	void ClientSendReservationFull(); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x3f9bea0
	void ClientReservationResponse(enum class ESpectatorReservationResult ReservationResponse); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x4cdf390
	void ClientCancelReservationResponse(enum class ESpectatorReservationResult ReservationResponse); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x4cdf290
};

// Class OnlineSubsystemUtils.SpectatorBeaconHost
// Size: 0x500 (Inherited: 0x488)
struct ASpectatorBeaconHost : AOnlineBeaconHostObject {
	struct USpectatorBeaconState* State; // 0x488(0x08)
	char pad_490[0x60]; // 0x490(0x60)
	bool bLogoutOnSessionTimeout; // 0x4f0(0x01)
	bool bIsValidationStrRequired; // 0x4f1(0x01)
	char pad_4F2[0x2]; // 0x4f2(0x02)
	float SessionTimeoutSecs; // 0x4f4(0x04)
	float TravelSessionTimeoutSecs; // 0x4f8(0x04)
	char pad_4FC[0x4]; // 0x4fc(0x04)
};

// Class OnlineSubsystemUtils.SpectatorBeaconState
// Size: 0x68 (Inherited: 0x30)
struct USpectatorBeaconState : UObject {
	struct FName SessionName; // 0x30(0x0c)
	int32_t NumConsumedReservations; // 0x3c(0x04)
	int32_t MaxReservations; // 0x40(0x04)
	bool bRestrictCrossConsole; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct TArray<struct FSpectatorReservation> Reservations; // 0x48(0x10)
	char pad_58[0x10]; // 0x58(0x10)
};

// Class OnlineSubsystemUtils.TestBeaconClient
// Size: 0x4f8 (Inherited: 0x4f8)
struct ATestBeaconClient : AOnlineBeaconClient {

	void ServerPong(); // Function OnlineSubsystemUtils.TestBeaconClient.ServerPong // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x4ce3b10
	void ClientPing(); // Function OnlineSubsystemUtils.TestBeaconClient.ClientPing // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x4c02b10
};

// Class OnlineSubsystemUtils.TestBeaconHost
// Size: 0x488 (Inherited: 0x488)
struct ATestBeaconHost : AOnlineBeaconHostObject {
};

// Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UTurnBasedBlueprintLibrary : UBlueprintFunctionLibrary {

	void RegisterTurnBasedMatchInterfaceObject(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct UObject* Object); // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4ce4440
	void GetPlayerDisplayName(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, int32_t PlayerIndex, struct FString& PlayerDisplayName); // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4ce4030
	void GetMyPlayerIndex(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, int32_t& PlayerIndex); // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4ce4660
	void GetIsMyTurn(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, bool& bIsMyTurn); // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4ce4990
};

// Class OnlineSubsystemUtils.VoipListenerSynthComponent
// Size: 0xa00 (Inherited: 0x9a0)
struct UVoipListenerSynthComponent : USynthComponent {
	char pad_9A0[0x60]; // 0x9a0(0x60)

	bool IsIdling(); // Function OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling // (Final|Native|Public|BlueprintCallable) // @ game+0x4cf3db0
};

