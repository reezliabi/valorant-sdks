// Class ModelViewViewModel.MVVMConversionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UMVVMConversionLibrary : UBlueprintFunctionLibrary {

	enum class ESlateVisibility Conv_BoolToSlateVisibility(bool bIsVisible, enum class ESlateVisibility TrueVisibility, enum class ESlateVisibility FalseVisibility); // Function ModelViewViewModel.MVVMConversionLibrary.Conv_BoolToSlateVisibility // (Final|Native|Static|Private|BlueprintCallable|BlueprintPure) // @ game+0x5152470
};

// Class ModelViewViewModel.MVVMViewModelContextResolver
// Size: 0x30 (Inherited: 0x30)
struct UMVVMViewModelContextResolver : UObject {

	struct TScriptInterface<INotifyFieldValueChanged> K2_CreateInstance(struct UObject* ExpectedType, struct UUserWidget* UserWidget); // Function ModelViewViewModel.MVVMViewModelContextResolver.K2_CreateInstance // (Event|Public|BlueprintEvent|Const) // @ game+0x19be2f0
};

// Class ModelViewViewModel.MVVMGameSubsystem
// Size: 0x40 (Inherited: 0x38)
struct UMVVMGameSubsystem : UGameInstanceSubsystem {
	struct UMVVMViewModelCollectionObject* ViewModelCollection; // 0x38(0x08)

	struct UMVVMViewModelCollectionObject* GetViewModelCollection(); // Function ModelViewViewModel.MVVMGameSubsystem.GetViewModelCollection // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3dca6a0
};

// Class ModelViewViewModel.MVVMSubsystem
// Size: 0x38 (Inherited: 0x38)
struct UMVVMSubsystem : UEngineSubsystem {

	struct UMVVMView* K2_GetViewFromUserWidget(struct UUserWidget* UserWidget); // Function ModelViewViewModel.MVVMSubsystem.K2_GetViewFromUserWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5156e50
	struct TArray<struct FMVVMAvailableBinding> K2_GetAvailableBindings(struct UObject* Class, struct UObject* Accessor); // Function ModelViewViewModel.MVVMSubsystem.K2_GetAvailableBindings // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5156930
	struct FMVVMAvailableBinding K2_GetAvailableBinding(struct UObject* Class, struct FMVVMBindingName BindingName, struct UObject* Accessor); // Function ModelViewViewModel.MVVMSubsystem.K2_GetAvailableBinding // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5156610
	struct UMVVMViewModelCollectionObject* GetGlobalViewModelCollection(); // Function ModelViewViewModel.MVVMSubsystem.GetGlobalViewModelCollection // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x423f0b0
	bool DoesWidgetTreeContainedWidget(struct UWidgetTree* WidgetTree, struct UWidget* ViewWidget); // Function ModelViewViewModel.MVVMSubsystem.DoesWidgetTreeContainedWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5156c10
};

// Class ModelViewViewModel.MVVMViewModelBase
// Size: 0x70 (Inherited: 0x30)
struct UMVVMViewModelBase : UObject {
	char pad_30[0x40]; // 0x30(0x40)

	bool K2_SetPropertyValue(int32_t& OldValue, int32_t& NewValue); // Function ModelViewViewModel.MVVMViewModelBase.K2_SetPropertyValue // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x5158ce0
	void K2_RemoveFieldValueChangedDelegate(struct FFieldNotificationId FieldId, struct FDelegate Delegate); // Function ModelViewViewModel.MVVMViewModelBase.K2_RemoveFieldValueChangedDelegate // (Final|Native|Public|BlueprintCallable) // @ game+0x5157f30
	void K2_BroadcastFieldValueChanged(struct FFieldNotificationId FieldId); // Function ModelViewViewModel.MVVMViewModelBase.K2_BroadcastFieldValueChanged // (Final|Native|Protected|BlueprintCallable) // @ game+0x5157d60
	void K2_AddFieldValueChangedDelegate(struct FFieldNotificationId FieldId, struct FDelegate Delegate); // Function ModelViewViewModel.MVVMViewModelBase.K2_AddFieldValueChangedDelegate // (Final|Native|Public|BlueprintCallable) // @ game+0x5158230
};

// Class ModelViewViewModel.MVVMViewModelCollectionObject
// Size: 0x58 (Inherited: 0x30)
struct UMVVMViewModelCollectionObject : UObject {
	struct FMVVMViewModelCollection ViewModelCollection; // 0x30(0x28)

