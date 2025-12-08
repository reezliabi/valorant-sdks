// BlueprintGeneratedClass Ability_Base.Ability_Base_C
// Size: 0x11fa (Inherited: 0x10e0)
struct AAbility_Base_C : AAresEquippable {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10e0(0x08)
	struct UAbilityTrackingComponent* AbilityTrackingComponent; // 0x10e8(0x08)
	struct URespondToEventStateComponent* RespondToEventState; // 0x10f0(0x08)
	struct UCharacterAbilityStatisticsComponent_C* CharacterAbilityStatisticsComponent; // 0x10f8(0x08)
	struct FEmbeddedEffectInfo FXC_EquippedSettings; // 0x1100(0x48)
	struct FEffectID FXC_Equipped_ID; // 0x1148(0x20)
	struct UCharacterAbilityWidget* AbilityHUDWidgetClass; // 0x1168(0x08)
	struct UCharacterAbilityWidget* AbilityHUDWidget; // 0x1170(0x08)
	struct FMulticastInlineDelegate DispatchUpdateAbilityWidget; // 0x1178(0x10)
	bool OnCooldown; // 0x1188(0x01)
	char pad_1189[0x7]; // 0x1189(0x07)
	struct FMulticastInlineDelegate PlayFrontIconAnim; // 0x1190(0x10)
	struct FMulticastInlineDelegate PlayBackIconAnim; // 0x11a0(0x10)
	bool PlayEquipAnimation; // 0x11b0(0x01)
	char pad_11B1[0x3]; // 0x11b1(0x03)
	int32_t CurrentCharge; // 0x11b4(0x04)
	bool PlayResourceConsumeAnimation; // 0x11b8(0x01)
	char pad_11B9[0x7]; // 0x11b9(0x07)
	struct FMulticastInlineDelegate PlayRechargeAnim; // 0x11c0(0x10)
	bool OutOfChargesOnCooldown; // 0x11d0(0x01)
	char pad_11D1[0x7]; // 0x11d1(0x07)
	struct FMulticastInlineDelegate TimerStarted; // 0x11d8(0x10)
	struct FMulticastInlineDelegate AbilityHUD_Setup; // 0x11e8(0x10)
	bool DisabledFeedbackCooldown; // 0x11f8(0x01)
	bool ShowFocusStateIconWhenEquipped; // 0x11f9(0x01)

	void GetCooldownStatus(bool& On Cooldown, double& Time Remaining); // Function Ability_Base.Ability_Base_C.GetCooldownStatus // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct TSet<struct FSoftObjectPath> BP_GetPreloadAssetPaths(struct UGameModeDataAsset* GameModeDataAsset); // Function Ability_Base.Ability_Base_C.BP_GetPreloadAssetPaths // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DestroyCooldownComponents(struct TSoftClassPtr<UObject> IgnoreClass); // Function Ability_Base.Ability_Base_C.DestroyCooldownComponents // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayDisabledVO(enum class EAresEquippableInput Button, enum class EAresEquippableInputAction InputType); // Function Ability_Base.Ability_Base_C.PlayDisabledVO // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleAbilityFailVO(enum class EEquippableRejectInputReason Selection); // Function Ability_Base.Ability_Base_C.HandleAbilityFailVO // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetVisibilityUpdatesEnabled(bool Enable); // Function Ability_Base.Ability_Base_C.SetVisibilityUpdatesEnabled // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StopEquippedEffect(); // Function Ability_Base.Ability_Base_C.StopEquippedEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShouldPlayResourceAnim(bool& ShouldPlayAnim); // Function Ability_Base.Ability_Base_C.ShouldPlayResourceAnim // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayResourceBasedIconAnims(); // Function Ability_Base.Ability_Base_C.PlayResourceBasedIconAnims // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetAbilityHUD_Widget(struct UCharacterAbilityWidget*& AbilityHUDWidget); // Function Ability_Base.Ability_Base_C.GetAbilityHUD_Widget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetAbilityHUD_Widget(struct UCharacterAbilityWidget* AbilityHUDWidget); // Function Ability_Base.Ability_Base_C.SetAbilityHUD_Widget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ClientItemEquipped(); // Function Ability_Base.Ability_Base_C.ClientItemEquipped // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ClientItemUnEquipped(); // Function Ability_Base.Ability_Base_C.ClientItemUnEquipped // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function Ability_Base.Ability_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void OnResourceChanged_Event_1(struct UResourceComponent* ResourceComponent); // Function Ability_Base.Ability_Base_C.OnResourceChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIgnoredResponseOutOfGameplay_Event_1(); // Function Ability_Base.Ability_Base_C.OnIgnoredResponseOutOfGameplay_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnNumUltimatePointsChanged_Event_1(int32_t NewValue, bool IsUltNewlyReady); // Function Ability_Base.Ability_Base_C.OnNumUltimatePointsChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ItemOnSetOwner_Event_1(struct AAresItem* Item, struct AActor* PrevOwner, struct AActor* NewOwner); // Function Ability_Base.Ability_Base_C.ItemOnSetOwner_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRejectedInput_Event_1(struct AAresEquippable* Equippable, enum class EEquippableRejectInputReason Reason); // Function Ability_Base.Ability_Base_C.OnRejectedInput_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void FailedDispatcher_Event_1(); // Function Ability_Base.Ability_Base_C.FailedDispatcher_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthOnEquipped(); // Function Ability_Base.Ability_Base_C.AuthOnEquipped // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void AuthOnUnEquipped(); // Function Ability_Base.Ability_Base_C.AuthOnUnEquipped // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void OnGameFeatureToggleChangedNotifyBlueprint_Event_1(enum class EGameFeatureToggleName GameFeatureToggleName, bool bEnabled); // Function Ability_Base.Ability_Base_C.OnGameFeatureToggleChangedNotifyBlueprint_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TakeFailOffCooldown(); // Function Ability_Base.Ability_Base_C.TakeFailOffCooldown // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnStateHandleInputAction_Event_1(struct UScriptStateComponent* State, enum class EAresEquippableInput Input, enum class EAresEquippableInputAction InputAction, float FrameDeltaTimeSeconds); // Function Ability_Base.Ability_Base_C.OnStateHandleInputAction_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RemoveDisabledVOCooldown(); // Function Ability_Base.Ability_Base_C.RemoveDisabledVOCooldown // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAbilityUsed_Event_1(struct AAresEquippable* Equippable); // Function Ability_Base.Ability_Base_C.OnAbilityUsed_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Event Inspect(); // Function Ability_Base.Ability_Base_C.Event Inspect // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Ability_Base(int32_t EntryPoint); // Function Ability_Base.Ability_Base_C.ExecuteUbergraph_Ability_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void AbilityHUD_Setup__DelegateSignature(); // Function Ability_Base.Ability_Base_C.AbilityHUD_Setup__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TimerStarted__DelegateSignature(struct FStruct_Ability_Timer_Info TimerInfo); // Function Ability_Base.Ability_Base_C.TimerStarted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayRechargeAnim__DelegateSignature(); // Function Ability_Base.Ability_Base_C.PlayRechargeAnim__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayBackIconAnim__DelegateSignature(); // Function Ability_Base.Ability_Base_C.PlayBackIconAnim__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayFrontIconAnim__DelegateSignature(); // Function Ability_Base.Ability_Base_C.PlayFrontIconAnim__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DispatchUpdateAbilityWidget__DelegateSignature(); // Function Ability_Base.Ability_Base_C.DispatchUpdateAbilityWidget__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

