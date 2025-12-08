// BlueprintGeneratedClass VM_BTEMilestone.VM_BTEMilestone_C
// Size: 0x1d0 (Inherited: 0x90)
struct UVM_BTEMilestone_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct FText Title; // 0x98(0x18)
	struct FMulticastInlineDelegate OnTitleChanged; // 0xb0(0x10)
	struct FGuid Milestone ID; // 0xc0(0x10)
	enum class BTEMilestoneState State; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct FMulticastInlineDelegate OnStateChanged; // 0xd8(0x10)
	struct FString Link; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnLinkChanged; // 0xf8(0x10)
	struct FText ButtonText; // 0x108(0x18)
	struct FMulticastInlineDelegate OnButtonTextChanged; // 0x120(0x10)
	struct TArray<struct UBTEEarnableItem*> EarnableRewards; // 0x130(0x10)
	struct FMulticastInlineDelegate OnEarnableRewardsChanged; // 0x140(0x10)
	int32_t Milestone; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct FString RecommendedQueueID; // 0x158(0x10)
	double PercentageComplete; // 0x168(0x08)
	struct FMulticastInlineDelegate OnMissionCountChanged; // 0x170(0x10)
	int32_t MissionCount; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
	struct FMulticastInlineDelegate OnProgressPercentageChanged; // 0x188(0x10)
	struct FText ProgressText; // 0x198(0x18)
	struct FMulticastInlineDelegate OnProgressTextChanged; // 0x1b0(0x10)
	struct TArray<struct URewardModel*> RewardModels; // 0x1c0(0x10)

	void GetMilestoneState(enum class BTEMilestoneState& State); // Function VM_BTEMilestone.VM_BTEMilestone_C.GetMilestoneState // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void OnActiveMilestoneChanged(int32_t NewActiveMilestone); // Function VM_BTEMilestone.VM_BTEMilestone_C.OnActiveMilestoneChanged // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindBTEManagerEvents(); // Function VM_BTEMilestone.VM_BTEMilestone_C.BindBTEManagerEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetProgressText(struct FText ProgressText); // Function VM_BTEMilestone.VM_BTEMilestone_C.SetProgressText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update Player Milestone Progress Values(struct UBTEMilestoneUIData* UIData); // Function VM_BTEMilestone.VM_BTEMilestone_C.Update Player Milestone Progress Values // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ConvertRewardsToEarnableRewards(struct TArray<struct URewardModel*>& Rewards, struct TArray<struct UBTEEarnableItem*>& EarnableRewards); // Function VM_BTEMilestone.VM_BTEMilestone_C.ConvertRewardsToEarnableRewards // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetMissionCount(int32_t MissionCount); // Function VM_BTEMilestone.VM_BTEMilestone_C.SetMissionCount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Progress Percentage(double ProgressPercentage); // Function VM_BTEMilestone.VM_BTEMilestone_C.Set Progress Percentage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StartNavigationToLobby(); // Function VM_BTEMilestone.VM_BTEMilestone_C.StartNavigationToLobby // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void NavigateToLobbyWithDefaultQueue(enum class EPartyErrorEnum PartyErrorEnum); // Function VM_BTEMilestone.VM_BTEMilestone_C.NavigateToLobbyWithDefaultQueue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void NavigateToRewards(); // Function VM_BTEMilestone.VM_BTEMilestone_C.NavigateToRewards // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update Milestone(struct FBTEMilestone Found BTE Milestone); // Function VM_BTEMilestone.VM_BTEMilestone_C.Update Milestone // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Init from Milestone(int32_t Milestone); // Function VM_BTEMilestone.VM_BTEMilestone_C.Init from Milestone // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetEarnableRewards(struct TArray<struct UBTEEarnableItem*>& EarnableRewards); // Function VM_BTEMilestone.VM_BTEMilestone_C.SetEarnableRewards // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetButtonText(struct FText ButtonText); // Function VM_BTEMilestone.VM_BTEMilestone_C.SetButtonText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetLink(struct FString Link); // Function VM_BTEMilestone.VM_BTEMilestone_C.SetLink // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetState(enum class BTEMilestoneState State); // Function VM_BTEMilestone.VM_BTEMilestone_C.SetState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On BTEData Loaded With Milestone UUID(struct UBTEHandle* BTEHandle); // Function VM_BTEMilestone.VM_BTEMilestone_C.On BTEData Loaded With Milestone UUID // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CompleteNavigationToLobby(); // Function VM_BTEMilestone.VM_BTEMilestone_C.CompleteNavigationToLobby // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On BTE Data Loaded With Milestone(struct UBTEHandle* BTEHandle); // Function VM_BTEMilestone.VM_BTEMilestone_C.On BTE Data Loaded With Milestone // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitFromMilestoneID(struct FGuid MilestoneID); // Function VM_BTEMilestone.VM_BTEMilestone_C.InitFromMilestoneID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetTitle(struct FText Title); // Function VM_BTEMilestone.VM_BTEMilestone_C.SetTitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RefreshBroadcast(); // Function VM_BTEMilestone.VM_BTEMilestone_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Reset(); // Function VM_BTEMilestone.VM_BTEMilestone_C.Reset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_VM_BTEMilestone(int32_t EntryPoint); // Function VM_BTEMilestone.VM_BTEMilestone_C.ExecuteUbergraph_VM_BTEMilestone // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnProgressTextChanged__DelegateSignature(struct FText ProgressText); // Function VM_BTEMilestone.VM_BTEMilestone_C.OnProgressTextChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnProgressPercentageChanged__DelegateSignature(double ProgressPercentage); // Function VM_BTEMilestone.VM_BTEMilestone_C.OnProgressPercentageChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMissionCountChanged__DelegateSignature(int32_t MissionCount); // Function VM_BTEMilestone.VM_BTEMilestone_C.OnMissionCountChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEarnableRewardsChanged__DelegateSignature(struct TArray<struct UBTEEarnableItem*>& EarnableRewards); // Function VM_BTEMilestone.VM_BTEMilestone_C.OnEarnableRewardsChanged__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnButtonTextChanged__DelegateSignature(struct FText ButtonText); // Function VM_BTEMilestone.VM_BTEMilestone_C.OnButtonTextChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnLinkChanged__DelegateSignature(struct FString Link); // Function VM_BTEMilestone.VM_BTEMilestone_C.OnLinkChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnStateChanged__DelegateSignature(enum class BTEMilestoneState State); // Function VM_BTEMilestone.VM_BTEMilestone_C.OnStateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTitleChanged__DelegateSignature(struct FText Title); // Function VM_BTEMilestone.VM_BTEMilestone_C.OnTitleChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

