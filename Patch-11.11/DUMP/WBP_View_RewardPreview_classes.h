// WidgetBlueprintGeneratedClass WBP_View_RewardPreview.WBP_View_RewardPreview_C
// Size: 0x570 (Inherited: 0x3e0)
struct UWBP_View_RewardPreview_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWidgetAnimation* LoadingSpinnerFadeIn; // 0x3e8(0x08)
	struct ULoadingThrobberSmall_C* LoadingThrobberSmall; // 0x3f0(0x08)
	struct UModelViewerPanel_C* ModelViewerPanel; // 0x3f8(0x08)
	struct UOverlay* Overlay_1; // 0x400(0x08)
	struct UWBP_Panel_Collections_PlayerCardPreview_C* PlayerCardPreview; // 0x408(0x08)
	struct UImage* Reward2DImage; // 0x410(0x08)
	struct UScaleBox* RewardScaleBox; // 0x418(0x08)
	struct UAresCommonText* RewardTextBlock; // 0x420(0x08)
	struct UWidgetSwitcher* RewardTypeWidgetSwitcher; // 0x428(0x08)
	struct USizeBox* SizeBox_1; // 0x430(0x08)
	struct USizeBox* SkinLevelsContainer; // 0x438(0x08)
	struct UWBP_Panel_SkinLevelIndicator_C* WBP_Panel_SkinLevelIndicator; // 0x440(0x08)
	struct UVM_Reward_C* RewardViewModel; // 0x448(0x08)
	struct UAgentViewModel* AgentViewModel; // 0x450(0x08)
	struct UCurrencyViewModel* CurrencyViewModel; // 0x458(0x08)
	struct UGunbuddyViewModel* GunbuddyViewModel; // 0x460(0x08)
	struct ULevelBorderViewModel* LevelBorderViewModel; // 0x468(0x08)
	struct UVM_PlayerCardManagement_C* PlayerCardViewModel; // 0x470(0x08)
	struct TMap<enum class EAresContentType, struct FRewardPreviewDisplayOverride> RewardTypeDisplaySettings; // 0x478(0x50)
	bool bDisplayAllPlayercardSizes; // 0x4c8(0x01)
	char pad_4C9[0x7]; // 0x4c9(0x07)
	struct UEquippableSkinHandle* GunbuddyAttachedSkinHandle; // 0x4d0(0x08)
	struct UPlayerTitleViewModel* PlayerTitleViewModel; // 0x4d8(0x08)
	struct USprayViewModel* SprayViewModel; // 0x4e0(0x08)
	struct UWeaponSkinViewModel* WeaponSkinViewModel; // 0x4e8(0x08)
	bool bDisplayLoadingThrobber; // 0x4f0(0x01)
	bool bShowContentWallpaper; // 0x4f1(0x01)
	char pad_4F2[0x2]; // 0x4f2(0x02)
	int32_t LoadingSpinnerFadeInTimeMillis; // 0x4f4(0x04)
	struct FMulticastInlineDelegate ConditionalInputActionsPreferencesChanged; // 0x4f8(0x10)
	bool ShouldShow3DPreviewCIA; // 0x508(0x01)
	bool bOverrideGunbuddyPreviewWeapon; // 0x509(0x01)
	char pad_50A[0x6]; // 0x50a(0x06)
	struct UEquippableSkinHandle* GunbuddyCustomAttachedSkinHandle; // 0x510(0x08)
	struct UEquippableSkinChromaHandle* GunbuddyCustomAttachedChromaHandle; // 0x518(0x08)
	struct UEquippableSkinLevelHandle* GunbuddyCustomAttachedLevelHandle; // 0x520(0x08)
	double Gunbuddy Render FOV Offset Degrees; // 0x528(0x08)
	double Gun Skin Render FOV Offset Degrees; // 0x530(0x08)
	double Spray Render FOV Offset Degrees; // 0x538(0x08)
	int32_t Quantity; // 0x540(0x04)
	char pad_544[0x4]; // 0x544(0x04)
	struct UTotemViewModel* TotemViewModel; // 0x548(0x08)
	bool UseAlternateDisplay; // 0x550(0x01)
	bool bShowEquippedCharmInGunSKinPreview; // 0x551(0x01)
	char pad_552[0x6]; // 0x552(0x06)
	struct UEquippableSkinHandle* SelectedSkinHandleForEquippedCharm; // 0x558(0x08)
	struct UEquippableSkinLevelHandle* SelectedSkinLevelHandleForEquippedCharm; // 0x560(0x08)
	struct UEquippableSkinChromaHandle* SelectedSkinChromaHandleForEquippedCharm; // 0x568(0x08)

	enum class EActivationPreference GetActivationPreferenceForAction(struct FAresConditionalInputAction Action); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.GetActivationPreferenceForAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Handle Equipped Charm Loaded(struct UEquippableHandle* InEquippableHandle); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.Handle Equipped Charm Loaded // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreviewGunSkinWithLevelChromaCharm(struct UEquippableSkinHandle* InSkinHandle, struct UEquippableSkinLevelHandle* InSkinLevelHandle, struct UEquippableSkinChromaHandle* InSkinChromaHandle, struct UEquippableCharmHandle* InEquippedCharmHandle); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.PreviewGunSkinWithLevelChromaCharm // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Player Card ID Changed(struct FGuid In Player Card ID); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.On Player Card ID Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIgnoreMouseWheel(bool IgnoreMouseWheel); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.SetIgnoreMouseWheel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TriggerAnimation(enum class EStoreAnimationType Animation Type, double Start at time, enum class EUMGSequencePlayMode Play Mode, struct TScriptInterface<IStoreOfferAnimationCaller> Animation Finish Callback); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.TriggerAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTotemHandleChanged(struct UTotemHandle* InTotemHandle); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.OnTotemHandleChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindTotemViewModel(bool Bind); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.BindTotemViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MakeTotemViewModel(); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.MakeTotemViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPreviewContractXPReward(); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.OnPreviewContractXPReward // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetEnableGunbuddyCustomPreview(bool Enable); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.SetEnableGunbuddyCustomPreview // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetGunbuddyCustomPreviewHandles(struct UEquippableSkinHandle* Skin, struct UEquippableSkinChromaHandle* Chroma, struct UEquippableSkinLevelHandle* Level); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.SetGunbuddyCustomPreviewHandles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnShowingLoadingSpinner(); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.OnShowingLoadingSpinner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Disable Player Card Id Overrides(); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.Disable Player Card Id Overrides // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPreviewLevelBorder(); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.OnPreviewLevelBorder // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPreviewPlayerTitle(); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.OnPreviewPlayerTitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPreviewPlayerCard(); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.OnPreviewPlayerCard // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MakeWeaponSkinViewModel(); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.MakeWeaponSkinViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MakeSprayViewModel(); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.MakeSprayViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MakePlayerTitleViewModel(); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.MakePlayerTitleViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MakePlayerCardViewModel(); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.MakePlayerCardViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MakeLevelBorderViewModel(); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.MakeLevelBorderViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MakeGunbuddyViewModel(); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.MakeGunbuddyViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MakeCurrencyViewModel(); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.MakeCurrencyViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MakeAgentViewModel(); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.MakeAgentViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MakeRewardViewModel(); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.MakeRewardViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnLevelBorderTexturesChanged(struct UTexture* LevelNumberBorderTexture, struct UTexture* SmallPlayerCardBorderTexture); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.OnLevelBorderTexturesChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindWeaponSkinViewModel(bool Bind); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.BindWeaponSkinViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindSprayViewModel(bool Bind); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.BindSprayViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindPlayerTitleViewModel(bool Bind); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.BindPlayerTitleViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindPlayercardViewModel(bool Bind); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.BindPlayercardViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindLevelBorderViewModel(bool Bind); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.BindLevelBorderViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindGunbuddyViewModel(bool Bind); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.BindGunbuddyViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindCurrencyViewModel(bool Bind); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.BindCurrencyViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindAgentViewModel(bool Bind); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.BindAgentViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnQuantityChanged(int32_t New Quantity); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.OnQuantityChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAgentImageChanged(struct UTexture2D* InAgentImage); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.OnAgentImageChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCurrencyImageChanged(struct UTexture* InCurrencyImage); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.OnCurrencyImageChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerTitleTextChanged(struct FText& PlayerTitleContent); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.OnPlayerTitleTextChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnDefaultGunForGunbuddyLoaded(struct UEquippableSkinHandle* EquippableSkinHandle); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.OnDefaultGunForGunbuddyLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBuddyChangedWorkaround(struct UEquippableCharmHandle* InCharmHandle); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.OnBuddyChangedWorkaround // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSkinAndLevelAndChromaChanged(struct UEquippableSkinHandle* InEquippableSkinHandle, struct UEquippableSkinLevelHandle* InEquippableSkinLevelHandle, struct UEquippableSkinChromaHandle* InEquippableSkinChromaHandle); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.OnSkinAndLevelAndChromaChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSprayHandleChanged(struct USprayHandle* InSprayHandle); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.OnSprayHandleChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnGunBuddyChanged(struct UEquippableCharmLevelHandle* In Equippable Charm Level); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.OnGunBuddyChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnHasValidDataChanged(bool NewValue); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.OnHasValidDataChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerCardHandleChanged(struct UPlayerCardHandle* PlayerCardHandle); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.OnPlayerCardHandleChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIconTransformChanged(struct FWidgetTransform IconTransform); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.OnIconTransformChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIconChanged(struct UTexture* IconTexture, bool DisplayIconAsBackground); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.OnIconChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnContentTypeChanged(enum class EAresContentType InContentType); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.OnContentTypeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateConditionalInputActionsPreferences(enum class EAresContentType InContentType); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.UpdateConditionalInputActionsPreferences // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ApplyDisplayOverrides(enum class EAresContentType InContentType); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.ApplyDisplayOverrides // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MakeViewModels(); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.MakeViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindViewModels(bool Bind); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.BindViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitFromReward(struct URewardModel* InRewardModel); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.InitFromReward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitFromHandle(struct UBaseHandle* RewardHandle); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.InitFromHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Finished_DFE099494ED8BB6C2A91B484EAE85C05(); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.Finished_DFE099494ED8BB6C2A91B484EAE85C05 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void K2_BindToViewModel(); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void PlayAnim(struct UWidgetAnimation* Animation, double Start at time, enum class EUMGSequencePlayMode Play Mode, struct TScriptInterface<IStoreOfferAnimationCaller> AnimationFinishCallback); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.PlayAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_View_RewardPreview(int32_t EntryPoint); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.ExecuteUbergraph_WBP_View_RewardPreview // (Final|UbergraphFunction) // @ game+0x19be2f0
	void ConditionalInputActionsPreferencesChanged__DelegateSignature(); // Function WBP_View_RewardPreview.WBP_View_RewardPreview_C.ConditionalInputActionsPreferencesChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

