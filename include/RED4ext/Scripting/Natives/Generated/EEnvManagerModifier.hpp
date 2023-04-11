#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
enum class EEnvManagerModifier : uint32_t
{
    EMM_None = 0,
    EMM_WireframeSolid = 1,
    EMM_WireframeSeethrough = 2,
    EMM_Overdraw = 3,
    EMM_OverdrawSeethrough = 4,
    EMM_ParticleOverdraw = 5,
    EMM_ParticleNumLights = 6,
    EMM_DecalOverdraw = 7,
    EMM_LightOverdraw = 8,
    EMM_SceneReferredColor = 9,
    EMM_DisplayReferredColor = 10,
    EMM_GlobalIllumination = 11,
    EMM_SurfaceMaterialID = 12,
    EMM_SurfaceObjectID = 13,
    EMM_SurfaceBaseColor = 14,
    EMM_SurfaceAlbedo = 15,
    EMM_SurfaceSpecularity = 16,
    EMM_SurfaceMetalness = 17,
    EMM_SurfaceRoughness = 18,
    EMM_SurfaceEmissive = 19,
    EMM_SurfaceTranslucency = 20,
    EMM_SurfaceNormalsWorldSpace = 21,
    EMM_SurfaceNormalsViewSpace = 22,
    EMM_SurfaceHairDirection = 23,
    EMM_SurfaceHairID = 24,
    EMM_SurfaceLightBlockerIntensity = 25,
    EMM_GBuffer1RGB = 26,
    EMM_GBuffer1A = 27,
    EMM_ConeAODir = 28,
    EMM_ConeAOAngle = 29,
    EMM_VelocityBuffer = 30,
    EMM_Depth = 31,
    EMM_UvDensity = 32,
    EMM_ToneMappingLuminance = 33,
    EMM_ToneMappingThresholds = 34,
    EMM_LuminanceSpotMeter = 35,
    EMM_IlluminanceMeter = 36,
    EMM_DiffuseLight = 37,
    EMM_SpecularLight = 38,
    EMM_ClayView = 39,
    EMM_PureGreyscaleView = 40,
    EMM_PureWhiteView = 41,
    EMM_PureReflectionView = 42,
    EMM_PureGreyReflectionView = 43,
    EMM_Cascades = 44,
    EMM_MaskShadow = 45,
    EMM_MaskSSAO = 46,
    EMM_MaskTXAA = 47,
    EMM_MaskDistortion = 48,
    EMM_MaskInvalidation = 49,
    EMM_SurfaceCacheID = 50,
    EMM_SurfaceCacheResolution = 51,
    EMM_LightChannels = 52,
    EMM_DebugHitProxies = 53,
    EMM_DebugShadowsMode = 54,
    EMM_RayTracingDebug = 55,
    EMM_SSRResults = 56,
    EMM_SSRFade = 57,
    EMM_DepthOfFieldCoC = 58,
    EMM_MultilayeredMode = 59,
    EMM_MultilayeredProxy = 60,
    EMM_MultilayeredUniqueMasks = 61,
    EMM_MultilayeredMaskWeight = 62,
    EMM_LocalShadowsVariance = 63,
    EMM_LocalShadowsRangesOverlapDynamicsOnly = 64,
    EMM_LocalShadowsRangesOverlapStaticsOnly = 65,
    EMM_LODColoring = 66,
    EMM_TodvisRuntimePreview = 67,
    EMM_TodvisBakePreview = 68,
    EMM_RainMask = 69,
    EMM_VolFogDensity = 70,
    EMM_PBRValidationBaseColor = 71,
    EMM_PBRValidationMetalness = 72,
    EMM_GreyPlayMode = 73,
    EMM_RTXDIDiffuseRaw = 74,
    EMM_RTXDISpecularRaw = 75,
    EMM_RTXDIDiffuseDenoised = 76,
    EMM_RTXDISpecularDenoised = 77,
    EMM_RTXDIBRDFFactor = 78,
    EMM_IndirectDiffuseRaw = 79,
    EMM_IndirectSpecularRaw = 80,
    EMM_IndirectDiffuseDenoised = 81,
    EMM_IndirectSpecularDenoised = 82,
};
} // namespace RED4ext

// clang-format on
