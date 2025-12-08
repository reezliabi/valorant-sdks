// Enum WebRemoteControl.ERemoteControlEvent
enum class ERemoteControlEvent : uint8 {
	PreObjectPropertyChanged = 0,
	ObjectPropertyChanged = 1,
	EventCount = 2,
	ERemoteControlEvent_MAX = 3
};

// Enum WebRemoteControl.ERemoteControlHttpVerbs
enum class ERemoteControlHttpVerbs : uint8 {
	None = 0,
	Get = 1,
	Post = 2,
	Put = 4,
	Patch = 8,
	Delete = 16,
	Options = 32,
	ERemoteControlHttpVerbs_MAX = 33
};

// ScriptStruct WebRemoteControl.RCObjectDescription
// Size: 0x30 (Inherited: 0x00)
struct FRCObjectDescription {
	struct FString Name; // 0x00(0x10)
	struct FString Class; // 0x10(0x10)
	struct FString Path; // 0x20(0x10)
};

// ScriptStruct WebRemoteControl.RCPropertyDescription
// Size: 0xc8 (Inherited: 0x00)
struct FRCPropertyDescription {
	struct FString Name; // 0x00(0x10)
	struct FText DisplayName; // 0x10(0x18)
	struct FString Description; // 0x28(0x10)
	struct FString Type; // 0x38(0x10)
	struct FName TypePath; // 0x48(0x0c)
	char pad_54[0x4]; // 0x54(0x04)
	struct FString ContainerType; // 0x58(0x10)
	struct FString KeyType; // 0x68(0x10)
	struct TMap<struct FName, struct FString> MetaData; // 0x78(0x50)
};

// ScriptStruct WebRemoteControl.RCFunctionDescription
// Size: 0x30 (Inherited: 0x00)
struct FRCFunctionDescription {
	struct FString Name; // 0x00(0x10)
	struct FString Description; // 0x10(0x10)
	struct TArray<struct FRCPropertyDescription> Arguments; // 0x20(0x10)
};

// ScriptStruct WebRemoteControl.RCExposedPropertyDescription
// Size: 0x148 (Inherited: 0x00)
struct FRCExposedPropertyDescription {
	struct FName DisplayName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString ID; // 0x10(0x10)
	struct FRCPropertyDescription UnderlyingProperty; // 0x20(0xc8)
	struct TMap<struct FName, struct FString> MetaData; // 0xe8(0x50)
	struct TArray<struct FRCObjectDescription> OwnerObjects; // 0x138(0x10)
};

// ScriptStruct WebRemoteControl.RCExposedFunctionDescription
// Size: 0x60 (Inherited: 0x00)
struct FRCExposedFunctionDescription {
	struct FName DisplayName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString ID; // 0x10(0x10)
	struct FRCFunctionDescription UnderlyingFunction; // 0x20(0x30)
	struct TArray<struct FRCObjectDescription> OwnerObjects; // 0x50(0x10)
};

// ScriptStruct WebRemoteControl.RCExposedActorDescription
// Size: 0x50 (Inherited: 0x00)
struct FRCExposedActorDescription {
	struct FName DisplayName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString ID; // 0x10(0x10)
	struct FRCObjectDescription UnderlyingActor; // 0x20(0x30)
};

// ScriptStruct WebRemoteControl.RCControllerDescription
// Size: 0x90 (Inherited: 0x00)
struct FRCControllerDescription {
	struct FName DisplayName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString ID; // 0x10(0x10)
	struct FString Type; // 0x20(0x10)
	struct FString Path; // 0x30(0x10)
	struct TMap<struct FName, struct FString> MetaData; // 0x40(0x50)
};

// ScriptStruct WebRemoteControl.RCControllerModifiedDescription
// Size: 0x20 (Inherited: 0x00)
struct FRCControllerModifiedDescription {
	struct TArray<struct FRCControllerDescription> Controllers; // 0x00(0x10)
	struct TArray<struct FString> ChangedValues; // 0x10(0x10)
};

