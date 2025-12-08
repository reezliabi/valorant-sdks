// Class InterchangeImport.InterchangeAnimationPayloadInterface
// Size: 0x30 (Inherited: 0x30)
struct UInterchangeAnimationPayloadInterface : UInterface {
};

// Class InterchangeImport.InterchangeAnimationTrackSetFactory
// Size: 0x40 (Inherited: 0x38)
struct UInterchangeAnimationTrackSetFactory : UInterchangeFactoryBase {
	char pad_38[0x8]; // 0x38(0x08)
};

// Class InterchangeImport.InterchangeBlockedTexturePayloadInterface
// Size: 0x30 (Inherited: 0x30)
struct UInterchangeBlockedTexturePayloadInterface : UInterface {
};

// Class InterchangeImport.InterchangeActorFactory
// Size: 0x38 (Inherited: 0x38)
struct UInterchangeActorFactory : UInterchangeFactoryBase {
};

// Class InterchangeImport.InterchangeLightActorFactory
// Size: 0x38 (Inherited: 0x38)
struct UInterchangeLightActorFactory : UInterchangeActorFactory {
};

// Class InterchangeImport.InterchangeMeshPayloadInterface
// Size: 0x30 (Inherited: 0x30)
struct UInterchangeMeshPayloadInterface : UInterface {
};

// Class InterchangeImport.InterchangeSceneImportAssetFactory
// Size: 0x38 (Inherited: 0x38)
struct UInterchangeSceneImportAssetFactory : UInterchangeFactoryBase {
};

// Class InterchangeImport.InterchangeSceneVariantSetsFactory
// Size: 0x40 (Inherited: 0x38)
struct UInterchangeSceneVariantSetsFactory : UInterchangeFactoryBase {
	char pad_38[0x8]; // 0x38(0x08)
};

// Class InterchangeImport.InterchangeSlicedTexturePayloadInterface
// Size: 0x30 (Inherited: 0x30)
struct UInterchangeSlicedTexturePayloadInterface : UInterface {
};

// Class InterchangeImport.InterchangeTextureLightProfilePayloadInterface
// Size: 0x30 (Inherited: 0x30)
struct UInterchangeTextureLightProfilePayloadInterface : UInterface {
};

// Class InterchangeImport.InterchangeTexturePayloadInterface
// Size: 0x30 (Inherited: 0x30)
struct UInterchangeTexturePayloadInterface : UInterface {
};

// Class InterchangeImport.InterchangeVariantSetPayloadInterface
// Size: 0x30 (Inherited: 0x30)
struct UInterchangeVariantSetPayloadInterface : UInterface {
};

// Class InterchangeImport.MaterialExpressionMaterialXRamp4
// Size: 0x1b0 (Inherited: 0xb8)
struct UMaterialExpressionMaterialXRamp4 : UMaterialExpression {
	struct FExpressionInput Coordinates; // 0xb8(0x30)
	struct FExpressionInput A; // 0xe8(0x30)
	struct FExpressionInput B; // 0x118(0x30)
	struct FExpressionInput C; // 0x148(0x30)
	struct FExpressionInput D; // 0x178(0x30)
	char ConstCoordinate; // 0x1a8(0x01)
	char pad_1A9[0x7]; // 0x1a9(0x07)
};

// Class InterchangeImport.InterchangeAnimSequenceFactory
// Size: 0x38 (Inherited: 0x38)
struct UInterchangeAnimSequenceFactory : UInterchangeFactoryBase {
};

// Class InterchangeImport.InterchangeFbxTranslator
// Size: 0x60 (Inherited: 0x40)
struct UInterchangeFbxTranslator : UInterchangeTranslatorBase {
	char pad_40[0x20]; // 0x40(0x20)
};

// Class InterchangeImport.InterchangeGLTFTranslator
// Size: 0x280 (Inherited: 0x40)
struct UInterchangeGLTFTranslator : UInterchangeTranslatorBase {
	char pad_40[0x240]; // 0x40(0x240)
};

// Class InterchangeImport.InterchangeMaterialXTranslator
// Size: 0x48 (Inherited: 0x40)
struct UInterchangeMaterialXTranslator : UInterchangeTranslatorBase {
	char pad_40[0x8]; // 0x40(0x08)
};

