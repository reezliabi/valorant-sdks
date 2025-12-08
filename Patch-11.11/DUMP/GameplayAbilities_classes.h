// Class GameplayAbilities.AbilitySystemDebugHUD
// Size: 0x560 (Inherited: 0x560)
struct AAbilitySystemDebugHUD : AHUD {
};

// Class GameplayAbilities.GameplayEffect
// Size: 0xbb8 (Inherited: 0x30)
struct UGameplayEffect : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	enum class EGameplayEffectDurationType DurationPolicy; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FGameplayEffectModifierMagnitude DurationMagnitude; // 0x40(0x2f0)
	struct FScalableFloat Period; // 0x330(0x38)
	bool bExecutePeriodicEffectOnApplication; // 0x368(0x01)
	enum class EGameplayEffectPeriodInhibitionRemovedPolicy PeriodicInhibitionPolicy; // 0x369(0x01)
	char pad_36A[0x6]; // 0x36a(0x06)
	struct TArray<struct FGameplayModifierInfo> Modifiers; // 0x370(0x10)
	struct TArray<struct FGameplayEffectExecutionDefinition> Executions; // 0x380(0x10)
	struct FScalableFloat ChanceToApplyToTarget; // 0x390(0x38)
	struct TArray<struct UGameplayEffectCustomApplicationRequirement*> ApplicationRequirements; // 0x3c8(0x10)
	struct TArray<struct FConditionalGameplayEffect> ConditionalGameplayEffects; // 0x3d8(0x10)
	struct TArray<struct UGameplayEffect*> OverflowEffects; // 0x3e8(0x10)
	bool bDenyOverflowApplication; // 0x3f8(0x01)
	bool bClearStackOnOverflow; // 0x3f9(0x01)
	char pad_3FA[0x6]; // 0x3fa(0x06)
	struct TArray<struct UGameplayEffect*> PrematureExpirationEffectClasses; // 0x400(0x10)
	struct TArray<struct UGameplayEffect*> RoutineExpirationEffectClasses; // 0x410(0x10)
	bool bRequireModifierSuccessToTriggerCues; // 0x420(0x01)
	bool bSuppressStackingCues; // 0x421(0x01)
	char pad_422[0x6]; // 0x422(0x06)
	struct TArray<struct FGameplayEffectCue> GameplayCues; // 0x428(0x10)
	struct UGameplayEffectUIData* UIData; // 0x438(0x08)
	struct FInheritedTagContainer InheritableGameplayEffectTags; // 0x440(0x60)
	struct FInheritedTagContainer InheritableOwnedTagsContainer; // 0x4a0(0x60)
	struct FInheritedTagContainer InheritableBlockedAbilityTagsContainer; // 0x500(0x60)
	struct FGameplayTagRequirements OngoingTagRequirements; // 0x560(0x88)
	struct FGameplayTagRequirements ApplicationTagRequirements; // 0x5e8(0x88)
	struct FGameplayTagRequirements RemovalTagRequirements; // 0x670(0x88)
	struct FInheritedTagContainer RemoveGameplayEffectsWithTags; // 0x6f8(0x60)
	struct FGameplayTagRequirements GrantedApplicationImmunityTags; // 0x758(0x88)
	struct FGameplayEffectQuery GrantedApplicationImmunityQuery; // 0x7e0(0x1a0)
	char pad_980[0x8]; // 0x980(0x08)
	struct FGameplayEffectQuery RemoveGameplayEffectQuery; // 0x988(0x1a0)
	char pad_B28[0x1]; // 0xb28(0x01)
	enum class EGameplayEffectStackingType StackingType; // 0xb29(0x01)
	char pad_B2A[0x2]; // 0xb2a(0x02)
	int32_t StackLimitCount; // 0xb2c(0x04)
	enum class EGameplayEffectStackingDurationPolicy StackDurationRefreshPolicy; // 0xb30(0x01)
	enum class EGameplayEffectStackingPeriodPolicy StackPeriodResetPolicy; // 0xb31(0x01)
	enum class EGameplayEffectStackingExpirationPolicy StackExpirationPolicy; // 0xb32(0x01)
	char pad_B33[0x5]; // 0xb33(0x05)
	struct TArray<struct FGameplayAbilitySpecDef> GrantedAbilities; // 0xb38(0x10)
	char pad_B48[0x60]; // 0xb48(0x60)
	struct TArray<struct UGameplayEffectComponent*> GEComponents; // 0xba8(0x10)
};

// Class GameplayAbilities.GameplayEffectComponent
// Size: 0x30 (Inherited: 0x30)
struct UGameplayEffectComponent : UObject {
};

// Class GameplayAbilities.AbilitiesGameplayEffectComponent
// Size: 0x40 (Inherited: 0x30)
struct UAbilitiesGameplayEffectComponent : UGameplayEffectComponent {
	struct TArray<struct FGameplayAbilitySpecConfig> GrantAbilityConfigs; // 0x30(0x10)
};

// Class GameplayAbilities.AdditionalEffectsGameplayEffectComponent
// Size: 0x78 (Inherited: 0x30)
struct UAdditionalEffectsGameplayEffectComponent : UGameplayEffectComponent {
	bool bOnApplicationCopyDataFromOriginalSpec; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<struct FConditionalGameplayEffect> OnApplicationGameplayEffects; // 0x38(0x10)
	struct TArray<struct UGameplayEffect*> OnCompleteAlways; // 0x48(0x10)
	struct TArray<struct UGameplayEffect*> OnCompleteNormal; // 0x58(0x10)
	struct TArray<struct UGameplayEffect*> OnCompletePrematurely; // 0x68(0x10)
};

// Class GameplayAbilities.AssetTagsGameplayEffectComponent
// Size: 0x90 (Inherited: 0x30)
struct UAssetTagsGameplayEffectComponent : UGameplayEffectComponent {
	struct FInheritedTagContainer InheritableAssetTags; // 0x30(0x60)
};

// Class GameplayAbilities.BlockAbilityTagsGameplayEffectComponent
// Size: 0x90 (Inherited: 0x30)
struct UBlockAbilityTagsGameplayEffectComponent : UGameplayEffectComponent {
	struct FInheritedTagContainer InheritableBlockedAbilityTagsContainer; // 0x30(0x60)
};

// Class GameplayAbilities.ChanceToApplyGameplayEffectComponent
// Size: 0x68 (Inherited: 0x30)
struct UChanceToApplyGameplayEffectComponent : UGameplayEffectComponent {
	struct FScalableFloat ChanceToApplyToTarget; // 0x30(0x38)
};

// Class GameplayAbilities.CustomCanApplyGameplayEffectComponent
// Size: 0x40 (Inherited: 0x30)
struct UCustomCanApplyGameplayEffectComponent : UGameplayEffectComponent {
	struct TArray<struct UGameplayEffectCustomApplicationRequirement*> ApplicationRequirements; // 0x30(0x10)
};

// Class GameplayAbilities.GameplayEffectUIData
// Size: 0x30 (Inherited: 0x30)
struct UGameplayEffectUIData : UGameplayEffectComponent {
};

// Class GameplayAbilities.GameplayEffectUIData_TextOnly
// Size: 0x48 (Inherited: 0x30)
struct UGameplayEffectUIData_TextOnly : UGameplayEffectUIData {
	struct FText Description; // 0x30(0x18)
};

// Class GameplayAbilities.ImmunityGameplayEffectComponent
// Size: 0x40 (Inherited: 0x30)
struct UImmunityGameplayEffectComponent : UGameplayEffectComponent {
	struct TArray<struct FGameplayEffectQuery> ImmunityQueries; // 0x30(0x10)
};

// Class GameplayAbilities.RemoveOtherGameplayEffectComponent
// Size: 0x40 (Inherited: 0x30)
struct URemoveOtherGameplayEffectComponent : UGameplayEffectComponent {
	struct TArray<struct FGameplayEffectQuery> RemoveGameplayEffectQueries; // 0x30(0x10)
};

// Class GameplayAbilities.TargetTagRequirementsGameplayEffectComponent
// Size: 0x1c8 (Inherited: 0x30)
struct UTargetTagRequirementsGameplayEffectComponent : UGameplayEffectComponent {
	struct FGameplayTagRequirements ApplicationTagRequirements; // 0x30(0x88)
	struct FGameplayTagRequirements OngoingTagRequirements; // 0xb8(0x88)
	struct FGameplayTagRequirements RemovalTagRequirements; // 0x140(0x88)
};

// Class GameplayAbilities.TargetTagsGameplayEffectComponent
// Size: 0x90 (Inherited: 0x30)
struct UTargetTagsGameplayEffectComponent : UGameplayEffectComponent {
	struct FInheritedTagContainer InheritableGrantedTagsContainer; // 0x30(0x60)
};

// Class GameplayAbilities.AbilityAsync
// Size: 0x40 (Inherited: 0x38)
struct UAbilityAsync : UCancellableAsyncAction {
	char pad_38[0x8]; // 0x38(0x08)

	void EndAction(); // Function GameplayAbilities.AbilityAsync.EndAction // (Native|Public|BlueprintCallable) // @ game+0x3dfae00
};

// Class GameplayAbilities.AbilityAsync_WaitAttributeChanged
// Size: 0x98 (Inherited: 0x40)
struct UAbilityAsync_WaitAttributeChanged : UAbilityAsync {
	struct FMulticastInlineDelegate Changed; // 0x40(0x10)
	char pad_50[0x48]; // 0x50(0x48)

	struct UAbilityAsync_WaitAttributeChanged* WaitForAttributeChanged(struct AActor* TargetActor, struct FGameplayAttribute Attribute, bool OnlyTriggerOnce); // Function GameplayAbilities.AbilityAsync_WaitAttributeChanged.WaitForAttributeChanged // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b2e0b0
	void AsyncWaitAttributeChangedDelegate__DelegateSignature(struct FGameplayAttribute Attribute, float NewValue, float OldValue); // DelegateFunction GameplayAbilities.AbilityAsync_WaitAttributeChanged.AsyncWaitAttributeChangedDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x19be2f0
};

// Class GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied
// Size: 0x190 (Inherited: 0x40)
struct UAbilityAsync_WaitGameplayEffectApplied : UAbilityAsync {
	struct FMulticastInlineDelegate OnApplied; // 0x40(0x10)
	char pad_50[0x140]; // 0x50(0x140)

	struct UAbilityAsync_WaitGameplayEffectApplied* WaitGameplayEffectAppliedToActor(struct AActor* TargetActor, struct FGameplayTargetDataFilterHandle SourceFilter, struct FGameplayTagRequirements SourceTagRequirements, struct FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, bool ListenForPeriodicEffect); // Function GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied.WaitGameplayEffectAppliedToActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b2ec10
	void OnAppliedDelegate__DelegateSignature(struct AActor* Source, struct FGameplayEffectSpecHandle SpecHandle, struct FActiveGameplayEffectHandle ActiveHandle); // DelegateFunction GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied.OnAppliedDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x19be2f0
};

// Class GameplayAbilities.AbilityAsync_WaitGameplayEvent
// Size: 0x68 (Inherited: 0x40)
struct UAbilityAsync_WaitGameplayEvent : UAbilityAsync {
	struct FMulticastInlineDelegate EventReceived; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)

	struct UAbilityAsync_WaitGameplayEvent* WaitGameplayEventToActor(struct AActor* TargetActor, struct FGameplayTag EventTag, bool OnlyTriggerOnce, bool OnlyMatchExact); // Function GameplayAbilities.AbilityAsync_WaitGameplayEvent.WaitGameplayEventToActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b30980
	void EventReceivedDelegate__DelegateSignature(struct FGameplayEventData Payload); // DelegateFunction GameplayAbilities.AbilityAsync_WaitGameplayEvent.EventReceivedDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x19be2f0
};

// Class GameplayAbilities.AbilityAsync_WaitGameplayTag
// Size: 0x60 (Inherited: 0x40)
struct UAbilityAsync_WaitGameplayTag : UAbilityAsync {
	char pad_40[0x20]; // 0x40(0x20)
};

// Class GameplayAbilities.AbilityAsync_WaitGameplayTagAdded
// Size: 0x70 (Inherited: 0x60)
struct UAbilityAsync_WaitGameplayTagAdded : UAbilityAsync_WaitGameplayTag {
	struct FMulticastInlineDelegate Added; // 0x60(0x10)

	struct UAbilityAsync_WaitGameplayTagAdded* WaitGameplayTagAddToActor(struct AActor* TargetActor, struct FGameplayTag Tag, bool OnlyTriggerOnce); // Function GameplayAbilities.AbilityAsync_WaitGameplayTagAdded.WaitGameplayTagAddToActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b31830
};

// Class GameplayAbilities.AbilityAsync_WaitGameplayTagRemoved
// Size: 0x70 (Inherited: 0x60)
struct UAbilityAsync_WaitGameplayTagRemoved : UAbilityAsync_WaitGameplayTag {
	struct FMulticastInlineDelegate Removed; // 0x60(0x10)

	struct UAbilityAsync_WaitGameplayTagRemoved* WaitGameplayTagRemoveFromActor(struct AActor* TargetActor, struct FGameplayTag Tag, bool OnlyTriggerOnce); // Function GameplayAbilities.AbilityAsync_WaitGameplayTagRemoved.WaitGameplayTagRemoveFromActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b31cc0
};

// Class GameplayAbilities.AbilityAsync_WaitGameplayTagQuery
// Size: 0x110 (Inherited: 0x40)
struct UAbilityAsync_WaitGameplayTagQuery : UAbilityAsync {
	char pad_40[0xc0]; // 0x40(0xc0)
	struct FMulticastInlineDelegate Triggered; // 0x100(0x10)

	struct UAbilityAsync_WaitGameplayTagQuery* WaitGameplayTagQueryOnActor(struct AActor* TargetActor, struct FGameplayTagQuery TagQuery, enum class EWaitGameplayTagQueryTriggerCondition triggerCondition, bool bOnlyTriggerOnce); // Function GameplayAbilities.AbilityAsync_WaitGameplayTagQuery.WaitGameplayTagQueryOnActor // (Final|Native|Static|Protected|BlueprintCallable) // @ game+0x4b32670
};

