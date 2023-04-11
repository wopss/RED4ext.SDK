#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/EffectParameterEvaluatorColor.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/EffectParameterEvaluatorFloat.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/TrackItem.hpp>

namespace RED4ext
{
namespace effect
{
struct TrackItemVignette : effect::TrackItem
{
    static constexpr const char* NAME = "effectTrackItemVignette";
    static constexpr const char* ALIAS = NAME;

    effect::EffectParameterEvaluatorFloat vignetteRadius; // 48
    effect::EffectParameterEvaluatorFloat vignetteExp; // 68
    effect::EffectParameterEvaluatorColor color; // 88
    bool overrideRadiusAndExp; // A0
    bool overrideColor; // A1
    uint8_t unkA2[0xA8 - 0xA2]; // A2
};
RED4EXT_ASSERT_SIZE(TrackItemVignette, 0xA8);
} // namespace effect
using effectTrackItemVignette = effect::TrackItemVignette;
} // namespace RED4ext

// clang-format on