// Class InterchangeImport.MaterialExpressionMaterialXAppend3Vector
// Size: 0x148 (Inherited: 0xb8)
struct UMaterialExpressionMaterialXAppend3Vector : UMaterialExpression {
	struct FExpressionInput A; // 0xb8(0x30)
	struct FExpressionInput B; // 0xe8(0x30)
	struct FExpressionInput C; // 0x118(0x30)
};

// Class InterchangeImport.MaterialExpressionMaterialXAppend4Vector
// Size: 0x178 (Inherited: 0xb8)
struct UMaterialExpressionMaterialXAppend4Vector : UMaterialExpression {
	struct FExpressionInput A; // 0xb8(0x30)
	struct FExpressionInput B; // 0xe8(0x30)
	struct FExpressionInput C; // 0x118(0x30)
	struct FExpressionInput D; // 0x148(0x30)
};

// Class InterchangeImport.MaterialExpressionMaterialXBurn
// Size: 0x150 (Inherited: 0xb8)
struct UMaterialExpressionMaterialXBurn : UMaterialExpression {
	struct FExpressionInput A; // 0xb8(0x30)
	struct FExpressionInput B; // 0xe8(0x30)
	struct FExpressionInput Alpha; // 0x118(0x30)
	float ConstAlpha; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
};

// Class InterchangeImport.MaterialExpressionMaterialXDifference
// Size: 0x150 (Inherited: 0xb8)
struct UMaterialExpressionMaterialXDifference : UMaterialExpression {
	struct FExpressionInput A; // 0xb8(0x30)
	struct FExpressionInput B; // 0xe8(0x30)
	struct FExpressionInput Alpha; // 0x118(0x30)
	float ConstAlpha; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
};

// Class InterchangeImport.MaterialExpressionMaterialXDisjointOver
// Size: 0x150 (Inherited: 0xb8)
struct UMaterialExpressionMaterialXDisjointOver : UMaterialExpression {
	struct FExpressionInput A; // 0xb8(0x30)
	struct FExpressionInput B; // 0xe8(0x30)
	struct FExpressionInput Alpha; // 0x118(0x30)
	float ConstAlpha; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
};

// Class InterchangeImport.MaterialExpressionMaterialXDodge
// Size: 0x150 (Inherited: 0xb8)
struct UMaterialExpressionMaterialXDodge : UMaterialExpression {
	struct FExpressionInput A; // 0xb8(0x30)
	struct FExpressionInput B; // 0xe8(0x30)
	struct FExpressionInput Alpha; // 0x118(0x30)
	float ConstAlpha; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
};

// Class InterchangeImport.MaterialExpressionMaterialXFractal3D
// Size: 0x1d8 (Inherited: 0xb8)
struct UMaterialExpressionMaterialXFractal3D : UMaterialExpression {
	struct FExpressionInput Position; // 0xb8(0x30)
	struct FExpressionInput Amplitude; // 0xe8(0x30)
	float ConstAmplitude; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct FExpressionInput Octaves; // 0x120(0x30)
	int32_t ConstOctaves; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct FExpressionInput Lacunarity; // 0x158(0x30)
	float ConstLacunarity; // 0x188(0x04)
	char pad_18C[0x4]; // 0x18c(0x04)
	struct FExpressionInput Diminish; // 0x190(0x30)
	float ConstDiminish; // 0x1c0(0x04)
	float Scale; // 0x1c4(0x04)
	bool bTurbulence; // 0x1c8(0x01)
	char pad_1C9[0x3]; // 0x1c9(0x03)
	int32_t Levels; // 0x1cc(0x04)
	float OutputMin; // 0x1d0(0x04)
	float OutputMax; // 0x1d4(0x04)
};

// Class InterchangeImport.MaterialExpressionMaterialXIn
// Size: 0x150 (Inherited: 0xb8)
struct UMaterialExpressionMaterialXIn : UMaterialExpression {
	struct FExpressionInput A; // 0xb8(0x30)
	struct FExpressionInput B; // 0xe8(0x30)
	struct FExpressionInput Alpha; // 0x118(0x30)
	float ConstAlpha; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
};

// Class InterchangeImport.MaterialExpressionMaterialXLuminance
// Size: 0x100 (Inherited: 0xb8)
struct UMaterialExpressionMaterialXLuminance : UMaterialExpression {
	struct FExpressionInput Input; // 0xb8(0x30)
	struct FLinearColor LuminanceFactors; // 0xe8(0x10)
	enum class EMaterialXLuminanceMode LuminanceMode; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
};

