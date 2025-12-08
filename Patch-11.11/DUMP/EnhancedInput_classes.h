// Class EnhancedInput.EnhancedPlayerMappableKeyProfile
// Size: 0xa8 (Inherited: 0x30)
struct UEnhancedPlayerMappableKeyProfile : UObject {
	struct FGameplayTag ProfileIdentifier; // 0x30(0x0c)
	struct FPlatformUserId OwningUserId; // 0x3c(0x04)
	struct FText DisplayName; // 0x40(0x18)
	struct TMap<struct FName, struct FKeyMappingRow> PlayerMappedKeys; // 0x58(0x50)

	struct FString ToString(); // Function EnhancedInput.EnhancedPlayerMappableKeyProfile.ToString // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4de3170
	void SetDisplayName(struct FText& NewDisplayName); // Function EnhancedInput.EnhancedPlayerMappableKeyProfile.SetDisplayName // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4de3440
	void ResetToDefault(); // Function EnhancedInput.EnhancedPlayerMappableKeyProfile.ResetToDefault // (Native|Public|BlueprintCallable) // @ game+0x3dc5650
	void ResetMappingToDefault(struct FName InMappingName); // Function EnhancedInput.EnhancedPlayerMappableKeyProfile.ResetMappingToDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x4de3220
	int32_t QueryPlayerMappedKeys(struct FPlayerMappableKeyQueryOptions& OPTIONS, struct TArray<struct FKey>& OutKeys); // Function EnhancedInput.EnhancedPlayerMappableKeyProfile.QueryPlayerMappedKeys // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4de2cc0
	void K2_FindKeyMapping(struct FPlayerKeyMapping& OutKeyMapping, struct FMapPlayerKeyArgs& InArgs); // Function EnhancedInput.EnhancedPlayerMappableKeyProfile.K2_FindKeyMapping // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4de27e0
	struct FGameplayTag GetProfileIdentifer(); // Function EnhancedInput.EnhancedPlayerMappableKeyProfile.GetProfileIdentifer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4de3410
	struct FText GetProfileDisplayName(); // Function EnhancedInput.EnhancedPlayerMappableKeyProfile.GetProfileDisplayName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4de33e0
	struct TMap<struct FName, struct FKeyMappingRow> GetPlayerMappingRows(); // Function EnhancedInput.EnhancedPlayerMappableKeyProfile.GetPlayerMappingRows // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4de3330
	int32_t GetMappingNamesForKey(struct FKey& InKey, struct TArray<struct FName>& OutMappingNames); // Function EnhancedInput.EnhancedPlayerMappableKeyProfile.GetMappingNamesForKey // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4de2a60
	int32_t GetMappedKeysInRow(struct FName MappingName, struct TArray<struct FKey>& OutKeys); // Function EnhancedInput.EnhancedPlayerMappableKeyProfile.GetMappedKeysInRow // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4de2f30
	void DumpProfileToLog(); // Function EnhancedInput.EnhancedPlayerMappableKeyProfile.DumpProfileToLog // (Native|Public|BlueprintCallable|Const) // @ game+0x3a67e00
	bool DoesMappingPassQueryOptions(struct FPlayerKeyMapping& PlayerMapping, struct FPlayerMappableKeyQueryOptions& OPTIONS); // Function EnhancedInput.EnhancedPlayerMappableKeyProfile.DoesMappingPassQueryOptions // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4de2530
};

// Class EnhancedInput.EnhancedInputUserSettings
// Size: 0x130 (Inherited: 0x30)
struct UEnhancedInputUserSettings : USaveGame {
	char pad_30[0x8]; // 0x30(0x08)
	struct FMulticastInlineDelegate OnSettingsChanged; // 0x38(0x10)
	struct FMulticastInlineDelegate OnSettingsApplied; // 0x48(0x10)
	char pad_58[0x20]; // 0x58(0x20)
	struct FGameplayTag CurrentProfileIdentifier; // 0x78(0x0c)
	char pad_84[0x4]; // 0x84(0x04)
	struct TMap<struct FGameplayTag, struct UEnhancedPlayerMappableKeyProfile*> SavedKeyProfiles; // 0x88(0x50)
	struct TWeakObjectPtr<struct ULocalPlayer> OwningLocalPlayer; // 0xd8(0x08)
	struct TSet<struct UInputMappingContext*> RegisteredMappingContexts; // 0xe0(0x50)

