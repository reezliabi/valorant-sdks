// Class RGISocialNotifications.RGISocialNotificationsNotificationCollectionViewModel
// Size: 0xd0 (Inherited: 0x70)
struct URGISocialNotificationsNotificationCollectionViewModel : UMVVMViewModelBase {
	struct TArray<struct URGISocialNotificationsNotificationViewModel*> Notifications; // 0x70(0x10)
	struct TSet<struct URGISocialNotificationsNotificationViewModel*> NotificationsSet; // 0x80(0x50)

	void RemoveNotificationFromCollection(struct URGISocialNotificationsNotificationViewModel* NotificationViewModel); // Function RGISocialNotifications.RGISocialNotificationsNotificationCollectionViewModel.RemoveNotificationFromCollection // (Final|Native|Public|BlueprintCallable) // @ game+0x5167520
	struct TArray<struct URGISocialNotificationsNotificationViewModel*> GetNotifications(); // Function RGISocialNotifications.RGISocialNotificationsNotificationCollectionViewModel.GetNotifications // (Final|Native|Public|BlueprintCallable) // @ game+0x5167140
	int32_t GetNotificationCount(); // Function RGISocialNotifications.RGISocialNotificationsNotificationCollectionViewModel.GetNotificationCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5167500
	void DeclineAllNotifications(); // Function RGISocialNotifications.RGISocialNotificationsNotificationCollectionViewModel.DeclineAllNotifications // (Final|Native|Public|BlueprintCallable) // @ game+0x51671d0
	void ClearNotificationsByType(enum class ENotificationType& InType); // Function RGISocialNotifications.RGISocialNotificationsNotificationCollectionViewModel.ClearNotificationsByType // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5167300
	void AddNotificationToCollection(struct URGISocialNotificationsNotificationViewModel* NotificationViewModel); // Function RGISocialNotifications.RGISocialNotificationsNotificationCollectionViewModel.AddNotificationToCollection // (Final|Native|Public|BlueprintCallable) // @ game+0x5167610
};

// Class RGISocialNotifications.RGISocialNotificationsNotificationViewModel
// Size: 0x120 (Inherited: 0x70)
struct URGISocialNotificationsNotificationViewModel : UMVVMViewModelBase {
	char pad_70[0x30]; // 0x70(0x30)
	enum class ENotificationType Type; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FText Title; // 0xa8(0x18)
	struct FText Message; // 0xc0(0x18)
	struct FText AcknowledgeText; // 0xd8(0x18)
	struct FText DeclineText; // 0xf0(0x18)
	struct UObject* Data; // 0x108(0x08)
	bool bIsRead; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct FDateTime NotificationTimestamp; // 0x118(0x08)

	void SetType(enum class ENotificationType& InType); // Function RGISocialNotifications.RGISocialNotificationsNotificationViewModel.SetType // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5168410
	void SetTitle(struct FText& InTitle); // Function RGISocialNotifications.RGISocialNotificationsNotificationViewModel.SetTitle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x51682f0
	void SetMessage(struct FText& InMessage); // Function RGISocialNotifications.RGISocialNotificationsNotificationViewModel.SetMessage // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x51681d0
	void SetIsRead(bool InIsRead); // Function RGISocialNotifications.RGISocialNotificationsNotificationViewModel.SetIsRead // (Final|Native|Public|BlueprintCallable) // @ game+0x51680b0
	void SetDeclineText(struct FText& InDeclineText); // Function RGISocialNotifications.RGISocialNotificationsNotificationViewModel.SetDeclineText // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5167e70
	void SetData(struct UObject* InData); // Function RGISocialNotifications.RGISocialNotificationsNotificationViewModel.SetData // (Final|Native|Public|BlueprintCallable) // @ game+0x5167d50
	void SetAcknowledgeText(struct FText& InAcknowledgeText); // Function RGISocialNotifications.RGISocialNotificationsNotificationViewModel.SetAcknowledgeText // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5167f90
	enum class ENotificationType GetType(); // Function RGISocialNotifications.RGISocialNotificationsNotificationViewModel.GetType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5168700
	struct FText GetTitle(); // Function RGISocialNotifications.RGISocialNotificationsNotificationViewModel.GetTitle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5168690
	struct FText GetMessage(); // Function RGISocialNotifications.RGISocialNotificationsNotificationViewModel.GetMessage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5168620
	bool GetIsRead(); // Function RGISocialNotifications.RGISocialNotificationsNotificationViewModel.GetIsRead // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5168600
	struct FText GetDeclineText(); // Function RGISocialNotifications.RGISocialNotificationsNotificationViewModel.GetDeclineText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5168520
	struct UObject* GetData(); // Function RGISocialNotifications.RGISocialNotificationsNotificationViewModel.GetData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5168500
	struct FText GetAcknowledgeText(); // Function RGISocialNotifications.RGISocialNotificationsNotificationViewModel.GetAcknowledgeText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5168590
};

// Class RGISocialNotifications.RGISocialCounter
// Size: 0x48 (Inherited: 0x30)
struct URGISocialCounter : UObject {
	int32_t Count; // 0x30(0x04)
	bool bIncludeInAll; // 0x34(0x01)
	char pad_35[0x13]; // 0x35(0x13)
};