// Class InterchangeImport.MaterialExpressionMaterialXMask
// Size: 0x150 (Inherited: 0xb8)
struct UMaterialExpressionMaterialXMask : UMaterialExpression {
	struct FExpressionInput A; // 0xb8(0x30)
	struct FExpressionInput B; // 0xe8(0x30)
	struct FExpressionInput Alpha; // 0x118(0x30)
	float ConstAlpha; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
};

// Class InterchangeImport.MaterialExpressionMaterialXMatte
// Size: 0x150 (Inherited: 0xb8)
struct UMaterialExpressionMaterialXMatte : UMaterialExpression {
	struct FExpressionInput A; // 0xb8(0x30)
	struct FExpressionInput B; // 0xe8(0x30)
	struct FExpressionInput Alpha; // 0x118(0x30)
	float ConstAlpha; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
};

// Class InterchangeImport.MaterialExpressionMaterialXMinus
// Size: 0x150 (Inherited: 0xb8)
struct UMaterialExpressionMaterialXMinus : UMaterialExpression {
	struct FExpressionInput A; // 0xb8(0x30)
	struct FExpressionInput B; // 0xe8(0x30)
	struct FExpressionInput Alpha; // 0x118(0x30)
	float ConstAlpha; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
};

// Class InterchangeImport.MaterialExpressionMaterialXOut
// Size: 0x150 (Inherited: 0xb8)
struct UMaterialExpressionMaterialXOut : UMaterialExpression {
	struct FExpressionInput A; // 0xb8(0x30)
	struct FExpressionInput B; // 0xe8(0x30)
	struct FExpressionInput Alpha; // 0x118(0x30)
	float ConstAlpha; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
};

// Class InterchangeImport.MaterialExpressionMaterialXOver
// Size: 0x150 (Inherited: 0xb8)
struct UMaterialExpressionMaterialXOver : UMaterialExpression {
	struct FExpressionInput A; // 0xb8(0x30)
	struct FExpressionInput B; // 0xe8(0x30)
	struct FExpressionInput Alpha; // 0x118(0x30)
	float ConstAlpha; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
};

// Class InterchangeImport.MaterialExpressionMaterialXOverlay
// Size: 0x150 (Inherited: 0xb8)
struct UMaterialExpressionMaterialXOverlay : UMaterialExpression {
	struct FExpressionInput A; // 0xb8(0x30)
	struct FExpressionInput B; // 0xe8(0x30)
	struct FExpressionInput Alpha; // 0x118(0x30)
	float ConstAlpha; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
};

// Class InterchangeImport.MaterialExpressionMaterialXPlace2D
// Size: 0x1b0 (Inherited: 0xb8)
struct UMaterialExpressionMaterialXPlace2D : UMaterialExpression {
	struct FExpressionInput Coordinates; // 0xb8(0x30)
	struct FExpressionInput Pivot; // 0xe8(0x30)
	struct FExpressionInput Scale; // 0x118(0x30)
	struct FExpressionInput Offset; // 0x148(0x30)
	struct FExpressionInput RotationAngle; // 0x178(0x30)
	float ConstRotationAngle; // 0x1a8(0x04)
	char ConstCoordinate; // 0x1ac(0x01)
	char pad_1AD[0x3]; // 0x1ad(0x03)
};

// Class InterchangeImport.MaterialExpressionMaterialXPlus
// Size: 0x150 (Inherited: 0xb8)
struct UMaterialExpressionMaterialXPlus : UMaterialExpression {
	struct FExpressionInput A; // 0xb8(0x30)
	struct FExpressionInput B; // 0xe8(0x30)
	struct FExpressionInput Alpha; // 0x118(0x30)
	float ConstAlpha; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
};

// Class InterchangeImport.MaterialExpressionMaterialXPremult
// Size: 0xe8 (Inherited: 0xb8)
struct UMaterialExpressionMaterialXPremult : UMaterialExpression {
	struct FExpressionInput Input; // 0xb8(0x30)
};

// Class InterchangeImport.MaterialExpressionMaterialXRampLeftRight
// Size: 0x150 (Inherited: 0xb8)
struct UMaterialExpressionMaterialXRampLeftRight : UMaterialExpression {
	struct FExpressionInput Coordinates; // 0xb8(0x30)
	struct FExpressionInput A; // 0xe8(0x30)
	struct FExpressionInput B; // 0x118(0x30)
	char ConstCoordinate; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
};