// Class GameplayAbilities.GameplayAbility
// Size: 0x3c8 (Inherited: 0x30)
struct UGameplayAbility : UObject {
	char pad_30[0x80]; // 0x30(0x80)
	struct FGameplayTagContainer AbilityTags; // 0xb0(0x20)
	bool bReplicateInputDirectly; // 0xd0(0x01)
	bool RemoteInstanceEnded; // 0xd1(0x01)
	char pad_D2[0x4]; // 0xd2(0x04)
	enum class EGameplayAbilityReplicationPolicy ReplicationPolicy; // 0xd6(0x01)
	enum class EGameplayAbilityInstancingPolicy InstancingPolicy; // 0xd7(0x01)
	bool bServerRespectsRemoteAbilityCancellation; // 0xd8(0x01)
	bool bRetriggerInstancedAbility; // 0xd9(0x01)
	char pad_DA[0x6]; // 0xda(0x06)
	struct FGameplayAbilityActivationInfo CurrentActivationInfo; // 0xe0(0x20)
	struct FGameplayEventData CurrentEventData; // 0x100(0xb8)
	enum class EGameplayAbilityNetExecutionPolicy NetExecutionPolicy; // 0x1b8(0x01)
	enum class EGameplayAbilityNetSecurityPolicy NetSecurityPolicy; // 0x1b9(0x01)
	char pad_1BA[0x6]; // 0x1ba(0x06)
	struct UGameplayEffect* CostGameplayEffectClass; // 0x1c0(0x08)
	struct TArray<struct FAbilityTriggerData> AbilityTriggers; // 0x1c8(0x10)
	struct UGameplayEffect* CooldownGameplayEffectClass; // 0x1d8(0x08)
	struct FGameplayTagContainer CancelAbilitiesWithTag; // 0x1e0(0x20)
	struct FGameplayTagContainer BlockAbilitiesWithTag; // 0x200(0x20)
	struct FGameplayTagContainer ActivationOwnedTags; // 0x220(0x20)
	struct FGameplayTagContainer ActivationRequiredTags; // 0x240(0x20)
	struct FGameplayTagContainer ActivationBlockedTags; // 0x260(0x20)
	struct FGameplayTagContainer SourceRequiredTags; // 0x280(0x20)
	struct FGameplayTagContainer SourceBlockedTags; // 0x2a0(0x20)
	struct FGameplayTagContainer TargetRequiredTags; // 0x2c0(0x20)
	struct FGameplayTagContainer TargetBlockedTags; // 0x2e0(0x20)
	char pad_300[0x20]; // 0x300(0x20)
	struct TArray<struct UGameplayTask*> ActiveTasks; // 0x320(0x10)
	char pad_330[0x10]; // 0x330(0x10)
	struct UAnimMontage* CurrentMontage; // 0x340(0x08)
	char pad_348[0x60]; // 0x348(0x60)
	bool bIsActive; // 0x3a8(0x01)
	bool bIsAbilityEnding; // 0x3a9(0x01)
	bool bIsCancelable; // 0x3aa(0x01)
	bool bIsBlockingOtherAbilities; // 0x3ab(0x01)
	char pad_3AC[0x14]; // 0x3ac(0x14)
	bool bMarkPendingKillOnAbilityEnd; // 0x3c0(0x01)
	char pad_3C1[0x7]; // 0x3c1(0x07)

	void SetShouldBlockOtherAbilities(bool bShouldBlockAbilities); // Function GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities // (Native|Public|BlueprintCallable) // @ game+0x4b379c0
	void SetCanBeCanceled(bool bCanBeCanceled); // Function GameplayAbilities.GameplayAbility.SetCanBeCanceled // (Native|Public|BlueprintCallable) // @ game+0x4b37860
	void SendGameplayEvent(struct FGameplayTag EventTag, struct FGameplayEventData Payload); // Function GameplayAbilities.GameplayAbility.SendGameplayEvent // (Native|Protected|BlueprintCallable) // @ game+0x4b36bd0
	void RemoveGrantedByEffect(); // Function GameplayAbilities.GameplayAbility.RemoveGrantedByEffect // (Native|Public|BlueprintCallable) // @ game+0x4b36ff0
	void MontageStop(float OverrideBlendOutTime); // Function GameplayAbilities.GameplayAbility.MontageStop // (Final|Native|Protected|BlueprintCallable) // @ game+0x4b33da0
	void MontageSetNextSectionName(struct FName FromSectionName, struct FName ToSectionName); // Function GameplayAbilities.GameplayAbility.MontageSetNextSectionName // (Final|Native|Protected|BlueprintCallable) // @ game+0x4b33ed0
	void MontageJumpToSection(struct FName SectionName); // Function GameplayAbilities.GameplayAbility.MontageJumpToSection // (Final|Native|Protected|BlueprintCallable) // @ game+0x4b340f0
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(struct FName SocketName); // Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent // (Final|Native|Protected|BlueprintCallable|BlueprintPure) // @ game+0x4b33a80
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerActor(); // Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor // (Final|Native|Protected|BlueprintCallable|BlueprintPure) // @ game+0x4b33c70
	struct FGameplayEffectSpecHandle MakeOutgoingGameplayEffectSpec(struct UGameplayEffect* GameplayEffectClass, float Level); // Function GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4b37bb0
	bool K2_ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayEventData Payload); // Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent // (Event|Protected|BlueprintEvent|Const) // @ game+0x19be2f0
	void K2_RemoveGameplayCue(struct FGameplayTag GameplayCueTag); // Function GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue // (Native|Protected|BlueprintCallable) // @ game+0x4b34870
	void K2_OnEndAbility(bool bWasCancelled); // Function GameplayAbilities.GameplayAbility.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	bool K2_HasAuthority(); // Function GameplayAbilities.GameplayAbility.K2_HasAuthority // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x4b37b20
	void K2_ExecuteGameplayCueWithParams(struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters& GameplayCueParameters); // Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams // (Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x4b35060
	void K2_ExecuteGameplayCue(struct FGameplayTag GameplayCueTag, struct FGameplayEffectContextHandle Context); // Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue // (Native|Protected|BlueprintCallable) // @ game+0x4b353d0
	void K2_EndAbilityLocally(); // Function GameplayAbilities.GameplayAbility.K2_EndAbilityLocally // (Native|Protected|BlueprintCallable) // @ game+0x3df8e10
	void K2_EndAbility(); // Function GameplayAbilities.GameplayAbility.K2_EndAbility // (Native|Protected|BlueprintCallable) // @ game+0x3df8e40
	void K2_CommitExecute(); // Function GameplayAbilities.GameplayAbility.K2_CommitExecute // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	bool K2_CommitAbilityCost(bool BroadcastCommitEvent); // Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCost // (Native|Public|BlueprintCallable) // @ game+0x4b375a0
	bool K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown); // Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown // (Native|Public|BlueprintCallable) // @ game+0x4b376b0
	bool K2_CommitAbility(); // Function GameplayAbilities.GameplayAbility.K2_CommitAbility // (Native|Public|BlueprintCallable) // @ game+0x3a026a0
	bool K2_CheckAbilityCost(); // Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCost // (Native|Public|BlueprintCallable) // @ game+0x4b37520
	bool K2_CheckAbilityCooldown(); // Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown // (Native|Public|BlueprintCallable) // @ game+0x4b37560
	void K2_CancelAbility(); // Function GameplayAbilities.GameplayAbility.K2_CancelAbility // (Final|Native|Public|BlueprintCallable) // @ game+0x4b37960
	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayAbilitySpecHandle Handle, struct FGameplayTagContainer& RelevantTags); // Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility // (Event|Protected|HasOutParms|BlueprintEvent|Const) // @ game+0x19be2f0
	struct TArray<struct FActiveGameplayEffectHandle> K2_ApplyGameplayEffectSpecToTarget(struct FGameplayEffectSpecHandle EffectSpecHandle, struct FGameplayAbilityTargetDataHandle TargetData); // Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget // (Final|Native|Protected|BlueprintCallable) // @ game+0x4b35f80
	struct FActiveGameplayEffectHandle K2_ApplyGameplayEffectSpecToOwner(struct FGameplayEffectSpecHandle EffectSpecHandle); // Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner // (Final|Native|Protected|BlueprintCallable) // @ game+0x4b367b0
	void K2_AddGameplayCueWithParams(struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd); // Function GameplayAbilities.GameplayAbility.K2_AddGameplayCueWithParams // (Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x4b34980
	void K2_AddGameplayCue(struct FGameplayTag GameplayCueTag, struct FGameplayEffectContextHandle Context, bool bRemoveOnAbilityEnd); // Function GameplayAbilities.GameplayAbility.K2_AddGameplayCue // (Native|Protected|BlueprintCallable) // @ game+0x4b34d90
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void K2_ActivateAbility(); // Function GameplayAbilities.GameplayAbility.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	bool IsLocallyControlled(); // Function GameplayAbilities.GameplayAbility.IsLocallyControlled // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x4b37b50
	void InvalidateClientPredictionKey(); // Function GameplayAbilities.GameplayAbility.InvalidateClientPredictionKey // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x4b37020
	struct UObject* GetSourceObject_BP(struct FGameplayAbilitySpecHandle Handle, struct FGameplayAbilityActorInfo& ActorInfo); // Function GameplayAbilities.GameplayAbility.GetSourceObject_BP // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4b37090
	struct USkeletalMeshComponent* GetOwningComponentFromActorInfo(); // Function GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4b38090
	struct AActor* GetOwningActorFromActorInfo(); // Function GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4b38130
	struct FGameplayEffectContextHandle GetGrantedByEffectContext(); // Function GameplayAbilities.GameplayAbility.GetGrantedByEffectContext // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4b37ff0
	struct UObject* GetCurrentSourceObject(); // Function GameplayAbilities.GameplayAbility.GetCurrentSourceObject // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4b37290
	struct UAnimMontage* GetCurrentMontage(); // Function GameplayAbilities.GameplayAbility.GetCurrentMontage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ba1ac0
	float GetCooldownTimeRemaining(); // Function GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4b37ac0
	struct FGameplayEffectContextHandle GetContextFromOwner(struct FGameplayAbilityTargetDataHandle OptionalTargetData); // Function GameplayAbilities.GameplayAbility.GetContextFromOwner // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4b37de0
	struct AActor* GetAvatarActorFromActorInfo(); // Function GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4b380e0
	struct FGameplayAbilityActorInfo GetActorInfo(); // Function GameplayAbilities.GameplayAbility.GetActorInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4b38240
	struct UAbilitySystemComponent* GetAbilitySystemComponentFromActorInfo(); // Function GameplayAbilities.GameplayAbility.GetAbilitySystemComponentFromActorInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4b38040
	int32_t GetAbilityLevel_BP(struct FGameplayAbilitySpecHandle Handle, struct FGameplayAbilityActorInfo& ActorInfo); // Function GameplayAbilities.GameplayAbility.GetAbilityLevel_BP // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4b372e0
	int32_t GetAbilityLevel(); // Function GameplayAbilities.GameplayAbility.GetAbilityLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4b374c0
	void EndTaskByInstanceName(struct FName InstanceName); // Function GameplayAbilities.GameplayAbility.EndTaskByInstanceName // (Final|Native|Protected|BlueprintCallable) // @ game+0x4b344a0
	void EndAbilityState(struct FName OptionalStateNameToEnd); // Function GameplayAbilities.GameplayAbility.EndAbilityState // (Final|Native|Protected|BlueprintCallable) // @ game+0x4b34240
	void ConfirmTaskByInstanceName(struct FName InstanceName, bool bEndTask); // Function GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName // (Final|Native|Protected|BlueprintCallable) // @ game+0x4b345b0
	void CancelTaskByInstanceName(struct FName InstanceName); // Function GameplayAbilities.GameplayAbility.CancelTaskByInstanceName // (Final|Native|Protected|BlueprintCallable) // @ game+0x4b34390
	void BP_RemoveGameplayEffectFromOwnerWithHandle(struct FActiveGameplayEffectHandle Handle, int32_t StacksToRemove); // Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithHandle // (Final|Native|Protected|BlueprintCallable) // @ game+0x4b35610
	void BP_RemoveGameplayEffectFromOwnerWithGrantedTags(struct FGameplayTagContainer WithGrantedTags, int32_t StacksToRemove); // Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags // (Final|Native|Protected|BlueprintCallable) // @ game+0x4b357e0
	void BP_RemoveGameplayEffectFromOwnerWithAssetTags(struct FGameplayTagContainer WithAssetTags, int32_t StacksToRemove); // Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags // (Final|Native|Protected|BlueprintCallable) // @ game+0x4b35bb0
	struct TArray<struct FActiveGameplayEffectHandle> BP_ApplyGameplayEffectToTarget(struct FGameplayAbilityTargetDataHandle TargetData, struct UGameplayEffect* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks); // Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget // (Final|Native|Protected|BlueprintCallable) // @ game+0x4b36340
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToOwner(struct UGameplayEffect* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks); // Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner // (Final|Native|Protected|BlueprintCallable) // @ game+0x4b36980
};

// Class GameplayAbilities.GameplayAbilitySet
// Size: 0x48 (Inherited: 0x38)
struct UGameplayAbilitySet : UDataAsset {
	struct TArray<struct FGameplayAbilityBindInfo> Abilities; // 0x38(0x10)
};

// Class GameplayAbilities.GameplayAbilityTargetActor
// Size: 0x5c0 (Inherited: 0x460)
struct AGameplayAbilityTargetActor : AActor {
	bool ShouldProduceTargetDataOnServer; // 0x460(0x01)
	char pad_461[0xf]; // 0x461(0x0f)
	struct FGameplayAbilityTargetingLocationInfo StartLocation; // 0x470(0xb0)
	char pad_520[0x30]; // 0x520(0x30)
	struct APlayerController* PrimaryPC; // 0x550(0x08)
	struct UGameplayAbility* OwningAbility; // 0x558(0x08)
	bool bDestroyOnConfirmation; // 0x560(0x01)
	char pad_561[0x7]; // 0x561(0x07)
	struct AActor* SourceActor; // 0x568(0x08)
	struct FWorldReticleParameters ReticleParams; // 0x570(0x18)
	struct AGameplayAbilityWorldReticle* ReticleClass; // 0x588(0x08)
	struct FGameplayTargetDataFilterHandle Filter; // 0x590(0x10)
	bool bDebug; // 0x5a0(0x01)
	char pad_5A1[0x17]; // 0x5a1(0x17)
	struct UAbilitySystemComponent* GenericDelegateBoundASC; // 0x5b8(0x08)

	void ConfirmTargeting(); // Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting // (Native|Public) // @ game+0x3b65490
	void CancelTargeting(); // Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting // (Native|Public) // @ game+0x4b418a0
};

// Class GameplayAbilities.GameplayAbilityTargetActor_Trace
// Size: 0x5e0 (Inherited: 0x5c0)
struct AGameplayAbilityTargetActor_Trace : AGameplayAbilityTargetActor {
	float MaxRange; // 0x5c0(0x04)
	struct FCollisionProfileName TraceProfile; // 0x5c4(0x0c)
	bool bTraceAffectsAimPitch; // 0x5d0(0x01)
	char pad_5D1[0xf]; // 0x5d1(0x0f)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
// Size: 0x600 (Inherited: 0x5e0)
struct AGameplayAbilityTargetActor_GroundTrace : AGameplayAbilityTargetActor_Trace {
	float CollisionRadius; // 0x5e0(0x04)
	float CollisionHeight; // 0x5e4(0x04)
	char pad_5E8[0x18]; // 0x5e8(0x18)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
// Size: 0x620 (Inherited: 0x600)
struct AGameplayAbilityTargetActor_ActorPlacement : AGameplayAbilityTargetActor_GroundTrace {
	ClassPtrProperty PlacedActorClass; // 0x600(0x08)
	struct UMaterialInterface* PlacedActorMaterial; // 0x608(0x08)
	char pad_610[0x10]; // 0x610(0x10)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_Radius
// Size: 0x5d0 (Inherited: 0x5c0)
struct AGameplayAbilityTargetActor_Radius : AGameplayAbilityTargetActor {
	float Radius; // 0x5c0(0x04)
	char pad_5C4[0xc]; // 0x5c4(0x0c)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
// Size: 0x5e0 (Inherited: 0x5e0)
struct AGameplayAbilityTargetActor_SingleLineTrace : AGameplayAbilityTargetActor_Trace {
};

// Class GameplayAbilities.GameplayAbilityWorldReticle
// Size: 0x490 (Inherited: 0x460)
struct AGameplayAbilityWorldReticle : AActor {
	struct FWorldReticleParameters Parameters; // 0x460(0x18)
	bool bFaceOwnerFlat; // 0x478(0x01)
	bool bSnapToTargetedActor; // 0x479(0x01)
	bool bIsTargetValid; // 0x47a(0x01)
	bool bIsTargetAnActor; // 0x47b(0x01)
	char pad_47C[0x4]; // 0x47c(0x04)
	struct APlayerController* PrimaryPC; // 0x480(0x08)
	struct AGameplayAbilityTargetActor* TargetingActor; // 0x488(0x08)

