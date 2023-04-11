#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/EffectParameterEvaluatorFloat.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/TrackItem.hpp>

namespace RED4ext
{
namespace effect
{
struct TrackItemLightParameter : effect::TrackItem
{
    static constexpr const char* NAME = "effectTrackItemLightParameter";
    static constexpr const char* ALIAS = NAME;

    float scale; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
    effect::EffectParameterEvaluatorFloat intensityMultiplier; // 50
    effect::EffectParameterEvaluatorFloat intensity; // 70
    effect::EffectParameterEvaluatorFloat radius; // 90
};
RED4EXT_ASSERT_SIZE(TrackItemLightParameter, 0xB0);
} // namespace effect
using effectTrackItemLightParameter = effect::TrackItemLightParameter;
} // namespace RED4ext

// clang-format on