// Class InterchangeImport.MaterialExpressionMaterialXRampTopBottom
// Size: 0x150 (Inherited: 0xb8)
struct UMaterialExpressionMaterialXRampTopBottom : UMaterialExpression {
	struct FExpressionInput Coordinates; // 0xb8(0x30)
	struct FExpressionInput A; // 0xe8(0x30)
	struct FExpressionInput B; // 0x118(0x30)
	char ConstCoordinate; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
};

// Class InterchangeImport.MaterialExpressionMaterialXRemap
// Size: 0x1b8 (Inherited: 0xb8)
struct UMaterialExpressionMaterialXRemap : UMaterialExpression {
	struct FExpressionInput Input; // 0xb8(0x30)
	struct FExpressionInput InputLow; // 0xe8(0x30)
	struct FExpressionInput InputHigh; // 0x118(0x30)
	struct FExpressionInput TargetLow; // 0x148(0x30)
	struct FExpressionInput TargetHigh; // 0x178(0x30)
	float InputLowDefault; // 0x1a8(0x04)
	float InputHighDefault; // 0x1ac(0x04)
	float TargetLowDefault; // 0x1b0(0x04)
	float TargetHighDefault; // 0x1b4(0x04)
};

// Class InterchangeImport.MaterialExpressionMaterialXRotate2D
// Size: 0x120 (Inherited: 0xb8)
struct UMaterialExpressionMaterialXRotate2D : UMaterialExpression {
	struct FExpressionInput Input; // 0xb8(0x30)
	struct FExpressionInput RotationAngle; // 0xe8(0x30)
	float ConstRotationAngle; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
};

// Class InterchangeImport.MaterialExpressionMaterialXScreen
// Size: 0x150 (Inherited: 0xb8)
struct UMaterialExpressionMaterialXScreen : UMaterialExpression {
	struct FExpressionInput A; // 0xb8(0x30)
	struct FExpressionInput B; // 0xe8(0x30)
	struct FExpressionInput Alpha; // 0x118(0x30)
	float ConstAlpha; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
};

// Class InterchangeImport.MaterialExpressionMaterialXSplitLeftRight
// Size: 0x180 (Inherited: 0xb8)
struct UMaterialExpressionMaterialXSplitLeftRight : UMaterialExpression {
	struct FExpressionInput Coordinates; // 0xb8(0x30)
	struct FExpressionInput A; // 0xe8(0x30)
	struct FExpressionInput B; // 0x118(0x30)
	struct FExpressionInput Center; // 0x148(0x30)
	float ConstCenter; // 0x178(0x04)
	char ConstCoordinate; // 0x17c(0x01)
	char pad_17D[0x3]; // 0x17d(0x03)
};

// Class InterchangeImport.MaterialExpressionMaterialXSplitTopBottom
// Size: 0x180 (Inherited: 0xb8)
struct UMaterialExpressionMaterialXSplitTopBottom : UMaterialExpression {
	struct FExpressionInput Coordinates; // 0xb8(0x30)
	struct FExpressionInput A; // 0xe8(0x30)
	struct FExpressionInput B; // 0x118(0x30)
	struct FExpressionInput Center; // 0x148(0x30)
	float ConstCenter; // 0x178(0x04)
	char ConstCoordinate; // 0x17c(0x01)
	char pad_17D[0x3]; // 0x17d(0x03)
};

// Class InterchangeImport.MaterialExpressionMaterialXSwizzle
// Size: 0xf8 (Inherited: 0xb8)
struct UMaterialExpressionMaterialXSwizzle : UMaterialExpression {
	struct FExpressionInput Input; // 0xb8(0x30)
	struct FString Channels; // 0xe8(0x10)
};

// Class InterchangeImport.MaterialExpressionMaterialXTextureSampleParameterBlur
// Size: 0x290 (Inherited: 0x280)
struct UMaterialExpressionMaterialXTextureSampleParameterBlur : UMaterialExpressionTextureSampleParameter2D {
	enum class EMAterialXTextureSampleBlurKernel KernelSize; // 0x280(0x04)
	float FilterSize; // 0x284(0x04)
	float FilterOffset; // 0x288(0x04)
	enum class EMaterialXTextureSampleBlurFilter Filter; // 0x28c(0x01)
	char pad_28D[0x3]; // 0x28d(0x03)
};

// Class InterchangeImport.MaterialExpressionMaterialXUnpremult
// Size: 0xe8 (Inherited: 0xb8)
struct UMaterialExpressionMaterialXUnpremult : UMaterialExpression {
	struct FExpressionInput Input; // 0xb8(0x30)
};