	bool UnregisterInputMappingContexts(struct TSet<struct UInputMappingContext*>& MappingContexts); // Function EnhancedInput.EnhancedInputUserSettings.UnregisterInputMappingContexts // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4de3ea0
	bool UnregisterInputMappingContext(struct UInputMappingContext* IMC); // Function EnhancedInput.EnhancedInputUserSettings.UnregisterInputMappingContext // (Native|Public|BlueprintCallable) // @ game+0x4de40b0
	void UnMapPlayerKey(struct FMapPlayerKeyArgs& InArgs, struct FGameplayTagContainer& FailureReason); // Function EnhancedInput.EnhancedInputUserSettings.UnMapPlayerKey // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4de4ed0
	bool SetKeyProfile(struct FGameplayTag& InProfileId); // Function EnhancedInput.EnhancedInputUserSettings.SetKeyProfile // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4de47b0
	void SaveSettings(); // Function EnhancedInput.EnhancedInputUserSettings.SaveSettings // (Native|Public|BlueprintCallable) // @ game+0x272ab80
	void ResetKeyProfileToDefault(struct FGameplayTag& ProfileId, struct FGameplayTagContainer& FailureReason); // Function EnhancedInput.EnhancedInputUserSettings.ResetKeyProfileToDefault // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4de49f0
	void ResetAllPlayerKeysInRow(struct FMapPlayerKeyArgs& InArgs, struct FGameplayTagContainer& FailureReason); // Function EnhancedInput.EnhancedInputUserSettings.ResetAllPlayerKeysInRow // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4de4c30
	bool RegisterInputMappingContexts(struct TSet<struct UInputMappingContext*>& MappingContexts); // Function EnhancedInput.EnhancedInputUserSettings.RegisterInputMappingContexts // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4de41c0
	bool RegisterInputMappingContext(struct UInputMappingContext* IMC); // Function EnhancedInput.EnhancedInputUserSettings.RegisterInputMappingContext // (Native|Public|BlueprintCallable) // @ game+0x4de43d0
	void MapPlayerKey(struct FMapPlayerKeyArgs& InArgs, struct FGameplayTagContainer& FailureReason); // Function EnhancedInput.EnhancedInputUserSettings.MapPlayerKey // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4de5170
	void MappingContextRegisteredWithSettings__DelegateSignature(struct UInputMappingContext* IMC); // DelegateFunction EnhancedInput.EnhancedInputUserSettings.MappingContextRegisteredWithSettings__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x19be2f0
	void MappableKeyProfileChanged__DelegateSignature(struct UEnhancedPlayerMappableKeyProfile* NewProfile); // DelegateFunction EnhancedInput.EnhancedInputUserSettings.MappableKeyProfileChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x19be2f0
	bool IsMappingContextRegistered(struct UInputMappingContext* IMC); // Function EnhancedInput.EnhancedInputUserSettings.IsMappingContextRegistered // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4de3d20
	struct UEnhancedPlayerMappableKeyProfile* GetKeyProfileWithIdentifier(struct FGameplayTag& ProfileId); // Function EnhancedInput.EnhancedInputUserSettings.GetKeyProfileWithIdentifier // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4de44e0
	struct FGameplayTag GetCurrentKeyProfileIdentifier(); // Function EnhancedInput.EnhancedInputUserSettings.GetCurrentKeyProfileIdentifier // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4de4760
	struct UEnhancedPlayerMappableKeyProfile* GetCurrentKeyProfile(); // Function EnhancedInput.EnhancedInputUserSettings.GetCurrentKeyProfile // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4de4720
	struct TSet<struct FPlayerKeyMapping> FindMappingsInRow(struct FName MappingName); // Function EnhancedInput.EnhancedInputUserSettings.FindMappingsInRow // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4de48c0
	void EnhancedInputUserSettingsChanged__DelegateSignature(struct UEnhancedInputUserSettings* Settings); // DelegateFunction EnhancedInput.EnhancedInputUserSettings.EnhancedInputUserSettingsChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x19be2f0
	void EnhancedInputUserSettingsApplied__DelegateSignature(); // DelegateFunction EnhancedInput.EnhancedInputUserSettings.EnhancedInputUserSettingsApplied__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x19be2f0
	struct UEnhancedPlayerMappableKeyProfile* CreateNewKeyProfile(struct FPlayerMappableKeyProfileCreationArgs& InArgs); // Function EnhancedInput.EnhancedInputUserSettings.CreateNewKeyProfile // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4de45f0
	void AsyncSaveSettings(); // Function EnhancedInput.EnhancedInputUserSettings.AsyncSaveSettings // (Native|Public|BlueprintCallable) // @ game+0x272ab50
	void ApplySettings(); // Function EnhancedInput.EnhancedInputUserSettings.ApplySettings // (Native|Public|BlueprintCallable) // @ game+0x3a67e00
};

// Class EnhancedInput.EnhancedInputActionDelegateBinding
// Size: 0x40 (Inherited: 0x30)
struct UEnhancedInputActionDelegateBinding : UInputDelegateBinding {
	struct TArray<struct FBlueprintEnhancedInputActionBinding> InputActionDelegateBindings; // 0x30(0x10)
};

