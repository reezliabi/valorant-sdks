// ScriptStruct Serialization.StructSerializerNumericTestStruct
// Size: 0x30 (Inherited: 0x00)
struct FStructSerializerNumericTestStruct {
	int8_t Int8; // 0x00(0x01)
	char pad_1[0x1]; // 0x01(0x01)
	int16_t Int16; // 0x02(0x02)
	int32_t int32; // 0x04(0x04)
	int64_t Int64; // 0x08(0x08)
	char uint8; // 0x10(0x01)
	char pad_11[0x1]; // 0x11(0x01)
	uint16_t UInt16; // 0x12(0x02)
	uint32_t uint32; // 0x14(0x04)
	uint64_t UInt64; // 0x18(0x08)
	float float; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	double Double; // 0x28(0x08)
};

// ScriptStruct Serialization.StructSerializerBooleanTestStruct
// Size: 0x03 (Inherited: 0x00)
struct FStructSerializerBooleanTestStruct {
	bool BoolFalse; // 0x00(0x01)
	bool BoolTrue; // 0x01(0x01)
	char Bitfield0 : 1; // 0x02(0x01)
	char Bitfield1 : 1; // 0x02(0x01)
	char Bitfield2Set : 1; // 0x02(0x01)
	char Bitfield3 : 1; // 0x02(0x01)
	char Bitfield4Set : 1; // 0x02(0x01)
	char Bitfield5Set : 1; // 0x02(0x01)
	char Bitfield6 : 1; // 0x02(0x01)
	char Bitfield7Set : 1; // 0x02(0x01)
};

// ScriptStruct Serialization.StructSerializerObjectTestStruct
// Size: 0xe0 (Inherited: 0x00)
struct FStructSerializerObjectTestStruct {
	ClassPtrProperty RawClass; // 0x00(0x08)
	ClassPtrProperty WrappedClass; // 0x08(0x08)
	struct UMetaData* SubClass; // 0x10(0x08)
	struct TSoftClassPtr<UObject> SoftClass; // 0x18(0x30)
	struct UObject* RawObject; // 0x48(0x08)
	struct UObject* WrappedObject; // 0x50(0x08)
	struct TWeakObjectPtr<struct UMetaData> WeakObject; // 0x58(0x08)
	struct TSoftObjectPtr<UMetaData> SoftObject; // 0x60(0x30)
	struct FSoftClassPath ClassPath; // 0x90(0x28)
	struct FSoftObjectPath ObjectPath; // 0xb8(0x28)
};

// ScriptStruct Serialization.StructSerializerBuiltinTestStruct
// Size: 0xd0 (Inherited: 0x00)
struct FStructSerializerBuiltinTestStruct {
	struct FGuid Guid; // 0x00(0x10)
	struct FName Name; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString String; // 0x20(0x10)
	struct FText Text; // 0x30(0x18)
	struct FVector Vector; // 0x48(0x18)
	struct FVector4 Vector4; // 0x60(0x20)
	struct FRotator Rotator; // 0x80(0x18)
	char pad_98[0x8]; // 0x98(0x08)
	struct FQuat Quat; // 0xa0(0x20)
	struct FColor Color; // 0xc0(0x04)
	char pad_C4[0xc]; // 0xc4(0x0c)
};

// ScriptStruct Serialization.StructSerializerLWCTypesTest
// Size: 0x360 (Inherited: 0x00)
struct FStructSerializerLWCTypesTest {
	struct FVector Vector; // 0x00(0x18)
	struct FVector2D Vector2D; // 0x18(0x10)
	char pad_28[0x8]; // 0x28(0x08)
	struct FVector4 Vector4; // 0x30(0x20)
	struct FMatrix Matrix; // 0x50(0x80)
	struct FPlane Plane; // 0xd0(0x20)
	struct FQuat Quat; // 0xf0(0x20)
	struct FRotator Rotator; // 0x110(0x18)
	char pad_128[0x8]; // 0x128(0x08)
	struct FTransform Transform; // 0x130(0x60)
	struct FBox Box; // 0x190(0x38)
	struct FBox2D Box2D; // 0x1c8(0x28)
	struct FBoxSphereBounds BoxSphereBounds; // 0x1f0(0x38)
	struct FOrientedBox OrientedBox; // 0x228(0x78)
	float float; // 0x2a0(0x04)
	char pad_2A4[0x4]; // 0x2a4(0x04)
	double Double; // 0x2a8(0x08)
	struct TArray<struct FVector> VectorArray; // 0x2b0(0x10)
	struct TMap<struct FString, struct FVector> StrToVec; // 0x2c0(0x50)
	struct TSet<struct FVector> VectorSet; // 0x310(0x50)
};