	void SetReticleMaterialParamVector(struct FName ParamName, struct FVector Value); // Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector // (Event|Public|HasDefaults|BlueprintEvent) // @ game+0x19be2f0
	void SetReticleMaterialParamFloat(struct FName ParamName, float Value); // Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnValidTargetChanged(bool bNewValue); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnTargetingAnActor(bool bNewValue); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnParametersInitialized(); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void FaceTowardSource(bool bFaceIn2D); // Function GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource // (Final|Native|Public|BlueprintCallable) // @ game+0x4b47ba0
};

// Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
// Size: 0x4a8 (Inherited: 0x490)
struct AGameplayAbilityWorldReticle_ActorVisualization : AGameplayAbilityWorldReticle {
	struct UCapsuleComponent* CollisionComponent; // 0x490(0x08)
	struct TArray<struct UActorComponent*> VisualizationComponents; // 0x498(0x10)
};

// Class GameplayAbilities.GameplayAbility_CharacterJump
// Size: 0x3c8 (Inherited: 0x3c8)
struct UGameplayAbility_CharacterJump : UGameplayAbility {
};

// Class GameplayAbilities.GameplayAbility_Montage
// Size: 0x400 (Inherited: 0x3c8)
struct UGameplayAbility_Montage : UGameplayAbility {
	struct UAnimMontage* MontageToPlay; // 0x3c8(0x08)
	float PlayRate; // 0x3d0(0x04)
	struct FName SectionName; // 0x3d4(0x0c)
	struct TArray<struct UGameplayEffect*> GameplayEffectClassesWhileAnimating; // 0x3e0(0x10)
	struct TArray<struct UGameplayEffect*> GameplayEffectsWhileAnimating; // 0x3f0(0x10)
};

// Class GameplayAbilities.AbilityTask
// Size: 0x88 (Inherited: 0x70)
struct UAbilityTask : UGameplayTask {
	struct UGameplayAbility* Ability; // 0x70(0x08)
	struct TWeakObjectPtr<struct UAbilitySystemComponent> AbilitySystemComponent; // 0x78(0x08)
	char pad_80[0x8]; // 0x80(0x08)
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotion_Base
// Size: 0xd0 (Inherited: 0x88)
struct UAbilityTask_ApplyRootMotion_Base : UAbilityTask {
	struct FName ForceName; // 0x88(0x0c)
	enum class ERootMotionFinishVelocityMode FinishVelocityMode; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	struct FVector FinishSetVelocity; // 0x98(0x18)
	float FinishClampVelocity; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct UCharacterMovementComponent* MovementComponent; // 0xb8(0x08)
	char pad_C0[0x10]; // 0xc0(0x10)
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce
// Size: 0x118 (Inherited: 0xd0)
struct UAbilityTask_ApplyRootMotionConstantForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastInlineDelegate OnFinish; // 0xd0(0x10)
	struct FVector WorldDirection; // 0xe0(0x18)
	float Strength; // 0xf8(0x04)
	float Duration; // 0xfc(0x04)
	bool bIsAdditive; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct UCurveFloat* StrengthOverTime; // 0x108(0x08)
	bool bEnableGravity; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)

	struct UAbilityTask_ApplyRootMotionConstantForce* ApplyRootMotionConstantForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector WorldDirection, float Strength, float Duration, bool bIsAdditive, struct UCurveFloat* StrengthOverTime, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bEnableGravity); // Function GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.ApplyRootMotionConstantForce // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x4b4abd0
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce
// Size: 0x138 (Inherited: 0xd0)
struct UAbilityTask_ApplyRootMotionJumpForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastInlineDelegate OnFinish; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnLanded; // 0xe0(0x10)
	struct FRotator Rotation; // 0xf0(0x18)
	float Distance; // 0x108(0x04)
	float Height; // 0x10c(0x04)
	float Duration; // 0x110(0x04)
	float MinimumLandedTriggerTime; // 0x114(0x04)
	bool bFinishOnLanded; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
	struct UCurveVector* PathOffsetCurve; // 0x120(0x08)
	struct UCurveFloat* TimeMappingCurve; // 0x128(0x08)
	char pad_130[0x8]; // 0x130(0x08)

	void OnLandedCallback(struct FHitResult& Hit); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback // (Final|Native|Public|HasOutParms) // @ game+0x4b4e1e0
	void Finish(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish // (Final|Native|Public|BlueprintCallable) // @ game+0x4b4e310
	struct UAbilityTask_ApplyRootMotionJumpForce* ApplyRootMotionJumpForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FRotator Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish, struct UCurveVector* PathOffsetCurve, struct UCurveFloat* TimeMappingCurve); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.ApplyRootMotionJumpForce // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x4b4d6b0
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
// Size: 0x170 (Inherited: 0xd0)
struct UAbilityTask_ApplyRootMotionMoveToActorForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastInlineDelegate OnFinished; // 0xd0(0x10)
	char pad_E0[0x8]; // 0xe0(0x08)
	struct FVector StartLocation; // 0xe8(0x18)
	struct FVector TargetLocation; // 0x100(0x18)
	struct AActor* TargetActor; // 0x118(0x08)
	struct FVector TargetLocationOffset; // 0x120(0x18)
	enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment; // 0x138(0x01)
	char pad_139[0x3]; // 0x139(0x03)
	float Duration; // 0x13c(0x04)
	bool bDisableDestinationReachedInterrupt; // 0x140(0x01)
	bool bSetNewMovementMode; // 0x141(0x01)
	enum class EMovementMode NewMovementMode; // 0x142(0x01)
	bool bRestrictSpeedToExpected; // 0x143(0x01)
	char pad_144[0x4]; // 0x144(0x04)
	struct UCurveVector* PathOffsetCurve; // 0x148(0x08)
	struct UCurveFloat* TimeMappingCurve; // 0x150(0x08)
	struct UCurveFloat* TargetLerpSpeedHorizontalCurve; // 0x158(0x08)
	struct UCurveFloat* TargetLerpSpeedVerticalCurve; // 0x160(0x08)
	char pad_168[0x8]; // 0x168(0x08)

	void OnTargetActorSwapped(struct AActor* OriginalTarget, struct AActor* NewTarget); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnTargetActorSwapped // (Final|Native|Public) // @ game+0x4b50d10
	void OnRep_TargetLocation(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation // (Final|Native|Protected) // @ game+0x4b50ce0
	struct UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToTargetDataActorForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FGameplayAbilityTargetDataHandle TargetDataHandle, int32_t TargetDataIndex, int32_t TargetActorIndex, struct FVector TargetLocationOffset, enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, struct UCurveFloat* TargetLerpSpeedHorizontal, struct UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, struct UCurveVector* PathOffsetCurve, struct UCurveFloat* TimeMappingCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToTargetDataActorForce // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x4b50ec0
	struct UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToActorForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct AActor* TargetActor, struct FVector TargetLocationOffset, enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, struct UCurveFloat* TargetLerpSpeedHorizontal, struct UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, struct UCurveVector* PathOffsetCurve, struct UCurveFloat* TimeMappingCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToActorForce // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x4b51c00
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
// Size: 0x138 (Inherited: 0xd0)
struct UAbilityTask_ApplyRootMotionMoveToForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastInlineDelegate OnTimedOut; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnTimedOutAndDestinationReached; // 0xe0(0x10)
	struct FVector StartLocation; // 0xf0(0x18)
	struct FVector TargetLocation; // 0x108(0x18)
	float Duration; // 0x120(0x04)
	bool bSetNewMovementMode; // 0x124(0x01)
	enum class EMovementMode NewMovementMode; // 0x125(0x01)
	bool bRestrictSpeedToExpected; // 0x126(0x01)
	char pad_127[0x1]; // 0x127(0x01)
	struct UCurveVector* PathOffsetCurve; // 0x128(0x08)
	char pad_130[0x8]; // 0x130(0x08)

	struct UAbilityTask_ApplyRootMotionMoveToForce* ApplyRootMotionMoveToForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector TargetLocation, float Duration, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, struct UCurveVector* PathOffsetCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.ApplyRootMotionMoveToForce // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x4b566a0
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
// Size: 0x140 (Inherited: 0xd0)
struct UAbilityTask_ApplyRootMotionRadialForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastInlineDelegate OnFinish; // 0xd0(0x10)
	struct FVector Location; // 0xe0(0x18)
	struct AActor* LocationActor; // 0xf8(0x08)
	float Strength; // 0x100(0x04)
	float Duration; // 0x104(0x04)
	float Radius; // 0x108(0x04)
	bool bIsPush; // 0x10c(0x01)
	bool bIsAdditive; // 0x10d(0x01)
	bool bNoZForce; // 0x10e(0x01)
	char pad_10F[0x1]; // 0x10f(0x01)
	struct UCurveFloat* StrengthDistanceFalloff; // 0x110(0x08)
	struct UCurveFloat* StrengthOverTime; // 0x118(0x08)
	bool bUseFixedWorldDirection; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
	struct FRotator FixedWorldDirection; // 0x128(0x18)

	struct UAbilityTask_ApplyRootMotionRadialForce* ApplyRootMotionRadialForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector Location, struct AActor* LocationActor, float Strength, float Duration, float Radius, bool bIsPush, bool bIsAdditive, bool bNoZForce, struct UCurveFloat* StrengthDistanceFalloff, struct UCurveFloat* StrengthOverTime, bool bUseFixedWorldDirection, struct FRotator FixedWorldDirection, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish); // Function GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.ApplyRootMotionRadialForce // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x4b59460
};

// Class GameplayAbilities.AbilityTask_MoveToLocation
// Size: 0xf0 (Inherited: 0x88)
struct UAbilityTask_MoveToLocation : UAbilityTask {
	struct FMulticastInlineDelegate OnTargetLocationReached; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)
	struct FVector StartLocation; // 0xa0(0x18)
	struct FVector TargetLocation; // 0xb8(0x18)
	float DurationOfMovement; // 0xd0(0x04)
	char pad_D4[0xc]; // 0xd4(0x0c)
	struct UCurveFloat* LerpCurve; // 0xe0(0x08)
	struct UCurveVector* LerpCurveVector; // 0xe8(0x08)

	struct UAbilityTask_MoveToLocation* MoveToLocation(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector Location, float Duration, struct UCurveFloat* OptionalInterpolationCurve, struct UCurveVector* OptionalVectorInterpolationCurve); // Function GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x4b5e6c0
};

// Class GameplayAbilities.AbilityTask_NetworkSyncPoint
// Size: 0xa0 (Inherited: 0x88)
struct UAbilityTask_NetworkSyncPoint : UAbilityTask {
	struct FMulticastInlineDelegate OnSync; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)

	struct UAbilityTask_NetworkSyncPoint* WaitNetSync(struct UGameplayAbility* OwningAbility, enum class EAbilityTaskNetSyncType SyncType); // Function GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b60e20
	void OnSignalCallback(); // Function GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback // (Final|Native|Public) // @ game+0x4b611a0
};

// Class GameplayAbilities.AbilityTask_PlayMontageAndWait
// Size: 0x118 (Inherited: 0x88)
struct UAbilityTask_PlayMontageAndWait : UAbilityTask {
	struct FMulticastInlineDelegate OnCompleted; // 0x88(0x10)
	struct FMulticastInlineDelegate OnBlendOut; // 0x98(0x10)
	struct FMulticastInlineDelegate OnInterrupted; // 0xa8(0x10)
	struct FMulticastInlineDelegate OnCancelled; // 0xb8(0x10)
	char pad_C8[0x28]; // 0xc8(0x28)
	struct UAnimMontage* MontageToPlay; // 0xf0(0x08)
	float Rate; // 0xf8(0x04)
	struct FName StartSection; // 0xfc(0x0c)
	float AnimRootMotionTranslationScale; // 0x108(0x04)
	float StartTimeSeconds; // 0x10c(0x04)
	bool bStopWhenAbilityEnds; // 0x110(0x01)
	bool bAllowInterruptAfterBlendOut; // 0x111(0x01)
	char pad_112[0x6]; // 0x112(0x06)

	void OnMontageInterrupted(); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted // (Final|Native|Public) // @ game+0x4b621d0
	void OnMontageEnded(struct UAnimMontage* Montage, bool bInterrupted); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded // (Final|Native|Public) // @ game+0x4b62000
	void OnMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut // (Final|Native|Public) // @ game+0x4b621f0
	void OnGameplayAbilityCancelled(); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnGameplayAbilityCancelled // (Final|Native|Public) // @ game+0x4b621d0
	struct UAbilityTask_PlayMontageAndWait* CreatePlayMontageAndWaitProxy(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct UAnimMontage* MontageToPlay, float Rate, struct FName StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, float StartTimeSeconds, bool bAllowInterruptAfterBlendOut); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b617e0
};

// Class GameplayAbilities.AbilityTask_Repeat
// Size: 0xc0 (Inherited: 0x88)
struct UAbilityTask_Repeat : UAbilityTask {
	struct FMulticastInlineDelegate OnPerformAction; // 0x88(0x10)
	struct FMulticastInlineDelegate OnFinished; // 0x98(0x10)
	char pad_A8[0x18]; // 0xa8(0x18)

	struct UAbilityTask_Repeat* RepeatAction(struct UGameplayAbility* OwningAbility, float TimeBetweenActions, int32_t TotalActionCount); // Function GameplayAbilities.AbilityTask_Repeat.RepeatAction // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b6df70
};

// Class GameplayAbilities.AbilityTask_SpawnActor
// Size: 0xd0 (Inherited: 0x88)
struct UAbilityTask_SpawnActor : UAbilityTask {
	struct FMulticastInlineDelegate Success; // 0x88(0x10)
	struct FMulticastInlineDelegate DidNotSpawn; // 0x98(0x10)
	char pad_A8[0x28]; // 0xa8(0x28)

	struct UAbilityTask_SpawnActor* SpawnActor(struct UGameplayAbility* OwningAbility, struct FGameplayAbilityTargetDataHandle TargetData, struct AActor* Class); // Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b6f8f0
	void FinishSpawningActor(struct UGameplayAbility* OwningAbility, struct FGameplayAbilityTargetDataHandle TargetData, struct AActor* SpawnedActor); // Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor // (Final|Native|Public|BlueprintCallable) // @ game+0x4b6f170
	bool BeginSpawningActor(struct UGameplayAbility* OwningAbility, struct FGameplayAbilityTargetDataHandle TargetData, struct AActor* Class, struct AActor*& SpawnedActor); // Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4b6f5b0
};

// Class GameplayAbilities.AbilityTask_StartAbilityState
// Size: 0xc0 (Inherited: 0x88)
struct UAbilityTask_StartAbilityState : UAbilityTask {
	struct FMulticastInlineDelegate OnStateEnded; // 0x88(0x10)
	struct FMulticastInlineDelegate OnStateInterrupted; // 0x98(0x10)
	char pad_A8[0x18]; // 0xa8(0x18)

