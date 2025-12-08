// WidgetBlueprintGeneratedClass SocialPlayerHovercard.SocialPlayerHovercard_C
// Size: 0x440 (Inherited: 0x318)
struct USocialPlayerHovercard_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct USocialPanelPlayerNameIdentitySourceViewModel* SocialPanelPlayerNameIdentitySourceViewModel; // 0x320(0x08)
	struct UWidgetAnimation* OnLoad; // 0x328(0x08)
	struct UAccountLevel_C* AccountLevel; // 0x330(0x08)
	struct UWidgetSwitcher* AvatarSwitcher; // 0x338(0x08)
	struct UOverlay* FriendNoteSection; // 0x340(0x08)
	struct UTextBlock* FriendNoteText; // 0x348(0x08)
	struct UOverlay* FriendPlatformMismatchSection; // 0x350(0x08)
	struct UOverlay* FriendPlayerLoginLocationHistorySection; // 0x358(0x08)
	struct UTextBlock* FriendPlayerLoginLocationHistoryText; // 0x360(0x08)
	struct USizeBox* OfflineAvatarContainer; // 0x368(0x08)
	struct UCanvasPanel* OnlineAvatarContainer; // 0x370(0x08)
	struct USizeBox* OtherAvatarContainer; // 0x378(0x08)
	struct UImage* OtherGameAvatar; // 0x380(0x08)
	struct UWidgetSwitcher* PartyStatusIconSwitcher; // 0x388(0x08)
	struct UTextBlock* PartyStatusText; // 0x390(0x08)
	struct UOverlay* PlatformPanel; // 0x398(0x08)
	struct UOverlay* PlatformSection; // 0x3a0(0x08)
	struct UPlayerCard_C* PlayerCard; // 0x3a8(0x08)
	struct USmallPlayerCardLevelBorderFrame_C* PlayerCardBorderFrame; // 0x3b0(0x08)
	struct UTextBlock* PlayerStatusText; // 0x3b8(0x08)
	struct UImage* RankIcon; // 0x3c0(0x08)
	struct UWidgetSwitcher* RankLoadingSwitcher; // 0x3c8(0x08)
	struct UOverlay* RankPanel; // 0x3d0(0x08)
	struct UTextBlock* RankText; // 0x3d8(0x08)
	struct UImage* StatusBackground; // 0x3e0(0x08)
	struct UOverlay* StatusPanel; // 0x3e8(0x08)
	struct UTextBlock* Title; // 0x3f0(0x08)
	struct UImage* TPAvatar; // 0x3f8(0x08)
	struct USizeBox* TPAvatarContainer; // 0x400(0x08)
	struct UWBP_Panel_PlayerName_C* WBP_Panel_PlayerName; // 0x408(0x08)
	struct UWBP_Panel_PlayerNameWithIcon_C* WBP_Panel_PlayerNameWithIcon; // 0x410(0x08)
	struct UWBP_Panel_PlayerPremierInfoSection_C* WBP_Panel_PlayerPremierInfoSection; // 0x418(0x08)
	struct UPlatformPlayer* PlatformPlayer; // 0x420(0x08)
	struct FHovercardCacheEntry HovercardCacheEntry; // 0x428(0x08)
	struct UVM_PlayerPrimaryIdentitySource_C* PlayerPrimaryIdentitySourceViewModel; // 0x430(0x08)
	struct UVM_PlayerPresence_C* PlayerPresenceViewModel; // 0x438(0x08)

	void UpdatePlatformSectionVisibility(); // Function SocialPlayerHovercard.SocialPlayerHovercard_C.UpdatePlatformSectionVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePlayerAlias(); // Function SocialPlayerHovercard.SocialPlayerHovercard_C.UpdatePlayerAlias // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePlatformMismatchWarning(); // Function SocialPlayerHovercard.SocialPlayerHovercard_C.UpdatePlatformMismatchWarning // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Setup Binds(bool bShouldSetupBinds); // Function SocialPlayerHovercard.SocialPlayerHovercard_C.Setup Binds // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update PlayerLoginLocationHistory(); // Function SocialPlayerHovercard.SocialPlayerHovercard_C.Update PlayerLoginLocationHistory // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update Account Level & Border(); // Function SocialPlayerHovercard.SocialPlayerHovercard_C.Update Account Level & Border // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePlayerRank(); // Function SocialPlayerHovercard.SocialPlayerHovercard_C.UpdatePlayerRank // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RequestCacheEntry(); // Function SocialPlayerHovercard.SocialPlayerHovercard_C.RequestCacheEntry // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePlayerTitle(); // Function SocialPlayerHovercard.SocialPlayerHovercard_C.UpdatePlayerTitle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update Player Metadata(); // Function SocialPlayerHovercard.SocialPlayerHovercard_C.Update Player Metadata // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePartyStatusText(); // Function SocialPlayerHovercard.SocialPlayerHovercard_C.UpdatePartyStatusText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePlayerCard(); // Function SocialPlayerHovercard.SocialPlayerHovercard_C.UpdatePlayerCard // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePlayerStatus(); // Function SocialPlayerHovercard.SocialPlayerHovercard_C.UpdatePlayerStatus // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePlayerName(); // Function SocialPlayerHovercard.SocialPlayerHovercard_C.UpdatePlayerName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function SocialPlayerHovercard.SocialPlayerHovercard_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void HandleDisplayNameChanged(struct FDisplayName& DisplayName); // Function SocialPlayerHovercard.SocialPlayerHovercard_C.HandleDisplayNameChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleStatusChanged(struct UPlatformPlayer* PlatformPlayer); // Function SocialPlayerHovercard.SocialPlayerHovercard_C.HandleStatusChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandlePresenceChanged(struct UPlatformPlayer* PlatformPlayer); // Function SocialPlayerHovercard.SocialPlayerHovercard_C.HandlePresenceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleQueueIDChanged(struct FString NewValue); // Function SocialPlayerHovercard.SocialPlayerHovercard_C.HandleQueueIDChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandlePartyAccessibilityChanged(struct UPlatformPlayer* PlatformPlayer); // Function SocialPlayerHovercard.SocialPlayerHovercard_C.HandlePartyAccessibilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleFriendMetadataChanged(); // Function SocialPlayerHovercard.SocialPlayerHovercard_C.HandleFriendMetadataChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandlePlayerTitleChanged(struct UPlatformPlayer* PlatformPlayer); // Function SocialPlayerHovercard.SocialPlayerHovercard_C.HandlePlayerTitleChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleHovercardCacheEntryAdded(struct FString Subject); // Function SocialPlayerHovercard.SocialPlayerHovercard_C.HandleHovercardCacheEntryAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function SocialPlayerHovercard.SocialPlayerHovercard_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerAccountLevelChanged(struct UPlatformPlayer* PlatformPlayer); // Function SocialPlayerHovercard.SocialPlayerHovercard_C.OnPlayerAccountLevelChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RankedInfoChanged(struct UPlatformPlayer* PlatformPlayer); // Function SocialPlayerHovercard.SocialPlayerHovercard_C.RankedInfoChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandlePlayerLoginLocationHistoryChanged(); // Function SocialPlayerHovercard.SocialPlayerHovercard_C.HandlePlayerLoginLocationHistoryChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function SocialPlayerHovercard.SocialPlayerHovercard_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function SocialPlayerHovercard.SocialPlayerHovercard_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void HandlePrimaryIdentitySourceChanged(enum class EAresIdentitySource PrimaryIdentitySource); // Function SocialPlayerHovercard.SocialPlayerHovercard_C.HandlePrimaryIdentitySourceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPresenceStateChanged(); // Function SocialPlayerHovercard.SocialPlayerHovercard_C.OnPresenceStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPremierPrestigeChanged(struct UPlatformPlayer* PlatformPlayer); // Function SocialPlayerHovercard.SocialPlayerHovercard_C.OnPremierPrestigeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__SocialPlayerHovercard_WBP_Panel_PlayerNameWithIcon_K2Node_ComponentBoundEvent_2_OnVisibilityChangedEvent__DelegateSignature(enum class ESlateVisibility InVisibility); // Function SocialPlayerHovercard.SocialPlayerHovercard_C.BndEvt__SocialPlayerHovercard_WBP_Panel_PlayerNameWithIcon_K2Node_ComponentBoundEvent_2_OnVisibilityChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerNameIdentitySourceChanged(enum class EAresIdentitySource PlayerNameIdentitySource); // Function SocialPlayerHovercard.SocialPlayerHovercard_C.OnPlayerNameIdentitySourceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_SocialPlayerHovercard(int32_t EntryPoint); // Function SocialPlayerHovercard.SocialPlayerHovercard_C.ExecuteUbergraph_SocialPlayerHovercard // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

