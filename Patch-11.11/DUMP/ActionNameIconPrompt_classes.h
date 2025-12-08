// WidgetBlueprintGeneratedClass ActionNameIconPrompt.ActionNameIconPrompt_C
// Size: 0x75b (Inherited: 0x391)
struct UActionNameIconPrompt_C : UInputIconController_C {
	char pad_391[0x7]; // 0x391(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x398(0x08)
	struct FName ActionName; // 0x3a0(0x0c)
	enum class EIconPromptType PC Button Type; // 0x3ac(0x01)
	char pad_3AD[0x3]; // 0x3ad(0x03)
	struct FTextBlockStyle TextStyle; // 0x3b0(0x340)
	struct UTextBlock* TextLabel_ref; // 0x6f0(0x08)
	struct UInputChordWidgetBase_C* InputChord_ref; // 0x6f8(0x08)
	struct UCoordinatedHUDElement* KeyboardBtn_ref; // 0x700(0x08)
	double TotalHoldTime; // 0x708(0x08)
	enum class EActionBindSetAxisDirection AxisDirection; // 0x710(0x01)
	char pad_711[0x7]; // 0x711(0x07)
	double InputHeldTime; // 0x718(0x08)
	struct UWidget* ContainerObjectForInterface; // 0x720(0x08)
	enum class EActionChordTapHoldType ConstructedActionTapHoldType; // 0x728(0x01)
	char pad_729[0x7]; // 0x729(0x07)
	struct FMulticastInlineDelegate ActionHoldTypeChanged; // 0x730(0x10)
	struct FName PrevActionName; // 0x740(0x0c)
	char pad_74C[0x4]; // 0x74c(0x04)
	double ManualHoldTime; // 0x750(0x08)
	bool IsConstructed; // 0x758(0x01)
	bool AttemptedFirstConstruction; // 0x759(0x01)
	bool Force Display Hold Text; // 0x75a(0x01)

	void DoesActionNameExist(bool& ActionNameExists, enum class EActionBindSetAxisDirection& FoundDirection); // Function ActionNameIconPrompt.ActionNameIconPrompt_C.DoesActionNameExist // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void IsActionInputAllowed(bool& bInputAllowed); // Function ActionNameIconPrompt.ActionNameIconPrompt_C.IsActionInputAllowed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetManualHoldTime(double Manual Hold Time); // Function ActionNameIconPrompt.ActionNameIconPrompt_C.SetManualHoldTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetActionNameIconPromptInterface(struct UUserWidget* InterfaceWidget); // Function ActionNameIconPrompt.ActionNameIconPrompt_C.SetActionNameIconPromptInterface // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsInputPromptHold(bool& IsHold); // Function ActionNameIconPrompt.ActionNameIconPrompt_C.IsInputPromptHold // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetupInputListeners(); // Function ActionNameIconPrompt.ActionNameIconPrompt_C.SetupInputListeners // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetTapHoldTypeFromActionName(struct FName ActionName, enum class EActionChordTapHoldType& TapHoldType); // Function ActionNameIconPrompt.ActionNameIconPrompt_C.GetTapHoldTypeFromActionName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateActionTapHoldType(enum class EActionChordTapHoldType New Tap Hold Type); // Function ActionNameIconPrompt.ActionNameIconPrompt_C.UpdateActionTapHoldType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindInputEvents(bool Bind); // Function ActionNameIconPrompt.ActionNameIconPrompt_C.BindInputEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateHoldTime(double Updated Hold Time); // Function ActionNameIconPrompt.ActionNameIconPrompt_C.UpdateHoldTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetTotalHoldTime(double NewHoldTime); // Function ActionNameIconPrompt.ActionNameIconPrompt_C.SetTotalHoldTime // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetTextColorAndOpacity(struct FSlateColor ColorOpacity); // Function ActionNameIconPrompt.ActionNameIconPrompt_C.SetTextColorAndOpacity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OverrideText(struct FText TextToOverride); // Function ActionNameIconPrompt.ActionNameIconPrompt_C.OverrideText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateActionName(struct FName NewActionName, bool UseNegativeDirectionForAxis); // Function ActionNameIconPrompt.ActionNameIconPrompt_C.UpdateActionName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function ActionNameIconPrompt.ActionNameIconPrompt_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function ActionNameIconPrompt.ActionNameIconPrompt_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void EventOnIconChange(); // Function ActionNameIconPrompt.ActionNameIconPrompt_C.EventOnIconChange // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function ActionNameIconPrompt.ActionNameIconPrompt_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnInputPressedEvent(); // Function ActionNameIconPrompt.ActionNameIconPrompt_C.OnInputPressedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnInputReleasedEvent(); // Function ActionNameIconPrompt.ActionNameIconPrompt_C.OnInputReleasedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function ActionNameIconPrompt.ActionNameIconPrompt_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnHoldTapTypeChanged(enum class EActionChordTapHoldType NewHoldTapType); // Function ActionNameIconPrompt.ActionNameIconPrompt_C.OnHoldTapTypeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ActionBindSetChanged(struct UActionBindSet* ActionBindSet, int32_t BindIndex, enum class EActionBindChangeSource ChangeSource, struct FName Character); // Function ActionNameIconPrompt.ActionNameIconPrompt_C.ActionBindSetChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SettingUpPromptInfo(); // Function ActionNameIconPrompt.ActionNameIconPrompt_C.SettingUpPromptInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Try to Construct Again(); // Function ActionNameIconPrompt.ActionNameIconPrompt_C.Try to Construct Again // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_ActionNameIconPrompt(int32_t EntryPoint); // Function ActionNameIconPrompt.ActionNameIconPrompt_C.ExecuteUbergraph_ActionNameIconPrompt // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void ActionHoldTypeChanged__DelegateSignature(enum class EActionChordTapHoldType NewHoldTapType); // Function ActionNameIconPrompt.ActionNameIconPrompt_C.ActionHoldTypeChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

