// WidgetBlueprintGeneratedClass LargeDetailedPlayerCardV3_PC.LargeDetailedPlayerCardV3_PC_C
// Size: 0x558 (Inherited: 0x36c)
struct ULargeDetailedPlayerCardV3_PC_C : ULargeDetailedPlayerCard_Base_C {
	char pad_36C[0x4]; // 0x36c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct UWidgetAnimation* IneligibleGlow; // 0x378(0x08)
	struct UWidgetAnimation* PlayerCardReveal_Member; // 0x380(0x08)
	struct UWidgetAnimation* PlayerCardReveal; // 0x388(0x08)
	struct UImage* Accent_BL; // 0x390(0x08)
	struct UImage* Accent_BR; // 0x398(0x08)
	struct UAccountLevel_C* AccountLevel; // 0x3a0(0x08)
	struct UCanvasPanel* AccountLevelCase; // 0x3a8(0x08)
	struct UImage* Au_P_BackGlow; // 0x3b0(0x08)
	struct UOverlay* Aura_Empty; // 0x3b8(0x08)
	struct UOverlay* Aura_Premier; // 0x3c0(0x08)
	struct UWidgetSwitcher* AuraSwitcher; // 0x3c8(0x08)
	struct UOverlay* CallingCardOverlay; // 0x3d0(0x08)
	struct UCompetitiveTierIconSmall_C* CompetitiveTierIconSmall; // 0x3d8(0x08)
	struct UImage* Diamond; // 0x3e0(0x08)
	struct UImage* diamond_other; // 0x3e8(0x08)
	struct UImage* diamond_other_2; // 0x3f0(0x08)
	struct UImage* diamond_other_3; // 0x3f8(0x08)
	struct UOverlay* Identifier_Member; // 0x400(0x08)
	struct UOverlay* Identifier_Self; // 0x408(0x08)
	struct UImage* Image_108; // 0x410(0x08)
	struct UImage* IneligibleGlowBottom; // 0x418(0x08)
	struct UImage* IneligibleGlowTop; // 0x420(0x08)
	struct UImage* L_Decoration; // 0x428(0x08)
	struct UImage* L_Plate_Glow; // 0x430(0x08)
	struct UImage* Left_2; // 0x438(0x08)
	struct UImage* Left_4; // 0x440(0x08)
	struct UImage* left_member_2; // 0x448(0x08)
	struct UImage* left_member_3; // 0x450(0x08)
	struct UImage* logofont_l; // 0x458(0x08)
	struct UImage* logofont_r; // 0x460(0x08)
	struct UWidgetSwitcher* MainBorder_Premier; // 0x468(0x08)
	struct UOverlay* MainBorder_Standard; // 0x470(0x08)
	struct UWidgetSwitcher* MainBorderSwitcher; // 0x478(0x08)
	struct UOverlay* MB_P_Basic; // 0x480(0x08)
	struct UOverlay* MB_P_Qualified; // 0x488(0x08)
	struct UWidgetSwitcher* MemberIdentifierSwitcher; // 0x490(0x08)
	struct UOverlay* NoRankNoLevel; // 0x498(0x08)
	struct UImage* OwnerIcon; // 0x4a0(0x08)
	struct UPlayerCard_C* PlayerCard; // 0x4a8(0x08)
	struct UCanvasPanel* PlayerInfo; // 0x4b0(0x08)
	struct UHorizontalBox* PlayerNameIneligible_Overlay; // 0x4b8(0x08)
	struct UPlayerNameWidget_C* PlayerNameWidget; // 0x4c0(0x08)
	struct UPlayerTitle_C* PlayerTitle; // 0x4c8(0x08)
	struct UImage* R_Decoration; // 0x4d0(0x08)
	struct UImage* R_Plate_Glow; // 0x4d8(0x08)
	struct UWidgetSwitcher* RankAndLevelSwitcher; // 0x4e0(0x08)
	struct UImage* Right_2; // 0x4e8(0x08)
	struct UImage* Right_4; // 0x4f0(0x08)
	struct UImage* right_member_2; // 0x4f8(0x08)
	struct UImage* right_member_3; // 0x500(0x08)
	struct USeasonWinBadge_C* SeasonWinBadge; // 0x508(0x08)
	struct UOverlay* SeasonWinBadgeOverlay; // 0x510(0x08)
	struct UImage* SelfBar; // 0x518(0x08)
	struct UImage* Shadow; // 0x520(0x08)
	struct UTextBlock* StatusText; // 0x528(0x08)
	struct UOverlay* TB_Filled; // 0x530(0x08)
	struct UHorizontalBox* TB_Gap; // 0x538(0x08)
	struct UImage* TopBar; // 0x540(0x08)
	struct UWidgetSwitcher* TopBorderSwitcher; // 0x548(0x08)
	struct UWBP_VoiceSpeakerButton_Icon_Desktop_C* WBP_VoiceSpeakerButton_Icon_Desktop; // 0x550(0x08)

