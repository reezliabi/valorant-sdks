// BlueprintGeneratedClass VM_EquippableHUDElement.VM_EquippableHUDElement_C
// Size: 0x180 (Inherited: 0x90)
struct UVM_EquippableHUDElement_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x98(0x08)
	enum class EAresItemSlot ItemSlot; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct AShooterCharacter* CachedCharacter; // 0xa8(0x08)
	struct AAresEquippable* EquippableForSlot; // 0xb0(0x08)
	bool bEquipped; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct FMulticastInlineDelegate OnEquippedStateChanged; // 0xc0(0x10)
	struct FEquippableHUDInfo EquippableInfo; // 0xd0(0x38)
	struct FMulticastInlineDelegate OnEquippableInfoChanged; // 0x108(0x10)
	struct FName ActionName; // 0x118(0x0c)
	char pad_124[0x4]; // 0x124(0x04)
	struct FMulticastInlineDelegate OnActionNameChanged; // 0x128(0x10)
	bool bAlwaysShowInventory; // 0x138(0x01)
	char pad_139[0x7]; // 0x139(0x07)
	struct FMulticastInlineDelegate StartFadeAnimation; // 0x140(0x10)
	enum class ESlateVisibility WidgetVisibility; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	struct FMulticastInlineDelegate OnWidgetVisibilityChanged; // 0x158(0x10)
	bool bShowInputPrompt; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
	struct FMulticastInlineDelegate OnShowInputPromptChanged; // 0x170(0x10)

	void SetShowInputPrompt(bool Value); // Function VM_EquippableHUDElement.VM_EquippableHUDElement_C.SetShowInputPrompt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetShowInputPrompt(bool& bShowInputPrompt); // Function VM_EquippableHUDElement.VM_EquippableHUDElement_C.GetShowInputPrompt // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetWidgetVisibility(enum class ESlateVisibility Value); // Function VM_EquippableHUDElement.VM_EquippableHUDElement_C.SetWidgetVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetWidgetVisibility(enum class ESlateVisibility& WidgetVisibility); // Function VM_EquippableHUDElement.VM_EquippableHUDElement_C.GetWidgetVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Update Inventory(); // Function VM_EquippableHUDElement.VM_EquippableHUDElement_C.Update Inventory // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateFadeAnimation(); // Function VM_EquippableHUDElement.VM_EquippableHUDElement_C.UpdateFadeAnimation // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitializeActionName(); // Function VM_EquippableHUDElement.VM_EquippableHUDElement_C.InitializeActionName // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetActionName(struct FName Value); // Function VM_EquippableHUDElement.VM_EquippableHUDElement_C.SetActionName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetActionName(struct FName& ActionName); // Function VM_EquippableHUDElement.VM_EquippableHUDElement_C.GetActionName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetEquippableInfo(struct FEquippableHUDInfo Value); // Function VM_EquippableHUDElement.VM_EquippableHUDElement_C.SetEquippableInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetEquippableInfo(struct FEquippableHUDInfo& EquippableInfo); // Function VM_EquippableHUDElement.VM_EquippableHUDElement_C.GetEquippableInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetEquipped(bool Value); // Function VM_EquippableHUDElement.VM_EquippableHUDElement_C.SetEquipped // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetEquipped(bool& bEquipped); // Function VM_EquippableHUDElement.VM_EquippableHUDElement_C.GetEquipped // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UpdateEquippableForSlot(); // Function VM_EquippableHUDElement.VM_EquippableHUDElement_C.UpdateEquippableForSlot // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToEvents(bool Bind); // Function VM_EquippableHUDElement.VM_EquippableHUDElement_C.BindToEvents // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSpawnedCharacterChanged(struct AShooterCharacter* NewValue); // Function VM_EquippableHUDElement.VM_EquippableHUDElement_C.OnSpawnedCharacterChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnInventoryItemsChanged(); // Function VM_EquippableHUDElement.VM_EquippableHUDElement_C.OnInventoryItemsChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCurrentEquippableChanged(struct AAresEquippable* Equippable); // Function VM_EquippableHUDElement.VM_EquippableHUDElement_C.OnCurrentEquippableChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAlwaysShowInventorySettingChanged(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function VM_EquippableHUDElement.VM_EquippableHUDElement_C.OnAlwaysShowInventorySettingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Initialize(struct UCoordinatedHUDModel* HUDModel); // Function VM_EquippableHUDElement.VM_EquippableHUDElement_C.Initialize // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_VM_EquippableHUDElement(int32_t EntryPoint); // Function VM_EquippableHUDElement.VM_EquippableHUDElement_C.ExecuteUbergraph_VM_EquippableHUDElement // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnShowInputPromptChanged__DelegateSignature(bool ShowInputPrompt); // Function VM_EquippableHUDElement.VM_EquippableHUDElement_C.OnShowInputPromptChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnWidgetVisibilityChanged__DelegateSignature(enum class ESlateVisibility WidgetVisibility); // Function VM_EquippableHUDElement.VM_EquippableHUDElement_C.OnWidgetVisibilityChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StartFadeAnimation__DelegateSignature(bool Fade); // Function VM_EquippableHUDElement.VM_EquippableHUDElement_C.StartFadeAnimation__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnActionNameChanged__DelegateSignature(struct FName ActionName); // Function VM_EquippableHUDElement.VM_EquippableHUDElement_C.OnActionNameChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEquippableInfoChanged__DelegateSignature(struct FEquippableHUDInfo EquippableInfo); // Function VM_EquippableHUDElement.VM_EquippableHUDElement_C.OnEquippableInfoChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEquippedStateChanged__DelegateSignature(bool Equipped); // Function VM_EquippableHUDElement.VM_EquippableHUDElement_C.OnEquippedStateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