// Class EnhancedInput.EnhancedInputActionValueBinding
// Size: 0x40 (Inherited: 0x30)
struct UEnhancedInputActionValueBinding : UInputDelegateBinding {
	struct TArray<struct FBlueprintEnhancedInputActionBinding> InputActionValueBindings; // 0x30(0x10)
};

// Class EnhancedInput.EnhancedInputComponent
// Size: 0x1a8 (Inherited: 0x170)
struct UEnhancedInputComponent : UInputComponent {
	char pad_170[0x38]; // 0x170(0x38)

	struct FInputActionValue GetBoundActionValue(struct UInputAction* Action); // Function EnhancedInput.EnhancedInputComponent.GetBoundActionValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4de7d40
};

// Class EnhancedInput.EnhancedInputDeveloperSettings
// Size: 0x110 (Inherited: 0x48)
struct UEnhancedInputDeveloperSettings : UDeveloperSettingsBackedByCVars {
	struct TArray<struct FDefaultContextSetting> DefaultMappingContexts; // 0x48(0x10)
	struct TArray<struct FDefaultContextSetting> DefaultWorldSubsystemMappingContexts; // 0x58(0x10)
	struct FPerPlatformSettings PlatformSettings; // 0x68(0x10)
	struct TSoftClassPtr<UObject> UserSettingsClass; // 0x78(0x30)
	struct TSoftClassPtr<UObject> DefaultPlayerMappableKeyProfileClass; // 0xa8(0x30)
	struct TSoftClassPtr<UObject> DefaultWorldInputClass; // 0xd8(0x30)
	char bSendTriggeredEventsWhenInputIsFlushed : 1; // 0x108(0x01)
	char bEnableUserSettings : 1; // 0x108(0x01)
	char bEnableDefaultMappingContexts : 1; // 0x108(0x01)
	char bShouldOnlyTriggerLastActionInChord : 1; // 0x108(0x01)
	char bLogOnDeprecatedConfigUsed : 1; // 0x108(0x01)
	char bEnableWorldSubsystem : 1; // 0x108(0x01)
	char bShouldLogAllWorldSubsystemInputs : 1; // 0x108(0x01)
	char pad_108_7 : 1; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
};

// Class EnhancedInput.EnhancedInputLibrary
// Size: 0x30 (Inherited: 0x30)
struct UEnhancedInputLibrary : UBlueprintFunctionLibrary {

	void RequestRebuildControlMappingsUsingContext(struct UInputMappingContext* Context, bool bForceImmediately); // Function EnhancedInput.EnhancedInputLibrary.RequestRebuildControlMappingsUsingContext // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x4deabc0
	struct FInputActionValue MakeInputActionValueOfType(double X, double Y, double Z, enum class EInputActionValueType ValueType); // Function EnhancedInput.EnhancedInputLibrary.MakeInputActionValueOfType // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4dea4c0
	struct FInputActionValue MakeInputActionValue(double X, double Y, double Z, struct FInputActionValue& MatchValueType); // Function EnhancedInput.EnhancedInputLibrary.MakeInputActionValue // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4dea160
	bool IsActionKeyMappingPlayerMappable(struct FEnhancedActionKeyMapping& ActionKeyMapping); // Function EnhancedInput.EnhancedInputLibrary.IsActionKeyMappingPlayerMappable // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4de99e0
	struct FPlayerMappableKeySlot GetThirdPlayerMappableKeySlot(); // Function EnhancedInput.EnhancedInputLibrary.GetThirdPlayerMappableKeySlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4de8f00
	struct FPlayerMappableKeySlot GetSecondPlayerMappableKeySlot(); // Function EnhancedInput.EnhancedInputLibrary.GetSecondPlayerMappableKeySlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4de8f20
	struct UPlayerMappableKeySettings* GetPlayerMappableKeySettings(struct FEnhancedActionKeyMapping& ActionKeyMapping); // Function EnhancedInput.EnhancedInputLibrary.GetPlayerMappableKeySettings // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4de9f30
	struct FName GetMappingName(struct FEnhancedActionKeyMapping& ActionKeyMapping); // Function EnhancedInput.EnhancedInputLibrary.GetMappingName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4de9ca0
	struct FPlayerMappableKeySlot GetFourthPlayerMappableKeySlot(); // Function EnhancedInput.EnhancedInputLibrary.GetFourthPlayerMappableKeySlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4de8ee0
	struct FPlayerMappableKeySlot GetFirstPlayerMappableKeySlot(); // Function EnhancedInput.EnhancedInputLibrary.GetFirstPlayerMappableKeySlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4de8f40
	struct FInputActionValue GetBoundActionValue(struct AActor* Actor, struct UInputAction* Action); // Function EnhancedInput.EnhancedInputLibrary.GetBoundActionValue // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4de9680
	struct FString Conv_InputActionValueToString(struct FInputActionValue ActionValue); // Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4de8f60
	bool Conv_InputActionValueToBool(struct FInputActionValue InValue); // Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToBool // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4de9550
	struct FVector Conv_InputActionValueToAxis3D(struct FInputActionValue ActionValue); // Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis3D // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x4de9230
	struct FVector2D Conv_InputActionValueToAxis2D(struct FInputActionValue InValue); // Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis2D // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x4de9340
	double Conv_InputActionValueToAxis1D(struct FInputActionValue InValue); // Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis1D // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4de9440
	void BreakInputActionValue(struct FInputActionValue InActionValue, double& X, double& Y, double& Z, enum class EInputActionValueType& Type); // Function EnhancedInput.EnhancedInputLibrary.BreakInputActionValue // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4dea800
};

