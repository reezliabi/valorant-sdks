// WidgetBlueprintGeneratedClass ThreadedChatInputV2.ThreadedChatInputV2_C
// Size: 0x1415 (Inherited: 0x320)
struct UThreadedChatInputV2_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UWidgetAnimation* TabSwapButtonShowHIdeAnimation; // 0x328(0x08)
	struct UWidgetAnimation* TabSwappingButtonAnimation; // 0x330(0x08)
	struct UButton* 11Button; // 0x338(0x08)
	struct UChatUnreadCounterWidget_C* 11ChatUnreadCounterWidget; // 0x340(0x08)
	struct UAutocompleteTextBox_C* AutocompleteTextBox; // 0x348(0x08)
	struct UTextBlock* ChannelErrorDisplay; // 0x350(0x08)
	struct UImage* ChatNotConnected; // 0x358(0x08)
	struct UOverlay* CollapsibleTextInputSection; // 0x360(0x08)
	struct UEditableTextBox* DirectMessageRecipientTextbox; // 0x368(0x08)
	struct UHorizontalBox* DirectMessageRecipientTree; // 0x370(0x08)
	struct UTextBlock* GroupChatTabName; // 0x378(0x08)
	struct UImage* Image_251; // 0x380(0x08)
	struct UImage* Image_305; // 0x388(0x08)
	struct UImage* Image_497; // 0x390(0x08)
	struct UImage* Image_653; // 0x398(0x08)
	struct UImage* Image_896; // 0x3a0(0x08)
	struct UImage* Image_1105; // 0x3a8(0x08)
	struct UInvalidationBox* InvalidationBox_11Button_Overlay; // 0x3b0(0x08)
	struct UInvalidationBox* InvalidationBox_ChannelErrorDisplay; // 0x3b8(0x08)
	struct UInvalidationBox* InvalidationBox_PartyButton; // 0x3c0(0x08)
	struct UInvalidationBox* InvalidationBox_ServiceUnavailableIndicator; // 0x3c8(0x08)
	struct UInvalidationBox* InvalidationBox_SlidingButtonHorizontalBox; // 0x3d0(0x08)
	struct UInvalidationBox* InvalidationBox_spacer; // 0x3d8(0x08)
	struct UInvalidationBox* InvalidationBox_TextInputSectionDirectMessageRecipientTree; // 0x3e0(0x08)
	struct UInvalidationBox* InvalidationBox_TextInputSectionImage; // 0x3e8(0x08)
	struct UInvalidationBox* InvalidationBox_TextInputSectionOverlay; // 0x3f0(0x08)
	struct UInvalidationBox* InvalidationBox_VerticalBox; // 0x3f8(0x08)
	struct UEditableTextBox* LeftQuote; // 0x400(0x08)
	struct UButton* PartyButton; // 0x408(0x08)
	struct UChatUnreadCounterWidget_C* PartyChatUnreadCounterWidget; // 0x410(0x08)
	struct UEditableTextBox* RightQuote; // 0x418(0x08)
	struct UOverlay* ServiceUnavailableIndicator; // 0x420(0x08)
	struct UButton* SlidingButton; // 0x428(0x08)
	struct UTextBlock* TargetChannelText; // 0x430(0x08)
	enum class EChatRoomType GroupChannelToSend; // 0x438(0x01)
	char pad_439[0x3]; // 0x439(0x03)
	int32_t MaxMessageLength; // 0x43c(0x04)
	enum class EChatRoomType SendTeamChannel; // 0x440(0x01)
	enum class EChatRoomType SendAllChannel; // 0x441(0x01)
	char pad_442[0x6]; // 0x442(0x06)
	struct TArray<struct FLinearColor> MatchDetailTeam1Colors; // 0x448(0x10)
	struct TArray<struct FLinearColor> MatchDetailsTeam2Colors; // 0x458(0x10)
	char pad_468[0x8]; // 0x468(0x08)
	struct FEditableTextBoxStyle TextBoxStyle; // 0x470(0xe80)
	bool KeepFocusAfterSending; // 0x12f0(0x01)
	char pad_12F1[0x7]; // 0x12f1(0x07)
	struct TMap<enum class EChatRoomType, struct FText> RoomNames; // 0x12f8(0x50)
	struct FMulticastInlineDelegate OnFocused; // 0x1348(0x10)
	struct FMulticastInlineDelegate OnUnFocused; // 0x1358(0x10)
	struct FMulticastInlineDelegate OnChatTabSelection; // 0x1368(0x10)
	struct FText GroupChatTabButtonText; // 0x1378(0x18)
	enum class ETextChatRoomType CurrentActiveTab; // 0x1390(0x01)
	bool RecipientTextboxHasFocus; // 0x1391(0x01)
	bool MessageTextboxHasFocus; // 0x1392(0x01)
	bool NavigationTestEnabled; // 0x1393(0x01)
	char pad_1394[0x4]; // 0x1394(0x04)
	struct TMap<struct FString, enum class EChatRoomType> ChatCommandToChannel; // 0x1398(0x50)
	bool FirstTimeSwitchingTo1:1Tab; // 0x13e8(0x01)
	char pad_13E9[0x7]; // 0x13e9(0x07)
	struct FMulticastInlineDelegate OnExpandRequest; // 0x13f0(0x10)
	struct FMulticastInlineDelegate OnCollapseRequest; // 0x1400(0x10)
	bool IsCollapsed; // 0x1410(0x01)
	bool MayCollapse; // 0x1411(0x01)
	bool EnterPressedOnEmptyRecipientText; // 0x1412(0x01)
	enum class ETextChatRoomType LastOpenTabBeforeCollapsing; // 0x1413(0x01)
	bool ShouldMinimizeAppearance; // 0x1414(0x01)

	void UpdateAppearanceMinimizing(); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.UpdateAppearanceMinimizing // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RestoreAppearance(); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.RestoreAppearance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MinimizeAppearance(); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.MinimizeAppearance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateChatErrorStatusBlock(); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.UpdateChatErrorStatusBlock // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	enum class EChatRoomType GetActiveSendChannel(); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.GetActiveSendChannel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void To1:1TabSelectedAssumeExpanded(bool Animate); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.To1:1TabSelectedAssumeExpanded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ToGroupTabSelectedAssumeExpanded(bool Animate); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.ToGroupTabSelectedAssumeExpanded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SwitchChatTabsRequested(); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.SwitchChatTabsRequested // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void FocusAndStartGroupMessageInput(enum class EChatRoomType Group Channel Choice); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.FocusAndStartGroupMessageInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateTabSwitchButtonStates(enum class ETextChatRoomType To); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.UpdateTabSwitchButtonStates // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetTargetChatRoomLabelColor(enum class EChatRoomType Room, struct FSlateColor& Color); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.GetTargetChatRoomLabelColor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void ToNoTabSelected(); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.ToNoTabSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetSendChannelIndicatorText(); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.SetSendChannelIndicatorText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ChangeGroupChannel(enum class EChatRoomType Send Channel Choice); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.ChangeGroupChannel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsInPartyWithAnotherPlayer(bool& Not Solo); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.IsInPartyWithAnotherPlayer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void MaybeNavigateBetweenDMChatBoxes(struct FKey Current Key, bool& Did Navigate); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.MaybeNavigateBetweenDMChatBoxes // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CheckForFocusChange(); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.CheckForFocusChange // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnFocusChange(bool NowHasFocus); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.OnFocusChange // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetFocusToInput(); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.SetFocusToInput // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void FocusAndStartDirectMessageInput(struct FText Recipient); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.FocusAndStartDirectMessageInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetDirectMessageTextboxStates(struct FText Recipient, struct FText Message); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.SetDirectMessageTextboxStates // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FText GetInputMessageMinusChannelPrefix(); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.GetInputMessageMinusChannelPrefix // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetLaterPrivateMessageRecipient(struct FString Current Recipient, struct FString& Later Recipient); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.GetLaterPrivateMessageRecipient // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetEarlierPrivateMessageRecipient(struct FString Current Recipient, struct FString& Earlier Recipient); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.GetEarlierPrivateMessageRecipient // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetActiveRecipient(struct FString& Recipient); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.GetActiveRecipient // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetActiveRecipient(struct FString Recipient); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.SetActiveRecipient // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetDefaultGroupRoomName(); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.GetDefaultGroupRoomName // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetLastIncomingWhisperAuthor(struct FString& Author); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.GetLastIncomingWhisperAuthor // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetChatTabButtonActive(struct UButton* Button, bool Active); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.SetChatTabButtonActive // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void To1:1TabSelected(bool Animate); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.To1:1TabSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ToGroupTabSelected(bool Animate); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.ToGroupTabSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.OnPreviewKeyDown // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetSendTeamChannel(enum class EChatRoomType& Channel); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.GetSendTeamChannel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetSendAllChannel(enum class EChatRoomType& Send All Channel); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.GetSendAllChannel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SubmitMessage(); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.SubmitMessage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSynchronizeProperties(); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnCommit(struct FText& Text, enum class ETextCommit CommitMethod); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.OnCommit // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__PartyButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature(); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.BndEvt__PartyButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__11Button_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.BndEvt__11Button_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__AutocompleteTextBox_K2Node_ComponentBoundEvent_3_OnTextChange__DelegateSignature(struct FText Text); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.BndEvt__AutocompleteTextBox_K2Node_ComponentBoundEvent_3_OnTextChange__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnRoomsUpdated_Event_1(); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.OnRoomsUpdated_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void EnableNavigationTest(bool Yes?); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.EnableNavigationTest // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__DirectMessageRecipientTextbox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.BndEvt__DirectMessageRecipientTextbox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnSendTeam_Event_1(); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.OnSendTeam_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Initialize(bool May Collapse); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.Initialize // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCollapseRequestEvent(); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.OnCollapseRequestEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnExpandRequestEvent(enum class ETextChatRoomType Requested Tab); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.OnExpandRequestEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnSendAll_Event_1(); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.OnSendAll_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnLeavingChat(); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.OnLeavingChat // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnInitiateWhisperMessage_Event(struct FText& WhisperName); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.OnInitiateWhisperMessage_Event // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnChatSessionStatusChanged(); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.OnChatSessionStatusChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnWhisperChat(); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.OnWhisperChat // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_ThreadedChatInputV2(int32_t EntryPoint); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.ExecuteUbergraph_ThreadedChatInputV2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnCollapseRequest__DelegateSignature(); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.OnCollapseRequest__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnExpandRequest__DelegateSignature(enum class ETextChatRoomType Requested Tab); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.OnExpandRequest__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnChatTabSelection__DelegateSignature(enum class ETextChatRoomType ChatTabChoice); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.OnChatTabSelection__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnUnFocused__DelegateSignature(); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.OnUnFocused__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnFocused__DelegateSignature(); // Function ThreadedChatInputV2.ThreadedChatInputV2_C.OnFocused__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

