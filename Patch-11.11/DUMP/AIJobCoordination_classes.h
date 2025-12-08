// Class AIJobCoordination.BTDecorator_FulfillsJobTag
// Size: 0x90 (Inherited: 0x70)
struct UBTDecorator_FulfillsJobTag : UBTDecorator {
	struct FGameplayTag FulfillsJobTag; // 0x70(0x0c)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct UJobPerformerComponent_Base* OwnerPerformerComp; // 0x80(0x08)
	struct UBehaviorTreeComponent* OwnerBehaviorTreeComp; // 0x88(0x08)

	void OnOwnerUnclaimedJob(struct UJobPerformerComponent_Base* JobPerformer, struct UJobObject_Base* OldJob); // Function AIJobCoordination.BTDecorator_FulfillsJobTag.OnOwnerUnclaimedJob // (Final|Native|Private) // @ game+0x560f2f0
	void OnOwnerClaimedJob(struct UJobPerformerComponent_Base* JobPerformer, struct UJobObject_Base* NewJob); // Function AIJobCoordination.BTDecorator_FulfillsJobTag.OnOwnerClaimedJob // (Final|Native|Private) // @ game+0x560f2f0
};

// Class AIJobCoordination.BTDecorator_JobStatus
// Size: 0x88 (Inherited: 0x70)
struct UBTDecorator_JobStatus : UBTDecorator {
	enum class EAIJobCoordination_JobStatus FulfillsJobStatus; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct UJobPerformerComponent_Base* OwnerPerformerComp; // 0x78(0x08)
	struct UBehaviorTreeComponent* OwnerBehaviorTreeComp; // 0x80(0x08)

	void OnOwnerUnclaimedJob(struct UJobPerformerComponent_Base* JobPerformer, struct UJobObject_Base* OldJob); // Function AIJobCoordination.BTDecorator_JobStatus.OnOwnerUnclaimedJob // (Final|Native|Private) // @ game+0x560f890
	void OnOwnerClaimedJob(struct UJobPerformerComponent_Base* JobPerformer, struct UJobObject_Base* NewJob); // Function AIJobCoordination.BTDecorator_JobStatus.OnOwnerClaimedJob // (Final|Native|Private) // @ game+0x560fa20
	void OnJobStatusUpdated(struct UJobObject_Base* Job, enum class EAIJobCoordination_JobStatus NewStatus, enum class EAIJobCoordination_JobStatus OldStatus); // Function AIJobCoordination.BTDecorator_JobStatus.OnJobStatusUpdated // (Final|Native|Private) // @ game+0x560f680
};

// Class AIJobCoordination.BTTask_UpdateJobStatus
// Size: 0x80 (Inherited: 0x78)
struct UBTTask_UpdateJobStatus : UBTTaskNode {
	enum class EAIJobCoordination_JobStatus SetStatus; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// Class AIJobCoordination.JobCoordinatorSpawnerComponent
// Size: 0x138 (Inherited: 0xd8)
struct UJobCoordinatorSpawnerComponent : UActorComponent {
	struct TSet<struct AJobCoordinator_Base*> CoordinatorTypesToSpawn; // 0xd8(0x50)
	struct TArray<struct AJobCoordinator_Base*> SpawnedCoordinators; // 0x128(0x10)

	struct TArray<struct AJobCoordinator_Base*> GetCoordinators(); // Function AIJobCoordination.JobCoordinatorSpawnerComponent.GetCoordinators // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x560ff70
	void AuthSpawnJobCoordinators(); // Function AIJobCoordination.JobCoordinatorSpawnerComponent.AuthSpawnJobCoordinators // (Final|Native|Protected|BlueprintCallable) // @ game+0x386c9d0
};

// Class AIJobCoordination.JobCoordinator_Base
// Size: 0x4a8 (Inherited: 0x460)
struct AJobCoordinator_Base : AActor {
	struct UJobPerformerComponent_Base* JobPerformerType; // 0x460(0x08)
	struct TArray<struct UJobObject_Base*> UnclaimedJobs; // 0x468(0x10)
	struct TArray<struct UJobObject_Base*> ClaimedJobs; // 0x478(0x10)
	struct TArray<struct UJobPerformerComponent_Base*> JobPerformers; // 0x488(0x10)
	struct TArray<struct UJobProviderComponent_Base*> JobProviders; // 0x498(0x10)

	struct TArray<struct UJobObject_Base*> GetUnclaimedJobs(); // Function AIJobCoordination.JobCoordinator_Base.GetUnclaimedJobs // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5610380
	struct TArray<struct UJobProviderComponent_Base*> GetJobProviders(); // Function AIJobCoordination.JobCoordinator_Base.GetJobProviders // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5610290
	struct TArray<struct UJobPerformerComponent_Base*> GetJobPerformers(); // Function AIJobCoordination.JobCoordinator_Base.GetJobPerformers // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5610320
	struct TArray<struct UJobObject_Base*> GetClaimedJobs(); // Function AIJobCoordination.JobCoordinator_Base.GetClaimedJobs // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5610350
	bool AuthRegisterAndInitNewJobPerformer(struct AController* InController); // Function AIJobCoordination.JobCoordinator_Base.AuthRegisterAndInitNewJobPerformer // (Final|Native|Public|BlueprintCallable) // @ game+0x56103b0
	bool AuthDeregisterJobPerformer(struct AController* InController); // Function AIJobCoordination.JobCoordinator_Base.AuthDeregisterJobPerformer // (Final|Native|Public|BlueprintCallable) // @ game+0x56103b0
};

// Class AIJobCoordination.JobObject_Base
// Size: 0x68 (Inherited: 0x30)
struct UJobObject_Base : UObject {
	struct FMulticastInlineDelegate OnJobStatusUpdated; // 0x30(0x10)
	struct FGameplayTag CapabilityTagFulfillingJob; // 0x40(0x0c)
	enum class EAIJobCoordination_JobStatus Status; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct UJobPerformerComponent_Base* JobPerformer; // 0x50(0x08)
	struct AJobCoordinator_Base* JobCoordinator; // 0x58(0x08)
	bool bIsJobRegistered; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)