// Class EnhancedInput.EnhancedInputPlatformData
// Size: 0x80 (Inherited: 0x30)
struct UEnhancedInputPlatformData : UObject {
	struct TMap<struct UInputMappingContext*, struct UInputMappingContext*> MappingContextRedirects; // 0x30(0x50)

	struct UInputMappingContext* GetContextRedirect(struct UInputMappingContext* InContext); // Function EnhancedInput.EnhancedInputPlatformData.GetContextRedirect // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4dedc60
};

// Class EnhancedInput.EnhancedInputPlatformSettings
// Size: 0x78 (Inherited: 0x50)
struct UEnhancedInputPlatformSettings : UPlatformSettings {
	struct TArray<struct TSoftClassPtr<UObject>> InputData; // 0x50(0x10)
	struct TArray<struct UEnhancedInputPlatformData*> InputDataClasses; // 0x60(0x10)
	bool bShouldLogMappingContextRedirects; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class EnhancedInput.EnhancedInputSubsystemInterface
// Size: 0x30 (Inherited: 0x30)
struct UEnhancedInputSubsystemInterface : UInterface {

	void StopContinuousInputInjectionForPlayerMapping(struct FName MappingName); // Function EnhancedInput.EnhancedInputSubsystemInterface.StopContinuousInputInjectionForPlayerMapping // (Native|Public|BlueprintCallable) // @ game+0x4df0700
	void StopContinuousInputInjectionForAction(struct UInputAction* Action); // Function EnhancedInput.EnhancedInputSubsystemInterface.StopContinuousInputInjectionForAction // (Native|Public|BlueprintCallable) // @ game+0x4df0810
	void StartContinuousInputInjectionForPlayerMapping(struct FName MappingName, struct FInputActionValue RawValue, struct TArray<struct UInputModifier*>& Modifiers, struct TArray<struct UInputTrigger*>& Triggers); // Function EnhancedInput.EnhancedInputSubsystemInterface.StartContinuousInputInjectionForPlayerMapping // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4df0910
	void StartContinuousInputInjectionForAction(struct UInputAction* Action, struct FInputActionValue RawValue, struct TArray<struct UInputModifier*>& Modifiers, struct TArray<struct UInputTrigger*>& Triggers); // Function EnhancedInput.EnhancedInputSubsystemInterface.StartContinuousInputInjectionForAction // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4df0cb0
	void RequestRebuildControlMappings(struct FModifyContextOptions& OPTIONS, enum class EInputMappingRebuildType RebuildType); // Function EnhancedInput.EnhancedInputSubsystemInterface.RequestRebuildControlMappings // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4df0130
	void RemovePlayerMappableConfig(struct UPlayerMappableInputConfig* Config, struct FModifyContextOptions& OPTIONS); // Function EnhancedInput.EnhancedInputSubsystemInterface.RemovePlayerMappableConfig // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4dee4e0
	void RemoveMappingContext(struct UInputMappingContext* MappingContext, struct FModifyContextOptions& OPTIONS); // Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveMappingContext // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4df02e0
	int32_t RemoveAllPlayerMappedKeysForMapping(struct FName MappingName, struct FModifyContextOptions& OPTIONS); // Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveAllPlayerMappedKeysForMapping // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4deece0
	void RemoveAllPlayerMappedKeys(struct FModifyContextOptions& OPTIONS); // Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveAllPlayerMappedKeys // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4dee840
	enum class EMappingQueryResult QueryMapKeyInContextSet(struct TArray<struct UInputMappingContext*>& PrioritizedActiveContexts, struct UInputMappingContext* InputContext, struct UInputAction* Action, struct FKey Key, struct TArray<struct FMappingQueryIssue>& OutIssues, enum class EMappingQueryIssue BlockingIssues); // Function EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInContextSet // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4def830
	enum class EMappingQueryResult QueryMapKeyInActiveContextSet(struct UInputMappingContext* InputContext, struct UInputAction* Action, struct FKey Key, struct TArray<struct FMappingQueryIssue>& OutIssues, enum class EMappingQueryIssue BlockingIssues); // Function EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInActiveContextSet // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4defd10
	struct TArray<struct FKey> QueryKeysMappedToAction(struct UInputAction* Action); // Function EnhancedInput.EnhancedInputSubsystemInterface.QueryKeysMappedToAction // (BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4def520
	void OnUserSettingsChanged(struct UEnhancedInputUserSettings* Settings); // Function EnhancedInput.EnhancedInputSubsystemInterface.OnUserSettingsChanged // (Native|Protected) // @ game+0x4df1f20
	void OnUserKeyProfileChanged(struct UEnhancedPlayerMappableKeyProfile* InNewProfile); // Function EnhancedInput.EnhancedInputSubsystemInterface.OnUserKeyProfileChanged // (Native|Protected) // @ game+0x4df1e20
	int32_t K2_RemovePlayerMappedKeyInSlot(struct FName MappingName, struct FPlayerMappableKeySlot& KeySlot, struct FModifyContextOptions& OPTIONS); // Function EnhancedInput.EnhancedInputSubsystemInterface.K2_RemovePlayerMappedKeyInSlot // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4deeec0
	struct FKey K2_GetPlayerMappedKeyInSlot(struct FName MappingName, struct FPlayerMappableKeySlot& KeySlot); // Function EnhancedInput.EnhancedInputSubsystemInterface.K2_GetPlayerMappedKeyInSlot // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4deeac0
	int32_t K2_AddPlayerMappedKeyInSlot(struct FName MappingName, struct FKey NewKey, struct FPlayerMappableKeySlot& KeySlot, struct FModifyContextOptions& OPTIONS); // Function EnhancedInput.EnhancedInputSubsystemInterface.K2_AddPlayerMappedKeyInSlot // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4def150
	void InjectInputVectorForPlayerMapping(struct FName MappingName, struct FVector Value, struct TArray<struct UInputModifier*>& Modifiers, struct TArray<struct UInputTrigger*>& Triggers); // Function EnhancedInput.EnhancedInputSubsystemInterface.InjectInputVectorForPlayerMapping // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x4df1020
	void InjectInputVectorForAction(struct UInputAction* Action, struct FVector Value, struct TArray<struct UInputModifier*>& Modifiers, struct TArray<struct UInputTrigger*>& Triggers); // Function EnhancedInput.EnhancedInputSubsystemInterface.InjectInputVectorForAction // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x4df1750
	void InjectInputForPlayerMapping(struct FName MappingName, struct FInputActionValue RawValue, struct TArray<struct UInputModifier*>& Modifiers, struct TArray<struct UInputTrigger*>& Triggers); // Function EnhancedInput.EnhancedInputSubsystemInterface.InjectInputForPlayerMapping // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4df13b0
	void InjectInputForAction(struct UInputAction* Action, struct FInputActionValue RawValue, struct TArray<struct UInputModifier*>& Modifiers, struct TArray<struct UInputTrigger*>& Triggers); // Function EnhancedInput.EnhancedInputSubsystemInterface.InjectInputForAction // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4df1ab0
	bool HasMappingContext(struct UInputMappingContext* MappingContext, int32_t& OutFoundPriority); // Function EnhancedInput.EnhancedInputSubsystemInterface.HasMappingContext // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4def690
	struct UEnhancedInputUserSettings* GetUserSettings(); // Function EnhancedInput.EnhancedInputSubsystemInterface.GetUserSettings // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3dc3000
	struct TArray<struct FKey> GetAllPlayerMappedKeys(struct FName MappingName); // Function EnhancedInput.EnhancedInputSubsystemInterface.GetAllPlayerMappedKeys // (BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4dee940
	struct TArray<struct FEnhancedActionKeyMapping> GetAllPlayerMappableActionKeyMappings(); // Function EnhancedInput.EnhancedInputSubsystemInterface.GetAllPlayerMappableActionKeyMappings // (BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4def4d0
	void ClearAllMappings(); // Function EnhancedInput.EnhancedInputSubsystemInterface.ClearAllMappings // (BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x4df06d0
	void AddPlayerMappableConfig(struct UPlayerMappableInputConfig* Config, struct FModifyContextOptions& OPTIONS); // Function EnhancedInput.EnhancedInputSubsystemInterface.AddPlayerMappableConfig // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4dee690
	void AddMappingContext(struct UInputMappingContext* MappingContext, int32_t Priority, struct FModifyContextOptions& OPTIONS); // Function EnhancedInput.EnhancedInputSubsystemInterface.AddMappingContext // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4df0490
};

// Class EnhancedInput.EnhancedInputLocalPlayerSubsystem
// Size: 0x1f0 (Inherited: 0x38)
struct UEnhancedInputLocalPlayerSubsystem : ULocalPlayerSubsystem {
	char pad_38[0x1a0]; // 0x38(0x1a0)
	struct FMulticastInlineDelegate ControlMappingsRebuiltDelegate; // 0x1d8(0x10)
	struct UEnhancedInputUserSettings* UserSettings; // 0x1e8(0x08)
};

// Class EnhancedInput.EnhancedInputWorldSubsystem
// Size: 0x200 (Inherited: 0x38)
struct UEnhancedInputWorldSubsystem : UWorldSubsystem {
	char pad_38[0x1a0]; // 0x38(0x1a0)
	struct UEnhancedPlayerInput* PlayerInput; // 0x1d8(0x08)
	char pad_1E0[0x10]; // 0x1e0(0x10)
	struct TArray<struct TWeakObjectPtr<struct UInputComponent>> CurrentInputStack; // 0x1f0(0x10)

