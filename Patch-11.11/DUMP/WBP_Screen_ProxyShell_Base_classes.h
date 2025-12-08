// WidgetBlueprintGeneratedClass WBP_Screen_ProxyShell_Base.WBP_Screen_ProxyShell_Base_C
// Size: 0x641 (Inherited: 0x5b1)
struct UWBP_Screen_ProxyShell_Base_C : UWBP_Screen_Shell_Base_C {
	char pad_5B1[0x7]; // 0x5b1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5b8(0x08)
	enum class MainShellGlobalTransitionRequest TransitionRequestBuffer; // 0x5c0(0x01)
	char pad_5C1[0x3]; // 0x5c1(0x03)
	struct FName MainStackName; // 0x5c4(0x0c)
	struct FName ContextStackName; // 0x5d0(0x0c)
	struct FName ModalStackName; // 0x5dc(0x0c)
	struct UProxyShellViewModelBase* ProxyShellVM; // 0x5e8(0x08)
	struct UWBP_Panel_ShellBackground_C* ShellBackgroundReference; // 0x5f0(0x08)
	struct FName FullscreenModalOverlayStackName; // 0x5f8(0x0c)
	char pad_604[0x4]; // 0x604(0x04)
	struct TArray<struct UAresShellActivatableWidgetContainer*> StacksBottomToTop; // 0x608(0x10)
	struct TArray<struct UAresShellActivatableWidgetContainer*> StacksTopToBottom; // 0x618(0x10)
	struct FName SystemErrorlStackName; // 0x628(0x0c)
	struct FName PopupStackName; // 0x634(0x0c)
	enum class EUIBridgeType BridgeType; // 0x640(0x01)

	enum class EUIBridgeType GetBridgeType(); // Function WBP_Screen_ProxyShell_Base.WBP_Screen_ProxyShell_Base_C.GetBridgeType // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x19be2f0
	struct UMenuStackEntry* GetMenuStackEntry(); // Function WBP_Screen_ProxyShell_Base.WBP_Screen_ProxyShell_Base_C.GetMenuStackEntry // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x19be2f0
	bool IsProxyShellActive(); // Function WBP_Screen_ProxyShell_Base.WBP_Screen_ProxyShell_Base_C.IsProxyShellActive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x19be2f0
	struct FMargin GetMarginOverrides(); // Function WBP_Screen_ProxyShell_Base.WBP_Screen_ProxyShell_Base_C.GetMarginOverrides // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	bool IsWidgetActive(); // Function WBP_Screen_ProxyShell_Base.WBP_Screen_ProxyShell_Base_C.IsWidgetActive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x19be2f0
	struct FAresMainMenuNavBarData GetNavBarData(); // Function WBP_Screen_ProxyShell_Base.WBP_Screen_ProxyShell_Base_C.GetNavBarData // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	bool HandleBackRequest(); // Function WBP_Screen_ProxyShell_Base.WBP_Screen_ProxyShell_Base_C.HandleBackRequest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	enum class EMenuStackWidget_RequestCloseMenuResult RequestCloseMenu(); // Function WBP_Screen_ProxyShell_Base.WBP_Screen_ProxyShell_Base_C.RequestCloseMenu // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Screen_ProxyShell_Base.WBP_Screen_ProxyShell_Base_C.BP_GetDesiredFocusTarget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x19be2f0
	void GetBackgroundWidgetFromChild(struct UWBP_Panel_ShellBackground_C*& Background); // Function WBP_Screen_ProxyShell_Base.WBP_Screen_ProxyShell_Base_C.GetBackgroundWidgetFromChild // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetBackgroundVisibility(enum class EWidgetVisibilityOption ShellBackgroundVisibilityOption); // Function WBP_Screen_ProxyShell_Base.WBP_Screen_ProxyShell_Base_C.SetBackgroundVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetBackgroundVideo(struct FMenuStackMediaSourceParams BackgroundVideoParams); // Function WBP_Screen_ProxyShell_Base.WBP_Screen_ProxyShell_Base_C.SetBackgroundVideo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetBackgroundImage(struct FSlateBrush& BackgroundImage); // Function WBP_Screen_ProxyShell_Base.WBP_Screen_ProxyShell_Base_C.SetBackgroundImage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetTransitionBuffer(enum class MainShellGlobalTransitionRequest InTransitionRequestBuffer); // Function WBP_Screen_ProxyShell_Base.WBP_Screen_ProxyShell_Base_C.SetTransitionBuffer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteTransitionBufferRequest(); // Function WBP_Screen_ProxyShell_Base.WBP_Screen_ProxyShell_Base_C.ExecuteTransitionBufferRequest // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool BP_OnHandleBackAction(); // Function WBP_Screen_ProxyShell_Base.WBP_Screen_ProxyShell_Base_C.BP_OnHandleBackAction // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnClose(); // Function WBP_Screen_ProxyShell_Base.WBP_Screen_ProxyShell_Base_C.OnClose // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnOpen(); // Function WBP_Screen_ProxyShell_Base.WBP_Screen_ProxyShell_Base_C.OnOpen // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnRegister(struct UMenuStackEntry* RegisteredEntry); // Function WBP_Screen_ProxyShell_Base.WBP_Screen_ProxyShell_Base_C.OnRegister // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnActivated(); // Function WBP_Screen_ProxyShell_Base.WBP_Screen_ProxyShell_Base_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void K2_BindToViewModel(); // Function WBP_Screen_ProxyShell_Base.WBP_Screen_ProxyShell_Base_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnStackActivation(); // Function WBP_Screen_ProxyShell_Base.WBP_Screen_ProxyShell_Base_C.OnStackActivation // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnStackDeactivation(); // Function WBP_Screen_ProxyShell_Base.WBP_Screen_ProxyShell_Base_C.OnStackDeactivation // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function WBP_Screen_ProxyShell_Base.WBP_Screen_ProxyShell_Base_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function WBP_Screen_ProxyShell_Base.WBP_Screen_ProxyShell_Base_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnDeactivated(); // Function WBP_Screen_ProxyShell_Base.WBP_Screen_ProxyShell_Base_C.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Screen_ProxyShell_Base(int32_t EntryPoint); // Function WBP_Screen_ProxyShell_Base.WBP_Screen_ProxyShell_Base_C.ExecuteUbergraph_WBP_Screen_ProxyShell_Base // (Final|UbergraphFunction) // @ game+0x19be2f0
};

