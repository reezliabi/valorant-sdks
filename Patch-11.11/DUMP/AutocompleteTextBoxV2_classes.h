// WidgetBlueprintGeneratedClass AutocompleteTextBoxV2.AutocompleteTextBoxV2_C
// Size: 0x479 (Inherited: 0x378)
struct UAutocompleteTextBoxV2_C : UAresAutocompleteTextBox {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	struct UMultiLineEditableText* EditableTextBox; // 0x380(0x08)
	struct UGridPanel* EditableWhisperTargetPanel; // 0x388(0x08)
	struct UMenuAnchor* SuggestionsAnchor; // 0x390(0x08)
	struct UWidgetSwitcher* TextBoxSwitcher; // 0x398(0x08)
	struct UTextBlock* WhisperHintText; // 0x3a0(0x08)
	struct UEditableTextBox* WhisperTargetTextBox; // 0x3a8(0x08)
	int32_t CurrentSuggestionIndex; // 0x3b0(0x04)
	char pad_3B4[0x4]; // 0x3b4(0x04)
	struct UAutocompleteSuggestionsScrollBox_C* SuggestionContainer; // 0x3b8(0x08)
	struct FMulticastInlineDelegate OnTextChange; // 0x3c0(0x10)
	struct FMulticastInlineDelegate OnFocusChange; // 0x3d0(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x3e0(0x10)
	struct FMulticastInlineDelegate OnChatCommand; // 0x3f0(0x10)
	struct TMap<struct FString, struct FText> ChatCommands; // 0x400(0x50)
	bool WhisperTargetActive; // 0x450(0x01)
	char pad_451[0x3]; // 0x451(0x03)
	int32_t MaxAllowedCharacters; // 0x454(0x04)
	struct FMulticastInlineDelegate OnWhisperNameCommitted; // 0x458(0x10)
	struct FMulticastInlineDelegate OnEscapePressed; // 0x468(0x10)
	bool ShouldEnableChatInput; // 0x478(0x01)

	void UpdateWhisperTextForCurrentCulture(); // Function AutocompleteTextBoxV2.AutocompleteTextBoxV2_C.UpdateWhisperTextForCurrentCulture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSuggestionHovered(struct FString Suggestion); // Function AutocompleteTextBoxV2.AutocompleteTextBoxV2_C.OnSuggestionHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CommitWhisperName(); // Function AutocompleteTextBoxV2.AutocompleteTextBoxV2_C.CommitWhisperName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CheckForChatCommand(struct FText Text); // Function AutocompleteTextBoxV2.AutocompleteTextBoxV2_C.CheckForChatCommand // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ToggleWhisperTargetField(bool ShowTargetField, struct FText WhisperTargetName); // Function AutocompleteTextBoxV2.AutocompleteTextBoxV2_C.ToggleWhisperTargetField // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetCurrentText(struct FText& Text); // Function AutocompleteTextBoxV2.AutocompleteTextBoxV2_C.GetCurrentText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void ToggleFocus(bool ShouldFocus); // Function AutocompleteTextBoxV2.AutocompleteTextBoxV2_C.ToggleFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateSuggestionWidgets(); // Function AutocompleteTextBoxV2.AutocompleteTextBoxV2_C.UpdateSuggestionWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSuggestionClicked(struct FString Suggestion); // Function AutocompleteTextBoxV2.AutocompleteTextBoxV2_C.OnSuggestionClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTextChanged(struct FText New Text); // Function AutocompleteTextBoxV2.AutocompleteTextBoxV2_C.OnTextChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HighlightSuggestionIndex(int32_t Index); // Function AutocompleteTextBoxV2.AutocompleteTextBoxV2_C.HighlightSuggestionIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWidget* OnGetMenuContent_1(); // Function AutocompleteTextBoxV2.AutocompleteTextBoxV2_C.OnGetMenuContent_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function AutocompleteTextBoxV2.AutocompleteTextBoxV2_C.OnPreviewKeyDown // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function AutocompleteTextBoxV2.AutocompleteTextBoxV2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function AutocompleteTextBoxV2.AutocompleteTextBoxV2_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function AutocompleteTextBoxV2.AutocompleteTextBoxV2_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function AutocompleteTextBoxV2.AutocompleteTextBoxV2_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__EditableTextBox_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // Function AutocompleteTextBoxV2.AutocompleteTextBoxV2_C.BndEvt__EditableTextBox_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__EditableTextBox_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextChangedEvent__DelegateSignature(struct FText& Text); // Function AutocompleteTextBoxV2.AutocompleteTextBoxV2_C.BndEvt__EditableTextBox_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnRawTextChanged(struct FText& Text); // Function AutocompleteTextBoxV2.AutocompleteTextBoxV2_C.OnRawTextChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WhisperTargetTextBox_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // Function AutocompleteTextBoxV2.AutocompleteTextBoxV2_C.BndEvt__WhisperTargetTextBox_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WhisperTargetTextBox_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // Function AutocompleteTextBoxV2.AutocompleteTextBoxV2_C.BndEvt__WhisperTargetTextBox_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_AutocompleteTextBoxV2(int32_t EntryPoint); // Function AutocompleteTextBoxV2.AutocompleteTextBoxV2_C.ExecuteUbergraph_AutocompleteTextBoxV2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnEscapePressed__DelegateSignature(); // Function AutocompleteTextBoxV2.AutocompleteTextBoxV2_C.OnEscapePressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnWhisperNameCommitted__DelegateSignature(struct FText WhisperTargetName); // Function AutocompleteTextBoxV2.AutocompleteTextBoxV2_C.OnWhisperNameCommitted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnChatCommand__DelegateSignature(struct FString ChatCommand); // Function AutocompleteTextBoxV2.AutocompleteTextBoxV2_C.OnChatCommand__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTextCommitted__DelegateSignature(struct FText Text); // Function AutocompleteTextBoxV2.AutocompleteTextBoxV2_C.OnTextCommitted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnFocusChange__DelegateSignature(bool IsFocused); // Function AutocompleteTextBoxV2.AutocompleteTextBoxV2_C.OnFocusChange__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTextChange__DelegateSignature(struct FText Text); // Function AutocompleteTextBoxV2.AutocompleteTextBoxV2_C.OnTextChange__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

