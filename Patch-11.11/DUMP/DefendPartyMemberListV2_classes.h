// WidgetBlueprintGeneratedClass DefendPartyMemberListV2.DefendPartyMemberListV2_C
// Size: 0x3b0 (Inherited: 0x318)
struct UDefendPartyMemberListV2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Intro; // 0x320(0x08)
	struct UVerticalBox* CoachContainer; // 0x328(0x08)
	struct UImage* CoachHeaderBackground; // 0x330(0x08)
	struct UTextBlock* CoachHeaderText; // 0x338(0x08)
	struct UPlayScreenCustomPartyMemberListingDisplayEntry_C* CoachMemberEntry; // 0x340(0x08)
	struct UImage* DragBorder; // 0x348(0x08)
	struct UPlayScreenCustomPartyMemberListingDisplayEntry_C* PartyMemberListing_2; // 0x350(0x08)
	struct UPlayScreenCustomPartyMemberListingDisplayEntry_C* PartyMemberListing_3; // 0x358(0x08)
	struct UPlayScreenCustomPartyMemberListingDisplayEntry_C* PartyMemberListing_4; // 0x360(0x08)
	struct UPlayScreenCustomPartyMemberListingDisplayEntry_C* PartyMemberListing_5; // 0x368(0x08)
	struct UPlayScreenCustomPartyMemberListingDisplayEntry_C* PartyMemberListing_6; // 0x370(0x08)
	struct UPartyViewController* ViewController; // 0x378(0x08)
	struct UPartyModel* Model; // 0x380(0x08)
	struct TArray<struct UPlayScreenCustomPartyMemberListing_C*> PlayerWidgets; // 0x388(0x10)
	bool IsTeamOne; // 0x398(0x01)
	char pad_399[0x7]; // 0x399(0x07)
	struct UPreconstructedWidgetListModelMediator* PartyMemberListMediator; // 0x3a0(0x08)
	struct UPreconstructedWidgetListModelMediator* CoachMemberListMediator; // 0x3a8(0x08)

	void AddDragCallbackForWidgets(struct TArray<struct TScriptInterface<IListItemDisplayEntry>>& Widgets); // Function DefendPartyMemberListV2.DefendPartyMemberListV2_C.AddDragCallbackForWidgets // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function DefendPartyMemberListV2.DefendPartyMemberListV2_C.OnDrop // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct TArray<struct UPlayScreenCustomPartyMemberListingDisplayEntry_C*> GetPartyMemberWidgets(); // Function DefendPartyMemberListV2.DefendPartyMemberListV2_C.GetPartyMemberWidgets // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void SetWidgetTeam(struct TArray<struct TScriptInterface<IListItemDisplayEntry>>& Widgets, enum class ECustomGameTeam Team); // Function DefendPartyMemberListV2.DefendPartyMemberListV2_C.SetWidgetTeam // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Init(struct UCustomGameUIFacade_C* Facade); // Function DefendPartyMemberListV2.DefendPartyMemberListV2_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	enum class ECustomGameTeam GetCoachTeam(); // Function DefendPartyMemberListV2.DefendPartyMemberListV2_C.GetCoachTeam // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	enum class ECustomGameTeam GetTeam(); // Function DefendPartyMemberListV2.DefendPartyMemberListV2_C.GetTeam // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void SetCoachMembersListModel(struct TScriptInterface<IOrderedListModel> NewValue); // Function DefendPartyMemberListV2.DefendPartyMemberListV2_C.SetCoachMembersListModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetPartyMembersListModel(struct TScriptInterface<IOrderedListModel> NewValue); // Function DefendPartyMemberListV2.DefendPartyMemberListV2_C.SetPartyMembersListModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateCoachHeaderColor(); // Function DefendPartyMemberListV2.DefendPartyMemberListV2_C.UpdateCoachHeaderColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateCoachVisibility(); // Function DefendPartyMemberListV2.DefendPartyMemberListV2_C.UpdateCoachVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetBackgroundColor(struct FLinearColor InContentColorAndOpacity); // Function DefendPartyMemberListV2.DefendPartyMemberListV2_C.SetBackgroundColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function DefendPartyMemberListV2.DefendPartyMemberListV2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void UnbindFromParty(); // Function DefendPartyMemberListV2.DefendPartyMemberListV2_C.UnbindFromParty // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnGameRuleBoolChanged(enum class EGameRuleBoolName GameRuleName, bool bEnabled); // Function DefendPartyMemberListV2.DefendPartyMemberListV2_C.OnGameRuleBoolChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMyTeamChanged(enum class ECustomGameTeam Team); // Function DefendPartyMemberListV2.DefendPartyMemberListV2_C.OnMyTeamChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function DefendPartyMemberListV2.DefendPartyMemberListV2_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnDragBorderVisibilityChanged(enum class ESlateVisibility Visibility); // Function DefendPartyMemberListV2.DefendPartyMemberListV2_C.OnDragBorderVisibilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function DefendPartyMemberListV2.DefendPartyMemberListV2_C.OnDragLeave // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnDragCancelled(struct FPointerEvent& PointerEvent, struct UDragDropOperation* Operation); // Function DefendPartyMemberListV2.DefendPartyMemberListV2_C.OnDragCancelled // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_DefendPartyMemberListV2(int32_t EntryPoint); // Function DefendPartyMemberListV2.DefendPartyMemberListV2_C.ExecuteUbergraph_DefendPartyMemberListV2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

