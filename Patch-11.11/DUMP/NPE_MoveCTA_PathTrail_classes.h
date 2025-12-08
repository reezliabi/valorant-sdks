// BlueprintGeneratedClass NPE_MoveCTA_PathTrail.NPE_MoveCTA_PathTrail_C
// Size: 0x651 (Inherited: 0x525)
struct ANPE_MoveCTA_PathTrail_C : APath_ActorTrail_C {
	char pad_525[0x3]; // 0x525(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x528(0x08)
	struct USplineComponent* DynamicSpline; // 0x530(0x08)
	struct USplineComponent* Spline; // 0x538(0x08)
	struct UBoxComponent* PlayerMovementTracker; // 0x540(0x08)
	struct UActorVisibilityComponent* ActorVisibility; // 0x548(0x08)
	struct FName UTilingParameterName; // 0x550(0x0c)
	struct FName UOffsetParameterName; // 0x55c(0x0c)
	double FloorOffset; // 0x568(0x08)
	double MinimapArrowSpacing; // 0x570(0x08)
	struct TArray<struct USplineMeshComponent*> SplineSegments; // 0x578(0x10)
	struct TArray<struct UAresMinimapComponent*> SplineMinimapWidgets; // 0x588(0x10)
	int32_t curveResolution; // 0x598(0x04)
	char pad_59C[0x4]; // 0x59c(0x04)
	double DistanceStep; // 0x5a0(0x08)
	struct FVector StaticSplineMergeLocation; // 0x5a8(0x18)
	struct FVector StaticSplineMergeTangent; // 0x5c0(0x18)
	bool UseStaticSplineOnly; // 0x5d8(0x01)
	char pad_5D9[0x7]; // 0x5d9(0x07)
	double StaticSplineProgressToAllowMerging; // 0x5e0(0x08)
	double PathProgressForMerge; // 0x5e8(0x08)
	double ZSensitivity; // 0x5f0(0x08)
	double XYSensitivity; // 0x5f8(0x08)
	double MergePointProximity; // 0x600(0x08)
	double MergeInputKey; // 0x608(0x08)
	double WanderRange; // 0x610(0x08)
	double InitialMinDistanceToUseDynamicSpline; // 0x618(0x08)
	bool StaticSplineConfigurationHelper; // 0x620(0x01)
	char pad_621[0x7]; // 0x621(0x07)
	struct FVector TrackedActorLocation; // 0x628(0x18)
	struct TArray<struct ATriggerBox*> ForceUpdateSplineColliders; // 0x640(0x10)
	bool IsActive; // 0x650(0x01)

