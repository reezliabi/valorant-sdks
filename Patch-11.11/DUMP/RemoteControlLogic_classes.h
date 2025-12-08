// Class RemoteControlLogic.RCAction
// Size: 0x58 (Inherited: 0x30)
struct URCAction : UObject {
	struct FGuid ExposedFieldId; // 0x30(0x10)
	struct FGuid ID; // 0x40(0x10)
	struct TWeakObjectPtr<struct URemoteControlPreset> PresetWeakPtr; // 0x50(0x08)
};

// Class RemoteControlLogic.RCActionContainer
// Size: 0xf0 (Inherited: 0x30)
struct URCActionContainer : UObject {
	struct TSet<struct URCActionContainer*> ActionContainers; // 0x30(0x50)
	struct TWeakObjectPtr<struct URemoteControlPreset> PresetWeakPtr; // 0x80(0x08)
	char pad_88[0x18]; // 0x88(0x18)
	struct TSet<struct URCAction*> Actions; // 0xa0(0x50)
};

// Class RemoteControlLogic.RCBehaviour
// Size: 0x98 (Inherited: 0x30)
struct URCBehaviour : UObject {
	struct URCBehaviourNode* BehaviourNodeClass; // 0x30(0x08)
	struct FSoftClassPath OverrideBehaviourBlueprintClassPath; // 0x38(0x28)
	struct FGuid ID; // 0x60(0x10)
	struct URCActionContainer* ActionContainer; // 0x70(0x08)
	struct TWeakObjectPtr<struct URCController> ControllerWeakPtr; // 0x78(0x08)
	char pad_80[0x8]; // 0x80(0x08)
	struct URCBehaviourNode* CachedBehaviourNode; // 0x88(0x08)
	bool bIsEnabled; // 0x90(0x01)
	bool bExecuteBehavioursDuringPreChange; // 0x91(0x01)
	char pad_92[0x6]; // 0x92(0x06)
};

// Class RemoteControlLogic.RCBehaviourBind
// Size: 0xa0 (Inherited: 0x98)
struct URCBehaviourBind : URCBehaviour {
	char pad_98[0x8]; // 0x98(0x08)
};

// Class RemoteControlLogic.RCBehaviourNode
// Size: 0x60 (Inherited: 0x30)
struct URCBehaviourNode : UObject {
	struct FText DisplayName; // 0x30(0x18)
	struct FText BehaviorDescription; // 0x48(0x18)
};

// Class RemoteControlLogic.RCBehaviourBindNode
// Size: 0x60 (Inherited: 0x60)
struct URCBehaviourBindNode : URCBehaviourNode {

	void OnPassed(struct URCBehaviour* InBehaviour); // Function RemoteControlLogic.RCBehaviourBindNode.OnPassed // (Native|Event|Public|BlueprintCallable|BlueprintEvent|Const) // @ game+0x3a67cc0
	bool IsSupported(struct URCBehaviour* InBehaviour); // Function RemoteControlLogic.RCBehaviourBindNode.IsSupported // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x6cc3cf0
	bool Execute(struct URCBehaviour* InBehaviour); // Function RemoteControlLogic.RCBehaviourBindNode.Execute // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x6cc3e00
};

// Class RemoteControlLogic.RCBehaviourBlueprintNode
// Size: 0x60 (Inherited: 0x60)
struct URCBehaviourBlueprintNode : URCBehaviourNode {

	void PreExecute(struct URCBehaviour* InBehaviour); // Function RemoteControlLogic.RCBehaviourBlueprintNode.PreExecute // (Native|Event|Public|BlueprintCallable|BlueprintEvent|Const) // @ game+0x3c4d820
	void OnPassed(struct URCBehaviour* InBehaviour); // Function RemoteControlLogic.RCBehaviourBlueprintNode.OnPassed // (Native|Event|Public|BlueprintCallable|BlueprintEvent|Const) // @ game+0x3a67cc0
	bool IsSupported(struct URCBehaviour* InBehaviour); // Function RemoteControlLogic.RCBehaviourBlueprintNode.IsSupported // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x5754e70
	bool Execute(struct URCBehaviour* InBehaviour); // Function RemoteControlLogic.RCBehaviourBlueprintNode.Execute // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x6cc3e00
};

// Class RemoteControlLogic.RCBehaviourConditional
// Size: 0xf0 (Inherited: 0x98)
struct URCBehaviourConditional : URCBehaviour {
	struct TMap<struct URCAction*, struct FRCBehaviourCondition> Conditions; // 0x98(0x50)
	struct URCVirtualPropertySelfContainer* Comparand; // 0xe8(0x08)
};

// Class RemoteControlLogic.RCBehaviourConditionalNode
// Size: 0x60 (Inherited: 0x60)
struct URCBehaviourConditionalNode : URCBehaviourNode {

	void OnPassed(struct URCBehaviour* InBehaviour); // Function RemoteControlLogic.RCBehaviourConditionalNode.OnPassed // (Native|Event|Public|BlueprintCallable|BlueprintEvent|Const) // @ game+0x3a67cc0
	bool IsSupported(struct URCBehaviour* InBehaviour); // Function RemoteControlLogic.RCBehaviourConditionalNode.IsSupported // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x6cc3cf0
	bool Execute(struct URCBehaviour* InBehaviour); // Function RemoteControlLogic.RCBehaviourConditionalNode.Execute // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x6cc3e00
};