// Class RGISocialNotifications.SubTaggedCounterMap
// Size: 0x88 (Inherited: 0x30)
struct USubTaggedCounterMap : UObject {
	struct URGISocialCounter* AggregateCounter; // 0x30(0x08)
	struct TMap<struct FString, struct URGISocialCounter*> SubTagToCounterMap; // 0x38(0x50)
};

// Class RGISocialNotifications.RGISocialNotificationsSubsystem
// Size: 0xf8 (Inherited: 0x38)
struct URGISocialNotificationsSubsystem : UGameInstanceSubsystem {
	char pad_38[0x18]; // 0x38(0x18)
	struct TMap<struct FString, struct URGISocialCounter*> SimpleCounterMap; // 0x50(0x50)
	struct TMap<struct FString, struct USubTaggedCounterMap*> AggregateCounterMap; // 0xa0(0x50)
	struct URGISocialNotificationsNotificationCollectionViewModel* NotificationCollectionViewModel; // 0xf0(0x08)

	void SetSimpleCount(struct FString Tag, int32_t Count, bool IncludeInAll); // Function RGISocialNotifications.RGISocialNotificationsSubsystem.SetSimpleCount // (Final|Native|Public|BlueprintCallable) // @ game+0x516aff0
	void SetCompositeCount(struct FString Tag, struct FString SubTag, int32_t Count, bool IncludeInAll); // Function RGISocialNotifications.RGISocialNotificationsSubsystem.SetCompositeCount // (Final|Native|Public|BlueprintCallable) // @ game+0x516a100
	void ResetAggregateCounter(struct FString Tag); // Function RGISocialNotifications.RGISocialNotificationsSubsystem.ResetAggregateCounter // (Final|Native|Public|BlueprintCallable) // @ game+0x516a430
	bool HasSimpleCounter(struct FString Tag); // Function RGISocialNotifications.RGISocialNotificationsSubsystem.HasSimpleCounter // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x516a900
	bool HasCompositeCounter(struct FString Tag, struct FString SubTag); // Function RGISocialNotifications.RGISocialNotificationsSubsystem.HasCompositeCounter // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x51692b0
	bool HasAggregateCounter(struct FString Tag); // Function RGISocialNotifications.RGISocialNotificationsSubsystem.HasAggregateCounter // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x51694e0
	struct URGISocialCounter* GetSimpleCounter(struct FString Tag); // Function RGISocialNotifications.RGISocialNotificationsSubsystem.GetSimpleCounter // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x516aa40
	int32_t GetSimpleCount(struct FString Tag); // Function RGISocialNotifications.RGISocialNotificationsSubsystem.GetSimpleCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x516ab80
	struct URGISocialCounter* GetOrInitializeSimpleCounter(struct FString Tag); // Function RGISocialNotifications.RGISocialNotificationsSubsystem.GetOrInitializeSimpleCounter // (Final|Native|Public|BlueprintCallable) // @ game+0x516b260
	struct URGISocialCounter* GetOrInitializeCompositeCounter(struct FString Tag, struct FString SubTag); // Function RGISocialNotifications.RGISocialNotificationsSubsystem.GetOrInitializeCompositeCounter // (Final|Native|Public|BlueprintCallable) // @ game+0x516a560
	struct URGISocialCounter* GetOrInitializeAggregateCounter(struct FString Tag); // Function RGISocialNotifications.RGISocialNotificationsSubsystem.GetOrInitializeAggregateCounter // (Final|Native|Public|BlueprintCallable) // @ game+0x516a7c0
	struct URGISocialNotificationsNotificationCollectionViewModel* GetNotificationCollection(); // Function RGISocialNotifications.RGISocialNotificationsSubsystem.GetNotificationCollection // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5169290
	struct URGISocialCounter* GetCompositeCounter(struct FString Tag, struct FString SubTag); // Function RGISocialNotifications.RGISocialNotificationsSubsystem.GetCompositeCounter // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5169620
	int32_t GetCompositeCount(struct FString Tag, struct FString SubTag); // Function RGISocialNotifications.RGISocialNotificationsSubsystem.GetCompositeCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5169990
	int32_t GetAllCount(); // Function RGISocialNotifications.RGISocialNotificationsSubsystem.GetAllCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x413f400
	struct URGISocialCounter* GetAggregateCounter(struct FString Tag); // Function RGISocialNotifications.RGISocialNotificationsSubsystem.GetAggregateCounter // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5169850
	int32_t GetAggregateCount(struct FString Tag); // Function RGISocialNotifications.RGISocialNotificationsSubsystem.GetAggregateCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5169bc0
	void AddSimpleCount(struct FString Tag, int32_t Count, bool IncludeInAll); // Function RGISocialNotifications.RGISocialNotificationsSubsystem.AddSimpleCount // (Final|Native|Public|BlueprintCallable) // @ game+0x516ad80
	void AddCompositeCount(struct FString Tag, struct FString SubTag, int32_t Count, bool IncludeInAll); // Function RGISocialNotifications.RGISocialNotificationsSubsystem.AddCompositeCount // (Final|Native|Public|BlueprintCallable) // @ game+0x5169dd0
};