// ScriptStruct WebRemoteControl.RCPresetLayoutGroupDescription
// Size: 0x40 (Inherited: 0x00)
struct FRCPresetLayoutGroupDescription {
	struct FName Name; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FRCExposedPropertyDescription> ExposedProperties; // 0x10(0x10)
	struct TArray<struct FRCExposedFunctionDescription> ExposedFunctions; // 0x20(0x10)
	struct TArray<struct FRCExposedActorDescription> ExposedActors; // 0x30(0x10)
};

// ScriptStruct WebRemoteControl.RCPresetModifiedEntitiesDescription
// Size: 0x30 (Inherited: 0x00)
struct FRCPresetModifiedEntitiesDescription {
	struct TArray<struct FRCExposedPropertyDescription> ModifiedRCProperties; // 0x00(0x10)
	struct TArray<struct FRCExposedFunctionDescription> ModifiedRCFunctions; // 0x10(0x10)
	struct TArray<struct FRCExposedActorDescription> ModifiedRCActors; // 0x20(0x10)
};

// ScriptStruct WebRemoteControl.RCPresetDescription
// Size: 0x50 (Inherited: 0x00)
struct FRCPresetDescription {
	struct FString Name; // 0x00(0x10)
	struct FString Path; // 0x10(0x10)
	struct FString ID; // 0x20(0x10)
	struct TArray<struct FRCPresetLayoutGroupDescription> Groups; // 0x30(0x10)
	struct TArray<struct FRCControllerDescription> Controllers; // 0x40(0x10)
};

