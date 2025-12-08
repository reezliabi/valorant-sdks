// BlueprintGeneratedClass VM_Ping.VM_Ping_C
// Size: 0x218 (Inherited: 0xc8)
struct UVM_Ping_C : UPingViewModel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)
	struct TArray<struct FStruct_GamepodPingOptionInfo> GamepodPingInfo; // 0xd0(0x10)
	struct UMaterialInstanceDynamic* MIDPing; // 0xe0(0x08)
	int32_t Ping; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct FMulticastInlineDelegate OnGamepodPingsChanged; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnPingValueChanged; // 0x100(0x10)
	struct UMaterialInstance* MatPingParent; // 0x110(0x08)
	struct TMap<int32_t, enum class EPingQuality> PingPingQualityMap; // 0x118(0x50)
	struct FMulticastInlineDelegate OnPingMaterialChanged; // 0x168(0x10)
	struct TMap<enum class PartyPingStatus, struct FLinearColor> PartyPingStatusToPingQualitiesMap; // 0x178(0x50)
	struct TMap<struct FString, bool> PreferredGamePods; // 0x1c8(0x50)

	void CreateGamepodPingMaterial(int32_t Ping, struct UMaterialInstanceDynamic*& PingMaterialInstance); // Function VM_Ping.VM_Ping_C.CreateGamepodPingMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	enum class EPingQuality GetPingQuality(int32_t PingValue); // Function VM_Ping.VM_Ping_C.GetPingQuality // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetGamePodQualities(struct FLinearColor NewGamePodQualities); // Function VM_Ping.VM_Ping_C.SetGamePodQualities // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void LoadGamepodPings(); // Function VM_Ping.VM_Ping_C.LoadGamepodPings // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitViewModel(); // Function VM_Ping.VM_Ping_C.InitViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateGamepodPingInfos(struct TArray<struct FPingInfo>& PingInfo, struct TArray<struct FStruct_GamepodPingOptionInfo>& GamepodPingInfo); // Function VM_Ping.VM_Ping_C.CreateGamepodPingInfos // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetOKPingIconColors(struct FLinearColor Color, struct UMaterialInstanceDynamic*& PingMaterialInstance); // Function VM_Ping.VM_Ping_C.SetOKPingIconColors // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetNoPingIconColors(struct UMaterialInstanceDynamic*& PingMaterialInstance); // Function VM_Ping.VM_Ping_C.SetNoPingIconColors // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetGoodPingIconColors(struct FLinearColor Color, struct UMaterialInstanceDynamic*& PingMaterialInstance); // Function VM_Ping.VM_Ping_C.SetGoodPingIconColors // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetGreatPingIconColors(struct FLinearColor Color, struct UMaterialInstanceDynamic*& PingMaterialInstance); // Function VM_Ping.VM_Ping_C.SetGreatPingIconColors // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetBadPingIconColors(struct FLinearColor Color, struct UMaterialInstanceDynamic*& PingMaterialInstance); // Function VM_Ping.VM_Ping_C.SetBadPingIconColors // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CalculatePingMaterialColor(int32_t Ping, struct UMaterialInstanceDynamic*& PingMaterialInstance); // Function VM_Ping.VM_Ping_C.CalculatePingMaterialColor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetPingMaterialTemplate(struct UMaterialInstance* Material); // Function VM_Ping.VM_Ping_C.SetPingMaterialTemplate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetPingMaterial(struct UMaterialInstanceDynamic* Material Instance); // Function VM_Ping.VM_Ping_C.SetPingMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetPingValue(int32_t InPing); // Function VM_Ping.VM_Ping_C.SetPingValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetGamepodPings(struct TArray<struct FStruct_GamepodPingOptionInfo>& GamepodPingOptionInfo); // Function VM_Ping.VM_Ping_C.SetGamepodPings // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandlePreferredGamepodClicked(struct FString GamePodID, bool IsSelected); // Function VM_Ping.VM_Ping_C.HandlePreferredGamepodClicked // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetPingValue(int32_t& Ping); // Function VM_Ping.VM_Ping_C.GetPingValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetPingMaterial(struct UMaterialInstanceDynamic*& MIDPing); // Function VM_Ping.VM_Ping_C.GetPingMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void OnModelGamePodsChanged(struct FLinearColor NewGamePodQualities); // Function VM_Ping.VM_Ping_C.OnModelGamePodsChanged // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnViewModelCreated(); // Function VM_Ping.VM_Ping_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_VM_Ping(int32_t EntryPoint); // Function VM_Ping.VM_Ping_C.ExecuteUbergraph_VM_Ping // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnGamepodPingsChanged__DelegateSignature(struct TArray<struct FStruct_GamepodPingOptionInfo>& GamepodPingInfo); // Function VM_Ping.VM_Ping_C.OnGamepodPingsChanged__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPingMaterialChanged__DelegateSignature(struct UMaterialInstanceDynamic* PingMaterial); // Function VM_Ping.VM_Ping_C.OnPingMaterialChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPingValueChanged__DelegateSignature(int32_t Value); // Function VM_Ping.VM_Ping_C.OnPingValueChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

