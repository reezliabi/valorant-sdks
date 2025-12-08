// WidgetBlueprintGeneratedClass UsablesHUDElement.UsablesHUDElement_C
// Size: 0x3a8 (Inherited: 0x330)
struct UUsablesHUDElement_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UBorder* AlternateUsableContainer; // 0x338(0x08)
	struct UBorder* MainUsableContainer; // 0x340(0x08)
	struct UBorder* SecondaryDefaultUsableContainer; // 0x348(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x350(0x08)
	struct UBaseUsableHUDComponent_C* MainUsableChildWidget; // 0x358(0x08)
	struct AShooterPlayerState* OwningShooterPlayerState; // 0x360(0x08)
	struct AShooterCharacter* CurrentFirstPersonCharacter; // 0x368(0x08)
	double UseStartTimestamp; // 0x370(0x08)
	double TotalUseTime; // 0x378(0x08)
	struct UBaseUsableHUDComponent_C* AlternateUsableChildWidget; // 0x380(0x08)
	struct FMulticastInlineDelegate OnMainUsableUpdated; // 0x388(0x10)
	bool MainUsableIsCurrentlyInUse; // 0x398(0x01)
	char pad_399[0x7]; // 0x399(0x07)
	struct UBaseUsableHUDComponent_C* SecondaryDefaultUsableChildWidget; // 0x3a0(0x08)

	void RemoveSecondaryDefaultUsableChildWidget(); // Function UsablesHUDElement.UsablesHUDElement_C.RemoveSecondaryDefaultUsableChildWidget // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateNonLookingPickupWidget(struct UUsableComponent* My Usable, struct UBaseUsableHUDComponent_C*& OutputPin); // Function UsablesHUDElement.UsablesHUDElement_C.CreateNonLookingPickupWidget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateTouchUsableWidget(struct FString Tag, struct UUsableComponent* My Usable, struct UBaseUsableHUDComponent_C*& OutputPin); // Function UsablesHUDElement.UsablesHUDElement_C.CreateTouchUsableWidget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetInUseWidget(struct UBaseUsableHUDComponent_C*& InUseWidget); // Function UsablesHUDElement.UsablesHUDElement_C.GetInUseWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void RemoveAlternateUsableChildWidget(); // Function UsablesHUDElement.UsablesHUDElement_C.RemoveAlternateUsableChildWidget // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetupNewShooterCharacter(struct AShooterCharacter* InShooterCharacter, bool& DidChange); // Function UsablesHUDElement.UsablesHUDElement_C.SetupNewShooterCharacter // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateUsableIsInUseForWidget(struct UUsableComponent* Using Usable, struct UBaseUsableHUDComponent_C* UsableWidget, struct UUsableComponent* AltOrMainUsable, bool& CurrentlyInUse); // Function UsablesHUDElement.UsablesHUDElement_C.UpdateUsableIsInUseForWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Get New Child Widget For Current Usables(struct UUsableComponent* Using Usable, struct UUsableComponent* Best Usable, struct UBaseUsableHUDComponent_C*& NewParam); // Function UsablesHUDElement.UsablesHUDElement_C.Get New Child Widget For Current Usables // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Get Child Still Relevant(struct UUsableComponent* Using Usable, struct UUsableComponent* Best Usable, struct UBaseUsableHUDComponent_C* UsableWidget, bool& Child Is Still Relevant); // Function UsablesHUDElement.UsablesHUDElement_C.Get Child Still Relevant // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RemoveMainUsableChildWidget(); // Function UsablesHUDElement.UsablesHUDElement_C.RemoveMainUsableChildWidget // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Handle Using Time Changed(double Current Use Time, double Total Use Time); // Function UsablesHUDElement.UsablesHUDElement_C.Handle Using Time Changed // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Handle Usables Changed(); // Function UsablesHUDElement.UsablesHUDElement_C.Handle Usables Changed // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function UsablesHUDElement.UsablesHUDElement_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnUsableComponentsChangedSignature_Event_1(); // Function UsablesHUDElement.UsablesHUDElement_C.OnUsableComponentsChangedSignature_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCurrentUsingComponentTimeChanged_Event_1(float CurrentUseTime, float TotalUseTime); // Function UsablesHUDElement.UsablesHUDElement_C.OnCurrentUsingComponentTimeChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UsablesHUDElement.UsablesHUDElement_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnViewTargetChanged_Event_1(struct AActor* NewViewTarget); // Function UsablesHUDElement.UsablesHUDElement_C.OnViewTargetChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function UsablesHUDElement.UsablesHUDElement_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function UsablesHUDElement.UsablesHUDElement_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function UsablesHUDElement.UsablesHUDElement_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_UsablesHUDElement(int32_t EntryPoint); // Function UsablesHUDElement.UsablesHUDElement_C.ExecuteUbergraph_UsablesHUDElement // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnMainUsableUpdated__DelegateSignature(struct UBaseUsableHUDComponent_C* HUDComponent, bool CurrentlyInUse); // Function UsablesHUDElement.UsablesHUDElement_C.OnMainUsableUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

