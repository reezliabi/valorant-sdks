// AnimBlueprintGeneratedClass AB_Wushu_S0_AnimGraph.AB_Wushu_S0_AnimGraph_C
// Size: 0xf68 (Inherited: 0x650)
struct UAB_Wushu_S0_AnimGraph_C : UAresEquippableAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x650(0x08)
	struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables; // 0x658(0x38)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x690(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x698(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x6a0(0x20)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0x6c0(0x50)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x710(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x758(0x50)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x7a8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x7d0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x7f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x820(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x848(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x870(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x898(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x8c0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x8e8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x910(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x938(0x48)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x980(0x20)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x9a0(0x48)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x9e8(0x20)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0xa08(0x48)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0xa50(0x20)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xa70(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0xa98(0x48)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0xae0(0x20)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xb00(0x48)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0xb48(0x20)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xb68(0x100)
	struct FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_2; // 0xc68(0x150)
	struct FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0xdb8(0x150)
	bool IsCurrentlyEquipping; // 0xf08(0x01)
	char pad_F09[0x3]; // 0xf09(0x03)
	int32_t CurrentSlot; // 0xf0c(0x04)
	int32_t PreviousSlot; // 0xf10(0x04)
	char pad_F14[0x4]; // 0xf14(0x04)
	double SlotLerpStartTime; // 0xf18(0x08)
	double LerpDuration; // 0xf20(0x08)
	struct FMovementStateMachineAnimationSlot PreviousSlotSequence; // 0xf28(0x18)
	struct FMovementStateMachineAnimationSlot CurrentSlotSequence; // 0xf40(0x18)
	double LerpAlpha; // 0xf58(0x08)
	double AimMultiplier; // 0xf60(0x08)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function AB_Wushu_S0_AnimGraph.AB_Wushu_S0_AnimGraph_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Wushu_S0_AnimGraph_AnimGraphNode_TransitionResult_500579C6470459FFAF4EE3A97C8D5E01(); // Function AB_Wushu_S0_AnimGraph.AB_Wushu_S0_AnimGraph_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Wushu_S0_AnimGraph_AnimGraphNode_TransitionResult_500579C6470459FFAF4EE3A97C8D5E01 // (BlueprintEvent) // @ game+0x19be2f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Wushu_S0_AnimGraph_AnimGraphNode_SequencePlayer_6234F77D40CDD461B24C47858E34BFC6(); // Function AB_Wushu_S0_AnimGraph.AB_Wushu_S0_AnimGraph_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Wushu_S0_AnimGraph_AnimGraphNode_SequencePlayer_6234F77D40CDD461B24C47858E34BFC6 // (BlueprintEvent) // @ game+0x19be2f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Wushu_S0_AnimGraph_AnimGraphNode_SequencePlayer_C2D87C8F4816C665F7DD8584A1D5E5A2(); // Function AB_Wushu_S0_AnimGraph.AB_Wushu_S0_AnimGraph_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Wushu_S0_AnimGraph_AnimGraphNode_SequencePlayer_C2D87C8F4816C665F7DD8584A1D5E5A2 // (BlueprintEvent) // @ game+0x19be2f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Wushu_S0_AnimGraph_AnimGraphNode_SequencePlayer_5AC7AC7D4576BE16E65F40892328F17F(); // Function AB_Wushu_S0_AnimGraph.AB_Wushu_S0_AnimGraph_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Wushu_S0_AnimGraph_AnimGraphNode_SequencePlayer_5AC7AC7D4576BE16E65F40892328F17F // (BlueprintEvent) // @ game+0x19be2f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Wushu_S0_AnimGraph_AnimGraphNode_TransitionResult_A72B59154A8B2EB81A13E2936FD8F66E(); // Function AB_Wushu_S0_AnimGraph.AB_Wushu_S0_AnimGraph_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Wushu_S0_AnimGraph_AnimGraphNode_TransitionResult_A72B59154A8B2EB81A13E2936FD8F66E // (BlueprintEvent) // @ game+0x19be2f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Wushu_S0_AnimGraph_AnimGraphNode_SequencePlayer_48137AFE42B0B343BAEC0EAC8E75C790(); // Function AB_Wushu_S0_AnimGraph.AB_Wushu_S0_AnimGraph_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Wushu_S0_AnimGraph_AnimGraphNode_SequencePlayer_48137AFE42B0B343BAEC0EAC8E75C790 // (BlueprintEvent) // @ game+0x19be2f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Wushu_S0_AnimGraph_AnimGraphNode_SequencePlayer_1EC0F1DF497AA2DB7AD1BBB3EDBC9246(); // Function AB_Wushu_S0_AnimGraph.AB_Wushu_S0_AnimGraph_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Wushu_S0_AnimGraph_AnimGraphNode_SequencePlayer_1EC0F1DF497AA2DB7AD1BBB3EDBC9246 // (BlueprintEvent) // @ game+0x19be2f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Wushu_S0_AnimGraph_AnimGraphNode_RotationOffsetBlendSpace_D3C833954932E134BC91B898D7AC8E2F(); // Function AB_Wushu_S0_AnimGraph.AB_Wushu_S0_AnimGraph_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Wushu_S0_AnimGraph_AnimGraphNode_RotationOffsetBlendSpace_D3C833954932E134BC91B898D7AC8E2F // (BlueprintEvent) // @ game+0x19be2f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Wushu_S0_AnimGraph_AnimGraphNode_RotationOffsetBlendSpace_EFD210384BDD32F922FC7DB6D9929076(); // Function AB_Wushu_S0_AnimGraph.AB_Wushu_S0_AnimGraph_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Wushu_S0_AnimGraph_AnimGraphNode_RotationOffsetBlendSpace_EFD210384BDD32F922FC7DB6D9929076 // (BlueprintEvent) // @ game+0x19be2f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Wushu_S0_AnimGraph_AnimGraphNode_TransitionResult_4370EDD644C8DAF4C3E179B930E61650(); // Function AB_Wushu_S0_AnimGraph.AB_Wushu_S0_AnimGraph_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Wushu_S0_AnimGraph_AnimGraphNode_TransitionResult_4370EDD644C8DAF4C3E179B930E61650 // (BlueprintEvent) // @ game+0x19be2f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Wushu_S0_AnimGraph_AnimGraphNode_TransitionResult_1E18E06B41F5DC6BBE5DF39BED2F0E4A(); // Function AB_Wushu_S0_AnimGraph.AB_Wushu_S0_AnimGraph_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Wushu_S0_AnimGraph_AnimGraphNode_TransitionResult_1E18E06B41F5DC6BBE5DF39BED2F0E4A // (BlueprintEvent) // @ game+0x19be2f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Wushu_S0_AnimGraph_AnimGraphNode_TransitionResult_C54383034EAC5EBE28540D976AD5E34D(); // Function AB_Wushu_S0_AnimGraph.AB_Wushu_S0_AnimGraph_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Wushu_S0_AnimGraph_AnimGraphNode_TransitionResult_C54383034EAC5EBE28540D976AD5E34D // (BlueprintEvent) // @ game+0x19be2f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Wushu_S0_AnimGraph_AnimGraphNode_TransitionResult_3718C201433C2BC202278F8244380666(); // Function AB_Wushu_S0_AnimGraph.AB_Wushu_S0_AnimGraph_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Wushu_S0_AnimGraph_AnimGraphNode_TransitionResult_3718C201433C2BC202278F8244380666 // (BlueprintEvent) // @ game+0x19be2f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Wushu_S0_AnimGraph_AnimGraphNode_TransitionResult_07D7E00446AEEFB1A85E1AAD092DBBAC(); // Function AB_Wushu_S0_AnimGraph.AB_Wushu_S0_AnimGraph_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Wushu_S0_AnimGraph_AnimGraphNode_TransitionResult_07D7E00446AEEFB1A85E1AAD092DBBAC // (BlueprintEvent) // @ game+0x19be2f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Wushu_S0_AnimGraph_AnimGraphNode_TransitionResult_7546D2CA4B049340D40AF18DB982F0AC(); // Function AB_Wushu_S0_AnimGraph.AB_Wushu_S0_AnimGraph_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Wushu_S0_AnimGraph_AnimGraphNode_TransitionResult_7546D2CA4B049340D40AF18DB982F0AC // (BlueprintEvent) // @ game+0x19be2f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Wushu_S0_AnimGraph_AnimGraphNode_TransitionResult_B7F62CCB44C9C7F713E72A85927AEB62(); // Function AB_Wushu_S0_AnimGraph.AB_Wushu_S0_AnimGraph_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Wushu_S0_AnimGraph_AnimGraphNode_TransitionResult_B7F62CCB44C9C7F713E72A85927AEB62 // (BlueprintEvent) // @ game+0x19be2f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Wushu_S0_AnimGraph_AnimGraphNode_TransitionResult_9B385218454F3AB875CAF59914540297(); // Function AB_Wushu_S0_AnimGraph.AB_Wushu_S0_AnimGraph_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Wushu_S0_AnimGraph_AnimGraphNode_TransitionResult_9B385218454F3AB875CAF59914540297 // (BlueprintEvent) // @ game+0x19be2f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Wushu_S0_AnimGraph_AnimGraphNode_TransitionResult_8659036F4FEB9E93EBF475BF6B9618AA(); // Function AB_Wushu_S0_AnimGraph.AB_Wushu_S0_AnimGraph_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Wushu_S0_AnimGraph_AnimGraphNode_TransitionResult_8659036F4FEB9E93EBF475BF6B9618AA // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_AB_Wushu_S0_AnimGraph(int32_t EntryPoint); // Function AB_Wushu_S0_AnimGraph.AB_Wushu_S0_AnimGraph_C.ExecuteUbergraph_AB_Wushu_S0_AnimGraph // (Final|UbergraphFunction) // @ game+0x19be2f0
};

