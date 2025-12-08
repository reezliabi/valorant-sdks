// Class AnimGraphRuntime.BlendSpaceLibrary
// Size: 0x30 (Inherited: 0x30)
struct UBlendSpaceLibrary : UBlueprintFunctionLibrary {

	void SnapToPosition(struct FBlendSpaceReference& BlendSpace, struct FVector NewPosition); // Function AnimGraphRuntime.BlendSpaceLibrary.SnapToPosition // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3541520
	struct FVector GetPosition(struct FBlendSpaceReference& BlendSpace); // Function AnimGraphRuntime.BlendSpaceLibrary.GetPosition // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3541850
	struct FVector GetFilteredPosition(struct FBlendSpaceReference& BlendSpace); // Function AnimGraphRuntime.BlendSpaceLibrary.GetFilteredPosition // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3541700
	void ConvertToBlendSpacePure(struct FAnimNodeReference& Node, struct FBlendSpaceReference& BlendSpace, bool& Result); // Function AnimGraphRuntime.BlendSpaceLibrary.ConvertToBlendSpacePure // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x35419a0
	struct FBlendSpaceReference ConvertToBlendSpace(struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult& Result); // Function AnimGraphRuntime.BlendSpaceLibrary.ConvertToBlendSpace // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3541c20
};

// Class AnimGraphRuntime.AnimationStateMachineLibrary
// Size: 0x30 (Inherited: 0x30)
struct UAnimationStateMachineLibrary : UBlueprintFunctionLibrary {

	void SetState(struct FAnimUpdateContext& UpdateContext, struct FAnimationStateMachineReference& Node, struct FName TargetState, float Duration, enum class ETransitionLogicType BlendType, struct UBlendProfile* BlendProfile, enum class EAlphaBlendOption AlphaBlendOption, struct UCurveFloat* CustomBlendCurve); // Function AnimGraphRuntime.AnimationStateMachineLibrary.SetState // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3543a20
	bool IsStateBlendingOut(struct FAnimUpdateContext& UpdateContext, struct FAnimationStateResultReference& Node); // Function AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingOut // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3543fd0
	bool IsStateBlendingIn(struct FAnimUpdateContext& UpdateContext, struct FAnimationStateResultReference& Node); // Function AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingIn // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x35441f0
	struct FName GetState(struct FAnimUpdateContext& UpdateContext, struct FAnimationStateMachineReference& Node); // Function AnimGraphRuntime.AnimationStateMachineLibrary.GetState // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x35437e0
	float GetRelevantAnimTimeRemainingFraction(struct FAnimUpdateContext& UpdateContext, struct FAnimationStateResultReference& Node); // Function AnimGraphRuntime.AnimationStateMachineLibrary.GetRelevantAnimTimeRemainingFraction // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3543380
	float GetRelevantAnimTimeRemaining(struct FAnimUpdateContext& UpdateContext, struct FAnimationStateResultReference& Node); // Function AnimGraphRuntime.AnimationStateMachineLibrary.GetRelevantAnimTimeRemaining // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x35435b0
	void ConvertToAnimationStateResultPure(struct FAnimNodeReference& Node, struct FAnimationStateResultReference& AnimationState, bool& Result); // Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResultPure // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3544900
	void ConvertToAnimationStateResult(struct FAnimNodeReference& Node, struct FAnimationStateResultReference& AnimationState, enum class EAnimNodeReferenceConversionResult& Result); // Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResult // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3544b90
	void ConvertToAnimationStateMachinePure(struct FAnimNodeReference& Node, struct FAnimationStateMachineReference& AnimationState, bool& Result); // Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateMachinePure // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3544410
	void ConvertToAnimationStateMachine(struct FAnimNodeReference& Node, struct FAnimationStateMachineReference& AnimationState, enum class EAnimNodeReferenceConversionResult& Result); // Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateMachine // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x35446a0
};

// Class AnimGraphRuntime.AnimExecutionContextLibrary
// Size: 0x30 (Inherited: 0x30)
struct UAnimExecutionContextLibrary : UBlueprintFunctionLibrary {

