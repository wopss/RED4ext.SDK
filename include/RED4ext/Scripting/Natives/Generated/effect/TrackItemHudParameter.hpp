#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/EffectParameterEvaluator.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/TrackItem.hpp>

namespace RED4ext
{
namespace effect { 
struct TrackItemHudParameter : effect::TrackItem
{
    static constexpr const char* NAME = "effectTrackItemHudParameter";
    static constexpr const char* ALIAS = NAME;

    float scale; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
    effect::EffectParameterEvaluator glitchParameter; // 50
    float scale1; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
    effect::EffectParameterEvaluator glitchParameter1; // 70
};
RED4EXT_ASSERT_SIZE(TrackItemHudParameter, 0x88);
} // namespace effect
} // namespace RED4ext
