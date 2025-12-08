// BlueprintGeneratedClass VM_Reward.VM_Reward_C
// Size: 0x3b8 (Inherited: 0x90)
struct UVM_Reward_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct FMulticastInlineDelegate OnDisplayNameChanged; // 0x98(0x10)
	struct FMulticastInlineDelegate OnIconChanged; // 0xa8(0x10)
	struct FMulticastInlineDelegate OnIconTransformChanged; // 0xb8(0x10)
	struct FText ToolTip; // 0xc8(0x18)
	struct FText RewardTypeName; // 0xe0(0x18)
	struct FText DisplayName; // 0xf8(0x18)
	struct FText TextContent; // 0x110(0x18)
	struct UTexture* IconTexture; // 0x128(0x08)
	bool DisplayIconAsBackground; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	struct FWidgetTransform IconTransform; // 0x138(0x38)
	struct FMulticastInlineDelegate OnRewardHandleChanged; // 0x170(0x10)
	struct UBaseHandle* RewardBaseHandle; // 0x180(0x08)
	struct URewardModel* Reward Model; // 0x188(0x08)
	struct FMulticastInlineDelegate OnTooltipChanged; // 0x190(0x10)
	struct UEquippableSkinHandle* EquippableSkinHandle; // 0x1a0(0x08)
	struct FMulticastInlineDelegate OnEquippableSkinHandleChanged; // 0x1a8(0x10)
	struct FMulticastInlineDelegate OnRewardTypeNameChanged; // 0x1b8(0x10)
	struct TMap<struct FGuid, struct UBaseHandle*> InstanceHandles; // 0x1c8(0x50)
	struct FMulticastInlineDelegate OnInstanceHandlesChanged; // 0x218(0x10)
	struct UTexture* RandomContentTexture; // 0x228(0x08)
	struct FMulticastInlineDelegate OnTextContentChanged; // 0x230(0x10)
	enum class EAresContentType RewardType; // 0x240(0x01)
	char pad_241[0x3]; // 0x241(0x03)
	int32_t Quantity; // 0x244(0x04)
	struct FMulticastInlineDelegate OnRewardTypeChanged; // 0x248(0x10)
	struct FMulticastInlineDelegate OnEquippableSkinLevelHandleChanged; // 0x258(0x10)
	struct FMulticastInlineDelegate OnEquippableChromaHandleChanged; // 0x268(0x10)
	struct FMulticastInlineDelegate OnPlayerTitleHandleChanged; // 0x278(0x10)
	struct FMulticastInlineDelegate OnPlayerCardHandleChanged; // 0x288(0x10)
	struct FMulticastInlineDelegate OnSprayHandleChanged; // 0x298(0x10)
	struct FMulticastInlineDelegate OnTotemHandleChanged; // 0x2a8(0x10)
	struct FMulticastInlineDelegate OnCharacterHandleChanged; // 0x2b8(0x10)
	struct FMulticastInlineDelegate OnCurrencyHandleChanged; // 0x2c8(0x10)
	struct FMulticastInlineDelegate OnEquippableCharmHandleChanged; // 0x2d8(0x10)
	struct UEquippableSkinLevelHandle* EquippableSkinLevelHandle; // 0x2e8(0x08)
	struct UEquippableSkinChromaHandle* EquippableSkinChromaHandle; // 0x2f0(0x08)
	struct UEquippableCharmHandle* EquippableCharmHandle; // 0x2f8(0x08)
	struct UPlayerTitleHandle* PlayerTitleHandle; // 0x300(0x08)
	struct UPlayerCardHandle* PlayerCardHandle; // 0x308(0x08)
	struct USprayHandle* SprayHandle; // 0x310(0x08)
	struct UTotemHandle* TotemHandle; // 0x318(0x08)
	struct UCharacterHandle* CharacterHandle; // 0x320(0x08)
	struct UCurrencyHandle* CurrencyHandle; // 0x328(0x08)
	struct ULevelBorderHandle* LevelBorderHandle; // 0x330(0x08)
	struct FMulticastInlineDelegate OnLevelBorderHandleChanged; // 0x338(0x10)
	struct FMulticastInlineDelegate OnQuantityChanged; // 0x348(0x10)
	struct FMulticastInlineDelegate OnPascalCaseDisplayNameChanged; // 0x358(0x10)
	struct FText PascalCaseDisplayName; // 0x368(0x18)
	enum class ERewardAttributionSource RewardAttribution; // 0x380(0x01)
	char pad_381[0x7]; // 0x381(0x07)
	struct FText RewardAttributionName; // 0x388(0x18)
	struct FMulticastInlineDelegate OnRewardAttributionChanged; // 0x3a0(0x10)
	struct URecipientInventoryModel* CustomInventoryModel; // 0x3b0(0x08)

	void Override Handle Inventory Model(struct UBaseHandle* Base Handle); // Function VM_Reward.VM_Reward_C.Override Handle Inventory Model // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetTotemHandle(struct UTotemHandle* InTotemHandle); // Function VM_Reward.VM_Reward_C.SetTotemHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTotemLoaded(struct UTotemHandle* TotemHandle); // Function VM_Reward.VM_Reward_C.OnTotemLoaded // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ClearAllHandles(); // Function VM_Reward.VM_Reward_C.ClearAllHandles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetRewardAttribution(enum class ERewardAttributionSource RewardAttribution); // Function VM_Reward.VM_Reward_C.SetRewardAttribution // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnContractLoadedForXPReward(struct UContractV2Handle* ContractV2Handle); // Function VM_Reward.VM_Reward_C.OnContractLoadedForXPReward // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void LoadContractXPReward(struct UContractXPRewardModel* ContractXPReward); // Function VM_Reward.VM_Reward_C.LoadContractXPReward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ResetIfHandleTypeHasChanged(struct UBaseHandle* InHandle); // Function VM_Reward.VM_Reward_C.ResetIfHandleTypeHasChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ResetIfRewardTypeHasChanged(struct URewardModel* InRewardModel); // Function VM_Reward.VM_Reward_C.ResetIfRewardTypeHasChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetPascalCaseDisplayName(struct FText NewPascalCaseDisplayName); // Function VM_Reward.VM_Reward_C.SetPascalCaseDisplayName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetLevelBorderHandle(struct ULevelBorderHandle* InLevelBorderHandle); // Function VM_Reward.VM_Reward_C.SetLevelBorderHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetPlayerTitleHandle(struct UPlayerTitleHandle* InPlayerTitleHandle); // Function VM_Reward.VM_Reward_C.SetPlayerTitleHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetPlayerCardHandle(struct UPlayerCardHandle* InPlayerCardHandle); // Function VM_Reward.VM_Reward_C.SetPlayerCardHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetSprayHandle(struct USprayHandle* InSprayHandle); // Function VM_Reward.VM_Reward_C.SetSprayHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetCharacterHandle(struct UCharacterHandle* InCharacterHandle); // Function VM_Reward.VM_Reward_C.SetCharacterHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetCurrencyHandle(struct UCurrencyHandle* InCurrencyHandle); // Function VM_Reward.VM_Reward_C.SetCurrencyHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetInstanceHandles(struct TMap<struct FGuid, struct UBaseHandle*> InInstanceHandles); // Function VM_Reward.VM_Reward_C.SetInstanceHandles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetGunbuddyHandle(struct UEquippableCharmHandle* InEquippableCharmHandle); // Function VM_Reward.VM_Reward_C.SetGunbuddyHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetRewardType(enum class EAresContentType InRewardType); // Function VM_Reward.VM_Reward_C.SetRewardType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Refresh(); // Function VM_Reward.VM_Reward_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitFromHandle(struct UBaseHandle* Handle); // Function VM_Reward.VM_Reward_C.InitFromHandle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateDataReady(); // Function VM_Reward.VM_Reward_C.UpdateDataReady // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetQuantity(int32_t New Quantity); // Function VM_Reward.VM_Reward_C.SetQuantity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetHandleDisplayFields(struct UBaseHandle* BaseHandle, struct FText TooltipPrefix, struct FText& RewardTypeName, struct FText& ToolTip, struct FText& DisplayName, struct FText& DisplayNamePascalCase, struct UTexture*& DisplayIcon, struct FWidgetTransform& DisplayIconTransform); // Function VM_Reward.VM_Reward_C.GetHandleDisplayFields // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void InitFromReward(struct URewardModel* RewardModel); // Function VM_Reward.VM_Reward_C.InitFromReward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void LoadTotem(struct UTotemRewardModel* TotemReward); // Function VM_Reward.VM_Reward_C.LoadTotem // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void LoadCurrency(struct UWalletRewardModel* Reward); // Function VM_Reward.VM_Reward_C.LoadCurrency // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void LoadEquippableSkin(struct UEquippableSkinRewardModel* SkinReward); // Function VM_Reward.VM_Reward_C.LoadEquippableSkin // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void LoadEquippableSkinLevel(struct UEquippableSkinLevelRewardModel* SkinLevelReward); // Function VM_Reward.VM_Reward_C.LoadEquippableSkinLevel // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void LoadEquippableSkinChroma(struct UEquippableSkinChromaRewardModel* SkinChromaReward); // Function VM_Reward.VM_Reward_C.LoadEquippableSkinChroma // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void LoadGunBuddyLevel(struct UEquippableCharmLevelRewardModel* BuddyLevel); // Function VM_Reward.VM_Reward_C.LoadGunBuddyLevel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void LoadPlayerCard(struct UPlayerCardRewardModel* PlayerCard); // Function VM_Reward.VM_Reward_C.LoadPlayerCard // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void LoadPlayerTitle(struct UPlayerTitleRewardModel* RewardModel); // Function VM_Reward.VM_Reward_C.LoadPlayerTitle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ApplyNoReward(); // Function VM_Reward.VM_Reward_C.ApplyNoReward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void LoadCharacter(struct UCharacterRewardModel* CharacterReward); // Function VM_Reward.VM_Reward_C.LoadCharacter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void LoadSpray(struct USprayRewardModel* SprayReward); // Function VM_Reward.VM_Reward_C.LoadSpray // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSprayLoaded(struct USprayHandle* SprayHandle); // Function VM_Reward.VM_Reward_C.OnSprayLoaded // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCurrencyLoaded(struct UCurrencyHandle* CurrencyHandle); // Function VM_Reward.VM_Reward_C.OnCurrencyLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnLevelBorderLoaded(struct ULevelBorderHandle* LevelBorderHandle); // Function VM_Reward.VM_Reward_C.OnLevelBorderLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerTitleLoaded(struct UPlayerTitleHandle* PlayerTitleHandle); // Function VM_Reward.VM_Reward_C.OnPlayerTitleLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerCardLoaded(struct UPlayerCardHandle* PlayerCardHandle); // Function VM_Reward.VM_Reward_C.OnPlayerCardLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnGunBuddyLoaded(struct UEquippableCharmHandle* BuddyHandle); // Function VM_Reward.VM_Reward_C.OnGunBuddyLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCharacterLoaded(struct UCharacterHandle* CharacterHandle); // Function VM_Reward.VM_Reward_C.OnCharacterLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEquippableSkinLoaded(struct UEquippableSkinHandle* Handle); // Function VM_Reward.VM_Reward_C.OnEquippableSkinLoaded // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEquippableSkinLevelLoaded(struct UEquippableSkinLevelHandle* Handle); // Function VM_Reward.VM_Reward_C.OnEquippableSkinLevelLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEquippableSkinChromaLoaded(struct UEquippableSkinChromaHandle* Handle); // Function VM_Reward.VM_Reward_C.OnEquippableSkinChromaLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEquippableCharmInstancesLoaded(struct FEquippableCharmInstanceHandles& EquippableCharmInstanceHandles); // Function VM_Reward.VM_Reward_C.OnEquippableCharmInstancesLoaded // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetContent(struct FText RewardTypeName, struct FText ToolTip, struct FText DisplayName, struct FText DisplayNamePascalCase, struct UTexture* Icon, struct FWidgetTransform IconTransform, enum class EAresContentType ContentType); // Function VM_Reward.VM_Reward_C.SetContent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetTextContent(struct FText TextContent); // Function VM_Reward.VM_Reward_C.SetTextContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetEquippableChromaHandle(struct UEquippableSkinChromaHandle* InEquippableChromaHandle); // Function VM_Reward.VM_Reward_C.SetEquippableChromaHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetEquippableSkinLevelHandle(struct UEquippableSkinLevelHandle* InEquippableSkinLevelHandle); // Function VM_Reward.VM_Reward_C.SetEquippableSkinLevelHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetDisplayName(struct FText DisplayName); // Function VM_Reward.VM_Reward_C.SetDisplayName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetEquippableSkinHandle(struct UEquippableSkinHandle* EquippableSkinHandle); // Function VM_Reward.VM_Reward_C.SetEquippableSkinHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetRewardHandle(struct UBaseHandle* RewardBaseHandle); // Function VM_Reward.VM_Reward_C.SetRewardHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetRewardTypeName(struct FText RewardTypeName); // Function VM_Reward.VM_Reward_C.SetRewardTypeName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetToolTip(struct FText ToolTip); // Function VM_Reward.VM_Reward_C.SetToolTip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIconTransform(struct FWidgetTransform IconTransform); // Function VM_Reward.VM_Reward_C.SetIconTransform // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIcon(struct UTexture* IconTexture); // Function VM_Reward.VM_Reward_C.SetIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Reset(); // Function VM_Reward.VM_Reward_C.Reset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RefreshBroadcast(); // Function VM_Reward.VM_Reward_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_VM_Reward(int32_t EntryPoint); // Function VM_Reward.VM_Reward_C.ExecuteUbergraph_VM_Reward // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnTotemHandleChanged__DelegateSignature(struct UTotemHandle* TotemHandle); // Function VM_Reward.VM_Reward_C.OnTotemHandleChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRewardAttributionChanged__DelegateSignature(enum class ERewardAttributionSource RewardAttribution, struct FText RewardAttributionName); // Function VM_Reward.VM_Reward_C.OnRewardAttributionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPascalCaseDisplayNameChanged__DelegateSignature(struct FText DisplayNamePascalCase); // Function VM_Reward.VM_Reward_C.OnPascalCaseDisplayNameChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnQuantityChanged__DelegateSignature(int32_t New Quantity); // Function VM_Reward.VM_Reward_C.OnQuantityChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnLevelBorderHandleChanged__DelegateSignature(struct ULevelBorderHandle* LevelBorderHandle); // Function VM_Reward.VM_Reward_C.OnLevelBorderHandleChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEquippableSkinLevelHandleChanged__DelegateSignature(struct UEquippableSkinLevelHandle* EquippableSkinLevelHandle); // Function VM_Reward.VM_Reward_C.OnEquippableSkinLevelHandleChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEquippableCharmHandleChanged__DelegateSignature(struct UEquippableCharmHandle* EquippableCharmHandle); // Function VM_Reward.VM_Reward_C.OnEquippableCharmHandleChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCurrencyHandleChanged__DelegateSignature(struct UCurrencyHandle* CurrencyHandle); // Function VM_Reward.VM_Reward_C.OnCurrencyHandleChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCharacterHandleChanged__DelegateSignature(struct UCharacterHandle* CharacterHandle); // Function VM_Reward.VM_Reward_C.OnCharacterHandleChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSprayHandleChanged__DelegateSignature(struct USprayHandle* SprayHandle); // Function VM_Reward.VM_Reward_C.OnSprayHandleChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerCardHandleChanged__DelegateSignature(struct UPlayerCardHandle* PlayerCardHandle); // Function VM_Reward.VM_Reward_C.OnPlayerCardHandleChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerTitleHandleChanged__DelegateSignature(struct UPlayerTitleHandle* PlayerTitleHandle); // Function VM_Reward.VM_Reward_C.OnPlayerTitleHandleChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEquippableChromaHandleChanged__DelegateSignature(struct UEquippableSkinChromaHandle* EquippableChromaHandle); // Function VM_Reward.VM_Reward_C.OnEquippableChromaHandleChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRewardTypeChanged__DelegateSignature(enum class EAresContentType RewardType); // Function VM_Reward.VM_Reward_C.OnRewardTypeChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTextContentChanged__DelegateSignature(struct FText TextContent); // Function VM_Reward.VM_Reward_C.OnTextContentChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnInstanceHandlesChanged__DelegateSignature(struct TMap<struct FGuid, struct UBaseHandle*> InstanceHandles); // Function VM_Reward.VM_Reward_C.OnInstanceHandlesChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRewardTypeNameChanged__DelegateSignature(struct FText RewardTypeName); // Function VM_Reward.VM_Reward_C.OnRewardTypeNameChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEquippableSkinHandleChanged__DelegateSignature(struct UEquippableSkinHandle* EquippableSkinHandle); // Function VM_Reward.VM_Reward_C.OnEquippableSkinHandleChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTooltipChanged__DelegateSignature(struct FText ToolTip); // Function VM_Reward.VM_Reward_C.OnTooltipChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRewardHandleChanged__DelegateSignature(struct UBaseHandle* RewardBaseHandle); // Function VM_Reward.VM_Reward_C.OnRewardHandleChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIconTransformChanged__DelegateSignature(struct FWidgetTransform IconTransform); // Function VM_Reward.VM_Reward_C.OnIconTransformChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIconChanged__DelegateSignature(struct UTexture* IconTexture, bool DisplayIconAsBackground); // Function VM_Reward.VM_Reward_C.OnIconChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnDisplayNameChanged__DelegateSignature(struct FText DisplayName); // Function VM_Reward.VM_Reward_C.OnDisplayNameChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