	float GetDeltaTime(struct FAnimUpdateContext& Context); // Function AnimGraphRuntime.AnimExecutionContextLibrary.GetDeltaTime // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3545f00
	float GetCurrentWeight(struct FAnimUpdateContext& Context); // Function AnimGraphRuntime.AnimExecutionContextLibrary.GetCurrentWeight // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3545dc0
	struct FAnimNodeReference GetAnimNodeReference(struct UAnimInstance* Instance, int32_t Index); // Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimNodeReference // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3546480
	struct UAnimInstance* GetAnimInstance(struct FAnimExecutionContext& Context); // Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimInstance // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x35466a0
	struct FAnimUpdateContext ConvertToUpdateContext(struct FAnimExecutionContext& Context, enum class EAnimExecutionContextConversionResult& Result); // Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToUpdateContext // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3546040
	struct FAnimPoseContext ConvertToPoseContext(struct FAnimExecutionContext& Context, enum class EAnimExecutionContextConversionResult& Result); // Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToPoseContext // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3545ba0
	struct FAnimInitializationContext ConvertToInitializationContext(struct FAnimExecutionContext& Context, enum class EAnimExecutionContextConversionResult& Result); // Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToInitializationContext // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3546260
	struct FAnimComponentSpacePoseContext ConvertToComponentSpacePoseContext(struct FAnimExecutionContext& Context, enum class EAnimExecutionContextConversionResult& Result); // Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToComponentSpacePoseContext // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3545910
};

// Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
// Size: 0x50 (Inherited: 0x40)
struct UAnimNotify_PlayMontageNotify : UAnimNotify {
	struct FName NotifyName; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
// Size: 0x48 (Inherited: 0x38)
struct UAnimNotify_PlayMontageNotifyWindow : UAnimNotifyState {
	struct FName NotifyName; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class AnimGraphRuntime.AnimSequencerInstance
// Size: 0x3a0 (Inherited: 0x390)
struct UAnimSequencerInstance : UAnimInstance {
	char pad_390[0x10]; // 0x390(0x10)
};

// Class AnimGraphRuntime.BlendListBaseLibrary
// Size: 0x30 (Inherited: 0x30)
struct UBlendListBaseLibrary : UBlueprintFunctionLibrary {

	void ResetNode(struct FBlendListBaseReference& BlendListBase); // Function AnimGraphRuntime.BlendListBaseLibrary.ResetNode // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x357b740
	struct FBlendListBaseReference ConvertToBlendListBase(struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult& Result); // Function AnimGraphRuntime.BlendListBaseLibrary.ConvertToBlendListBase // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x357b8b0
};

// Class AnimGraphRuntime.BlendSpacePlayerLibrary
// Size: 0x30 (Inherited: 0x30)
struct UBlendSpacePlayerLibrary : UBlueprintFunctionLibrary {

	void SnapToPosition(struct FBlendSpacePlayerReference& BlendSpacePlayer, struct FVector NewPosition); // Function AnimGraphRuntime.BlendSpacePlayerLibrary.SnapToPosition // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x357bea0
	bool ShouldResetPlayTimeWhenBlendSpaceChanges(struct FBlendSpacePlayerReference& BlendSpacePlayer); // Function AnimGraphRuntime.BlendSpacePlayerLibrary.ShouldResetPlayTimeWhenBlendSpaceChanges // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x357c080
	struct FBlendSpacePlayerReference SetResetPlayTimeWhenBlendSpaceChanges(struct FBlendSpacePlayerReference& BlendSpacePlayer, bool bReset); // Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetResetPlayTimeWhenBlendSpaceChanges // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x357cb60
	struct FBlendSpacePlayerReference SetPlayRate(struct FBlendSpacePlayerReference& BlendSpacePlayer, float PlayRate); // Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetPlayRate // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x357c990
	struct FBlendSpacePlayerReference SetLoop(struct FBlendSpacePlayerReference& BlendSpacePlayer, bool bLoop); // Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetLoop // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x357c7c0
	struct FBlendSpacePlayerReference SetBlendSpaceWithInertialBlending(struct FAnimUpdateContext& UpdateContext, struct FBlendSpacePlayerReference& BlendSpacePlayer, struct UBlendSpace* BlendSpace, float BlendTime); // Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetBlendSpaceWithInertialBlending // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x357cd30
	struct FBlendSpacePlayerReference SetBlendSpace(struct FBlendSpacePlayerReference& BlendSpacePlayer, struct UBlendSpace* BlendSpace); // Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetBlendSpace // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x357d060
	float GetStartPosition(struct FBlendSpacePlayerReference& BlendSpacePlayer); // Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetStartPosition // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x357c410
	struct FVector GetPosition(struct FBlendSpacePlayerReference& BlendSpacePlayer); // Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetPosition // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x357c540
	float GetPlayRate(struct FBlendSpacePlayerReference& BlendSpacePlayer); // Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetPlayRate // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x357c2e0
	bool GetLoop(struct FBlendSpacePlayerReference& BlendSpacePlayer); // Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetLoop // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x357c1b0
	struct UBlendSpace* GetBlendSpace(struct FBlendSpacePlayerReference& BlendSpacePlayer); // Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetBlendSpace // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x357c690
	void ConvertToBlendSpacePlayerPure(struct FAnimNodeReference& Node, struct FBlendSpacePlayerReference& BlendSpacePlayer, bool& Result); // Function AnimGraphRuntime.BlendSpacePlayerLibrary.ConvertToBlendSpacePlayerPure // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x357d230
	struct FBlendSpacePlayerReference ConvertToBlendSpacePlayer(struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult& Result); // Function AnimGraphRuntime.BlendSpacePlayerLibrary.ConvertToBlendSpacePlayer // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x357d4b0
};

// Class AnimGraphRuntime.KismetAnimationLibrary
// Size: 0x30 (Inherited: 0x30)
struct UKismetAnimationLibrary : UBlueprintFunctionLibrary {