	bool RemoveActorInputComponent(struct AActor* Actor); // Function EnhancedInput.EnhancedInputWorldSubsystem.RemoveActorInputComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x4e01620
	void AddActorInputComponent(struct AActor* Actor); // Function EnhancedInput.EnhancedInputWorldSubsystem.AddActorInputComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x4e017a0
};

// Class EnhancedInput.EnhancedPlayerInput
// Size: 0x828 (Inherited: 0x4d0)
struct UEnhancedPlayerInput : UPlayerInput {
	struct TMap<struct UInputAction*, struct FKeyConsumptionOptions> KeyConsumptionData; // 0x4d0(0x50)
	struct TMap<struct UInputMappingContext*, int32_t> AppliedInputContexts; // 0x520(0x50)
	struct TArray<struct FEnhancedActionKeyMapping> EnhancedActionMappings; // 0x570(0x10)
	char pad_580[0x50]; // 0x580(0x50)
	struct TMap<struct UInputAction*, struct FInputActionInstance> ActionInstanceData; // 0x5d0(0x50)
	char pad_620[0xa0]; // 0x620(0xa0)
	struct TMap<struct FKey, struct FVector> KeysPressedThisTick; // 0x6c0(0x50)
	struct TMap<struct UInputAction*, struct FInjectedInputArray> InputsInjectedThisTick; // 0x710(0x50)
	struct TSet<struct UInputAction*> LastInjectedActions; // 0x760(0x50)
	char pad_7B0[0x78]; // 0x7b0(0x78)
};

// Class EnhancedInput.InputAction
// Size: 0x88 (Inherited: 0x38)
struct UInputAction : UDataAsset {
	struct FText ActionDescription; // 0x38(0x18)
	bool bTriggerWhenPaused; // 0x50(0x01)
	bool bConsumeInput; // 0x51(0x01)
	bool bConsumesActionAndAxisMappings; // 0x52(0x01)
	bool bReserveAllMappings; // 0x53(0x01)
	int32_t TriggerEventsThatConsumeLegacyKeys; // 0x54(0x04)
	enum class EInputActionValueType ValueType; // 0x58(0x01)
	enum class EInputActionAccumulationBehavior AccumulationBehavior; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)
	struct TArray<struct UInputTrigger*> Triggers; // 0x60(0x10)
	struct TArray<struct UInputModifier*> Modifiers; // 0x70(0x10)
	struct UPlayerMappableKeySettings* PlayerMappableKeySettings; // 0x80(0x08)
};

