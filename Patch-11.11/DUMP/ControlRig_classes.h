// Class ControlRig.ControlRigShapeLibraryLink
// Size: 0x120 (Inherited: 0x108)
struct UControlRigShapeLibraryLink : UNameSpacedUserData {
	struct UControlRigShapeLibrary* ShapeLibrary; // 0x108(0x08)
	struct TArray<struct FName> ShapeNames; // 0x110(0x10)

	void SetShapeLibrary(struct UControlRigShapeLibrary* InShapeLibrary); // Function ControlRig.ControlRigShapeLibraryLink.SetShapeLibrary // (Final|Native|Public|BlueprintCallable) // @ game+0x7201710
	struct UControlRigShapeLibrary* GetShapeLibrary(); // Function ControlRig.ControlRigShapeLibraryLink.GetShapeLibrary // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5168500
};

// Class ControlRig.RigHierarchy
// Size: 0x390 (Inherited: 0x30)
struct URigHierarchy : UObject {
	char pad_30[0x18]; // 0x30(0x18)
	struct FMulticastInlineDelegate ModifiedEventDynamic; // 0x48(0x10)
	char pad_58[0x48]; // 0x58(0x48)
	uint16_t TopologyVersion; // 0xa0(0x02)
	uint16_t MetadataVersion; // 0xa2(0x02)
	uint16_t MetadataTagVersion; // 0xa4(0x02)
	bool bEnableDirtyPropagation; // 0xa6(0x01)
	char pad_A7[0x99]; // 0xa7(0x99)
	int32_t TransformStackIndex; // 0x140(0x04)
	char pad_144[0x74]; // 0x144(0x74)
	struct URigHierarchyController* HierarchyController; // 0x1b8(0x08)
	char pad_1C0[0x58]; // 0x1c0(0x58)
	struct TMap<struct FRigElementKey, struct FRigElementKey> PreviousNameMap; // 0x218(0x50)
	char pad_268[0x80]; // 0x268(0x80)
	struct URigHierarchy* HierarchyForCacheValidation; // 0x2e8(0x08)
	char pad_2F0[0xa0]; // 0x2f0(0xa0)

