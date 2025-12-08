// Class AIModule.AIAsyncTaskBlueprintProxy
// Size: 0x70 (Inherited: 0x30)
struct UAIAsyncTaskBlueprintProxy : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)

	void OnMoveCompleted(struct FAIRequestID RequestID, enum class EPathFollowingResult MovementResult); // Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted // (Final|RequiredAPI|Native|Public) // @ game+0x5074310
};

// Class AIModule.AIResourceInterface
// Size: 0x30 (Inherited: 0x30)
struct UAIResourceInterface : UInterface {
};

// Class AIModule.AISenseBlueprintListener
// Size: 0x110 (Inherited: 0x110)
struct UAISenseBlueprintListener : UUserDefinedStruct {
};

// Class AIModule.AISenseConfig
// Size: 0x50 (Inherited: 0x30)
struct UAISenseConfig : UObject {
	struct FColor DebugColor; // 0x30(0x04)
	float MaxAge; // 0x34(0x04)
	char bStartsEnabled : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x17]; // 0x39(0x17)
};

// Class AIModule.AISenseConfig_Blueprint
// Size: 0x58 (Inherited: 0x50)
struct UAISenseConfig_Blueprint : UAISenseConfig {
	struct UAISense_Blueprint* Implementation; // 0x50(0x08)
};

// Class AIModule.AISenseConfig_Hearing
// Size: 0x68 (Inherited: 0x50)
struct UAISenseConfig_Hearing : UAISenseConfig {
	struct UAISense_Hearing* Implementation; // 0x50(0x08)
	float HearingRange; // 0x58(0x04)
	float LoSHearingRange; // 0x5c(0x04)
	char bUseLoSHearing : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	struct FAISenseAffiliationFilter DetectionByAffiliation; // 0x64(0x04)
};

// Class AIModule.AISenseConfig_Prediction
// Size: 0x50 (Inherited: 0x50)
struct UAISenseConfig_Prediction : UAISenseConfig {
};

// Class AIModule.AISenseConfig_Sight
// Size: 0x78 (Inherited: 0x50)
struct UAISenseConfig_Sight : UAISenseConfig {
	struct UAISense_Sight* Implementation; // 0x50(0x08)
	bool bCanSeeThroughWalls; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float SightRadius; // 0x5c(0x04)
	float LoseSightRadius; // 0x60(0x04)
	float PeripheralVisionAngleDegrees; // 0x64(0x04)
	struct FAISenseAffiliationFilter DetectionByAffiliation; // 0x68(0x04)
	float AutoSuccessRangeFromLastSeenLocation; // 0x6c(0x04)
	float PointOfViewBackwardOffset; // 0x70(0x04)
	float NearClippingRadius; // 0x74(0x04)
};

// Class AIModule.AISenseConfig_Team
// Size: 0x50 (Inherited: 0x50)
struct UAISenseConfig_Team : UAISenseConfig {
};

// Class AIModule.AISenseConfig_Touch
// Size: 0x50 (Inherited: 0x50)
struct UAISenseConfig_Touch : UAISenseConfig {
};

// Class AIModule.AISenseEvent
// Size: 0x30 (Inherited: 0x30)
struct UAISenseEvent : UObject {
};

// Class AIModule.AISenseEvent_Damage
// Size: 0x88 (Inherited: 0x30)
struct UAISenseEvent_Damage : UAISenseEvent {
	struct FAIDamageEvent event; // 0x30(0x58)
};

// Class AIModule.AISenseEvent_Hearing
// Size: 0x70 (Inherited: 0x30)
struct UAISenseEvent_Hearing : UAISenseEvent {
	struct FAINoiseEvent event; // 0x30(0x40)
};

// Class AIModule.CrowdAgentInterface
// Size: 0x30 (Inherited: 0x30)
struct UCrowdAgentInterface : UInterface {
};

// Class AIModule.EnvQueryTypes
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryTypes : UObject {
};

// Class AIModule.EQSQueryResultSourceInterface
// Size: 0x30 (Inherited: 0x30)
struct UEQSQueryResultSourceInterface : UInterface {
};

// Class AIModule.GenericTeamAgentInterface
// Size: 0x30 (Inherited: 0x30)
struct UGenericTeamAgentInterface : UInterface {
};

// Class AIModule.PawnAction
// Size: 0x98 (Inherited: 0x30)
struct UPawnAction : UObject {
	struct UPawnAction* ChildAction; // 0x30(0x08)
	struct UPawnAction* ParentAction; // 0x38(0x08)
	struct UPawnActionsComponent* OwnerComponent; // 0x40(0x08)
	struct UObject* Instigator; // 0x48(0x08)
	struct UBrainComponent* BrainComp; // 0x50(0x08)
	char pad_58[0x30]; // 0x58(0x30)
	char bAllowNewSameClassInstance : 1; // 0x88(0x01)
	char bReplaceActiveSameClassInstance : 1; // 0x88(0x01)
	char bShouldPauseMovement : 1; // 0x88(0x01)
	char bAlwaysNotifyOnFinished : 1; // 0x88(0x01)
	char pad_88_4 : 4; // 0x88(0x01)
	char pad_89[0xf]; // 0x89(0x0f)

	enum class EAIRequestPriority GetActionPriority(); // Function AIModule.PawnAction.GetActionPriority // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x507a1c0
	void Finish(enum class EPawnActionResult WithResult); // Function AIModule.PawnAction.Finish // (RequiredAPI|Native|Protected|BlueprintCallable) // @ game+0x5079f30
	struct UPawnAction* CreateActionInstance(struct UObject* WorldContextObject, struct UPawnAction* ActionClass); // Function AIModule.PawnAction.CreateActionInstance // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x507a030
};

// Class AIModule.PawnActionsComponent
// Size: 0x110 (Inherited: 0xd8)
struct UPawnActionsComponent : UActorComponent {
	struct APawn* ControlledPawn; // 0xd8(0x08)
	struct TArray<struct FPawnActionStack> ActionStacks; // 0xe0(0x10)
	struct TArray<struct FPawnActionEvent> ActionEvents; // 0xf0(0x10)
	struct UPawnAction* CurrentAction; // 0x100(0x08)
	char pad_108[0x8]; // 0x108(0x08)

	bool K2_PushAction(struct UPawnAction* NewAction, enum class EAIRequestPriority Priority, struct UObject* Instigator); // Function AIModule.PawnActionsComponent.K2_PushAction // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x507b8d0
	bool K2_PerformAction(struct APawn* Pawn, struct UPawnAction* Action, enum class EAIRequestPriority Priority); // Function AIModule.PawnActionsComponent.K2_PerformAction // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x507bb20
	enum class EPawnActionAbortState K2_ForceAbortAction(struct UPawnAction* ActionToAbort); // Function AIModule.PawnActionsComponent.K2_ForceAbortAction // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x507b670
	enum class EPawnActionAbortState K2_AbortAction(struct UPawnAction* ActionToAbort); // Function AIModule.PawnActionsComponent.K2_AbortAction // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x507b7c0
};

// Class AIModule.PawnAction_BlueprintBase
// Size: 0x98 (Inherited: 0x98)
struct UPawnAction_BlueprintBase : UPawnAction {

	void ActionTick(struct APawn* ControlledPawn, float DeltaSeconds); // Function AIModule.PawnAction_BlueprintBase.ActionTick // (RequiredAPI|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ActionStart(struct APawn* ControlledPawn); // Function AIModule.PawnAction_BlueprintBase.ActionStart // (RequiredAPI|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ActionResume(struct APawn* ControlledPawn); // Function AIModule.PawnAction_BlueprintBase.ActionResume // (RequiredAPI|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ActionPause(struct APawn* ControlledPawn); // Function AIModule.PawnAction_BlueprintBase.ActionPause // (RequiredAPI|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ActionFinished(struct APawn* ControlledPawn, enum class EPawnActionResult WithResult); // Function AIModule.PawnAction_BlueprintBase.ActionFinished // (RequiredAPI|Event|Public|BlueprintEvent) // @ game+0x19be2f0
};

// Class AIModule.PawnAction_Move
// Size: 0xf8 (Inherited: 0x98)
struct UPawnAction_Move : UPawnAction {
	struct AActor* GoalActor; // 0x98(0x08)
	struct FVector GoalLocation; // 0xa0(0x18)
	float AcceptableRadius; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct UNavigationQueryFilter* FilterClass; // 0xc0(0x08)
	char bAllowStrafe : 1; // 0xc8(0x01)
	char bFinishOnOverlap : 1; // 0xc8(0x01)
	char bUsePathfinding : 1; // 0xc8(0x01)
	char bAllowPartialPath : 1; // 0xc8(0x01)
	char bProjectGoalToNavigation : 1; // 0xc8(0x01)
	char bUpdatePathToGoal : 1; // 0xc8(0x01)
	char bAbortSubActionOnPathChange : 1; // 0xc8(0x01)
	char pad_C8_7 : 1; // 0xc8(0x01)
	char pad_C9[0x2f]; // 0xc9(0x2f)
};

// Class AIModule.PawnAction_Repeat
// Size: 0xb8 (Inherited: 0x98)
struct UPawnAction_Repeat : UPawnAction {
	struct UPawnAction* ActionToRepeat; // 0x98(0x08)
	struct UPawnAction* RecentActionCopy; // 0xa0(0x08)
	enum class EPawnActionFailHandling ChildFailureHandlingMode; // 0xa8(0x01)
	char pad_A9[0xf]; // 0xa9(0x0f)
};

// Class AIModule.PawnAction_Sequence
// Size: 0xc0 (Inherited: 0x98)
struct UPawnAction_Sequence : UPawnAction {
	struct TArray<struct UPawnAction*> ActionSequence; // 0x98(0x10)
	enum class EPawnActionFailHandling ChildFailureHandlingMode; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct UPawnAction* RecentActionCopy; // 0xb0(0x08)
	char pad_B8[0x8]; // 0xb8(0x08)
};

// Class AIModule.PawnAction_Wait
// Size: 0xa8 (Inherited: 0x98)
struct UPawnAction_Wait : UPawnAction {
	float TimeToWait; // 0x98(0x04)
	char pad_9C[0xc]; // 0x9c(0x0c)
};

// Class AIModule.AIController
// Size: 0x5b0 (Inherited: 0x500)
struct AAIController : AController {
	char pad_500[0x38]; // 0x500(0x38)
	char bStartAILogicOnPossess : 1; // 0x538(0x01)
	char bStopAILogicOnUnposses : 1; // 0x538(0x01)
	char pad_538_2 : 6; // 0x538(0x01)
	char pad_539[0x7]; // 0x539(0x07)
	struct FVector CustomMoveToProjectionExtents; // 0x540(0x18)
	struct UPathFollowingComponent* PathFollowingComponent; // 0x558(0x08)
	char bLOSflag : 1; // 0x560(0x01)
	char bSkipExtraLOSChecks : 1; // 0x560(0x01)
	char bAllowStrafe : 1; // 0x560(0x01)
	char bWantsPlayerState : 1; // 0x560(0x01)
	char bSetControlRotationFromPawnOrientation : 1; // 0x560(0x01)
	char pad_560_5 : 3; // 0x560(0x01)
	char pad_561[0x7]; // 0x561(0x07)
	struct UBrainComponent* BrainComponent; // 0x568(0x08)
	struct UAIPerceptionComponent* PerceptionComponent; // 0x570(0x08)
	struct UPawnActionsComponent* ActionsComp; // 0x578(0x08)
	struct UBlackboardComponent* Blackboard; // 0x580(0x08)
	struct UGameplayTasksComponent* CachedGameplayTasksComponent; // 0x588(0x08)
	struct UNavigationQueryFilter* DefaultNavigationFilterClass; // 0x590(0x08)
	struct FMulticastInlineDelegate ReceiveMoveCompleted; // 0x598(0x10)
	bool bPitchWithoutPawnTarget; // 0x5a8(0x01)
	char pad_5A9[0x7]; // 0x5a9(0x07)

