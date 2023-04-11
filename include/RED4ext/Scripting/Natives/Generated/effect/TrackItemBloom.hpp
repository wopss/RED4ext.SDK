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
struct TrackItemBloom : effect::TrackItem
{
    static constexpr const char* NAME = "effectTrackItemBloom";
    static constexpr const char* ALIAS = NAME;

    bool override; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
    effect::EffectParameterEvaluatorFloat sceneColorScale; // 50
    effect::EffectParameterEvaluatorFloat bloomColorScale; // 70
};
RED4EXT_ASSERT_SIZE(TrackItemBloom, 0x90);
} // namespace effect
using effectTrackItemBloom = effect::TrackItemBloom;
} // namespace RED4ext

// clang-format on
