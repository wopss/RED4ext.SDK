#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ESSAOQualityLevel.hpp>
#include <RED4ext/Scripting/Natives/Generated/IAreaSettings.hpp>

namespace RED4ext
{
struct SSAOAreaSettings : IAreaSettings
{
    static constexpr const char* NAME = "SSAOAreaSettings";
    static constexpr const char* ALIAS = NAME;

    CurveData<float> noiseFilterTolerance; // 48
    CurveData<float> blurTolerance; // 80
    CurveData<float> upsampleTolerance; // B8
    CurveData<float> rejectionFalloff; // F0
    bool combineResolutionsBeforeBlur; // 128
    bool combineResolutionsWithMul; // 129
    bool normalsEnable; // 12A
    uint8_t unk12B[0x12C - 0x12B]; // 12B
    int32_t hierarchyDepth; // 12C
    CurveData<float> normalAOMultiply; // 130
    CurveData<float> normalBackProjectTolerance; // 168
    ESSAOQualityLevel qualityLevel; // 1A0
    uint8_t unk1A4[0x1A8 - 0x1A4]; // 1A4
    CurveData<float> coneAoDiffuseStrength; // 1A8
    CurveData<float> coneAoSpecularStrength; // 1E0
    CurveData<float> coneAoSpecularTreshold; // 218
    CurveData<float> lightAoDiffuseStrength; // 250
    CurveData<float> lightAoSpecularStrength; // 288
    CurveData<float> foliageDimDiffuse; // 2C0
    CurveData<float> foliageDimSpecular; // 2F8
};
RED4EXT_ASSERT_SIZE(SSAOAreaSettings, 0x330);
} // namespace RED4ext

// clang-format on
