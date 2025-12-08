// AnimBlueprintGeneratedClass EQ_Bomb_S0_Skelmesh_Skeleton_AnimGraph.EQ_Bomb_S0_Skelmesh_Skeleton_AnimGraph_C
// Size: 0xb71 (Inherited: 0x390)
struct UEQ_Bomb_S0_Skelmesh_Skeleton_AnimGraph_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x390(0x08)
	struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables; // 0x398(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x3a0(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x3a8(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x3b0(0x20)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x3d0(0x50)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x420(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x448(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x470(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x498(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x4c0(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x4e8(0x48)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x530(0x20)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x550(0x48)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x598(0x20)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x5b8(0x48)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x600(0x20)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x620(0x48)
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_2; // 0x668(0xc8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x730(0x48)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x778(0x20)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x798(0x48)
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x7e0(0xc8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x8a8(0x48)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x8f0(0x20)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x910(0x100)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xa10(0x48)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0xa58(0xd0)
	int32_t BombStatus; // 0xb28(0x04)
	bool Initialize Complete; // 0xb2c(0x01)
	char pad_B2D[0x3]; // 0xb2d(0x03)
	double Defuse Progress Bomb; // 0xb30(0x08)
	double AdditivePlayRate; // 0xb38(0x08)
	double Defuse Progress Stored; // 0xb40(0x08)
	bool BombDefuseActive; // 0xb48(0x01)
	char pad_B49[0x7]; // 0xb49(0x07)
	double Defuse Blend; // 0xb50(0x08)
	double LastTimeWasDiffusing; // 0xb58(0x08)
	double LastDiffuseProgress; // 0xb60(0x08)
	double AnimationDecayDuration; // 0xb68(0x08)
	bool BombEquippable?; // 0xb70(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function EQ_Bomb_S0_Skelmesh_Skeleton_AnimGraph.EQ_Bomb_S0_Skelmesh_Skeleton_AnimGraph_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_EQ_Bomb_S0_Skelmesh_Skeleton_AnimGraph_AnimGraphNode_ApplyAdditive_3A6782EA441DEB9FE25960B494BB70F7(); // Function EQ_Bomb_S0_Skelmesh_Skeleton_AnimGraph.EQ_Bomb_S0_Skelmesh_Skeleton_AnimGraph_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EQ_Bomb_S0_Skelmesh_Skeleton_AnimGraph_AnimGraphNode_ApplyAdditive_3A6782EA441DEB9FE25960B494BB70F7 // (BlueprintEvent) // @ game+0x19be2f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_EQ_Bomb_S0_Skelmesh_Skeleton_AnimGraph_AnimGraphNode_TwoWayBlend_341B719340166D62957AD09AC19B2805(); // Function EQ_Bomb_S0_Skelmesh_Skeleton_AnimGraph.EQ_Bomb_S0_Skelmesh_Skeleton_AnimGraph_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EQ_Bomb_S0_Skelmesh_Skeleton_AnimGraph_AnimGraphNode_TwoWayBlend_341B719340166D62957AD09AC19B2805 // (BlueprintEvent) // @ game+0x19be2f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_EQ_Bomb_S0_Skelmesh_Skeleton_AnimGraph_AnimGraphNode_TwoWayBlend_E318110C4570DE662675F1855AF712F4(); // Function EQ_Bomb_S0_Skelmesh_Skeleton_AnimGraph.EQ_Bomb_S0_Skelmesh_Skeleton_AnimGraph_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EQ_Bomb_S0_Skelmesh_Skeleton_AnimGraph_AnimGraphNode_TwoWayBlend_E318110C4570DE662675F1855AF712F4 // (BlueprintEvent) // @ game+0x19be2f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_EQ_Bomb_S0_Skelmesh_Skeleton_AnimGraph_AnimGraphNode_TransitionResult_860158994768F1DF5A5ED698CC2F0FB2(); // Function EQ_Bomb_S0_Skelmesh_Skeleton_AnimGraph.EQ_Bomb_S0_Skelmesh_Skeleton_AnimGraph_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EQ_Bomb_S0_Skelmesh_Skeleton_AnimGraph_AnimGraphNode_TransitionResult_860158994768F1DF5A5ED698CC2F0FB2 // (BlueprintEvent) // @ game+0x19be2f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_EQ_Bomb_S0_Skelmesh_Skeleton_AnimGraph_AnimGraphNode_TransitionResult_1DCC6A8A40BDBFF56CB3CBAB266C9200(); // Function EQ_Bomb_S0_Skelmesh_Skeleton_AnimGraph.EQ_Bomb_S0_Skelmesh_Skeleton_AnimGraph_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EQ_Bomb_S0_Skelmesh_Skeleton_AnimGraph_AnimGraphNode_TransitionResult_1DCC6A8A40BDBFF56CB3CBAB266C9200 // (BlueprintEvent) // @ game+0x19be2f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_EQ_Bomb_S0_Skelmesh_Skeleton_AnimGraph_AnimGraphNode_TransitionResult_3E9EBC06493DEB4C894ABEB5BD3E066E(); // Function EQ_Bomb_S0_Skelmesh_Skeleton_AnimGraph.EQ_Bomb_S0_Skelmesh_Skeleton_AnimGraph_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EQ_Bomb_S0_Skelmesh_Skeleton_AnimGraph_AnimGraphNode_TransitionResult_3E9EBC06493DEB4C894ABEB5BD3E066E // (BlueprintEvent) // @ game+0x19be2f0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function EQ_Bomb_S0_Skelmesh_Skeleton_AnimGraph.EQ_Bomb_S0_Skelmesh_Skeleton_AnimGraph_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void AnimNotify_ClearAdditive(); // Function EQ_Bomb_S0_Skelmesh_Skeleton_AnimGraph.EQ_Bomb_S0_Skelmesh_Skeleton_AnimGraph_C.AnimNotify_ClearAdditive // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AnimNotify_SetAdditiveDefault(); // Function EQ_Bomb_S0_Skelmesh_Skeleton_AnimGraph.EQ_Bomb_S0_Skelmesh_Skeleton_AnimGraph_C.AnimNotify_SetAdditiveDefault // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_EQ_Bomb_S0_Skelmesh_Skeleton_AnimGraph(int32_t EntryPoint); // Function EQ_Bomb_S0_Skelmesh_Skeleton_AnimGraph.EQ_Bomb_S0_Skelmesh_Skeleton_AnimGraph_C.ExecuteUbergraph_EQ_Bomb_S0_Skelmesh_Skeleton_AnimGraph // (Final|UbergraphFunction) // @ game+0x19be2f0
};