// Class EnhancedInput.InputDebugKeyDelegateBinding
// Size: 0x40 (Inherited: 0x30)
struct UInputDebugKeyDelegateBinding : UInputDelegateBinding {
	struct TArray<struct FBlueprintInputDebugKeyDelegateBinding> InputDebugKeyDelegateBindings; // 0x30(0x10)
};

// Class EnhancedInput.InputMappingContext
// Size: 0x60 (Inherited: 0x38)
struct UInputMappingContext : UDataAsset {
	struct TArray<struct FEnhancedActionKeyMapping> Mappings; // 0x38(0x10)
	struct FText ContextDescription; // 0x48(0x18)

	void UnmapKey(struct UInputAction* Action, struct FKey Key); // Function EnhancedInput.InputMappingContext.UnmapKey // (Final|Native|Public|BlueprintCallable) // @ game+0x4e081a0
	void UnmapAllKeysFromAction(struct UInputAction* Action); // Function EnhancedInput.InputMappingContext.UnmapAllKeysFromAction // (Final|Native|Public|BlueprintCallable) // @ game+0x4e080b0
	void UnmapAll(); // Function EnhancedInput.InputMappingContext.UnmapAll // (Final|Native|Public|BlueprintCallable) // @ game+0x4e08030
	void UnmapAction(struct UInputAction* Action); // Function EnhancedInput.InputMappingContext.UnmapAction // (Final|Native|Public|BlueprintCallable) // @ game+0x4e080b0
	struct FEnhancedActionKeyMapping MapKey(struct UInputAction* Action, struct FKey ToKey); // Function EnhancedInput.InputMappingContext.MapKey // (Final|Native|Public|BlueprintCallable) // @ game+0x4e08450
};

