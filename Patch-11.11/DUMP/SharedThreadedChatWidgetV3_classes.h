// WidgetBlueprintGeneratedClass SharedThreadedChatWidgetV3.SharedThreadedChatWidgetV3_C
// Size: 0x5a1 (Inherited: 0x320)
struct USharedThreadedChatWidgetV3_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UWidgetAnimation* FadeOutChatRoomUnavailable; // 0x328(0x08)
	struct UWidgetAnimation* FadeOutServiceUnavailable; // 0x330(0x08)
	struct UWidgetAnimation* CollapseArrowImageFlip; // 0x338(0x08)
	struct UAutocompleteTextBoxV2_C* AutocompleteTextBox; // 0x340(0x08)
	struct UTextBlock* ChatCoachMutedText; // 0x348(0x08)
	struct UWidgetSwitcher* ChatErrorSwitcher; // 0x350(0x08)
	struct UImage* ChatNotConnected; // 0x358(0x08)
	struct UTextBlock* ChatRestrictedText; // 0x360(0x08)
	struct UOverlay* ChatRoomCoachMutedIndicator; // 0x368(0x08)
	struct UOverlay* ChatRoomRestrictedIndicator; // 0x370(0x08)
	struct UOverlay* ChatRoomUnavailableIndicator; // 0x378(0x08)
	struct UButton* ChatWindowButton; // 0x380(0x08)
	struct UImage* CollapseArrowImage; // 0x388(0x08)
	struct UOverlay* CollapsibleTextInputSection; // 0x390(0x08)
	struct UWidgetSwitcher* DisplayBoxSwitcher; // 0x398(0x08)
	struct UImage* Image; // 0x3a0(0x08)
	struct UImage* Image_1; // 0x3a8(0x08)
	struct UImage* Image_2; // 0x3b0(0x08)
	struct UImage* Image_3; // 0x3b8(0x08)
	struct UImage* Image_4; // 0x3c0(0x08)
	struct UImage* Image_5; // 0x3c8(0x08)
	struct UImage* Image_6; // 0x3d0(0x08)
	struct UImage* Image_7; // 0x3d8(0x08)
	struct UImage* Image_8; // 0x3e0(0x08)
	struct UImage* Image_9; // 0x3e8(0x08)
	struct UImage* Image_305; // 0x3f0(0x08)
	struct UInvalidationBox* InvalidationBox_ChatWidgetV3; // 0x3f8(0x08)
	struct UThreadedChatMessageDisplayBoxV2_C* MessageDisplayBoxPrimaryV2; // 0x400(0x08)
	struct UVerticalBox* OtherErrors; // 0x408(0x08)
	struct UThreadedChatMessageDisplayBoxV2_C* PopupMessagesV2; // 0x410(0x08)
	struct UOverlay* ServiceUnavailableIndicator; // 0x418(0x08)
	struct UButton* ShowHideChatButton; // 0x420(0x08)
	struct UTextBlock* TargetPrefix; // 0x428(0x08)
	struct UButton* TargetPrefixButton; // 0x430(0x08)
	struct UOverlay* TargetPrefixOverlay; // 0x438(0x08)
	struct UImage* TextInputBackgroundColor; // 0x440(0x08)
	struct UButton* TextInputButton; // 0x448(0x08)
	struct UGridPanel* TextInputPanel; // 0x450(0x08)
	struct UVoicePushToTalkSuppressor_C* VoicePushToTalkSuppressor; // 0x458(0x08)
	enum class EChatRoomType CurrentPrimaryRoom; // 0x460(0x01)
	char pad_461[0x3]; // 0x461(0x03)
	int32_t MaxMessageLength; // 0x464(0x04)
	struct FMulticastInlineDelegate OnFocused; // 0x468(0x10)
	struct FMulticastInlineDelegate OnUnFocused; // 0x478(0x10)
	struct FMulticastInlineDelegate OnChatTabSelection; // 0x488(0x10)
	struct TMap<struct FString, enum class EChatRoomType> ChatCommandToChannel; // 0x498(0x50)
	struct FMulticastInlineDelegate OnExpandRequest; // 0x4e8(0x10)
	struct FMulticastInlineDelegate OnCollapseRequest; // 0x4f8(0x10)
	bool IsExpanded; // 0x508(0x01)
	bool ShouldMinimizeAppearance; // 0x509(0x01)
	char pad_50A[0x2]; // 0x50a(0x02)
	struct FName ActiveChatTab; // 0x50c(0x0c)
	struct FName PrimaryTabName; // 0x518(0x0c)
	struct FName WhispersTabName; // 0x524(0x0c)
	enum class EChatRoomType CurrentTargetRoomType; // 0x530(0x01)
	enum class EChatRoomType InitialDefaultChannel; // 0x531(0x01)
	char pad_532[0x6]; // 0x532(0x06)
	struct TMap<struct FString, struct FText> ChatCommandsAlways; // 0x538(0x50)
	struct FText WhisperTargetName; // 0x588(0x18)
	bool LockedOpen; // 0x5a0(0x01)

	void ShowRestrictionIndicatorIfAny(); // Function SharedThreadedChatWidgetV3.SharedThreadedChatWidgetV3_C.ShowRestrictionIndicatorIfAny // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateTextInputForCurrentCulture(); // Function SharedThreadedChatWidgetV3.SharedThreadedChatWidgetV3_C.UpdateTextInputForCurrentCulture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsLocalPlayerObserver(bool& Result); // Function SharedThreadedChatWidgetV3.SharedThreadedChatWidgetV3_C.IsLocalPlayerObserver // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CanSubmitGroupChatMessage(enum class EChatRoomType RoomType, struct UTextChatRoomV2* Chatroom, bool& CanSubmit); // Function SharedThreadedChatWidgetV3.SharedThreadedChatWidgetV3_C.CanSubmitGroupChatMessage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsValidAndConnected(struct UTextChatRoomV2* Chatroom, bool& Connected); // Function SharedThreadedChatWidgetV3.SharedThreadedChatWidgetV3_C.IsValidAndConnected // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetCurrentRoom(struct UTextChatRoomV2*& Room); // Function SharedThreadedChatWidgetV3.SharedThreadedChatWidgetV3_C.GetCurrentRoom // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetupInitialState(); // Function SharedThreadedChatWidgetV3.SharedThreadedChatWidgetV3_C.SetupInitialState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateChatConnectionError(); // Function SharedThreadedChatWidgetV3.SharedThreadedChatWidgetV3_C.UpdateChatConnectionError // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetTargetRoomLabelStyle(enum class EChatRoomType Room, struct FSlateColor& Color, struct FText& Text); // Function SharedThreadedChatWidgetV3.SharedThreadedChatWidgetV3_C.GetTargetRoomLabelStyle // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void HandleChatCommand(struct FString ChatCommand, bool ForceShow); // Function SharedThreadedChatWidgetV3.SharedThreadedChatWidgetV3_C.HandleChatCommand // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateAvailableChatCommands(); // Function SharedThreadedChatWidgetV3.SharedThreadedChatWidgetV3_C.UpdateAvailableChatCommands // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateCurrentTargetStyles(); // Function SharedThreadedChatWidgetV3.SharedThreadedChatWidgetV3_C.UpdateCurrentTargetStyles // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleFocusChanged(bool IsFocused); // Function SharedThreadedChatWidgetV3.SharedThreadedChatWidgetV3_C.HandleFocusChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateExpanded(double Fade speed); // Function SharedThreadedChatWidgetV3.SharedThreadedChatWidgetV3_C.UpdateExpanded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SubmitMessage(struct FText MessageText); // Function SharedThreadedChatWidgetV3.SharedThreadedChatWidgetV3_C.SubmitMessage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnWhisperChat(); // Function SharedThreadedChatWidgetV3.SharedThreadedChatWidgetV3_C.OnWhisperChat // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TextInputButton_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature(); // Function SharedThreadedChatWidgetV3.SharedThreadedChatWidgetV3_C.BndEvt__TextInputButton_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function SharedThreadedChatWidgetV3.SharedThreadedChatWidgetV3_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__AutocompleteTextBox_K2Node_ComponentBoundEvent_4_OnTextCommitted__DelegateSignature(struct FText Text); // Function SharedThreadedChatWidgetV3.SharedThreadedChatWidgetV3_C.BndEvt__AutocompleteTextBox_K2Node_ComponentBoundEvent_4_OnTextCommitted__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__AutocompleteTextBox_K2Node_ComponentBoundEvent_2_OnChatCommand__DelegateSignature(struct FString ChatCommand); // Function SharedThreadedChatWidgetV3.SharedThreadedChatWidgetV3_C.BndEvt__AutocompleteTextBox_K2Node_ComponentBoundEvent_2_OnChatCommand__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__AutocompleteTextBox_K2Node_ComponentBoundEvent_6_OnFocusChange__DelegateSignature(bool IsFocused); // Function SharedThreadedChatWidgetV3.SharedThreadedChatWidgetV3_C.BndEvt__AutocompleteTextBox_K2Node_ComponentBoundEvent_6_OnFocusChange__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__AutocompleteTextBox_K2Node_ComponentBoundEvent_7_OnWhisperNameCommitted__DelegateSignature(struct FText WhisperTargetName); // Function SharedThreadedChatWidgetV3.SharedThreadedChatWidgetV3_C.BndEvt__AutocompleteTextBox_K2Node_ComponentBoundEvent_7_OnWhisperNameCommitted__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TargetPrefixButton_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature(); // Function SharedThreadedChatWidgetV3.SharedThreadedChatWidgetV3_C.BndEvt__TargetPrefixButton_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__AutocompleteTextBox_K2Node_ComponentBoundEvent_10_OnEscapePressed__DelegateSignature(); // Function SharedThreadedChatWidgetV3.SharedThreadedChatWidgetV3_C.BndEvt__AutocompleteTextBox_K2Node_ComponentBoundEvent_10_OnEscapePressed__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ShowHideChatButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(); // Function SharedThreadedChatWidgetV3.SharedThreadedChatWidgetV3_C.BndEvt__ShowHideChatButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnChatSessionStatusChanged(); // Function SharedThreadedChatWidgetV3.SharedThreadedChatWidgetV3_C.OnChatSessionStatusChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnGameFlowStateChanged(enum class EGameFlowStateType NewState); // Function SharedThreadedChatWidgetV3.SharedThreadedChatWidgetV3_C.OnGameFlowStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TextInputButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function SharedThreadedChatWidgetV3.SharedThreadedChatWidgetV3_C.BndEvt__TextInputButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnInitiateWhisperMessage_Event(struct FText& WhisperName); // Function SharedThreadedChatWidgetV3.SharedThreadedChatWidgetV3_C.OnInitiateWhisperMessage_Event // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ChatWindowButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature(); // Function SharedThreadedChatWidgetV3.SharedThreadedChatWidgetV3_C.BndEvt__ChatWindowButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void On Message Clicked (MessageDisplayBoxPrimaryV2)(struct FString Subject); // Function SharedThreadedChatWidgetV3.SharedThreadedChatWidgetV3_C.On Message Clicked (MessageDisplayBoxPrimaryV2) // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnLeavingChat(); // Function SharedThreadedChatWidgetV3.SharedThreadedChatWidgetV3_C.OnLeavingChat // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Initialize(enum class EChatRoomType InitialDefaultChannel); // Function SharedThreadedChatWidgetV3.SharedThreadedChatWidgetV3_C.Initialize // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRoomsUpdated_Event_1(); // Function SharedThreadedChatWidgetV3.SharedThreadedChatWidgetV3_C.OnRoomsUpdated_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSendTeam_Event_1(); // Function SharedThreadedChatWidgetV3.SharedThreadedChatWidgetV3_C.OnSendTeam_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnHideChatBoxSettingChanged(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function SharedThreadedChatWidgetV3.SharedThreadedChatWidgetV3_C.OnHideChatBoxSettingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function SharedThreadedChatWidgetV3.SharedThreadedChatWidgetV3_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnSendAll_Event_1(); // Function SharedThreadedChatWidgetV3.SharedThreadedChatWidgetV3_C.OnSendAll_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_SharedThreadedChatWidgetV3(int32_t EntryPoint); // Function SharedThreadedChatWidgetV3.SharedThreadedChatWidgetV3_C.ExecuteUbergraph_SharedThreadedChatWidgetV3 // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnCollapseRequest__DelegateSignature(); // Function SharedThreadedChatWidgetV3.SharedThreadedChatWidgetV3_C.OnCollapseRequest__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnExpandRequest__DelegateSignature(enum class ETextChatRoomType Requested Tab); // Function SharedThreadedChatWidgetV3.SharedThreadedChatWidgetV3_C.OnExpandRequest__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnChatTabSelection__DelegateSignature(enum class ETextChatRoomType ChatTabChoice); // Function SharedThreadedChatWidgetV3.SharedThreadedChatWidgetV3_C.OnChatTabSelection__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnUnFocused__DelegateSignature(); // Function SharedThreadedChatWidgetV3.SharedThreadedChatWidgetV3_C.OnUnFocused__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnFocused__DelegateSignature(); // Function SharedThreadedChatWidgetV3.SharedThreadedChatWidgetV3_C.OnFocused__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