	void UnsetCurveValueByIndex(int32_t InElementIndex, bool bSetupUndo); // Function ControlRig.RigHierarchy.UnsetCurveValueByIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x720bec0
	void UnsetCurveValue(struct FRigElementKey InKey, bool bSetupUndo); // Function ControlRig.RigHierarchy.UnsetCurveValue // (Final|Native|Public|BlueprintCallable) // @ game+0x720c070
	bool SwitchToWorldSpace(struct FRigElementKey InChild, bool bInitial, bool bAffectChildren); // Function ControlRig.RigHierarchy.SwitchToWorldSpace // (Final|Native|Public|BlueprintCallable) // @ game+0x7207b20
	bool SwitchToParent(struct FRigElementKey InChild, struct FRigElementKey InParent, bool bInitial, bool bAffectChildren); // Function ControlRig.RigHierarchy.SwitchToParent // (Final|Native|Public|BlueprintCallable) // @ game+0x7208040
	bool SwitchToDefaultParent(struct FRigElementKey InChild, bool bInitial, bool bAffectChildren); // Function ControlRig.RigHierarchy.SwitchToDefaultParent // (Final|Native|Public|BlueprintCallable) // @ game+0x7207db0
	struct TArray<struct FRigElementKey> SortKeys(struct TArray<struct FRigElementKey>& InKeys); // Function ControlRig.RigHierarchy.SortKeys // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x72136f0
	bool SetVectorMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FVector InValue); // Function ControlRig.RigHierarchy.SetVectorMetadata // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x7219570
	bool SetVectorArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<struct FVector> InValue); // Function ControlRig.RigHierarchy.SetVectorArrayMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x7219100
	bool SetTransformMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FTransform InValue); // Function ControlRig.RigHierarchy.SetTransformMetadata // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x72165d0
	bool SetTransformArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<struct FTransform> InValue); // Function ControlRig.RigHierarchy.SetTransformArrayMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x7216160
	bool SetTag(struct FRigElementKey InItem, struct FName InTag); // Function ControlRig.RigHierarchy.SetTag // (Final|Native|Public|BlueprintCallable) // @ game+0x7213cf0
	bool SetRotatorMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FRotator InValue); // Function ControlRig.RigHierarchy.SetRotatorMetadata // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x72185f0
	bool SetRotatorArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<struct FRotator> InValue); // Function ControlRig.RigHierarchy.SetRotatorArrayMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x7218180
	bool SetRigElementKeyMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FRigElementKey InValue); // Function ControlRig.RigHierarchy.SetRigElementKeyMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x7214710
	bool SetRigElementKeyArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<struct FRigElementKey> InValue); // Function ControlRig.RigHierarchy.SetRigElementKeyArrayMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x72142a0
	bool SetQuatMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FQuat InValue); // Function ControlRig.RigHierarchy.SetQuatMetadata // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x7217690
	bool SetQuatArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<struct FQuat> InValue); // Function ControlRig.RigHierarchy.SetQuatArrayMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x7217220
	void SetPose_ForBlueprint(struct FRigPose InPose); // Function ControlRig.RigHierarchy.SetPose_ForBlueprint // (Final|Native|Public|BlueprintCallable) // @ game+0x7206b30
	bool SetParentWeightArray(struct FRigElementKey InChild, struct TArray<struct FRigElementWeight> InWeights, bool bInitial, bool bAffectChildren); // Function ControlRig.RigHierarchy.SetParentWeightArray // (Final|Native|Public|BlueprintCallable) // @ game+0x7208320
	bool SetParentWeight(struct FRigElementKey InChild, struct FRigElementKey InParent, struct FRigElementWeight InWeight, bool bInitial, bool bAffectChildren); // Function ControlRig.RigHierarchy.SetParentWeight // (Final|Native|Public|BlueprintCallable) // @ game+0x72087c0
	bool SetNameMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FName InValue); // Function ControlRig.RigHierarchy.SetNameMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x721a4f0
	bool SetNameArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<struct FName> InValue); // Function ControlRig.RigHierarchy.SetNameArrayMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x721a080
	void SetLocalTransformByIndex(int32_t InElementIndex, struct FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // Function ControlRig.RigHierarchy.SetLocalTransformByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x72126d0
	void SetLocalTransform(struct FRigElementKey InKey, struct FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // Function ControlRig.RigHierarchy.SetLocalTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x7212be0
	bool SetLinearColorMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FLinearColor InValue); // Function ControlRig.RigHierarchy.SetLinearColorMetadata // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x7215680
	bool SetLinearColorArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<struct FLinearColor> InValue); // Function ControlRig.RigHierarchy.SetLinearColorArrayMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x7215210
	bool SetInt32Metadata(struct FRigElementKey InItem, struct FName InMetadataName, int32_t InValue); // Function ControlRig.RigHierarchy.SetInt32Metadata // (Final|Native|Public|BlueprintCallable) // @ game+0x721b290
	bool SetInt32ArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<int32_t> InValue); // Function ControlRig.RigHierarchy.SetInt32ArrayMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x721ae80
	void SetGlobalTransformByIndex(int32_t InElementIndex, struct FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchy.SetGlobalTransformByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x72116b0
	void SetGlobalTransform(struct FRigElementKey InKey, struct FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchy.SetGlobalTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x7211bc0
	bool SetFloatMetadata(struct FRigElementKey InItem, struct FName InMetadataName, float InValue); // Function ControlRig.RigHierarchy.SetFloatMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x721c1d0
	bool SetFloatArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<float> InValue); // Function ControlRig.RigHierarchy.SetFloatArrayMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x721bd60
	void SetCurveValueByIndex(int32_t InElementIndex, float InValue, bool bSetupUndo); // Function ControlRig.RigHierarchy.SetCurveValueByIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x720c2f0
	void SetCurveValue(struct FRigElementKey InKey, float InValue, bool bSetupUndo); // Function ControlRig.RigHierarchy.SetCurveValue // (Final|Native|Public|BlueprintCallable) // @ game+0x720c590
	void SetControlVisibilityByIndex(int32_t InElementIndex, bool bVisibility); // Function ControlRig.RigHierarchy.SetControlVisibilityByIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x720cf40
	void SetControlVisibility(struct FRigElementKey InKey, bool bVisibility); // Function ControlRig.RigHierarchy.SetControlVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x720d140
	void SetControlValueByIndex(int32_t InElementIndex, struct FRigControlValue InValue, enum class ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands); // Function ControlRig.RigHierarchy.SetControlValueByIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x720d390
	void SetControlValue(struct FRigElementKey InKey, struct FRigControlValue InValue, enum class ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands); // Function ControlRig.RigHierarchy.SetControlValue // (Final|Native|Public|BlueprintCallable) // @ game+0x720d7e0
	void SetControlShapeTransformByIndex(int32_t InElementIndex, struct FTransform InTransform, bool bInitial, bool bSetupUndo); // Function ControlRig.RigHierarchy.SetControlShapeTransformByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x720aba0
	void SetControlShapeTransform(struct FRigElementKey InKey, struct FTransform InTransform, bool bInitial, bool bSetupUndo); // Function ControlRig.RigHierarchy.SetControlShapeTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x720af70
	void SetControlSettingsByIndex(int32_t InElementIndex, struct FRigControlSettings InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands); // Function ControlRig.RigHierarchy.SetControlSettingsByIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x720a310
	void SetControlSettings(struct FRigElementKey InKey, struct FRigControlSettings InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands); // Function ControlRig.RigHierarchy.SetControlSettings // (Final|Native|Public|BlueprintCallable) // @ game+0x720a6c0
	void SetControlPreferredRotatorByIndex(int32_t InElementIndex, struct FRotator& InRotator, bool bInitial, bool bFixEulerFlips); // Function ControlRig.RigHierarchy.SetControlPreferredRotatorByIndex // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x720f4e0
	void SetControlPreferredRotator(struct FRigElementKey InKey, struct FRotator& InRotator, bool bInitial, bool bFixEulerFlips); // Function ControlRig.RigHierarchy.SetControlPreferredRotator // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x720f820
	void SetControlPreferredRotationOrderByIndex(int32_t InElementIndex, enum class EEulerRotationOrder InRotationOrder); // Function ControlRig.RigHierarchy.SetControlPreferredRotationOrderByIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x720dd00
	void SetControlPreferredRotationOrder(struct FRigElementKey InKey, enum class EEulerRotationOrder InRotationOrder); // Function ControlRig.RigHierarchy.SetControlPreferredRotationOrder // (Final|Native|Public|BlueprintCallable) // @ game+0x720deb0
	void SetControlPreferredEulerAnglesByIndex(int32_t InElementIndex, struct FVector& InEulerAngles, enum class EEulerRotationOrder InRotationOrder, bool bInitial, bool bFixEulerFlips); // Function ControlRig.RigHierarchy.SetControlPreferredEulerAnglesByIndex // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x720e5c0
	void SetControlPreferredEulerAngles(struct FRigElementKey InKey, struct FVector& InEulerAngles, enum class EEulerRotationOrder InRotationOrder, bool bInitial, bool bFixEulerFlips); // Function ControlRig.RigHierarchy.SetControlPreferredEulerAngles // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x720e980
	void SetControlOffsetTransformByIndex(int32_t InElementIndex, struct FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // Function ControlRig.RigHierarchy.SetControlOffsetTransformByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x720b3f0
	void SetControlOffsetTransform(struct FRigElementKey InKey, struct FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // Function ControlRig.RigHierarchy.SetControlOffsetTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x720b8f0
	bool SetBoolMetadata(struct FRigElementKey InItem, struct FName InMetadataName, bool InValue); // Function ControlRig.RigHierarchy.SetBoolMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x721d130
	bool SetBoolArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<bool> InValue); // Function ControlRig.RigHierarchy.SetBoolArrayMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x721ccc0
	void SendAutoKeyEvent(struct FRigElementKey InElement, float InOffsetInSeconds, bool bAsynchronous); // Function ControlRig.RigHierarchy.SendAutoKeyEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x72072d0
	void ResetToDefault(); // Function ControlRig.RigHierarchy.ResetToDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x7221240
	void ResetPoseToInitial(enum class ERigElementType InTypeFilter); // Function ControlRig.RigHierarchy.ResetPoseToInitial // (Final|Native|Public|BlueprintCallable) // @ game+0x7220cd0
	void ResetCurveValues(); // Function ControlRig.RigHierarchy.ResetCurveValues // (Final|Native|Public|BlueprintCallable) // @ game+0x7220c40
	void Reset(); // Function ControlRig.RigHierarchy.Reset // (Final|Native|Public|BlueprintCallable) // @ game+0x7221260
	bool RemoveMetadata(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.RemoveMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x721de00
	bool RemoveAllMetadata(struct FRigElementKey InItem); // Function ControlRig.RigHierarchy.RemoveAllMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x721dc20
	int32_t Num(); // Function ControlRig.RigHierarchy.Num // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34aa650
	struct FRigControlValue MakeControlValueFromVector2D(struct FVector2D InValue); // Function ControlRig.RigHierarchy.MakeControlValueFromVector2D // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x7206340
	struct FRigControlValue MakeControlValueFromVector(struct FVector InValue); // Function ControlRig.RigHierarchy.MakeControlValueFromVector // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x7206070
	struct FRigControlValue MakeControlValueFromTransformNoScale(struct FTransformNoScale InValue); // Function ControlRig.RigHierarchy.MakeControlValueFromTransformNoScale // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x72051b0
	struct FRigControlValue MakeControlValueFromTransform(struct FTransform InValue); // Function ControlRig.RigHierarchy.MakeControlValueFromTransform // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x7205980
	struct FRigControlValue MakeControlValueFromRotator(struct FRotator InValue); // Function ControlRig.RigHierarchy.MakeControlValueFromRotator // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x7205d90
	struct FRigControlValue MakeControlValueFromInt(int32_t InValue); // Function ControlRig.RigHierarchy.MakeControlValueFromInt // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7206600
	struct FRigControlValue MakeControlValueFromFloat(float InValue); // Function ControlRig.RigHierarchy.MakeControlValueFromFloat // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7206860
	struct FRigControlValue MakeControlValueFromEulerTransform(struct FEulerTransform InValue); // Function ControlRig.RigHierarchy.MakeControlValueFromEulerTransform // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7205550
	struct FRigControlValue MakeControlValueFromBool(bool InValue); // Function ControlRig.RigHierarchy.MakeControlValueFromBool // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x72069f0
	bool IsValidIndex(int32_t InElementIndex); // Function ControlRig.RigHierarchy.IsValidIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7220b40
	bool IsSelectedByIndex(int32_t InIndex); // Function ControlRig.RigHierarchy.IsSelectedByIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7213890
	bool IsSelected(struct FRigElementKey InKey); // Function ControlRig.RigHierarchy.IsSelected // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x72139b0
	bool IsProcedural(struct FRigElementKey& InKey); // Function ControlRig.RigHierarchy.IsProcedural // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7220840
	bool IsParentedTo(struct FRigElementKey InChild, struct FRigElementKey InParent); // Function ControlRig.RigHierarchy.IsParentedTo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x72076f0
	bool IsCurveValueSetByIndex(int32_t InElementIndex); // Function ControlRig.RigHierarchy.IsCurveValueSetByIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x720c900
	bool IsCurveValueSet(struct FRigElementKey InKey); // Function ControlRig.RigHierarchy.IsCurveValueSet // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x720ca30
	bool IsControllerAvailable(); // Function ControlRig.RigHierarchy.IsControllerAvailable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x59cfbb0
	bool HasTag(struct FRigElementKey InItem, struct FName InTag); // Function ControlRig.RigHierarchy.HasTag // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7213ec0
	struct FVector GetVectorMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FVector DefaultValue); // Function ControlRig.RigHierarchy.GetVectorMetadata // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7219ce0
	struct FVector GetVectorFromControlValue(struct FRigControlValue InValue); // Function ControlRig.RigHierarchy.GetVectorFromControlValue // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x7205f30
	struct TArray<struct FVector> GetVectorArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.GetVectorArrayMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7219930
	struct FVector2D GetVector2DFromControlValue(struct FRigControlValue InValue); // Function ControlRig.RigHierarchy.GetVector2DFromControlValue // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x7206210
	struct FTransformNoScale GetTransformNoScaleFromControlValue(struct FRigControlValue InValue); // Function ControlRig.RigHierarchy.GetTransformNoScaleFromControlValue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7205020
	struct FTransform GetTransformMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FTransform DefaultValue); // Function ControlRig.RigHierarchy.GetTransformMetadata // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7216dc0
	struct FTransform GetTransformFromControlValue(struct FRigControlValue InValue); // Function ControlRig.RigHierarchy.GetTransformFromControlValue // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x72057b0
	struct TArray<struct FTransform> GetTransformArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.GetTransformArrayMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7216a10
	struct TArray<struct FName> GetTags(struct FRigElementKey InItem); // Function ControlRig.RigHierarchy.GetTags // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7214100
	struct TArray<struct FRigElementKey> GetSelectedKeys(enum class ERigElementType InTypeFilter); // Function ControlRig.RigHierarchy.GetSelectedKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7213b90
	struct FRotator GetRotatorMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FRotator DefaultValue); // Function ControlRig.RigHierarchy.GetRotatorMetadata // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7218d60
	struct FRotator GetRotatorFromControlValue(struct FRigControlValue InValue); // Function ControlRig.RigHierarchy.GetRotatorFromControlValue // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x7205c50
	struct TArray<struct FRotator> GetRotatorArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.GetRotatorArrayMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x72189b0
	struct TArray<struct FRigElementKey> GetRootElementKeys(); // Function ControlRig.RigHierarchy.GetRootElementKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x721e630
	struct TArray<struct FRigElementKey> GetRigidBodyKeys(bool bTraverse); // Function ControlRig.RigHierarchy.GetRigidBodyKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x721e940
	struct FRigElementKey GetRigElementKeyMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FRigElementKey DefaultValue); // Function ControlRig.RigHierarchy.GetRigElementKeyMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7214e80
	struct TArray<struct FRigElementKey> GetRigElementKeyArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.GetRigElementKeyArrayMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7214ad0
	struct TArray<struct FRigElementKey> GetReferenceKeys(bool bTraverse); // Function ControlRig.RigHierarchy.GetReferenceKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x721e700
	struct FQuat GetQuatMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FQuat DefaultValue); // Function ControlRig.RigHierarchy.GetQuatMetadata // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7217df0
	struct TArray<struct FQuat> GetQuatArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.GetQuatArrayMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7217a40
	struct FRigElementKey GetPreviousParent(struct FRigElementKey& InKey); // Function ControlRig.RigHierarchy.GetPreviousParent // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7204d60
	struct FName GetPreviousName(struct FRigElementKey& InKey); // Function ControlRig.RigHierarchy.GetPreviousName // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7204f00
	struct FRigPose GetPose(bool bInitial); // Function ControlRig.RigHierarchy.GetPose // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7206f40
	struct TArray<struct FRigElementWeight> GetParentWeightArray(struct FRigElementKey InChild, bool bInitial); // Function ControlRig.RigHierarchy.GetParentWeightArray // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7208b70
	struct FRigElementWeight GetParentWeight(struct FRigElementKey InChild, struct FRigElementKey InParent, bool bInitial); // Function ControlRig.RigHierarchy.GetParentWeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7208e60
	struct FTransform GetParentTransformByIndex(int32_t InElementIndex, bool bInitial); // Function ControlRig.RigHierarchy.GetParentTransformByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7209db0
	struct FTransform GetParentTransform(struct FRigElementKey InKey, bool bInitial); // Function ControlRig.RigHierarchy.GetParentTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7209ff0
	struct TArray<struct FRigElementKey> GetParents(struct FRigElementKey InKey, bool bRecursive); // Function ControlRig.RigHierarchy.GetParents // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7209950
	int32_t GetNumberOfParents(struct FRigElementKey InKey); // Function ControlRig.RigHierarchy.GetNumberOfParents // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x72093c0
	struct TArray<struct FRigElementKey> GetNullKeys(bool bTraverse); // Function ControlRig.RigHierarchy.GetNullKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x721ef50
	struct FName GetNameMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FName DefaultValue); // Function ControlRig.RigHierarchy.GetNameMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x721aaf0
	struct TArray<struct FName> GetNameArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.GetNameArrayMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x721a8b0
	enum class ERigMetadataType GetMetadataType(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.GetMetadataType // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x721e0a0
	struct TArray<struct FName> GetMetadataNames(struct FRigElementKey InItem); // Function ControlRig.RigHierarchy.GetMetadataNames // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x721e350
	struct FTransform GetLocalTransformByIndex(int32_t InElementIndex, bool bInitial); // Function ControlRig.RigHierarchy.GetLocalTransformByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x72131c0
	struct FTransform GetLocalTransform(struct FRigElementKey InKey, bool bInitial); // Function ControlRig.RigHierarchy.GetLocalTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7213420
	int32_t GetLocalIndex_ForBlueprint(struct FRigElementKey InKey); // Function ControlRig.RigHierarchy.GetLocalIndex_ForBlueprint // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x72204a0
	struct FTransform GetLocalControlShapeTransformByIndex(int32_t InElementIndex, bool bInitial); // Function ControlRig.RigHierarchy.GetLocalControlShapeTransformByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7210bd0
	struct FTransform GetLocalControlShapeTransform(struct FRigElementKey InKey, bool bInitial); // Function ControlRig.RigHierarchy.GetLocalControlShapeTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7210e20
	struct FLinearColor GetLinearColorMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FLinearColor DefaultValue); // Function ControlRig.RigHierarchy.GetLinearColorMetadata // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7215de0
	struct TArray<struct FLinearColor> GetLinearColorArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.GetLinearColorArrayMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7215a30
	struct TArray<struct FRigElementKey> GetKeys(struct TArray<int32_t> InElementIndices); // Function ControlRig.RigHierarchy.GetKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7220080
	struct FRigElementKey GetKey(int32_t InElementIndex); // Function ControlRig.RigHierarchy.GetKey // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7220370
	int32_t GetIntFromControlValue(struct FRigControlValue InValue); // Function ControlRig.RigHierarchy.GetIntFromControlValue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x72064e0
	int32_t GetInt32Metadata(struct FRigElementKey InItem, struct FName InMetadataName, int32_t DefaultValue); // Function ControlRig.RigHierarchy.GetInt32Metadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x721b9d0
	struct TArray<int32_t> GetInt32ArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.GetInt32ArrayMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x721b640
	int32_t GetIndex_ForBlueprint(struct FRigElementKey InKey); // Function ControlRig.RigHierarchy.GetIndex_ForBlueprint // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7220680
	struct FTransform GetGlobalTransformByIndex(int32_t InElementIndex, bool bInitial); // Function ControlRig.RigHierarchy.GetGlobalTransformByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x72121a0
	struct FTransform GetGlobalTransform(struct FRigElementKey InKey, bool bInitial); // Function ControlRig.RigHierarchy.GetGlobalTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7212400
	struct FTransform GetGlobalControlShapeTransformByIndex(int32_t InElementIndex, bool bInitial); // Function ControlRig.RigHierarchy.GetGlobalControlShapeTransformByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7210650
	struct FTransform GetGlobalControlShapeTransform(struct FRigElementKey InKey, bool bInitial); // Function ControlRig.RigHierarchy.GetGlobalControlShapeTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x72108a0
	struct FTransform GetGlobalControlOffsetTransformByIndex(int32_t InElementIndex, bool bInitial); // Function ControlRig.RigHierarchy.GetGlobalControlOffsetTransformByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7211150
	struct FTransform GetGlobalControlOffsetTransform(struct FRigElementKey InKey, bool bInitial); // Function ControlRig.RigHierarchy.GetGlobalControlOffsetTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7211390
	float GetFloatMetadata(struct FRigElementKey InItem, struct FName InMetadataName, float DefaultValue); // Function ControlRig.RigHierarchy.GetFloatMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x721c930
	float GetFloatFromControlValue(struct FRigControlValue InValue); // Function ControlRig.RigHierarchy.GetFloatFromControlValue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7206740
	struct TArray<float> GetFloatArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.GetFloatArrayMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x721c580
	struct FRigElementKey GetFirstParent(struct FRigElementKey InKey); // Function ControlRig.RigHierarchy.GetFirstParent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x72095d0
	struct FEulerTransform GetEulerTransformFromControlValue(struct FRigControlValue InValue); // Function ControlRig.RigHierarchy.GetEulerTransformFromControlValue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x72053a0
	struct FRigElementKey GetDefaultParent(struct FRigElementKey InKey); // Function ControlRig.RigHierarchy.GetDefaultParent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7209830
	float GetCurveValueByIndex(int32_t InElementIndex); // Function ControlRig.RigHierarchy.GetCurveValueByIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x720cc20
	float GetCurveValue(struct FRigElementKey InKey); // Function ControlRig.RigHierarchy.GetCurveValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x720cd50
	struct TArray<struct FRigElementKey> GetCurveKeys(); // Function ControlRig.RigHierarchy.GetCurveKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x721eb80
	struct FRigControlValue GetControlValueByIndex(int32_t InElementIndex, enum class ERigControlValueType InValueType); // Function ControlRig.RigHierarchy.GetControlValueByIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x72100c0
	struct FRigControlValue GetControlValue(struct FRigElementKey InKey, enum class ERigControlValueType InValueType); // Function ControlRig.RigHierarchy.GetControlValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7210320
	struct FRotator GetControlPreferredRotatorByIndex(int32_t InElementIndex, bool bInitial); // Function ControlRig.RigHierarchy.GetControlPreferredRotatorByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x720fbd0
	struct FRotator GetControlPreferredRotator(struct FRigElementKey InKey, bool bInitial); // Function ControlRig.RigHierarchy.GetControlPreferredRotator // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x720fdf0
	enum class EEulerRotationOrder GetControlPreferredEulerRotationOrderByIndex(int32_t InElementIndex, bool bFromSettings); // Function ControlRig.RigHierarchy.GetControlPreferredEulerRotationOrderByIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x720e130
	enum class EEulerRotationOrder GetControlPreferredEulerRotationOrder(struct FRigElementKey InKey, bool bFromSettings); // Function ControlRig.RigHierarchy.GetControlPreferredEulerRotationOrder // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x720e320
	struct FVector GetControlPreferredEulerAnglesByIndex(int32_t InElementIndex, enum class EEulerRotationOrder InRotationOrder, bool bInitial); // Function ControlRig.RigHierarchy.GetControlPreferredEulerAnglesByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x720edb0
	struct FVector GetControlPreferredEulerAngles(struct FRigElementKey InKey, enum class EEulerRotationOrder InRotationOrder, bool bInitial); // Function ControlRig.RigHierarchy.GetControlPreferredEulerAngles // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x720f100
	struct URigHierarchyController* GetController(bool bCreateIfNeeded); // Function ControlRig.RigHierarchy.GetController // (Final|Native|Public|BlueprintCallable) // @ game+0x72071d0
	struct TArray<struct FRigElementKey> GetControlKeys(bool bTraverse); // Function ControlRig.RigHierarchy.GetControlKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x721ed10
	struct TArray<struct FRigElementKey> GetChildren(struct FRigElementKey InKey, bool bRecursive); // Function ControlRig.RigHierarchy.GetChildren // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7209b80
	bool GetBoolMetadata(struct FRigElementKey InItem, struct FName InMetadataName, bool DefaultValue); // Function ControlRig.RigHierarchy.GetBoolMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x721d890
	struct TArray<bool> GetBoolArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.GetBoolArrayMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x721d4e0
	struct TArray<struct FRigElementKey> GetBoneKeys(bool bTraverse); // Function ControlRig.RigHierarchy.GetBoneKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x721f190
	struct TArray<struct FRigElementKey> GetAllKeys_ForBlueprint(bool bTraverse); // Function ControlRig.RigHierarchy.GetAllKeys_ForBlueprint // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7207560
	struct FRigNullElement FindNull_ForBlueprintOnly(struct FRigElementKey& InKey); // Function ControlRig.RigHierarchy.FindNull_ForBlueprintOnly // (Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x721f3d0
	struct FRigControlElement FindControl_ForBlueprintOnly(struct FRigElementKey& InKey); // Function ControlRig.RigHierarchy.FindControl_ForBlueprintOnly // (Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x721f760
	struct FRigBoneElement FindBone_ForBlueprintOnly(struct FRigElementKey& InKey); // Function ControlRig.RigHierarchy.FindBone_ForBlueprintOnly // (Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x721fd80
	void CopyPose(struct URigHierarchy* InHierarchy, bool bCurrent, bool bInitial, bool bWeights, bool bMatchPoseInGlobalIfNeeded); // Function ControlRig.RigHierarchy.CopyPose // (Final|Native|Public|BlueprintCallable) // @ game+0x7220dc0
	void CopyHierarchy(struct URigHierarchy* InHierarchy); // Function ControlRig.RigHierarchy.CopyHierarchy // (Final|Native|Public|BlueprintCallable) // @ game+0x7221150
	bool Contains_ForBlueprint(struct FRigElementKey InKey); // Function ControlRig.RigHierarchy.Contains_ForBlueprint // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7220980
};