	struct UAbilityTask_StartAbilityState* StartAbilityState(struct UGameplayAbility* OwningAbility, struct FName StateName, bool bEndCurrentState); // Function GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b708a0
};

// Class GameplayAbilities.AbilityTask_VisualizeTargeting
// Size: 0xb0 (Inherited: 0x88)
struct UAbilityTask_VisualizeTargeting : UAbilityTask {
	struct FMulticastInlineDelegate TimeElapsed; // 0x88(0x10)
	char pad_98[0x18]; // 0x98(0x18)

	struct UAbilityTask_VisualizeTargeting* VisualizeTargetingUsingActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* TargetActor, struct FName TaskInstanceName, float Duration); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b71760
	struct UAbilityTask_VisualizeTargeting* VisualizeTargeting(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* Class, struct FName TaskInstanceName, float Duration); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b71aa0
	void FinishSpawningActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* SpawnedActor); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor // (Final|Native|Public|BlueprintCallable) // @ game+0x4b712d0
	bool BeginSpawningActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* Class, struct AGameplayAbilityTargetActor*& SpawnedActor); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4b71530
};

// Class GameplayAbilities.AbilityTask_WaitAbilityActivate
// Size: 0x190 (Inherited: 0x88)
struct UAbilityTask_WaitAbilityActivate : UAbilityTask {
	struct FMulticastInlineDelegate OnActivate; // 0x88(0x10)
	char pad_98[0xf8]; // 0x98(0xf8)

	struct UAbilityTask_WaitAbilityActivate* WaitForAbilityActivateWithTagRequirements(struct UGameplayAbility* OwningAbility, struct FGameplayTagRequirements TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivateWithTagRequirements // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b73570
	struct UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTagQuery Query, bool IncludeTriggeredAbilities, bool TriggerOnce); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate_Query // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b73020
	struct UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate(struct UGameplayAbility* OwningAbility, struct FGameplayTag WithTag, struct FGameplayTag WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b73ce0
	void OnAbilityActivate(struct UGameplayAbility* ActivatedAbility); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate // (Final|Native|Public) // @ game+0x4b74080
};

// Class GameplayAbilities.AbilityTask_WaitAbilityCommit
// Size: 0x108 (Inherited: 0x88)
struct UAbilityTask_WaitAbilityCommit : UAbilityTask {
	struct FMulticastInlineDelegate OnCommit; // 0x88(0x10)
	char pad_98[0x70]; // 0x98(0x70)

	struct UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTagQuery Query, bool TriggerOnce); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit_Query // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b74820
	struct UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit(struct UGameplayAbility* OwningAbility, struct FGameplayTag WithTag, struct FGameplayTag WithoutTage, bool TriggerOnce); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b74cd0
	void OnAbilityCommit(struct UGameplayAbility* ActivatedAbility); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit // (Final|Native|Public) // @ game+0x4b74fd0
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChange
// Size: 0x108 (Inherited: 0x88)
struct UAbilityTask_WaitAttributeChange : UAbilityTask {
	struct FMulticastInlineDelegate OnChange; // 0x88(0x10)
	char pad_98[0x68]; // 0x98(0x68)
	struct UAbilitySystemComponent* ExternalOwner; // 0x100(0x08)

	struct UAbilityTask_WaitAttributeChange* WaitForAttributeChangeWithComparison(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute InAttribute, struct FGameplayTag InWithTag, struct FGameplayTag InWithoutTag, enum class EWaitAttributeChangeComparison InComparisonType, float InComparisonValue, bool TriggerOnce, struct AActor* OptionalExternalOwner); // Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b75c40
	struct UAbilityTask_WaitAttributeChange* WaitForAttributeChange(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute Attribute, struct FGameplayTag WithSrcTag, struct FGameplayTag WithoutSrcTag, bool TriggerOnce, struct AActor* OptionalExternalOwner); // Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b762e0
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
// Size: 0x148 (Inherited: 0x88)
struct UAbilityTask_WaitAttributeChangeRatioThreshold : UAbilityTask {
	struct FMulticastInlineDelegate OnChange; // 0x88(0x10)
	char pad_98[0xa8]; // 0x98(0xa8)
	struct UAbilitySystemComponent* ExternalOwner; // 0x140(0x08)

	struct UAbilityTask_WaitAttributeChangeRatioThreshold* WaitForAttributeChangeRatioThreshold(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute AttributeNumerator, struct FGameplayAttribute AttributeDenominator, enum class EWaitAttributeChangeComparison ComparisonType, float ComparisonValue, bool bTriggerOnce, struct AActor* OptionalExternalOwner); // Function GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.WaitForAttributeChangeRatioThreshold // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b76ec0
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
// Size: 0xf8 (Inherited: 0x88)
struct UAbilityTask_WaitAttributeChangeThreshold : UAbilityTask {
	struct FMulticastInlineDelegate OnChange; // 0x88(0x10)
	char pad_98[0x58]; // 0x98(0x58)
	struct UAbilitySystemComponent* ExternalOwner; // 0xf0(0x08)

	struct UAbilityTask_WaitAttributeChangeThreshold* WaitForAttributeChangeThreshold(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute Attribute, enum class EWaitAttributeChangeComparison ComparisonType, float ComparisonValue, bool bTriggerOnce, struct AActor* OptionalExternalOwner); // Function GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.WaitForAttributeChangeThreshold // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b78090
};

// Class GameplayAbilities.AbilityTask_WaitCancel
// Size: 0xa0 (Inherited: 0x88)
struct UAbilityTask_WaitCancel : UAbilityTask {
	struct FMulticastInlineDelegate OnCancel; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)

	struct UAbilityTask_WaitCancel* WaitCancel(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_WaitCancel.WaitCancel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b78c20
	void OnLocalCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback // (Final|Native|Public) // @ game+0x4b78ef0
	void OnCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback // (Final|Native|Public) // @ game+0x4b78f10
};

// Class GameplayAbilities.AbilityTask_WaitConfirm
// Size: 0xa8 (Inherited: 0x88)
struct UAbilityTask_WaitConfirm : UAbilityTask {
	struct FMulticastInlineDelegate OnConfirm; // 0x88(0x10)
	char pad_98[0x10]; // 0x98(0x10)

	struct UAbilityTask_WaitConfirm* WaitConfirm(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b79650
	void OnConfirmCallback(struct UGameplayAbility* InAbility); // Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback // (Final|Native|Public) // @ game+0x4b79920
};

// Class GameplayAbilities.AbilityTask_WaitConfirmCancel
// Size: 0xb0 (Inherited: 0x88)
struct UAbilityTask_WaitConfirmCancel : UAbilityTask {
	struct FMulticastInlineDelegate OnConfirm; // 0x88(0x10)
	struct FMulticastInlineDelegate OnCancel; // 0x98(0x10)
	char pad_A8[0x8]; // 0xa8(0x08)

	struct UAbilityTask_WaitConfirmCancel* WaitConfirmCancel(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b79e80
	void OnLocalConfirmCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback // (Final|Native|Public) // @ game+0x4b7a170
	void OnLocalCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback // (Final|Native|Public) // @ game+0x4b7a150
	void OnConfirmCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback // (Final|Native|Public) // @ game+0x4b7a1b0
	void OnCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback // (Final|Native|Public) // @ game+0x4b7a190
};

// Class GameplayAbilities.AbilityTask_WaitDelay
// Size: 0xa0 (Inherited: 0x88)
struct UAbilityTask_WaitDelay : UAbilityTask {
	struct FMulticastInlineDelegate OnFinish; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)

	struct UAbilityTask_WaitDelay* WaitDelay(struct UGameplayAbility* OwningAbility, float Time); // Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b7acf0
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
// Size: 0x250 (Inherited: 0x88)
struct UAbilityTask_WaitGameplayEffectApplied : UAbilityTask {
	char pad_88[0x1b8]; // 0x88(0x1b8)
	struct UAbilitySystemComponent* ExternalOwner; // 0x240(0x08)
	char pad_248[0x8]; // 0x248(0x08)

