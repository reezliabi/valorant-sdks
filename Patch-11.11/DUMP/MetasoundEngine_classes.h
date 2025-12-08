// Class MetasoundEngine.MetasoundGeneratorHandle
// Size: 0xe8 (Inherited: 0x30)
struct UMetasoundGeneratorHandle : UObject {
	char pad_30[0xb8]; // 0x30(0xb8)

	bool WatchOutput(struct FName OutputName, struct FDelegate& OnOutputValueChanged, struct FName AnalyzerName, struct FName AnalyzerOutputName); // Function MetasoundEngine.MetasoundGeneratorHandle.WatchOutput // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7f88af0
	void OnOutputValueChangedMulticast__DelegateSignature(struct FName Name, struct FMetaSoundOutput& output); // DelegateFunction MetasoundEngine.MetasoundGeneratorHandle.OnOutputValueChangedMulticast__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x19be2f0
	struct UMetasoundGeneratorHandle* CreateMetaSoundGeneratorHandle(struct UAudioComponent* OnComponent); // Function MetasoundEngine.MetasoundGeneratorHandle.CreateMetaSoundGeneratorHandle // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7f89080
	bool ApplyParameterPack(struct UMetasoundParameterPack* Pack); // Function MetasoundEngine.MetasoundGeneratorHandle.ApplyParameterPack // (Final|Native|Public|BlueprintCallable) // @ game+0x7f88e30
};

// Class MetasoundEngine.MetasoundOutputBlueprintAccess
// Size: 0x30 (Inherited: 0x30)
struct UMetasoundOutputBlueprintAccess : UBlueprintFunctionLibrary {

	bool IsTime(struct FMetaSoundOutput& output); // Function MetasoundEngine.MetasoundOutputBlueprintAccess.IsTime // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x7f89740
	bool IsString(struct FMetaSoundOutput& output); // Function MetasoundEngine.MetasoundOutputBlueprintAccess.IsString // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x7f89af0
	bool IsInt32(struct FMetaSoundOutput& output); // Function MetasoundEngine.MetasoundOutputBlueprintAccess.IsInt32 // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x7f8a100
	bool IsFloat(struct FMetaSoundOutput& output); // Function MetasoundEngine.MetasoundOutputBlueprintAccess.IsFloat // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x7f8a410
	bool IsBool(struct FMetaSoundOutput& output); // Function MetasoundEngine.MetasoundOutputBlueprintAccess.IsBool // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x7f89e00
	float GetTimeSeconds(struct FMetaSoundOutput& output, bool& Success); // Function MetasoundEngine.MetasoundOutputBlueprintAccess.GetTimeSeconds // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x7f89550
	struct FString GetString(struct FMetaSoundOutput& output, bool& Success); // Function MetasoundEngine.MetasoundOutputBlueprintAccess.GetString // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x7f89860
	int32_t GetInt32(struct FMetaSoundOutput& output, bool& Success); // Function MetasoundEngine.MetasoundOutputBlueprintAccess.GetInt32 // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x7f89f20
	float GetFloat(struct FMetaSoundOutput& output, bool& Success); // Function MetasoundEngine.MetasoundOutputBlueprintAccess.GetFloat // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x7f8a220
	bool GetBool(struct FMetaSoundOutput& output, bool& Success); // Function MetasoundEngine.MetasoundOutputBlueprintAccess.GetBool // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x7f89c10
};

// Class MetasoundEngine.MetaSoundOutputSubsystem
// Size: 0x68 (Inherited: 0x58)
struct UMetaSoundOutputSubsystem : UTickableWorldSubsystem {
	struct TArray<struct UMetasoundGeneratorHandle*> TrackedGenerators; // 0x58(0x10)

	bool WatchOutput(struct UAudioComponent* AudioComponent, struct FName OutputName, struct FDelegate& OnOutputValueChanged, struct FName AnalyzerName, struct FName AnalyzerOutputName); // Function MetasoundEngine.MetaSoundOutputSubsystem.WatchOutput // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7f8a960
};

