#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>

namespace RED4ext
{
namespace fx
{
struct CompositionShaderParams
{
    static constexpr const char* NAME = "fxCompositionShaderParams";
    static constexpr const char* ALIAS = NAME;

    float glitchParam; // 00
    float glitchParam1; // 04
    float health; // 08
    float visionActiveTime; // 0C
    float uiFactor; // 10
    float uiPassthroughFactor; // 14
    float mainRenderFactor; // 18
    float blurredRenderFactor; // 1C
    float backgroundTextureFactor; // 20
    float backgroundBlurRadius; // 24
    uint8_t unk28[0x30 - 0x28]; // 28
    Vector2 sphericalDistPower; // 30
    Vector2 shadowDistance; // 38
    float shadowIntensity; // 40
    float shadowRadius; // 44
    float glowTresholdStart; // 48
    float glowTresholdEnd; // 4C
    float glowIntensity; // 50
    float glowBlurRadius; // 54
    float vignetteStart; // 58
    float vignetteEnd; // 5C
    float vignetteIntensity; // 60
    float blurredRenderSaturation; // 64
    float uiSaturation; // 68
    float chromaticAberrationStrength; // 6C
    Vector2 uiLayer2Scale; // 70
    Vector2 uiLayer3Scale; // 78
    Vector2 uiLayer4Scale; // 80
    float uiLayer2Weight; // 88
    float uiLayer3Weight; // 8C
    float uiLayer4Weight; // 90
    uint8_t unk94[0xA0 - 0x94]; // 94
};
RED4EXT_ASSERT_SIZE(CompositionShaderParams, 0xA0);
} // namespace fx
using fxCompositionShaderParams = fx::CompositionShaderParams;
} // namespace RED4ext

// clang-format on
