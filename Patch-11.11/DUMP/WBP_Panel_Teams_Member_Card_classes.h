// WidgetBlueprintGeneratedClass WBP_Panel_Teams_Member_Card.WBP_Panel_Teams_Member_Card_C
// Size: 0x1be8 (Inherited: 0x1ae0)
struct UWBP_Panel_Teams_Member_Card_C : UAresClickablePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UWidgetAnimation* Defocus; // 0x1ae8(0x08)
	struct UWidgetAnimation* FocusState; // 0x1af0(0x08)
	struct UWidgetAnimation* Fadein_First; // 0x1af8(0x08)
	struct UWidgetAnimation* FadeIn; // 0x1b00(0x08)
	struct UWBP_Button_BasicText_C* Button_CursorBlocker; // 0x1b08(0x08)
	struct UAresCommonText* CT_FullName; // 0x1b10(0x08)
	struct UAresCommonText* CT_IngameName; // 0x1b18(0x08)
	struct UAresCommonText* CT_MemberRole; // 0x1b20(0x08)
	struct UEsports_Loading_C* EsportsLoadingThrobber; // 0x1b28(0x08)
	struct UImage* Gradient; // 0x1b30(0x08)
	struct UHorizontalBox* HorizontalBox_1; // 0x1b38(0x08)
	struct UImage* Image_145; // 0x1b40(0x08)
	struct UImage* Image_166; // 0x1b48(0x08)
	struct UImage* Image_176; // 0x1b50(0x08)
	struct UImage* Image_PlayerPhoto; // 0x1b58(0x08)
	struct USizeBox* LoadingIndicator; // 0x1b60(0x08)
	struct UOverlay* MemberRoleOverlay; // 0x1b68(0x08)
	struct UImage* Strip; // 0x1b70(0x08)
	struct UImage* StripGlow; // 0x1b78(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x1b80(0x08)
	struct UMaterial* LoadingImage; // 0x1b88(0x08)
	struct UEsportsTeamMemberViewModel* TeamMemberViewModel; // 0x1b90(0x08)
	struct UEsportsPlayerStatsModel* PlayerStatsModel; // 0x1b98(0x08)
	struct UTexture2D* PortraitTexture; // 0x1ba0(0x08)
	bool PlayerStatsEnabled; // 0x1ba8(0x01)
	char pad_1BA9[0x7]; // 0x1ba9(0x07)
	struct UWBP_Panel_Teams_PlayerStatsPopup_C* PlayerStatsPopupWidget; // 0x1bb0(0x08)
	bool PlayerRolesEnabled; // 0x1bb8(0x01)
	char pad_1BB9[0x7]; // 0x1bb9(0x07)
	struct UEsportsTeamMemberViewModelV2* TeamMemberViewModelV2; // 0x1bc0(0x08)
	struct FMulticastInlineDelegate OnHasValidDataLoadedChanged; // 0x1bc8(0x10)
	struct FMulticastInlineDelegate OnError; // 0x1bd8(0x10)

	void OnRoleTypesChanged(struct TArray<enum class EEsportsTeamMemberRole>& RoleTypes); // Function WBP_Panel_Teams_Member_Card.WBP_Panel_Teams_Member_Card_C.OnRoleTypesChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTeamMemberError(); // Function WBP_Panel_Teams_Member_Card.WBP_Panel_Teams_Member_Card_C.OnTeamMemberError // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnHasValidDataChanged(bool bHasValidData); // Function WBP_Panel_Teams_Member_Card.WBP_Panel_Teams_Member_Card_C.OnHasValidDataChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnNameUpdated(struct FString Name); // Function WBP_Panel_Teams_Member_Card.WBP_Panel_Teams_Member_Card_C.OnNameUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetTeamMember(struct FString TeamID, struct FString TeamMemberID); // Function WBP_Panel_Teams_Member_Card.WBP_Panel_Teams_Member_Card_C.SetTeamMember // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnHandleUpdated(struct FString InHandle); // Function WBP_Panel_Teams_Member_Card.WBP_Panel_Teams_Member_Card_C.OnHandleUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRolesUpdated(struct TArray<struct FString>& MemberRoles); // Function WBP_Panel_Teams_Member_Card.WBP_Panel_Teams_Member_Card_C.OnRolesUpdated // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPortraitUpdated(struct UTexture2D* PortraitTexture); // Function WBP_Panel_Teams_Member_Card.WBP_Panel_Teams_Member_Card_C.OnPortraitUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnFullNameUpdated(struct FString FirstName, struct FString LastName); // Function WBP_Panel_Teams_Member_Card.WBP_Panel_Teams_Member_Card_C.OnFullNameUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindOrUnbindEvents(bool Bind); // Function WBP_Panel_Teams_Member_Card.WBP_Panel_Teams_Member_Card_C.BindOrUnbindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Team Member Model(struct UTeamMemberModel* TeamMember); // Function WBP_Panel_Teams_Member_Card.WBP_Panel_Teams_Member_Card_C.Set Team Member Model // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function WBP_Panel_Teams_Member_Card.WBP_Panel_Teams_Member_Card_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function WBP_Panel_Teams_Member_Card.WBP_Panel_Teams_Member_Card_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void K2_BindToViewModel(); // Function WBP_Panel_Teams_Member_Card.WBP_Panel_Teams_Member_Card_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnClicked(); // Function WBP_Panel_Teams_Member_Card.WBP_Panel_Teams_Member_Card_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnHovered(); // Function WBP_Panel_Teams_Member_Card.WBP_Panel_Teams_Member_Card_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnUnhovered(); // Function WBP_Panel_Teams_Member_Card.WBP_Panel_Teams_Member_Card_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Panel_Teams_Member_Card(int32_t EntryPoint); // Function WBP_Panel_Teams_Member_Card.WBP_Panel_Teams_Member_Card_C.ExecuteUbergraph_WBP_Panel_Teams_Member_Card // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnError__DelegateSignature(); // Function WBP_Panel_Teams_Member_Card.WBP_Panel_Teams_Member_Card_C.OnError__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnHasValidDataLoadedChanged__DelegateSignature(struct UWBP_Panel_Teams_Member_Card_C* Widget, bool bLoadingCompleted); // Function WBP_Panel_Teams_Member_Card.WBP_Panel_Teams_Member_Card_C.OnHasValidDataLoadedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

