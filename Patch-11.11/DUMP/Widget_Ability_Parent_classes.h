// WidgetBlueprintGeneratedClass Widget_Ability_Parent.Widget_Ability_Parent_C
// Size: 0x4b8 (Inherited: 0x3b0)
struct UWidget_Ability_Parent_C : UCharacterAbilityWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b0(0x08)
	bool HideInputHolder; // 0x3b8(0x01)
	char pad_3B9[0x7]; // 0x3b9(0x07)
	double FrontIconUpdateSpeed; // 0x3c0(0x08)
	struct FTimerHandle FrontIconTimer; // 0x3c8(0x08)
	double FrontIconStartTime; // 0x3d0(0x08)
	double BackIconTimeUpdateSpeed; // 0x3d8(0x08)
	struct FTimerHandle BackIconTimer; // 0x3e0(0x08)
	double BackIconStartTime; // 0x3e8(0x08)
	double RechargeIconUpdateSpeed; // 0x3f0(0x08)
	struct FTimerHandle RechargeIconTimer; // 0x3f8(0x08)
	double RechargeIconStartTime; // 0x400(0x08)
	double BackIconDuration; // 0x408(0x08)
	double FrontIconDuration; // 0x410(0x08)
	double RechargeIconDuration; // 0x418(0x08)
	struct UVerticalBox* Cached_VerticalTimerBox; // 0x420(0x08)
	struct UImage* Cached_TwoHolder; // 0x428(0x08)
	struct UImage* Cached_ThreeHolder; // 0x430(0x08)
	struct UImage* Cached_FrontAnimIcon; // 0x438(0x08)
	struct UImage* Cached_BackAnimIcon; // 0x440(0x08)
	struct UImage* Cached_RechargeAnimIcon; // 0x448(0x08)
	struct UOverlay* Cached_MainOverlay; // 0x450(0x08)
	struct UGridPanel* Cached_InputPromptGrid; // 0x458(0x08)
	struct TMap<struct TSoftObjectPtr<UWidget>, struct UGridSlot*> InputPromptMap; // 0x460(0x50)
	struct UWBP_Ability_FocusState_C* Cached_AbilityFocusState; // 0x4b0(0x08)

	void HasInputPrompt(bool& Has Input Prompt); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.HasInputPrompt // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAbilityUnequipped(); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.OnAbilityUnequipped // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAbilityEquipped(); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.OnAbilityEquipped // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddSortedInputPrompt(struct UUserWidget* NewInputPrompt); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.AddSortedInputPrompt // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ActivateChildren(struct UPanelWidget* InBasePanelWidget); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.ActivateChildren // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CacheWidgetElements(struct UVerticalBox* VerticalTimerBox, struct UImage* TwoHolder, struct UImage* ThreeHolder, struct UImage* FrontAnimIcon, struct UImage* BackAnimIcon, struct UImage* RechargeAnimIcon, struct UOverlay* MainOverlay, struct UGridPanel* InputPromptGrid, struct UWBP_Ability_FocusState_C* AbilityFocusState); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.CacheWidgetElements // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StartRechargeAnimEffect(); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.StartRechargeAnimEffect // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StartBackAnimEffect(); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.StartBackAnimEffect // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Start Front Anim Effect(); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.Start Front Anim Effect // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateHolderVisuals(); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.UpdateHolderVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SortAndAddTimer(struct UWidget* Content); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.SortAndAddTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateIconAnimation(double StartTime, double Duration, struct FTimerHandle TimerHandle, struct UImage* Icon); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.UpdateIconAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SortActiveInputs(struct TArray<int32_t>& SortedInputs); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.SortActiveInputs // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetNextBestInput(struct TArray<struct UGridSlot*>& Array, struct UWidget_Ability_Element_InputPrompt_C*& CurrentBestInput); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.GetNextBestInput // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetupChildren(struct UPanelWidget* InBasePanelWidget); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.SetupChildren // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddTimer(struct UUserWidget* InTimerWidget); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.AddTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnStartWidget(); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.OnStartWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void DispatchUpdateAbilityWidget_Event_1(); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.DispatchUpdateAbilityWidget_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddInputPrompt(struct UUserWidget* InInputPromptWidget); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.AddInputPrompt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InputPromptRemoved(); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.InputPromptRemoved // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateFrontIcon(); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.UpdateFrontIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayBackIconAnim(); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.PlayBackIconAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayFrontIconAnim(); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.PlayFrontIconAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayRechargeAnim(); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.PlayRechargeAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateBackIcon(); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.UpdateBackIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateRechargeIcon(); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.UpdateRechargeIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetInputPromptVisibility(enum class ESlateVisibility Visible); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.SetInputPromptVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnActivateWidget(); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.OnActivateWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void OnStopWidget(); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.OnStopWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void OnDeactivateWidget(); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.OnDeactivateWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void Hide Widget Overrides Updated(); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.Hide Widget Overrides Updated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Widget_Ability_Parent(int32_t EntryPoint); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.ExecuteUbergraph_Widget_Ability_Parent // (Final|UbergraphFunction) // @ game+0x19be2f0
};

