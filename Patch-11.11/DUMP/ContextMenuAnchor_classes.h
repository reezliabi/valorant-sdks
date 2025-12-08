// WidgetBlueprintGeneratedClass ContextMenuAnchor.ContextMenuAnchor_C
// Size: 0x3f9 (Inherited: 0x318)
struct UContextMenuAnchor_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UAresMenuAnchor* AresMenuAnchor_1; // 0x320(0x08)
	struct UNamedSlot* ChildSlot; // 0x328(0x08)
	struct FMulticastInlineDelegate OnContextMenuCreated; // 0x330(0x10)
	bool AnchorOnMouse; // 0x340(0x01)
	enum class EMenuPlacement NonMouseAnchorPlacement; // 0x341(0x01)
	char pad_342[0x6]; // 0x342(0x06)
	struct FMulticastInlineDelegate OnAction; // 0x348(0x10)
	struct FMulticastInlineDelegate OnActionHovered; // 0x358(0x10)
	struct FMulticastInlineDelegate OnActionPressed; // 0x368(0x10)
	struct FMulticastInlineDelegate OnActionReleased; // 0x378(0x10)
	struct FMulticastInlineDelegate OnActionUnhovered; // 0x388(0x10)
	struct FMulticastInlineDelegate OnMenuUnhovered; // 0x398(0x10)
	struct UAkAudioEvent* ActionSound; // 0x3a8(0x08)
	struct UAkAudioEvent* ActionHoveredSound; // 0x3b0(0x08)
	struct UAkAudioEvent* ActionPressedSound; // 0x3b8(0x08)
	struct UAkAudioEvent* ActionReleasedSound; // 0x3c0(0x08)
	struct UAkAudioEvent* ActionUnhoveredSound; // 0x3c8(0x08)
	struct UAkAudioEvent* MenuCreatedSound; // 0x3d0(0x08)
	struct UAkAudioEvent* MenuUnhoveredSound; // 0x3d8(0x08)
	bool MenuCreatedSoundFinished; // 0x3e0(0x01)
	char pad_3E1[0x7]; // 0x3e1(0x07)
	struct FMulticastInlineDelegate OnMenuOpenChanged; // 0x3e8(0x10)
	bool bPressed; // 0x3f8(0x01)

	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function ContextMenuAnchor.ContextMenuAnchor_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SpawnMenuSetPosition(); // Function ContextMenuAnchor.ContextMenuAnchor_C.SpawnMenuSetPosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SpawnMenuFromGeometry(struct FGeometry Geometry, struct FVector2D MousePosition); // Function ContextMenuAnchor.ContextMenuAnchor_C.SpawnMenuFromGeometry // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlaySoundIfCreationFinished(struct UAkAudioEvent* Sound); // Function ContextMenuAnchor.ContextMenuAnchor_C.PlaySoundIfCreationFinished // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMenuCreatedSoundFinished(); // Function ContextMenuAnchor.ContextMenuAnchor_C.OnMenuCreatedSoundFinished // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAnyActionReleased(struct UContextMenuButton_C* Button); // Function ContextMenuAnchor.ContextMenuAnchor_C.OnAnyActionReleased // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAnyActionPressed(struct UContextMenuButton_C* Button); // Function ContextMenuAnchor.ContextMenuAnchor_C.OnAnyActionPressed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAnyActionUnhovered(struct UContextMenuButton_C* Button); // Function ContextMenuAnchor.ContextMenuAnchor_C.OnAnyActionUnhovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAnyActionHovered(struct UContextMenuButton_C* Button); // Function ContextMenuAnchor.ContextMenuAnchor_C.OnAnyActionHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAnyAction(struct UContextMenuButton_C* Button); // Function ContextMenuAnchor.ContextMenuAnchor_C.OnAnyAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCursorLeave(); // Function ContextMenuAnchor.ContextMenuAnchor_C.OnCursorLeave // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsOpen(bool& IsOpen); // Function ContextMenuAnchor.ContextMenuAnchor_C.IsOpen // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function ContextMenuAnchor.ContextMenuAnchor_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function ContextMenuAnchor.ContextMenuAnchor_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWidget* OnGetMenuContent_1(); // Function ContextMenuAnchor.ContextMenuAnchor_C.OnGetMenuContent_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__AresMenuAnchor_0_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function ContextMenuAnchor.ContextMenuAnchor_C.BndEvt__AresMenuAnchor_0_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_ContextMenuAnchor(int32_t EntryPoint); // Function ContextMenuAnchor.ContextMenuAnchor_C.ExecuteUbergraph_ContextMenuAnchor // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnMenuOpenChanged__DelegateSignature(bool IsOpen); // Function ContextMenuAnchor.ContextMenuAnchor_C.OnMenuOpenChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMenuUnhovered__DelegateSignature(); // Function ContextMenuAnchor.ContextMenuAnchor_C.OnMenuUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnActionUnhovered__DelegateSignature(struct UContextMenuButton_C* Button); // Function ContextMenuAnchor.ContextMenuAnchor_C.OnActionUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnActionReleased__DelegateSignature(struct UContextMenuButton_C* Button); // Function ContextMenuAnchor.ContextMenuAnchor_C.OnActionReleased__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnActionPressed__DelegateSignature(struct UContextMenuButton_C* Button); // Function ContextMenuAnchor.ContextMenuAnchor_C.OnActionPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnActionHovered__DelegateSignature(struct UContextMenuButton_C* Button); // Function ContextMenuAnchor.ContextMenuAnchor_C.OnActionHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAction__DelegateSignature(struct UContextMenuButton_C* Button); // Function ContextMenuAnchor.ContextMenuAnchor_C.OnAction__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnContextMenuCreated__DelegateSignature(struct UContextMenu_C* ContextMenu); // Function ContextMenuAnchor.ContextMenuAnchor_C.OnContextMenuCreated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

