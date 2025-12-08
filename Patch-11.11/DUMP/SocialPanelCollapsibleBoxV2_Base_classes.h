// WidgetBlueprintGeneratedClass SocialPanelCollapsibleBoxV2_Base.SocialPanelCollapsibleBoxV2_Base_C
// Size: 0x401 (Inherited: 0x318)
struct USocialPanelCollapsibleBoxV2_Base_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct USocialPartyList_Base_C* OwningSocialPartyList; // 0x320(0x08)
	struct TArray<struct USocialPartyModel*> SocialParties; // 0x328(0x10)
	struct TArray<struct USocialPlayer*> SocialPlayers; // 0x338(0x10)
	struct UGridPanel* InternalContentGrid; // 0x348(0x08)
	struct UTextBlock* InternalCountText; // 0x350(0x08)
	struct UTextBlock* InternalTitleText; // 0x358(0x08)
	struct FMulticastInlineDelegate OnExpanded; // 0x360(0x10)
	struct FMulticastInlineDelegate OnCollapsed; // 0x370(0x10)
	struct TMap<struct UWidget*, struct UGridSlot*> WidgetToGridSlotMap; // 0x380(0x50)
	bool InitializeCollapsed; // 0x3d0(0x01)
	bool InternalIsExpanded; // 0x3d1(0x01)
	char pad_3D2[0x2]; // 0x3d2(0x02)
	int32_t NextInsertIndex; // 0x3d4(0x04)
	bool InternalCanUpdate; // 0x3d8(0x01)
	bool InternalIsInitialized; // 0x3d9(0x01)
	bool InternalUpdatePending; // 0x3da(0x01)
	char pad_3DB[0x5]; // 0x3db(0x05)
	struct FText Title; // 0x3e0(0x18)
	struct UTexture2D* Icon; // 0x3f8(0x08)
	bool PlayersPendingRemoval; // 0x400(0x01)

	void SetIcon(struct UTexture2D* Icon); // Function SocialPanelCollapsibleBoxV2_Base.SocialPanelCollapsibleBoxV2_Base_C.SetIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TryRemove Player(struct USocialPlayer* RemovedPlayer, bool& ListIsConsistent); // Function SocialPanelCollapsibleBoxV2_Base.SocialPanelCollapsibleBoxV2_Base_C.TryRemove Player // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ClearListContents(); // Function SocialPanelCollapsibleBoxV2_Base.SocialPanelCollapsibleBoxV2_Base_C.ClearListContents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MarkListContentsInvalid(); // Function SocialPanelCollapsibleBoxV2_Base.SocialPanelCollapsibleBoxV2_Base_C.MarkListContentsInvalid // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetPlayerListContents(struct TArray<struct USocialPlayer*>& InSocialPlayers); // Function SocialPanelCollapsibleBoxV2_Base.SocialPanelCollapsibleBoxV2_Base_C.SetPlayerListContents // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetPartyListContents(struct TArray<struct USocialPartyModel*>& InSocialParties); // Function SocialPanelCollapsibleBoxV2_Base.SocialPanelCollapsibleBoxV2_Base_C.SetPartyListContents // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ConditionalUpdateInvalidContents(bool IgnorePausedFlag); // Function SocialPanelCollapsibleBoxV2_Base.SocialPanelCollapsibleBoxV2_Base_C.ConditionalUpdateInvalidContents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ResumeUpdates(); // Function SocialPanelCollapsibleBoxV2_Base.SocialPanelCollapsibleBoxV2_Base_C.ResumeUpdates // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PauseUpdates(); // Function SocialPanelCollapsibleBoxV2_Base.SocialPanelCollapsibleBoxV2_Base_C.PauseUpdates // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ClearAllWidgets(); // Function SocialPanelCollapsibleBoxV2_Base.SocialPanelCollapsibleBoxV2_Base_C.ClearAllWidgets // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ToggleExpanded(); // Function SocialPanelCollapsibleBoxV2_Base.SocialPanelCollapsibleBoxV2_Base_C.ToggleExpanded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InternalInit(struct UGridPanel* ContentGrid, struct UTextBlock* CountText, struct UTextBlock* TitleText); // Function SocialPanelCollapsibleBoxV2_Base.SocialPanelCollapsibleBoxV2_Base_C.InternalInit // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetCount(int32_t Count); // Function SocialPanelCollapsibleBoxV2_Base.SocialPanelCollapsibleBoxV2_Base_C.SetCount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsExpanded(bool& Expanded); // Function SocialPanelCollapsibleBoxV2_Base.SocialPanelCollapsibleBoxV2_Base_C.IsExpanded // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void RemoveWidget(struct UWidget* Widget, bool& Removed); // Function SocialPanelCollapsibleBoxV2_Base.SocialPanelCollapsibleBoxV2_Base_C.RemoveWidget // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InsertWidget(struct UWidget* Widget, int32_t Index); // Function SocialPanelCollapsibleBoxV2_Base.SocialPanelCollapsibleBoxV2_Base_C.InsertWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateExpanded(); // Function SocialPanelCollapsibleBoxV2_Base.SocialPanelCollapsibleBoxV2_Base_C.UpdateExpanded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetExpanded(bool Expanded); // Function SocialPanelCollapsibleBoxV2_Base.SocialPanelCollapsibleBoxV2_Base_C.SetExpanded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AppendWidget(struct UWidget* Widget); // Function SocialPanelCollapsibleBoxV2_Base.SocialPanelCollapsibleBoxV2_Base_C.AppendWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetTitle(struct FText Title); // Function SocialPanelCollapsibleBoxV2_Base.SocialPanelCollapsibleBoxV2_Base_C.SetTitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function SocialPanelCollapsibleBoxV2_Base.SocialPanelCollapsibleBoxV2_Base_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_SocialPanelCollapsibleBoxV2_Base(int32_t EntryPoint); // Function SocialPanelCollapsibleBoxV2_Base.SocialPanelCollapsibleBoxV2_Base_C.ExecuteUbergraph_SocialPanelCollapsibleBoxV2_Base // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnCollapsed__DelegateSignature(); // Function SocialPanelCollapsibleBoxV2_Base.SocialPanelCollapsibleBoxV2_Base_C.OnCollapsed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnExpanded__DelegateSignature(); // Function SocialPanelCollapsibleBoxV2_Base.SocialPanelCollapsibleBoxV2_Base_C.OnExpanded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

