// WidgetBlueprintGeneratedClass SocialPartyList_Base.SocialPartyList_Base_C
// Size: 0x520 (Inherited: 0x318)
struct USocialPartyList_Base_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct TMap<struct USocialPartyModel*, struct USocialPartySoloSwitcher_Base_C*> SocialPartyToWidgetMap; // 0x320(0x50)
	struct TMap<struct USocialPlayer*, struct USocialPlayerWidget_Base_C*> SocialPlayerToWidgetMap; // 0x370(0x50)
	struct FString LastFilter; // 0x3c0(0x10)
	bool BoundToSocialViewController; // 0x3d0(0x01)
	bool bUpdatesLocked; // 0x3d1(0x01)
	bool bSortingValid; // 0x3d2(0x01)
	bool bPlayerSortingValid; // 0x3d3(0x01)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct USocialPartyModel* CurrentParty; // 0x3d8(0x08)
	struct USocialPanelCollapsibleBoxV2_Base_C* FriendPartiesWidget; // 0x3e0(0x08)
	struct USocialPanelCollapsibleBoxV2_Base_C* FriendsOnlineInOtherGameWidget; // 0x3e8(0x08)
	struct USocialPanelCollapsibleBoxV2_Base_C* FriendsOfflineWidget; // 0x3f0(0x08)
	struct USocialPanelCollapsibleBoxV2_Base_C* FriendsTempPWidget; // 0x3f8(0x08)
	struct TSet<struct FString> UpdateLockTags; // 0x400(0x50)
	struct TSet<struct USocialPanelCollapsibleBoxV2_Base_C*> InconsistentSocialLists; // 0x450(0x50)
	struct FText Friends Online Label; // 0x4a0(0x18)
	struct FText Friends Other Games Label; // 0x4b8(0x18)
	struct FText Friends Offline Label; // 0x4d0(0x18)
	struct UTexture2D* Friends Online Icon; // 0x4e8(0x08)
	struct UTexture2D* Friends Other Games Icon; // 0x4f0(0x08)
	struct UTexture2D* Friends Offline Icon; // 0x4f8(0x08)
	struct FText Friends Temp P Label; // 0x500(0x18)
	struct UTexture2D* Friends Temp P Icon; // 0x518(0x08)

	void SetCurrentParty(struct USocialPartyModel* SocialParty); // Function SocialPartyList_Base.SocialPartyList_Base_C.SetCurrentParty // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleCurrentPartyChanged(); // Function SocialPartyList_Base.SocialPartyList_Base_C.HandleCurrentPartyChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetDisconnectIndicatorVisibility(enum class ESlateVisibility Visibility); // Function SocialPartyList_Base.SocialPartyList_Base_C.SetDisconnectIndicatorVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReleaseUpdateLock(struct FString Tag); // Function SocialPartyList_Base.SocialPartyList_Base_C.ReleaseUpdateLock // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AcquireUpdateLock(struct FString Tag); // Function SocialPartyList_Base.SocialPartyList_Base_C.AcquireUpdateLock // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ApplyLastFilter(); // Function SocialPartyList_Base.SocialPartyList_Base_C.ApplyLastFilter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ApplyFilter(struct FString Filter); // Function SocialPartyList_Base.SocialPartyList_Base_C.ApplyFilter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ClearCurrentPartyWidget(); // Function SocialPartyList_Base.SocialPartyList_Base_C.ClearCurrentPartyWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RemoveParty(struct USocialPartyModel* SocialParty); // Function SocialPartyList_Base.SocialPartyList_Base_C.RemoveParty // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RemovePlayer(struct USocialPlayer* SocialPlayer); // Function SocialPartyList_Base.SocialPartyList_Base_C.RemovePlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddSocialListWidget(struct USocialPanelCollapsibleBoxV2_Base_C* InWidget); // Function SocialPartyList_Base.SocialPartyList_Base_C.AddSocialListWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateWidgetForSocialList(struct FText DisplayTitle, bool InitializeCollapsed, struct UTexture2D* DisplayIcon, struct USocialPanelCollapsibleBoxV2_Base_C*& Widget); // Function SocialPartyList_Base.SocialPartyList_Base_C.CreateWidgetForSocialList // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateWidgetForParty(struct USocialPartyModel* SocialParty, struct USocialPartySoloSwitcher_Base_C*& Widget); // Function SocialPartyList_Base.SocialPartyList_Base_C.CreateWidgetForParty // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateWidgetForPlayer(struct USocialPlayer* SocialPlayer, struct USocialPlayerWidget_Base_C*& Widget); // Function SocialPartyList_Base.SocialPartyList_Base_C.CreateWidgetForPlayer // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetOrCreateWidgetForSocialList(struct FText DisplayTitle, bool InitializeCollapsed, struct UTexture2D* DisplayIcon, struct USocialPanelCollapsibleBoxV2_Base_C*& Widget); // Function SocialPartyList_Base.SocialPartyList_Base_C.GetOrCreateWidgetForSocialList // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetOrCreateWidgetForParty(struct USocialPartyModel* SocialParty, struct USocialPartySoloSwitcher_Base_C*& Widget); // Function SocialPartyList_Base.SocialPartyList_Base_C.GetOrCreateWidgetForParty // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetOrCreateWidgetForPlayer(struct USocialPlayer* SocialPlayerModel, struct USocialPlayerWidget_Base_C*& Widget); // Function SocialPartyList_Base.SocialPartyList_Base_C.GetOrCreateWidgetForPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnChatSessionDisconnected_Event_1(); // Function SocialPartyList_Base.SocialPartyList_Base_C.OnChatSessionDisconnected_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToViewControllerAndInitWidgets(); // Function SocialPartyList_Base.SocialPartyList_Base_C.BindToViewControllerAndInitWidgets // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveParentMenuStackEntry(struct UMenuStackEntry* ParentMenuStackEntry); // Function SocialPartyList_Base.SocialPartyList_Base_C.ReceiveParentMenuStackEntry // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnOpen_Event_1(); // Function SocialPartyList_Base.SocialPartyList_Base_C.OnOpen_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UnbindFromViewController(); // Function SocialPartyList_Base.SocialPartyList_Base_C.UnbindFromViewController // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnClose_Event_1(); // Function SocialPartyList_Base.SocialPartyList_Base_C.OnClose_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCurrentPartyUpdated(struct USocialPartyModel* SocialParty); // Function SocialPartyList_Base.SocialPartyList_Base_C.OnCurrentPartyUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSocialPartyExpired(struct USocialPartyModel* SocialParty); // Function SocialPartyList_Base.SocialPartyList_Base_C.OnSocialPartyExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSocialPlayerExpired(struct USocialPlayer* SocialPlayer); // Function SocialPartyList_Base.SocialPartyList_Base_C.OnSocialPlayerExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnFriendsOnlineInOtherGamesListWasReset(struct TArray<struct USocialPlayer*>& SocialPlayerList); // Function SocialPartyList_Base.SocialPartyList_Base_C.OnFriendsOnlineInOtherGamesListWasReset // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnFriendsOfflineListWasReset(struct TArray<struct USocialPlayer*>& SocialPlayerList); // Function SocialPartyList_Base.SocialPartyList_Base_C.OnFriendsOfflineListWasReset // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnNumFriendsOnlineInPartiesChanged(int32_t NewCount); // Function SocialPartyList_Base.SocialPartyList_Base_C.OnNumFriendsOnlineInPartiesChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnNumFriendsOnlineInOtherGamesChanged(int32_t NewCount); // Function SocialPartyList_Base.SocialPartyList_Base_C.OnNumFriendsOnlineInOtherGamesChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnNumFriendsOfflineChanged(int32_t NewCount); // Function SocialPartyList_Base.SocialPartyList_Base_C.OnNumFriendsOfflineChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnFriendPartyListWasReset(struct TArray<struct USocialPartyModel*>& SocialPartyList); // Function SocialPartyList_Base.SocialPartyList_Base_C.OnFriendPartyListWasReset // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function SocialPartyList_Base.SocialPartyList_Base_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnUpdateLockRequested(struct FString Tag); // Function SocialPartyList_Base.SocialPartyList_Base_C.OnUpdateLockRequested // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnUpdateLockReleased(struct FString Tag); // Function SocialPartyList_Base.SocialPartyList_Base_C.OnUpdateLockReleased // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSocialPlayerCategoryChanged(struct USocialPlayer* SocialPlayer); // Function SocialPartyList_Base.SocialPartyList_Base_C.OnSocialPlayerCategoryChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAllModelsConsistent(); // Function SocialPartyList_Base.SocialPartyList_Base_C.OnAllModelsConsistent // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnFriendsTempListReset(struct TArray<struct USocialPlayer*>& SocialPlayerList); // Function SocialPartyList_Base.SocialPartyList_Base_C.OnFriendsTempListReset // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnNumFriendsTempChanged(int32_t NewCount); // Function SocialPartyList_Base.SocialPartyList_Base_C.OnNumFriendsTempChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_SocialPartyList_Base(int32_t EntryPoint); // Function SocialPartyList_Base.SocialPartyList_Base_C.ExecuteUbergraph_SocialPartyList_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

