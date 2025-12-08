// WidgetBlueprintGeneratedClass Esports_BracketTeamPanel_Small.Esports_BracketTeamPanel_Small_C
// Size: 0x4d8 (Inherited: 0x3e0)
struct UEsports_BracketTeamPanel_Small_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWidgetAnimation* OnTeamNameDisplayed; // 0x3e8(0x08)
	struct UAresCommonText* CT_TeamCode; // 0x3f0(0x08)
	struct UAresCommonText* CT_TournamentScore; // 0x3f8(0x08)
	struct UOverlay* Dots; // 0x400(0x08)
	struct UImage* Image; // 0x408(0x08)
	struct UImage* Image_96; // 0x410(0x08)
	struct UImage* IMG_BG; // 0x418(0x08)
	struct UImage* IMG_TeamLogo; // 0x420(0x08)
	struct UOverlay* O_TeamCode; // 0x428(0x08)
	struct UOverlay* O_WS_TournamentEntryWrap; // 0x430(0x08)
	struct USizeBox* SB_MainWrap; // 0x438(0x08)
	struct USharedBlurBg_C* SharedBlurBg; // 0x440(0x08)
	struct UHorizontalBox* TeamInfoWrapper; // 0x448(0x08)
	struct UWidgetSwitcher* WS_StateSwitcher; // 0x450(0x08)
	bool isAnimExitPending; // 0x458(0x01)
	bool IsHovering; // 0x459(0x01)
	char pad_45A[0x6]; // 0x45a(0x06)
	struct UTexture* TBDlogo; // 0x460(0x08)
	bool isTeamCardAtBottom; // 0x468(0x01)
	char pad_469[0x7]; // 0x469(0x07)
	struct UEsportsMatchupTeamViewModel* TeamViewModel; // 0x470(0x08)
	enum class EBracketType BracketType; // 0x478(0x01)
	char pad_479[0x7]; // 0x479(0x07)
	struct UEsportsMatchupTeamViewModelV2* TeamViewModel2; // 0x480(0x08)
	struct FLinearColor BGColorSwiss; // 0x488(0x10)
	struct FLinearColor Color_Winner; // 0x498(0x10)
	struct FLinearColor ColorElimnation_NoScore; // 0x4a8(0x10)
	struct FLinearColor ColorElimnation_LoserScore; // 0x4b8(0x10)
	struct FLinearColor ColorSwiss_Score; // 0x4c8(0x10)

	void StyleBracketEntrySwissV2(enum class EMatchupTeamStatus TeamStatus); // Function Esports_BracketTeamPanel_Small.Esports_BracketTeamPanel_Small_C.StyleBracketEntrySwissV2 // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StyleBracketEntryEliminationV2(enum class EMatchupTeamStatus TeamStatus); // Function Esports_BracketTeamPanel_Small.Esports_BracketTeamPanel_Small_C.StyleBracketEntryEliminationV2 // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StyleBracketEntryV2(enum class EMatchupTeamStatus TeamStatus); // Function Esports_BracketTeamPanel_Small.Esports_BracketTeamPanel_Small_C.StyleBracketEntryV2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMatchupTeamStatusChanged(enum class EMatchupTeamStatus& TeamStatus); // Function Esports_BracketTeamPanel_Small.Esports_BracketTeamPanel_Small_C.OnMatchupTeamStatusChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitWithViewModelV2(struct UEsportsMatchupTeamViewModelV2* InVeiwModel, enum class EBracketType InBracketType); // Function Esports_BracketTeamPanel_Small.Esports_BracketTeamPanel_Small_C.InitWithViewModelV2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetBracketType(enum class EBracketType InBracketType); // Function Esports_BracketTeamPanel_Small.Esports_BracketTeamPanel_Small_C.SetBracketType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StyleBracketEntry(enum class EMatchupTeamState TeamState); // Function Esports_BracketTeamPanel_Small.Esports_BracketTeamPanel_Small_C.StyleBracketEntry // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetTeamState(enum class EMatchupTeamState State); // Function Esports_BracketTeamPanel_Small.Esports_BracketTeamPanel_Small_C.SetTeamState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTeamLogoChanged(struct UTexture2D* InTeamLogo); // Function Esports_BracketTeamPanel_Small.Esports_BracketTeamPanel_Small_C.OnTeamLogoChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTeamCodeChanged(struct FString InCode); // Function Esports_BracketTeamPanel_Small.Esports_BracketTeamPanel_Small_C.OnTeamCodeChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnGameWinsChanged(int32_t GameWins); // Function Esports_BracketTeamPanel_Small.Esports_BracketTeamPanel_Small_C.OnGameWinsChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Style Bottom Team Score(); // Function Esports_BracketTeamPanel_Small.Esports_BracketTeamPanel_Small_C.Style Bottom Team Score // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StyleBracketEntryElimination(enum class EMatchupTeamState TeamState); // Function Esports_BracketTeamPanel_Small.Esports_BracketTeamPanel_Small_C.StyleBracketEntryElimination // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StyleBracketEntrySwiss(enum class EMatchupTeamState TeamState); // Function Esports_BracketTeamPanel_Small.Esports_BracketTeamPanel_Small_C.StyleBracketEntrySwiss // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Toggle Team Name Visibility(bool Should Show Name); // Function Esports_BracketTeamPanel_Small.Esports_BracketTeamPanel_Small_C.Toggle Team Name Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToOrUnbindFromViewModel(bool ShouldBind); // Function Esports_BracketTeamPanel_Small.Esports_BracketTeamPanel_Small_C.BindToOrUnbindFromViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitWithViewModel(struct UEsportsMatchupTeamViewModel* InTeamViewModel, enum class EBracketType BracketType); // Function Esports_BracketTeamPanel_Small.Esports_BracketTeamPanel_Small_C.InitWithViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function Esports_BracketTeamPanel_Small.Esports_BracketTeamPanel_Small_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function Esports_BracketTeamPanel_Small.Esports_BracketTeamPanel_Small_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void K2_BindToViewModel(); // Function Esports_BracketTeamPanel_Small.Esports_BracketTeamPanel_Small_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function Esports_BracketTeamPanel_Small.Esports_BracketTeamPanel_Small_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Esports_BracketTeamPanel_Small(int32_t EntryPoint); // Function Esports_BracketTeamPanel_Small.Esports_BracketTeamPanel_Small_C.ExecuteUbergraph_Esports_BracketTeamPanel_Small // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