	void OnApplyGameplayEffectCallback(struct UAbilitySystemComponent* Target, struct FGameplayEffectSpec& SpecApplied, struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback // (Final|Native|Public|HasOutParms) // @ game+0x4b7b6a0
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
// Size: 0x270 (Inherited: 0x250)
struct UAbilityTask_WaitGameplayEffectApplied_Self : UAbilityTask_WaitGameplayEffectApplied {
	struct FMulticastInlineDelegate OnApplied; // 0x250(0x10)
	char pad_260[0x10]; // 0x260(0x10)

	struct UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle SourceFilter, struct FGameplayTagQuery SourceTagQuery, struct FGameplayTagQuery TargetTagQuery, bool TriggerOnce, struct AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf_Query // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b7c1a0
	struct UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle SourceFilter, struct FGameplayTagRequirements SourceTagRequirements, struct FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, struct AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b7cb00
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
// Size: 0x270 (Inherited: 0x250)
struct UAbilityTask_WaitGameplayEffectApplied_Target : UAbilityTask_WaitGameplayEffectApplied {
	struct FMulticastInlineDelegate OnApplied; // 0x250(0x10)
	char pad_260[0x10]; // 0x260(0x10)

	struct UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle SourceFilter, struct FGameplayTagQuery SourceTagQuery, struct FGameplayTagQuery TargetTagQuery, bool TriggerOnce, struct AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget_Query // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b7e010
	struct UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle TargetFilter, struct FGameplayTagRequirements SourceTagRequirements, struct FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, struct AActor* OptionalExternalOwner, bool ListenForPeriodicEffects); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b7e970
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
// Size: 0x1c0 (Inherited: 0x88)
struct UAbilityTask_WaitGameplayEffectBlockedImmunity : UAbilityTask {
	struct FMulticastInlineDelegate bLocked; // 0x88(0x10)
	char pad_98[0x118]; // 0x98(0x118)
	struct UAbilitySystemComponent* ExternalOwner; // 0x1b0(0x08)
	char pad_1B8[0x8]; // 0x1b8(0x08)

	struct UAbilityTask_WaitGameplayEffectBlockedImmunity* WaitGameplayEffectBlockedByImmunity(struct UGameplayAbility* OwningAbility, struct FGameplayTagRequirements SourceTagRequirements, struct FGameplayTagRequirements TargetTagRequirements, struct AActor* OptionalExternalTarget, bool OnlyTriggerOnce); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.WaitGameplayEffectBlockedByImmunity // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b7ff50
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
// Size: 0xc8 (Inherited: 0x88)
struct UAbilityTask_WaitGameplayEffectRemoved : UAbilityTask {
	struct FMulticastInlineDelegate OnRemoved; // 0x88(0x10)
	struct FMulticastInlineDelegate InvalidHandle; // 0x98(0x10)
	char pad_A8[0x20]; // 0xa8(0x20)

	struct UAbilityTask_WaitGameplayEffectRemoved* WaitForGameplayEffectRemoved(struct UGameplayAbility* OwningAbility, struct FActiveGameplayEffectHandle Handle); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b815a0
	void OnGameplayEffectRemoved(struct FGameplayEffectRemovalInfo& InGameplayEffectRemovalInfo); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved // (Final|Native|Public|HasOutParms) // @ game+0x4b81920
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
// Size: 0xc0 (Inherited: 0x88)
struct UAbilityTask_WaitGameplayEffectStackChange : UAbilityTask {
	struct FMulticastInlineDelegate OnChange; // 0x88(0x10)
	struct FMulticastInlineDelegate InvalidHandle; // 0x98(0x10)
	char pad_A8[0x18]; // 0xa8(0x18)

	struct UAbilityTask_WaitGameplayEffectStackChange* WaitForGameplayEffectStackChange(struct UGameplayAbility* OwningAbility, struct FActiveGameplayEffectHandle Handle); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.WaitForGameplayEffectStackChange // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b82070
	void OnGameplayEffectStackChange(struct FActiveGameplayEffectHandle Handle, int32_t NewCount, int32_t OldCount); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.OnGameplayEffectStackChange // (Final|Native|Public) // @ game+0x4b823f0
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEvent
// Size: 0xc0 (Inherited: 0x88)
struct UAbilityTask_WaitGameplayEvent : UAbilityTask {
	struct FMulticastInlineDelegate EventReceived; // 0x88(0x10)
	char pad_98[0x10]; // 0x98(0x10)
	struct UAbilitySystemComponent* OptionalExternalTarget; // 0xa8(0x08)
	char pad_B0[0x10]; // 0xb0(0x10)

	struct UAbilityTask_WaitGameplayEvent* WaitGameplayEvent(struct UGameplayAbility* OwningAbility, struct FGameplayTag EventTag, struct AActor* OptionalExternalTarget, bool OnlyTriggerOnce, bool OnlyMatchExact); // Function GameplayAbilities.AbilityTask_WaitGameplayEvent.WaitGameplayEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b82ba0
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTag
// Size: 0xb0 (Inherited: 0x88)
struct UAbilityTask_WaitGameplayTag : UAbilityTask {
	char pad_88[0x10]; // 0x88(0x10)
	struct UAbilitySystemComponent* OptionalExternalTarget; // 0x98(0x08)
	char pad_A0[0x10]; // 0xa0(0x10)

	void GameplayTagCallback(struct FGameplayTag Tag, int32_t NewCount); // Function GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback // (Native|Public) // @ game+0x4b84b00
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded
// Size: 0xc0 (Inherited: 0xb0)
struct UAbilityTask_WaitGameplayTagAdded : UAbilityTask_WaitGameplayTag {
	struct FMulticastInlineDelegate Added; // 0xb0(0x10)

	struct UAbilityTask_WaitGameplayTagAdded* WaitGameplayTagAdd(struct UGameplayAbility* OwningAbility, struct FGameplayTag Tag, struct AActor* InOptionalExternalTarget, bool OnlyTriggerOnce); // Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b83b20
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
// Size: 0xc0 (Inherited: 0xb0)
struct UAbilityTask_WaitGameplayTagRemoved : UAbilityTask_WaitGameplayTag {
	struct FMulticastInlineDelegate Removed; // 0xb0(0x10)

	struct UAbilityTask_WaitGameplayTagRemoved* WaitGameplayTagRemove(struct UGameplayAbility* OwningAbility, struct FGameplayTag Tag, struct AActor* InOptionalExternalTarget, bool OnlyTriggerOnce); // Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b84200
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTagQuery
// Size: 0x168 (Inherited: 0x88)
struct UAbilityTask_WaitGameplayTagQuery : UAbilityTask {
	char pad_88[0xc0]; // 0x88(0xc0)
	struct FMulticastInlineDelegate Triggered; // 0x148(0x10)
	struct UAbilitySystemComponent* OptionalExternalTarget; // 0x158(0x08)
	char pad_160[0x8]; // 0x160(0x08)

	struct UAbilityTask_WaitGameplayTagQuery* WaitGameplayTagQuery(struct UGameplayAbility* OwningAbility, struct FGameplayTagQuery TagQuery, struct AActor* InOptionalExternalTarget, enum class EWaitGameplayTagQueryTriggerCondition triggerCondition, bool bOnlyTriggerOnce); // Function GameplayAbilities.AbilityTask_WaitGameplayTagQuery.WaitGameplayTagQuery // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b853b0
	void UpdateTargetTags(struct FGameplayTag Tag, int32_t NewCount); // Function GameplayAbilities.AbilityTask_WaitGameplayTagQuery.UpdateTargetTags // (Final|Native|Protected) // @ game+0x4b85170
};

// Class GameplayAbilities.AbilityTask_WaitInputPress
// Size: 0xa8 (Inherited: 0x88)
struct UAbilityTask_WaitInputPress : UAbilityTask {
	struct FMulticastInlineDelegate OnPress; // 0x88(0x10)
	char pad_98[0x10]; // 0x98(0x10)

	struct UAbilityTask_WaitInputPress* WaitInputPress(struct UGameplayAbility* OwningAbility, bool bTestAlreadyPressed); // Function GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b86490
	void OnPressCallback(); // Function GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback // (Final|Native|Public) // @ game+0x4b86810
};

// Class GameplayAbilities.AbilityTask_WaitInputRelease
// Size: 0xa8 (Inherited: 0x88)
struct UAbilityTask_WaitInputRelease : UAbilityTask {
	struct FMulticastInlineDelegate OnRelease; // 0x88(0x10)
	char pad_98[0x10]; // 0x98(0x10)

	struct UAbilityTask_WaitInputRelease* WaitInputRelease(struct UGameplayAbility* OwningAbility, bool bTestAlreadyReleased); // Function GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b86f30
	void OnReleaseCallback(); // Function GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback // (Final|Native|Public) // @ game+0x4b872b0
};

// Class GameplayAbilities.AbilityTask_WaitMovementModeChange
// Size: 0xa8 (Inherited: 0x88)
struct UAbilityTask_WaitMovementModeChange : UAbilityTask {
	struct FMulticastInlineDelegate OnChange; // 0x88(0x10)
	char pad_98[0x10]; // 0x98(0x10)

	void OnMovementModeChange(struct ACharacter* Character, enum class EMovementMode PrevMovementMode, char PreviousCustomMode); // Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange // (Final|Native|Public) // @ game+0x4b87d50
	struct UAbilityTask_WaitMovementModeChange* CreateWaitMovementModeChange(struct UGameplayAbility* OwningAbility, enum class EMovementMode NewMode); // Function GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b879d0
};

// Class GameplayAbilities.AbilityTask_WaitOverlap
// Size: 0x98 (Inherited: 0x88)
struct UAbilityTask_WaitOverlap : UAbilityTask {
	struct FMulticastInlineDelegate OnOverlap; // 0x88(0x10)

	struct UAbilityTask_WaitOverlap* WaitForOverlap(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b88550
	void OnHitCallback(struct UPrimitiveComponent* HitComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0x4b88820
};

// Class GameplayAbilities.AbilityTask_WaitTargetData
// Size: 0xc8 (Inherited: 0x88)
struct UAbilityTask_WaitTargetData : UAbilityTask {
	struct FMulticastInlineDelegate ValidData; // 0x88(0x10)
	struct FMulticastInlineDelegate Cancelled; // 0x98(0x10)
	struct AGameplayAbilityTargetActor* TargetClass; // 0xa8(0x08)
	struct AGameplayAbilityTargetActor* TargetActor; // 0xb0(0x08)
	char pad_B8[0x10]; // 0xb8(0x10)

	struct UAbilityTask_WaitTargetData* WaitTargetDataUsingActor(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, enum class EGameplayTargetingConfirmation ConfirmationType, struct AGameplayAbilityTargetActor* TargetActor); // Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b89ca0
	struct UAbilityTask_WaitTargetData* WaitTargetData(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, enum class EGameplayTargetingConfirmation ConfirmationType, struct AGameplayAbilityTargetActor* Class); // Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b89f90
	void OnTargetDataReplicatedCancelledCallback(); // Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback // (Native|Public) // @ game+0x413eb60
	void OnTargetDataReplicatedCallback(struct FGameplayAbilityTargetDataHandle& Data, struct FGameplayTag ActivationTag); // Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback // (Native|Public|HasOutParms) // @ game+0x4b8a620
	void OnTargetDataReadyCallback(struct FGameplayAbilityTargetDataHandle& Data); // Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback // (Native|Public|HasOutParms) // @ game+0x4b8a450
	void OnTargetDataCancelledCallback(struct FGameplayAbilityTargetDataHandle& Data); // Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback // (Native|Public|HasOutParms) // @ game+0x4b8a280
	void FinishSpawningActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* SpawnedActor); // Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor // (Native|Public|BlueprintCallable) // @ game+0x4b898c0
	bool BeginSpawningActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* Class, struct AGameplayAbilityTargetActor*& SpawnedActor); // Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4b89a60
};

// Class GameplayAbilities.AbilityTask_WaitVelocityChange
// Size: 0xc0 (Inherited: 0x88)
struct UAbilityTask_WaitVelocityChange : UAbilityTask {
	struct FMulticastInlineDelegate OnVelocityChage; // 0x88(0x10)
	struct UMovementComponent* CachedMovementComponent; // 0x98(0x08)
	char pad_A0[0x20]; // 0xa0(0x20)

	struct UAbilityTask_WaitVelocityChange* CreateWaitVelocityChange(struct UGameplayAbility* OwningAbility, struct FVector Direction, float MinimumMagnitude); // Function GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x4b8c690
};

// Class GameplayAbilities.AbilitySystemBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UAbilitySystemBlueprintLibrary : UBlueprintFunctionLibrary {

	bool TargetDataHasOrigin(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4b98c40
	bool TargetDataHasHitResult(struct FGameplayAbilityTargetDataHandle& HitResult, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4b99290
	bool TargetDataHasEndPoint(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4b986c0
	bool TargetDataHasActor(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4b99530
	struct FGameplayEffectSpecHandle SetStackCountToMax(struct FGameplayEffectSpecHandle SpecHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b8f6f0
	struct FGameplayEffectSpecHandle SetStackCount(struct FGameplayEffectSpecHandle SpecHandle, int32_t StackCount); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b8f950
	struct FGameplayEffectSpecHandle SetDuration(struct FGameplayEffectSpecHandle SpecHandle, float Duration); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b90ed0
	void SendGameplayEventToActor(struct AActor* Actor, struct FGameplayTag EventTag, struct FGameplayEventData Payload); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b9e230
	bool RemoveLooseGameplayTags(struct AActor* Actor, struct FGameplayTagContainer& GameplayTags, bool bShouldReplicate); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.RemoveLooseGameplayTags // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4b8ec10
	bool NotEqual_GameplayAttributeGameplayAttribute(struct FGameplayAttribute AttributeA, struct FGameplayAttribute AttributeB); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAttributeGameplayAttribute // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4b9bc60
	bool NotEqual_GameplayAbilitySpecHandle(struct FGameplayAbilitySpecHandle& A, struct FGameplayAbilitySpecHandle& B); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAbilitySpecHandle // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4b8ce20
	bool NotEqual_ActiveGameplayEffectHandle(struct FActiveGameplayEffectHandle& A, struct FActiveGameplayEffectHandle& B); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_ActiveGameplayEffectHandle // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4b8d620
	struct FGameplayEffectSpecHandle MakeSpecHandle(struct UGameplayEffect* InGameplayEffect, struct AActor* InInstigator, struct AActor* InEffectCauser, float InLevel); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4b9a530
	struct FGameplayCueParameters MakeGameplayCueParameters(float NormalizedMagnitude, float RawMagnitude, struct FGameplayEffectContextHandle EffectContext, struct FGameplayTag MatchedTagName, struct FGameplayTag OriginalTag, struct FGameplayTagContainer AggregatedSourceTags, struct FGameplayTagContainer AggregatedTargetTags, struct FVector Location, struct FVector Normal, struct AActor* Instigator, struct AActor* EffectCauser, struct UObject* SourceObject, struct UPhysicalMaterial* PhysicalMaterial, int32_t GameplayEffectLevel, int32_t AbilityLevel, struct USceneComponent* TargetAttachComponent, bool bReplicateLocationWhenUsingMinimalRepProxy); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeGameplayCueParameters // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x4b92550
	struct FGameplayTargetDataFilterHandle MakeFilterHandle(struct FGameplayTargetDataFilter Filter, struct AActor* FilterActor); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4b9a830
	bool IsValid(struct FGameplayAttribute Attribute); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsValid // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4b9e090
	bool IsInstigatorLocallyControlledPlayer(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4b96600
	bool IsInstigatorLocallyControlled(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4b968a0
	bool HasHitResult(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4b95880
	struct FTransform GetTargetDataOrigin(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x4b98980
	struct FTransform GetTargetDataEndPointTransform(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x4b98090
	struct FVector GetTargetDataEndPoint(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x4b983b0
	struct FVector GetOrigin(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x4b94a70
	float GetModifiedAttributeMagnitude(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayAttribute Attribute); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetModifiedAttributeMagnitude // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b8e880
	struct FTransform GetInstigatorTransform(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x4b94db0
	struct AActor* GetInstigatorActor(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4b951a0
	struct FHitResult GetHitResultFromTargetData(struct FGameplayAbilityTargetDataHandle& HitResult, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4b98f00
	struct FHitResult GetHitResult(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4b95b70
	struct UGameplayEffectUIData* GetGameplayEffectUIData(struct UGameplayEffect* EffectClass, struct UGameplayEffectUIData* DataType); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayEffectUIData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b8d9a0
	struct UGameplayEffect* GetGameplayEffectFromActiveEffectHandle(struct FActiveGameplayEffectHandle& ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayEffectFromActiveEffectHandle // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4b8d4b0
	bool GetGameplayCueEndLocationAndNormal(struct AActor* TargetActor, struct FGameplayCueParameters Parameters, struct FVector& Location, struct FVector& Normal); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x4b945f0
	bool GetGameplayCueDirection(struct AActor* TargetActor, struct FGameplayCueParameters Parameters, struct FVector& Direction); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x4b941f0
	struct UGameplayAbility* GetGameplayAbilityFromSpecHandle(struct UAbilitySystemComponent* AbilitySystem, struct FGameplayAbilitySpecHandle& AbilitySpecHandle, bool& bIsInstance); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayAbilityFromSpecHandle // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4b8d1a0
	float GetFloatAttributeFromAbilitySystemComponent(struct UAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeFromAbilitySystemComponent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4b9da00
	float GetFloatAttributeBaseFromAbilitySystemComponent(struct UAbilitySystemComponent* AbilitySystemComponent, struct FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBaseFromAbilitySystemComponent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4b9d370
	float GetFloatAttributeBase(struct AActor* Actor, struct FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBase // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4b9d680
	float GetFloatAttribute(struct AActor* Actor, struct FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4b9dd10
	struct FGameplayEffectContextHandle GetEffectContext(struct FGameplayEffectSpecHandle SpecHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetEffectContext // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b8f460
	struct FString GetDebugStringFromGameplayAttribute(struct FGameplayAttribute& Attribute); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDebugStringFromGameplayAttribute // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4b9ba70
	int32_t GetDataCountFromTargetData(struct FGameplayAbilityTargetDataHandle& TargetData); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4b9b080
	struct TArray<struct FGameplayEffectSpecHandle> GetAllLinkedGameplayEffectSpecHandles(struct FGameplayEffectSpecHandle SpecHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllLinkedGameplayEffectSpecHandles // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4b8f2a0
	struct TArray<struct AActor*> GetAllActorsFromTargetData(struct FGameplayAbilityTargetDataHandle& TargetData); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllActorsFromTargetData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4b99bf0
	struct TArray<struct AActor*> GetActorsFromTargetData(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4b99e70
	int32_t GetActorCount(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4b96290
	struct AActor* GetActorByIndex(struct FGameplayCueParameters Parameters, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4b95f30
	float GetActiveGameplayEffectTotalDuration(struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectTotalDuration // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b8e080
	bool GetActiveGameplayEffectSuccessfullyApplied(struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectSuccessfullyApplied // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4b8db30
	float GetActiveGameplayEffectStartTime(struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStartTime // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b8e3c0
	int32_t GetActiveGameplayEffectStackLimitCount(struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackLimitCount // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b8e550
	int32_t GetActiveGameplayEffectStackCount(struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b8e6f0
	float GetActiveGameplayEffectRemainingDuration(struct UObject* WorldContextObject, struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectRemainingDuration // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b8de20
	float GetActiveGameplayEffectExpectedEndTime(struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectExpectedEndTime // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b8e210
	struct FString GetActiveGameplayEffectDebugString(struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectDebugString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4b8dc20
	struct UAbilitySystemComponent* GetAbilitySystemComponent(struct AActor* Actor); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4b9e780
	void ForwardGameplayCueToTarget(struct TScriptInterface<IGameplayCueInterface> TargetCueInterface, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b95450
	struct FGameplayAbilityTargetDataHandle FilterTargetData(struct FGameplayAbilityTargetDataHandle& TargetDataHandle, struct FGameplayTargetDataFilterHandle ActorFilterClass); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4b9aa40
	float EvaluateAttributeValueWithTagsAndBase(struct UAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute Attribute, struct FGameplayTagContainer& SourceTags, struct FGameplayTagContainer& TargetTags, float BaseValue, bool& bSuccess); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTagsAndBase // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4b9c240
	float EvaluateAttributeValueWithTags(struct UAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute Attribute, struct FGameplayTagContainer& SourceTags, struct FGameplayTagContainer& TargetTags, bool& bSuccess); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTags // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4b9cb30
	bool EqualEqual_GameplayAttributeGameplayAttribute(struct FGameplayAttribute AttributeA, struct FGameplayAttribute AttributeB); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAttributeGameplayAttribute // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4b9bf50
	bool EqualEqual_GameplayAbilitySpecHandle(struct FGameplayAbilitySpecHandle& A, struct FGameplayAbilitySpecHandle& B); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAbilitySpecHandle // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4b8cfe0
	bool EqualEqual_ActiveGameplayEffectHandle(struct FActiveGameplayEffectHandle& A, struct FActiveGameplayEffectHandle& B); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_ActiveGameplayEffectHandle // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4b8d7e0
	void EffectContextSetOrigin(struct FGameplayEffectContextHandle EffectContext, struct FVector Origin); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextSetOrigin // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x4b971a0
	bool EffectContextIsValid(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsValid // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4b97f10
	bool EffectContextIsInstigatorLocallyControlled(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4b97d70
	bool EffectContextHasHitResult(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4b97920
	struct UObject* EffectContextGetSourceObject(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4b96b20
	struct AActor* EffectContextGetOriginalInstigatorActor(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4b96e60
	struct FVector EffectContextGetOrigin(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x4b973f0
	struct AActor* EffectContextGetInstigatorActor(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4b97000
	struct FHitResult EffectContextGetHitResult(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4b97ad0
	struct AActor* EffectContextGetEffectCauser(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4b96cc0
	void EffectContextAddHitResult(struct FGameplayEffectContextHandle EffectContext, struct FHitResult HitResult, bool bReset); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextAddHitResult // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b97600
	bool DoesTargetDataContainActor(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index, struct AActor* Actor); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4b99810
	bool DoesGameplayCueMeetTagRequirements(struct FGameplayCueParameters Parameters, struct FGameplayTagRequirements& SourceTagReqs, struct FGameplayTagRequirements& TargetTagReqs); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4b93860
	struct FGameplayEffectSpecHandle CloneSpecHandle(struct AActor* InNewInstigator, struct AActor* InEffectCauser, struct FGameplayEffectSpecHandle GameplayEffectSpecHandle_Clone); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.CloneSpecHandle // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4b9a140
	void BreakGameplayCueParameters(struct FGameplayCueParameters& Parameters, float& NormalizedMagnitude, float& RawMagnitude, struct FGameplayEffectContextHandle& EffectContext, struct FGameplayTag& MatchedTagName, struct FGameplayTag& OriginalTag, struct FGameplayTagContainer& AggregatedSourceTags, struct FGameplayTagContainer& AggregatedTargetTags, struct FVector& Location, struct FVector& Normal, struct AActor*& Instigator, struct AActor*& EffectCauser, struct UObject*& SourceObject, struct UPhysicalMaterial*& PhysicalMaterial, int32_t& GameplayEffectLevel, int32_t& AbilityLevel, struct USceneComponent*& TargetAttachComponent, bool& bReplicateLocationWhenUsingMinimalRepProxy); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.BreakGameplayCueParameters // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x4b91750
	struct FGameplayEffectSpecHandle AssignTagSetByCallerMagnitude(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTag DataTag, float Magnitude); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignTagSetByCallerMagnitude // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b91170
	struct FGameplayEffectSpecHandle AssignSetByCallerMagnitude(struct FGameplayEffectSpecHandle SpecHandle, struct FName DataName, float Magnitude); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b91480
	struct FGameplayAbilityTargetDataHandle AppendTargetDataHandle(struct FGameplayAbilityTargetDataHandle TargetHandle, struct FGameplayAbilityTargetDataHandle& HandleToAdd); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4b9b680
	bool AddLooseGameplayTags(struct AActor* Actor, struct FGameplayTagContainer& GameplayTags, bool bShouldReplicate); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLooseGameplayTags // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4b8ef30
	struct FGameplayEffectSpecHandle AddLinkedGameplayEffectSpec(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayEffectSpecHandle LinkedGameplayEffectSpec); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b8fe70
	struct FGameplayEffectSpecHandle AddLinkedGameplayEffect(struct FGameplayEffectSpecHandle SpecHandle, struct UGameplayEffect* LinkedGameplayEffect); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b8fc40
	struct FGameplayEffectSpecHandle AddGrantedTags(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTagContainer NewGameplayTags); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b90840
	struct FGameplayEffectSpecHandle AddGrantedTag(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTag NewGameplayTag); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b90c50
	struct FGameplayEffectSpecHandle AddAssetTags(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTagContainer NewGameplayTags); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b90180
	struct FGameplayEffectSpecHandle AddAssetTag(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTag NewGameplayTag); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b905a0
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromLocations(struct FGameplayAbilityTargetingLocationInfo& SourceLocation, struct FGameplayAbilityTargetingLocationInfo& TargetLocation); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4b9b3c0
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromHitResult(struct FHitResult& HitResult); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4b9b250
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromActorArray(struct TArray<struct AActor*>& ActorArray, bool OneTargetPerHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4b9ad50
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromActor(struct AActor* Actor); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4b9af60
};

// Class GameplayAbilities.AbilitySystemComponent
// Size: 0x1298 (Inherited: 0x150)
struct UAbilitySystemComponent : UGameplayTasksComponent {
	char pad_150[0x10]; // 0x150(0x10)
	struct TArray<struct FAttributeDefaults> DefaultStartingData; // 0x160(0x10)
	struct FName AffectedAnimInstanceTag; // 0x170(0x0c)
	char pad_17C[0xbc]; // 0x17c(0xbc)
	struct FMulticastInlineDelegate OnFailedApplicationTagRequirements; // 0x238(0x10)
	char pad_248[0xf0]; // 0x248(0xf0)
	float OutgoingDuration; // 0x338(0x04)
	float IncomingDuration; // 0x33c(0x04)
	char pad_340[0x20]; // 0x340(0x20)
	struct TArray<struct FString> ClientDebugStrings; // 0x360(0x10)
	struct TArray<struct FString> ServerDebugStrings; // 0x370(0x10)
	char pad_380[0x60]; // 0x380(0x60)
	bool UserAbilityActivationInhibited; // 0x3e0(0x01)
	bool ReplicationProxyEnabled; // 0x3e1(0x01)
	bool bSuppressGrantAbility; // 0x3e2(0x01)
	bool bSuppressGameplayCues; // 0x3e3(0x01)
	char pad_3E4[0x4]; // 0x3e4(0x04)
	struct TArray<struct AGameplayAbilityTargetActor*> SpawnedTargetActors; // 0x3e8(0x10)
	char pad_3F8[0x28]; // 0x3f8(0x28)
	struct AActor* OwnerActor; // 0x420(0x08)
	struct AActor* AvatarActor; // 0x428(0x08)
	char pad_430[0x10]; // 0x430(0x10)
	struct FGameplayAbilitySpecContainer ActivatableAbilities; // 0x440(0x120)
	char pad_560[0x30]; // 0x560(0x30)
	struct TArray<struct UGameplayAbility*> AllReplicatedInstancedAbilities; // 0x590(0x10)
	char pad_5A0[0x230]; // 0x5a0(0x230)
	struct FGameplayAbilityRepAnimMontage RepAnimMontageInfo; // 0x7d0(0x38)
	bool bCachedIsNetSimulated; // 0x808(0x01)
	bool bPendingMontageRep; // 0x809(0x01)
	char pad_80A[0x6]; // 0x80a(0x06)
	struct FGameplayAbilityLocalAnimMontage LocalAnimMontageInfo; // 0x810(0x30)
	char pad_840[0xa0]; // 0x840(0xa0)
	struct FActiveGameplayEffectsContainer ActiveGameplayEffects; // 0x8e0(0x2f8)
	struct FActiveGameplayCueContainer ActiveGameplayCues; // 0xbd8(0x128)
	struct FActiveGameplayCueContainer MinimalReplicationGameplayCues; // 0xd00(0x128)
	char pad_E28[0x128]; // 0xe28(0x128)
	struct TArray<char> BlockedAbilityBindings; // 0xf50(0x10)
	char pad_F60[0x128]; // 0xf60(0x128)
	struct FMinimalReplicationTagCountMap MinimalReplicationTags; // 0x1088(0x60)
	struct TArray<struct UAttributeSet*> SpawnedAttributes; // 0x10e8(0x10)
	char pad_10F8[0x10]; // 0x10f8(0x10)
	struct FMinimalReplicationTagCountMap ReplicatedLooseTags; // 0x1108(0x60)
	char pad_1168[0x8]; // 0x1168(0x08)
	struct FReplicatedPredictionKeyMap ReplicatedPredictionKeyMap; // 0x1170(0x118)
	char pad_1288[0x10]; // 0x1288(0x10)

	void UpdateActiveGameplayEffectSetByCallerMagnitudes(struct FActiveGameplayEffectHandle ActiveHandle, struct TMap<struct FGameplayTag, float>& NewSetByCallerValues); // Function GameplayAbilities.AbilitySystemComponent.UpdateActiveGameplayEffectSetByCallerMagnitudes // (BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4bae7a0
	void UpdateActiveGameplayEffectSetByCallerMagnitude(struct FActiveGameplayEffectHandle ActiveHandle, struct FGameplayTag SetByCallerTag, float NewValue); // Function GameplayAbilities.AbilitySystemComponent.UpdateActiveGameplayEffectSetByCallerMagnitude // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x4baea70
	bool TryCancelAbilityByClass(struct UGameplayAbility* InAbilityToCancel); // Function GameplayAbilities.AbilitySystemComponent.TryCancelAbilityByClass // (Final|Native|Public|BlueprintCallable) // @ game+0x4ba81b0
	bool TryActivateAbilityByClass(struct UGameplayAbility* InAbilityToActivate, bool bAllowRemoteActivation); // Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass // (Final|Native|Public|BlueprintCallable) // @ game+0x4ba8520
	bool TryActivateAbility(struct FGameplayAbilitySpecHandle AbilityToActivate, bool bAllowRemoteActivation); // Function GameplayAbilities.AbilitySystemComponent.TryActivateAbility // (Final|Native|Public|BlueprintCallable) // @ game+0x4ba8380
	bool TryActivateAbilitiesByTag(struct FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation); // Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4ba8730
	void TargetConfirm(); // Function GameplayAbilities.AbilitySystemComponent.TargetConfirm // (Native|Public|BlueprintCallable) // @ game+0x4ba69f0
	void TargetCancel(); // Function GameplayAbilities.AbilitySystemComponent.TargetCancel // (Native|Public|BlueprintCallable) // @ game+0x4ba69c0
	void SetUserAbilityActivationInhibited(bool NewInhibit); // Function GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited // (Native|Public|BlueprintCallable) // @ game+0x4ba6c80
	void SetActiveGameplayEffectLevelUsingQuery(struct FGameplayEffectQuery Query, int32_t NewLevel); // Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevelUsingQuery // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x4bae420
	void SetActiveGameplayEffectLevel(struct FActiveGameplayEffectHandle ActiveHandle, float NewLevel); // Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x4bae5f0
	void ServerTryActivateAbilityWithEventData(struct FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, struct FPredictionKey PredictionKey, struct FGameplayEventData TriggerEventData); // Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x4ba4710
	void ServerTryActivateAbility(struct FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, struct FPredictionKey PredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x4ba4d40
	void ServerSetReplicatedTargetDataCancelled(struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FPredictionKey CurrentPredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x4ba52e0
	void ServerSetReplicatedTargetData(struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FGameplayAbilityTargetDataHandle ReplicatedTargetDataHandle, struct FGameplayTag ApplicationTag, struct FPredictionKey CurrentPredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x4ba55e0
	void ServerSetReplicatedEventWithPayload(enum class EAbilityGenericReplicatedEvent EventType, struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FPredictionKey CurrentPredictionKey, struct FVector_NetQuantize100 VectorPayload); // Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEventWithPayload // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x4ba5da0
	void ServerSetReplicatedEvent(enum class EAbilityGenericReplicatedEvent EventType, struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FPredictionKey CurrentPredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x4ba6200
	void ServerSetInputReleased(struct FGameplayAbilitySpecHandle AbilityHandle); // Function GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x4ba5040
	void ServerSetInputPressed(struct FGameplayAbilitySpecHandle AbilityHandle); // Function GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x4ba5190
	void ServerPrintDebug_RequestWithStrings(struct TArray<struct FString> Strings); // Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_RequestWithStrings // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x4ba72a0
	void ServerPrintDebug_Request(); // Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_Request // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x4ba7420
	void ServerEndAbility(struct FGameplayAbilitySpecHandle AbilityToEnd, struct FGameplayAbilityActivationInfo ActivationInfo, struct FPredictionKey PredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ServerEndAbility // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x4ba4310
	void ServerCurrentMontageSetPlayRate(struct UAnimMontage* ClientAnimMontage, float InPlayRate); // Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetPlayRate // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x4ba2cd0
	void ServerCurrentMontageSetNextSectionName(struct UAnimMontage* ClientAnimMontage, float ClientPosition, struct FName SectionName, struct FName NextSectionName); // Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x4ba3100
	void ServerCurrentMontageJumpToSectionName(struct UAnimMontage* ClientAnimMontage, struct FName SectionName); // Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x4ba2ed0
	void ServerCancelAbility(struct FGameplayAbilitySpecHandle AbilityToCancel, struct FGameplayAbilityActivationInfo ActivationInfo); // Function GameplayAbilities.AbilitySystemComponent.ServerCancelAbility // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x4ba3f00
	void ServerAbilityRPCBatch(struct FServerAbilityRPCBatch BatchInfo); // Function GameplayAbilities.AbilitySystemComponent.ServerAbilityRPCBatch // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x4ba6da0
	void RemoveActiveGameplayEffectBySourceEffect(struct UGameplayEffect* GameplayEffect, struct UAbilitySystemComponent* InstigatorAbilitySystemComponent, int32_t StacksToRemove); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x4baf750
	bool RemoveActiveGameplayEffect(struct FActiveGameplayEffectHandle Handle, int32_t StacksToRemove); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x4baf970
	int32_t RemoveActiveEffectsWithTags(struct FGameplayTagContainer Tags); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags // (Final|Native|Public|BlueprintCallable) // @ game+0x4bac950
	int32_t RemoveActiveEffectsWithSourceTags(struct FGameplayTagContainer Tags); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithSourceTags // (Final|Native|Public|BlueprintCallable) // @ game+0x4bac610
	int32_t RemoveActiveEffectsWithGrantedTags(struct FGameplayTagContainer Tags); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithGrantedTags // (Final|Native|Public|BlueprintCallable) // @ game+0x4bac050
	int32_t RemoveActiveEffectsWithAppliedTags(struct FGameplayTagContainer Tags); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithAppliedTags // (Final|Native|Public|BlueprintCallable) // @ game+0x4bac2d0
	void ReleaseInputID(int32_t InputID); // Function GameplayAbilities.AbilitySystemComponent.ReleaseInputID // (Final|Native|Public|BlueprintCallable) // @ game+0x4ba6a80
	void PressInputID(int32_t InputID); // Function GameplayAbilities.AbilitySystemComponent.PressInputID // (Final|Native|Public|BlueprintCallable) // @ game+0x4ba6b80
	void OnSpawnedAttributesEndPlayed(struct AActor* InActor, enum class EEndPlayReason EndPlayReason); // Function GameplayAbilities.AbilitySystemComponent.OnSpawnedAttributesEndPlayed // (Final|Native|Public) // @ game+0x4ba65a0
	void OnRep_SpawnedAttributes(struct TArray<struct UAttributeSet*>& PreviousSpawnedAttributes); // Function GameplayAbilities.AbilitySystemComponent.OnRep_SpawnedAttributes // (Final|Native|Private|HasOutParms) // @ game+0x4ba2ab0
	void OnRep_ServerDebugString(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ServerDebugString // (Native|Public) // @ game+0x413a880
	void OnRep_ReplicatedAnimMontage(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage // (Native|Protected) // @ game+0x4ba3480
	void OnRep_OwningActor(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor // (Final|Native|Public) // @ game+0x4ba6910
	void OnRep_ClientDebugString(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ClientDebugString // (Native|Public) // @ game+0x413a8b0
	void OnRep_ActivateAbilities(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities // (Native|Protected) // @ game+0x4ba5010
	void OnOwnerActorDestroyed(struct AActor* InActor); // Function GameplayAbilities.AbilitySystemComponent.OnOwnerActorDestroyed // (Final|Native|Public) // @ game+0x4ba6730
	void OnAvatarActorDestroyed(struct AActor* InActor); // Function GameplayAbilities.AbilitySystemComponent.OnAvatarActorDestroyed // (Final|Native|Public) // @ game+0x4ba6820
	void NetMulticast_InvokeGameplayCuesExecuted_WithParams(struct FGameplayTagContainer GameplayCueTags, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted_WithParams // (Net|Native|Event|NetMulticast|Public) // @ game+0x4baa770
	void NetMulticast_InvokeGameplayCuesExecuted(struct FGameplayTagContainer GameplayCueTags, struct FPredictionKey PredictionKey, struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted // (Net|Native|Event|NetMulticast|Public) // @ game+0x4bab160
	void NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(struct FGameplayTagContainer GameplayCueTags, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams // (Net|Native|Event|NetMulticast|Public) // @ game+0x4ba92f0
	void NetMulticast_InvokeGameplayCueExecuted_WithParams(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams // (Net|Native|Event|NetMulticast|Public) // @ game+0x4baad40
	void NetMulticast_InvokeGameplayCueExecuted_FromSpec(struct FGameplayEffectSpecForRPC Spec, struct FPredictionKey PredictionKey); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec // (Net|Native|Event|NetMulticast|Public) // @ game+0x4bab8d0
	void NetMulticast_InvokeGameplayCueExecuted(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted // (Net|Native|Event|NetMulticast|Public) // @ game+0x4bab5f0
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams // (Net|Native|Event|NetMulticast|Public) // @ game+0x4ba98c0
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(struct FGameplayEffectSpecForRPC Spec, struct FPredictionKey PredictionKey); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec // (Net|Native|Event|NetMulticast|Public) // @ game+0x4ba9ce0
	void NetMulticast_InvokeGameplayCueAdded_WithParams(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded_WithParams // (Net|Native|Event|NetMulticast|Public) // @ game+0x4baa070
	void NetMulticast_InvokeGameplayCueAdded(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded // (Net|Native|Event|NetMulticast|Public) // @ game+0x4baa490
	struct FGameplayEffectSpecHandle MakeOutgoingSpec(struct UGameplayEffect* GameplayEffectClass, float Level, struct FGameplayEffectContextHandle Context); // Function GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4baf450
	struct FGameplayEffectContextHandle MakeEffectContext(); // Function GameplayAbilities.AbilitySystemComponent.MakeEffectContext // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4baf3f0
	void K2_InitStats(struct UAttributeSet* Attributes, struct UDataTable* DataTable); // Function GameplayAbilities.AbilitySystemComponent.K2_InitStats // (Final|Native|Public|BlueprintCallable) // @ game+0x4bb0620
	struct FGameplayAbilitySpecHandle K2_GiveAbilityAndActivateOnce(struct UGameplayAbility* AbilityClass, int32_t Level, int32_t InputID); // Function GameplayAbilities.AbilitySystemComponent.K2_GiveAbilityAndActivateOnce // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x4ba8bf0
	struct FGameplayAbilitySpecHandle K2_GiveAbility(struct UGameplayAbility* AbilityClass, int32_t Level, int32_t InputID); // Function GameplayAbilities.AbilitySystemComponent.K2_GiveAbility // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x4ba8ee0
	bool IsGameplayCueActive(struct FGameplayTag GameplayCueTag); // Function GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ba91d0
	void InputConfirm(); // Function GameplayAbilities.AbilitySystemComponent.InputConfirm // (Final|Native|Public|BlueprintCallable) // @ game+0x4ba6a50
	void InputCancel(); // Function GameplayAbilities.AbilitySystemComponent.InputCancel // (Final|Native|Public|BlueprintCallable) // @ game+0x4ba6a20
	bool GetUserAbilityActivationInhibited(); // Function GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ba6d80
	int32_t GetGameplayTagCount(struct FGameplayTag GameplayTag); // Function GameplayAbilities.AbilitySystemComponent.GetGameplayTagCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4bae020
	float GetGameplayEffectMagnitude(struct FActiveGameplayEffectHandle Handle, struct FGameplayAttribute Attribute); // Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4bae1b0
	struct UGameplayEffect* GetGameplayEffectDefForHandle(struct FActiveGameplayEffectHandle Handle); // Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectDefForHandle // (Final|Native|Public|BlueprintCallable) // @ game+0x4bafb20
	int32_t GetGameplayEffectCount_IfLoaded(struct TSoftClassPtr<UObject> SoftSourceGameplayEffect, struct UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck); // Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount_IfLoaded // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4baedf0
	int32_t GetGameplayEffectCount(struct UGameplayEffect* SourceGameplayEffect, struct UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck, bool bIncludeDerivedEffects); // Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4baf100
	float GetGameplayAttributeValue(struct FGameplayAttribute Attribute, bool& bFound); // Function GameplayAbilities.AbilitySystemComponent.GetGameplayAttributeValue // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4bb0070
	struct UAttributeSet* GetAttributeSet(struct UAttributeSet* AttributeSetClass); // Function GameplayAbilities.AbilitySystemComponent.GetAttributeSet // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x4bb0300
	void GetAllAttributes(struct TArray<struct FGameplayAttribute>& OutAttributes); // Function GameplayAbilities.AbilitySystemComponent.GetAllAttributes // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4bb0470
	void GetAllAbilities(struct TArray<struct FGameplayAbilitySpecHandle>& OutAbilityHandles); // Function GameplayAbilities.AbilitySystemComponent.GetAllAbilities // (Final|Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x4ba8000
	int32_t GetAggregatedStackCount(struct FGameplayEffectQuery& Query); // Function GameplayAbilities.AbilitySystemComponent.GetAggregatedStackCount // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4baecc0
	struct TArray<struct FActiveGameplayEffectHandle> GetActiveEffectsWithAllTags(struct FGameplayTagContainer Tags); // Function GameplayAbilities.AbilitySystemComponent.GetActiveEffectsWithAllTags // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x4bacc90
	struct TArray<float> GetActiveEffectsTimeRemaining(struct FGameplayEffectQuery& Query); // Function GameplayAbilities.AbilitySystemComponent.GetActiveEffectsTimeRemaining // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4bad330
	struct TArray<float> GetActiveEffectsDuration(struct FGameplayEffectQuery& Query); // Function GameplayAbilities.AbilitySystemComponent.GetActiveEffectsDuration // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4bad1a0
	struct TArray<struct FActiveGameplayEffectHandle> GetActiveEffects(struct FGameplayEffectQuery& Query); // Function GameplayAbilities.AbilitySystemComponent.GetActiveEffects // (Final|Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x4bad010
	void FindAllAbilitiesWithTags(struct TArray<struct FGameplayAbilitySpecHandle>& OutAbilityHandles, struct FGameplayTagContainer Tags, bool bExactMatch); // Function GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesWithTags // (Final|Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x4ba7c10
	void FindAllAbilitiesWithInputID(struct TArray<struct FGameplayAbilitySpecHandle>& OutAbilityHandles, int32_t InputID); // Function GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesWithInputID // (Final|Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x4ba74a0
	void FindAllAbilitiesMatchingQuery(struct TArray<struct FGameplayAbilitySpecHandle>& OutAbilityHandles, struct FGameplayTagQuery Query); // Function GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesMatchingQuery // (Final|Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x4ba7730
	void ClientTryActivateAbility(struct FGameplayAbilitySpecHandle AbilityToActivate); // Function GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x4ba4610
	void ClientSetReplicatedEvent(enum class EAbilityGenericReplicatedEvent EventType, struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x4ba5b20
	void ClientPrintDebug_Response(struct TArray<struct FString> Strings, int32_t GameFlags); // Function GameplayAbilities.AbilitySystemComponent.ClientPrintDebug_Response // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x4ba70c0
	void ClientEndAbility(struct FGameplayAbilitySpecHandle AbilityToEnd, struct FGameplayAbilityActivationInfo ActivationInfo); // Function GameplayAbilities.AbilitySystemComponent.ClientEndAbility // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x4ba4130
	void ClientCancelAbility(struct FGameplayAbilitySpecHandle AbilityToCancel, struct FGameplayAbilityActivationInfo ActivationInfo); // Function GameplayAbilities.AbilitySystemComponent.ClientCancelAbility // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x4ba3d20
	void ClientActivateAbilitySucceedWithEventData(struct FGameplayAbilitySpecHandle AbilityToActivate, struct FPredictionKey PredictionKey, struct FGameplayEventData TriggerEventData); // Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x4ba34b0
	void ClientActivateAbilitySucceed(struct FGameplayAbilitySpecHandle AbilityToActivate, struct FPredictionKey PredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x4ba39a0
	void ClientActivateAbilityFailed(struct FGameplayAbilitySpecHandle AbilityToActivate, int16_t PredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x4ba3b70
	void ClearAllAbilitiesWithInputID(int32_t InputID); // Function GameplayAbilities.AbilitySystemComponent.ClearAllAbilitiesWithInputID // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x4ba8a60
	void ClearAllAbilities(); // Function GameplayAbilities.AbilitySystemComponent.ClearAllAbilities // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x4ba8bd0
	void ClearAbility(struct FGameplayAbilitySpecHandle& Handle); // Function GameplayAbilities.AbilitySystemComponent.ClearAbility // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4ba8960
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToTarget(struct UGameplayEffect* GameplayEffectClass, struct UAbilitySystemComponent* Target, float Level, struct FGameplayEffectContextHandle Context); // Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget // (Final|Native|Public|BlueprintCallable) // @ game+0x4bad9c0
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToSelf(struct UGameplayEffect* GameplayEffectClass, float Level, struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf // (Final|Native|Public|BlueprintCallable) // @ game+0x4bad4c0
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToTarget(struct FGameplayEffectSpecHandle& SpecHandle, struct UAbilitySystemComponent* Target); // Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4bafe00
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToSelf(struct FGameplayEffectSpecHandle& SpecHandle); // Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4bafc40
	void AbilityConfirmOrCancel__DelegateSignature(); // DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x19be2f0
	void AbilityAbilityKey__DelegateSignature(int32_t InputID); // DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x19be2f0
};

// Class GameplayAbilities.AbilitySystemDebugHUDExtension
// Size: 0x30 (Inherited: 0x30)
struct UAbilitySystemDebugHUDExtension : UObject {
};

// Class GameplayAbilities.AbilitySystemDebugHUDExtension_Tags
// Size: 0x88 (Inherited: 0x30)
struct UAbilitySystemDebugHUDExtension_Tags : UAbilitySystemDebugHUDExtension {
	char pad_30[0x58]; // 0x30(0x58)
};

// Class GameplayAbilities.AbilitySystemDebugHUDExtension_Attributes
// Size: 0x88 (Inherited: 0x30)
struct UAbilitySystemDebugHUDExtension_Attributes : UAbilitySystemDebugHUDExtension {
	char pad_30[0x58]; // 0x30(0x58)
};

// Class GameplayAbilities.AbilitySystemDebugHUDExtension_BlockedAbilityTags
// Size: 0x88 (Inherited: 0x30)
struct UAbilitySystemDebugHUDExtension_BlockedAbilityTags : UAbilitySystemDebugHUDExtension {
	char pad_30[0x58]; // 0x30(0x58)
};

// Class GameplayAbilities.AbilitySystemGlobals
// Size: 0x340 (Inherited: 0x30)
struct UAbilitySystemGlobals : UObject {
	struct FSoftClassPath AbilitySystemGlobalsClassName; // 0x30(0x28)
	char pad_58[0x28]; // 0x58(0x28)
	bool bUseDebugTargetFromHud; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	struct FGameplayTag ActivateFailIsDeadTag; // 0x84(0x0c)
	struct FName ActivateFailIsDeadName; // 0x90(0x0c)
	struct FGameplayTag ActivateFailCooldownTag; // 0x9c(0x0c)
	struct FName ActivateFailCooldownName; // 0xa8(0x0c)
	struct FGameplayTag ActivateFailCostTag; // 0xb4(0x0c)
	struct FName ActivateFailCostName; // 0xc0(0x0c)
	struct FGameplayTag ActivateFailTagsBlockedTag; // 0xcc(0x0c)
	struct FName ActivateFailTagsBlockedName; // 0xd8(0x0c)
	struct FGameplayTag ActivateFailTagsMissingTag; // 0xe4(0x0c)
	struct FName ActivateFailTagsMissingName; // 0xf0(0x0c)
	struct FGameplayTag ActivateFailNetworkingTag; // 0xfc(0x0c)
	struct FName ActivateFailNetworkingName; // 0x108(0x0c)
	int32_t MinimalReplicationTagCountBits; // 0x114(0x04)
	struct FNetSerializeScriptStructCache TargetDataStructCache; // 0x118(0x10)
	struct FNetSerializeScriptStructCache EffectContextStructCache; // 0x128(0x10)
	bool bAllowGameplayModEvaluationChannels; // 0x138(0x01)
	enum class EGameplayModEvaluationChannel DefaultGameplayModEvaluationChannel; // 0x139(0x01)
	char pad_13A[0x2]; // 0x13a(0x02)
	struct FName GameplayModEvaluationChannelAliases[0xa]; // 0x13c(0x78)
	char pad_1B4[0x4]; // 0x1b4(0x04)
	struct FSoftObjectPath GlobalCurveTableName; // 0x1b8(0x28)
	struct UCurveTable* GlobalCurveTable; // 0x1e0(0x08)
	struct FSoftObjectPath GlobalAttributeMetaDataTableName; // 0x1e8(0x28)
	struct UDataTable* GlobalAttributeMetaDataTable; // 0x210(0x08)
	struct FSoftObjectPath GlobalAttributeSetDefaultsTableName; // 0x218(0x28)
	struct TArray<struct FSoftObjectPath> GlobalAttributeSetDefaultsTableNames; // 0x240(0x10)
	struct TArray<struct UCurveTable*> GlobalAttributeDefaultsTables; // 0x250(0x10)
	struct FSoftObjectPath GlobalGameplayCueManagerClass; // 0x260(0x28)
	struct FSoftObjectPath GlobalGameplayCueManagerName; // 0x288(0x28)
	struct TArray<struct FString> GameplayCueNotifyPaths; // 0x2b0(0x10)
	struct FSoftObjectPath GameplayTagResponseTableName; // 0x2c0(0x28)
	struct UGameplayTagReponseTable* GameplayTagResponseTable; // 0x2e8(0x08)
	char pad_2F0[0x1]; // 0x2f0(0x01)
	bool PredictTargetGameplayEffects; // 0x2f1(0x01)
	bool ReplicateActivationOwnedTags; // 0x2f2(0x01)
	char pad_2F3[0x5]; // 0x2f3(0x05)
	struct UGameplayCueManager* GlobalGameplayCueManager; // 0x2f8(0x08)
	char pad_300[0x40]; // 0x300(0x40)
};

// Class GameplayAbilities.AbilitySystemInterface
// Size: 0x30 (Inherited: 0x30)
struct UAbilitySystemInterface : UInterface {
};

// Class GameplayAbilities.AbilitySystemReplicationProxyInterface
// Size: 0x30 (Inherited: 0x30)
struct UAbilitySystemReplicationProxyInterface : UInterface {
};

// Class GameplayAbilities.AttributeSet
// Size: 0x38 (Inherited: 0x30)
struct UAttributeSet : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class GameplayAbilities.AbilitySystemTestAttributeSet
// Size: 0x78 (Inherited: 0x38)
struct UAbilitySystemTestAttributeSet : UAttributeSet {
	float MaxHealth; // 0x38(0x04)
	float Health; // 0x3c(0x04)
	float Mana; // 0x40(0x04)
	float MaxMana; // 0x44(0x04)
	float Damage; // 0x48(0x04)
	float SpellDamage; // 0x4c(0x04)
	float PhysicalDamage; // 0x50(0x04)
	float CritChance; // 0x54(0x04)
	float CritMultiplier; // 0x58(0x04)
	float ArmorDamageReduction; // 0x5c(0x04)
	float DodgeChance; // 0x60(0x04)
	float LifeSteal; // 0x64(0x04)
	float Strength; // 0x68(0x04)
	float StackingAttribute1; // 0x6c(0x04)
	float StackingAttribute2; // 0x70(0x04)
	float NoStackAttribute; // 0x74(0x04)
};

// Class GameplayAbilities.AbilitySystemTestPawn
// Size: 0x530 (Inherited: 0x510)
struct AAbilitySystemTestPawn : ADefaultPawn {
	char pad_510[0x18]; // 0x510(0x18)
	struct UAbilitySystemComponent* AbilitySystemComponent; // 0x528(0x08)
};

// Class GameplayAbilities.AnimNotify_GameplayCue
// Size: 0x50 (Inherited: 0x40)
struct UAnimNotify_GameplayCue : UAnimNotify {
	struct FGameplayCueTag GameplayCue; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class GameplayAbilities.AnimNotify_GameplayCueState
// Size: 0x48 (Inherited: 0x38)
struct UAnimNotify_GameplayCueState : UAnimNotifyState {
	struct FGameplayCueTag GameplayCue; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class GameplayAbilities.GameplayAbilityBlueprint
// Size: 0xb0 (Inherited: 0xb0)
struct UGameplayAbilityBlueprint : UBlueprint {
};

// Class GameplayAbilities.GameplayCueFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UGameplayCueFunctionLibrary : UBlueprintFunctionLibrary {

	void RemoveGameplayCueOnActor(struct AActor* Target, struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueFunctionLibrary.RemoveGameplayCueOnActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4bf3f80
	struct FGameplayCueParameters MakeGameplayCueParametersFromHitResult(struct FHitResult& HitResult); // Function GameplayAbilities.GameplayCueFunctionLibrary.MakeGameplayCueParametersFromHitResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4bf4f30
	void ExecuteGameplayCueOnActor(struct AActor* Target, struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueFunctionLibrary.ExecuteGameplayCueOnActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4bf4a80
	void AddGameplayCueOnActor(struct AActor* Target, struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueFunctionLibrary.AddGameplayCueOnActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4bf44e0
};

// Class GameplayAbilities.GameplayCueInterface
// Size: 0x30 (Inherited: 0x30)
struct UGameplayCueInterface : UInterface {

	void ForwardGameplayCueToParent(); // Function GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent // (BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x4346340
	void BlueprintCustomHandler(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
};

// Class GameplayAbilities.GameplayCueManager
// Size: 0x2c8 (Inherited: 0x38)
struct UGameplayCueManager : UDataAsset {
	char pad_38[0x18]; // 0x38(0x18)
	struct FGameplayCueObjectLibrary RuntimeGameplayCueObjectLibrary; // 0x50(0x50)
	struct FGameplayCueObjectLibrary EditorGameplayCueObjectLibrary; // 0xa0(0x50)
	char pad_F0[0x178]; // 0xf0(0x178)
	struct TArray<ClassPtrProperty> LoadedGameplayCueNotifyClasses; // 0x268(0x10)
	struct TArray<struct AGameplayCueNotify_Actor*> GameplayCueClassesForPreallocation; // 0x278(0x10)
	struct TArray<struct FGameplayCuePendingExecute> PendingExecuteCues; // 0x288(0x10)
	int32_t GameplayCueSendContextCount; // 0x298(0x04)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct TArray<struct FPreallocationInfo> PreallocationInfoList_Internal; // 0x2a0(0x10)
	char pad_2B0[0x18]; // 0x2b0(0x18)
};

// Class GameplayAbilities.GameplayCueNotify_Actor
// Size: 0x4d8 (Inherited: 0x460)
struct AGameplayCueNotify_Actor : AActor {
	bool bAutoDestroyOnRemove; // 0x460(0x01)
	char pad_461[0x3]; // 0x461(0x03)
	float AutoDestroyDelay; // 0x464(0x04)
	bool WarnIfTimelineIsStillRunning; // 0x468(0x01)
	bool WarnIfLatentActionIsStillRunning; // 0x469(0x01)
	char pad_46A[0x2]; // 0x46a(0x02)
	struct FGameplayTag GameplayCueTag; // 0x46c(0x0c)
	struct FName GameplayCueName; // 0x478(0x0c)
	bool bAutoAttachToOwner; // 0x484(0x01)
	bool IsOverride; // 0x485(0x01)
	bool bUniqueInstancePerInstigator; // 0x486(0x01)
	bool bUniqueInstancePerSourceObject; // 0x487(0x01)
	bool bAllowMultipleOnActiveEvents; // 0x488(0x01)
	bool bAllowMultipleWhileActiveEvents; // 0x489(0x01)
	char pad_48A[0x2]; // 0x48a(0x02)
	int32_t NumPreallocatedInstances; // 0x48c(0x04)
	char pad_490[0x48]; // 0x490(0x48)

	bool WhileActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x4c02120
	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x4c01dd0
	void OnOwnerDestroyed(struct AActor* DestroyedActor); // Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed // (Native|Public) // @ game+0x4c02b40
	bool OnExecute(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x4c027c0
	bool OnActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueNotify_Actor.OnActive // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x4c02470
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void K2_EndGameplayCue(); // Function GameplayAbilities.GameplayCueNotify_Actor.K2_EndGameplayCue // (Native|Public|BlueprintCallable) // @ game+0x4c02b10
};

// Class GameplayAbilities.GameplayCueNotify_Static
// Size: 0x50 (Inherited: 0x30)
struct UGameplayCueNotify_Static : UObject {
	struct FGameplayTag GameplayCueTag; // 0x30(0x0c)
	struct FName GameplayCueName; // 0x3c(0x0c)
	bool IsOverride; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)

	bool WhileActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueNotify_Static.WhileActive // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x4c07230
	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueNotify_Static.OnRemove // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x4c06ee0
	bool OnExecute(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueNotify_Static.OnExecute // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x4c078d0
	bool OnActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueNotify_Static.OnActive // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x4c07580
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x19be2f0
};

// Class GameplayAbilities.GameplayCueNotify_Burst
// Size: 0x390 (Inherited: 0x50)
struct UGameplayCueNotify_Burst : UGameplayCueNotify_Static {
	struct FGameplayCueNotify_SpawnCondition DefaultSpawnCondition; // 0x50(0x38)
	struct FGameplayCueNotify_PlacementInfo DefaultPlacementInfo; // 0x88(0x48)
	struct FGameplayCueNotify_BurstEffects BurstEffects; // 0xd0(0x2c0)

	void OnBurst(struct AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // Function GameplayAbilities.GameplayCueNotify_Burst.OnBurst // (Event|Protected|HasOutParms|BlueprintEvent|Const) // @ game+0x19be2f0
};

// Class GameplayAbilities.GameplayCueNotify_BurstLatent
// Size: 0x870 (Inherited: 0x4d8)
struct AGameplayCueNotify_BurstLatent : AGameplayCueNotify_Actor {
	struct FGameplayCueNotify_SpawnCondition DefaultSpawnCondition; // 0x4d8(0x38)
	struct FGameplayCueNotify_PlacementInfo DefaultPlacementInfo; // 0x510(0x48)
	struct FGameplayCueNotify_BurstEffects BurstEffects; // 0x558(0x2c0)
	struct FGameplayCueNotify_SpawnResult BurstSpawnResults; // 0x818(0x58)

	void OnBurst(struct AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // Function GameplayAbilities.GameplayCueNotify_BurstLatent.OnBurst // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
};

// Class GameplayAbilities.GameplayCueNotify_HitImpact
// Size: 0x60 (Inherited: 0x50)
struct UGameplayCueNotify_HitImpact : UGameplayCueNotify_Static {
	struct USoundBase* Sound; // 0x50(0x08)
	struct UParticleSystem* ParticleSystem; // 0x58(0x08)
};

// Class GameplayAbilities.GameplayCueNotify_Looping
// Size: 0x1110 (Inherited: 0x4d8)
struct AGameplayCueNotify_Looping : AGameplayCueNotify_Actor {
	struct FGameplayCueNotify_SpawnCondition DefaultSpawnCondition; // 0x4d8(0x38)
	struct FGameplayCueNotify_PlacementInfo DefaultPlacementInfo; // 0x510(0x48)
	struct FGameplayCueNotify_BurstEffects ApplicationEffects; // 0x558(0x2c0)
	struct FGameplayCueNotify_SpawnResult ApplicationSpawnResults; // 0x818(0x58)
	struct FGameplayCueNotify_LoopingEffects LoopingEffects; // 0x870(0x210)
	struct FGameplayCueNotify_SpawnResult LoopingSpawnResults; // 0xa80(0x58)
	struct FGameplayCueNotify_BurstEffects RecurringEffects; // 0xad8(0x2c0)
	struct FGameplayCueNotify_SpawnResult RecurringSpawnResults; // 0xd98(0x58)
	struct FGameplayCueNotify_BurstEffects RemovalEffects; // 0xdf0(0x2c0)
	struct FGameplayCueNotify_SpawnResult RemovalSpawnResults; // 0x10b0(0x58)
	char pad_1108[0x8]; // 0x1108(0x08)

	void OnRemoval(struct AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // Function GameplayAbilities.GameplayCueNotify_Looping.OnRemoval // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnRecurring(struct AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // Function GameplayAbilities.GameplayCueNotify_Looping.OnRecurring // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnLoopingStart(struct AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // Function GameplayAbilities.GameplayCueNotify_Looping.OnLoopingStart // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnApplication(struct AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // Function GameplayAbilities.GameplayCueNotify_Looping.OnApplication // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
};

// Class GameplayAbilities.GameplayCueSet
// Size: 0x98 (Inherited: 0x38)
struct UGameplayCueSet : UDataAsset {
	struct TArray<struct FGameplayCueNotifyData> GameplayCueData; // 0x38(0x10)
	char pad_48[0x50]; // 0x48(0x50)
};

// Class GameplayAbilities.GameplayCueTranslator
// Size: 0x30 (Inherited: 0x30)
struct UGameplayCueTranslator : UObject {
};

// Class GameplayAbilities.GameplayCueTranslator_Test
// Size: 0x30 (Inherited: 0x30)
struct UGameplayCueTranslator_Test : UGameplayCueTranslator {
};

// Class GameplayAbilities.GameplayEffectCalculation
// Size: 0x40 (Inherited: 0x30)
struct UGameplayEffectCalculation : UObject {
	struct TArray<struct FGameplayEffectAttributeCaptureDefinition> RelevantAttributesToCapture; // 0x30(0x10)
};

// Class GameplayAbilities.GameplayEffectCustomApplicationRequirement
// Size: 0x30 (Inherited: 0x30)
struct UGameplayEffectCustomApplicationRequirement : UObject {

	bool CanApplyGameplayEffect(struct UGameplayEffect* GameplayEffect, struct FGameplayEffectSpec& Spec, struct UAbilitySystemComponent* ASC); // Function GameplayAbilities.GameplayEffectCustomApplicationRequirement.CanApplyGameplayEffect // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x4c3dcc0
};

// Class GameplayAbilities.GameplayEffectExecutionCalculation
// Size: 0x48 (Inherited: 0x40)
struct UGameplayEffectExecutionCalculation : UGameplayEffectCalculation {
	bool bRequiresPassedInTags; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)

	void Execute(struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput& OutExecutionOutput); // Function GameplayAbilities.GameplayEffectExecutionCalculation.Execute // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x4c3e370
};

// Class GameplayAbilities.GameplayModMagnitudeCalculation
// Size: 0x48 (Inherited: 0x40)
struct UGameplayModMagnitudeCalculation : UGameplayEffectCalculation {
	bool bAllowNonNetAuthorityDependencyRegistration; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)

	float K2_GetCapturedAttributeMagnitude(struct FGameplayEffectSpec& EffectSpec, struct FGameplayAttribute Attribute, struct FGameplayTagContainer& SourceTags, struct FGameplayTagContainer& TargetTags); // Function GameplayAbilities.GameplayModMagnitudeCalculation.K2_GetCapturedAttributeMagnitude // (Final|Native|Protected|HasOutParms|BlueprintCallable|Const) // @ game+0x4c452d0
	struct FGameplayTagContainer GetTargetSpecTags(struct FGameplayEffectSpec& EffectSpec); // Function GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetSpecTags // (Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4c44620
	struct FGameplayTagContainer GetTargetAggregatedTags(struct FGameplayEffectSpec& EffectSpec); // Function GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetAggregatedTags // (Final|Native|Protected|HasOutParms|BlueprintCallable|Const) // @ game+0x4c448a0
	struct FGameplayTagContainer GetTargetActorTags(struct FGameplayEffectSpec& EffectSpec); // Function GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetActorTags // (Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4c44760
	struct FGameplayTagContainer GetSourceSpecTags(struct FGameplayEffectSpec& EffectSpec); // Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceSpecTags // (Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4c44a80
	struct FGameplayTagContainer GetSourceAggregatedTags(struct FGameplayEffectSpec& EffectSpec); // Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceAggregatedTags // (Final|Native|Protected|HasOutParms|BlueprintCallable|Const) // @ game+0x4c44cf0
	struct FGameplayTagContainer GetSourceActorTags(struct FGameplayEffectSpec& EffectSpec); // Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceActorTags // (Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4c44bc0
	float GetSetByCallerMagnitudeByTag(struct FGameplayEffectSpec& EffectSpec, struct FGameplayTag& Tag); // Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSetByCallerMagnitudeByTag // (Final|Native|Protected|HasOutParms|BlueprintCallable|Const) // @ game+0x4c450d0
	float GetSetByCallerMagnitudeByName(struct FGameplayEffectSpec& EffectSpec, struct FName& MagnitudeName); // Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSetByCallerMagnitudeByName // (Final|Native|Protected|HasOutParms|BlueprintCallable|Const) // @ game+0x4c44ed0
	float CalculateBaseMagnitude(struct FGameplayEffectSpec& Spec); // Function GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x4c45760
};

// Class GameplayAbilities.GameplayTagReponseTable
// Size: 0x240 (Inherited: 0x38)
struct UGameplayTagReponseTable : UDataAsset {
	struct TArray<struct FGameplayTagResponseTableEntry> Entries; // 0x38(0x10)
	char pad_48[0x1f8]; // 0x48(0x1f8)

	void TagResponseEvent(struct FGameplayTag Tag, int32_t NewCount, struct UAbilitySystemComponent* ASC, int32_t idx); // Function GameplayAbilities.GameplayTagReponseTable.TagResponseEvent // (Final|Native|Protected) // @ game+0x4c48250
};

// Class GameplayAbilities.MovieSceneGameplayCueTriggerSection
// Size: 0x208 (Inherited: 0x110)
struct UMovieSceneGameplayCueTriggerSection : UMovieSceneHookSection {
	struct FMovieSceneGameplayCueChannel Channel; // 0x110(0xf8)
};

// Class GameplayAbilities.MovieSceneGameplayCueSection
// Size: 0x1a8 (Inherited: 0x110)
struct UMovieSceneGameplayCueSection : UMovieSceneHookSection {
	struct FMovieSceneGameplayCueKey Cue; // 0x110(0x98)
};

// Class GameplayAbilities.MovieSceneGameplayCueTrack
// Size: 0xb0 (Inherited: 0xa0)
struct UMovieSceneGameplayCueTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0xa0(0x10)

	void SetSequencerTrackHandler(struct FDelegate InGameplayCueTrackHandler); // Function GameplayAbilities.MovieSceneGameplayCueTrack.SetSequencerTrackHandler // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4c4b6b0
};

// Class GameplayAbilities.TickableAttributeSetInterface
// Size: 0x30 (Inherited: 0x30)
struct UTickableAttributeSetInterface : UInterface {
};