// Class ControlRig.TransformableControlHandle
// Size: 0xa0 (Inherited: 0x60)
struct UTransformableControlHandle : UTransformableHandle {
	struct TSoftObjectPtr<UControlRig> ControlRig; // 0x60(0x30)
	struct FName ControlName; // 0x90(0x0c)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// Class ControlRig.ControlRig
// Size: 0x620 (Inherited: 0x348)
struct UControlRig : URigVMHost {
	char pad_348[0x8]; // 0x348(0x08)
	enum class ERigExecutionType ExecutionType; // 0x350(0x01)
	char pad_351[0x3]; // 0x351(0x03)
	struct FRigHierarchySettings HierarchySettings; // 0x354(0x04)
	struct TMap<struct FRigElementKey, struct FRigControlElementCustomization> ControlCustomizations; // 0x358(0x50)
	struct URigHierarchy* DynamicHierarchy; // 0x3a8(0x08)
	struct TArray<struct TSoftObjectPtr<UControlRigShapeLibrary>> ShapeLibraries; // 0x3b0(0x10)
	struct TMap<struct FString, struct FString> ShapeLibraryNameMap; // 0x3c0(0x50)
	char pad_410[0x18]; // 0x410(0x18)
	struct UAnimationDataSourceRegistry* DataSourceRegistry; // 0x428(0x08)
	char pad_430[0x90]; // 0x430(0x90)
	struct FRigInfluenceMapPerEvent Influences; // 0x4c0(0x60)
	struct UControlRig* InteractionRig; // 0x520(0x08)
	struct UControlRig* InteractionRigClass; // 0x528(0x08)
	char pad_530[0xd0]; // 0x530(0xd0)
	struct FMulticastSparseDelegate OnControlSelected_BP; // 0x600(0x01)
	char pad_601[0x1f]; // 0x601(0x1f)