// Class InterchangeImport.InterchangeMaterialFactory
// Size: 0x40 (Inherited: 0x38)
struct UInterchangeMaterialFactory : UInterchangeFactoryBase {
	char pad_38[0x8]; // 0x38(0x08)
};

// Class InterchangeImport.InterchangeMaterialFunctionFactory
// Size: 0x40 (Inherited: 0x38)
struct UInterchangeMaterialFunctionFactory : UInterchangeFactoryBase {
	char pad_38[0x8]; // 0x38(0x08)
};

// Class InterchangeImport.InterchangeOBJTranslator
// Size: 0x58 (Inherited: 0x40)
struct UInterchangeOBJTranslator : UInterchangeTranslatorBase {
	char pad_40[0x18]; // 0x40(0x18)
};

// Class InterchangeImport.InterchangePhysicsAssetFactory
// Size: 0x38 (Inherited: 0x38)
struct UInterchangePhysicsAssetFactory : UInterchangeFactoryBase {
};

// Class InterchangeImport.InterchangeSkeletalMeshFactory
// Size: 0x68 (Inherited: 0x38)
struct UInterchangeSkeletalMeshFactory : UInterchangeFactoryBase {
	char pad_38[0x30]; // 0x38(0x30)
};

// Class InterchangeImport.InterchangeSkeletonFactory
// Size: 0x38 (Inherited: 0x38)
struct UInterchangeSkeletonFactory : UInterchangeFactoryBase {
};

// Class InterchangeImport.InterchangeStaticMeshFactory
// Size: 0x50 (Inherited: 0x38)
struct UInterchangeStaticMeshFactory : UInterchangeFactoryBase {
	char pad_38[0x18]; // 0x38(0x18)
};

// Class InterchangeImport.InterchangeCineCameraActorFactory
// Size: 0x38 (Inherited: 0x38)
struct UInterchangeCineCameraActorFactory : UInterchangeActorFactory {
};

// Class InterchangeImport.InterchangeCameraActorFactory
// Size: 0x38 (Inherited: 0x38)
struct UInterchangeCameraActorFactory : UInterchangeActorFactory {
};

// Class InterchangeImport.InterchangeSkeletalMeshActorFactory
// Size: 0x38 (Inherited: 0x38)
struct UInterchangeSkeletalMeshActorFactory : UInterchangeActorFactory {
};

// Class InterchangeImport.InterchangeStaticMeshActorFactory
// Size: 0x38 (Inherited: 0x38)
struct UInterchangeStaticMeshActorFactory : UInterchangeActorFactory {
};

// Class InterchangeImport.InterchangeDDSTranslator
// Size: 0x50 (Inherited: 0x40)
struct UInterchangeDDSTranslator : UInterchangeTranslatorBase {
	char pad_40[0x10]; // 0x40(0x10)
};

// Class InterchangeImport.InterchangeIESTranslator
// Size: 0x48 (Inherited: 0x40)
struct UInterchangeIESTranslator : UInterchangeTranslatorBase {
	char pad_40[0x8]; // 0x40(0x08)
};

// Class InterchangeImport.InterchangeImageWrapperTranslator
// Size: 0x50 (Inherited: 0x40)
struct UInterchangeImageWrapperTranslator : UInterchangeTranslatorBase {
	char pad_40[0x10]; // 0x40(0x10)
};

// Class InterchangeImport.InterchangeJPGTranslator
// Size: 0x48 (Inherited: 0x40)
struct UInterchangeJPGTranslator : UInterchangeTranslatorBase {
	char pad_40[0x8]; // 0x40(0x08)
};

// Class InterchangeImport.InterchangePCXTranslator
// Size: 0x48 (Inherited: 0x40)
struct UInterchangePCXTranslator : UInterchangeTranslatorBase {
	char pad_40[0x8]; // 0x40(0x08)
};

// Class InterchangeImport.InterchangePSDTranslator
// Size: 0x48 (Inherited: 0x40)
struct UInterchangePSDTranslator : UInterchangeTranslatorBase {
	char pad_40[0x8]; // 0x40(0x08)
};

// Class InterchangeImport.InterchangeTextureFactory
// Size: 0xc8 (Inherited: 0x38)
struct UInterchangeTextureFactory : UInterchangeFactoryBase {
	char pad_38[0x90]; // 0x38(0x90)
};