// Class MetasoundEngine.MetaSoundSettings
// Size: 0x90 (Inherited: 0x48)
struct UMetaSoundSettings : UDeveloperSettings {
	bool bAutoUpdateEnabled; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TArray<struct FMetasoundFrontendClassName> AutoUpdateDenylist; // 0x50(0x10)
	struct TArray<struct FDefaultMetaSoundAssetAutoUpdateSettings> AutoUpdateAssetDenylist; // 0x60(0x10)
	bool bAutoUpdateLogWarningOnDroppedConnection; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct TArray<struct FDirectoryPath> DirectoriesToRegister; // 0x78(0x10)
	int32_t DenyListCacheChangeID; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// Class MetasoundEngine.MetasoundEditorGraphBase
// Size: 0x68 (Inherited: 0x68)
struct UMetasoundEditorGraphBase : UEdGraph {
};

// Class MetasoundEngine.MetaSoundPatch
// Size: 0x380 (Inherited: 0x30)
struct UMetaSoundPatch : UObject {
	char pad_30[0x70]; // 0x30(0x70)
	struct FMetasoundFrontendDocument RootMetaSoundDocument; // 0xa0(0x1e0)
	struct TSet<struct FString> ReferencedAssetClassKeys; // 0x280(0x50)
	struct TSet<struct UObject*> ReferencedAssetClassObjects; // 0x2d0(0x50)
	struct TSet<struct FSoftObjectPath> ReferenceAssetClassCache; // 0x320(0x50)
	struct FGuid AssetClassID; // 0x370(0x10)
};

// Class MetasoundEngine.MetaSoundAssetSubsystem
// Size: 0x1e8 (Inherited: 0x38)
struct UMetaSoundAssetSubsystem : UEngineSubsystem {
	char pad_38[0x8]; // 0x38(0x08)
	struct TArray<struct FMetaSoundAsyncAssetDependencies> LoadingDependencies; // 0x40(0x10)
	char pad_50[0x198]; // 0x50(0x198)

	void UnregisterAssetClassesInDirectories(struct TArray<struct FMetaSoundAssetDirectory>& Directories); // Function MetasoundEngine.MetaSoundAssetSubsystem.UnregisterAssetClassesInDirectories // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7f9a510
	void RegisterAssetClassesInDirectories(struct TArray<struct FMetaSoundAssetDirectory>& Directories); // Function MetasoundEngine.MetaSoundAssetSubsystem.RegisterAssetClassesInDirectories // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7f9a680
};

// Class MetasoundEngine.MetaSoundBuilderBase
// Size: 0x68 (Inherited: 0x30)
struct UMetaSoundBuilderBase : UObject {
	struct FMetaSoundFrontendDocumentBuilder Builder; // 0x30(0x30)
	bool bIsAttached; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)

