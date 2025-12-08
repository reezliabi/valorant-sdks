// Class RemoteControl.RCVirtualPropertyBase
// Size: 0xc0 (Inherited: 0x30)
struct URCVirtualPropertyBase : UObject {
	struct FName PropertyName; // 0x30(0x0c)
	struct FGuid ID; // 0x3c(0x10)
	struct FName FieldId; // 0x4c(0x0c)
	struct TWeakObjectPtr<struct URemoteControlPreset> PresetWeakPtr; // 0x58(0x08)
	struct FName DisplayName; // 0x60(0x0c)
	int32_t DisplayIndex; // 0x6c(0x04)
	struct TMap<struct FName, struct FString> MetaData; // 0x70(0x50)

	bool SetValueVector(struct FVector& InVector); // Function RemoteControl.RCVirtualPropertyBase.SetValueVector // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x6c69970
	bool SetValueUint64(uint64_t InUInt64); // Function RemoteControl.RCVirtualPropertyBase.SetValueUint64 // (Final|Native|Public) // @ game+0x6c6a2a0
	bool SetValueUInt32(uint32_t InUInt32); // Function RemoteControl.RCVirtualPropertyBase.SetValueUInt32 // (Final|Native|Public) // @ game+0x6c6a520
	bool SetValueUint16(uint16_t InUInt16); // Function RemoteControl.RCVirtualPropertyBase.SetValueUint16 // (Final|Native|Public) // @ game+0x6c6a7a0
	bool SetValueText(struct FText& InTextValue); // Function RemoteControl.RCVirtualPropertyBase.SetValueText // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6c69be0
	bool SetValueString(struct FString InStringValue); // Function RemoteControl.RCVirtualPropertyBase.SetValueString // (Final|Native|Public|BlueprintCallable) // @ game+0x6c69ed0
	bool SetValueRotator(struct FRotator& InRotator); // Function RemoteControl.RCVirtualPropertyBase.SetValueRotator // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x6c69870
	bool SetValueNumericInteger(int64_t InInt64Value); // Function RemoteControl.RCVirtualPropertyBase.SetValueNumericInteger // (Final|Native|Public|BlueprintCallable) // @ game+0x6c69a70
	bool SetValueName(struct FName& InNameValue); // Function RemoteControl.RCVirtualPropertyBase.SetValueName // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6c69d60
	bool SetValueInt8(int8_t InInt8); // Function RemoteControl.RCVirtualPropertyBase.SetValueInt8 // (Final|Native|Public) // @ game+0x6c6ab60
	bool SetValueInt64(int64_t InInt64); // Function RemoteControl.RCVirtualPropertyBase.SetValueInt64 // (Final|Native|Public|BlueprintCallable) // @ game+0x6c6a3e0
	bool SetValueInt32(int32_t InInt32); // Function RemoteControl.RCVirtualPropertyBase.SetValueInt32 // (Final|Native|Public|BlueprintCallable) // @ game+0x6c6a660
	bool SetValueInt16(int16_t InInt16); // Function RemoteControl.RCVirtualPropertyBase.SetValueInt16 // (Final|Native|Public) // @ game+0x6c6a8e0
	bool SetValueFloat(float InFloat); // Function RemoteControl.RCVirtualPropertyBase.SetValueFloat // (Final|Native|Public|BlueprintCallable) // @ game+0x6c6a1a0
	bool SetValueDouble(double InDouble); // Function RemoteControl.RCVirtualPropertyBase.SetValueDouble // (Final|Native|Public|BlueprintCallable) // @ game+0x6c6a0a0
	bool SetValueColor(struct FColor& InColor); // Function RemoteControl.RCVirtualPropertyBase.SetValueColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x6c69770
	bool SetValueByte(char InByte); // Function RemoteControl.RCVirtualPropertyBase.SetValueByte // (Final|Native|Public|BlueprintCallable) // @ game+0x6c6aa20
	bool SetValueBool(bool InBoolValue); // Function RemoteControl.RCVirtualPropertyBase.SetValueBool // (Final|Native|Public|BlueprintCallable) // @ game+0x6c6aca0
	bool GetValueVector(struct FVector& OutVector); // Function RemoteControl.RCVirtualPropertyBase.GetValueVector // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x6c6b0f0
	bool GetValueUint64(uint64_t& OuyUInt64); // Function RemoteControl.RCVirtualPropertyBase.GetValueUint64 // (Final|Native|Public|HasOutParms|Const) // @ game+0x6c6b8c0
	bool GetValueUInt32(uint32_t& OutUInt32); // Function RemoteControl.RCVirtualPropertyBase.GetValueUInt32 // (Final|Native|Public|HasOutParms|Const) // @ game+0x6c6bb60
	bool GetValueUint16(uint16_t& OutUInt16); // Function RemoteControl.RCVirtualPropertyBase.GetValueUint16 // (Final|Native|Public|HasOutParms|Const) // @ game+0x6c6bdb0
	bool GetValueText(struct FText& OutTextValue); // Function RemoteControl.RCVirtualPropertyBase.GetValueText // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x6c6b350
	bool GetValueString(struct FString& OutStringValue); // Function RemoteControl.RCVirtualPropertyBase.GetValueString // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x6c6b580
	bool GetValueRotator(struct FRotator& OutRotator); // Function RemoteControl.RCVirtualPropertyBase.GetValueRotator // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x6c6aff0
	struct UObject* GetValueObject(); // Function RemoteControl.RCVirtualPropertyBase.GetValueObject // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6c6ae40
	bool GetValueNumericInteger(int64_t& OutInt64Value); // Function RemoteControl.RCVirtualPropertyBase.GetValueNumericInteger // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x6c6b1f0
	bool GetValueName(struct FName& OutNameValue); // Function RemoteControl.RCVirtualPropertyBase.GetValueName // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x6c6b480
	bool GetValueInt8(int8_t& OutInt8); // Function RemoteControl.RCVirtualPropertyBase.GetValueInt8 // (Final|Native|Public|HasOutParms|Const) // @ game+0x6c6c150
	bool GetValueInt64(int64_t& OuyInt64); // Function RemoteControl.RCVirtualPropertyBase.GetValueInt64 // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x6c6ba10
	bool GetValueInt32(int32_t& OutInt32); // Function RemoteControl.RCVirtualPropertyBase.GetValueInt32 // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x6c6bcb0
	bool GetValueInt16(int16_t& OutInt16); // Function RemoteControl.RCVirtualPropertyBase.GetValueInt16 // (Final|Native|Public|HasOutParms|Const) // @ game+0x6c6bf00
	bool GetValueFloat(float& OutFloat); // Function RemoteControl.RCVirtualPropertyBase.GetValueFloat // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x6c6b7c0
	bool GetValueDouble(double& OutDouble); // Function RemoteControl.RCVirtualPropertyBase.GetValueDouble // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x6c6b6c0
	bool GetValueColor(struct FColor& OutColor); // Function RemoteControl.RCVirtualPropertyBase.GetValueColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x6c6aef0
	bool GetValueByte(char& OutByte); // Function RemoteControl.RCVirtualPropertyBase.GetValueByte // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x6c6c050
	bool GetValueBool(bool& OutBoolValue); // Function RemoteControl.RCVirtualPropertyBase.GetValueBool // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x6c6c2a0
	struct FName GetPropertyName(); // Function RemoteControl.RCVirtualPropertyBase.GetPropertyName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4a229e0
	struct FString GetDisplayValueAsString(); // Function RemoteControl.RCVirtualPropertyBase.GetDisplayValueAsString // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6c6ada0
};

