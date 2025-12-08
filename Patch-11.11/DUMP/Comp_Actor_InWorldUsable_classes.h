// BlueprintGeneratedClass Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C
// Size: 0x1f8 (Inherited: 0xd8)
struct UComp_Actor_InWorldUsable_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct AShooterCharacter* CurrentLocalShooterCharacter; // 0xe0(0x08)
	struct UUserWidget* InWorldWidgetClass; // 0xe8(0x08)
	struct FTransform RelativeOffsetTransform; // 0xf0(0x60)
	struct UWidgetComponent_InWorldUsable_C* WidgetComponent; // 0x150(0x08)
	struct UUserWidget* Widget; // 0x158(0x08)
	struct TArray<struct UAresOutlineComponent*> CurrentlyOutlinedComponents; // 0x160(0x10)
	struct FMulticastInlineDelegate SelectedOnLocalClient; // 0x170(0x10)
	struct FMulticastInlineDelegate DeselectedOnLocalClient; // 0x180(0x10)
	bool ShowUsableTime; // 0x190(0x01)
	bool ShowThirds; // 0x191(0x01)
	char pad_192[0x6]; // 0x192(0x06)
	struct FVector WorldLocationOffset; // 0x198(0x18)
	struct USceneComponent* PivotComponent; // 0x1b0(0x08)
	bool ShowProgressBar; // 0x1b8(0x01)
	bool ShowOwnerName; // 0x1b9(0x01)
	bool ShowCannotUseText; // 0x1ba(0x01)
	bool ShowSelectedWidget; // 0x1bb(0x01)
	char pad_1BC[0x4]; // 0x1bc(0x04)
	struct FString WidgetClassRefTag; // 0x1c0(0x10)
	struct FVector WidgetOffset; // 0x1d0(0x18)
	bool bHighlightUsable; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
	struct UUsableComponent* UsableComponent; // 0x1f0(0x08)

	void GetHighestPriorityUsableComponent(struct UUsableComponent*& LHighestPriorityUsableComponent); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.GetHighestPriorityUsableComponent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UseBPComponentHighlighting(bool& bShouldUseBPComponentHighlighting); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.UseBPComponentHighlighting // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void LoadWidgetClassReference(struct FString WidgetRefTag); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.LoadWidgetClassReference // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateUsability(bool NewUsability); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.UpdateUsability // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TouchUsableWidgetCreation(bool L in Use, struct UInteractableUserComponent* User); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.TouchUsableWidgetCreation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetWidget(struct UUserWidget*& Widget); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.GetWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SelectionActive(bool& IsActive); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.SelectionActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void AddOutlines(); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.AddOutlines // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ClearOutlines(); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.ClearOutlines // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetOutlinedComponents(struct TArray<struct UPrimitiveComponent*>& OutOutlinedComponents); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.GetOutlinedComponents // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UsableSelected(bool InUse, struct UInteractableUserComponent* User); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.UsableSelected // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UsableDeselected(); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.UsableDeselected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void SetPivotComponent(struct USceneComponent* PivotComponent); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.SetPivotComponent // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Selected(struct UInteractableUserComponent* User); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.Selected // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Unselected(struct UInteractableUserComponent* User); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.Unselected // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UseStarted(struct UInteractableUserComponent* User); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.UseStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UseCancelled(struct UInteractableUserComponent* User, enum class EUsableCancelReason CancelReason); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.UseCancelled // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UseStopped(struct UInteractableUserComponent* User); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.UseStopped // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UsabilityUpdated(struct UInteractableUserComponent* User, bool NewUsability); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.UsabilityUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindSelectionDelegates(); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.BindSelectionDelegates // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HideWidgetOverridesUpdated(); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.HideWidgetOverridesUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Comp_Actor_InWorldUsable(int32_t EntryPoint); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.ExecuteUbergraph_Comp_Actor_InWorldUsable // (Final|UbergraphFunction) // @ game+0x19be2f0
	void DeselectedOnLocalClient__DelegateSignature(); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.DeselectedOnLocalClient__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SelectedOnLocalClient__DelegateSignature(); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.SelectedOnLocalClient__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