	void UpdateAura(); // Function LargeDetailedPlayerCardV3_PC.LargeDetailedPlayerCardV3_PC_C.UpdateAura // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetTopBorderColor(bool Is Premier Prestige); // Function LargeDetailedPlayerCardV3_PC.LargeDetailedPlayerCardV3_PC_C.SetTopBorderColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateBorder(); // Function LargeDetailedPlayerCardV3_PC.LargeDetailedPlayerCardV3_PC_C.UpdateBorder // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayRevealAnimation(); // Function LargeDetailedPlayerCardV3_PC.LargeDetailedPlayerCardV3_PC_C.PlayRevealAnimation // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DisplaySubject(struct FPlatformPlayerSubject Subject, bool IsSelf); // Function LargeDetailedPlayerCardV3_PC.LargeDetailedPlayerCardV3_PC_C.DisplaySubject // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateAllWidgets(); // Function LargeDetailedPlayerCardV3_PC.LargeDetailedPlayerCardV3_PC_C.UpdateAllWidgets // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePlayerInfoVisibility(); // Function LargeDetailedPlayerCardV3_PC.LargeDetailedPlayerCardV3_PC_C.UpdatePlayerInfoVisibility // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateEligibilityAndSelfDisplay(); // Function LargeDetailedPlayerCardV3_PC.LargeDetailedPlayerCardV3_PC_C.UpdateEligibilityAndSelfDisplay // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitAccountLevel(); // Function LargeDetailedPlayerCardV3_PC.LargeDetailedPlayerCardV3_PC_C.InitAccountLevel // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateIneligibilityTooltip(); // Function LargeDetailedPlayerCardV3_PC.LargeDetailedPlayerCardV3_PC_C.UpdateIneligibilityTooltip // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateQueue(); // Function LargeDetailedPlayerCardV3_PC.LargeDetailedPlayerCardV3_PC_C.UpdateQueue // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateCompetitiveTier(); // Function LargeDetailedPlayerCardV3_PC.LargeDetailedPlayerCardV3_PC_C.UpdateCompetitiveTier // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePlayerNameText(); // Function LargeDetailedPlayerCardV3_PC.LargeDetailedPlayerCardV3_PC_C.UpdatePlayerNameText // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateStatusText(); // Function LargeDetailedPlayerCardV3_PC.LargeDetailedPlayerCardV3_PC_C.UpdateStatusText // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateIsOwner(); // Function LargeDetailedPlayerCardV3_PC.LargeDetailedPlayerCardV3_PC_C.UpdateIsOwner // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function LargeDetailedPlayerCardV3_PC.LargeDetailedPlayerCardV3_PC_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnSeasonWinBadeVisibilityChanged(bool IsVisible); // Function LargeDetailedPlayerCardV3_PC.LargeDetailedPlayerCardV3_PC_C.OnSeasonWinBadeVisibilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_LargeDetailedPlayerCardV3_PC(int32_t EntryPoint); // Function LargeDetailedPlayerCardV3_PC.LargeDetailedPlayerCardV3_PC_C.ExecuteUbergraph_LargeDetailedPlayerCardV3_PC // (Final|UbergraphFunction) // @ game+0x19be2f0
};