// Class EnhancedInput.InputModifier
// Size: 0x30 (Inherited: 0x30)
struct UInputModifier : UObject {

	struct FInputActionValue ModifyRaw(struct UEnhancedPlayerInput* PlayerInput, struct FInputActionValue CurrentValue, float DeltaTime); // Function EnhancedInput.InputModifier.ModifyRaw // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x4e08d60
	struct FLinearColor GetVisualizationColor(struct FInputActionValue SampleValue, struct FInputActionValue FinalValue); // Function EnhancedInput.InputModifier.GetVisualizationColor // (Native|Event|Public|HasDefaults|BlueprintEvent|Const) // @ game+0x4e08b30
};

// Class EnhancedInput.InputModifierDeadZone
// Size: 0x40 (Inherited: 0x30)
struct UInputModifierDeadZone : UInputModifier {
	float LowerThreshold; // 0x30(0x04)
	float UpperThreshold; // 0x34(0x04)
	enum class EDeadZoneType Type; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class EnhancedInput.InputModifierScalar
// Size: 0x48 (Inherited: 0x30)
struct UInputModifierScalar : UInputModifier {
	struct FVector Scalar; // 0x30(0x18)
};

// Class EnhancedInput.InputModifierScaleByDeltaTime
// Size: 0x30 (Inherited: 0x30)
struct UInputModifierScaleByDeltaTime : UInputModifier {
};

// Class EnhancedInput.InputModifierNegate
// Size: 0x38 (Inherited: 0x30)
struct UInputModifierNegate : UInputModifier {
	bool bX; // 0x30(0x01)
	bool bY; // 0x31(0x01)
	bool bZ; // 0x32(0x01)
	char pad_33[0x5]; // 0x33(0x05)
};

// Class EnhancedInput.InputModifierSmooth
// Size: 0x60 (Inherited: 0x30)
struct UInputModifierSmooth : UInputModifier {
	char pad_30[0x30]; // 0x30(0x30)
};

// Class EnhancedInput.InputModifierResponseCurveExponential
// Size: 0x48 (Inherited: 0x30)
struct UInputModifierResponseCurveExponential : UInputModifier {
	struct FVector CurveExponent; // 0x30(0x18)
};

// Class EnhancedInput.InputModifierResponseCurveUser
// Size: 0x48 (Inherited: 0x30)
struct UInputModifierResponseCurveUser : UInputModifier {
	struct UCurveFloat* ResponseX; // 0x30(0x08)
	struct UCurveFloat* ResponseY; // 0x38(0x08)
	struct UCurveFloat* ResponseZ; // 0x40(0x08)
};

// Class EnhancedInput.InputModifierFOVScaling
// Size: 0x38 (Inherited: 0x30)
struct UInputModifierFOVScaling : UInputModifier {
	float FOVScale; // 0x30(0x04)
	enum class EFOVScalingType FOVScalingType; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// Class EnhancedInput.InputModifierToWorldSpace
// Size: 0x30 (Inherited: 0x30)
struct UInputModifierToWorldSpace : UInputModifier {
};

// Class EnhancedInput.InputModifierSwizzleAxis
// Size: 0x38 (Inherited: 0x30)
struct UInputModifierSwizzleAxis : UInputModifier {
	enum class EInputAxisSwizzle Order; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class EnhancedInput.InputTrigger
// Size: 0x58 (Inherited: 0x30)
struct UInputTrigger : UObject {
	float ActuationThreshold; // 0x30(0x04)
	bool bShouldAlwaysTick; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct FInputActionValue LastValue; // 0x38(0x20)

