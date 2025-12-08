// BlueprintGeneratedClass VM_CustomGame_TeamInfo.VM_CustomGame_TeamInfo_C
// Size: 0x280 (Inherited: 0x90)
struct UVM_CustomGame_TeamInfo_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct TSet<struct FString> Defenders; // 0x98(0x50)
	struct TSet<struct FString> Attackers; // 0xe8(0x50)
	struct TSet<struct FString> Spectators; // 0x138(0x50)
	struct UCustomGameModel* CustomGameModel; // 0x188(0x08)
	struct FMulticastInlineDelegate OnAttackersChanged; // 0x190(0x10)
	struct FMulticastInlineDelegate OnDefendersChanged; // 0x1a0(0x10)
	struct FMulticastInlineDelegate OnSpectatorsChanged; // 0x1b0(0x10)
	struct TSet<struct FString> DefendersCoaches; // 0x1c0(0x50)
	struct TSet<struct FString> AttackersCoaches; // 0x210(0x50)
	struct FMulticastInlineDelegate OnDefendersCoachesChanged; // 0x260(0x10)
	struct FMulticastInlineDelegate OnAttackersCoachesChanged; // 0x270(0x10)

	void BindToAttackerCoachModificationEvents(); // Function VM_CustomGame_TeamInfo.VM_CustomGame_TeamInfo_C.BindToAttackerCoachModificationEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToDefenderCoachModificationEvents(); // Function VM_CustomGame_TeamInfo.VM_CustomGame_TeamInfo_C.BindToDefenderCoachModificationEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetAttackersCoaches(struct TSet<struct FString>& AttackersCoaches); // Function VM_CustomGame_TeamInfo.VM_CustomGame_TeamInfo_C.GetAttackersCoaches // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetDefendersCoaches(struct TSet<struct FString>& DefendersCoaches); // Function VM_CustomGame_TeamInfo.VM_CustomGame_TeamInfo_C.GetDefendersCoaches // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void EmptyCompletedCallback(); // Function VM_CustomGame_TeamInfo.VM_CustomGame_TeamInfo_C.EmptyCompletedCallback // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetSpectators(struct TSet<struct FString>& Attackers); // Function VM_CustomGame_TeamInfo.VM_CustomGame_TeamInfo_C.GetSpectators // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetDefenders(struct TSet<struct FString>& Defenders); // Function VM_CustomGame_TeamInfo.VM_CustomGame_TeamInfo_C.GetDefenders // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetAttackers(struct TSet<struct FString>& Attackers); // Function VM_CustomGame_TeamInfo.VM_CustomGame_TeamInfo_C.GetAttackers // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void AddMemberToSpectators(struct UPartyPlayerModel* Player); // Function VM_CustomGame_TeamInfo.VM_CustomGame_TeamInfo_C.AddMemberToSpectators // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddMemberToAttackersCoaches(struct UPartyPlayerModel* Player); // Function VM_CustomGame_TeamInfo.VM_CustomGame_TeamInfo_C.AddMemberToAttackersCoaches // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddMemberToDefendersCoaches(struct UPartyPlayerModel* Player); // Function VM_CustomGame_TeamInfo.VM_CustomGame_TeamInfo_C.AddMemberToDefendersCoaches // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToSpectatorModificationEvents(); // Function VM_CustomGame_TeamInfo.VM_CustomGame_TeamInfo_C.BindToSpectatorModificationEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToAttackerModificationEvents(); // Function VM_CustomGame_TeamInfo.VM_CustomGame_TeamInfo_C.BindToAttackerModificationEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToDefenderModificationEvents(); // Function VM_CustomGame_TeamInfo.VM_CustomGame_TeamInfo_C.BindToDefenderModificationEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SwitchTeamOfMember(struct FString Subject, enum class ECustomGameTeam Team); // Function VM_CustomGame_TeamInfo.VM_CustomGame_TeamInfo_C.SwitchTeamOfMember // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SwitchTeamOfLocalPlayer(enum class ECustomGameTeam Team); // Function VM_CustomGame_TeamInfo.VM_CustomGame_TeamInfo_C.SwitchTeamOfLocalPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RemoveMemberFromTeam(enum class ECustomGameTeam Team, struct FString Subject); // Function VM_CustomGame_TeamInfo.VM_CustomGame_TeamInfo_C.RemoveMemberFromTeam // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddMemberToAttackers(struct UPartyPlayerModel* Player); // Function VM_CustomGame_TeamInfo.VM_CustomGame_TeamInfo_C.AddMemberToAttackers // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddMemberToDefenders(struct UPartyPlayerModel* Player); // Function VM_CustomGame_TeamInfo.VM_CustomGame_TeamInfo_C.AddMemberToDefenders // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RemoveMembersFromSpectators(struct UPartyPlayerModel* Player); // Function VM_CustomGame_TeamInfo.VM_CustomGame_TeamInfo_C.RemoveMembersFromSpectators // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RemoveMemberFromAttackersCoaches(struct UPartyPlayerModel* Player); // Function VM_CustomGame_TeamInfo.VM_CustomGame_TeamInfo_C.RemoveMemberFromAttackersCoaches // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RemoveMemberFromDefendersCoaches(struct UPartyPlayerModel* Player); // Function VM_CustomGame_TeamInfo.VM_CustomGame_TeamInfo_C.RemoveMemberFromDefendersCoaches // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RemoveMemberFromAttackers(struct UPartyPlayerModel* Player); // Function VM_CustomGame_TeamInfo.VM_CustomGame_TeamInfo_C.RemoveMemberFromAttackers // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RemoveMemberFromDefenders(struct UPartyPlayerModel* Player); // Function VM_CustomGame_TeamInfo.VM_CustomGame_TeamInfo_C.RemoveMemberFromDefenders // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddMemberToTeam(enum class ECustomGameTeam Team, struct FString Subject); // Function VM_CustomGame_TeamInfo.VM_CustomGame_TeamInfo_C.AddMemberToTeam // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitializeTeam(enum class ECustomGameTeam Team); // Function VM_CustomGame_TeamInfo.VM_CustomGame_TeamInfo_C.InitializeTeam // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void FindTeamOfMember(struct FString Subject, enum class ECustomGameTeam& Team); // Function VM_CustomGame_TeamInfo.VM_CustomGame_TeamInfo_C.FindTeamOfMember // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnViewModelCreated(); // Function VM_CustomGame_TeamInfo.VM_CustomGame_TeamInfo_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void RefreshBroadcast(); // Function VM_CustomGame_TeamInfo.VM_CustomGame_TeamInfo_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_VM_CustomGame_TeamInfo(int32_t EntryPoint); // Function VM_CustomGame_TeamInfo.VM_CustomGame_TeamInfo_C.ExecuteUbergraph_VM_CustomGame_TeamInfo // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnAttackersCoachesChanged__DelegateSignature(struct TSet<struct FString> AttackersCoachers); // Function VM_CustomGame_TeamInfo.VM_CustomGame_TeamInfo_C.OnAttackersCoachesChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnDefendersCoachesChanged__DelegateSignature(struct TSet<struct FString> DefendersCoaches); // Function VM_CustomGame_TeamInfo.VM_CustomGame_TeamInfo_C.OnDefendersCoachesChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSpectatorsChanged__DelegateSignature(struct TSet<struct FString> Spectators); // Function VM_CustomGame_TeamInfo.VM_CustomGame_TeamInfo_C.OnSpectatorsChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnDefendersChanged__DelegateSignature(struct TSet<struct FString> Defenders); // Function VM_CustomGame_TeamInfo.VM_CustomGame_TeamInfo_C.OnDefendersChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAttackersChanged__DelegateSignature(struct TSet<struct FString> Attackers); // Function VM_CustomGame_TeamInfo.VM_CustomGame_TeamInfo_C.OnAttackersChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

