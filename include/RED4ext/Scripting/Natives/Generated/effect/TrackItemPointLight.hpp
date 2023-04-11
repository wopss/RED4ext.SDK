#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/EEnvColorGroup.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/EffectParameterEvaluatorColor.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/EffectParameterEvaluatorFloat.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/TrackItem.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/SLightFlickering.hpp>

namespace RED4ext
{
namespace effect
{
struct TrackItemPointLight : effect::TrackItem
{
    static constexpr const char* NAME = "effectTrackItemPointLight";
    static constexpr const char* ALIAS = NAME;

    effect::EffectParameterEvaluatorFloat intensity; // 48
    effect::EffectParameterEvaluatorFloat radius; // 68
    effect::EffectParameterEvaluatorColor tint; // 88
    float EV; // A0
    uint8_t unkA4[0xA8 - 0xA4]; // A4
    Vector3 offset; // A8
    Color color; // B4
    rend::SLightFlickering flicker; // B8
    EEnvColorGroup envColorGroup; // C4
    uint8_t colorGroupSaturation; // C5
    int8_t roughnessBias; // C6
    bool useInGI; // C7
    bool useInVolFog; // C8
    bool useInTransparents; // C9
    bool useInParticles; // CA
    bool sceneDiffuse; // CB
    bool sceneSpecular; // CC
    bool clampAttenuation; // CD
    uint8_t unkCE[0xD0 - 0xCE]; // CE
};
RED4EXT_ASSERT_SIZE(TrackItemPointLight, 0xD0);
} // namespace effect
using effectTrackItemPointLight = effect::TrackItemPointLight;
} // namespace RED4ext

// clang-format on