	enum class ETriggerState UpdateState(struct UEnhancedPlayerInput* PlayerInput, struct FInputActionValue ModifiedValue, float DeltaTime); // Function EnhancedInput.InputTrigger.UpdateState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x4e0aae0
	bool IsActuated(struct FInputActionValue& ForValue); // Function EnhancedInput.InputTrigger.IsActuated // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e0ad60
	enum class ETriggerType GetTriggerType(); // Function EnhancedInput.InputTrigger.GetTriggerType // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x40b1c70
};

// Class EnhancedInput.InputTriggerTimedBase
// Size: 0x60 (Inherited: 0x58)
struct UInputTriggerTimedBase : UInputTrigger {
	float HeldDuration; // 0x58(0x04)
	bool bAffectedByTimeDilation; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
};

// Class EnhancedInput.InputTriggerDown
// Size: 0x58 (Inherited: 0x58)
struct UInputTriggerDown : UInputTrigger {
};

// Class EnhancedInput.InputTriggerPressed
// Size: 0x58 (Inherited: 0x58)
struct UInputTriggerPressed : UInputTrigger {
};

// Class EnhancedInput.InputTriggerReleased
// Size: 0x58 (Inherited: 0x58)
struct UInputTriggerReleased : UInputTrigger {
};

// Class EnhancedInput.InputTriggerHold
// Size: 0x70 (Inherited: 0x60)
struct UInputTriggerHold : UInputTriggerTimedBase {
	char pad_60[0x4]; // 0x60(0x04)
	float HoldTimeThreshold; // 0x64(0x04)
	bool bIsOneShot; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class EnhancedInput.InputTriggerHoldAndRelease
// Size: 0x68 (Inherited: 0x60)
struct UInputTriggerHoldAndRelease : UInputTriggerTimedBase {
	float HoldTimeThreshold; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class EnhancedInput.InputTriggerTap
// Size: 0x68 (Inherited: 0x60)
struct UInputTriggerTap : UInputTriggerTimedBase {
	float TapReleaseTimeThreshold; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class EnhancedInput.InputTriggerPulse
// Size: 0x70 (Inherited: 0x60)
struct UInputTriggerPulse : UInputTriggerTimedBase {
	char pad_60[0x4]; // 0x60(0x04)
	bool bTriggerOnStart; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	float Interval; // 0x68(0x04)
	int32_t TriggerLimit; // 0x6c(0x04)
};

// Class EnhancedInput.InputTriggerChordAction
// Size: 0x60 (Inherited: 0x58)
struct UInputTriggerChordAction : UInputTrigger {
	struct UInputAction* ChordAction; // 0x58(0x08)
};

// Class EnhancedInput.InputTriggerChordBlocker
// Size: 0x60 (Inherited: 0x60)
struct UInputTriggerChordBlocker : UInputTriggerChordAction {
};

// Class EnhancedInput.InputTriggerCombo
// Size: 0x80 (Inherited: 0x58)
struct UInputTriggerCombo : UInputTrigger {
	int32_t CurrentComboStepIndex; // 0x58(0x04)
	float CurrentTimeBetweenComboSteps; // 0x5c(0x04)
	struct TArray<struct FInputComboStepData> ComboActions; // 0x60(0x10)
	struct TArray<struct FInputCancelAction> InputCancelActions; // 0x70(0x10)
};

// Class EnhancedInput.PlayerMappableInputConfig
// Size: 0xc0 (Inherited: 0x38)
struct UPlayerMappableInputConfig : UPrimaryDataAsset {
	struct FName ConfigName; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
	struct FText ConfigDisplayName; // 0x48(0x18)
	bool bIsDeprecated; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct UObject* MetaData; // 0x68(0x08)
	struct TMap<struct UInputMappingContext*, int32_t> Contexts; // 0x70(0x50)

	void ResetToDefault(); // Function EnhancedInput.PlayerMappableInputConfig.ResetToDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x386c9d0
	bool IsDeprecated(); // Function EnhancedInput.PlayerMappableInputConfig.IsDeprecated // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e0c0c0
	struct TArray<struct FEnhancedActionKeyMapping> GetPlayerMappableKeys(); // Function EnhancedInput.PlayerMappableInputConfig.GetPlayerMappableKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e0c5e0
	struct UObject* GetMetadata(); // Function EnhancedInput.PlayerMappableInputConfig.GetMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e0c0a0
	struct TMap<struct UInputMappingContext*, int32_t> GetMappingContexts(); // Function EnhancedInput.PlayerMappableInputConfig.GetMappingContexts // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e0c140
	struct FEnhancedActionKeyMapping GetMappingByName(struct FName MappingName); // Function EnhancedInput.PlayerMappableInputConfig.GetMappingByName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e0c440
	struct TArray<struct FEnhancedActionKeyMapping> GetKeysBoundToAction(struct UInputAction* InAction); // Function EnhancedInput.PlayerMappableInputConfig.GetKeysBoundToAction // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e0c240
	struct FText GetDisplayName(); // Function EnhancedInput.PlayerMappableInputConfig.GetDisplayName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e0c0e0
	struct FName GetConfigName(); // Function EnhancedInput.PlayerMappableInputConfig.GetConfigName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e0c110
};

// Class EnhancedInput.PlayerMappableKeySettings
// Size: 0x98 (Inherited: 0x30)
struct UPlayerMappableKeySettings : UObject {
	struct UObject* MetaData; // 0x30(0x08)
	struct FName Name; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
	struct FText DisplayName; // 0x48(0x18)
	struct FText DisplayCategory; // 0x60(0x18)
	struct FGameplayTagContainer SupportedKeyProfiles; // 0x78(0x20)
};

