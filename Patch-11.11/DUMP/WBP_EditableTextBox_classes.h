// WidgetBlueprintGeneratedClass WBP_EditableTextBox.WBP_EditableTextBox_C
// Size: 0x619 (Inherited: 0x3e0)
struct UWBP_EditableTextBox_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWBP_Button_Basic_C* Button_ClearText; // 0x3e8(0x08)
	struct UWBP_Button_EditableTextBox_C* Button_Main; // 0x3f0(0x08)
	struct UEditableTextBox* EditableTextBox; // 0x3f8(0x08)
	struct UHorizontalBox* HorizontalBox_Content; // 0x400(0x08)
	struct UImage* Image_Icon; // 0x408(0x08)
	struct USizeBox* SizeBox_ClearButtonArea; // 0x410(0x08)
	struct USizeBox* SizeBox_Icon; // 0x418(0x08)
	struct USizeBox* SizeBox_PromptArea; // 0x420(0x08)
	struct UAresCommonText* Text_CharacterCount; // 0x428(0x08)
	struct FMulticastInlineDelegate OnTextChanged; // 0x430(0x10)
	struct FMulticastInlineDelegate OnTextCleared; // 0x440(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x450(0x10)
	struct FText Text; // 0x460(0x18)
	struct FText HintText; // 0x478(0x18)
	struct FUnicodeStringLength MaximumTextEntryLimit; // 0x490(0x08)
	struct UCommonButtonStyle* ButtonStyle; // 0x498(0x08)
	struct UCommonTextStyle* TextStyle; // 0x4a0(0x08)
	int32_t MinWidth; // 0x4a8(0x04)
	int32_t MinHeight; // 0x4ac(0x04)
	enum class ECommonInputType CurrentInputType; // 0x4b0(0x01)
	bool bShowSelectInputActionWidget; // 0x4b1(0x01)
	bool bShowSelectCIA; // 0x4b2(0x01)
	bool bShowClearTextPrompt; // 0x4b3(0x01)
	char pad_4B4[0x4]; // 0x4b4(0x04)
	struct FText Select CIA Display Name; // 0x4b8(0x18)
	bool bShowCharacterCount; // 0x4d0(0x01)
	char pad_4D1[0x3]; // 0x4d1(0x03)
	struct FMargin InternalPadding; // 0x4d4(0x10)
	struct FLinearColor ReadOnlyTextColorTint; // 0x4e4(0x10)
	char pad_4F4[0x4]; // 0x4f4(0x04)
	struct UAresCommonTextStyle* CharacterCountTextStyle; // 0x4f8(0x08)
	struct FSlateBrush IconBrush; // 0x500(0xd0)
	struct FVector2D IconSize; // 0x5d0(0x10)
	bool bIsReadOnly; // 0x5e0(0x01)
	char pad_5E1[0x7]; // 0x5e1(0x07)
	double IconToTextPadding; // 0x5e8(0x08)
	double TextToCharacterCountPadding; // 0x5f0(0x08)
	double TextToPromptPadding; // 0x5f8(0x08)
	struct FText Clear CIA Display Name; // 0x600(0x18)
	bool bIsPassword; // 0x618(0x01)

	void SetIsPassword(bool bIsPassword); // Function WBP_EditableTextBox.WBP_EditableTextBox_C.SetIsPassword // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Clear CIA Display Name(struct FText In Select CIA Display Name); // Function WBP_EditableTextBox.WBP_EditableTextBox_C.Set Clear CIA Display Name // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Select CIA Display Name(struct FText In Select CIA Display Name); // Function WBP_EditableTextBox.WBP_EditableTextBox_C.Set Select CIA Display Name // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateCIA Name(int32_t Index, struct FText Name); // Function WBP_EditableTextBox.WBP_EditableTextBox_C.UpdateCIA Name // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateCIA Active(int32_t Index, bool bIsActive); // Function WBP_EditableTextBox.WBP_EditableTextBox_C.UpdateCIA Active // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitializeCIAs(); // Function WBP_EditableTextBox.WBP_EditableTextBox_C.InitializeCIAs // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIsReadOnly(bool bReadOnly); // Function WBP_EditableTextBox.WBP_EditableTextBox_C.SetIsReadOnly // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetTextStyle(struct UCommonTextStyle* InTextStyle); // Function WBP_EditableTextBox.WBP_EditableTextBox_C.SetTextStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetHintText(struct FText InText); // Function WBP_EditableTextBox.WBP_EditableTextBox_C.SetHintText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetInternalPadding(struct FMargin InPadding); // Function WBP_EditableTextBox.WBP_EditableTextBox_C.SetInternalPadding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateCharacterCountText(); // Function WBP_EditableTextBox.WBP_EditableTextBox_C.UpdateCharacterCountText // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateFont(); // Function WBP_EditableTextBox.WBP_EditableTextBox_C.UpdateFont // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePromptVisibility(); // Function WBP_EditableTextBox.WBP_EditableTextBox_C.UpdatePromptVisibility // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleInputMethodChanged(enum class ECommonInputType NewInputType); // Function WBP_EditableTextBox.WBP_EditableTextBox_C.HandleInputMethodChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindOrUnbindCommonInput(bool bDoBind); // Function WBP_EditableTextBox.WBP_EditableTextBox_C.BindOrUnbindCommonInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetFocusableItem(struct UWidget*& Widget); // Function WBP_EditableTextBox.WBP_EditableTextBox_C.GetFocusableItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_EditableTextBox.WBP_EditableTextBox_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void ClearText(); // Function WBP_EditableTextBox.WBP_EditableTextBox_C.ClearText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetText(struct FText InText); // Function WBP_EditableTextBox.WBP_EditableTextBox_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool TextIsEmpty(); // Function WBP_EditableTextBox.WBP_EditableTextBox_C.TextIsEmpty // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void GetText(struct FText& Text); // Function WBP_EditableTextBox.WBP_EditableTextBox_C.GetText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void Construct(); // Function WBP_EditableTextBox.WBP_EditableTextBox_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function WBP_EditableTextBox.WBP_EditableTextBox_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__SocialEditableTextBox_Console_EditableTextBox_NameInput_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // Function WBP_EditableTextBox.WBP_EditableTextBox_C.BndEvt__SocialEditableTextBox_Console_EditableTextBox_NameInput_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__SocialEditableTextBox_Console_EditableTextBox_NameInput_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // Function WBP_EditableTextBox.WBP_EditableTextBox_C.BndEvt__SocialEditableTextBox_Console_EditableTextBox_NameInput_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_AresEditableTextBox_Console_WBP_Button_AresEditableTextBox_Console_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_EditableTextBox.WBP_EditableTextBox_C.BndEvt__WBP_Panel_AresEditableTextBox_Console_WBP_Button_AresEditableTextBox_Console_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_AresEditableTextBox_Console_WBP_Button_AresEditableTextBox_Console_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_EditableTextBox.WBP_EditableTextBox_C.BndEvt__WBP_Panel_AresEditableTextBox_Console_WBP_Button_AresEditableTextBox_Console_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_EditableTextBox_WBP_Button_ClearText_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_EditableTextBox.WBP_EditableTextBox_C.BndEvt__WBP_EditableTextBox_WBP_Button_ClearText_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void Handle Clear Text CIA Callback(struct FName ActionName); // Function WBP_EditableTextBox.WBP_EditableTextBox_C.Handle Clear Text CIA Callback // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_EditableTextBox_Button_Main_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_EditableTextBox.WBP_EditableTextBox_C.BndEvt__WBP_EditableTextBox_Button_Main_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_EditableTextBox_Button_Main_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_EditableTextBox.WBP_EditableTextBox_C.BndEvt__WBP_EditableTextBox_Button_Main_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_EditableTextBox.WBP_EditableTextBox_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void FocusEditableTextBox(); // Function WBP_EditableTextBox.WBP_EditableTextBox_C.FocusEditableTextBox // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UnfocusEditableTextBox(); // Function WBP_EditableTextBox.WBP_EditableTextBox_C.UnfocusEditableTextBox // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_EditableTextBox(int32_t EntryPoint); // Function WBP_EditableTextBox.WBP_EditableTextBox_C.ExecuteUbergraph_WBP_EditableTextBox // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnTextCleared__DelegateSignature(); // Function WBP_EditableTextBox.WBP_EditableTextBox_C.OnTextCleared__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTextCommitted__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function WBP_EditableTextBox.WBP_EditableTextBox_C.OnTextCommitted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTextChanged__DelegateSignature(struct FText Text); // Function WBP_EditableTextBox.WBP_EditableTextBox_C.OnTextChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