// Class RemoteControl.RCVirtualPropertyInContainer
// Size: 0xc8 (Inherited: 0xc0)
struct URCVirtualPropertyInContainer : URCVirtualPropertyBase {
	struct TWeakObjectPtr<struct URCVirtualPropertyContainerBase> ContainerWeakPtr; // 0xc0(0x08)
};

// Class RemoteControl.RCVirtualPropertySelfContainer
// Size: 0xd0 (Inherited: 0xc0)
struct URCVirtualPropertySelfContainer : URCVirtualPropertyBase {
	struct FInstancedPropertyBag Bag; // 0xc0(0x10)
};

// Class RemoteControl.RCVirtualPropertyContainerBase
// Size: 0xb0 (Inherited: 0x30)
struct URCVirtualPropertyContainerBase : UObject {
	struct FInstancedPropertyBag Bag; // 0x30(0x10)
	struct TSet<struct URCVirtualPropertyBase*> VirtualProperties; // 0x40(0x50)
	struct TWeakObjectPtr<struct URemoteControlPreset> PresetWeakPtr; // 0x90(0x08)
	char pad_98[0x18]; // 0x98(0x18)
};

// Class RemoteControl.RemoteControlBinding
// Size: 0x68 (Inherited: 0x30)
struct URemoteControlBinding : UObject {
	struct FString Name; // 0x30(0x10)
	struct FSoftObjectPath LastBoundObjectPath; // 0x40(0x28)
};

