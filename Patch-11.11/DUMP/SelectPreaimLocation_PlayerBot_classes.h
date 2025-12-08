// BlueprintGeneratedClass SelectPreaimLocation_PlayerBot.SelectPreaimLocation_PlayerBot_C
// Size: 0x3ad (Inherited: 0xd8)
struct USelectPreaimLocation_PlayerBot_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct TArray<None> AllWaypoints; // 0xe0(0x10)
	struct APawn* ControlledPawn; // 0xf0(0x08)
	struct TMap<struct AMapMarkupWaypoint*, double> PositionInfluence; // 0xf8(0x50)
	struct FName PreaimWaypointBlackboardName; // 0x148(0x0c)
	bool DrawWaypointDebug; // 0x154(0x01)
	bool DrawEngageDistanceOfBestDebug; // 0x155(0x01)
	bool DrawBestWaypointDebug; // 0x156(0x01)
	char pad_157[0x1]; // 0x157(0x01)
	double DeltaSeconds; // 0x158(0x08)
	struct TMap<struct AMapMarkupWaypoint*, struct FString> DebugText; // 0x160(0x50)
	struct TMap<struct AMapMarkupWaypoint*, struct FVector> LookLocation; // 0x1b0(0x50)
	struct UEngageDistanceComponent_C* EngageDistanceComponent; // 0x200(0x08)
	double MaxEngageDistance; // 0x208(0x08)
	double MaxPathLength; // 0x210(0x08)
	struct AMapMarkupWaypoint* BestWaypoint; // 0x218(0x08)
	double BestUtil; // 0x220(0x08)
	struct FVector BestWaypointLookAtLocation; // 0x228(0x18)
	struct TMap<struct AMapMarkupWaypoint*, struct FVector> LastEngageDistanceUpdateLocation; // 0x240(0x50)
	double EngageDistanceUpdateInterval; // 0x290(0x08)
	struct FVector PreaimLocationOffset; // 0x298(0x18)
	struct TMap<struct AMapMarkupWaypoint*, struct FEngageDistanceInfo> EngageDistanceInfo; // 0x2b0(0x50)
	struct UAIAimPriorityComponent* AimPriorityComponent; // 0x300(0x08)
	struct AController_ExamplePlayerBot_C* BotController; // 0x308(0x08)
	bool ForceUpdateEngageDistance; // 0x310(0x01)
	char pad_311[0x7]; // 0x311(0x07)
	struct USelectCombatTarget_PlayerBot_C* SelectCombatTargetComponent; // 0x318(0x08)
	double ClosingSpeedBonusThreshold; // 0x320(0x08)
	double ClosingSpeedBonus; // 0x328(0x08)
	double LowEngageDistanceBonusThreshold; // 0x330(0x08)
	double LowEngageDistanceBonus; // 0x338(0x08)
	double VisibilityBonus; // 0x340(0x08)
	struct UAISpatialAwarenessAmortizationManagerComponent* AmortizationManagerComponent; // 0x348(0x08)
	struct TMap<struct AMapMarkupWaypoint*, double> WaypointUtilities; // 0x350(0x50)
	int32_t UpdateIndex; // 0x3a0(0x04)
	int32_t NumWaypointUpdatesPerTick; // 0x3a4(0x04)
	struct FInfluenceLayerBlockID CachedInfluenceBlockID; // 0x3a8(0x04)
	bool AddUtilityDebugInfo; // 0x3ac(0x01)

	void Debugging Waypoint(bool& TRUE); // Function SelectPreaimLocation_PlayerBot.SelectPreaimLocation_PlayerBot_C.Debugging Waypoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetAmortizedWorkCache(); // Function SelectPreaimLocation_PlayerBot.SelectPreaimLocation_PlayerBot_C.SetAmortizedWorkCache // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateWaypointInfo(struct AMapMarkupWaypoint* MapMarkupWaypoint); // Function SelectPreaimLocation_PlayerBot.SelectPreaimLocation_PlayerBot_C.UpdateWaypointInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateWaypointUtility(struct AMapMarkupWaypoint* MapMarkupWaypoint); // Function SelectPreaimLocation_PlayerBot.SelectPreaimLocation_PlayerBot_C.UpdateWaypointUtility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CheckWaypointVisibility(struct AActor* Waypoint, bool& HasVisibility); // Function SelectPreaimLocation_PlayerBot.SelectPreaimLocation_PlayerBot_C.CheckWaypointVisibility // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetBestWaypointEngageDistanceInfo(struct FEngageDistanceInfo& Info, bool& InfoFound); // Function SelectPreaimLocation_PlayerBot.SelectPreaimLocation_PlayerBot_C.GetBestWaypointEngageDistanceInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetWaypointUtility(struct AMapMarkupWaypoint* Waypoint, double& Utility); // Function SelectPreaimLocation_PlayerBot.SelectPreaimLocation_PlayerBot_C.GetWaypointUtility // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DebugDrawBestWaypoint(); // Function SelectPreaimLocation_PlayerBot.SelectPreaimLocation_PlayerBot_C.DebugDrawBestWaypoint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddTextToWaypoint(struct AMapMarkupWaypoint* Waypoint, struct FString Text); // Function SelectPreaimLocation_PlayerBot.SelectPreaimLocation_PlayerBot_C.AddTextToWaypoint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void FindBestPreaimWaypoint(struct AMapMarkupWaypoint*& Waypoint, double& Utility); // Function SelectPreaimLocation_PlayerBot.SelectPreaimLocation_PlayerBot_C.FindBestPreaimWaypoint // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DebugDrawWaypoint(); // Function SelectPreaimLocation_PlayerBot.SelectPreaimLocation_PlayerBot_C.DebugDrawWaypoint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateWaypointInfluence(struct AMapMarkupWaypoint* MapMarkupWaypoint); // Function SelectPreaimLocation_PlayerBot.SelectPreaimLocation_PlayerBot_C.UpdateWaypointInfluence // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateEngageDistance(struct AMapMarkupWaypoint* MapMarkupWaypoint); // Function SelectPreaimLocation_PlayerBot.SelectPreaimLocation_PlayerBot_C.UpdateEngageDistance // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function SelectPreaimLocation_PlayerBot.SelectPreaimLocation_PlayerBot_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveTick(float DeltaSeconds); // Function SelectPreaimLocation_PlayerBot.SelectPreaimLocation_PlayerBot_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void PerformAmortizedWork(); // Function SelectPreaimLocation_PlayerBot.SelectPreaimLocation_PlayerBot_C.PerformAmortizedWork // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_SelectPreaimLocation_PlayerBot(int32_t EntryPoint); // Function SelectPreaimLocation_PlayerBot.SelectPreaimLocation_PlayerBot_C.ExecuteUbergraph_SelectPreaimLocation_PlayerBot // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