	void UpdateStatus(enum class EAIJobCoordination_JobStatus NewStatus); // Function AIJobCoordination.JobObject_Base.UpdateStatus // (Final|Native|Public|BlueprintCallable) // @ game+0x5610ab0
	enum class EAIJobCoordination_JobStatus GetStatus(); // Function AIJobCoordination.JobObject_Base.GetStatus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5610980
	float GetPriority(); // Function AIJobCoordination.JobObject_Base.GetPriority // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3cb01e0
	struct UJobPerformerComponent_Base* GetPerformer(); // Function AIJobCoordination.JobObject_Base.GetPerformer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5610960
	float GetJobPerformerSuitability(struct UJobPerformerComponent_Base* PotentialPerformer); // Function AIJobCoordination.JobObject_Base.GetJobPerformerSuitability // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x56109a0
	bool GetIsRegistered(); // Function AIJobCoordination.JobObject_Base.GetIsRegistered // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e0c0c0
	struct FGameplayTag GetCapabilityTagFulfillingJob(); // Function AIJobCoordination.JobObject_Base.GetCapabilityTagFulfillingJob // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5610930
	void AuthOnJobUnclaimedResponse(); // Function AIJobCoordination.JobObject_Base.AuthOnJobUnclaimedResponse // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void AuthOnJobClaimedResponse(); // Function AIJobCoordination.JobObject_Base.AuthOnJobClaimedResponse // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
};

// Class AIJobCoordination.JobPerformerComponent_Base
// Size: 0x128 (Inherited: 0xd8)
struct UJobPerformerComponent_Base : UActorComponent {
	struct FMulticastInlineDelegate OnPerformerClaimedJob; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnPerformerUnclaimedJob; // 0xe8(0x10)
	struct AController* OwningController; // 0xf8(0x08)
	struct UJobObject_Base* ClaimedJob; // 0x100(0x08)
	struct FGameplayTagContainer CapabilitiesTags; // 0x108(0x20)

	struct AController* GetController(); // Function AIJobCoordination.JobPerformerComponent_Base.GetController // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x456dee0
	struct UJobObject_Base* GetClaimedJob(); // Function AIJobCoordination.JobPerformerComponent_Base.GetClaimedJob // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x361c0d0
	struct FGameplayTagContainer GetCapabilitiesTags(); // Function AIJobCoordination.JobPerformerComponent_Base.GetCapabilitiesTags // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5610fc0
	struct FGameplayTagContainer AuthInitializeCapabilitiesTags(); // Function AIJobCoordination.JobPerformerComponent_Base.AuthInitializeCapabilitiesTags // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
};

// Class AIJobCoordination.JobProviderComponent_Base
// Size: 0x100 (Inherited: 0xd8)
struct UJobProviderComponent_Base : UActorComponent {
	struct TArray<struct UJobPerformerComponent_Base*> JobPerformers; // 0xd8(0x10)
	struct AJobCoordinator_Base* OwningCoordinator; // 0xe8(0x08)
	struct TArray<struct UJobObject_Base*> CreatedJobs; // 0xf0(0x10)

	struct TArray<struct UJobPerformerComponent_Base*> GetJobPerformers(); // Function AIJobCoordination.JobProviderComponent_Base.GetJobPerformers // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56117c0
	struct TArray<struct UJobObject_Base*> GetCreatedJobs(); // Function AIJobCoordination.JobProviderComponent_Base.GetCreatedJobs // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5611790
	struct AJobCoordinator_Base* GetCoordinator(); // Function AIJobCoordination.JobProviderComponent_Base.GetCoordinator // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b85cf0
	void AuthOnJobStatusUpdatedResponse(struct UJobObject_Base* Job, enum class EAIJobCoordination_JobStatus NewStatus, enum class EAIJobCoordination_JobStatus OldStatus); // Function AIJobCoordination.JobProviderComponent_Base.AuthOnJobStatusUpdatedResponse // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void AuthOnJobStatusUpdated(struct UJobObject_Base* Job, enum class EAIJobCoordination_JobStatus NewStatus, enum class EAIJobCoordination_JobStatus OldStatus); // Function AIJobCoordination.JobProviderComponent_Base.AuthOnJobStatusUpdated // (Final|Native|Private) // @ game+0x5611590
	void AuthInvalidateJob(struct UJobObject_Base* InJob); // Function AIJobCoordination.JobProviderComponent_Base.AuthInvalidateJob // (Final|Native|Protected|BlueprintCallable) // @ game+0x33ba9c0
	void AuthInvalidateCreatedJobs(); // Function AIJobCoordination.JobProviderComponent_Base.AuthInvalidateCreatedJobs // (Final|Native|Protected|BlueprintCallable) // @ game+0x386c9d0
	struct UJobObject_Base* AuthCreateNewJob(struct UJobObject_Base* InJobType); // Function AIJobCoordination.JobProviderComponent_Base.AuthCreateNewJob // (Final|Native|Public|BlueprintCallable) // @ game+0x3a49850
};