	void K2_TwoBoneIK(struct FVector& RootPos, struct FVector& JointPos, struct FVector& EndPos, struct FVector& JointTarget, struct FVector& Effector, struct FVector& OutJointPos, struct FVector& OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x35c3fd0
	void K2_StartProfilingTimer(); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_StartProfilingTimer // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x35c1820
	struct FVector K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap // (Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x35c2960
	float K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x35c2700
	struct FTransform K2_LookAt(struct FTransform& CurrentTransform, struct FVector& TargetPosition, struct FVector LookAtVector, bool bUseUpVector, struct FVector UpVector, float ClampConeInDegree); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x35c3af0
	float K2_EndProfilingTimer(bool bLog, struct FString LogPrefix); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x35c1630
	float K2_DistanceBetweenTwoSocketsAndMapRange(struct USkeletalMeshComponent* Component, struct FName SocketOrBoneNameA, enum class ERelativeTransformSpace SocketSpaceA, struct FName SocketOrBoneNameB, enum class ERelativeTransformSpace SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x35c3320
	struct FVector K2_DirectionBetweenSockets(struct USkeletalMeshComponent* Component, struct FName SocketOrBoneNameFrom, struct FName SocketOrBoneNameTo); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets // (Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x35c2fe0
	float K2_CalculateVelocityFromSockets(float DeltaSeconds, struct USkeletalMeshComponent* Component, struct FName SocketOrBoneName, struct FName ReferenceSocketOrBone, enum class ERelativeTransformSpace SocketSpace, struct FVector OffsetInBoneSpace, struct FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax, enum class EEasingFuncType EasingType, struct FRuntimeFloatCurve& CustomCurve); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x35c1840
	float K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, struct FVector Position, struct FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x35c2280
	float CalculateDirection(struct FVector& Velocity, struct FRotator& BaseRotation); // Function AnimGraphRuntime.KismetAnimationLibrary.CalculateDirection // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x35c1480
};

// Class AnimGraphRuntime.LayeredBoneBlendLibrary
// Size: 0x30 (Inherited: 0x30)
struct ULayeredBoneBlendLibrary : UBlueprintFunctionLibrary {

	struct FLayeredBoneBlendReference SetBlendMask(struct FAnimUpdateContext& UpdateContext, struct FLayeredBoneBlendReference& LayeredBoneBlend, int32_t PoseIndex, struct FName BlendMaskName); // Function AnimGraphRuntime.LayeredBoneBlendLibrary.SetBlendMask // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x35c5b50
	int32_t GetNumPoses(struct FLayeredBoneBlendReference& LayeredBoneBlend); // Function AnimGraphRuntime.LayeredBoneBlendLibrary.GetNumPoses // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x35c5e90
	struct FLayeredBoneBlendReference ConvertToLayeredBoneBlend(struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult& Result); // Function AnimGraphRuntime.LayeredBoneBlendLibrary.ConvertToLayeredBoneBlend // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x35c6240
	void ConvertToLayeredBlendPerBonePure(struct FAnimNodeReference& Node, struct FLayeredBoneBlendReference& LayeredBoneBlend, bool& Result); // Function AnimGraphRuntime.LayeredBoneBlendLibrary.ConvertToLayeredBlendPerBonePure // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x35c5fc0
};

// Class AnimGraphRuntime.LinkedAnimGraphLibrary
// Size: 0x30 (Inherited: 0x30)
struct ULinkedAnimGraphLibrary : UBlueprintFunctionLibrary {

	bool HasLinkedAnimInstance(struct FLinkedAnimGraphReference& Node); // Function AnimGraphRuntime.LinkedAnimGraphLibrary.HasLinkedAnimInstance // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x35c6b70
	struct UAnimInstance* GetLinkedAnimInstance(struct FLinkedAnimGraphReference& Node); // Function AnimGraphRuntime.LinkedAnimGraphLibrary.GetLinkedAnimInstance // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x35c6a40
	void ConvertToLinkedAnimGraphPure(struct FAnimNodeReference& Node, struct FLinkedAnimGraphReference& LinkedAnimGraph, bool& Result); // Function AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraphPure // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x35c6ca0
	struct FLinkedAnimGraphReference ConvertToLinkedAnimGraph(struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult& Result); // Function AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraph // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x35c6f20
};

// Class AnimGraphRuntime.PlayMontageCallbackProxy
// Size: 0xb0 (Inherited: 0x30)
struct UPlayMontageCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnCompleted; // 0x30(0x10)
	struct FMulticastInlineDelegate OnBlendOut; // 0x40(0x10)
	struct FMulticastInlineDelegate OnInterrupted; // 0x50(0x10)
	struct FMulticastInlineDelegate OnNotifyBegin; // 0x60(0x10)
	struct FMulticastInlineDelegate OnNotifyEnd; // 0x70(0x10)
	char pad_80[0x30]; // 0x80(0x30)

	void OnNotifyEndReceived(struct FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload); // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived // (Final|RequiredAPI|Native|Protected|HasOutParms) // @ game+0x35c7310
	void OnNotifyBeginReceived(struct FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload); // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived // (Final|RequiredAPI|Native|Protected|HasOutParms) // @ game+0x35c7500
	void OnMontageEnded(struct UAnimMontage* Montage, bool bInterrupted); // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded // (Final|RequiredAPI|Native|Protected) // @ game+0x35c76f0
	void OnMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted); // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut // (Final|RequiredAPI|Native|Protected) // @ game+0x35c78c0
	struct UPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(struct USkeletalMeshComponent* InSkeletalMeshComponent, struct UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, struct FName StartingSection); // Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x35c7a90
};

// Class AnimGraphRuntime.SequenceEvaluatorLibrary
// Size: 0x30 (Inherited: 0x30)
struct USequenceEvaluatorLibrary : UBlueprintFunctionLibrary {