	bool UseBlackboard(struct UBlackboardData* BlackboardAsset, struct UBlackboardComponent*& BlackboardComponent); // Function AIModule.AIController.UseBlackboard // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x50827f0
	void UnclaimTaskResource(struct UGameplayTaskResource* ResourceClass); // Function AIModule.AIController.UnclaimTaskResource // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x50823c0
	void SetPathFollowingComponent(struct UPathFollowingComponent* NewPFComponent); // Function AIModule.AIController.SetPathFollowingComponent // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x5081d20
	void SetMoveBlockDetection(bool bEnable); // Function AIModule.AIController.SetMoveBlockDetection // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x5082c80
	bool RunBehaviorTree(struct UBehaviorTree* BTAsset); // Function AIModule.AIController.RunBehaviorTree // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x5082b70
	struct FRotator OverrideControlRotation(float DeltaTime, struct FRotator NewControlRotation); // Function AIModule.AIController.OverrideControlRotation // (RequiredAPI|Native|Event|Protected|HasDefaults|BlueprintEvent) // @ game+0x50839a0
	void OnUsingBlackBoard(struct UBlackboardComponent* BlackboardComp, struct UBlackboardData* BlackboardAsset); // Function AIModule.AIController.OnUsingBlackBoard // (RequiredAPI|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void OnGameplayTaskResourcesClaimed(struct FGameplayResourceSet NewlyClaimed, struct FGameplayResourceSet FreshlyReleased); // Function AIModule.AIController.OnGameplayTaskResourcesClaimed // (RequiredAPI|Native|Public) // @ game+0x5081e50
	enum class EPathFollowingRequestResult MoveToLocation(struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, struct UNavigationQueryFilter* FilterClass, bool bAllowPartialPath); // Function AIModule.AIController.MoveToLocation // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5082fb0
	enum class EPathFollowingRequestResult MoveToActor(struct AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, struct UNavigationQueryFilter* FilterClass, bool bAllowPartialPath); // Function AIModule.AIController.MoveToActor // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x5083500
	void K2_SetFocus(struct AActor* NewFocus); // Function AIModule.AIController.K2_SetFocus // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x5082050
	void K2_SetFocalPoint(struct FVector FP); // Function AIModule.AIController.K2_SetFocalPoint // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5082150
	void K2_ClearFocus(); // Function AIModule.AIController.K2_ClearFocus // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x5081ff0
	bool HasPartialPath(); // Function AIModule.AIController.HasPartialPath // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5082f20
	struct UPathFollowingComponent* GetPathFollowingComponent(); // Function AIModule.AIController.GetPathFollowingComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5081e30
	enum class EPathFollowingStatus GetMoveStatus(); // Function AIModule.AIController.GetMoveStatus // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5082f70
	struct FVector GetImmediateMoveDestination(); // Function AIModule.AIController.GetImmediateMoveDestination // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x5082ea0
	struct AActor* GetFocusActor(); // Function AIModule.AIController.GetFocusActor // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5082020
	struct FVector GetFocalPointOnActor(struct AActor* Actor); // Function AIModule.AIController.GetFocalPointOnActor // (RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x5082260
	struct FVector GetFocalPoint(); // Function AIModule.AIController.GetFocalPoint // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x5082380
	struct FVector GetFinalMoveDestination(); // Function AIModule.AIController.GetFinalMoveDestination // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x5082db0
	struct UPawnActionsComponent* GetDeprecatedActionsComponent(); // Function AIModule.AIController.GetDeprecatedActionsComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5081d00
	struct UAIPerceptionComponent* GetAIPerceptionComponent(); // Function AIModule.AIController.GetAIPerceptionComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x5081e10
	void ClaimTaskResource(struct UGameplayTaskResource* ResourceClass); // Function AIModule.AIController.ClaimTaskResource // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x5082600
};

// Class AIModule.AIResource_Movement
// Size: 0x40 (Inherited: 0x40)
struct UAIResource_Movement : UGameplayTaskResource {
};

// Class AIModule.AIResource_Logic
// Size: 0x40 (Inherited: 0x40)
struct UAIResource_Logic : UGameplayTaskResource {
};

// Class AIModule.AISubsystem
// Size: 0x50 (Inherited: 0x30)
struct UAISubsystem : UObject {
	char pad_30[0x18]; // 0x30(0x18)
	struct UAISystem* AISystem; // 0x48(0x08)
};

// Class AIModule.AISystem
// Size: 0x1d8 (Inherited: 0x78)
struct UAISystem : UAISystemBase {
	struct FSoftClassPath PerceptionSystemClassName; // 0x78(0x28)
	struct FSoftClassPath HotSpotManagerClassName; // 0xa0(0x28)
	struct FSoftClassPath EnvQueryManagerClassName; // 0xc8(0x28)
	float AcceptanceRadius; // 0xf0(0x04)
	float PathfollowingRegularPathPointAcceptanceRadius; // 0xf4(0x04)
	float PathfollowingNavLinkAcceptanceRadius; // 0xf8(0x04)
	bool bFinishMoveOnGoalOverlap; // 0xfc(0x01)
	bool bAcceptPartialPaths; // 0xfd(0x01)
	bool bAllowStrafing; // 0xfe(0x01)
	bool bAllowControllersAsEQSQuerier; // 0xff(0x01)
	bool bEnableDebuggerPlugin; // 0x100(0x01)
	bool bForgetStaleActors; // 0x101(0x01)
	bool bAddBlackboardSelfKey; // 0x102(0x01)
	bool bClearBBEntryOnBTEQSFail; // 0x103(0x01)
	bool bBlackboardKeyDecoratorAllowsNoneAsValue; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	struct TSoftObjectPtr<UBlackboardData> DefaultBlackboard; // 0x108(0x30)
	enum class ECollisionChannel DefaultSightCollisionChannel; // 0x138(0x01)
	char pad_139[0x7]; // 0x139(0x07)
	struct UBehaviorTreeManager* BehaviorTreeManager; // 0x140(0x08)
	struct UEnvQueryManager* EnvironmentQueryManager; // 0x148(0x08)
	struct UAIPerceptionSystem* PerceptionSystem; // 0x150(0x08)
	struct TArray<struct UAIAsyncTaskBlueprintProxy*> AllProxyObjects; // 0x158(0x10)
	struct UAIHotSpotManager* HotSpotManager; // 0x168(0x08)
	struct UNavLocalGridManager* NavLocalGrids; // 0x170(0x08)
	char pad_178[0x60]; // 0x178(0x60)

	void AILoggingVerbose(); // Function AIModule.AISystem.AILoggingVerbose // (RequiredAPI|Exec|Native|Public) // @ game+0x3dfae00
	void AIIgnorePlayers(); // Function AIModule.AISystem.AIIgnorePlayers // (RequiredAPI|Exec|Native|Public) // @ game+0x272a920
};

// Class AIModule.BehaviorTree
// Size: 0x70 (Inherited: 0x30)
struct UBehaviorTree : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct UBTCompositeNode* RootNode; // 0x38(0x08)
	struct UBlackboardData* BlackboardAsset; // 0x40(0x08)
	struct TArray<struct UBTDecorator*> RootDecorators; // 0x48(0x10)
	struct TArray<struct FBTDecoratorLogic> RootDecoratorOps; // 0x58(0x10)
	char pad_68[0x8]; // 0x68(0x08)
};

// Class AIModule.BrainComponent
// Size: 0x130 (Inherited: 0xd8)
struct UBrainComponent : UActorComponent {
	char pad_D8[0x8]; // 0xd8(0x08)
	struct UBlackboardComponent* BlackboardComp; // 0xe0(0x08)
	struct AAIController* AIOwner; // 0xe8(0x08)
	char pad_F0[0x40]; // 0xf0(0x40)

	void StopLogic(struct FString Reason); // Function AIModule.BrainComponent.StopLogic // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x50d51b0
	void StartLogic(); // Function AIModule.BrainComponent.StartLogic // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x46074d0
	enum class EAILogicResuming ResumeLogic(struct FString Reason); // Function AIModule.BrainComponent.ResumeLogic // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x50d4f20
	void RestartLogic(); // Function AIModule.BrainComponent.RestartLogic // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x50d52f0
	void PauseLogic(struct FString Reason); // Function AIModule.BrainComponent.PauseLogic // (Native|Public|BlueprintCallable) // @ game+0x50d5070
	bool IsRunning(); // Function AIModule.BrainComponent.IsRunning // (RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x50d4ee0
	bool IsPaused(); // Function AIModule.BrainComponent.IsPaused // (RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x50d4ea0
};

// Class AIModule.BehaviorTreeComponent
// Size: 0x2c8 (Inherited: 0x130)
struct UBehaviorTreeComponent : UBrainComponent {
	char pad_130[0x20]; // 0x130(0x20)
	struct TArray<struct UBTNode*> NodeInstances; // 0x150(0x10)
	char pad_160[0x148]; // 0x160(0x148)
	struct UBehaviorTree* DefaultBehaviorTreeAsset; // 0x2a8(0x08)
	char pad_2B0[0x18]; // 0x2b0(0x18)

	void SetDynamicSubtree(struct FGameplayTag InjectTag, struct UBehaviorTree* BehaviorAsset); // Function AIModule.BehaviorTreeComponent.SetDynamicSubtree // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x508b5f0
	double GetTagCooldownEndTime(struct FGameplayTag CooldownTag); // Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x508ba00
	void AddCooldownTagDuration(struct FGameplayTag CooldownTag, float CooldownDuration, bool bAddToExistingDuration); // Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x508b7b0
};

// Class AIModule.BehaviorTreeManager
// Size: 0x58 (Inherited: 0x30)
struct UBehaviorTreeManager : UObject {
	int32_t MaxDebuggerSteps; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FBehaviorTreeTemplateInfo> LoadedTemplates; // 0x38(0x10)
	struct TArray<struct UBehaviorTreeComponent*> ActiveComponents; // 0x48(0x10)
};

// Class AIModule.BehaviorTreeTypes
// Size: 0x30 (Inherited: 0x30)
struct UBehaviorTreeTypes : UObject {
};

// Class AIModule.BlackboardAssetProvider
// Size: 0x30 (Inherited: 0x30)
struct UBlackboardAssetProvider : UInterface {

	struct UBlackboardData* GetBlackboardAsset(); // Function AIModule.BlackboardAssetProvider.GetBlackboardAsset // (RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x50971c0
};

// Class AIModule.BlackboardComponent
// Size: 0x1e0 (Inherited: 0xd8)
struct UBlackboardComponent : UActorComponent {
	struct UBrainComponent* BrainComp; // 0xd8(0x08)
	struct UBlackboardData* DefaultBlackboardAsset; // 0xe0(0x08)
	struct UBlackboardData* BlackboardAsset; // 0xe8(0x08)
	char pad_F0[0x20]; // 0xf0(0x20)
	struct TArray<struct UBlackboardKeyType*> KeyInstances; // 0x110(0x10)
	char pad_120[0xc0]; // 0x120(0xc0)

