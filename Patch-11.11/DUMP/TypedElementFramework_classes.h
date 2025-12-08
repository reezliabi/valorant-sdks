// Class TypedElementFramework.TypedElementDataStorageCompatibilityInterface
// Size: 0x30 (Inherited: 0x30)
struct UTypedElementDataStorageCompatibilityInterface : UInterface {
};

// Class TypedElementFramework.TypedElementDataStorageFactory
// Size: 0x30 (Inherited: 0x30)
struct UTypedElementDataStorageFactory : UObject {
};

// Class TypedElementFramework.TypedElementDataStorageInterface
// Size: 0x30 (Inherited: 0x30)
struct UTypedElementDataStorageInterface : UInterface {
};

// Class TypedElementFramework.TypedElementDataStorageUiInterface
// Size: 0x30 (Inherited: 0x30)
struct UTypedElementDataStorageUiInterface : UInterface {
};

// Class TypedElementFramework.TypedElementHandleLibrary
// Size: 0x30 (Inherited: 0x30)
struct UTypedElementHandleLibrary : UObject {

	void Release(struct FScriptTypedElementHandle& ElementHandle); // Function TypedElementFramework.TypedElementHandleLibrary.Release // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x257acf0
	bool NotEqual(struct FScriptTypedElementHandle& LHS, struct FScriptTypedElementHandle& RHS); // Function TypedElementFramework.TypedElementHandleLibrary.NotEqual // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x257a8f0
	bool IsSet(struct FScriptTypedElementHandle& ElementHandle); // Function TypedElementFramework.TypedElementHandleLibrary.IsSet // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x257ae20
	bool Equal(struct FScriptTypedElementHandle& LHS, struct FScriptTypedElementHandle& RHS); // Function TypedElementFramework.TypedElementHandleLibrary.Equal // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x257aaf0
};

// Class TypedElementFramework.TypedElementListLibrary
// Size: 0x30 (Inherited: 0x30)
struct UTypedElementListLibrary : UObject {

	void Shrink(struct FScriptTypedElementListProxy ElementList); // Function TypedElementFramework.TypedElementListLibrary.Shrink // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x257d350
	void Reset(struct FScriptTypedElementListProxy ElementList); // Function TypedElementFramework.TypedElementListLibrary.Reset // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x257cd10
	void Reserve(struct FScriptTypedElementListProxy ElementList, int32_t Size); // Function TypedElementFramework.TypedElementListLibrary.Reserve // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x257d040
	bool Remove(struct FScriptTypedElementListProxy ElementList, struct FScriptTypedElementHandle& ElementHandle); // Function TypedElementFramework.TypedElementListLibrary.Remove // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x257bec0
	int32_t Num(struct FScriptTypedElementListProxy ElementList); // Function TypedElementFramework.TypedElementListLibrary.Num // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x257d580
	bool IsValidIndex(struct FScriptTypedElementListProxy ElementList, int32_t Index); // Function TypedElementFramework.TypedElementListLibrary.IsValidIndex // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x257d740
	bool HasElementsOfType(struct FScriptTypedElementListProxy ElementList, struct FName ElementTypeName); // Function TypedElementFramework.TypedElementListLibrary.HasElementsOfType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x257df20
	bool HasElements(struct FScriptTypedElementListProxy ElementList, struct UInterface* BaseInterfaceType); // Function TypedElementFramework.TypedElementListLibrary.HasElements // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x257e490
	struct UObject* GetElementInterface(struct FScriptTypedElementListProxy ElementList, struct FScriptTypedElementHandle& ElementHandle, struct UInterface* BaseInterfaceType); // Function TypedElementFramework.TypedElementListLibrary.GetElementInterface // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x257e770
	struct TArray<struct FScriptTypedElementHandle> GetElementHandles(struct FScriptTypedElementListProxy ElementList, struct UInterface* BaseInterfaceType); // Function TypedElementFramework.TypedElementListLibrary.GetElementHandles // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x257d9c0
	struct FScriptTypedElementHandle GetElementHandleAt(struct FScriptTypedElementListProxy ElementList, int32_t Index); // Function TypedElementFramework.TypedElementListLibrary.GetElementHandleAt // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x257eab0
	void Empty(struct FScriptTypedElementListProxy ElementList, int32_t Slack); // Function TypedElementFramework.TypedElementListLibrary.Empty // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x257ce50
	struct FScriptTypedElementListProxy CreateScriptElementList(struct UTypedElementRegistry* Registry); // Function TypedElementFramework.TypedElementListLibrary.CreateScriptElementList // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x257eef0
	int32_t CountElementsOfType(struct FScriptTypedElementListProxy ElementList, struct FName ElementTypeName); // Function TypedElementFramework.TypedElementListLibrary.CountElementsOfType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x257dc40
	int32_t CountElements(struct FScriptTypedElementListProxy ElementList, struct UInterface* BaseInterfaceType); // Function TypedElementFramework.TypedElementListLibrary.CountElements // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x257e200
	bool Contains(struct FScriptTypedElementListProxy ElementList, struct FScriptTypedElementHandle& ElementHandle); // Function TypedElementFramework.TypedElementListLibrary.Contains // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x257c9f0
	struct FScriptTypedElementListProxy Clone(struct FScriptTypedElementListProxy ElementList); // Function TypedElementFramework.TypedElementListLibrary.Clone // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x257ed70
	void AppendList(struct FScriptTypedElementListProxy ElementList, struct FScriptTypedElementListProxy OtherElementList); // Function TypedElementFramework.TypedElementListLibrary.AppendList // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x257c1a0
	void Append(struct FScriptTypedElementListProxy ElementList, struct TArray<struct FScriptTypedElementHandle>& ElementHandles); // Function TypedElementFramework.TypedElementListLibrary.Append // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x257c410
	bool Add(struct FScriptTypedElementListProxy ElementList, struct FScriptTypedElementHandle& ElementHandle); // Function TypedElementFramework.TypedElementListLibrary.Add // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x257c710
};

