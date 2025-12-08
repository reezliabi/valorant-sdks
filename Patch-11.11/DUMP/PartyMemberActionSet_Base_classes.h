// BlueprintGeneratedClass PartyMemberActionSet_Base.PartyMemberActionSet_Base_C
// Size: 0x718 (Inherited: 0x38)
struct UPartyMemberActionSet_Base_C : UObjectWithWorldContext {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x38(0x08)
	struct TMap<enum class EPartyMemberAction, struct UExternalUserAction*> UserActionMap; // 0x40(0x50)
	struct UPlatformPlayer* PlatformPlayer; // 0x90(0x08)
	struct UAresClientGameInstance* GameInstance; // 0x98(0x08)
	struct UWrapperUserAction* CombinedJoinUserAction; // 0xa0(0x08)
	struct UConfirmationModal_C* CachedUnblockConfirmationModal; // 0xa8(0x08)
	struct UConfirmationModal_C* CachedBlockConfirmationModal; // 0xb0(0x08)
	bool IsMe; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct FString Subject; // 0xc0(0x10)
	bool ShowPartyManagementActions; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct FString MatchID; // 0xd8(0x10)
	bool AllowReport; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct FUserActionDisplayInfo EditNoteDisplayInfo; // 0xf0(0x48)
	struct FMulticastInlineDelegate OnEditFriendNoteRequested; // 0x138(0x10)
	bool AllowEditNote; // 0x148(0x01)
	bool AllowAutoActionVisibilityUpdate; // 0x149(0x01)
	char pad_14A[0x6]; // 0x14a(0x06)
	struct FUserActionDisplayInfo AddFriendDisplayInfo; // 0x150(0x48)
	struct FUserActionDisplayInfo RemoveFriendDisplayInfo; // 0x198(0x48)
	struct FUserActionDisplayInfo KickDisplayInfo; // 0x1e0(0x48)
	struct FUserActionDisplayInfo ViewCareerDisplayInfo; // 0x228(0x48)
	struct FUserActionDisplayInfo InviteDisplayInfo; // 0x270(0x48)
	struct FUserActionDisplayInfo JoinDisplayInfo; // 0x2b8(0x48)
	struct FUserActionDisplayInfo RequestJoinDisplayInfo; // 0x300(0x48)
	struct FUserActionDisplayInfo PartyFullDisplayInfo; // 0x348(0x48)
	struct FUserActionDisplayInfo ReportDisplayInfo; // 0x390(0x48)
	struct FUserActionDisplayInfo LeaveDisplayInfo; // 0x3d8(0x48)
	struct FUserActionDisplayInfo MakeLeaderDisplayInfo; // 0x420(0x48)
	struct FUserActionDisplayInfo SendMessageDisplayInfo; // 0x468(0x48)
	struct FUserActionDisplayInfo AvoidTeammateDisplayInfo; // 0x4b0(0x48)
	struct FUserActionDisplayInfo UnavoidTeammateDisplayInfo; // 0x4f8(0x48)
	bool AllowAvoid; // 0x540(0x01)
	char pad_541[0x7]; // 0x541(0x07)
	struct FText Friendly Error; // 0x548(0x18)
	struct FUserActionDisplayInfo CopyIdDisplayInfo; // 0x560(0x48)
	struct FUserActionDisplayInfo BlockPlayerDisplayInfo; // 0x5a8(0x48)
	struct FUserActionDisplayInfo UnblockPlayerDisplayInfo; // 0x5f0(0x48)
	bool MatchJustFound; // 0x638(0x01)
	bool MatchmakingEventBound; // 0x639(0x01)
	char pad_63A[0x6]; // 0x63a(0x06)
	struct FUserActionDisplayInfo ReportTeamDisplayInfo; // 0x640(0x48)
	struct FUserActionDisplayInfo ViewTeamDisplayInfo; // 0x688(0x48)
	struct FUserActionDisplayInfo InviteToPartyTempPDisplayInfo; // 0x6d0(0x48)