	void SetInteractionRigClass(struct UControlRig* InInteractionRigClass); // Function ControlRig.ControlRig.SetInteractionRigClass // (Final|Native|Public|BlueprintCallable) // @ game+0x7235680
	void SetInteractionRig(struct UControlRig* InInteractionRig); // Function ControlRig.ControlRig.SetInteractionRig // (Final|Native|Public|BlueprintCallable) // @ game+0x7235910
	void SelectControl(struct FName& InControlName, bool bSelect); // Function ControlRig.ControlRig.SelectControl // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7235c00
	void RequestConstruction(); // Function ControlRig.ControlRig.RequestConstruction // (Final|Native|Public|BlueprintCallable) // @ game+0x7235dc0
	void OnControlSelectedBP__DelegateSignature(struct UControlRig* Rig, struct FRigControlElement& Control, bool bSelected); // SparseDelegateFunction ControlRig.ControlRig.OnControlSelectedBP__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x19be2f0
	bool IsControlSelected(struct FName& InControlName); // Function ControlRig.ControlRig.IsControlSelected // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7235a00
	struct UControlRig* GetInteractionRigClass(); // Function ControlRig.ControlRig.GetInteractionRigClass // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x72358f0
	struct UControlRig* GetInteractionRig(); // Function ControlRig.ControlRig.GetInteractionRig // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5692990
	struct AActor* GetHostingActor(); // Function ControlRig.ControlRig.GetHostingActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7235df0
	struct URigHierarchy* GetHierarchy(); // Function ControlRig.ControlRig.GetHierarchy // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x5693330
	struct TArray<struct UControlRig*> FindControlRigs(struct UObject* Outer, struct UControlRig* OptionalClass); // Function ControlRig.ControlRig.FindControlRigs // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7235ff0
	struct TArray<struct FName> CurrentControlSelection(); // Function ControlRig.ControlRig.CurrentControlSelection // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7235b10
	struct UTransformableControlHandle* CreateTransformableControlHandle(struct UObject* Outer, struct FName& ControlName); // Function ControlRig.ControlRig.CreateTransformableControlHandle // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7235e40
	bool ClearControlSelection(); // Function ControlRig.ControlRig.ClearControlSelection // (Native|Public|BlueprintCallable) // @ game+0x7235bc0
};

// Class ControlRig.ControlRigAnimInstance
// Size: 0x390 (Inherited: 0x390)
struct UControlRigAnimInstance : UAnimInstance {
};

// Class ControlRig.ControlRigBlueprintGeneratedClass
// Size: 0x3a0 (Inherited: 0x3a0)
struct UControlRigBlueprintGeneratedClass : URigVMBlueprintGeneratedClass {
};

// Class ControlRig.ControlRigComponent
// Size: 0x7f0 (Inherited: 0x690)
struct UControlRigComponent : UPrimitiveComponent {
	struct UControlRig* ControlRigClass; // 0x688(0x08)
	struct FMulticastInlineDelegate OnPreInitializeDelegate; // 0x690(0x10)
	struct FMulticastInlineDelegate OnPostInitializeDelegate; // 0x6a0(0x10)
	struct FMulticastInlineDelegate OnPreConstructionDelegate; // 0x6b0(0x10)
	struct FMulticastInlineDelegate OnPostConstructionDelegate; // 0x6c0(0x10)
	struct FMulticastInlineDelegate OnPreForwardsSolveDelegate; // 0x6d0(0x10)
	struct FMulticastInlineDelegate OnPostForwardsSolveDelegate; // 0x6e0(0x10)
	struct TArray<struct FControlRigComponentMappedElement> UserDefinedElements; // 0x6f0(0x10)
	struct TArray<struct FControlRigComponentMappedElement> MappedElements; // 0x700(0x10)
	bool bEnableLazyEvaluation; // 0x710(0x01)
	float LazyEvaluationPositionThreshold; // 0x714(0x04)
	float LazyEvaluationRotationThreshold; // 0x718(0x04)
	float LazyEvaluationScaleThreshold; // 0x71c(0x04)
	bool bResetTransformBeforeTick; // 0x720(0x01)
	bool bResetInitialsBeforeConstruction; // 0x721(0x01)
	bool bUpdateRigOnTick; // 0x722(0x01)
	bool bUpdateInEditor; // 0x723(0x01)
	bool bDrawBones; // 0x724(0x01)
	bool bShowDebugDrawing; // 0x725(0x01)
	struct UControlRig* ControlRig; // 0x728(0x08)
	char pad_733[0xbd]; // 0x733(0xbd)