	void SetNodeInputDefault(struct FMetaSoundBuilderNodeInputHandle& NodeInputHandle, struct FMetasoundFrontendLiteral& Literal, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.SetNodeInputDefault // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7f9f4e0
	void SetGraphInputDefault(struct FName InputName, struct FMetasoundFrontendLiteral& Literal, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.SetGraphInputDefault // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7f9f110
	void RemoveNodeInputDefault(struct FMetaSoundBuilderNodeInputHandle& InputHandle, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.RemoveNodeInputDefault // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7f9f890
	void RemoveNode(struct FMetaSoundNodeHandle& NodeHandle, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.RemoveNode // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7f9fa50
	void RemoveInterface(struct FName InterfaceName, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.RemoveInterface // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7f9fc10
	void RemoveGraphOutput(struct FName Name, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.RemoveGraphOutput // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7f9fdd0
	void RemoveGraphInput(struct FName Name, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.RemoveGraphInput // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7f9ff90
	bool NodesAreConnected(struct FMetaSoundBuilderNodeOutputHandle& OutputHandle, struct FMetaSoundBuilderNodeInputHandle& InputHandle); // Function MetasoundEngine.MetaSoundBuilderBase.NodesAreConnected // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7fa06e0
	bool NodeOutputIsConnected(struct FMetaSoundBuilderNodeOutputHandle& OutputHandle); // Function MetasoundEngine.MetaSoundBuilderBase.NodeOutputIsConnected // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7fa0460
	bool NodeInputIsConnected(struct FMetaSoundBuilderNodeInputHandle& InputHandle); // Function MetasoundEngine.MetaSoundBuilderBase.NodeInputIsConnected // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7fa05a0
	bool IsPreset(); // Function MetasoundEngine.MetaSoundBuilderBase.IsPreset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7fa0410
	bool InterfaceIsDeclared(struct FName InterfaceName); // Function MetasoundEngine.MetaSoundBuilderBase.InterfaceIsDeclared // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7fa0900
	struct UObject* GetReferencedPresetAsset(); // Function MetasoundEngine.MetaSoundBuilderBase.GetReferencedPresetAsset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7fa0a10
	void GetNodeOutputData(struct FMetaSoundBuilderNodeOutputHandle& OutputHandle, struct FName& Name, struct FName& DataType, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.GetNodeOutputData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa0a40
	struct FMetasoundFrontendLiteral GetNodeInputDefault(struct FMetaSoundBuilderNodeInputHandle& InputHandle, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.GetNodeInputDefault // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa1120
	void GetNodeInputData(struct FMetaSoundBuilderNodeInputHandle& InputHandle, struct FName& Name, struct FName& DataType, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.GetNodeInputData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa1490
	struct FMetasoundFrontendLiteral GetNodeInputClassDefault(struct FMetaSoundBuilderNodeInputHandle& InputHandle, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.GetNodeInputClassDefault // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa0db0
	struct TArray<struct FMetaSoundBuilderNodeOutputHandle> FindNodeOutputsByDataType(struct FMetaSoundNodeHandle& NodeHandle, enum class EMetaSoundBuilderResult& OutResult, struct FName DataType); // Function MetasoundEngine.MetaSoundBuilderBase.FindNodeOutputsByDataType // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa2170
	struct TArray<struct FMetaSoundBuilderNodeOutputHandle> FindNodeOutputs(struct FMetaSoundNodeHandle& NodeHandle, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.FindNodeOutputs // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa2470
	struct FMetaSoundNodeHandle FindNodeOutputParent(struct FMetaSoundBuilderNodeOutputHandle& OutputHandle, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.FindNodeOutputParent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa1a40
	struct FMetaSoundBuilderNodeOutputHandle FindNodeOutputByName(struct FMetaSoundNodeHandle& NodeHandle, struct FName OutputName, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.FindNodeOutputByName // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa26c0
	struct TArray<struct FMetaSoundBuilderNodeInputHandle> FindNodeInputsByDataType(struct FMetaSoundNodeHandle& NodeHandle, enum class EMetaSoundBuilderResult& OutResult, struct FName DataType); // Function MetasoundEngine.MetaSoundBuilderBase.FindNodeInputsByDataType // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa2920
	struct TArray<struct FMetaSoundBuilderNodeInputHandle> FindNodeInputs(struct FMetaSoundNodeHandle& NodeHandle, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.FindNodeInputs // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa2c20
	struct FMetaSoundNodeHandle FindNodeInputParent(struct FMetaSoundBuilderNodeInputHandle& InputHandle, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.FindNodeInputParent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa1a40
	struct FMetaSoundBuilderNodeInputHandle FindNodeInputByName(struct FMetaSoundNodeHandle& NodeHandle, struct FName InputName, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.FindNodeInputByName // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa2e70
	struct FMetasoundFrontendVersion FindNodeClassVersion(struct FMetaSoundNodeHandle& NodeHandle, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.FindNodeClassVersion // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa1800
	struct TArray<struct FMetaSoundNodeHandle> FindInterfaceOutputNodes(struct FName InterfaceName, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.FindInterfaceOutputNodes // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa1c40
	struct TArray<struct FMetaSoundNodeHandle> FindInterfaceInputNodes(struct FName InterfaceName, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.FindInterfaceInputNodes // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa1e70
	struct FMetaSoundNodeHandle FindGraphOutputNode(struct FName OutputName, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.FindGraphOutputNode // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa30d0
	struct FMetaSoundNodeHandle FindGraphInputNode(struct FName InputName, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.FindGraphInputNode // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa3310
	void DisconnectNodesByInterfaceBindings(struct FMetaSoundNodeHandle& FromNodeHandle, struct FMetaSoundNodeHandle& ToNodeHandle, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.DisconnectNodesByInterfaceBindings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa3550
	void DisconnectNodes(struct FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, struct FMetaSoundBuilderNodeInputHandle& NodeInputHandle, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.DisconnectNodes // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa3b30
	void DisconnectNodeOutput(struct FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.DisconnectNodeOutput // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa37b0
	void DisconnectNodeInput(struct FMetaSoundBuilderNodeInputHandle& NodeInputHandle, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.DisconnectNodeInput // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa3970
	void ConvertToPreset(struct TScriptInterface<IMetaSoundDocumentInterface>& ReferencedNodeClass, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.ConvertToPreset // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa0150
	void ConvertFromPreset(enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.ConvertFromPreset // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa0310
	bool ContainsNodeOutput(struct FMetaSoundBuilderNodeOutputHandle& output); // Function MetasoundEngine.MetaSoundBuilderBase.ContainsNodeOutput // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7fa3e60
	bool ContainsNodeInput(struct FMetaSoundBuilderNodeInputHandle& Input); // Function MetasoundEngine.MetaSoundBuilderBase.ContainsNodeInput // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7fa3fa0
	bool ContainsNode(struct FMetaSoundNodeHandle& Node); // Function MetasoundEngine.MetaSoundBuilderBase.ContainsNode // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7fa40e0
	void ConnectNodesByInterfaceBindings(struct FMetaSoundNodeHandle& FromNodeHandle, struct FMetaSoundNodeHandle& ToNodeHandle, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.ConnectNodesByInterfaceBindings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa4d80
	void ConnectNodes(struct FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, struct FMetaSoundBuilderNodeInputHandle& NodeInputHandle, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.ConnectNodes // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa4fe0
	void ConnectNodeOutputToGraphOutput(struct FName GraphOutputName, struct FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.ConnectNodeOutputToGraphOutput // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa4480
	struct TArray<struct FMetaSoundBuilderNodeInputHandle> ConnectNodeOutputsToMatchingGraphInterfaceOutputs(struct FMetaSoundNodeHandle& NodeHandle, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.ConnectNodeOutputsToMatchingGraphInterfaceOutputs // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa4a40
	void ConnectNodeInputToGraphInput(struct FName GraphInputName, struct FMetaSoundBuilderNodeInputHandle& NodeInputHandle, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.ConnectNodeInputToGraphInput // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa4210
	struct TArray<struct FMetaSoundBuilderNodeOutputHandle> ConnectNodeInputsToMatchingGraphInterfaceInputs(struct FMetaSoundNodeHandle& NodeHandle, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.ConnectNodeInputsToMatchingGraphInterfaceInputs // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa46f0
	struct FMetaSoundNodeHandle AddNodeByClassName(struct FMetasoundFrontendClassName& ClassName, int32_t MajorVersion, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.AddNodeByClassName // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa5250
	struct FMetaSoundNodeHandle AddNode(struct TScriptInterface<IMetaSoundDocumentInterface>& NodeClass, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.AddNode // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa54e0
	void AddInterface(struct FName InterfaceName, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.AddInterface // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa56a0
	struct FMetaSoundBuilderNodeInputHandle AddGraphOutputNode(struct FName Name, struct FName DataType, struct FMetasoundFrontendLiteral DefaultValue, enum class EMetaSoundBuilderResult& OutResult, bool bIsConstructorOutput); // Function MetasoundEngine.MetaSoundBuilderBase.AddGraphOutputNode // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa5860
	struct FMetaSoundBuilderNodeOutputHandle AddGraphInputNode(struct FName Name, struct FName DataType, struct FMetasoundFrontendLiteral DefaultValue, enum class EMetaSoundBuilderResult& OutResult, bool bIsConstructorInput); // Function MetasoundEngine.MetaSoundBuilderBase.AddGraphInputNode // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa5ef0
};

// Class MetasoundEngine.MetaSoundPatchBuilder
// Size: 0x68 (Inherited: 0x68)
struct UMetaSoundPatchBuilder : UMetaSoundBuilderBase {

	struct TScriptInterface<IMetaSoundDocumentInterface> Build(struct UObject* Parent, struct FMetaSoundBuilderOptions& OPTIONS); // Function MetasoundEngine.MetaSoundPatchBuilder.Build // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7fa71e0
};

// Class MetasoundEngine.MetaSoundSourceBuilder
// Size: 0x70 (Inherited: 0x68)
struct UMetaSoundSourceBuilder : UMetaSoundBuilderBase {
	char pad_68[0x8]; // 0x68(0x08)

	void SetFormat(enum class EMetaSoundOutputAudioFormat OutputFormat, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundSourceBuilder.SetFormat // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa74e0
	bool GetLiveUpdatesEnabled(); // Function MetasoundEngine.MetaSoundSourceBuilder.GetLiveUpdatesEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7fa7680
	struct TScriptInterface<IMetaSoundDocumentInterface> Build(struct UObject* Parent, struct FMetaSoundBuilderOptions& OPTIONS); // Function MetasoundEngine.MetaSoundSourceBuilder.Build // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7fa71e0
	void Audition(struct UObject* Parent, struct UAudioComponent* AudioComponent, struct FDelegate OnCreateGenerator, bool bLiveUpdatesEnabled); // Function MetasoundEngine.MetaSoundSourceBuilder.Audition // (Final|Native|Public|BlueprintCallable) // @ game+0x7fa7710
};

// Class MetasoundEngine.MetaSoundBuilderSubsystem
// Size: 0xe0 (Inherited: 0x38)
struct UMetaSoundBuilderSubsystem : UEngineSubsystem {
	char pad_38[0x8]; // 0x38(0x08)
	struct TMap<struct FName, struct UMetaSoundBuilderBase*> NamedBuilders; // 0x40(0x50)
	struct TMap<struct FName, struct TWeakObjectPtr<struct UMetaSoundBuilderBase>> AssetBuilders; // 0x90(0x50)

	bool UnregisterSourceBuilder(struct FName BuilderName); // Function MetasoundEngine.MetaSoundBuilderSubsystem.UnregisterSourceBuilder // (Final|Native|Public|BlueprintCallable) // @ game+0x7fa7eb0
	bool UnregisterPatchBuilder(struct FName BuilderName); // Function MetasoundEngine.MetaSoundBuilderSubsystem.UnregisterPatchBuilder // (Final|Native|Public|BlueprintCallable) // @ game+0x7fa7eb0
	bool UnregisterBuilder(struct FName BuilderName); // Function MetasoundEngine.MetaSoundBuilderSubsystem.UnregisterBuilder // (Final|Native|Public|BlueprintCallable) // @ game+0x7fa7eb0
	void RegisterSourceBuilder(struct FName BuilderName, struct UMetaSoundSourceBuilder* Builder); // Function MetasoundEngine.MetaSoundBuilderSubsystem.RegisterSourceBuilder // (Final|Native|Public|BlueprintCallable) // @ game+0x7fa7fd0
	void RegisterPatchBuilder(struct FName BuilderName, struct UMetaSoundPatchBuilder* Builder); // Function MetasoundEngine.MetaSoundBuilderSubsystem.RegisterPatchBuilder // (Final|Native|Public|BlueprintCallable) // @ game+0x7fa7fd0
	void RegisterBuilder(struct FName BuilderName, struct UMetaSoundBuilderBase* Builder); // Function MetasoundEngine.MetaSoundBuilderSubsystem.RegisterBuilder // (Final|Native|Public|BlueprintCallable) // @ game+0x7fa7fd0
	bool IsInterfaceRegistered(struct FName InInterfaceName); // Function MetasoundEngine.MetaSoundBuilderSubsystem.IsInterfaceRegistered // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7fa8240
	struct UMetaSoundSourceBuilder* FindSourceBuilder(struct FName BuilderName); // Function MetasoundEngine.MetaSoundBuilderSubsystem.FindSourceBuilder // (Final|Native|Public|BlueprintCallable) // @ game+0x7fa8350
	struct UMetaSoundPatchBuilder* FindPatchBuilder(struct FName BuilderName); // Function MetasoundEngine.MetaSoundBuilderSubsystem.FindPatchBuilder // (Final|Native|Public|BlueprintCallable) // @ game+0x7fa8510
	struct UMetaSoundBuilderBase* FindBuilder(struct FName BuilderName); // Function MetasoundEngine.MetaSoundBuilderSubsystem.FindBuilder // (Final|Native|Public|BlueprintCallable) // @ game+0x7fa86d0
	struct FMetasoundFrontendLiteral CreateStringMetaSoundLiteral(struct FString Value, struct FName& DataType); // Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateStringMetaSoundLiteral // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa8e00
	struct FMetasoundFrontendLiteral CreateStringArrayMetaSoundLiteral(struct TArray<struct FString>& Value, struct FName& DataType); // Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateStringArrayMetaSoundLiteral // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa8bf0
	struct UMetaSoundSourceBuilder* CreateSourcePresetBuilder(struct FName BuilderName, struct TScriptInterface<IMetaSoundDocumentInterface>& ReferencedSourceClass, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateSourcePresetBuilder // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa9e40
	struct UMetaSoundSourceBuilder* CreateSourceBuilder(struct FName BuilderName, struct FMetaSoundBuilderNodeOutputHandle& OnPlayNodeOutput, struct FMetaSoundBuilderNodeInputHandle& OnFinishedNodeInput, struct TArray<struct FMetaSoundBuilderNodeInputHandle>& AudioOutNodeInputs, enum class EMetaSoundBuilderResult& OutResult, enum class EMetaSoundOutputAudioFormat OutputFormat, bool bIsOneShot); // Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateSourceBuilder // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7faa350
	struct UMetaSoundPatchBuilder* CreatePatchPresetBuilder(struct FName BuilderName, struct TScriptInterface<IMetaSoundDocumentInterface>& ReferencedPatchClass, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderSubsystem.CreatePatchPresetBuilder // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7faa0d0
	struct UMetaSoundPatchBuilder* CreatePatchBuilder(struct FName BuilderName, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderSubsystem.CreatePatchBuilder // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7faa880
	struct FMetasoundFrontendLiteral CreateObjectMetaSoundLiteral(struct UObject* Value); // Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateObjectMetaSoundLiteral // (Final|Native|Public|BlueprintCallable) // @ game+0x7fa9160
	struct FMetasoundFrontendLiteral CreateObjectArrayMetaSoundLiteral(struct TArray<struct UObject*>& Value); // Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateObjectArrayMetaSoundLiteral // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa9010
	struct FMetasoundFrontendLiteral CreateMetaSoundLiteralFromParam(struct FAudioParameter& Param); // Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateMetaSoundLiteralFromParam // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa8860
	struct FMetasoundFrontendLiteral CreateIntMetaSoundLiteral(int32_t Value, struct FName& DataType); // Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateIntMetaSoundLiteral // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa9470
	struct FMetasoundFrontendLiteral CreateIntArrayMetaSoundLiteral(struct TArray<int32_t>& Value, struct FName& DataType); // Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateIntArrayMetaSoundLiteral // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa9280
	struct FMetasoundFrontendLiteral CreateFloatMetaSoundLiteral(float Value, struct FName& DataType); // Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateFloatMetaSoundLiteral // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa9860
	struct FMetasoundFrontendLiteral CreateFloatArrayMetaSoundLiteral(struct TArray<float>& Value, struct FName& DataType); // Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateFloatArrayMetaSoundLiteral // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa9650
	struct FMetasoundFrontendLiteral CreateBoolMetaSoundLiteral(bool Value, struct FName& DataType); // Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateBoolMetaSoundLiteral // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa9c60
	struct FMetasoundFrontendLiteral CreateBoolArrayMetaSoundLiteral(struct TArray<bool>& Value, struct FName& DataType); // Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateBoolArrayMetaSoundLiteral // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7fa9a50
};

// Class MetasoundEngine.MetaSoundSource
// Size: 0x8b0 (Inherited: 0x490)
struct UMetaSoundSource : USoundWaveProcedural {
	char pad_490[0x70]; // 0x490(0x70)
	struct FMetasoundFrontendDocument RootMetaSoundDocument; // 0x500(0x1e0)
	struct TSet<struct FString> ReferencedAssetClassKeys; // 0x6e0(0x50)
	struct TSet<struct UObject*> ReferencedAssetClassObjects; // 0x730(0x50)
	struct TSet<struct FSoftObjectPath> ReferenceAssetClassCache; // 0x780(0x50)
	enum class EMetaSoundOutputAudioFormat OutputFormat; // 0x7d0(0x01)
	char pad_7D1[0x3]; // 0x7d1(0x03)
	struct FGuid AssetClassID; // 0x7d4(0x10)
	char pad_7E4[0xcc]; // 0x7e4(0xcc)
};

