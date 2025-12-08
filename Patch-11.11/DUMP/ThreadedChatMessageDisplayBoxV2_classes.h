// WidgetBlueprintGeneratedClass ThreadedChatMessageDisplayBoxV2.ThreadedChatMessageDisplayBoxV2_C
// Size: 0x4a8 (Inherited: 0x320)
struct UThreadedChatMessageDisplayBoxV2_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UAresScrollBox* AresScrollBox_1; // 0x328(0x08)
	struct UVerticalBox* MessageBox; // 0x330(0x08)
	struct FText LastSeperatorDate; // 0x338(0x18)
	bool ShowDateSeperators; // 0x350(0x01)
	char pad_351[0x7]; // 0x351(0x07)
	struct TArray<None> AllowedRoomTypes; // 0x358(0x10)
	struct TArray<enum class EMessageContentType> AllowedMessageContentTypes; // 0x368(0x10)
	struct FVector2D FooterSize; // 0x378(0x10)
	struct FDateTime LastEventTriggeringAudio; // 0x388(0x08)
	struct UAkAudioEvent* MessageAddedAudioDefault; // 0x390(0x08)
	int32_t MinimumSecondsBetweenMessagingToPlayAudio; // 0x398(0x04)
	char pad_39C[0x4]; // 0x39c(0x04)
	struct TMap<enum class EChatRoomType, struct UAkAudioEvent*> MessageAddedAudioOverrides; // 0x3a0(0x50)
	bool MuteMessageAudio; // 0x3f0(0x01)
	char pad_3F1[0x3]; // 0x3f1(0x03)
	int32_t MinimumSecondsBeforeFirstAudio; // 0x3f4(0x04)
	struct FVector2D PreviousSize; // 0x3f8(0x10)
	struct FMulticastInlineDelegate MessageAddedToDisplay; // 0x408(0x10)
	struct TSet<struct FString> UnreadConversationIDs; // 0x418(0x50)
	bool DoesPlayAudio; // 0x468(0x01)
	bool UsePerMessageBacking; // 0x469(0x01)
	bool IsNotificationOnlyWidget; // 0x46a(0x01)
	bool IgnoringIncomingMessages; // 0x46b(0x01)
	int32_t MaxMessages; // 0x46c(0x04)
	struct TArray<struct UChatMessageV2_C*> PreAllocatedMessageWidgets; // 0x470(0x10)
	int32_t CurrentMessageCount; // 0x480(0x04)
	char pad_484[0x4]; // 0x484(0x04)
	struct FMulticastInlineDelegate MessageClicked; // 0x488(0x10)
	struct FString AutomatedTacticalCalloutSystemName; // 0x498(0x10)

	void GetNthMessageWidgetFromBottomOfChat(int32_t N, struct UChatMessageV2_C*& ChatMessageWidget); // Function ThreadedChatMessageDisplayBoxV2.ThreadedChatMessageDisplayBoxV2_C.GetNthMessageWidgetFromBottomOfChat // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PushChatMessagesForwardOneWidget(); // Function ThreadedChatMessageDisplayBoxV2.ThreadedChatMessageDisplayBoxV2_C.PushChatMessagesForwardOneWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExpireAllMessages(double FadeSpeed); // Function ThreadedChatMessageDisplayBoxV2.ThreadedChatMessageDisplayBoxV2_C.ExpireAllMessages // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ScrollToEnd(); // Function ThreadedChatMessageDisplayBoxV2.ThreadedChatMessageDisplayBoxV2_C.ScrollToEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitializeLastEventTriggeringAudio(); // Function ThreadedChatMessageDisplayBoxV2.ThreadedChatMessageDisplayBoxV2_C.InitializeLastEventTriggeringAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetMessageAudio(struct FUnifiedChatMessage Message, struct UAkAudioEvent*& Audio); // Function ThreadedChatMessageDisplayBoxV2.ThreadedChatMessageDisplayBoxV2_C.GetMessageAudio // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void TryPlayAudio(struct FUnifiedChatMessage Message); // Function ThreadedChatMessageDisplayBoxV2.ThreadedChatMessageDisplayBoxV2_C.TryPlayAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateMessageWidget(struct FUnifiedChatMessage& UnifiedChatMessage, bool UsePerMessageBacking, struct UChatMessageV2_C*& Widget); // Function ThreadedChatMessageDisplayBoxV2.ThreadedChatMessageDisplayBoxV2_C.CreateMessageWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddMessagesToContainer(struct TArray<struct FUnifiedChatMessage>& Messages, bool Audio); // Function ThreadedChatMessageDisplayBoxV2.ThreadedChatMessageDisplayBoxV2_C.AddMessagesToContainer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMessagesAdded_Event_1(struct TArray<struct FUnifiedChatMessage>& MessagesAdded); // Function ThreadedChatMessageDisplayBoxV2.ThreadedChatMessageDisplayBoxV2_C.OnMessagesAdded_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function ThreadedChatMessageDisplayBoxV2.ThreadedChatMessageDisplayBoxV2_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Initialize(bool UsePerMessageBacking); // Function ThreadedChatMessageDisplayBoxV2.ThreadedChatMessageDisplayBoxV2_C.Initialize // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function ThreadedChatMessageDisplayBoxV2.ThreadedChatMessageDisplayBoxV2_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnMessageBodyUpdated(struct FUnifiedChatMessage& Message); // Function ThreadedChatMessageDisplayBoxV2.ThreadedChatMessageDisplayBoxV2_C.OnMessageBodyUpdated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Message Clicked(struct FString Subject); // Function ThreadedChatMessageDisplayBoxV2.ThreadedChatMessageDisplayBoxV2_C.Message Clicked // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AllocateMessageWidgets(); // Function ThreadedChatMessageDisplayBoxV2.ThreadedChatMessageDisplayBoxV2_C.AllocateMessageWidgets // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMessageDropped(struct FString MessageID); // Function ThreadedChatMessageDisplayBoxV2.ThreadedChatMessageDisplayBoxV2_C.OnMessageDropped // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_ThreadedChatMessageDisplayBoxV2(int32_t EntryPoint); // Function ThreadedChatMessageDisplayBoxV2.ThreadedChatMessageDisplayBoxV2_C.ExecuteUbergraph_ThreadedChatMessageDisplayBoxV2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void MessageClicked__DelegateSignature(struct FString Subject); // Function ThreadedChatMessageDisplayBoxV2.ThreadedChatMessageDisplayBoxV2_C.MessageClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MessageAddedToDisplay__DelegateSignature(); // Function ThreadedChatMessageDisplayBoxV2.ThreadedChatMessageDisplayBoxV2_C.MessageAddedToDisplay__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