	struct FSequenceEvaluatorReference SetSequenceWithInertialBlending(struct FAnimUpdateContext& UpdateContext, struct FSequenceEvaluatorReference& SequenceEvaluator, struct UAnimSequenceBase* Sequence, float BlendTime); // Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetSequenceWithInertialBlending // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x35e2050
	struct FSequenceEvaluatorReference SetSequence(struct FSequenceEvaluatorReference& SequenceEvaluator, struct UAnimSequenceBase* Sequence); // Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetSequence // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x35e2380
	struct FSequenceEvaluatorReference SetExplicitTime(struct FSequenceEvaluatorReference& SequenceEvaluator, float Time); // Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetExplicitTime // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x35e2810
	struct UAnimSequenceBase* GetSequence(struct FSequenceEvaluatorReference& SequenceEvaluator); // Function AnimGraphRuntime.SequenceEvaluatorLibrary.GetSequence // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x35e1df0
	float GetAccumulatedTime(struct FSequenceEvaluatorReference& SequenceEvaluator); // Function AnimGraphRuntime.SequenceEvaluatorLibrary.GetAccumulatedTime // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x35e1f20
	void ConvertToSequenceEvaluatorPure(struct FAnimNodeReference& Node, struct FSequenceEvaluatorReference& SequenceEvaluator, bool& Result); // Function AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluatorPure // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x35e29e0
	struct FSequenceEvaluatorReference ConvertToSequenceEvaluator(struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult& Result); // Function AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluator // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x35e2c60
	struct FSequenceEvaluatorReference AdvanceTime(struct FAnimUpdateContext& UpdateContext, struct FSequenceEvaluatorReference& SequenceEvaluator, float PlayRate); // Function AnimGraphRuntime.SequenceEvaluatorLibrary.AdvanceTime // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x35e2550
};

// Class AnimGraphRuntime.SequencePlayerLibrary
// Size: 0x30 (Inherited: 0x30)
struct USequencePlayerLibrary : UBlueprintFunctionLibrary {

