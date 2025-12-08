// WidgetBlueprintGeneratedClass WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C
// Size: 0x1c10 (Inherited: 0x1ae0)
struct UWBP_CPanel_CustomGameTeamCell_C : UAresClickablePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UWBP_CustomGameTeamCellBackground_C* CellBackground; // 0x1ae8(0x08)
	struct UWBP_ContextMenuAnchor_SocialPlayer_C* ContextMenuAnchor; // 0x1af0(0x08)
	struct UImage* IMG_FocusBorder; // 0x1af8(0x08)
	struct UImage* ImgSpeakerBackground; // 0x1b00(0x08)
	struct UOverlay* Overlay_SpeakerIcon; // 0x1b08(0x08)
	struct UWBP_View_PlayerCard_CustomLobby_C* PlayerCard_CustomLobby; // 0x1b10(0x08)
	struct UWBP_Panel_VoiceIndicator_SpeakerIcon_C* WBP_Panel_VoiceIndicator_SpeakerIcon; // 0x1b18(0x08)
	bool bOnFocusPath; // 0x1b20(0x01)
	bool bShowHardEdge; // 0x1b21(0x01)
	bool bShowPlayerCardImage; // 0x1b22(0x01)
	bool bIsLocalPlayer; // 0x1b23(0x01)
	enum class BPE_CustomLobbyCellIconType IconDisplayType; // 0x1b24(0x01)
	char pad_1B25[0x3]; // 0x1b25(0x03)
	struct FLinearColor BackgroundColor; // 0x1b28(0x10)
	struct FLinearColor EdgeColor; // 0x1b38(0x10)
	struct FString CurrentPlayerSubject; // 0x1b48(0x10)
	struct FLinearColor FocusGradientColorTop; // 0x1b58(0x10)
	struct FLinearColor FocusGradientColorBottom; // 0x1b68(0x10)
	struct FLinearColor FocusBorderColor; // 0x1b78(0x10)
	struct FAresConditionalInputAction CIA_Select; // 0x1b88(0x28)
	struct FText ActionText_Invite; // 0x1bb0(0x18)
	struct FText ActionText_OpenPlayerMenu; // 0x1bc8(0x18)
	struct FText ActionText_MoveTeams; // 0x1be0(0x18)
	struct FText ActionText_EmptyCell; // 0x1bf8(0x18)

	void OpenContextMenu(); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.OpenContextMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateSelectCIA(); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.UpdateSelectCIA // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetShowPlayerCardImage(bool bShowPlayerCardImage); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.SetShowPlayerCardImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HasPlayer(bool& bHasPlayer); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.HasPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetPlayerSubject(struct FString& PlayerSubject); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.GetPlayerSubject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetPlayerSubject(struct FString PlayerSubject); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.SetPlayerSubject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIsLocalPlayer(bool bIsLocalPlayer); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.SetIsLocalPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetFocusColors(struct FLinearColor FocusColorGradientTop, struct FLinearColor FocusColorGradientBottom, struct FLinearColor FocusBorderColor); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.SetFocusColors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateVisualFocus(); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.UpdateVisualFocus // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIconDisplayType(enum class BPE_CustomLobbyCellIconType IconDisplayType); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.SetIconDisplayType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetShowHardEdge(bool bShow); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.SetShowHardEdge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetEdgeColor(struct FLinearColor EdgeColor); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.SetEdgeColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetBackgroundColor(struct FLinearColor BackgroundColor); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.SetBackgroundColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnButtonBaseHovered_Event_1(struct UCommonButtonBase* Button); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.OnButtonBaseHovered_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnButtonBaseClicked_Event_1(struct UCommonButtonBase* Button); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.OnButtonBaseClicked_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_CPanel_CustomGameTeamCell(int32_t EntryPoint); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.ExecuteUbergraph_WBP_CPanel_CustomGameTeamCell // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