	void Reset(); // Function ModelViewViewModel.MVVMViewModelCollectionObject.Reset // (Final|Native|Public|BlueprintCallable) // @ game+0x5159430
	bool RemoveViewModel(struct FMVVMViewModelContext Context); // Function ModelViewViewModel.MVVMViewModelCollectionObject.RemoveViewModel // (Final|Native|Public|BlueprintCallable) // @ game+0x5159670
	int32_t RemoveAllViewModelInstance(struct UMVVMViewModelBase* ViewModel); // Function ModelViewViewModel.MVVMViewModelCollectionObject.RemoveAllViewModelInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x5159480
	struct UMVVMViewModelBase* FindViewModelInstance(struct FMVVMViewModelContext Context); // Function ModelViewViewModel.MVVMViewModelCollectionObject.FindViewModelInstance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5159b60
	struct UMVVMViewModelBase* FindFirstViewModelInstanceOfType(struct UMVVMViewModelBase*& ViewModelClass); // Function ModelViewViewModel.MVVMViewModelCollectionObject.FindFirstViewModelInstanceOfType // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5159a10
	bool AddViewModelInstance(struct FMVVMViewModelContext Context, struct UMVVMViewModelBase* ViewModel); // Function ModelViewViewModel.MVVMViewModelCollectionObject.AddViewModelInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x5159840
};

// Class ModelViewViewModel.MVVMViewModelBlueprintGeneratedClass
// Size: 0x378 (Inherited: 0x378)
struct UMVVMViewModelBlueprintGeneratedClass : UBlueprintGeneratedClass {
};

// Class ModelViewViewModel.MVVMBindingSubsystem
// Size: 0x98 (Inherited: 0x38)
struct UMVVMBindingSubsystem : UEngineSubsystem {
	char pad_38[0x60]; // 0x38(0x60)
};

// Class ModelViewViewModel.MVVMView
// Size: 0x60 (Inherited: 0x30)
struct UMVVMView : UUserWidgetExtension {
	struct UMVVMViewClass* ClassExtension; // 0x30(0x08)
	struct TArray<struct FMVVMViewSource> Sources; // 0x38(0x10)
	char pad_48[0x10]; // 0x48(0x10)
	bool bLogBinding; // 0x58(0x01)
	bool bConstructed; // 0x59(0x01)
	bool bSourcesInitialized; // 0x5a(0x01)
	bool bBindingsInitialized; // 0x5b(0x01)
	bool bHasEveryTickBinding; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)

	void UninitializeSources(); // Function ModelViewViewModel.MVVMView.UninitializeSources // (Final|Native|Public|BlueprintCallable) // @ game+0x515b900
	void UninitializeBindings(); // Function ModelViewViewModel.MVVMView.UninitializeBindings // (Final|Native|Public|BlueprintCallable) // @ game+0x515b890
	bool SetViewModelByClass(struct TScriptInterface<INotifyFieldValueChanged> NewValue); // Function ModelViewViewModel.MVVMView.SetViewModelByClass // (Final|Native|Public|BlueprintCallable) // @ game+0x515b440
	bool SetViewModel(struct FName ViewModelName, struct TScriptInterface<INotifyFieldValueChanged> ViewModel); // Function ModelViewViewModel.MVVMView.SetViewModel // (Final|Native|Public|BlueprintCallable) // @ game+0x515b550
	void InitializeSources(); // Function ModelViewViewModel.MVVMView.InitializeSources // (Final|Native|Public|BlueprintCallable) // @ game+0x515b930
	void InitializeBindings(); // Function ModelViewViewModel.MVVMView.InitializeBindings // (Final|Native|Public|BlueprintCallable) // @ game+0x515b8c0
	struct TScriptInterface<INotifyFieldValueChanged> GetViewModel(struct FName ViewModelName); // Function ModelViewViewModel.MVVMView.GetViewModel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x515b720
	bool AreSourcesInitialized(); // Function ModelViewViewModel.MVVMView.AreSourcesInitialized // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x515b8e0
	bool AreBindingsInitialized(); // Function ModelViewViewModel.MVVMView.AreBindingsInitialized // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x515b870
};

// Class ModelViewViewModel.MVVMViewClass
// Size: 0xb8 (Inherited: 0x30)
struct UMVVMViewClass : UWidgetBlueprintGeneratedClassExtension {
	struct TArray<struct FMVVMViewClass_SourceCreator> SourceCreators; // 0x30(0x10)
	struct TArray<struct FMVVMViewClass_CompiledBinding> CompiledBindings; // 0x40(0x10)
	struct FMVVMCompiledBindingLibrary BindingLibrary; // 0x50(0x60)
	char pad_B0[0x4]; // 0xb0(0x04)
	bool bInitializeSourcesOnConstruct; // 0xb4(0x01)
	bool bInitializeBindingsOnConstruct; // 0xb5(0x01)
	char pad_B6[0x2]; // 0xb6(0x02)
};