	struct FSequencePlayerReference SetStartPosition(struct FSequencePlayerReference& SequencePlayer, float StartPosition); // Function AnimGraphRuntime.SequencePlayerLibrary.SetStartPosition // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x35e4670
	struct FSequencePlayerReference SetSequenceWithInertialBlending(struct FAnimUpdateContext& UpdateContext, struct FSequencePlayerReference& SequencePlayer, struct UAnimSequenceBase* Sequence, float BlendTime); // Function AnimGraphRuntime.SequencePlayerLibrary.SetSequenceWithInertialBlending // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x35e3fa0
	struct FSequencePlayerReference SetSequence(struct FSequencePlayerReference& SequencePlayer, struct UAnimSequenceBase* Sequence); // Function AnimGraphRuntime.SequencePlayerLibrary.SetSequence // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x35e42d0
	struct FSequencePlayerReference SetPlayRate(struct FSequencePlayerReference& SequencePlayer, float PlayRate); // Function AnimGraphRuntime.SequencePlayerLibrary.SetPlayRate // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x35e44a0
	struct FSequencePlayerReference SetAccumulatedTime(struct FSequencePlayerReference& SequencePlayer, float Time); // Function AnimGraphRuntime.SequencePlayerLibrary.SetAccumulatedTime // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x35e4840
	float GetStartPosition(struct FSequencePlayerReference& SequencePlayer); // Function AnimGraphRuntime.SequencePlayerLibrary.GetStartPosition // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x35e3a40
	struct UAnimSequenceBase* GetSequencePure(struct FSequencePlayerReference& SequencePlayer); // Function AnimGraphRuntime.SequencePlayerLibrary.GetSequencePure // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x35e3ca0
	struct FSequencePlayerReference GetSequence(struct FSequencePlayerReference& SequencePlayer, struct UAnimSequenceBase*& SequenceBase); // Function AnimGraphRuntime.SequencePlayerLibrary.GetSequence // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x35e3dd0
	float GetPlayRate(struct FSequencePlayerReference& SequencePlayer); // Function AnimGraphRuntime.SequencePlayerLibrary.GetPlayRate // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x35e3910
	bool GetLoopAnimation(struct FSequencePlayerReference& SequencePlayer); // Function AnimGraphRuntime.SequencePlayerLibrary.GetLoopAnimation // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x35e37e0
	float GetAccumulatedTime(struct FSequencePlayerReference& SequencePlayer); // Function AnimGraphRuntime.SequencePlayerLibrary.GetAccumulatedTime // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x35e3b70
	void ConvertToSequencePlayerPure(struct FAnimNodeReference& Node, struct FSequencePlayerReference& SequencePlayer, bool& Result); // Function AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayerPure // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x35e4a10
	struct FSequencePlayerReference ConvertToSequencePlayer(struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult& Result); // Function AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayer // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x35e4c90
	float ComputePlayRateFromDuration(struct FSequencePlayerReference& SequencePlayer, float Duration); // Function AnimGraphRuntime.SequencePlayerLibrary.ComputePlayRateFromDuration // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x35e35c0
};

// Class AnimGraphRuntime.SequencerAnimationSupport
// Size: 0x30 (Inherited: 0x30)
struct USequencerAnimationSupport : UInterface {
};

// Class AnimGraphRuntime.SkeletalControlLibrary
// Size: 0x30 (Inherited: 0x30)
struct USkeletalControlLibrary : UBlueprintFunctionLibrary {

	struct FSkeletalControlReference SetAlpha(struct FSkeletalControlReference& SkeletalControl, float Alpha); // Function AnimGraphRuntime.SkeletalControlLibrary.SetAlpha // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x35e57f0
	float GetAlpha(struct FSkeletalControlReference& SkeletalControl); // Function AnimGraphRuntime.SkeletalControlLibrary.GetAlpha // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x35e56c0
	void ConvertToSkeletalControlPure(struct FAnimNodeReference& Node, struct FSkeletalControlReference& SkeletalControl, bool& Result); // Function AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControlPure // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x35e59c0
	struct FSkeletalControlReference ConvertToSkeletalControl(struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult& Result); // Function AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControl // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x35e5c40
};