	void Update(float DeltaTime); // Function ControlRig.ControlRigComponent.Update // (Final|Native|Public|BlueprintCallable) // @ game+0x7249d60
	void SetObjectBinding(struct UObject* InObjectToBind); // Function ControlRig.ControlRigComponent.SetObjectBinding // (Final|Native|Public|BlueprintCallable) // @ game+0x72447d0
	void SetMappedElements(struct TArray<struct FControlRigComponentMappedElement> NewMappedElements); // Function ControlRig.ControlRigComponent.SetMappedElements // (Final|Native|Public|BlueprintCallable) // @ game+0x7249bd0
	void SetInitialSpaceTransform(struct FName SpaceName, struct FTransform InitialTransform, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.SetInitialSpaceTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x72449c0
	void SetInitialBoneTransform(struct FName BoneName, struct FTransform InitialTransform, enum class EControlRigComponentSpace Space, bool bPropagateToChildren); // Function ControlRig.ControlRigComponent.SetInitialBoneTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x7248100
	void SetControlVector2D(struct FName ControlName, struct FVector2D Value); // Function ControlRig.ControlRigComponent.SetControlVector2D // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x72469d0
	void SetControlTransform(struct FName ControlName, struct FTransform Value, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.SetControlTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x7245960
	void SetControlScale(struct FName ControlName, struct FVector Value, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.SetControlScale // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x7245cf0
	void SetControlRotator(struct FName ControlName, struct FRotator Value, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.SetControlRotator // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x7246130
	void SetControlRigClass(struct UControlRig* InControlRigClass); // Function ControlRig.ControlRigComponent.SetControlRigClass // (Final|Native|Public|BlueprintCallable) // @ game+0x72448c0
	void SetControlPosition(struct FName ControlName, struct FVector Value, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.SetControlPosition // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x72465a0
	void SetControlOffset(struct FName ControlName, struct FTransform OffsetTransform, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.SetControlOffset // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x7245310
	void SetControlInt(struct FName ControlName, int32_t Value); // Function ControlRig.ControlRigComponent.SetControlInt // (Final|Native|Public|BlueprintCallable) // @ game+0x7246c50
	void SetControlFloat(struct FName ControlName, float Value); // Function ControlRig.ControlRigComponent.SetControlFloat // (Final|Native|Public|BlueprintCallable) // @ game+0x7246e60
	void SetControlBool(struct FName ControlName, bool Value); // Function ControlRig.ControlRigComponent.SetControlBool // (Final|Native|Public|BlueprintCallable) // @ game+0x7247080
	void SetBoneTransform(struct FName BoneName, struct FTransform Transform, enum class EControlRigComponentSpace Space, float Weight, bool bPropagateToChildren); // Function ControlRig.ControlRigComponent.SetBoneTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x7248470
	void SetBoneInitialTransformsFromSkeletalMesh(struct USkeletalMesh* InSkeletalMesh); // Function ControlRig.ControlRigComponent.SetBoneInitialTransformsFromSkeletalMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x72493a0
	void OnPreInitialize(struct UControlRigComponent* Component); // Function ControlRig.ControlRigComponent.OnPreInitialize // (Native|Event|Public|BlueprintEvent) // @ game+0x724a170
	void OnPreForwardsSolve(struct UControlRigComponent* Component); // Function ControlRig.ControlRigComponent.OnPreForwardsSolve // (Native|Event|Public|BlueprintEvent) // @ game+0x462d040
	void OnPreConstruction(struct UControlRigComponent* Component); // Function ControlRig.ControlRigComponent.OnPreConstruction // (Native|Event|Public|BlueprintEvent) // @ game+0x7249f70
	void OnPostInitialize(struct UControlRigComponent* Component); // Function ControlRig.ControlRigComponent.OnPostInitialize // (Native|Event|Public|BlueprintEvent) // @ game+0x724a070
	void OnPostForwardsSolve(struct UControlRigComponent* Component); // Function ControlRig.ControlRigComponent.OnPostForwardsSolve // (Native|Event|Public|BlueprintEvent) // @ game+0x3a63230
	void OnPostConstruction(struct UControlRigComponent* Component); // Function ControlRig.ControlRigComponent.OnPostConstruction // (Native|Event|Public|BlueprintEvent) // @ game+0x7249e70
	void Initialize(); // Function ControlRig.ControlRigComponent.Initialize // (Final|Native|Public|BlueprintCallable) // @ game+0x7249e50
	struct FTransform GetSpaceTransform(struct FName SpaceName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetSpaceTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x7245030
	struct FTransform GetInitialSpaceTransform(struct FName SpaceName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetInitialSpaceTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x7244d50
	struct FTransform GetInitialBoneTransform(struct FName BoneName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetInitialBoneTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x7248880
	struct TArray<struct FName> GetElementNames(enum class ERigElementType ElementType); // Function ControlRig.ControlRigComponent.GetElementNames // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x7249190
	struct FVector2D GetControlVector2D(struct FName ControlName); // Function ControlRig.ControlRigComponent.GetControlVector2D // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x7247a70
	struct FTransform GetControlTransform(struct FName ControlName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetControlTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x7247280
	struct FVector GetControlScale(struct FName ControlName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetControlScale // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x7247480
	struct FRotator GetControlRotator(struct FName ControlName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetControlRotator // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x7247670
	struct UControlRig* GetControlRig(); // Function ControlRig.ControlRigComponent.GetControlRig // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x724a330
	struct FVector GetControlPosition(struct FName ControlName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetControlPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x7247880
	struct FTransform GetControlOffset(struct FName ControlName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetControlOffset // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x72456a0
	int32_t GetControlInt(struct FName ControlName); // Function ControlRig.ControlRigComponent.GetControlInt // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x7247c30
	float GetControlFloat(struct FName ControlName); // Function ControlRig.ControlRigComponent.GetControlFloat // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x7247dd0
	bool GetControlBool(struct FName ControlName); // Function ControlRig.ControlRigComponent.GetControlBool // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x7247f70
	struct FTransform GetBoneTransform(struct FName BoneName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetBoneTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x7248c00
	float GetAbsoluteTime(); // Function ControlRig.ControlRigComponent.GetAbsoluteTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x724a270
	bool DoesElementExist(struct FName Name, enum class ERigElementType ElementType); // Function ControlRig.ControlRigComponent.DoesElementExist // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x7248f90
	void ClearMappedElements(); // Function ControlRig.ControlRigComponent.ClearMappedElements // (Final|Native|Public|BlueprintCallable) // @ game+0x7249d40
	bool CanExecute(); // Function ControlRig.ControlRigComponent.CanExecute // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x724a2b0
	void AddMappedSkeletalMesh(struct USkeletalMeshComponent* SkeletalMeshComponent, struct TArray<struct FControlRigComponentMappedBone> Bones, struct TArray<struct FControlRigComponentMappedCurve> Curves); // Function ControlRig.ControlRigComponent.AddMappedSkeletalMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x72495d0
	void AddMappedElements(struct TArray<struct FControlRigComponentMappedElement> NewMappedElements); // Function ControlRig.ControlRigComponent.AddMappedElements // (Final|Native|Public|BlueprintCallable) // @ game+0x7249a60
	void AddMappedComponents(struct TArray<struct FControlRigComponentMappedComponent> Components); // Function ControlRig.ControlRigComponent.AddMappedComponents // (Final|Native|Public|BlueprintCallable) // @ game+0x72498e0
	void AddMappedCompleteSkeletalMesh(struct USkeletalMeshComponent* SkeletalMeshComponent); // Function ControlRig.ControlRigComponent.AddMappedCompleteSkeletalMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x72494c0
};

// Class ControlRig.ControlRigControlActor
// Size: 0x520 (Inherited: 0x460)
struct AControlRigControlActor : AActor {
	struct AActor* ActorToTrack; // 0x460(0x08)
	struct UControlRig* ControlRigClass; // 0x468(0x08)
	bool bRefreshOnTick; // 0x470(0x01)
	bool bIsSelectable; // 0x471(0x01)
	char pad_472[0x6]; // 0x472(0x06)
	struct UMaterialInterface* MaterialOverride; // 0x478(0x08)
	struct FString ColorParameter; // 0x480(0x10)
	bool bCastShadows; // 0x490(0x01)
	char pad_491[0x7]; // 0x491(0x07)
	struct USceneComponent* ActorRootComponent; // 0x498(0x08)
	struct TSoftObjectPtr<UControlRig> ControlRig; // 0x4a0(0x30)
	struct TArray<struct FName> ControlNames; // 0x4d0(0x10)
	struct TArray<struct FTransform> ShapeTransforms; // 0x4e0(0x10)
	struct TArray<struct UStaticMeshComponent*> Components; // 0x4f0(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> Materials; // 0x500(0x10)
	struct FName ColorParameterName; // 0x510(0x0c)
	char pad_51C[0x4]; // 0x51c(0x04)

	void ResetControlActor(); // Function ControlRig.ControlRigControlActor.ResetControlActor // (Final|Native|Public|BlueprintCallable) // @ game+0x7256890
	void Refresh(); // Function ControlRig.ControlRigControlActor.Refresh // (Final|Native|Public|BlueprintCallable) // @ game+0x7256850
	void Clear(); // Function ControlRig.ControlRigControlActor.Clear // (Final|Native|Public|BlueprintCallable) // @ game+0x7256870
};

// Class ControlRig.ControlRigShapeActor
// Size: 0x4b8 (Inherited: 0x460)
struct AControlRigShapeActor : AActor {
	struct USceneComponent* ActorRootComponent; // 0x460(0x08)
	struct UStaticMeshComponent* StaticMeshComponent; // 0x468(0x08)
	uint32_t ControlRigIndex; // 0x470(0x04)
	struct TWeakObjectPtr<struct UControlRig> ControlRig; // 0x474(0x08)
	struct FName ControlName; // 0x47c(0x0c)
	struct FName ShapeName; // 0x488(0x0c)
	struct FName ColorParameterName; // 0x494(0x0c)
	char pad_4A0[0x10]; // 0x4a0(0x10)
	char bSelected : 1; // 0x4b0(0x01)
	char bHovered : 1; // 0x4b0(0x01)
	char pad_4B0_2 : 6; // 0x4b0(0x01)
	char pad_4B1[0x7]; // 0x4b1(0x07)

	void SetSelected(bool bInSelected); // Function ControlRig.ControlRigShapeActor.SetSelected // (Native|Public|BlueprintCallable) // @ game+0x7259ac0
	void SetSelectable(bool bInSelectable); // Function ControlRig.ControlRigShapeActor.SetSelectable // (Native|Public|BlueprintCallable) // @ game+0x72599c0
	void SetHovered(bool bInHovered); // Function ControlRig.ControlRigShapeActor.SetHovered // (Native|Public|BlueprintCallable) // @ game+0x72598c0
	void SetGlobalTransform(struct FTransform& InTransform); // Function ControlRig.ControlRigShapeActor.SetGlobalTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7259740
	void SetEnabled(bool bInEnabled); // Function ControlRig.ControlRigShapeActor.SetEnabled // (Native|Public|BlueprintCallable) // @ game+0x34df7e0
	void OnTransformChanged(struct FTransform& NewTransform); // Function ControlRig.ControlRigShapeActor.OnTransformChanged // (Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x19be2f0
	void OnSelectionChanged(bool bIsSelected); // Function ControlRig.ControlRigShapeActor.OnSelectionChanged // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnManipulatingChanged(bool bIsManipulating); // Function ControlRig.ControlRigShapeActor.OnManipulatingChanged // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnHoveredChanged(bool bIsSelected); // Function ControlRig.ControlRigShapeActor.OnHoveredChanged // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnEnabledChanged(bool bIsEnabled); // Function ControlRig.ControlRigShapeActor.OnEnabledChanged // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	bool IsSelectedInEditor(); // Function ControlRig.ControlRigShapeActor.IsSelectedInEditor // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x413ab40
	bool IsHovered(); // Function ControlRig.ControlRigShapeActor.IsHovered // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5706dd0
	bool IsEnabled(); // Function ControlRig.ControlRigShapeActor.IsEnabled // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7259bc0
	struct FTransform GetGlobalTransform(); // Function ControlRig.ControlRigShapeActor.GetGlobalTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7259690
};

// Class ControlRig.ControlRigShapeLibrary
// Size: 0x170 (Inherited: 0x30)
struct UControlRigShapeLibrary : UObject {
	struct FControlRigShapeDefinition DefaultShape; // 0x30(0xb0)
	struct TSoftObjectPtr<UMaterial> DefaultMaterial; // 0xe0(0x30)
	struct TSoftObjectPtr<UMaterial> XRayMaterial; // 0x110(0x30)
	struct FName MaterialColorParameter; // 0x140(0x0c)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct TArray<struct FControlRigShapeDefinition> Shapes; // 0x150(0x10)
	char pad_160[0x10]; // 0x160(0x10)
};

// Class ControlRig.ControlRigTestData
// Size: 0x160 (Inherited: 0x30)
struct UControlRigTestData : UObject {
	struct FSoftObjectPath ControlRigObjectPath; // 0x30(0x28)
	struct FControlRigTestDataFrame Initial; // 0x58(0x90)
	struct TArray<struct FControlRigTestDataFrame> InputFrames; // 0xe8(0x10)
	struct TArray<struct FControlRigTestDataFrame> OutputFrames; // 0xf8(0x10)
	struct TArray<int32_t> FramesToSkip; // 0x108(0x10)
	double Tolerance; // 0x118(0x08)
	char pad_120[0x40]; // 0x120(0x40)

	bool SetupReplay(struct UControlRig* InControlRig, bool bGroundTruth); // Function ControlRig.ControlRigTestData.SetupReplay // (Final|Native|Public|BlueprintCallable) // @ game+0x725c6d0
	void ReleaseReplay(); // Function ControlRig.ControlRigTestData.ReleaseReplay // (Final|Native|Public|BlueprintCallable) // @ game+0x725c670
	bool Record(struct UControlRig* InControlRig, double InRecordingDuration); // Function ControlRig.ControlRigTestData.Record // (Final|Native|Public|BlueprintCallable) // @ game+0x725c9f0
	bool IsReplaying(); // Function ControlRig.ControlRigTestData.IsReplaying // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x725c5d0
	bool IsRecording(); // Function ControlRig.ControlRigTestData.IsRecording // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x725c5a0
	struct FVector2D GetTimeRange(bool bInput); // Function ControlRig.ControlRigTestData.GetTimeRange // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x725cec0
	enum class EControlRigTestDataPlaybackMode GetPlaybackMode(); // Function ControlRig.ControlRigTestData.GetPlaybackMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x725c610
	int32_t GetFrameIndexForTime(double InSeconds, bool bInput); // Function ControlRig.ControlRigTestData.GetFrameIndexForTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x725cd20
	struct UControlRigTestData* CreateNewAsset(struct FString InDesiredPackagePath, struct FString InBlueprintPathName); // Function ControlRig.ControlRigTestData.CreateNewAsset // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x725cff0
};

// Class ControlRig.ControlRigValidator
// Size: 0x70 (Inherited: 0x30)
struct UControlRigValidator : UObject {
	struct TArray<struct UControlRigValidationPass*> Passes; // 0x30(0x10)
	char pad_40[0x30]; // 0x40(0x30)
};

// Class ControlRig.ControlRigValidationPass
// Size: 0x30 (Inherited: 0x30)
struct UControlRigValidationPass : UObject {
};

// Class ControlRig.AdditiveControlRig
// Size: 0x630 (Inherited: 0x620)
struct UAdditiveControlRig : UControlRig {
	char pad_620[0x10]; // 0x620(0x10)
};

// Class ControlRig.FKControlRig
// Size: 0x660 (Inherited: 0x620)
struct UFKControlRig : UControlRig {
	struct TArray<bool> IsControlActive; // 0x620(0x10)
	enum class EControlRigFKRigExecuteMode ApplyMode; // 0x630(0x01)
	char pad_631[0x2f]; // 0x631(0x2f)
};

// Class ControlRig.RigHierarchyController
// Size: 0xa0 (Inherited: 0x30)
struct URigHierarchyController : UObject {
	bool bReportWarningsAndErrors; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct TWeakObjectPtr<struct URigHierarchy> Hierarchy; // 0x34(0x08)
	char pad_3C[0x64]; // 0x3c(0x64)

	bool SetSelection(struct TArray<struct FRigElementKey>& InKeys, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.SetSelection // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7295960
	bool SetParent(struct FRigElementKey InChild, struct FRigElementKey InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.SetParent // (Final|Native|Public|BlueprintCallable) // @ game+0x7290a10
	void SetHierarchy(struct URigHierarchy* InHierarchy); // Function ControlRig.RigHierarchyController.SetHierarchy // (Final|Native|Public|BlueprintCallable) // @ game+0x7295eb0
	struct FName SetDisplayName(struct FRigElementKey InControl, struct FName InDisplayName, bool bRenameElement, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.SetDisplayName // (Final|Native|Public|BlueprintCallable) // @ game+0x7291750
	bool SetControlSettings(struct FRigElementKey InKey, struct FRigControlSettings InSettings, bool bSetupUndo); // Function ControlRig.RigHierarchyController.SetControlSettings // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7293610
	bool SelectElement(struct FRigElementKey InKey, bool bSelect, bool bClearSelection); // Function ControlRig.RigHierarchyController.SelectElement // (Final|Native|Public|BlueprintCallable) // @ game+0x7295c50
	bool ReorderElement(struct FRigElementKey InElement, int32_t InIndex, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.ReorderElement // (Final|Native|Public|BlueprintCallable) // @ game+0x7291b70
	struct FRigElementKey RenameElement(struct FRigElementKey InElement, struct FName InName, bool bSetupUndo, bool bPrintPythonCommand, bool bClearSelection); // Function ControlRig.RigHierarchyController.RenameElement // (Final|Native|Public|BlueprintCallable) // @ game+0x7291ed0
	bool RemoveParent(struct FRigElementKey InChild, struct FRigElementKey InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.RemoveParent // (Final|Native|Public|BlueprintCallable) // @ game+0x7291070
	bool RemoveElement(struct FRigElementKey InElement, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.RemoveElement // (Final|Native|Public|BlueprintCallable) // @ game+0x7292310
	bool RemoveAllParents(struct FRigElementKey InChild, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.RemoveAllParents // (Final|Native|Public|BlueprintCallable) // @ game+0x7290d80
	struct TArray<struct FRigElementKey> MirrorElements(struct TArray<struct FRigElementKey> InKeys, struct FRigVMMirrorSettings InSettings, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands); // Function ControlRig.RigHierarchyController.MirrorElements // (Final|Native|Public|BlueprintCallable) // @ game+0x7290100
	struct TArray<struct FRigElementKey> ImportFromText(struct FString InContent, bool bReplaceExistingElements, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands); // Function ControlRig.RigHierarchyController.ImportFromText // (Final|Native|Public|BlueprintCallable) // @ game+0x72925e0
	struct TArray<struct FRigElementKey> ImportCurves(struct USkeleton* InSkeleton, struct FName InNameSpace, bool bSelectCurves, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.ImportCurves // (Final|Native|Public|BlueprintCallable) // @ game+0x7292d10
	struct TArray<struct FRigElementKey> ImportBones(struct USkeleton* InSkeleton, struct FName InNameSpace, bool bReplaceExistingBones, bool bRemoveObsoleteBones, bool bSelectBones, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.ImportBones // (Final|Native|Public|BlueprintCallable) // @ game+0x72930d0
	struct URigHierarchy* GetHierarchy(); // Function ControlRig.RigHierarchyController.GetHierarchy // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7295fa0
	struct FRigControlSettings GetControlSettings(struct FRigElementKey InKey); // Function ControlRig.RigHierarchyController.GetControlSettings // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7293880
	struct FString ExportToText(struct TArray<struct FRigElementKey> InKeys); // Function ControlRig.RigHierarchyController.ExportToText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7292a40
	struct FString ExportSelectionToText(); // Function ControlRig.RigHierarchyController.ExportSelectionToText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7292c20
	struct TArray<struct FRigElementKey> DuplicateElements(struct TArray<struct FRigElementKey> InKeys, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands); // Function ControlRig.RigHierarchyController.DuplicateElements // (Final|Native|Public|BlueprintCallable) // @ game+0x7290660
	bool DeselectElement(struct FRigElementKey InKey); // Function ControlRig.RigHierarchyController.DeselectElement // (Final|Native|Public|BlueprintCallable) // @ game+0x7295b40
	bool ClearSelection(); // Function ControlRig.RigHierarchyController.ClearSelection // (Final|Native|Public|BlueprintCallable) // @ game+0x7295930
	struct FRigElementKey AddRigidBody(struct FName InName, struct FRigElementKey InParent, struct FRigRigidBodySettings InSettings, struct FTransform InLocalTransform, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.AddRigidBody // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x7293d30
	bool AddParent(struct FRigElementKey InChild, struct FRigElementKey InParent, float InWeight, bool bMaintainGlobalTransform, bool bSetupUndo); // Function ControlRig.RigHierarchyController.AddParent // (Final|Native|Public|BlueprintCallable) // @ game+0x72913e0
	struct FRigElementKey AddNull(struct FName InName, struct FRigElementKey InParent, struct FTransform InTransform, bool bTransformInGlobal, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.AddNull // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x7294f20
	struct FRigElementKey AddCurve(struct FName InName, float InValue, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.AddCurve // (Final|Native|Public|BlueprintCallable) // @ game+0x72941e0
	struct FRigElementKey AddControl_ForBlueprint(struct FName InName, struct FRigElementKey InParent, struct FRigControlSettings InSettings, struct FRigControlValue InValue, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.AddControl_ForBlueprint // (Final|Native|Public|BlueprintCallable) // @ game+0x72948d0
	struct FRigElementKey AddBone(struct FName InName, struct FRigElementKey InParent, struct FTransform InTransform, bool bTransformInGlobal, enum class ERigBoneType InBoneType, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.AddBone // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x72953e0
	struct FRigElementKey AddAnimationChannel_ForBlueprint(struct FName InName, struct FRigElementKey InParentControl, struct FRigControlSettings InSettings, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.AddAnimationChannel_ForBlueprint // (Final|Native|Public|BlueprintCallable) // @ game+0x72944e0
};

// Class ControlRig.ControlRigLayerInstance
// Size: 0x3a0 (Inherited: 0x390)
struct UControlRigLayerInstance : UAnimInstance {
	char pad_390[0x10]; // 0x390(0x10)
};

// Class ControlRig.ControlRigObjectHolder
// Size: 0x40 (Inherited: 0x30)
struct UControlRigObjectHolder : UObject {
	struct TArray<struct UObject*> Objects; // 0x30(0x10)
};

// Class ControlRig.MovieSceneControlRigParameterSection
// Size: 0x3d8 (Inherited: 0x160)
struct UMovieSceneControlRigParameterSection : UMovieSceneParameterSection {
	char pad_160[0x48]; // 0x160(0x48)
	struct UControlRig* ControlRig; // 0x1a8(0x08)
	struct UControlRig* ControlRigClass; // 0x1b0(0x08)
	struct TArray<bool> ControlsMask; // 0x1b8(0x10)
	struct FMovieSceneTransformMask TransformMask; // 0x1c8(0x04)
	char pad_1CC[0x4]; // 0x1cc(0x04)
	struct FMovieSceneFloatChannel Weight; // 0x1d0(0x110)
	struct TMap<struct FName, struct FChannelMapInfo> ControlChannelMap; // 0x2e0(0x50)
	struct TArray<struct FEnumParameterNameAndCurve> EnumParameterNamesAndCurves; // 0x330(0x10)
	struct TArray<struct FIntegerParameterNameAndCurve> IntegerParameterNamesAndCurves; // 0x340(0x10)
	struct TArray<struct FSpaceControlNameAndChannel> SpaceChannels; // 0x350(0x10)
	struct TArray<struct FConstraintAndActiveChannel> ConstraintsChannels; // 0x360(0x10)
	char pad_370[0x68]; // 0x370(0x68)
};

// Class ControlRig.MovieSceneControlRigParameterTrack
// Size: 0x160 (Inherited: 0xa0)
struct UMovieSceneControlRigParameterTrack : UMovieSceneNameableTrack {
	char pad_A0[0x40]; // 0xa0(0x40)
	struct UControlRig* ControlRig; // 0xe0(0x08)
	struct UMovieSceneSection* SectionToKey; // 0xe8(0x08)
	struct TArray<struct UMovieSceneSection*> Sections; // 0xf0(0x10)
	struct FName TrackName; // 0x100(0x0c)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct TMap<struct FName, struct FControlRotationOrder> ControlsRotationOrder; // 0x110(0x50)
};

// Class ControlRig.ControlRigSettings
// Size: 0x48 (Inherited: 0x48)
struct UControlRigSettings : UDeveloperSettings {
};

// Class ControlRig.ControlRigEditorSettings
// Size: 0x48 (Inherited: 0x48)
struct UControlRigEditorSettings : URigVMEditorSettings {
};

// Class ControlRig.ControlRigPoseAsset
// Size: 0x90 (Inherited: 0x30)
struct UControlRigPoseAsset : UObject {
	struct FControlRigControlPose Pose; // 0x30(0x60)

	void SelectControls(struct UControlRig* InControlRig, bool bDoMirror); // Function ControlRig.ControlRigPoseAsset.SelectControls // (Final|Native|Public|BlueprintCallable) // @ game+0x72c7060
	void SavePose(struct UControlRig* InControlRig, bool bUseAll); // Function ControlRig.ControlRigPoseAsset.SavePose // (Final|Native|Public|BlueprintCallable) // @ game+0x72c7440
	void ReplaceControlName(struct FName& CurrentName, struct FName& NewName); // Function ControlRig.ControlRigPoseAsset.ReplaceControlName // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x72c6a30
	void PastePose(struct UControlRig* InControlRig, bool bDoKey, bool bDoMirror); // Function ControlRig.ControlRigPoseAsset.PastePose // (Final|Native|Public|BlueprintCallable) // @ game+0x72c71f0
	void GetCurrentPose(struct UControlRig* InControlRig, struct FControlRigControlPose& OutPose); // Function ControlRig.ControlRigPoseAsset.GetCurrentPose // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x72c6d40
	struct TArray<struct FName> GetControlNames(); // Function ControlRig.ControlRigPoseAsset.GetControlNames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x72c6c90
	bool DoesMirrorMatch(struct UControlRig* ControlRig, struct FName& ControlName); // Function ControlRig.ControlRigPoseAsset.DoesMirrorMatch // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x72c6890
};

// Class ControlRig.ControlRigPoseMirrorSettings
// Size: 0x58 (Inherited: 0x30)
struct UControlRigPoseMirrorSettings : UObject {
	struct FString RightSide; // 0x30(0x10)
	struct FString LeftSide; // 0x40(0x10)
	enum class EAxis MirrorAxis; // 0x50(0x01)
	enum class EAxis AxisToFlip; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
};

// Class ControlRig.ControlRigPoseProjectSettings
// Size: 0x40 (Inherited: 0x30)
struct UControlRigPoseProjectSettings : UObject {
	struct TArray<struct FDirectoryPath> RootSaveDirs; // 0x30(0x10)
};

// Class ControlRig.ControlRigWorkflowOptions
// Size: 0xc0 (Inherited: 0xa8)
struct UControlRigWorkflowOptions : URigVMUserWorkflowOptions {
	struct URigHierarchy* Hierarchy; // 0xa8(0x08)
	struct TArray<struct FRigElementKey> Selection; // 0xb0(0x10)

	bool EnsureAtLeastOneRigElementSelected(); // Function ControlRig.ControlRigWorkflowOptions.EnsureAtLeastOneRigElementSelected // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x72cff50
};

// Class ControlRig.ControlRigTransformWorkflowOptions
// Size: 0xc8 (Inherited: 0xc0)
struct UControlRigTransformWorkflowOptions : UControlRigWorkflowOptions {
	enum class ERigTransformType TransformType; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)

	struct TArray<struct FRigVMUserWorkflow> ProvideWorkflows(struct UObject* InSubject); // Function ControlRig.ControlRigTransformWorkflowOptions.ProvideWorkflows // (Final|Native|Public) // @ game+0x72d0170
};

// Class ControlRig.ControlRigNumericalValidationPass
// Size: 0xd0 (Inherited: 0x30)
struct UControlRigNumericalValidationPass : UControlRigValidationPass {
	bool bCheckControls; // 0x30(0x01)
	bool bCheckBones; // 0x31(0x01)
	bool bCheckCurves; // 0x32(0x01)
	char pad_33[0x1]; // 0x33(0x01)
	float TranslationPrecision; // 0x34(0x04)
	float RotationPrecision; // 0x38(0x04)
	float ScalePrecision; // 0x3c(0x04)
	float CurvePrecision; // 0x40(0x04)
	struct FName EventNameA; // 0x44(0x0c)
	struct FName EventNameB; // 0x50(0x0c)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FRigPose Pose; // 0x60(0x70)
};