	void OnRep_IsActive(); // Function NPE_MoveCTA_PathTrail.NPE_MoveCTA_PathTrail_C.OnRep_IsActive // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Begin Overlap Force Update Trigger Box(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function NPE_MoveCTA_PathTrail.NPE_MoveCTA_PathTrail_C.On Begin Overlap Force Update Trigger Box // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateVisibility(bool NewVisibility); // Function NPE_MoveCTA_PathTrail.NPE_MoveCTA_PathTrail_C.UpdateVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetUpMinimapArrows(); // Function NPE_MoveCTA_PathTrail.NPE_MoveCTA_PathTrail_C.SetUpMinimapArrows // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayerDistanceOffPath(double& DistanceOffPath); // Function NPE_MoveCTA_PathTrail.NPE_MoveCTA_PathTrail_C.PlayerDistanceOffPath // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetUpDynamicSplineMeshes(struct UNavigationPath* NavPath, struct TArray<struct FVector>& PathPoints); // Function NPE_MoveCTA_PathTrail.NPE_MoveCTA_PathTrail_C.SetUpDynamicSplineMeshes // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void FindBestRouteToStaticSpline(struct UNavigationPath*& Path, struct TArray<struct FVector>& PathPoints); // Function NPE_MoveCTA_PathTrail.NPE_MoveCTA_PathTrail_C.FindBestRouteToStaticSpline // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void FixUpMeshes(); // Function NPE_MoveCTA_PathTrail.NPE_MoveCTA_PathTrail_C.FixUpMeshes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateAndSetSplineMeshes(struct USplineComponent* L_Spline, double InputKey); // Function NPE_MoveCTA_PathTrail.NPE_MoveCTA_PathTrail_C.CreateAndSetSplineMeshes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CalculatePointTangents(struct FVector FirstPoint, struct FVector SecondPoint, struct FVector& ArriveTangent, struct FVector& LeaveTangent); // Function NPE_MoveCTA_PathTrail.NPE_MoveCTA_PathTrail_C.CalculatePointTangents // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void FindStaticSplinePointToUse(double& InputKey); // Function NPE_MoveCTA_PathTrail.NPE_MoveCTA_PathTrail_C.FindStaticSplinePointToUse // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddPointsToDynamicSpline(struct UNavigationPath* NavPath, struct TArray<struct FVector>& PathPoints, struct FVector MergeLocation, struct FVector MergeTangent); // Function NPE_MoveCTA_PathTrail.NPE_MoveCTA_PathTrail_C.AddPointsToDynamicSpline // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PathToMergePoint(struct FVector MergeLocation, struct UNavigationPath*& Path, struct TArray<struct FVector>& PathPoints); // Function NPE_MoveCTA_PathTrail.NPE_MoveCTA_PathTrail_C.PathToMergePoint // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetStaticSplineMergeLocation(struct FVector& Location, struct FVector& Tangent); // Function NPE_MoveCTA_PathTrail.NPE_MoveCTA_PathTrail_C.GetStaticSplineMergeLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ConstructNavPath(); // Function NPE_MoveCTA_PathTrail.NPE_MoveCTA_PathTrail_C.ConstructNavPath // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Get Spline Location and Tangent at Distance Along Spline(struct USplineComponent* L_Spline, double Distance, struct FVector& Location, struct FVector& Tangent Normal); // Function NPE_MoveCTA_PathTrail.NPE_MoveCTA_PathTrail_C.Get Spline Location and Tangent at Distance Along Spline // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InsertAnyTraversalPathPoint(struct FVector& InOutLastPoint, struct FVector NextPoint, struct TArray<struct FVector>& Points, double ZAdjust, bool& InsertedPoint); // Function NPE_MoveCTA_PathTrail.NPE_MoveCTA_PathTrail_C.InsertAnyTraversalPathPoint // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ConvertNavPathToPointArray(struct UNavigationPath* NavPath, double ZAdjust, struct TArray<struct FVector>& Points); // Function NPE_MoveCTA_PathTrail.NPE_MoveCTA_PathTrail_C.ConvertNavPathToPointArray // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function NPE_MoveCTA_PathTrail.NPE_MoveCTA_PathTrail_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void EnableNavigation(bool bNewIsEnabled); // Function NPE_MoveCTA_PathTrail.NPE_MoveCTA_PathTrail_C.EnableNavigation // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__NPE_MoveCTA_PathTrail_PlayerMovementTracker_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function NPE_MoveCTA_PathTrail.NPE_MoveCTA_PathTrail_C.BndEvt__NPE_MoveCTA_PathTrail_PlayerMovementTracker_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ReceiveTick(float DeltaSeconds); // Function NPE_MoveCTA_PathTrail.NPE_MoveCTA_PathTrail_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerCharacterSet(struct AShooterCharacter* NewCurrentPlayerCharacter); // Function NPE_MoveCTA_PathTrail.NPE_MoveCTA_PathTrail_C.OnPlayerCharacterSet // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StaticSplineSetupHelper(); // Function NPE_MoveCTA_PathTrail.NPE_MoveCTA_PathTrail_C.StaticSplineSetupHelper // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Multicast_EnableNavigation(bool New Is Enabled); // Function NPE_MoveCTA_PathTrail.NPE_MoveCTA_PathTrail_C.Multicast_EnableNavigation // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_NPE_MoveCTA_PathTrail(int32_t EntryPoint); // Function NPE_MoveCTA_PathTrail.NPE_MoveCTA_PathTrail_C.ExecuteUbergraph_NPE_MoveCTA_PathTrail // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