// Class RemoteControl.RemoteControlLevelIndependantBinding
// Size: 0x98 (Inherited: 0x68)
struct URemoteControlLevelIndependantBinding : URemoteControlBinding {
	struct TSoftObjectPtr<UObject> BoundObject; // 0x68(0x30)
};

// Class RemoteControl.RemoteControlLevelDependantBinding
// Size: 0x1c8 (Inherited: 0x68)
struct URemoteControlLevelDependantBinding : URemoteControlBinding {
	struct TMap<struct FSoftObjectPath, struct TSoftObjectPtr<UObject>> BoundObjectMapByPath; // 0x68(0x50)
	struct TMap<struct FSoftObjectPath, struct TSoftObjectPtr<ULevel>> SubLevelSelectionMapByPath; // 0xb8(0x50)
	struct TSoftObjectPtr<ULevel> LevelWithLastSuccessfulResolve; // 0x108(0x30)
	struct FRemoteControlInitialBindingContext BindingContext; // 0x138(0x90)
};

// Class RemoteControl.RemoteControlDeltaAPITestObject
// Size: 0x78 (Inherited: 0x30)
struct URemoteControlDeltaAPITestObject : UObject {
	int32_t Int32Value; // 0x30(0x04)
	float FloatValue; // 0x34(0x04)
	struct FVector VectorValue; // 0x38(0x18)
	struct FLinearColor ColorValue; // 0x50(0x10)
	struct FRemoteControlDeltaAPITestStruct StructValue; // 0x60(0x10)
	int32_t Int32WithSetterValue; // 0x70(0x04)
	float FloatWithSetterValue; // 0x74(0x04)

	void SetInt32WithSetterValue(int32_t NewValue); // Function RemoteControl.RemoteControlDeltaAPITestObject.SetInt32WithSetterValue // (Final|Native|Public|BlueprintCallable) // @ game+0x6c6e620
	int32_t GetInt32WithSetterValue(); // Function RemoteControl.RemoteControlDeltaAPITestObject.GetInt32WithSetterValue // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x5620540
};

// Class RemoteControl.RemoteControlExposeRegistry
// Size: 0x120 (Inherited: 0x30)
struct URemoteControlExposeRegistry : UObject {
	struct TSet<struct FRCEntityWrapper> ExposedEntities; // 0x30(0x50)
	struct TMap<struct FName, struct FGuid> LabelToIdCache; // 0x80(0x50)
	struct TSet<struct UScriptStruct*> ExposedTypes; // 0xd0(0x50)
};

// Class RemoteControl.RemoteControlFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct URemoteControlFunctionLibrary : UBlueprintFunctionLibrary {

	bool ExposeProperty(struct URemoteControlPreset* Preset, struct UObject* SourceObject, struct FString Property, struct FRemoteControlOptionalExposeArgs Args); // Function RemoteControl.RemoteControlFunctionLibrary.ExposeProperty // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6c750b0
	bool ExposeFunction(struct URemoteControlPreset* Preset, struct UObject* SourceObject, struct FString Function, struct FRemoteControlOptionalExposeArgs Args); // Function RemoteControl.RemoteControlFunctionLibrary.ExposeFunction // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6c74b40
	bool ExposeActor(struct URemoteControlPreset* Preset, struct AActor* Actor, struct FRemoteControlOptionalExposeArgs Args); // Function RemoteControl.RemoteControlFunctionLibrary.ExposeActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6c74710
	bool ApplyColorWheelDelta(struct UObject* TargetObject, struct FString PropertyName, struct FColorWheelColor& DeltaValue, struct FColorWheelColor& ReferenceColor, bool bIsInteractive); // Function RemoteControl.RemoteControlFunctionLibrary.ApplyColorWheelDelta // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6c74350
	bool ApplyColorGradingWheelDelta(struct UObject* TargetObject, struct FString PropertyName, struct FColorGradingWheelColor& DeltaValue, struct FColorGradingWheelColor& ReferenceColor, bool bIsInteractive, float MinValue, float MaxValue); // Function RemoteControl.RemoteControlFunctionLibrary.ApplyColorGradingWheelDelta // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6c73a50
};

// Class RemoteControl.RemoteControlInterceptionTestObject
// Size: 0x60 (Inherited: 0x30)
struct URemoteControlInterceptionTestObject : UObject {
	struct FRemoteControlInterceptionTestStruct CustomStruct; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FRemoteControlInterceptionFunctionParamStruct FunctionParamStruct; // 0x38(0x28)

