// BlueprintGeneratedClass VM_PremierCrests.VM_PremierCrests_C
// Size: 0x171 (Inherited: 0x90)
struct UVM_PremierCrests_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct FString Subject; // 0x98(0x10)
	struct FString RosterID; // 0xa8(0x10)
	struct UPremierPlayerCrestsModelOld* PlayerCrestsModel; // 0xb8(0x08)
	struct FMulticastInlineDelegate OnSubjectChanged; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnRosterIDChanged; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnPlayerCrestsModelChanged; // 0xe0(0x10)
	struct UPremierRosterViewModel* PremierRosterViewModel; // 0xf0(0x08)
	struct FMulticastInlineDelegate OnPremierRosterViewModelChanged; // 0xf8(0x10)
	struct TMap<struct FGuid, struct UPremierSeasonModelOld*> PremierSeasonModels; // 0x108(0x50)
	bool SeasonDataFetched; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)
	struct FMulticastInlineDelegate OnSeasonDataFetched; // 0x160(0x10)
	bool PlayerCrestsModelSet; // 0x170(0x01)

	void Set SeasonDataFetched(bool IsDataFetched); // Function VM_PremierCrests.VM_PremierCrests_C.Set SeasonDataFetched // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsCurrentSeasonActiveSeason(struct FGuid SeasonID, bool& IsActiveSeason); // Function VM_PremierCrests.VM_PremierCrests_C.IsCurrentSeasonActiveSeason // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void DidPlayerParticipateInSeason(struct FGuid SeasonID, bool& DidParticipate); // Function VM_PremierCrests.VM_PremierCrests_C.DidPlayerParticipateInSeason // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void IsRosterEnrolled(bool& IsEnrolled); // Function VM_PremierCrests.VM_PremierCrests_C.IsRosterEnrolled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetCrestDescriptionInfo(bool IsPlayerCrest, struct FGuid SeasonID, struct FString& RosterName, struct FString& RosterTag, struct FText& DivisionName); // Function VM_PremierCrests.VM_PremierCrests_C.GetCrestDescriptionInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetCrestVisualizationInfo(bool IsPlayerCrest, struct FGuid SeasonID, enum class EPremierDivisionGroup& DivisionGroup, enum class EPremierCrestType& CrestType, double& FillPercentage); // Function VM_PremierCrests.VM_PremierCrests_C.GetCrestVisualizationInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetRosterID(struct FString New RosterID); // Function VM_PremierCrests.VM_PremierCrests_C.SetRosterID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void FetchPremierRosterViewModel(); // Function VM_PremierCrests.VM_PremierCrests_C.FetchPremierRosterViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetPremierRosterViewModel(struct UPremierRosterViewModel* New PremierRosterViewModel); // Function VM_PremierCrests.VM_PremierCrests_C.SetPremierRosterViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void FetchPremierPlayerCrestsModel(); // Function VM_PremierCrests.VM_PremierCrests_C.FetchPremierPlayerCrestsModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetPlayerRosterInfo(struct FGuid SeasonID, struct FString& RosterName, struct FString& RosterTag, struct FText& DivisionName); // Function VM_PremierCrests.VM_PremierCrests_C.GetPlayerRosterInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void IsPlayerEnrolled(bool& IsEnrolled); // Function VM_PremierCrests.VM_PremierCrests_C.IsPlayerEnrolled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Refresh(); // Function VM_PremierCrests.VM_PremierCrests_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Init With Subject and RosterID(struct FString Subject, struct FString RosterID); // Function VM_PremierCrests.VM_PremierCrests_C.Init With Subject and RosterID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePremierRosterViewModel(); // Function VM_PremierCrests.VM_PremierCrests_C.UpdatePremierRosterViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePlayerCrestsModel(); // Function VM_PremierCrests.VM_PremierCrests_C.UpdatePlayerCrestsModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateRosterID(struct FString RosterID); // Function VM_PremierCrests.VM_PremierCrests_C.UpdateRosterID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateSubject(struct FString Subject); // Function VM_PremierCrests.VM_PremierCrests_C.UpdateSubject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToPremierRosterViewModelUpdates(bool Bind); // Function VM_PremierCrests.VM_PremierCrests_C.BindToPremierRosterViewModelUpdates // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToPlayerCrestsUpdates(bool Bind); // Function VM_PremierCrests.VM_PremierCrests_C.BindToPlayerCrestsUpdates // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetPlayerCrestsModel(struct UPremierPlayerCrestsModelOld* New PremierPlayerCrestsModel); // Function VM_PremierCrests.VM_PremierCrests_C.SetPlayerCrestsModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetSubject(struct FString New Subject); // Function VM_PremierCrests.VM_PremierCrests_C.SetSubject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnViewModelCreated(); // Function VM_PremierCrests.VM_PremierCrests_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void Nullop(); // Function VM_PremierCrests.VM_PremierCrests_C.Nullop // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On PremierSeasonsLoaded(struct FPremierSeasonHandles& PremierSeasonHandles); // Function VM_PremierCrests.VM_PremierCrests_C.On PremierSeasonsLoaded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_VM_PremierCrests(int32_t EntryPoint); // Function VM_PremierCrests.VM_PremierCrests_C.ExecuteUbergraph_VM_PremierCrests // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnSeasonDataFetched__DelegateSignature(); // Function VM_PremierCrests.VM_PremierCrests_C.OnSeasonDataFetched__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRosterIDChanged__DelegateSignature(struct FString New RosterID); // Function VM_PremierCrests.VM_PremierCrests_C.OnRosterIDChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPremierRosterViewModelChanged__DelegateSignature(struct UPremierRosterViewModel* New PremierRosterViewModel); // Function VM_PremierCrests.VM_PremierCrests_C.OnPremierRosterViewModelChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerCrestsModelChanged__DelegateSignature(struct UPremierPlayerCrestsModelOld* PlayerCrests); // Function VM_PremierCrests.VM_PremierCrests_C.OnPlayerCrestsModelChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSubjectChanged__DelegateSignature(struct FString Subject); // Function VM_PremierCrests.VM_PremierCrests_C.OnSubjectChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