// Class RemoteControlLogic.RCBehaviourOnValueChangedNode
// Size: 0x60 (Inherited: 0x60)
struct URCBehaviourOnValueChangedNode : URCBehaviourNode {

	bool IsSupported(struct URCBehaviour* InBehaviour); // Function RemoteControlLogic.RCBehaviourOnValueChangedNode.IsSupported // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x6cc5050
	bool Execute(struct URCBehaviour* InBehaviour); // Function RemoteControlLogic.RCBehaviourOnValueChangedNode.Execute // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x6cc3cf0
};

// Class RemoteControlLogic.RCBehaviourRangeMapNode
// Size: 0x60 (Inherited: 0x60)
struct URCBehaviourRangeMapNode : URCBehaviourNode {

	void OnPassed(struct URCBehaviour* InBehaviour); // Function RemoteControlLogic.RCBehaviourRangeMapNode.OnPassed // (Native|Event|Public|BlueprintCallable|BlueprintEvent|Const) // @ game+0x3a67cc0
	bool IsSupported(struct URCBehaviour* InBehaviour); // Function RemoteControlLogic.RCBehaviourRangeMapNode.IsSupported // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x6cc3cf0
	bool Execute(struct URCBehaviour* InBehaviour); // Function RemoteControlLogic.RCBehaviourRangeMapNode.Execute // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x6cc3e00
};

// Class RemoteControlLogic.RCBehaviourSetAssetByPathNode
// Size: 0x60 (Inherited: 0x60)
struct URCBehaviourSetAssetByPathNode : URCBehaviourNode {

	bool IsSupported(struct URCBehaviour* InBehaviour); // Function RemoteControlLogic.RCBehaviourSetAssetByPathNode.IsSupported // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x6cc5050
	bool Execute(struct URCBehaviour* InBehaviour); // Function RemoteControlLogic.RCBehaviourSetAssetByPathNode.Execute // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x6cc3cf0
};

// Class RemoteControlLogic.RCController
// Size: 0x130 (Inherited: 0xc8)
struct URCController : URCVirtualPropertyInContainer {
	char pad_C8[0x18]; // 0xc8(0x18)
	struct TSet<struct URCBehaviour*> Behaviours; // 0xe0(0x50)
};

// Class RemoteControlLogic.RCControllerContainer
// Size: 0x110 (Inherited: 0xb0)
struct URCControllerContainer : URCVirtualPropertyContainerBase {
	float VectorSliderDelta; // 0xb0(0x04)
	float VectorLinearDeltaSensitivity; // 0xb4(0x04)
	float RotatorSliderDelta; // 0xb8(0x04)
	float RotatorLinearDeltaSensitivity; // 0xbc(0x04)
	struct TSet<struct URCActionContainer*> SharedActionContainers; // 0xc0(0x50)
};

// Class RemoteControlLogic.RCFunctionAction
// Size: 0x58 (Inherited: 0x58)
struct URCFunctionAction : URCAction {
};

// Class RemoteControlLogic.RCPropertyAction
// Size: 0x60 (Inherited: 0x58)
struct URCPropertyAction : URCAction {
	struct URCVirtualPropertySelfContainer* PropertySelfContainer; // 0x58(0x08)
};

// Class RemoteControlLogic.RCPropertyBindAction
// Size: 0x68 (Inherited: 0x60)
struct URCPropertyBindAction : URCPropertyAction {
	struct URCController* Controller; // 0x60(0x08)
};

// Class RemoteControlLogic.RCRangeMapBehaviour
// Size: 0x108 (Inherited: 0x98)
struct URCRangeMapBehaviour : URCBehaviour {
	struct URCVirtualPropertyContainerBase* PropertyContainer; // 0x98(0x08)
	struct TMap<struct URCAction*, struct FRCRangeMapInput> RangeMapActionContainer; // 0xa0(0x50)
	char pad_F0[0x18]; // 0xf0(0x18)
};

// Class RemoteControlLogic.RCSetAssetByPathBehaviour
// Size: 0xe0 (Inherited: 0x98)
struct URCSetAssetByPathBehaviour : URCBehaviour {
	struct URCVirtualPropertyContainerBase* PropertyInContainer; // 0x98(0x08)
	ClassPtrProperty AssetClass; // 0xa0(0x08)
	struct FRCSetAssetPath PathStruct; // 0xa8(0x10)
	bool bInternal; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	struct FGuid TargetEntityId; // 0xbc(0x10)
	char pad_CC[0x14]; // 0xcc(0x14)
};

// Class RemoteControlLogic.RemoteControlLogicConfig
// Size: 0x70 (Inherited: 0x30)
struct URemoteControlLogicConfig : UObject {
	struct TArray<enum class EPropertyBagPropertyType> SupportedControllerTypes; // 0x30(0x10)
	struct TArray<struct FName> SupportedControllerStructTypes; // 0x40(0x10)
	struct TArray<struct FName> SupportedControllerObjectClassPaths; // 0x50(0x10)
	struct TArray<struct FName> SupportedControllerCustomTypes; // 0x60(0x10)
};

// Class RemoteControlLogic.RemoteControlLogicTestData
// Size: 0x38 (Inherited: 0x30)
struct URemoteControlLogicTestData : UObject {
	struct FColor Color; // 0x30(0x04)
	int32_t TestInt; // 0x34(0x04)

	void TestIntFunction(); // Function RemoteControlLogic.RemoteControlLogicTestData.TestIntFunction // (Final|Native|Public|BlueprintCallable) // @ game+0x6cc6830
};