	void SetValueAsVector(struct FName& KeyName, struct FVector VectorValue); // Function AIModule.BlackboardComponent.SetValueAsVector // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5097a70
	void SetValueAsString(struct FName& KeyName, struct FString StringValue); // Function AIModule.BlackboardComponent.SetValueAsString // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5097e20
	void SetValueAsRotator(struct FName& KeyName, struct FRotator VectorValue); // Function AIModule.BlackboardComponent.SetValueAsRotator // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x50978a0
	void SetValueAsObject(struct FName& KeyName, struct UObject* ObjectValue); // Function AIModule.BlackboardComponent.SetValueAsObject // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5098910
	void SetValueAsName(struct FName& KeyName, struct FName NameValue); // Function AIModule.BlackboardComponent.SetValueAsName // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5097c40
	void SetValueAsInt(struct FName& KeyName, int32_t IntValue); // Function AIModule.BlackboardComponent.SetValueAsInt // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5098400
	void SetValueAsFloat(struct FName& KeyName, float FloatValue); // Function AIModule.BlackboardComponent.SetValueAsFloat // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5098250
	void SetValueAsEnum(struct FName& KeyName, char EnumValue); // Function AIModule.BlackboardComponent.SetValueAsEnum // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x50985b0
	void SetValueAsClass(struct FName& KeyName, struct UObject* ClassValue); // Function AIModule.BlackboardComponent.SetValueAsClass // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5098760
	void SetValueAsBool(struct FName& KeyName, bool BoolValue); // Function AIModule.BlackboardComponent.SetValueAsBool // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x50980a0
	bool IsVectorValueSet(struct FName& KeyName); // Function AIModule.BlackboardComponent.IsVectorValueSet // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5097750
	struct FVector GetValueAsVector(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsVector // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x5098bf0
	struct FString GetValueAsString(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsString // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5098e30
	struct FRotator GetValueAsRotator(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsRotator // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x5098ac0
	struct UObject* GetValueAsObject(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsObject // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5099520
	struct FName GetValueAsName(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsName // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5098d20
	int32_t GetValueAsInt(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsInt // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5099200
	float GetValueAsFloat(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsFloat // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x50990e0
	char GetValueAsEnum(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsEnum // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5099320
	struct UObject* GetValueAsClass(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsClass // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5099420
	bool GetValueAsBool(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsBool // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5098fc0
	bool GetRotationFromEntry(struct FName& KeyName, struct FRotator& ResultRotation); // Function AIModule.BlackboardComponent.GetRotationFromEntry // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x50973b0
	bool GetLocationFromEntry(struct FName& KeyName, struct FVector& ResultLocation); // Function AIModule.BlackboardComponent.GetLocationFromEntry // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x5097580
	void ClearValue(struct FName& KeyName); // Function AIModule.BlackboardComponent.ClearValue // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x50972a0
};

// Class AIModule.BlackboardData
// Size: 0x58 (Inherited: 0x38)
struct UBlackboardData : UDataAsset {
	struct UBlackboardData* Parent; // 0x38(0x08)
	struct TArray<struct FBlackboardEntry> Keys; // 0x40(0x10)
	char bHasSynchronizedKeys : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class AIModule.BlackboardKeyType
// Size: 0x38 (Inherited: 0x30)
struct UBlackboardKeyType : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class AIModule.BlackboardKeyType_Bool
// Size: 0x38 (Inherited: 0x38)
struct UBlackboardKeyType_Bool : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_Class
// Size: 0x40 (Inherited: 0x38)
struct UBlackboardKeyType_Class : UBlackboardKeyType {
	ClassPtrProperty BaseClass; // 0x38(0x08)
};

// Class AIModule.BlackboardKeyType_Enum
// Size: 0x58 (Inherited: 0x38)
struct UBlackboardKeyType_Enum : UBlackboardKeyType {
	struct UEnum* EnumType; // 0x38(0x08)
	struct FString EnumName; // 0x40(0x10)
	char bIsEnumNameValid : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class AIModule.BlackboardKeyType_Float
// Size: 0x38 (Inherited: 0x38)
struct UBlackboardKeyType_Float : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_Int
// Size: 0x38 (Inherited: 0x38)
struct UBlackboardKeyType_Int : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_Name
// Size: 0x38 (Inherited: 0x38)
struct UBlackboardKeyType_Name : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_NativeEnum
// Size: 0x50 (Inherited: 0x38)
struct UBlackboardKeyType_NativeEnum : UBlackboardKeyType {
	struct FString EnumName; // 0x38(0x10)
	struct UEnum* EnumType; // 0x48(0x08)
};

// Class AIModule.BlackboardKeyType_Object
// Size: 0x40 (Inherited: 0x38)
struct UBlackboardKeyType_Object : UBlackboardKeyType {
	ClassPtrProperty BaseClass; // 0x38(0x08)
};

// Class AIModule.BlackboardKeyType_Rotator
// Size: 0x38 (Inherited: 0x38)
struct UBlackboardKeyType_Rotator : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_String
// Size: 0x48 (Inherited: 0x38)
struct UBlackboardKeyType_String : UBlackboardKeyType {
	struct FString StringValue; // 0x38(0x10)
};

// Class AIModule.BlackboardKeyType_Vector
// Size: 0x38 (Inherited: 0x38)
struct UBlackboardKeyType_Vector : UBlackboardKeyType {
};

// Class AIModule.BTNode
// Size: 0x60 (Inherited: 0x30)
struct UBTNode : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FString NodeName; // 0x38(0x10)
	struct UBehaviorTree* TreeAsset; // 0x48(0x08)
	struct UBTCompositeNode* ParentNode; // 0x50(0x08)
	char pad_58[0x8]; // 0x58(0x08)
};

// Class AIModule.BTAuxiliaryNode
// Size: 0x68 (Inherited: 0x60)
struct UBTAuxiliaryNode : UBTNode {
	char pad_60[0x8]; // 0x60(0x08)
};

// Class AIModule.BTCompositeNode
// Size: 0x88 (Inherited: 0x60)
struct UBTCompositeNode : UBTNode {
	struct TArray<struct FBTCompositeChild> Children; // 0x60(0x10)
	struct TArray<struct UBTService*> Services; // 0x70(0x10)
	char bApplyDecoratorScope : 1; // 0x80(0x01)
	char pad_80_1 : 7; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class AIModule.BTDecorator
// Size: 0x70 (Inherited: 0x68)
struct UBTDecorator : UBTAuxiliaryNode {
	char pad_68_0 : 7; // 0x68(0x01)
	char bInverseCondition : 1; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	enum class EBTFlowAbortMode FlowAbortMode; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// Class AIModule.BTFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UBTFunctionLibrary : UBlueprintFunctionLibrary {

	void StopUsingExternalEvent(struct UBTNode* NodeOwner); // Function AIModule.BTFunctionLibrary.StopUsingExternalEvent // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x33ba9c0
	void StartUsingExternalEvent(struct UBTNode* NodeOwner, struct AActor* OwningActor); // Function AIModule.BTFunctionLibrary.StartUsingExternalEvent // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x49b9260
	void SetBlackboardValueAsVector(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct FVector Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x50a4bd0
	void SetBlackboardValueAsString(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct FString Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x50a51b0
	void SetBlackboardValueAsRotator(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct FRotator Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x50a48e0
	void SetBlackboardValueAsObject(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct UObject* Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x50a63c0
	void SetBlackboardValueAsName(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct FName Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x50a4ec0
	void SetBlackboardValueAsInt(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, int32_t Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x50a5b50
	void SetBlackboardValueAsFloat(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, float Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x50a5870
	void SetBlackboardValueAsEnum(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, char Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x50a5e20
	void SetBlackboardValueAsClass(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct UObject* Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x50a60f0
	void SetBlackboardValueAsBool(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, bool Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x50a55a0
	struct UBlackboardComponent* GetOwnersBlackboard(struct UBTNode* NodeOwner); // Function AIModule.BTFunctionLibrary.GetOwnersBlackboard // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x50a8260
	struct UBehaviorTreeComponent* GetOwnerComponent(struct UBTNode* NodeOwner); // Function AIModule.BTFunctionLibrary.GetOwnerComponent // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x50a8130
	struct FVector GetBlackboardValueAsVector(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x50a6910
	struct FString GetBlackboardValueAsString(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x50a6e00
	struct FRotator GetBlackboardValueAsRotator(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x50a6690
	struct UObject* GetBlackboardValueAsObject(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x50a7ec0
	struct FName GetBlackboardValueAsName(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x50a6b90
	int32_t GetBlackboardValueAsInt(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x50a7540
	float GetBlackboardValueAsFloat(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x50a72d0
	char GetBlackboardValueAsEnum(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x50a77b0
	struct UObject* GetBlackboardValueAsClass(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x50a79f0
	bool GetBlackboardValueAsBool(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x50a7060
	struct AActor* GetBlackboardValueAsActor(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x50a7c30
	void ClearBlackboardValueAsVector(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x50a4690
	void ClearBlackboardValue(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.ClearBlackboardValue // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x50a4690
};

// Class AIModule.BTService
// Size: 0x78 (Inherited: 0x68)
struct UBTService : UBTAuxiliaryNode {
	float Interval; // 0x68(0x04)
	float RandomDeviation; // 0x6c(0x04)
	char bCallTickOnSearchStart : 1; // 0x70(0x01)
	char bRestartTimerOnEachActivation : 1; // 0x70(0x01)
	char pad_70_2 : 6; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class AIModule.BTTaskNode
// Size: 0x78 (Inherited: 0x60)
struct UBTTaskNode : UBTNode {
	struct TArray<struct UBTService*> Services; // 0x60(0x10)
	char bIgnoreRestartSelf : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class AIModule.BTComposite_Selector
// Size: 0x88 (Inherited: 0x88)
struct UBTComposite_Selector : UBTCompositeNode {
};

// Class AIModule.BTComposite_Sequence
// Size: 0x88 (Inherited: 0x88)
struct UBTComposite_Sequence : UBTCompositeNode {
};

// Class AIModule.BTComposite_SimpleParallel
// Size: 0x90 (Inherited: 0x88)
struct UBTComposite_SimpleParallel : UBTCompositeNode {
	enum class EBTParallelMode FinishMode; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class AIModule.BTDecorator_BlackboardBase
// Size: 0xa0 (Inherited: 0x70)
struct UBTDecorator_BlackboardBase : UBTDecorator {
	struct FBlackboardKeySelector BlackboardKey; // 0x70(0x30)
};

// Class AIModule.BTDecorator_Blackboard
// Size: 0xd0 (Inherited: 0xa0)
struct UBTDecorator_Blackboard : UBTDecorator_BlackboardBase {
	int32_t IntValue; // 0xa0(0x04)
	float FloatValue; // 0xa4(0x04)
	struct FString StringValue; // 0xa8(0x10)
	struct FString CachedDescription; // 0xb8(0x10)
	char OperationType; // 0xc8(0x01)
	enum class EBTBlackboardRestart NotifyObserver; // 0xc9(0x01)
	char pad_CA[0x6]; // 0xca(0x06)
};

// Class AIModule.BTDecorator_BlueprintBase
// Size: 0xa8 (Inherited: 0x70)
struct UBTDecorator_BlueprintBase : UBTDecorator {
	struct AAIController* AIOwner; // 0x70(0x08)
	struct AActor* ActorOwner; // 0x78(0x08)
	struct TArray<struct FName> ObservedKeyNames; // 0x80(0x10)
	char pad_90[0x10]; // 0x90(0x10)
	char bShowPropertyDetails : 1; // 0xa0(0x01)
	char bCheckConditionOnlyBlackBoardChanges : 1; // 0xa0(0x01)
	char pad_A0_2 : 6; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)

	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI // (RequiredAPI|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function AIModule.BTDecorator_BlueprintBase.ReceiveTick // (RequiredAPI|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveObserverDeactivatedAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI // (RequiredAPI|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveObserverDeactivated(struct AActor* OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated // (RequiredAPI|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveObserverActivatedAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI // (RequiredAPI|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveObserverActivated(struct AActor* OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated // (RequiredAPI|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveExecutionStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI // (RequiredAPI|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveExecutionStart(struct AActor* OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart // (RequiredAPI|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveExecutionFinishAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, enum class EBTNodeResult NodeResult); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI // (RequiredAPI|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveExecutionFinish(struct AActor* OwnerActor, enum class EBTNodeResult NodeResult); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish // (RequiredAPI|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI // (RequiredAPI|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	bool PerformConditionCheck(struct AActor* OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck // (RequiredAPI|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	bool IsDecoratorObserverActive(); // Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive // (Final|RequiredAPI|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x50b33e0
	bool IsDecoratorExecutionActive(); // Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive // (Final|RequiredAPI|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x50b3470
};

// Class AIModule.BTDecorator_CheckGameplayTagsOnActor
// Size: 0xd8 (Inherited: 0x70)
struct UBTDecorator_CheckGameplayTagsOnActor : UBTDecorator {
	struct FBlackboardKeySelector ActorToCheck; // 0x70(0x30)
	enum class EGameplayContainerMatchType TagsToMatch; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FGameplayTagContainer GameplayTags; // 0xa8(0x20)
	struct FString CachedDescription; // 0xc8(0x10)
};

// Class AIModule.BTDecorator_CompareBBEntries
// Size: 0xd8 (Inherited: 0x70)
struct UBTDecorator_CompareBBEntries : UBTDecorator {
	enum class EBlackBoardEntryComparison Operator; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct FBlackboardKeySelector BlackboardKeyA; // 0x78(0x30)
	struct FBlackboardKeySelector BlackboardKeyB; // 0xa8(0x30)
};

// Class AIModule.BTDecorator_ConditionalLoop
// Size: 0xd0 (Inherited: 0xd0)
struct UBTDecorator_ConditionalLoop : UBTDecorator_Blackboard {
};

// Class AIModule.BTDecorator_ConeCheck
// Size: 0x110 (Inherited: 0x70)
struct UBTDecorator_ConeCheck : UBTDecorator {
	float ConeHalfAngle; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FBlackboardKeySelector ConeOrigin; // 0x78(0x30)
	struct FBlackboardKeySelector ConeDirection; // 0xa8(0x30)
	struct FBlackboardKeySelector Observed; // 0xd8(0x30)
	char pad_108[0x8]; // 0x108(0x08)
};

// Class AIModule.BTDecorator_Cooldown
// Size: 0x78 (Inherited: 0x70)
struct UBTDecorator_Cooldown : UBTDecorator {
	float CoolDownTime; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class AIModule.BTDecorator_DoesPathExist
// Size: 0xe0 (Inherited: 0x70)
struct UBTDecorator_DoesPathExist : UBTDecorator {
	struct FBlackboardKeySelector BlackboardKeyA; // 0x70(0x30)
	struct FBlackboardKeySelector BlackboardKeyB; // 0xa0(0x30)
	char bUseSelf : 1; // 0xd0(0x01)
	char pad_D0_1 : 7; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	enum class EPathExistanceQueryType PathQueryType; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
	struct UNavigationQueryFilter* FilterClass; // 0xd8(0x08)
};

// Class AIModule.BTDecorator_ForceSuccess
// Size: 0x70 (Inherited: 0x70)
struct UBTDecorator_ForceSuccess : UBTDecorator {
};

// Class AIModule.BTDecorator_IsAtLocation
// Size: 0xf0 (Inherited: 0xa0)
struct UBTDecorator_IsAtLocation : UBTDecorator_BlackboardBase {
	float AcceptableRadius; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FAIDataProviderFloatValue ParametrizedAcceptableRadius; // 0xa8(0x40)
	enum class FAIDistanceType GeometricDistanceType; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	char bUseParametrizedRadius : 1; // 0xec(0x01)
	char bUseNavAgentGoalLocation : 1; // 0xec(0x01)
	char bPathFindingBasedTest : 1; // 0xec(0x01)
	char pad_EC_3 : 5; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
};

// Class AIModule.BTDecorator_IsBBEntryOfClass
// Size: 0xa8 (Inherited: 0xa0)
struct UBTDecorator_IsBBEntryOfClass : UBTDecorator_BlackboardBase {
	struct UObject* TestClass; // 0xa0(0x08)
};

// Class AIModule.BTDecorator_KeepInCone
// Size: 0xe0 (Inherited: 0x70)
struct UBTDecorator_KeepInCone : UBTDecorator {
	float ConeHalfAngle; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FBlackboardKeySelector ConeOrigin; // 0x78(0x30)
	struct FBlackboardKeySelector Observed; // 0xa8(0x30)
	char bUseSelfAsOrigin : 1; // 0xd8(0x01)
	char bUseSelfAsObserved : 1; // 0xd8(0x01)
	char pad_D8_2 : 6; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
};

// Class AIModule.BTDecorator_Loop
// Size: 0x80 (Inherited: 0x70)
struct UBTDecorator_Loop : UBTDecorator {
	int32_t NumLoops; // 0x70(0x04)
	bool bInfiniteLoop; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	float InfiniteLoopTimeoutTime; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class AIModule.BTDecorator_ReachedMoveGoal
// Size: 0x70 (Inherited: 0x70)
struct UBTDecorator_ReachedMoveGoal : UBTDecorator {
};

// Class AIModule.BTDecorator_SetTagCooldown
// Size: 0x88 (Inherited: 0x70)
struct UBTDecorator_SetTagCooldown : UBTDecorator {
	struct FGameplayTag CooldownTag; // 0x70(0x0c)
	float CooldownDuration; // 0x7c(0x04)
	bool bAddToExistingDuration; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class AIModule.BTDecorator_TagCooldown
// Size: 0x88 (Inherited: 0x70)
struct UBTDecorator_TagCooldown : UBTDecorator {
	struct FGameplayTag CooldownTag; // 0x70(0x0c)
	float CooldownDuration; // 0x7c(0x04)
	bool bAddToExistingDuration; // 0x80(0x01)
	bool bActivatesCooldown; // 0x81(0x01)
	char pad_82[0x6]; // 0x82(0x06)
};

// Class AIModule.BTDecorator_TimeLimit
// Size: 0x78 (Inherited: 0x70)
struct UBTDecorator_TimeLimit : UBTDecorator {
	float TimeLimit; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class AIModule.BTService_BlackboardBase
// Size: 0xa8 (Inherited: 0x78)
struct UBTService_BlackboardBase : UBTService {
	struct FBlackboardKeySelector BlackboardKey; // 0x78(0x30)
};

// Class AIModule.BTService_BlueprintBase
// Size: 0xa0 (Inherited: 0x78)
struct UBTService_BlueprintBase : UBTService {
	struct AAIController* AIOwner; // 0x78(0x08)
	struct AActor* ActorOwner; // 0x80(0x08)
	char pad_88[0x10]; // 0x88(0x10)
	char bShowPropertyDetails : 1; // 0x98(0x01)
	char bShowEventDetails : 1; // 0x98(0x01)
	char pad_98_2 : 6; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)

	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function AIModule.BTService_BlueprintBase.ReceiveTickAI // (RequiredAPI|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function AIModule.BTService_BlueprintBase.ReceiveTick // (RequiredAPI|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveSearchStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI // (RequiredAPI|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveSearchStart(struct AActor* OwnerActor); // Function AIModule.BTService_BlueprintBase.ReceiveSearchStart // (RequiredAPI|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveDeactivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI // (RequiredAPI|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveDeactivation(struct AActor* OwnerActor); // Function AIModule.BTService_BlueprintBase.ReceiveDeactivation // (RequiredAPI|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTService_BlueprintBase.ReceiveActivationAI // (RequiredAPI|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveActivation(struct AActor* OwnerActor); // Function AIModule.BTService_BlueprintBase.ReceiveActivation // (RequiredAPI|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	bool IsServiceActive(); // Function AIModule.BTService_BlueprintBase.IsServiceActive // (Final|RequiredAPI|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x50bf320
};

// Class AIModule.BTService_DefaultFocus
// Size: 0xb0 (Inherited: 0xa8)
struct UBTService_DefaultFocus : UBTService_BlackboardBase {
	char FocusPriority; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// Class AIModule.BTService_RunEQS
// Size: 0x118 (Inherited: 0xa8)
struct UBTService_RunEQS : UBTService_BlackboardBase {
	struct FEQSParametrizedQueryExecutionRequest EQSRequest; // 0xa8(0x50)
	bool bUpdateBBOnFail; // 0xf8(0x01)
	char pad_F9[0x17]; // 0xf9(0x17)
	struct AController* QueryOwnerController; // 0x110(0x08)
};

// Class AIModule.BTTask_BlackboardBase
// Size: 0xa8 (Inherited: 0x78)
struct UBTTask_BlackboardBase : UBTTaskNode {
	struct FBlackboardKeySelector BlackboardKey; // 0x78(0x30)
};

// Class AIModule.BTTask_BlueprintBase
// Size: 0xb0 (Inherited: 0x78)
struct UBTTask_BlueprintBase : UBTTaskNode {
	struct AAIController* AIOwner; // 0x78(0x08)
	struct AActor* ActorOwner; // 0x80(0x08)
	struct FIntervalCountdown TickInterval; // 0x88(0x08)
	char pad_90[0x18]; // 0x90(0x18)
	char bShowPropertyDetails : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)

	void SetFinishOnMessageWithId(struct FName MessageName, int32_t RequestID); // Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId // (Final|RequiredAPI|Native|Protected|BlueprintCallable) // @ game+0x50c34d0
	void SetFinishOnMessage(struct FName MessageName); // Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage // (Final|RequiredAPI|Native|Protected|BlueprintCallable) // @ game+0x50c36c0
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function AIModule.BTTask_BlueprintBase.ReceiveTickAI // (RequiredAPI|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function AIModule.BTTask_BlueprintBase.ReceiveTick // (RequiredAPI|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI // (RequiredAPI|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveExecute(struct AActor* OwnerActor); // Function AIModule.BTTask_BlueprintBase.ReceiveExecute // (RequiredAPI|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI // (RequiredAPI|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveAbort(struct AActor* OwnerActor); // Function AIModule.BTTask_BlueprintBase.ReceiveAbort // (RequiredAPI|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	bool IsTaskExecuting(); // Function AIModule.BTTask_BlueprintBase.IsTaskExecuting // (Final|RequiredAPI|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x50c3450
	bool IsTaskAborting(); // Function AIModule.BTTask_BlueprintBase.IsTaskAborting // (Final|RequiredAPI|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x50c3420
	void FinishExecute(bool bSuccess); // Function AIModule.BTTask_BlueprintBase.FinishExecute // (Final|RequiredAPI|Native|Protected|BlueprintCallable) // @ game+0x50c38a0
	void FinishAbort(); // Function AIModule.BTTask_BlueprintBase.FinishAbort // (Final|RequiredAPI|Native|Protected|BlueprintCallable) // @ game+0x50c3800
};

// Class AIModule.BTTask_FinishWithResult
// Size: 0x80 (Inherited: 0x78)
struct UBTTask_FinishWithResult : UBTTaskNode {
	enum class EBTNodeResult Result; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// Class AIModule.BTTask_GameplayTaskBase
// Size: 0x80 (Inherited: 0x78)
struct UBTTask_GameplayTaskBase : UBTTaskNode {
	char bWaitForGameplayTask : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// Class AIModule.BTTask_MakeNoise
// Size: 0x80 (Inherited: 0x78)
struct UBTTask_MakeNoise : UBTTaskNode {
	float Loudnes; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class AIModule.BTTask_MoveTo
// Size: 0xc0 (Inherited: 0xa8)
struct UBTTask_MoveTo : UBTTask_BlackboardBase {
	float AcceptableRadius; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct UNavigationQueryFilter* FilterClass; // 0xb0(0x08)
	float ObservedBlackboardValueTolerance; // 0xb8(0x04)
	char bObserveBlackboardValue : 1; // 0xbc(0x01)
	char bAllowStrafe : 1; // 0xbc(0x01)
	char bAllowPartialPath : 1; // 0xbc(0x01)
	char bTrackMovingGoal : 1; // 0xbc(0x01)
	char bRequireNavigableEndLocation : 1; // 0xbc(0x01)
	char bProjectGoalLocation : 1; // 0xbc(0x01)
	char bReachTestIncludesAgentRadius : 1; // 0xbc(0x01)
	char bReachTestIncludesGoalRadius : 1; // 0xbc(0x01)
	char bStopOnOverlap : 1; // 0xbd(0x01)
	char bStopOnOverlapNeedsUpdate : 1; // 0xbd(0x01)
	char pad_BD_2 : 6; // 0xbd(0x01)
	char pad_BE[0x2]; // 0xbe(0x02)
};

// Class AIModule.BTTask_MoveDirectlyToward
// Size: 0xc8 (Inherited: 0xc0)
struct UBTTask_MoveDirectlyToward : UBTTask_MoveTo {
	char bDisablePathUpdateOnGoalLocationChange : 1; // 0xc0(0x01)
	char bProjectVectorGoalToNavigation : 1; // 0xc0(0x01)
	char bUpdatedDeprecatedProperties : 1; // 0xc0(0x01)
	char pad_C0_3 : 5; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
};

// Class AIModule.BTTask_PawnActionBase
// Size: 0x78 (Inherited: 0x78)
struct UBTTask_PawnActionBase : UBTTaskNode {
};

// Class AIModule.BTTask_PlayAnimation
// Size: 0xb8 (Inherited: 0x78)
struct UBTTask_PlayAnimation : UBTTaskNode {
	struct UAnimationAsset* AnimationToPlay; // 0x78(0x08)
	char bLooping : 1; // 0x80(0x01)
	char bNonBlocking : 1; // 0x80(0x01)
	char pad_80_2 : 6; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct UBehaviorTreeComponent* MyOwnerComp; // 0x88(0x08)
	struct USkeletalMeshComponent* CachedSkelMesh; // 0x90(0x08)
	char pad_98[0x20]; // 0x98(0x20)
};

// Class AIModule.BTTask_PlaySound
// Size: 0x80 (Inherited: 0x78)
struct UBTTask_PlaySound : UBTTaskNode {
	struct USoundCue* SoundToPlay; // 0x78(0x08)
};

// Class AIModule.BTTask_PushPawnAction
// Size: 0x80 (Inherited: 0x78)
struct UBTTask_PushPawnAction : UBTTask_PawnActionBase {
	struct UPawnAction* Action; // 0x78(0x08)
};

// Class AIModule.BTTask_RotateToFaceBBEntry
// Size: 0xb0 (Inherited: 0xa8)
struct UBTTask_RotateToFaceBBEntry : UBTTask_BlackboardBase {
	float Precision; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// Class AIModule.BTTask_RunBehavior
// Size: 0x80 (Inherited: 0x78)
struct UBTTask_RunBehavior : UBTTaskNode {
	struct UBehaviorTree* BehaviorAsset; // 0x78(0x08)
};

// Class AIModule.BTTask_RunBehaviorDynamic
// Size: 0x98 (Inherited: 0x78)
struct UBTTask_RunBehaviorDynamic : UBTTaskNode {
	struct FGameplayTag InjectionTag; // 0x78(0x0c)
	char pad_84[0x4]; // 0x84(0x04)
	struct UBehaviorTree* DefaultBehaviorAsset; // 0x88(0x08)
	struct UBehaviorTree* BehaviorAsset; // 0x90(0x08)
};

// Class AIModule.BTTask_RunEQSQuery
// Size: 0x180 (Inherited: 0xa8)
struct UBTTask_RunEQSQuery : UBTTask_BlackboardBase {
	struct UEnvQuery* QueryTemplate; // 0xa8(0x08)
	struct TArray<struct FEnvNamedValue> QueryParams; // 0xb0(0x10)
	struct TArray<struct FAIDynamicParam> QueryConfig; // 0xc0(0x10)
	enum class EEnvQueryRunMode RunMode; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct FBlackboardKeySelector EQSQueryBlackboardKey; // 0xd8(0x30)
	bool bUseBBKey; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct FEQSParametrizedQueryExecutionRequest EQSRequest; // 0x110(0x50)
	bool bUpdateBBOnFail; // 0x160(0x01)
	char pad_161[0x1f]; // 0x161(0x1f)
};

// Class AIModule.BTTask_SetTagCooldown
// Size: 0x90 (Inherited: 0x78)
struct UBTTask_SetTagCooldown : UBTTaskNode {
	struct FGameplayTag CooldownTag; // 0x78(0x0c)
	bool bAddToExistingDuration; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	float CooldownDuration; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// Class AIModule.BTTask_Wait
// Size: 0x80 (Inherited: 0x78)
struct UBTTask_Wait : UBTTaskNode {
	float WaitTime; // 0x78(0x04)
	float RandomDeviation; // 0x7c(0x04)
};

// Class AIModule.BTTask_WaitBlackboardTime
// Size: 0xb0 (Inherited: 0x80)
struct UBTTask_WaitBlackboardTime : UBTTask_Wait {
	struct FBlackboardKeySelector BlackboardKey; // 0x80(0x30)
};

// Class AIModule.AIBlueprintHelperLibrary
// Size: 0x30 (Inherited: 0x30)
struct UAIBlueprintHelperLibrary : UBlueprintFunctionLibrary {

	void UnlockAIResourcesWithAnimation(struct UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic); // Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation // (Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x50cf9e0
	struct APawn* SpawnAIFromClass(struct UObject* WorldContextObject, struct APawn* PawnClass, struct UBehaviorTree* BehaviorTree, struct FVector Location, struct FRotator Rotation, bool bNoCollisionFail, struct AActor* Owner); // Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass // (Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x50d02c0
	void SimpleMoveToLocation(struct AController* Controller, struct FVector& Goal); // Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToLocation // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x50cec30
	void SimpleMoveToActor(struct AController* Controller, struct AActor* Goal); // Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToActor // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x50cedc0
	void SendAIMessage(struct APawn* Target, struct FName Message, struct UObject* MessageSource, bool bSuccess); // Function AIModule.AIBlueprintHelperLibrary.SendAIMessage // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x50d0750
	void LockAIResourcesWithAnimation(struct UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic); // Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation // (Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x50cfcf0
	bool IsValidAIRotation(struct FRotator Rotation); // Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation // (Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x50cf5f0
	bool IsValidAILocation(struct FVector Location); // Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation // (Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x50cf880
	bool IsValidAIDirection(struct FVector DirectionVector); // Function AIModule.AIBlueprintHelperLibrary.IsValidAIDirection // (Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x50cf710
	int32_t GetNextNavLinkIndex(struct AController* Controller); // Function AIModule.AIBlueprintHelperLibrary.GetNextNavLinkIndex // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x50cef40
	struct TArray<struct FVector> GetCurrentPathPoints(struct AController* Controller); // Function AIModule.AIBlueprintHelperLibrary.GetCurrentPathPoints // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x50cf2c0
	int32_t GetCurrentPathIndex(struct AController* Controller); // Function AIModule.AIBlueprintHelperLibrary.GetCurrentPathIndex // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x50cf170
	struct UNavigationPath* GetCurrentPath(struct AController* Controller); // Function AIModule.AIBlueprintHelperLibrary.GetCurrentPath // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x50cf3f0
	struct UBlackboardComponent* GetBlackboard(struct AActor* Target); // Function AIModule.AIBlueprintHelperLibrary.GetBlackboard // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x50d0000
	struct AAIController* GetAIController(struct AActor* ControlledActor); // Function AIModule.AIBlueprintHelperLibrary.GetAIController // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x50d0170
	struct UAIAsyncTaskBlueprintProxy* CreateMoveToProxyObject(struct UObject* WorldContextObject, struct APawn* Pawn, struct FVector Destination, struct AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap); // Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject // (Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x50d0ac0
};

// Class AIModule.AIDataProvider
// Size: 0x30 (Inherited: 0x30)
struct UAIDataProvider : UObject {
};

// Class AIModule.AIDataProvider_QueryParams
// Size: 0x48 (Inherited: 0x30)
struct UAIDataProvider_QueryParams : UAIDataProvider {
	struct FName ParamName; // 0x30(0x0c)
	float FloatValue; // 0x3c(0x04)
	int32_t IntValue; // 0x40(0x04)
	bool BoolValue; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// Class AIModule.AIDataProvider_Random
// Size: 0x58 (Inherited: 0x48)
struct UAIDataProvider_Random : UAIDataProvider_QueryParams {
	float Min; // 0x48(0x04)
	float Max; // 0x4c(0x04)
	char bInteger : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class AIModule.DetourCrowdAIController
// Size: 0x5b0 (Inherited: 0x5b0)
struct ADetourCrowdAIController : AAIController {
};

// Class AIModule.EnvQueryContext
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext : UObject {
};

// Class AIModule.EnvQueryContext_BlueprintBase
// Size: 0x38 (Inherited: 0x30)
struct UEnvQueryContext_BlueprintBase : UEnvQueryContext {
	char pad_30[0x8]; // 0x30(0x08)

	void ProvideSingleLocation(struct UObject* QuerierObject, struct AActor* QuerierActor, struct FVector& ResultingLocation); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation // (Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const) // @ game+0x19be2f0
	void ProvideSingleActor(struct UObject* QuerierObject, struct AActor* QuerierActor, struct AActor*& ResultingActor); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor // (Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x19be2f0
	void ProvideLocationsSet(struct UObject* QuerierObject, struct AActor* QuerierActor, struct TArray<struct FVector>& ResultingLocationSet); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet // (Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x19be2f0
	void ProvideActorsSet(struct UObject* QuerierObject, struct AActor* QuerierActor, struct TArray<struct AActor*>& ResultingActorsSet); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet // (Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x19be2f0
};

// Class AIModule.EnvQueryContext_Item
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_Item : UEnvQueryContext {
};

// Class AIModule.EnvQueryContext_Querier
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_Querier : UEnvQueryContext {
};

// Class AIModule.EnvQuery
// Size: 0x58 (Inherited: 0x38)
struct UEnvQuery : UDataAsset {
	struct FName QueryName; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct UEnvQueryOption*> OPTIONS; // 0x48(0x10)
};

// Class AIModule.EnvQueryDebugHelpers
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryDebugHelpers : UObject {
};

// Class AIModule.EnvQueryNode
// Size: 0x38 (Inherited: 0x30)
struct UEnvQueryNode : UObject {
	int32_t VerNum; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class AIModule.EnvQueryGenerator
// Size: 0x58 (Inherited: 0x38)
struct UEnvQueryGenerator : UEnvQueryNode {
	struct FString OptionName; // 0x38(0x10)
	struct UEnvQueryItemType* ItemType; // 0x48(0x08)
	char bAutoSortTests : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class AIModule.EnvQueryInstanceBlueprintWrapper
// Size: 0x80 (Inherited: 0x30)
struct UEnvQueryInstanceBlueprintWrapper : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	int32_t QueryID; // 0x38(0x04)
	char pad_3C[0x24]; // 0x3c(0x24)
	struct UEnvQueryItemType* ItemType; // 0x60(0x08)
	int32_t OptionIndex; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FMulticastInlineDelegate OnQueryFinishedEvent; // 0x70(0x10)

	void SetNamedParam(struct FName ParamName, float Value); // Function AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x50dad80
	struct TArray<struct FVector> GetResultsAsLocations(); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x50daf50
	struct TArray<struct AActor*> GetResultsAsActors(); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x50db060
	bool GetQueryResultsAsLocations(struct TArray<struct FVector>& ResultLocations); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsLocations // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x50db100
	bool GetQueryResultsAsActors(struct TArray<struct AActor*>& ResultActors); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsActors // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x50db2d0
	float GetItemScore(int32_t ItemIndex); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x50db410
	void EQSQueryDoneSignature__DelegateSignature(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x19be2f0
};

// Class AIModule.EnvQueryManager
// Size: 0x170 (Inherited: 0x50)
struct UEnvQueryManager : UAISubsystem {
	char pad_50[0x70]; // 0x50(0x70)
	struct TArray<struct FEnvQueryInstanceCache> InstanceCache; // 0xc0(0x10)
	struct TArray<struct UEnvQueryContext*> LocalContexts; // 0xd0(0x10)
	struct TArray<struct UEnvQueryInstanceBlueprintWrapper*> GCShieldedWrappers; // 0xe0(0x10)
	char pad_F0[0x54]; // 0xf0(0x54)
	float MaxAllowedTestingTime; // 0x144(0x04)
	bool bTestQueriesUsingBreadth; // 0x148(0x01)
	char pad_149[0x3]; // 0x149(0x03)
	int32_t QueryCountWarningThreshold; // 0x14c(0x04)
	double QueryCountWarningInterval; // 0x150(0x08)
	double ExecutionTimeWarningSeconds; // 0x158(0x08)
	double HandlingResultTimeWarningSeconds; // 0x160(0x08)
	double GenerationTimeWarningSeconds; // 0x168(0x08)

	struct UEnvQueryInstanceBlueprintWrapper* RunEQSQuery(struct UObject* WorldContextObject, struct UEnvQuery* QueryTemplate, struct UObject* Querier, enum class EEnvQueryRunMode RunMode, struct UEnvQueryInstanceBlueprintWrapper* WrapperClass); // Function AIModule.EnvQueryManager.RunEQSQuery // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x50dc730
};

// Class AIModule.EnvQueryOption
// Size: 0x48 (Inherited: 0x30)
struct UEnvQueryOption : UObject {
	struct UEnvQueryGenerator* Generator; // 0x30(0x08)
	struct TArray<struct UEnvQueryTest*> Tests; // 0x38(0x10)
};

// Class AIModule.EnvQueryTest
// Size: 0x238 (Inherited: 0x38)
struct UEnvQueryTest : UEnvQueryNode {
	int32_t TestOrder; // 0x38(0x04)
	enum class EEnvTestPurpose TestPurpose; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FString TestComment; // 0x40(0x10)
	enum class EEnvTestFilterOperator MultipleContextFilterOp; // 0x50(0x01)
	enum class EEnvTestScoreOperator MultipleContextScoreOp; // 0x51(0x01)
	enum class EEnvTestFilterType FilterType; // 0x52(0x01)
	char pad_53[0x5]; // 0x53(0x05)
	struct FAIDataProviderBoolValue BoolValue; // 0x58(0x40)
	struct FAIDataProviderFloatValue FloatValueMin; // 0x98(0x40)
	struct FAIDataProviderFloatValue FloatValueMax; // 0xd8(0x40)
	char pad_118[0x1]; // 0x118(0x01)
	enum class EEnvTestScoreEquation ScoringEquation; // 0x119(0x01)
	enum class EEnvQueryTestClamping ClampMinType; // 0x11a(0x01)
	enum class EEnvQueryTestClamping ClampMaxType; // 0x11b(0x01)
	enum class EEQSNormalizationType NormalizationType; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
	struct FAIDataProviderFloatValue ScoreClampMin; // 0x120(0x40)
	struct FAIDataProviderFloatValue ScoreClampMax; // 0x160(0x40)
	struct FAIDataProviderFloatValue ScoringFactor; // 0x1a0(0x40)
	struct FAIDataProviderFloatValue ReferenceValue; // 0x1e0(0x40)
	bool bDefineReferenceValue; // 0x220(0x01)
	char pad_221[0xf]; // 0x221(0x0f)
	char bWorkOnFloatValues : 1; // 0x230(0x01)
	char pad_230_1 : 7; // 0x230(0x01)
	char pad_231[0x7]; // 0x231(0x07)
};

// Class AIModule.EQSRenderingComponent
// Size: 0x710 (Inherited: 0x6e0)
struct UEQSRenderingComponent : UDebugDrawComponent {
	char pad_6E0[0x30]; // 0x6e0(0x30)
};

// Class AIModule.EQSTestingPawn
// Size: 0x900 (Inherited: 0x860)
struct AEQSTestingPawn : ACharacter {
	struct UEnvQuery* QueryTemplate; // 0x860(0x08)
	struct TArray<struct FEnvNamedValue> QueryParams; // 0x868(0x10)
	struct TArray<struct FAIDynamicParam> QueryConfig; // 0x878(0x10)
	float TimeLimitPerStep; // 0x888(0x04)
	int32_t StepToDebugDraw; // 0x88c(0x04)
	enum class EEnvQueryHightlightMode HighlightMode; // 0x890(0x01)
	char pad_891[0x3]; // 0x891(0x03)
	char bDrawLabels : 1; // 0x894(0x01)
	char bDrawFailedItems : 1; // 0x894(0x01)
	char bReRunQueryOnlyOnFinishedMove : 1; // 0x894(0x01)
	char bShouldBeVisibleInGame : 1; // 0x894(0x01)
	char bTickDuringGame : 1; // 0x894(0x01)
	char pad_894_5 : 3; // 0x894(0x01)
	char pad_895[0x3]; // 0x895(0x03)
	enum class EEnvQueryRunMode QueryingMode; // 0x898(0x01)
	char pad_899[0x7]; // 0x899(0x07)
	struct FNavAgentProperties NavAgentProperties; // 0x8a0(0x40)
	char pad_8E0[0x20]; // 0x8e0(0x20)
};

// Class AIModule.EnvQueryGenerator_ActorsOfClass
// Size: 0xe8 (Inherited: 0x58)
struct UEnvQueryGenerator_ActorsOfClass : UEnvQueryGenerator {
	struct AActor* SearchedActorClass; // 0x58(0x08)
	struct FAIDataProviderBoolValue GenerateOnlyActorsInRadius; // 0x60(0x40)
	struct FAIDataProviderFloatValue SearchRadius; // 0xa0(0x40)
	struct UEnvQueryContext* SearchCenter; // 0xe0(0x08)
};

// Class AIModule.EnvQueryGenerator_BlueprintBase
// Size: 0x90 (Inherited: 0x58)
struct UEnvQueryGenerator_BlueprintBase : UEnvQueryGenerator {
	struct FText GeneratorsActionDescription; // 0x58(0x18)
	struct UEnvQueryContext* Context; // 0x70(0x08)
	struct UEnvQueryItemType* GeneratedItemType; // 0x78(0x08)
	char pad_80[0x10]; // 0x80(0x10)

	struct UObject* GetQuerier(); // Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x50eff30
	void DoItemGenerationFromActors(struct TArray<struct AActor*>& ContextActors); // Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGenerationFromActors // (RequiredAPI|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x19be2f0
	void DoItemGeneration(struct TArray<struct FVector>& ContextLocations); // Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration // (RequiredAPI|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x19be2f0
	void AddGeneratedVector(struct FVector GeneratedVector); // Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|Const) // @ game+0x50f0060
	void AddGeneratedActor(struct AActor* GeneratedActor); // Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor // (Final|RequiredAPI|Native|Public|BlueprintCallable|Const) // @ game+0x50eff70
};

// Class AIModule.EnvQueryGenerator_Composite
// Size: 0x78 (Inherited: 0x58)
struct UEnvQueryGenerator_Composite : UEnvQueryGenerator {
	struct TArray<struct UEnvQueryGenerator*> Generators; // 0x58(0x10)
	char bAllowDifferentItemTypes : 1; // 0x68(0x01)
	char bHasMatchingItemType : 1; // 0x68(0x01)
	char pad_68_2 : 6; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct UEnvQueryItemType* ForcedItemType; // 0x70(0x08)
};

// Class AIModule.EnvQueryGenerator_ProjectedPoints
// Size: 0x98 (Inherited: 0x58)
struct UEnvQueryGenerator_ProjectedPoints : UEnvQueryGenerator {
	struct FEnvTraceData ProjectionData; // 0x58(0x40)
};

// Class AIModule.EnvQueryGenerator_Cone
// Size: 0x1a8 (Inherited: 0x98)
struct UEnvQueryGenerator_Cone : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue AlignedPointsDistance; // 0x98(0x40)
	struct FAIDataProviderFloatValue ConeDegrees; // 0xd8(0x40)
	struct FAIDataProviderFloatValue AngleStep; // 0x118(0x40)
	struct FAIDataProviderFloatValue Range; // 0x158(0x40)
	struct UEnvQueryContext* CenterActor; // 0x198(0x08)
	char bIncludeContextLocation : 1; // 0x1a0(0x01)
	char pad_1A0_1 : 7; // 0x1a0(0x01)
	char pad_1A1[0x7]; // 0x1a1(0x07)
};

// Class AIModule.EnvQueryGenerator_CurrentLocation
// Size: 0x60 (Inherited: 0x58)
struct UEnvQueryGenerator_CurrentLocation : UEnvQueryGenerator {
	struct UEnvQueryContext* QueryContext; // 0x58(0x08)
};

// Class AIModule.EnvQueryGenerator_Donut
// Size: 0x210 (Inherited: 0x98)
struct UEnvQueryGenerator_Donut : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue InnerRadius; // 0x98(0x40)
	struct FAIDataProviderFloatValue OuterRadius; // 0xd8(0x40)
	struct FAIDataProviderIntValue NumberOfRings; // 0x118(0x40)
	struct FAIDataProviderIntValue PointsPerRing; // 0x158(0x40)
	struct FEnvDirection ArcDirection; // 0x198(0x20)
	struct FAIDataProviderFloatValue ArcAngle; // 0x1b8(0x40)
	bool bUseSpiralPattern; // 0x1f8(0x01)
	char pad_1F9[0x7]; // 0x1f9(0x07)
	struct UEnvQueryContext* Center; // 0x200(0x08)
	char bDefineArc : 1; // 0x208(0x01)
	char pad_208_1 : 7; // 0x208(0x01)
	char pad_209[0x7]; // 0x209(0x07)
};

// Class AIModule.EnvQueryGenerator_OnCircle
// Size: 0x260 (Inherited: 0x98)
struct UEnvQueryGenerator_OnCircle : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue CircleRadius; // 0x98(0x40)
	struct FAIDataProviderFloatValue SpaceBetween; // 0xd8(0x40)
	struct FAIDataProviderIntValue NumberOfPoints; // 0x118(0x40)
	enum class EPointOnCircleSpacingMethod PointOnCircleSpacingMethod; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)
	struct FEnvDirection ArcDirection; // 0x160(0x20)
	struct FAIDataProviderFloatValue ArcAngle; // 0x180(0x40)
	float AngleRadians; // 0x1c0(0x04)
	char pad_1C4[0x4]; // 0x1c4(0x04)
	struct UEnvQueryContext* CircleCenter; // 0x1c8(0x08)
	bool bIgnoreAnyContextActorsWhenGeneratingCircle; // 0x1d0(0x01)
	char pad_1D1[0x7]; // 0x1d1(0x07)
	struct FAIDataProviderFloatValue CircleCenterZOffset; // 0x1d8(0x40)
	struct FEnvTraceData TraceData; // 0x218(0x40)
	char bDefineArc : 1; // 0x258(0x01)
	char pad_258_1 : 7; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
};

// Class AIModule.EnvQueryGenerator_SimpleGrid
// Size: 0x120 (Inherited: 0x98)
struct UEnvQueryGenerator_SimpleGrid : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue GridSize; // 0x98(0x40)
	struct FAIDataProviderFloatValue SpaceBetween; // 0xd8(0x40)
	struct UEnvQueryContext* GenerateAround; // 0x118(0x08)
};

// Class AIModule.EnvQueryGenerator_PathingGrid
// Size: 0x1a8 (Inherited: 0x120)
struct UEnvQueryGenerator_PathingGrid : UEnvQueryGenerator_SimpleGrid {
	struct FAIDataProviderBoolValue PathToItem; // 0x120(0x40)
	struct UNavigationQueryFilter* NavigationFilter; // 0x160(0x08)
	struct FAIDataProviderFloatValue ScanRangeMultiplier; // 0x168(0x40)
};

// Class AIModule.EnvQueryGenerator_PerceivedActors
// Size: 0xb8 (Inherited: 0x58)
struct UEnvQueryGenerator_PerceivedActors : UEnvQueryGenerator {
	struct AActor* AllowedActorClass; // 0x58(0x08)
	struct FAIDataProviderFloatValue SearchRadius; // 0x60(0x40)
	struct UEnvQueryContext* ListenerContext; // 0xa0(0x08)
	struct UAISense* SenseToUse; // 0xa8(0x08)
	bool bIncludeKnownActors; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

// Class AIModule.EnvQueryItemType
// Size: 0x38 (Inherited: 0x30)
struct UEnvQueryItemType : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class AIModule.EnvQueryItemType_VectorBase
// Size: 0x38 (Inherited: 0x38)
struct UEnvQueryItemType_VectorBase : UEnvQueryItemType {
};

// Class AIModule.EnvQueryItemType_ActorBase
// Size: 0x38 (Inherited: 0x38)
struct UEnvQueryItemType_ActorBase : UEnvQueryItemType_VectorBase {
};

// Class AIModule.EnvQueryItemType_Actor
// Size: 0x38 (Inherited: 0x38)
struct UEnvQueryItemType_Actor : UEnvQueryItemType_ActorBase {
};

// Class AIModule.EnvQueryItemType_Direction
// Size: 0x38 (Inherited: 0x38)
struct UEnvQueryItemType_Direction : UEnvQueryItemType_VectorBase {
};

// Class AIModule.EnvQueryItemType_Point
// Size: 0x38 (Inherited: 0x38)
struct UEnvQueryItemType_Point : UEnvQueryItemType_VectorBase {
};

// Class AIModule.EnvQueryTest_Distance
// Size: 0x248 (Inherited: 0x238)
struct UEnvQueryTest_Distance : UEnvQueryTest {
	enum class EEnvTestDistance TestMode; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct UEnvQueryContext* DistanceTo; // 0x240(0x08)
};

// Class AIModule.EnvQueryTest_Dot
// Size: 0x280 (Inherited: 0x238)
struct UEnvQueryTest_Dot : UEnvQueryTest {
	struct FEnvDirection LineA; // 0x238(0x20)
	struct FEnvDirection LineB; // 0x258(0x20)
	enum class EEnvTestDot TestMode; // 0x278(0x01)
	bool bAbsoluteValue; // 0x279(0x01)
	char pad_27A[0x6]; // 0x27a(0x06)
};

// Class AIModule.EnvQueryTest_GameplayTags
// Size: 0x2a8 (Inherited: 0x238)
struct UEnvQueryTest_GameplayTags : UEnvQueryTest {
	struct FGameplayTagQuery TagQueryToMatch; // 0x238(0x48)
	bool bRejectIncompatibleItems; // 0x280(0x01)
	bool bUpdatedToUseQuery; // 0x281(0x01)
	enum class EGameplayContainerMatchType TagsToMatch; // 0x282(0x01)
	char pad_283[0x5]; // 0x283(0x05)
	struct FGameplayTagContainer GameplayTags; // 0x288(0x20)
};

// Class AIModule.EnvQueryTest_Overlap
// Size: 0x270 (Inherited: 0x238)
struct UEnvQueryTest_Overlap : UEnvQueryTest {
	struct FEnvOverlapData OverlapData; // 0x238(0x30)
	struct UEnvQueryContext* CollisionIgnoreContext; // 0x268(0x08)
};

// Class AIModule.EnvQueryTest_Pathfinding
// Size: 0x2f0 (Inherited: 0x238)
struct UEnvQueryTest_Pathfinding : UEnvQueryTest {
	enum class EEnvTestPathfinding TestMode; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct UEnvQueryContext* Context; // 0x240(0x08)
	struct FAIDataProviderBoolValue PathFromContext; // 0x248(0x40)
	struct FAIDataProviderBoolValue SkipUnreachable; // 0x288(0x40)
	struct UNavigationQueryFilter* FilterClass; // 0x2c8(0x08)
	bool bProjectToNavmesh; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct FVector NavMeshProjectionExtents; // 0x2d8(0x18)
};

// Class AIModule.EnvQueryTest_PathfindingBatch
// Size: 0x330 (Inherited: 0x2f0)
struct UEnvQueryTest_PathfindingBatch : UEnvQueryTest_Pathfinding {
	struct FAIDataProviderFloatValue ScanRangeMultiplier; // 0x2f0(0x40)
};

// Class AIModule.EnvQueryTest_Project
// Size: 0x278 (Inherited: 0x238)
struct UEnvQueryTest_Project : UEnvQueryTest {
	struct FEnvTraceData ProjectionData; // 0x238(0x40)
};

// Class AIModule.EnvQueryTest_Random
// Size: 0x238 (Inherited: 0x238)
struct UEnvQueryTest_Random : UEnvQueryTest {
};

// Class AIModule.EnvQueryTest_Trace
// Size: 0x348 (Inherited: 0x238)
struct UEnvQueryTest_Trace : UEnvQueryTest {
	struct FEnvTraceData TraceData; // 0x238(0x40)
	struct FAIDataProviderBoolValue TraceFromContext; // 0x278(0x40)
	struct FAIDataProviderFloatValue ItemHeightOffset; // 0x2b8(0x40)
	struct FAIDataProviderFloatValue ContextHeightOffset; // 0x2f8(0x40)
	bool bEdgeToEdge; // 0x338(0x01)
	char pad_339[0x7]; // 0x339(0x07)
	struct UEnvQueryContext* Context; // 0x340(0x08)
};

// Class AIModule.EnvQueryTest_Volume
// Size: 0x250 (Inherited: 0x238)
struct UEnvQueryTest_Volume : UEnvQueryTest {
	struct UEnvQueryContext* VolumeContext; // 0x238(0x08)
	struct AVolume* VolumeClass; // 0x240(0x08)
	char bDoComplexVolumeTest : 1; // 0x248(0x01)
	char bSkipTestIfNoVolumes : 1; // 0x248(0x01)
	char pad_248_2 : 6; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)
};

// Class AIModule.GridPathAIController
// Size: 0x5b0 (Inherited: 0x5b0)
struct AGridPathAIController : AAIController {
};

// Class AIModule.AIHotSpotManager
// Size: 0x30 (Inherited: 0x30)
struct UAIHotSpotManager : UObject {
};

// Class AIModule.PathFollowingComponent
// Size: 0x310 (Inherited: 0xd8)
struct UPathFollowingComponent : UActorComponent {
	char pad_D8[0x38]; // 0xd8(0x38)
	bool ShouldUse2DReachedTargetCheckOnGround; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	float MinAgentRadiusReachDistance2D; // 0x114(0x04)
	float MinAgentHeightReach; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct UNavMovementComponent* MovementComp; // 0x120(0x08)
	char pad_128[0x8]; // 0x128(0x08)
	struct ANavigationData* MyNavData; // 0x130(0x08)
	char pad_138[0x1d8]; // 0x138(0x1d8)

	void OnNavDataRegistered(struct ANavigationData* NavData); // Function AIModule.PathFollowingComponent.OnNavDataRegistered // (Final|RequiredAPI|Native|Protected) // @ game+0x511d480
	void OnActorBump(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult& Hit); // Function AIModule.PathFollowingComponent.OnActorBump // (RequiredAPI|Native|Public|HasOutParms|HasDefaults) // @ game+0x511d730
	struct FVector GetPathDestination(); // Function AIModule.PathFollowingComponent.GetPathDestination // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x511d5e0
	struct TArray<struct FVector> GetPathCorridorPoints(); // Function AIModule.PathFollowingComponent.GetPathCorridorPoints // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x511da90
	enum class EPathFollowingAction GetPathActionType(); // Function AIModule.PathFollowingComponent.GetPathActionType // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x511d690
	int32_t FindClosestPathCorridorPoint(); // Function AIModule.PathFollowingComponent.FindClosestPathCorridorPoint // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x511da60
};

// Class AIModule.CrowdFollowingComponent
// Size: 0x360 (Inherited: 0x310)
struct UCrowdFollowingComponent : UPathFollowingComponent {
	char pad_310[0x18]; // 0x310(0x18)
	struct FVector CrowdAgentMoveDirection; // 0x328(0x18)
	char pad_340[0x20]; // 0x340(0x20)

	void SuspendCrowdSteering(bool bSuspend); // Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x510dea0
};

// Class AIModule.CrowdManager
// Size: 0xf8 (Inherited: 0x30)
struct UCrowdManager : UCrowdManagerBase {
	struct ANavigationData* MyNavData; // 0x30(0x08)
	struct TArray<struct FCrowdAvoidanceConfig> AvoidanceConfig; // 0x38(0x10)
	struct TArray<struct FCrowdAvoidanceSamplingPattern> SamplingPatterns; // 0x48(0x10)
	int32_t MaxAgents; // 0x58(0x04)
	float MaxAgentRadius; // 0x5c(0x04)
	int32_t MaxAvoidedAgents; // 0x60(0x04)
	int32_t MaxAvoidedWalls; // 0x64(0x04)
	float NavmeshCheckInterval; // 0x68(0x04)
	float PathOptimizationInterval; // 0x6c(0x04)
	float SeparationDirClamp; // 0x70(0x04)
	float PathOffsetRadiusMultiplier; // 0x74(0x04)
	char pad_78_0 : 4; // 0x78(0x01)
	char bResolveCollisions : 1; // 0x78(0x01)
	char pad_78_5 : 3; // 0x78(0x01)
	char pad_79[0x7f]; // 0x79(0x7f)
};

// Class AIModule.GridPathFollowingComponent
// Size: 0x340 (Inherited: 0x310)
struct UGridPathFollowingComponent : UPathFollowingComponent {
	struct UNavLocalGridManager* GridManager; // 0x310(0x08)
	char pad_318[0x28]; // 0x318(0x28)
};

// Class AIModule.NavFilter_AIControllerDefault
// Size: 0x50 (Inherited: 0x50)
struct UNavFilter_AIControllerDefault : UNavigationQueryFilter {
};

// Class AIModule.NavLinkProxy
// Size: 0x4b0 (Inherited: 0x460)
struct ANavLinkProxy : AActor {
	char pad_460[0x10]; // 0x460(0x10)
	struct TArray<struct FNavigationLink> PointLinks; // 0x470(0x10)
	struct TArray<struct FNavigationSegmentLink> SegmentLinks; // 0x480(0x10)
	struct UNavLinkCustomComponent* SmartLinkComp; // 0x490(0x08)
	bool bSmartLinkIsRelevant; // 0x498(0x01)
	char pad_499[0x7]; // 0x499(0x07)
	struct FMulticastInlineDelegate OnSmartLinkReached; // 0x4a0(0x10)

	void SetSmartLinkEnabled(bool bEnabled); // Function AIModule.NavLinkProxy.SetSmartLinkEnabled // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x5116010
	void ResumePathFollowing(struct AActor* Agent); // Function AIModule.NavLinkProxy.ResumePathFollowing // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x5116140
	void ReceiveSmartLinkReached(struct AActor* Agent, struct FVector& Destination); // Function AIModule.NavLinkProxy.ReceiveSmartLinkReached // (RequiredAPI|Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x19be2f0
	bool IsSmartLinkEnabled(); // Function AIModule.NavLinkProxy.IsSmartLinkEnabled // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5116110
	bool HasMovingAgents(); // Function AIModule.NavLinkProxy.HasMovingAgents // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5115f80
};

// Class AIModule.NavLocalGridManager
// Size: 0x60 (Inherited: 0x30)
struct UNavLocalGridManager : UObject {
	char pad_30[0x30]; // 0x30(0x30)

	bool SetLocalNavigationGridDensity(struct UObject* WorldContextObject, float CellSize); // Function AIModule.NavLocalGridManager.SetLocalNavigationGridDensity // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x511abf0
	void RemoveLocalNavigationGrid(struct UObject* WorldContextObject, int32_t GridId, bool bRebuildGrids); // Function AIModule.NavLocalGridManager.RemoveLocalNavigationGrid // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x51197f0
	bool FindLocalNavigationGridPath(struct UObject* WorldContextObject, struct FVector& Start, struct FVector& End, struct TArray<struct FVector>& PathPoints); // Function AIModule.NavLocalGridManager.FindLocalNavigationGridPath // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x51194b0
	int32_t AddLocalNavigationGridForPoints(struct UObject* WorldContextObject, struct TArray<struct FVector>& Locations, int32_t Radius2D, float Height, bool bRebuildGrids); // Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoints // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x511a4a0
	int32_t AddLocalNavigationGridForPoint(struct UObject* WorldContextObject, struct FVector& Location, int32_t Radius2D, float Height, bool bRebuildGrids); // Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoint // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x511a870
	int32_t AddLocalNavigationGridForCapsule(struct UObject* WorldContextObject, struct FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, int32_t Radius2D, float Height, bool bRebuildGrids); // Function AIModule.NavLocalGridManager.AddLocalNavigationGridForCapsule // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5119a50
	int32_t AddLocalNavigationGridForBox(struct UObject* WorldContextObject, struct FVector& Location, struct FVector Extent, struct FRotator Rotation, int32_t Radius2D, float Height, bool bRebuildGrids); // Function AIModule.NavLocalGridManager.AddLocalNavigationGridForBox // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5119ed0
};

// Class AIModule.PathFollowingManager
// Size: 0x30 (Inherited: 0x30)
struct UPathFollowingManager : UObject {
};

// Class AIModule.AIPerceptionComponent
// Size: 0x1d0 (Inherited: 0xd8)
struct UAIPerceptionComponent : UActorComponent {
	struct TArray<struct UAISenseConfig*> SensesConfig; // 0xd8(0x10)
	struct UAISense* DominantSense; // 0xe8(0x08)
	char pad_F0[0x10]; // 0xf0(0x10)
	struct AAIController* AIOwner; // 0x100(0x08)
	char pad_108[0x80]; // 0x108(0x80)
	struct FMulticastInlineDelegate OnPerceptionUpdated; // 0x188(0x10)
	struct FMulticastInlineDelegate OnTargetPerceptionForgotten; // 0x198(0x10)
	struct FMulticastInlineDelegate OnTargetPerceptionUpdated; // 0x1a8(0x10)
	struct FMulticastInlineDelegate OnTargetPerceptionInfoUpdated; // 0x1b8(0x10)
	enum class EAISenseActorSize MinPerceivableSize; // 0x1c8(0x01)
	char pad_1C9[0x7]; // 0x1c9(0x07)

	void SetSenseEnabled(struct UAISense* SenseClass, bool bEnable); // Function AIModule.AIPerceptionComponent.SetSenseEnabled // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x512b3f0
	void RequestStimuliListenerUpdate(); // Function AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x512c230
	void OnOwnerEndPlay(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // Function AIModule.AIPerceptionComponent.OnOwnerEndPlay // (Final|RequiredAPI|Native|Public) // @ game+0x512c280
	void GetPerceivedHostileActorsBySense(struct UAISense* SenseToUse, struct TArray<struct AActor*>& OutActors); // Function AIModule.AIPerceptionComponent.GetPerceivedHostileActorsBySense // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x512bef0
	void GetPerceivedHostileActors(struct TArray<struct AActor*>& OutActors); // Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x512c0d0
	void GetKnownPerceivedActors(struct UAISense* SenseToUse, struct TArray<struct AActor*>& OutActors); // Function AIModule.AIPerceptionComponent.GetKnownPerceivedActors // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x512bb30
	void GetCurrentlyPerceivedActors(struct UAISense* SenseToUse, struct TArray<struct AActor*>& OutActors); // Function AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x512bd10
	bool GetActorsPerception(struct AActor* Actor, struct FActorPerceptionBlueprintInfo& Info); // Function AIModule.AIPerceptionComponent.GetActorsPerception // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x512b750
	void ForgetAll(); // Function AIModule.AIPerceptionComponent.ForgetAll // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x512c210
	bool CanActorBePerceived(struct AActor* Actor); // Function AIModule.AIPerceptionComponent.CanActorBePerceived // (RequiredAPI|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x512b2e0
};

// Class AIModule.AIPerceptionListenerInterface
// Size: 0x30 (Inherited: 0x30)
struct UAIPerceptionListenerInterface : UInterface {
};

// Class AIModule.AIPerceptionStimuliSourceComponent
// Size: 0xf8 (Inherited: 0xd8)
struct UAIPerceptionStimuliSourceComponent : UActorComponent {
	char bAutoRegisterAsSource : 1; // 0xd8(0x01)
	char pad_D8_1 : 7; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct TArray<struct UAISense*> RegisterAsSourceForSenses; // 0xe0(0x10)
	enum class EAISenseActorSize StimulusSize; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)

	void UnregisterFromSense(struct UAISense* SenseClass); // Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x512fcf0
	void UnregisterFromPerceptionSystem(); // Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x512ff70
	void RegisterWithPerceptionSystem(); // Function AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x51302a0
	void RegisterForSense(struct UAISense* SenseClass); // Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x5130040
};

// Class AIModule.AIPerceptionSystem
// Size: 0x150 (Inherited: 0x50)
struct UAIPerceptionSystem : UAISubsystem {
	char pad_50[0x50]; // 0x50(0x50)
	struct TArray<struct UAISense*> Senses; // 0xa0(0x10)
	float PerceptionAgingRate; // 0xb0(0x04)
	char pad_B4[0x9c]; // 0xb4(0x9c)

	void ReportPerceptionEvent(struct UObject* WorldContextObject, struct UAISenseEvent* PerceptionEvent); // Function AIModule.AIPerceptionSystem.ReportPerceptionEvent // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x5130e00
	void ReportEvent(struct UAISenseEvent* PerceptionEvent); // Function AIModule.AIPerceptionSystem.ReportEvent // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x5131030
	bool RegisterPerceptionStimuliSource(struct UObject* WorldContextObject, struct UAISense* Sense, struct AActor* Target); // Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x5130be0
	void OnPerceptionStimuliSourceEndPlay(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay // (Final|RequiredAPI|Native|Protected) // @ game+0x5130800
	struct UAISense* GetSenseClassForStimulus(struct UObject* WorldContextObject, struct FAIStimulus& Stimulus); // Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5130990
};

// Class AIModule.AISense
// Size: 0x88 (Inherited: 0x30)
struct UAISense : UObject {
	enum class EAISenseNotifyType NotifyType; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	char bWantsNewPawnNotification : 1; // 0x34(0x01)
	char bAutoRegisterAllPawnsAsSources : 1; // 0x34(0x01)
	char pad_34_2 : 6; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct UAIPerceptionSystem* PerceptionSystemInstance; // 0x38(0x08)
	char pad_40[0x48]; // 0x40(0x48)
};

// Class AIModule.AISenseConfig_Damage
// Size: 0x58 (Inherited: 0x50)
struct UAISenseConfig_Damage : UAISenseConfig {
	struct UAISense_Damage* Implementation; // 0x50(0x08)
};

// Class AIModule.AISense_Blueprint
// Size: 0xb0 (Inherited: 0x88)
struct UAISense_Blueprint : UAISense {
	struct UUserDefinedStruct* ListenerDataType; // 0x88(0x08)
	struct TArray<struct UAIPerceptionComponent*> ListenerContainer; // 0x90(0x10)
	struct TArray<struct UAISenseEvent*> UnprocessedEvents; // 0xa0(0x10)

	float OnUpdate(struct TArray<struct UAISenseEvent*>& EventsToProcess); // Function AIModule.AISense_Blueprint.OnUpdate // (RequiredAPI|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnListenerUpdated(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent); // Function AIModule.AISense_Blueprint.OnListenerUpdated // (RequiredAPI|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnListenerUnregistered(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent); // Function AIModule.AISense_Blueprint.OnListenerUnregistered // (RequiredAPI|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnListenerRegistered(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent); // Function AIModule.AISense_Blueprint.OnListenerRegistered // (RequiredAPI|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void K2_OnNewPawn(struct APawn* NewPawn); // Function AIModule.AISense_Blueprint.K2_OnNewPawn // (RequiredAPI|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void GetAllListenerComponents(struct TArray<struct UAIPerceptionComponent*>& ListenerComponents); // Function AIModule.AISense_Blueprint.GetAllListenerComponents // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5136710
	void GetAllListenerActors(struct TArray<struct AActor*>& ListenerActors); // Function AIModule.AISense_Blueprint.GetAllListenerActors // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5136890
};

// Class AIModule.AISense_Damage
// Size: 0x98 (Inherited: 0x88)
struct UAISense_Damage : UAISense {
	struct TArray<struct FAIDamageEvent> RegisteredEvents; // 0x88(0x10)

	void ReportDamageEvent(struct UObject* WorldContextObject, struct AActor* DamagedActor, struct AActor* Instigator, float DamageAmount, struct FVector EventLocation, struct FVector HitLocation, struct FName Tag); // Function AIModule.AISense_Damage.ReportDamageEvent // (Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x5137690
};

// Class AIModule.AISense_Hearing
// Size: 0xf0 (Inherited: 0x88)
struct UAISense_Hearing : UAISense {
	struct TArray<struct FAINoiseEvent> NoiseEvents; // 0x88(0x10)
	float SpeedOfSoundSq; // 0x98(0x04)
	char pad_9C[0x54]; // 0x9c(0x54)

	void ReportNoiseEvent(struct UObject* WorldContextObject, struct FVector NoiseLocation, float Loudness, struct AActor* Instigator, float MaxRange, struct FName Tag); // Function AIModule.AISense_Hearing.ReportNoiseEvent // (Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x51386d0
};

// Class AIModule.AISense_Prediction
// Size: 0x98 (Inherited: 0x88)
struct UAISense_Prediction : UAISense {
	struct TArray<struct FAIPredictionEvent> RegisteredEvents; // 0x88(0x10)

	void RequestPawnPredictionEvent(struct APawn* Requestor, struct AActor* PredictedActor, float PredictionTime); // Function AIModule.AISense_Prediction.RequestPawnPredictionEvent // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x5139be0
	void RequestControllerPredictionEvent(struct AAIController* Requestor, struct AActor* PredictedActor, float PredictionTime); // Function AIModule.AISense_Prediction.RequestControllerPredictionEvent // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x5139e40
};

// Class AIModule.AISense_Sight
// Size: 0x1c0 (Inherited: 0x88)
struct UAISense_Sight : UAISense {
	char pad_88[0xd8]; // 0x88(0xd8)
	int32_t MaxTracesPerTick; // 0x160(0x04)
	int32_t MaxAsyncTracesPerTick; // 0x164(0x04)
	int32_t MinQueriesPerTimeSliceCheck; // 0x168(0x04)
	char pad_16C[0x4]; // 0x16c(0x04)
	double MaxTimeSlicePerTick; // 0x170(0x08)
	float HighImportanceQueryDistanceThreshold; // 0x178(0x04)
	char pad_17C[0x4]; // 0x17c(0x04)
	float MaxQueryImportance; // 0x180(0x04)
	float SightLimitQueryImportance; // 0x184(0x04)
	float PendingQueriesBudgetReductionRatio; // 0x188(0x04)
	bool bUseAsynchronousTraceForDefaultSightQueries; // 0x18c(0x01)
	char pad_18D[0x33]; // 0x18d(0x33)

	bool SetSightSenseUpdatesPerSecond(struct UObject* WorldContextObject, int32_t NewUpdatesPerSecond); // Function AIModule.AISense_Sight.SetSightSenseUpdatesPerSecond // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x513aa20
	bool SetSightSenseMaxLineTracesPerTick(struct UObject* WorldContextObject, int32_t NewMaxLineTraces); // Function AIModule.AISense_Sight.SetSightSenseMaxLineTracesPerTick // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x513a7b0
};

// Class AIModule.AISense_Team
// Size: 0x98 (Inherited: 0x88)
struct UAISense_Team : UAISense {
	struct TArray<struct FAITeamStimulusEvent> RegisteredEvents; // 0x88(0x10)
};

// Class AIModule.AISense_Touch
// Size: 0x98 (Inherited: 0x88)
struct UAISense_Touch : UAISense {
	struct TArray<struct FAITouchEvent> RegisteredEvents; // 0x88(0x10)

	void ReportTouchEvent(struct UObject* WorldContextObject, struct AActor* TouchReceiver, struct AActor* OtherActor, struct FVector Location); // Function AIModule.AISense_Touch.ReportTouchEvent // (Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x513f990
};

// Class AIModule.AISightTargetInterface
// Size: 0x30 (Inherited: 0x30)
struct UAISightTargetInterface : UInterface {
};

// Class AIModule.PawnSensingComponent
// Size: 0x120 (Inherited: 0xd8)
struct UPawnSensingComponent : UActorComponent {
	float HearingThreshold; // 0xd8(0x04)
	float LOSHearingThreshold; // 0xdc(0x04)
	float SightRadius; // 0xe0(0x04)
	float SensingInterval; // 0xe4(0x04)
	float HearingMaxSoundAge; // 0xe8(0x04)
	char bEnableSensingUpdates : 1; // 0xec(0x01)
	char bOnlySensePlayers : 1; // 0xec(0x01)
	char bSeePawns : 1; // 0xec(0x01)
	char bHearNoises : 1; // 0xec(0x01)
	char pad_EC_4 : 4; // 0xec(0x01)
	char pad_ED[0xb]; // 0xed(0x0b)
	struct FMulticastInlineDelegate OnSeePawn; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnHearNoise; // 0x108(0x10)
	float PeripheralVisionAngle; // 0x118(0x04)
	float PeripheralVisionCosine; // 0x11c(0x04)

	void SetSensingUpdatesEnabled(bool bEnabled); // Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled // (RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x5140430
	void SetSensingInterval(float NewSensingInterval); // Function AIModule.PawnSensingComponent.SetSensingInterval // (RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x5140530
	void SetPeripheralVisionAngle(float NewPeripheralVisionAngle); // Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle // (RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x5140330
	void SeePawnDelegate__DelegateSignature(struct APawn* Pawn); // DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x19be2f0
	void HearNoiseDelegate__DelegateSignature(struct APawn* Instigator, struct FVector& Location, float Volume); // DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults) // @ game+0x19be2f0
	float GetPeripheralVisionCosine(); // Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x51402f0
	float GetPeripheralVisionAngle(); // Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5140310
};

// Class AIModule.AITask
// Size: 0x78 (Inherited: 0x70)
struct UAITask : UGameplayTask {
	struct AAIController* OwnerController; // 0x70(0x08)
};

// Class AIModule.AITask_LockLogic
// Size: 0x78 (Inherited: 0x78)
struct UAITask_LockLogic : UAITask {
};

// Class AIModule.AITask_MoveTo
// Size: 0x128 (Inherited: 0x78)
struct UAITask_MoveTo : UAITask {
	struct FMulticastInlineDelegate OnRequestFailed; // 0x78(0x10)
	struct FMulticastInlineDelegate OnMoveFinished; // 0x88(0x10)
	struct FAIMoveRequest MoveRequest; // 0x98(0x50)
	char pad_E8[0x40]; // 0xe8(0x40)

	struct UAITask_MoveTo* AIMoveTo(struct AAIController* Controller, struct FVector GoalLocation, struct AActor* GoalActor, float AcceptanceRadius, enum class EAIOptionFlag StopOnOverlap, enum class EAIOptionFlag AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuousGoalTracking, enum class EAIOptionFlag ProjectGoalOnNavigation); // Function AIModule.AITask_MoveTo.AIMoveTo // (Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x5142a70
};

// Class AIModule.AITask_RunEQS
// Size: 0xf8 (Inherited: 0x78)
struct UAITask_RunEQS : UAITask {
	char pad_78[0x80]; // 0x78(0x80)

	struct UAITask_RunEQS* RunEQS(struct AAIController* Controller, struct UEnvQuery* QueryTemplate); // Function AIModule.AITask_RunEQS.RunEQS // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x5144810
};

// Class AIModule.VisualLoggerExtension
// Size: 0x30 (Inherited: 0x30)
struct UVisualLoggerExtension : UObject {
};