// ScriptStruct Serialization.OrientedBoxFloat
// Size: 0x3c (Inherited: 0x00)
struct FOrientedBoxFloat {
	struct FVector3f Center; // 0x00(0x0c)
	struct FVector3f AxisX; // 0x0c(0x0c)
	struct FVector3f AxisY; // 0x18(0x0c)
	struct FVector3f AxisZ; // 0x24(0x0c)
	float ExtentX; // 0x30(0x04)
	float ExtentY; // 0x34(0x04)
	float ExtentZ; // 0x38(0x04)
};

// ScriptStruct Serialization.StructSerializerNonLWCTypesTest
// Size: 0x220 (Inherited: 0x00)
struct FStructSerializerNonLWCTypesTest {
	struct FVector3f Vector; // 0x00(0x0c)
	struct FVector2f Vector2D; // 0x0c(0x08)
	char pad_14[0xc]; // 0x14(0x0c)
	struct FVector4f Vector4; // 0x20(0x10)
	struct FMatrix44f Matrix; // 0x30(0x40)
	struct FPlane4f Plane; // 0x70(0x10)
	struct FQuat4f Quat; // 0x80(0x10)
	struct FRotator3f Rotator; // 0x90(0x0c)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FTransform3f Transform; // 0xa0(0x30)
	struct FBox3f Box; // 0xd0(0x1c)
	struct FBox2f Box2D; // 0xec(0x14)
	struct FBoxSphereBounds3f BoxSphereBounds; // 0x100(0x1c)
	struct FOrientedBoxFloat OrientedBox; // 0x11c(0x3c)
	float float; // 0x158(0x04)
	char pad_15C[0x4]; // 0x15c(0x04)
	double Double; // 0x160(0x08)
	struct TArray<struct FVector3f> VectorArray; // 0x168(0x10)
	struct TMap<struct FString, struct FVector3f> StrToVec; // 0x178(0x50)
	struct TSet<struct FVector3f> VectorSet; // 0x1c8(0x50)
	char pad_218[0x8]; // 0x218(0x08)
};

// ScriptStruct Serialization.StructSerializerByteArray
// Size: 0x38 (Inherited: 0x00)
struct FStructSerializerByteArray {
	int32_t Dummy1; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<char> ByteArray; // 0x08(0x10)
	int32_t Dummy2; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<int8_t> Int8Array; // 0x20(0x10)
	int32_t Dummy3; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Serialization.StructSerializerArrayTestStruct
// Size: 0x60 (Inherited: 0x00)
struct FStructSerializerArrayTestStruct {
	struct TArray<int32_t> Int32Array; // 0x00(0x10)
	struct TArray<char> ByteArray; // 0x10(0x10)
	int32_t StaticSingleElement; // 0x20(0x04)
	int32_t StaticInt32Array[0x3]; // 0x24(0x0c)
	float StaticFloatArray[0x3]; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct FVector> VectorArray; // 0x40(0x10)
	struct TArray<struct FStructSerializerBuiltinTestStruct> StructArray; // 0x50(0x10)
};

// ScriptStruct Serialization.StructSerializerMapTestStruct
// Size: 0x140 (Inherited: 0x00)
struct FStructSerializerMapTestStruct {
	struct TMap<int32_t, struct FString> IntToStr; // 0x00(0x50)
	struct TMap<struct FString, struct FString> StrToStr; // 0x50(0x50)
	struct TMap<struct FString, struct FVector> StrToVec; // 0xa0(0x50)
	struct TMap<struct FString, struct FStructSerializerBuiltinTestStruct> StrToStruct; // 0xf0(0x50)
};

// ScriptStruct Serialization.StructSerializerSetTestStruct
// Size: 0x140 (Inherited: 0x00)
struct FStructSerializerSetTestStruct {
	struct TSet<struct FString> StrSet; // 0x00(0x50)
	struct TSet<int32_t> IntSet; // 0x50(0x50)
	struct TSet<struct FName> NameSet; // 0xa0(0x50)
	struct TSet<struct FStructSerializerBuiltinTestStruct> StructSet; // 0xf0(0x50)
};

// ScriptStruct Serialization.StructSerializerTestStruct
// Size: 0x830 (Inherited: 0x00)
struct FStructSerializerTestStruct {
	struct FStructSerializerNumericTestStruct Numerics; // 0x00(0x30)
	struct FStructSerializerBooleanTestStruct Booleans; // 0x30(0x03)
	char pad_33[0x5]; // 0x33(0x05)
	struct FStructSerializerObjectTestStruct Objects; // 0x38(0xe0)
	char pad_118[0x8]; // 0x118(0x08)
	struct FStructSerializerBuiltinTestStruct Builtins; // 0x120(0xd0)
	struct FStructSerializerArrayTestStruct Arrays; // 0x1f0(0x60)
	struct FStructSerializerMapTestStruct Maps; // 0x250(0x140)
	struct FStructSerializerSetTestStruct Sets; // 0x390(0x140)
	struct FStructSerializerLWCTypesTest LWCTypes; // 0x4d0(0x360)
};