	void Handle TempP Invite Success(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.Handle TempP Invite Success // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Handle TempP Invite Error(struct FString ReasonStringInDebugOnly); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.Handle TempP Invite Error // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ViewTeam(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.ViewTeam // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateViewTeamVisibility(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.UpdateViewTeamVisibility // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleViewTeam(struct UExternalUserAction* Source, struct FWildcard& Data, enum class EUserActionTriggerResponse& Response); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.HandleViewTeam // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateViewTeamAction(struct UExternalUserAction*& UserAction); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.CreateViewTeamAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool IsPremierPrestigeValid(struct FPremierPrestige& PremierPrestige); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.IsPremierPrestigeValid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetPremierPrestige(struct FPremierPrestige& OutPremierData); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.GetPremierPrestige // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Create TempP Invite Action(struct UExternalUserAction*& UserAction); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.Create TempP Invite Action // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update TempP Invite Visibility(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.Update TempP Invite Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Handle TempP Invite(struct UExternalUserAction* Source, struct FWildcard& Data, enum class EUserActionTriggerResponse& Response); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.Handle TempP Invite // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateReportTeamVisibility(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.UpdateReportTeamVisibility // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReportTeam(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.ReportTeam // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleReportTeam(struct UExternalUserAction* Source, struct FWildcard& Data, enum class EUserActionTriggerResponse& Response); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.HandleReportTeam // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateReportTeamAction(struct UExternalUserAction*& UserAction); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.CreateReportTeamAction // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleMatchmakingFoundStatusChanged(bool Match Found); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.HandleMatchmakingFoundStatusChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateUnblockPlayerVisibility(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.UpdateUnblockPlayerVisibility // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleUnblockSuccess(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.HandleUnblockSuccess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleUnblockConfirmed(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.HandleUnblockConfirmed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UnblockPlayer(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.UnblockPlayer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleUnblockPlayer(struct UExternalUserAction* Source, struct FWildcard& Data, enum class EUserActionTriggerResponse& Response); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.HandleUnblockPlayer // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateUnblockPlayerAction(struct UExternalUserAction*& UserAction); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.CreateUnblockPlayerAction // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleUnblockCancelled(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.HandleUnblockCancelled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleInviteError(enum class EPartyErrorEnum PartyErrorEnum, struct FString Description); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.HandleInviteError // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Get Is Platform Player Blocked(bool& Return); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.Get Is Platform Player Blocked // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void BlockPlayer(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.BlockPlayer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleBlockPlayer(struct UExternalUserAction* Source, struct FWildcard& Data, enum class EUserActionTriggerResponse& Response); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.HandleBlockPlayer // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateBlockPlayerAction(struct UExternalUserAction*& UserAction); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.CreateBlockPlayerAction // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateBlockPlayerVisibility(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.UpdateBlockPlayerVisibility // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleBlockCancelled(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.HandleBlockCancelled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleBlockSuccess(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.HandleBlockSuccess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleBlockConfirmed(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.HandleBlockConfirmed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateCopyIdVisibility(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.UpdateCopyIdVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CopyPlayerId(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.CopyPlayerId // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleCopyId(struct UExternalUserAction* Source, struct FWildcard& Data, enum class EUserActionTriggerResponse& Response); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.HandleCopyId // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateCopyPlayerIdAction(struct UExternalUserAction*& UserAction); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.CreateCopyPlayerIdAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateAvoidUnavoidLabel(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.UpdateAvoidUnavoidLabel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateAvoidUnavoidVisibility(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.UpdateAvoidUnavoidVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AvoidUnavoidTeammate(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.AvoidUnavoidTeammate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleAvoidUnavoid(struct UExternalUserAction* Source, struct FWildcard& Data, enum class EUserActionTriggerResponse& Response); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.HandleAvoidUnavoid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateAvoidUnavoidAction(struct UExternalUserAction*& UserAction); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.CreateAvoidUnavoidAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleGameFlowStateChanged(enum class EGameFlowStateType NewState); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.HandleGameFlowStateChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandlePlatformPlayerStatusChanged_PP(struct UPlatformPlayer* PlatformPlayer); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.HandlePlatformPlayerStatusChanged_PP // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandlePlatformPlayerStatusChanged_B(bool NewValue); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.HandlePlatformPlayerStatusChanged_B // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateEditNoteVisibility(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.UpdateEditNoteVisibility // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleEditNote(struct UExternalUserAction* Source, struct FWildcard& Data, enum class EUserActionTriggerResponse& Response); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.HandleEditNote // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateEditNoteAction(struct UExternalUserAction*& UserAction); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.CreateEditNoteAction // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UnbindPlatformPlayerListeners(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.UnbindPlatformPlayerListeners // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindPlatformPlayerListeners(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.BindPlatformPlayerListeners // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetCombinedJoinUserAction(struct TScriptInterface<IUserAction>& CombinedJoinUserAction); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.GetCombinedJoinUserAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void UpdateCombinedJoinActionVisibility(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.UpdateCombinedJoinActionVisibility // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWrapperUserAction* CreateCombinedJoinAction(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.CreateCombinedJoinAction // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct USocialPartyModel* GetOpenedSocialPlayerParty(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.GetOpenedSocialPlayerParty // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	struct USocialPlayer* GetOpenedSocialPlayer(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.GetOpenedSocialPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void GetUserAction(enum class EPartyMemberAction EUserAction, struct UExternalUserAction*& UserAction); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.GetUserAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	struct FString GetOpenedSubject(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.GetOpenedSubject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void RequestJoin(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.RequestJoin // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleRequestJoin(struct UExternalUserAction* Source, struct FWildcard& Data, enum class EUserActionTriggerResponse& Response); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.HandleRequestJoin // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPartyJoinError(enum class EPartyErrorEnum PartyErrorEnum); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.OnPartyJoinError // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Join(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.Join // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreatePartyFullAction(struct UExternalUserAction*& UserAction); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.CreatePartyFullAction // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateRequestJoinAction(struct UExternalUserAction*& UserAction); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.CreateRequestJoinAction // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateMakeLeaderVisibility(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.UpdateMakeLeaderVisibility // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMakeLeaderError(enum class EPartyErrorEnum PartyErrorEnum); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.OnMakeLeaderError // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MakeLeader(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.MakeLeader // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleMakeLeader(struct UExternalUserAction* Source, struct FWildcard& Data, enum class EUserActionTriggerResponse& Response); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.HandleMakeLeader // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateMakeLeaderAction(struct UExternalUserAction*& UserAction); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.CreateMakeLeaderAction // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateLeaveVisibility(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.UpdateLeaveVisibility // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void LeaveParty(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.LeaveParty // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleLeave(struct UExternalUserAction* Source, struct FWildcard& Data, enum class EUserActionTriggerResponse& Response); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.HandleLeave // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateLeaveAction(struct UExternalUserAction*& UserAction); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.CreateLeaveAction // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetParams(bool NewShowPartyActions, struct FString NewMatchID, bool NewAllowReport, bool NewAllowEditNote, bool NewAllowAvoid); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.SetParams // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Report(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.Report // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateReportVisibility(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.UpdateReportVisibility // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleReport(struct UExternalUserAction* Source, struct FWildcard& Data, enum class EUserActionTriggerResponse& Response); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.HandleReport // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateReportAction(struct UExternalUserAction*& UserAction); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.CreateReportAction // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleJoin(struct UExternalUserAction* Source, struct FWildcard& Data, enum class EUserActionTriggerResponse& Response); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.HandleJoin // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateJoinAction(struct UExternalUserAction*& UserAction); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.CreateJoinAction // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateInviteVisibility(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.UpdateInviteVisibility // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnInviteError(struct FString ReasonStringInDebugOnly); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.OnInviteError // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Invite(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.Invite // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleInvite(struct UExternalUserAction* Source, struct FWildcard& Data, enum class EUserActionTriggerResponse& Response); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.HandleInvite // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateInviteAction(struct UExternalUserAction*& UserAction); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.CreateInviteAction // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ViewCareer(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.ViewCareer // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateViewCareerVisibility(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.UpdateViewCareerVisibility // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleViewCareer(struct UExternalUserAction* Source, struct FWildcard& Data, enum class EUserActionTriggerResponse& Response); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.HandleViewCareer // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateViewCareerAction(struct UExternalUserAction*& UserAction); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.CreateViewCareerAction // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateAddRemoveFriendLabel(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.UpdateAddRemoveFriendLabel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleFriendChanged(bool NewValue); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.HandleFriendChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateKickVisibility(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.UpdateKickVisibility // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Empty(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.Empty // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Kick(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.Kick // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleKick(struct UExternalUserAction* Source, struct FWildcard& Data, enum class EUserActionTriggerResponse& Response); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.HandleKick // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateKickAction(struct UExternalUserAction*& UserAction); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.CreateKickAction // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetPlatformPlayer(struct UPlatformPlayer*& PlatformPlayer); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.GetPlatformPlayer // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void GetGameInstance(struct UAresClientGameInstance*& GameInstance); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.GetGameInstance // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void SendMessage(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.SendMessage // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleSendMessage(struct UExternalUserAction* Source, struct FWildcard& Data, enum class EUserActionTriggerResponse& Response); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.HandleSendMessage // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateSendMessageVisibility(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.UpdateSendMessageVisibility // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateSendMessageAction(struct UExternalUserAction*& UserAction); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.CreateSendMessageAction // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateAddRemoveFriendVisibility(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.UpdateAddRemoveFriendVisibility // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateUserActionsVisibility(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.UpdateUserActionsVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetPlatformPlayer(struct UPlatformPlayer* NewValue); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.SetPlatformPlayer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleAddRemoveFriend(struct UExternalUserAction* Source, struct FWildcard& Data, enum class EUserActionTriggerResponse& Response); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.HandleAddRemoveFriend // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateAddRemoveFriendAction(struct UExternalUserAction*& UserAction); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.CreateAddRemoveFriendAction // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Init(struct UAresClientGameInstance* GameInstance); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RemoveFriendOrAddFriend(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.RemoveFriendOrAddFriend // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Confirm Remove Friend(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.Confirm Remove Friend // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Cancel Remove Friend(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.Cancel Remove Friend // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_PartyMemberActionSet_Base(int32_t EntryPoint); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.ExecuteUbergraph_PartyMemberActionSet_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnEditFriendNoteRequested__DelegateSignature(); // Function PartyMemberActionSet_Base.PartyMemberActionSet_Base_C.OnEditFriendNoteRequested__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

