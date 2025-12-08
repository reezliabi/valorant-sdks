// WidgetBlueprintGeneratedClass WBP_Input_TextBox.WBP_Input_TextBox_C
// Size: 0x598 (Inherited: 0x3e0)
struct UWBP_Input_TextBox_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAresCommonText* CharacterLimit; // 0x3e8(0x08)
	struct UButton* ClearSearchButton_PC; // 0x3f0(0x08)
	struct UEditableText* EditableTextBox; // 0x3f8(0x08)
	struct UImage* Image_border; // 0x400(0x08)
	struct UAresCommonActionWidget* InputActionWidget; // 0x408(0x08)
	struct UWBP_Button_Invisible_C* InvisibleEventButton; // 0x410(0x08)
	struct UHorizontalBox* MainContentBox; // 0x418(0x08)
	struct UImage* OptionalIcon; // 0x420(0x08)
	struct FText HintText; // 0x428(0x18)
	int32_t ElementPadding; // 0x440(0x04)
	char pad_444[0x4]; // 0x444(0x04)
	struct FDataTableRowHandle Triggering Input Action; // 0x448(0x18)
	struct UTexture2D* Image; // 0x460(0x08)
	struct UMaterialInterface* Image Material; // 0x468(0x08)
	bool IsImageValid; // 0x470(0x01)
	char pad_471[0x7]; // 0x471(0x07)
	struct FMulticastInlineDelegate OnTextChanged; // 0x478(0x10)
	bool IsTriggerActionValid; // 0x488(0x01)
	enum class ECommonInputType LastInputType; // 0x489(0x01)
	char pad_48A[0x6]; // 0x48a(0x06)
	struct FMulticastInlineDelegate OnTextCleared; // 0x490(0x10)
	int32_t MaxLimit; // 0x4a0(0x04)
	char pad_4A4[0x4]; // 0x4a4(0x04)
	struct FText LastEditedText; // 0x4a8(0x18)
	struct FMulticastInlineDelegate OnTextCommited; // 0x4c0(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x4d0(0x10)
	struct FMulticastInlineDelegate OnFocused; // 0x4e0(0x10)
	struct UMaterialInterface* BorderActiveMaterial; // 0x4f0(0x08)
	struct UMaterialInterface* BorderDefaultMaterial; // 0x4f8(0x08)
	struct FText EditActionName; // 0x500(0x18)
	bool ShowActionInActionBar; // 0x518(0x01)
	char pad_519[0x7]; // 0x519(0x07)
	struct FText ClearActionName; // 0x520(0x18)
	int32_t MinWidth; // 0x538(0x04)
	int32_t MinHeight; // 0x53c(0x04)
	bool ShowClearAction; // 0x540(0x01)
	char pad_541[0x7]; // 0x541(0x07)
	struct FAresConditionalInputAction EditAction; // 0x548(0x28)
	struct FAresConditionalInputAction ClearAction; // 0x570(0x28)

	void OnClearText(struct FName ActionName); // Function WBP_Input_TextBox.WBP_Input_TextBox_C.OnClearText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ClearText(); // Function WBP_Input_TextBox.WBP_Input_TextBox_C.ClearText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetupInputActions(); // Function WBP_Input_TextBox.WBP_Input_TextBox_C.SetupInputActions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEditableTextChanged(struct FText LastEditedText); // Function WBP_Input_TextBox.WBP_Input_TextBox_C.OnEditableTextChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PostTextChanged(); // Function WBP_Input_TextBox.WBP_Input_TextBox_C.PostTextChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetupTextBox(); // Function WBP_Input_TextBox.WBP_Input_TextBox_C.SetupTextBox // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateCharacterLimit(); // Function WBP_Input_TextBox.WBP_Input_TextBox_C.UpdateCharacterLimit // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateActionImage(); // Function WBP_Input_TextBox.WBP_Input_TextBox_C.UpdateActionImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateClearButton(); // Function WBP_Input_TextBox.WBP_Input_TextBox_C.UpdateClearButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetupInputChanged(bool Unbind); // Function WBP_Input_TextBox.WBP_Input_TextBox_C.SetupInputChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnInputMethodChanged(enum class ECommonInputType InputType); // Function WBP_Input_TextBox.WBP_Input_TextBox_C.OnInputMethodChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetupPadding(); // Function WBP_Input_TextBox.WBP_Input_TextBox_C.SetupPadding // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetupButtonAndAction(); // Function WBP_Input_TextBox.WBP_Input_TextBox_C.SetupButtonAndAction // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetupIcon(); // Function WBP_Input_TextBox.WBP_Input_TextBox_C.SetupIcon // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_Input_TextBox.WBP_Input_TextBox_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function WBP_Input_TextBox.WBP_Input_TextBox_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_Input_TextBox.WBP_Input_TextBox_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function WBP_Input_TextBox.WBP_Input_TextBox_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_InputTextBox_EditableTextBox_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature(struct FText& Text); // Function WBP_Input_TextBox.WBP_Input_TextBox_C.BndEvt__WBP_InputTextBox_EditableTextBox_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_InputTextBox_EditableTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // Function WBP_Input_TextBox.WBP_Input_TextBox_C.BndEvt__WBP_InputTextBox_EditableTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Input_TextBox_InvisibleEventButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Input_TextBox.WBP_Input_TextBox_C.BndEvt__WBP_Input_TextBox_InvisibleEventButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function WBP_Input_TextBox.WBP_Input_TextBox_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Input_TextBox_ClearSearchButton_PC_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Input_TextBox.WBP_Input_TextBox_C.BndEvt__WBP_Input_TextBox_ClearSearchButton_PC_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Input_TextBox(int32_t EntryPoint); // Function WBP_Input_TextBox.WBP_Input_TextBox_C.ExecuteUbergraph_WBP_Input_TextBox // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnFocused__DelegateSignature(); // Function WBP_Input_TextBox.WBP_Input_TextBox_C.OnFocused__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnHovered__DelegateSignature(); // Function WBP_Input_TextBox.WBP_Input_TextBox_C.OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTextCommited__DelegateSignature(struct FText Text); // Function WBP_Input_TextBox.WBP_Input_TextBox_C.OnTextCommited__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTextCleared__DelegateSignature(); // Function WBP_Input_TextBox.WBP_Input_TextBox_C.OnTextCleared__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTextChanged__DelegateSignature(struct FText Text); // Function WBP_Input_TextBox.WBP_Input_TextBox_C.OnTextChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

