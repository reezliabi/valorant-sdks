// WidgetBlueprintGeneratedClass Widget_Ability_Element_Icon.Widget_Ability_Element_Icon_C
// Size: 0x408 (Inherited: 0x3b0)
struct UWidget_Ability_Element_Icon_C : UCharacterAbilityWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b0(0x08)
	struct UImage* AbilityIcon; // 0x3b8(0x08)
	struct UProgressBar* ProgressBar; // 0x3c0(0x08)
	struct UButton* TouchButton; // 0x3c8(0x08)
	struct FMulticastInlineDelegate DispatchUpdateWidget; // 0x3d0(0x10)
	struct UMaterialInstance* Icon_Material; // 0x3e0(0x08)
	struct UTexture* IconOverride; // 0x3e8(0x08)
	struct UTexture* EquippableIcon; // 0x3f0(0x08)
	struct UMaterialInstance* Suppressed Icon Template; // 0x3f8(0x08)
	struct UMaterialInstanceDynamic* MI Dynamic Suppressed Icon; // 0x400(0x08)

	void HasInputPrompt(bool& Has Input Prompt); // Function Widget_Ability_Element_Icon.Widget_Ability_Element_Icon_C.HasInputPrompt // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Start Suppression Icon(); // Function Widget_Ability_Element_Icon.Widget_Ability_Element_Icon_C.Start Suppression Icon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetReady(); // Function Widget_Ability_Element_Icon.Widget_Ability_Element_Icon_C.SetReady // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetUnavailable(); // Function Widget_Ability_Element_Icon.Widget_Ability_Element_Icon_C.SetUnavailable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetItemIcon(struct UTexture*& Icon); // Function Widget_Ability_Element_Icon.Widget_Ability_Element_Icon_C.GetItemIcon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetIcon(); // Function Widget_Ability_Element_Icon.Widget_Ability_Element_Icon_C.SetIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateEnabled(); // Function Widget_Ability_Element_Icon.Widget_Ability_Element_Icon_C.UpdateEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddTimer(struct UUserWidget* InTimerWidget); // Function Widget_Ability_Element_Icon.Widget_Ability_Element_Icon_C.AddTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddInputPrompt(struct UUserWidget* InInputPromptWidget); // Function Widget_Ability_Element_Icon.Widget_Ability_Element_Icon_C.AddInputPrompt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InputPromptRemoved(); // Function Widget_Ability_Element_Icon.Widget_Ability_Element_Icon_C.InputPromptRemoved // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetInputPromptVisibility(enum class ESlateVisibility Visible); // Function Widget_Ability_Element_Icon.Widget_Ability_Element_Icon_C.SetInputPromptVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnStartWidget(); // Function Widget_Ability_Element_Icon.Widget_Ability_Element_Icon_C.OnStartWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void DispatchUpdateAbilityWidget_Event_1(); // Function Widget_Ability_Element_Icon.Widget_Ability_Element_Icon_C.DispatchUpdateAbilityWidget_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TouchButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature(); // Function Widget_Ability_Element_Icon.Widget_Ability_Element_Icon_C.BndEvt__TouchButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TouchButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature(); // Function Widget_Ability_Element_Icon.Widget_Ability_Element_Icon_C.BndEvt__TouchButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OverrideIcon(struct UTexture* OverrideTexture); // Function Widget_Ability_Element_Icon.Widget_Ability_Element_Icon_C.OverrideIcon // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CharacterUIDataLoaded(struct UCharacterHandle* CharacterHandle); // Function Widget_Ability_Element_Icon.Widget_Ability_Element_Icon_C.CharacterUIDataLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BuffAdded(struct FStruct_GameplayTagAndHUD_Info TagInfo); // Function Widget_Ability_Element_Icon.Widget_Ability_Element_Icon_C.BuffAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BuffRemoved(struct FStruct_GameplayTagAndHUD_Info TagInfo); // Function Widget_Ability_Element_Icon.Widget_Ability_Element_Icon_C.BuffRemoved // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindEvents(); // Function Widget_Ability_Element_Icon.Widget_Ability_Element_Icon_C.BindEvents // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UnbindEvents(); // Function Widget_Ability_Element_Icon.Widget_Ability_Element_Icon_C.UnbindEvents // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnActivateWidget(); // Function Widget_Ability_Element_Icon.Widget_Ability_Element_Icon_C.OnActivateWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void OnStopWidget(); // Function Widget_Ability_Element_Icon.Widget_Ability_Element_Icon_C.OnStopWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void OnDeactivateWidget(); // Function Widget_Ability_Element_Icon.Widget_Ability_Element_Icon_C.OnDeactivateWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Widget_Ability_Element_Icon(int32_t EntryPoint); // Function Widget_Ability_Element_Icon.Widget_Ability_Element_Icon_C.ExecuteUbergraph_Widget_Ability_Element_Icon // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void DispatchUpdateWidget__DelegateSignature(); // Function Widget_Ability_Element_Icon.Widget_Ability_Element_Icon_C.DispatchUpdateWidget__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

