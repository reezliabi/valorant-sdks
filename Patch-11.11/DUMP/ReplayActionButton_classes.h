// WidgetBlueprintGeneratedClass ReplayActionButton.ReplayActionButton_C
// Size: 0x42c (Inherited: 0x338)
struct UReplayActionButton_C : UWBP_Button_ReplayButtonBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UWBP_Button_TimelineUI_C* Button_Download; // 0x340(0x08)
	struct UWBP_Button_TimelineUI_C* Button_Error; // 0x348(0x08)
	struct UWBP_Button_TimelineUI_C* Button_Play; // 0x350(0x08)
	struct UImage* IMG_DLProgress; // 0x358(0x08)
	struct UImage* IMG_expiredBG; // 0x360(0x08)
	struct UImage* IMG_expiredBG_2; // 0x368(0x08)
	struct UImage* IMG_expiredIcon; // 0x370(0x08)
	struct UImage* IMG_expiredIcon_2; // 0x378(0x08)
	struct UImage* IMG_NoReplay; // 0x380(0x08)
	struct UImage* IMG_NotReadyBG; // 0x388(0x08)
	struct UImage* IMG_NotReadyBG_2; // 0x390(0x08)
	struct UOverlay* O_Incompatible; // 0x398(0x08)
	struct UOverlay* O_NotReady; // 0x3a0(0x08)
	struct UOverlay* O_Starting; // 0x3a8(0x08)
	struct UOverlay* O_Unavailable; // 0x3b0(0x08)
	struct UWidgetSwitcher* PlayButtonWidgetSwitcher; // 0x3b8(0x08)
	struct UImage* ReplayAttentionIndicator; // 0x3c0(0x08)
	struct UTextBlock* Text_DLProgressNumber; // 0x3c8(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x3d0(0x08)
	struct FName MatParam_Icon; // 0x3d8(0x0c)
	struct FName MatParam_IconSize; // 0x3e4(0x0c)
	struct FMulticastInlineDelegate OnPressed; // 0x3f0(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x400(0x10)
	enum class EMatchHistoryContext MatchHistoryContext; // 0x410(0x01)
	char pad_411[0x3]; // 0x411(0x03)
	int32_t MatchHistoryListPosition; // 0x414(0x04)
	struct UReplaysBetaViewModel* ReplaysBetaVM; // 0x418(0x08)
	struct UWidget* WS_ActiveWidget; // 0x420(0x08)
	bool HideReplayButtonBorders; // 0x428(0x01)
	bool IsLocalPlayerSubject; // 0x429(0x01)
	bool CachedUpdateCode; // 0x42a(0x01)
	enum class EMatchHistoryReplayStatus CachedReplayStatus; // 0x42b(0x01)

	void IsReplayAvailableForInteraction(bool& Available); // Function ReplayActionButton.ReplayActionButton_C.IsReplayAvailableForInteraction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetButtonBorderVisibility(bool HideBorders); // Function ReplayActionButton.ReplayActionButton_C.SetButtonBorderVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetErrorMessageFromUpdateCode(enum class EReplayLocalFileMatchEntryUpdateCode UpdateCode, struct FText& NewParam); // Function ReplayActionButton.ReplayActionButton_C.GetErrorMessageFromUpdateCode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void OnShouldShowReplayPipsChanged(bool NewValue); // Function ReplayActionButton.ReplayActionButton_C.OnShouldShowReplayPipsChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateToolTips(enum class EReplayLocalFileMatchEntryUpdateCode UpdateCode (For Errors Only)); // Function ReplayActionButton.ReplayActionButton_C.UpdateToolTips // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Get Download Progress String(struct FText& Result); // Function ReplayActionButton.ReplayActionButton_C.Get Download Progress String // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UpdateDownloadProgressVisuals(); // Function ReplayActionButton.ReplayActionButton_C.UpdateDownloadProgressVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Get Widget Switcher Index(enum class EMatchHistoryReplayStatus StatusEnum, int32_t& Return Value); // Function ReplayActionButton.ReplayActionButton_C.Get Widget Switcher Index // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UpdateReplaysAttentionPip(); // Function ReplayActionButton.ReplayActionButton_C.UpdateReplaysAttentionPip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnHasUserAcknowledgedReplaysChanged(bool NewValue); // Function ReplayActionButton.ReplayActionButton_C.OnHasUserAcknowledgedReplaysChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnHasAvailableReplaysChanged(bool NewValue); // Function ReplayActionButton.ReplayActionButton_C.OnHasAvailableReplaysChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindReplayViewModel(bool Bind); // Function ReplayActionButton.ReplayActionButton_C.BindReplayViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Init(struct FString Match ID, enum class EMatchHistoryContext Context, int32_t ListPosition, bool IsLocalPlayer); // Function ReplayActionButton.ReplayActionButton_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update State(struct FReplayLocalFileMatchEntryUpdateInfo ReplayLocalUpdate); // Function ReplayActionButton.ReplayActionButton_C.Update State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function ReplayActionButton.ReplayActionButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ReplayActionButton_WBP_Button_Replay_Download_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function ReplayActionButton.ReplayActionButton_C.BndEvt__ReplayActionButton_WBP_Button_Replay_Download_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function ReplayActionButton.ReplayActionButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ReplayActionButton_WBP_Button_Replay_Download_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function ReplayActionButton.ReplayActionButton_C.BndEvt__ReplayActionButton_WBP_Button_Replay_Download_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ReplayActionButton_WBP_Button_Replay_Play_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function ReplayActionButton.ReplayActionButton_C.BndEvt__ReplayActionButton_WBP_Button_Replay_Play_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ReplayActionButton_WBP_Button_Replay_Play_K2Node_ComponentBoundEvent_14_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function ReplayActionButton.ReplayActionButton_C.BndEvt__ReplayActionButton_WBP_Button_Replay_Play_K2Node_ComponentBoundEvent_14_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ReplayActionButton_Button_Error_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function ReplayActionButton.ReplayActionButton_C.BndEvt__ReplayActionButton_Button_Error_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_ReplayActionButton(int32_t EntryPoint); // Function ReplayActionButton.ReplayActionButton_C.ExecuteUbergraph_ReplayActionButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnReleased__DelegateSignature(); // Function ReplayActionButton.ReplayActionButton_C.OnReleased__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPressed__DelegateSignature(); // Function ReplayActionButton.ReplayActionButton_C.OnPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