// Class TypedElementFramework.TypedElementCounterInterface
// Size: 0x30 (Inherited: 0x30)
struct UTypedElementCounterInterface : UInterface {
};

// Class TypedElementFramework.TypedElementRegistry
// Size: 0x980 (Inherited: 0x30)
struct UTypedElementRegistry : UObject {
	char pad_30[0x950]; // 0x30(0x950)

	struct UTypedElementRegistry* GetInstance(); // Function TypedElementFramework.TypedElementRegistry.GetInstance // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2581680
	struct UObject* GetElementInterface(struct FScriptTypedElementHandle& InElementHandle, struct UInterface* InBaseInterfaceType); // Function TypedElementFramework.TypedElementRegistry.GetElementInterface // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x25814a0
};

// Class TypedElementFramework.TestTypedElementInterfaceA
// Size: 0x30 (Inherited: 0x30)
struct UTestTypedElementInterfaceA : UInterface {

	bool SetDisplayName(struct FScriptTypedElementHandle& InElementHandle, struct FText InNewName, bool bNotify); // Function TypedElementFramework.TestTypedElementInterfaceA.SetDisplayName // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2582f70
	struct FText GetDisplayName(struct FScriptTypedElementHandle& InElementHandle); // Function TypedElementFramework.TestTypedElementInterfaceA.GetDisplayName // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2583220
};

// Class TypedElementFramework.TestTypedElementInterfaceB
// Size: 0x30 (Inherited: 0x30)
struct UTestTypedElementInterfaceB : UInterface {

	bool MarkAsTested(struct FScriptTypedElementHandle& InElementHandle); // Function TypedElementFramework.TestTypedElementInterfaceB.MarkAsTested // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2583440
};

// Class TypedElementFramework.TestTypedElementInterfaceC
// Size: 0x30 (Inherited: 0x30)
struct UTestTypedElementInterfaceC : UInterface {

	bool GetIsTested(struct FScriptTypedElementHandle& InElementHandle); // Function TypedElementFramework.TestTypedElementInterfaceC.GetIsTested // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2583440
};

// Class TypedElementFramework.TestTypedElementInterfaceA_ImplTyped
// Size: 0x38 (Inherited: 0x30)
struct UTestTypedElementInterfaceA_ImplTyped : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class TypedElementFramework.TestTypedElementInterfaceA_ImplUntyped
// Size: 0x38 (Inherited: 0x30)
struct UTestTypedElementInterfaceA_ImplUntyped : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class TypedElementFramework.TestTypedElementInterfaceBAndC_Typed
// Size: 0x40 (Inherited: 0x30)
struct UTestTypedElementInterfaceBAndC_Typed : UObject {
	char pad_30[0x10]; // 0x30(0x10)
};

