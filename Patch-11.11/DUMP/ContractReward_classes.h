// WidgetBlueprintGeneratedClass ContractReward.ContractReward_C
// Size: 0x3f0 (Inherited: 0x318)
struct UContractReward_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Selected; // 0x320(0x08)
	struct UProgressBar* Bar; // 0x328(0x08)
	struct UProgressBar* BarBase; // 0x330(0x08)
	struct UImage* Glint; // 0x338(0x08)
	struct UTextBlock* Level; // 0x340(0x08)
	struct UOverlay* ProgressBar; // 0x348(0x08)
	struct UButton* RewardButton; // 0x350(0x08)
	struct USizeBox* SizeBox_4; // 0x358(0x08)
	struct USquareRewardThumbnail_C* SquareRewardThumbnail; // 0x360(0x08)
	struct UImage* TierBackground; // 0x368(0x08)
	struct UOverlay* TierNumber; // 0x370(0x08)
	struct UUniversalCarouselBG_C* UniversalCarouselBG; // 0x378(0x08)
	struct UProgressBar* YellowBar; // 0x380(0x08)
	struct UContractLevelViewModel* LevelViewModel; // 0x388(0x08)
	struct FMulticastInlineDelegate OnRewardClicked; // 0x390(0x10)
	struct URewardModel* RewardModel; // 0x3a0(0x08)
	struct UContractViewModel* ContractViewModel; // 0x3a8(0x08)
	struct FSlateColor PremiumRewardLockTint; // 0x3b0(0x14)
	struct FSlateColor FreeRewardLockTint; // 0x3c4(0x14)
	enum class ContractRewardType RewardType; // 0x3d8(0x01)
	char pad_3D9[0x7]; // 0x3d9(0x07)
	double RewardSize; // 0x3e0(0x08)
	bool HideTierNumber; // 0x3e8(0x01)
	bool HideLocks; // 0x3e9(0x01)
	bool ShowGlint; // 0x3ea(0x01)
	bool IsSelected; // 0x3eb(0x01)
	int32_t XPToCompleteReward; // 0x3ec(0x04)

	bool Should Show Progress Bar(); // Function ContractReward.ContractReward_C.Should Show Progress Bar // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetYellowBarProgress(double Progress); // Function ContractReward.ContractReward_C.SetYellowBarProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetShowGlint(bool Show); // Function ContractReward.ContractReward_C.SetShowGlint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleOverallPogressChanged(float Progress); // Function ContractReward.ContractReward_C.HandleOverallPogressChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateProgress(); // Function ContractReward.ContractReward_C.UpdateProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandlePremiumTrackOwnedChanged(bool PremiumTrackOwned); // Function ContractReward.ContractReward_C.HandlePremiumTrackOwnedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetProgressBarVisible(bool Visible); // Function ContractReward.ContractReward_C.SetProgressBarVisible // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetProgress(double Progress); // Function ContractReward.ContractReward_C.SetProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SelectLevel(); // Function ContractReward.ContractReward_C.SelectLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIsSelected(bool NewIsSelected); // Function ContractReward.ContractReward_C.SetIsSelected // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateIsCompleted(); // Function ContractReward.ContractReward_C.UpdateIsCompleted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateTierNumber(); // Function ContractReward.ContractReward_C.UpdateTierNumber // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleLeveldCompletedChanged(bool NewIsCompleted); // Function ContractReward.ContractReward_C.HandleLeveldCompletedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Init(); // Function ContractReward.ContractReward_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function ContractReward.ContractReward_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function ContractReward.ContractReward_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Button_89_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function ContractReward.ContractReward_C.BndEvt__Button_89_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__RewardButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function ContractReward.ContractReward_C.BndEvt__RewardButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__RewardButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function ContractReward.ContractReward_C.BndEvt__RewardButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__RewardButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(); // Function ContractReward.ContractReward_C.BndEvt__RewardButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__RewardButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // Function ContractReward.ContractReward_C.BndEvt__RewardButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_ContractReward(int32_t EntryPoint); // Function ContractReward.ContractReward_C.ExecuteUbergraph_ContractReward // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnRewardClicked__DelegateSignature(struct URewardModel* RewardModel, int32_t LevelNumber, struct UContractReward_C* ContractLevel); // Function ContractReward.ContractReward_C.OnRewardClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

