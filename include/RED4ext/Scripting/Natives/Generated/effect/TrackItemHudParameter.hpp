#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/EffectParameterEvaluator.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/TrackItem.hpp>

namespace RED4ext
{
namespace effect
{
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
    float blackwallScale; // 88
    uint8_t unk8C[0x90 - 0x8C]; // 8C
    effect::EffectParameterEvaluator blackwallParameter; // 90
};
RED4EXT_ASSERT_SIZE(TrackItemHudParameter, 0xA8);
} // namespace effect
using effectTrackItemHudParameter = effect::TrackItemHudParameter;
} // namespace RED4ext

// clang-format on