	struct FRemoteControlInterceptionFunctionParamStruct TestFunction(struct FRemoteControlInterceptionFunctionParamStruct& InStruct, int32_t InTestFactor); // Function RemoteControl.RemoteControlInterceptionTestObject.TestFunction // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6c75f00
};

// Class RemoteControl.RemoteControlPreset
// Size: 0x558 (Inherited: 0x30)
struct URemoteControlPreset : UObject {
	struct FRemoteControlPresetLayout Layout; // 0x30(0xc0)
	struct TMap<struct FString, struct FString> MetaData; // 0xf0(0x50)
	struct TArray<struct URemoteControlBinding*> Bindings; // 0x140(0x10)
	struct URCVirtualPropertyContainerBase* ControllerContainer; // 0x150(0x08)
	struct FGuid PresetId; // 0x158(0x10)
	struct TMap<struct FGuid, struct FRCCachedFieldData> FieldCache; // 0x168(0x50)
	struct TMap<struct FName, struct FGuid> NameToGuidMap; // 0x1b8(0x50)
	struct URemoteControlExposeRegistry* Registry; // 0x208(0x08)
	char pad_210[0x348]; // 0x210(0x348)
};

// Class RemoteControl.RemoteControlPresetActor
// Size: 0x470 (Inherited: 0x460)
struct ARemoteControlPresetActor : AActor {
	struct URemoteControlPreset* Preset; // 0x460(0x08)
	char pad_468[0x8]; // 0x468(0x08)
};

// Class RemoteControl.RemoteControlAPITestObject
// Size: 0x2d0 (Inherited: 0x30)
struct URemoteControlAPITestObject : UObject {
	int32_t CStyleIntArray[0x3]; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<int32_t> IntArray; // 0x40(0x10)
	struct TArray<struct FRemoteControlTestStructOuter> StructOuterArray; // 0x50(0x10)
	struct TSet<int32_t> IntSet; // 0x60(0x50)
	struct TMap<int32_t, int32_t> IntMap; // 0xb0(0x50)
	struct TMap<int32_t, struct FRemoteControlTestStructOuter> StructOuterMap; // 0x100(0x50)
	struct TMap<struct FString, struct FColor> StringColorMap; // 0x150(0x50)
	struct TArray<struct FVector> ArrayOfVectors; // 0x1a0(0x10)
	struct UStaticMeshComponent* StaticMeshComponent; // 0x1b0(0x08)
	int8_t Int8Value; // 0x1b8(0x01)
	char pad_1B9[0x1]; // 0x1b9(0x01)
	int16_t Int16Value; // 0x1ba(0x02)
	int32_t Int32Value; // 0x1bc(0x04)
	float FloatValue; // 0x1c0(0x04)
	char pad_1C4[0x4]; // 0x1c4(0x04)
	double DoubleValue; // 0x1c8(0x08)
	struct FRemoteControlTestStructOuter RemoteControlTestStructOuter; // 0x1d0(0x78)
	struct FString StringValue; // 0x248(0x10)
	struct FName NameValue; // 0x258(0x0c)
	char pad_264[0x4]; // 0x264(0x04)
	struct FText TextValue; // 0x268(0x18)
	bool bValue; // 0x280(0x01)
	char ByteValue; // 0x281(0x01)
	enum class ERemoteControlEnum RemoteControlEnumByteValue; // 0x282(0x01)
	enum class ERemoteControlEnumClass RemoteControlEnumValue; // 0x283(0x01)
	char pad_284[0x4]; // 0x284(0x04)
	struct FVector VectorValue; // 0x288(0x18)
	struct FRotator RotatorValue; // 0x2a0(0x18)
	struct FColor ColorValue; // 0x2b8(0x04)
	struct FLinearColor LinearColorValue; // 0x2bc(0x10)
	char pad_2CC[0x4]; // 0x2cc(0x04)
};

// Class RemoteControl.RemoteControlTestObject
// Size: 0x1a0 (Inherited: 0x30)
struct URemoteControlTestObject : UObject {
	int32_t CStyleIntArray[0x3]; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<int32_t> IntArray; // 0x40(0x10)
	struct TArray<float> FloatArray; // 0x50(0x10)
	struct TSet<int32_t> IntSet; // 0x60(0x50)
	struct TMap<int32_t, int32_t> IntMap; // 0xb0(0x50)
	struct TMap<int32_t, struct FRemoteControlTestInnerStruct> IntInnerStructMap; // 0x100(0x50)
	struct TMap<struct FString, struct FColor> StringColorMap; // 0x150(0x50)
};