// ScriptStruct WebRemoteControl.RCShortPresetDescription
// Size: 0x30 (Inherited: 0x00)
struct FRCShortPresetDescription {
	struct FName Name; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString ID; // 0x10(0x10)
	struct FName Path; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct WebRemoteControl.RCAssetDescription
// Size: 0x78 (Inherited: 0x00)
struct FRCAssetDescription {
	struct FName Name; // 0x00(0x0c)
	struct FName Class; // 0x0c(0x0c)
	struct FName Path; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct TMap<struct FName, struct FString> MetaData; // 0x28(0x50)
};

// ScriptStruct WebRemoteControl.RCPresetFieldRenamed
// Size: 0x18 (Inherited: 0x00)
struct FRCPresetFieldRenamed {
	struct FName OldFieldLabel; // 0x00(0x0c)
	struct FName NewFieldLabel; // 0x0c(0x0c)
};

// ScriptStruct WebRemoteControl.RCAssetFilter
// Size: 0x98 (Inherited: 0x00)
struct FRCAssetFilter {
	struct TArray<struct FName> PackageNames; // 0x00(0x10)
	struct TArray<struct FName> PackagePaths; // 0x10(0x10)
	struct TArray<struct FName> ClassNames; // 0x20(0x10)
	struct TSet<struct FName> RecursiveClassesExclusionSet; // 0x30(0x50)
	struct TArray<struct FName> NativeParentClasses; // 0x80(0x10)
	bool RecursiveClasses; // 0x90(0x01)
	bool RecursivePaths; // 0x91(0x01)
	bool EnableBlueprintNativeClassFiltering; // 0x92(0x01)
	char pad_93[0x5]; // 0x93(0x05)
};

// ScriptStruct WebRemoteControl.RCActorDescription
// Size: 0x20 (Inherited: 0x00)
struct FRCActorDescription {
	struct FString Name; // 0x00(0x10)
	struct FString Path; // 0x10(0x10)
};

// ScriptStruct WebRemoteControl.RCRequest
// Size: 0x78 (Inherited: 0x00)
struct FRCRequest {
	char pad_0[0x8]; // 0x00(0x08)
	struct FString Passphrase; // 0x08(0x10)
	char pad_18[0x60]; // 0x18(0x60)
};

// ScriptStruct WebRemoteControl.RCRequestWrapper
// Size: 0x98 (Inherited: 0x78)
struct FRCRequestWrapper : FRCRequest {
	struct FString URL; // 0x78(0x10)
	struct FName Verb; // 0x88(0x0c)
	int32_t RequestID; // 0x94(0x04)
};

// ScriptStruct WebRemoteControl.RCBatchRequest
// Size: 0x88 (Inherited: 0x78)
struct FRCBatchRequest : FRCRequest {
	struct TArray<struct FRCRequestWrapper> Requests; // 0x78(0x10)
};

// ScriptStruct WebRemoteControl.RemoteControlObjectEventHookRequest
// Size: 0xa0 (Inherited: 0x78)
struct FRemoteControlObjectEventHookRequest : FRCRequest {
	enum class ERemoteControlEvent EventType; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FString ObjectPath; // 0x80(0x10)
	struct FString PropertyName; // 0x90(0x10)
};

// ScriptStruct WebRemoteControl.RCCallRequest
// Size: 0xa0 (Inherited: 0x78)
struct FRCCallRequest : FRCRequest {
	struct FString ObjectPath; // 0x78(0x10)
	struct FString FunctionName; // 0x88(0x10)
	bool GenerateTransaction; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// ScriptStruct WebRemoteControl.RCObjectRequest
// Size: 0xa0 (Inherited: 0x78)
struct FRCObjectRequest : FRCRequest {
	struct FString ObjectPath; // 0x78(0x10)
	struct FString PropertyName; // 0x88(0x10)
	bool ResetToDefault; // 0x98(0x01)
	bool GenerateTransaction; // 0x99(0x01)
	enum class ERCModifyOperation Operation; // 0x9a(0x01)
	enum class ERCAccess Access; // 0x9b(0x01)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// ScriptStruct WebRemoteControl.RCPresetSetPropertyRequest
// Size: 0x80 (Inherited: 0x78)
struct FRCPresetSetPropertyRequest : FRCRequest {
	enum class ERCModifyOperation Operation; // 0x78(0x01)
	bool GenerateTransaction; // 0x79(0x01)
	bool ResetToDefault; // 0x7a(0x01)
	char pad_7B[0x5]; // 0x7b(0x05)
};

// ScriptStruct WebRemoteControl.RCPresetCallRequest
// Size: 0x80 (Inherited: 0x78)
struct FRCPresetCallRequest : FRCRequest {
	bool GenerateTransaction; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// ScriptStruct WebRemoteControl.RCPresetExposePropertyRequest
// Size: 0xc0 (Inherited: 0x78)
struct FRCPresetExposePropertyRequest : FRCRequest {
	struct FString ObjectPath; // 0x78(0x10)
	struct FString PropertyName; // 0x88(0x10)
	struct FString Label; // 0x98(0x10)
	struct FString GroupName; // 0xa8(0x10)
	bool EnableEditCondition; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
};

// ScriptStruct WebRemoteControl.DescribeObjectRequest
// Size: 0x88 (Inherited: 0x78)
struct FDescribeObjectRequest : FRCRequest {
	struct FString ObjectPath; // 0x78(0x10)
};

// ScriptStruct WebRemoteControl.SearchAssetRequest
// Size: 0x128 (Inherited: 0x78)
struct FSearchAssetRequest : FRCRequest {
	struct FString Query; // 0x78(0x10)
	struct FRCAssetFilter Filter; // 0x88(0x98)
	int32_t Limit; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
};

// ScriptStruct WebRemoteControl.SearchActorRequest
// Size: 0xa0 (Inherited: 0x78)
struct FSearchActorRequest : FRCRequest {
	struct FString Query; // 0x78(0x10)
	struct FString Class; // 0x88(0x10)
	int32_t Limit; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// ScriptStruct WebRemoteControl.SearchObjectRequest
// Size: 0xb0 (Inherited: 0x78)
struct FSearchObjectRequest : FRCRequest {
	struct FString Query; // 0x78(0x10)
	struct FString Class; // 0x88(0x10)
	struct FString Outer; // 0x98(0x10)
	int32_t Limit; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct WebRemoteControl.SetPresetMetadataRequest
// Size: 0x88 (Inherited: 0x78)
struct FSetPresetMetadataRequest : FRCRequest {
	struct FString Value; // 0x78(0x10)
};

// ScriptStruct WebRemoteControl.SetEntityMetadataRequest
// Size: 0x88 (Inherited: 0x78)
struct FSetEntityMetadataRequest : FRCRequest {
	struct FString Value; // 0x78(0x10)
};

// ScriptStruct WebRemoteControl.SetEntityLabelRequest
// Size: 0x88 (Inherited: 0x78)
struct FSetEntityLabelRequest : FRCRequest {
	struct FString NewLabel; // 0x78(0x10)
};

// ScriptStruct WebRemoteControl.GetObjectThumbnailRequest
// Size: 0x88 (Inherited: 0x78)
struct FGetObjectThumbnailRequest : FRCRequest {
	struct FString ObjectPath; // 0x78(0x10)
};

// ScriptStruct WebRemoteControl.RCWebSocketRequest
// Size: 0xa0 (Inherited: 0x78)
struct FRCWebSocketRequest : FRCRequest {
	struct FString MessageName; // 0x78(0x10)
	int32_t ID; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct FString ForwardedFor; // 0x90(0x10)
};

// ScriptStruct WebRemoteControl.RCWebSocketBatchRequest
// Size: 0x88 (Inherited: 0x78)
struct FRCWebSocketBatchRequest : FRCRequest {
	struct TArray<struct FRCWebSocketRequest> Requests; // 0x78(0x10)
};

// ScriptStruct WebRemoteControl.RCWebSocketPresetRegisterBody
// Size: 0x90 (Inherited: 0x78)
struct FRCWebSocketPresetRegisterBody : FRCRequest {
	struct FString PresetName; // 0x78(0x10)
	bool IgnoreRemoteChanges; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// ScriptStruct WebRemoteControl.RCWebSocketTransientPresetAutoDestroyBody
// Size: 0x88 (Inherited: 0x78)
struct FRCWebSocketTransientPresetAutoDestroyBody : FRCRequest {
	struct FString PresetName; // 0x78(0x10)
};

// ScriptStruct WebRemoteControl.RCWebSocketActorRegisterBody
// Size: 0x88 (Inherited: 0x78)
struct FRCWebSocketActorRegisterBody : FRCRequest {
	struct FName ClassName; // 0x78(0x0c)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct WebRemoteControl.RCWebSocketPresetSetPropertyBody
// Size: 0xa8 (Inherited: 0x78)
struct FRCWebSocketPresetSetPropertyBody : FRCRequest {
	struct FName PresetName; // 0x78(0x0c)
	struct FName PropertyLabel; // 0x84(0x0c)
	enum class ERCModifyOperation Operation; // 0x90(0x01)
	enum class ERCTransactionMode TransactionMode; // 0x91(0x01)
	char pad_92[0x2]; // 0x92(0x02)
	int32_t TransactionId; // 0x94(0x04)
	bool ResetToDefault; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	int64_t SequenceNumber; // 0xa0(0x08)
};

// ScriptStruct WebRemoteControl.RCWebSocketCallBody
// Size: 0xb0 (Inherited: 0xa0)
struct FRCWebSocketCallBody : FRCCallRequest {
	enum class ERCTransactionMode TransactionMode; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	int32_t TransactionId; // 0xa4(0x04)
	int64_t SequenceNumber; // 0xa8(0x08)
};

// ScriptStruct WebRemoteControl.RCWebSocketTransactionStartBody
// Size: 0x90 (Inherited: 0x78)
struct FRCWebSocketTransactionStartBody : FRCRequest {
	struct FString Description; // 0x78(0x10)
	int32_t TransactionId; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct WebRemoteControl.RCWebSocketTransactionEndBody
// Size: 0x80 (Inherited: 0x78)
struct FRCWebSocketTransactionEndBody : FRCRequest {
	int32_t TransactionId; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct WebRemoteControl.RCPresetSetControllerRequest
// Size: 0x88 (Inherited: 0x78)
struct FRCPresetSetControllerRequest : FRCRequest {
	struct FString ControllerName; // 0x78(0x10)
};

// ScriptStruct WebRemoteControl.APIInfoResponse
// Size: 0x48 (Inherited: 0x00)
struct FAPIInfoResponse {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct FRemoteControlRouteDescription> HttpRoutes; // 0x08(0x10)
	struct FRCShortPresetDescription ActivePreset; // 0x18(0x30)
};

// ScriptStruct WebRemoteControl.RemoteControlRouteDescription
// Size: 0x28 (Inherited: 0x00)
struct FRemoteControlRouteDescription {
	struct FString Path; // 0x00(0x10)
	enum class ERemoteControlHttpVerbs Verb; // 0x10(0x02)
	char pad_12[0x6]; // 0x12(0x06)
	struct FString Description; // 0x18(0x10)
};

// ScriptStruct WebRemoteControl.ListPresetsResponse
// Size: 0x10 (Inherited: 0x00)
struct FListPresetsResponse {
	struct TArray<struct FRCShortPresetDescription> Presets; // 0x00(0x10)
};

// ScriptStruct WebRemoteControl.GetPresetResponse
// Size: 0x50 (Inherited: 0x00)
struct FGetPresetResponse {
	struct FRCPresetDescription Preset; // 0x00(0x50)
};

// ScriptStruct WebRemoteControl.CheckPassphraseResponse
// Size: 0x01 (Inherited: 0x00)
struct FCheckPassphraseResponse {
	bool keyCorrect; // 0x00(0x01)
};

// ScriptStruct WebRemoteControl.DescribeObjectResponse
// Size: 0x38 (Inherited: 0x00)
struct FDescribeObjectResponse {
	struct FString Name; // 0x00(0x10)
	ClassPtrProperty Class; // 0x10(0x08)
	struct TArray<struct FRCPropertyDescription> Properties; // 0x18(0x10)
	struct TArray<struct FRCFunctionDescription> Functions; // 0x28(0x10)
};

// ScriptStruct WebRemoteControl.SearchAssetResponse
// Size: 0x10 (Inherited: 0x00)
struct FSearchAssetResponse {
	struct TArray<struct FRCAssetDescription> Assets; // 0x00(0x10)
};

// ScriptStruct WebRemoteControl.SearchActorResponse
// Size: 0x10 (Inherited: 0x00)
struct FSearchActorResponse {
	struct TArray<struct FRCObjectDescription> Actors; // 0x00(0x10)
};

// ScriptStruct WebRemoteControl.GetMetadataFieldResponse
// Size: 0x10 (Inherited: 0x00)
struct FGetMetadataFieldResponse {
	struct FString Value; // 0x00(0x10)
};

// ScriptStruct WebRemoteControl.GetMetadataResponse
// Size: 0x50 (Inherited: 0x00)
struct FGetMetadataResponse {
	struct TMap<struct FString, struct FString> MetaData; // 0x00(0x50)
};

// ScriptStruct WebRemoteControl.SetEntityLabelResponse
// Size: 0x10 (Inherited: 0x00)
struct FSetEntityLabelResponse {
	struct FString AssignedLabel; // 0x00(0x10)
};

// ScriptStruct WebRemoteControl.RCPresetFieldsRenamedEvent
// Size: 0x40 (Inherited: 0x00)
struct FRCPresetFieldsRenamedEvent {
	struct FString Type; // 0x00(0x10)
	struct FName PresetName; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString PresetId; // 0x20(0x10)
	struct TArray<struct FRCPresetFieldRenamed> RenamedFields; // 0x30(0x10)
};

// ScriptStruct WebRemoteControl.RCPresetMetadataModified
// Size: 0x80 (Inherited: 0x00)
struct FRCPresetMetadataModified {
	struct FString Type; // 0x00(0x10)
	struct FName PresetName; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString PresetId; // 0x20(0x10)
	struct TMap<struct FString, struct FString> MetaData; // 0x30(0x50)
};

// ScriptStruct WebRemoteControl.RCPresetLayoutModified
// Size: 0x60 (Inherited: 0x00)
struct FRCPresetLayoutModified {
	struct FString Type; // 0x00(0x10)
	struct FRCPresetDescription Preset; // 0x10(0x50)
};

// ScriptStruct WebRemoteControl.RCPresetFieldsRemovedEvent
// Size: 0x50 (Inherited: 0x00)
struct FRCPresetFieldsRemovedEvent {
	struct FString Type; // 0x00(0x10)
	struct FName PresetName; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString PresetId; // 0x20(0x10)
	struct TArray<struct FName> RemovedFields; // 0x30(0x10)
	struct TArray<struct FString> RemovedFieldIds; // 0x40(0x10)
};

// ScriptStruct WebRemoteControl.RCPresetFieldsAddedEvent
// Size: 0x80 (Inherited: 0x00)
struct FRCPresetFieldsAddedEvent {
	struct FString Type; // 0x00(0x10)
	struct FName PresetName; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString PresetId; // 0x20(0x10)
	struct FRCPresetDescription Description; // 0x30(0x50)
};

// ScriptStruct WebRemoteControl.RCPresetEntitiesModifiedEvent
// Size: 0x60 (Inherited: 0x00)
struct FRCPresetEntitiesModifiedEvent {
	struct FString Type; // 0x00(0x10)
	struct FName PresetName; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString PresetId; // 0x20(0x10)
	struct FRCPresetModifiedEntitiesDescription ModifiedEntities; // 0x30(0x30)
};

// ScriptStruct WebRemoteControl.RCPresetControllersRenamedEvent
// Size: 0x40 (Inherited: 0x00)
struct FRCPresetControllersRenamedEvent {
	struct FString Type; // 0x00(0x10)
	struct FName PresetName; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString PresetId; // 0x20(0x10)
	struct TArray<struct FRCPresetFieldRenamed> RenamedControllers; // 0x30(0x10)
};

// ScriptStruct WebRemoteControl.RCPresetControllersRemovedEvent
// Size: 0x50 (Inherited: 0x00)
struct FRCPresetControllersRemovedEvent {
	struct FString Type; // 0x00(0x10)
	struct FName PresetName; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString PresetId; // 0x20(0x10)
	struct TArray<struct FName> RemovedControllers; // 0x30(0x10)
	struct TArray<struct FString> RemovedControllerIds; // 0x40(0x10)
};

// ScriptStruct WebRemoteControl.RCPresetControllersAddedEvent
// Size: 0x80 (Inherited: 0x00)
struct FRCPresetControllersAddedEvent {
	struct FString Type; // 0x00(0x10)
	struct FName PresetName; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString PresetId; // 0x20(0x10)
	struct FRCPresetDescription Description; // 0x30(0x50)
};

// ScriptStruct WebRemoteControl.RCPresetControllersModifiedEvent
// Size: 0x50 (Inherited: 0x00)
struct FRCPresetControllersModifiedEvent {
	struct FString Type; // 0x00(0x10)
	struct FName PresetName; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString PresetId; // 0x20(0x10)
	struct FRCControllerModifiedDescription ModifiedControllers; // 0x30(0x20)
};

// ScriptStruct WebRemoteControl.RCActorsChangedData
// Size: 0x30 (Inherited: 0x00)
struct FRCActorsChangedData {
	struct TArray<struct FRCActorDescription> AddedActors; // 0x00(0x10)
	struct TArray<struct FRCActorDescription> RenamedActors; // 0x10(0x10)
	struct TArray<struct FRCActorDescription> DeletedActors; // 0x20(0x10)
};

// ScriptStruct WebRemoteControl.RCActorsChangedEvent
// Size: 0x60 (Inherited: 0x00)
struct FRCActorsChangedEvent {
	struct FString Type; // 0x00(0x10)
	struct TMap<struct FString, struct FRCActorsChangedData> Changes; // 0x10(0x50)
};

// ScriptStruct WebRemoteControl.RCTransactionEndedEvent
// Size: 0x20 (Inherited: 0x00)
struct FRCTransactionEndedEvent {
	struct FString Type; // 0x00(0x10)
	int32_t TransactionId; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	int64_t SequenceNumber; // 0x18(0x08)
};

