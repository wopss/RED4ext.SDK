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
struct TrackItemTonemapping : effect::TrackItem
{
    static constexpr const char* NAME = "effectTrackItemTonemapping";
    static constexpr const char* ALIAS = NAME;

    bool override; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
    effect::EffectParameterEvaluatorFloat maxStopsSDR; // 50
    effect::EffectParameterEvaluatorFloat midGrayScaleSDR; // 70
    effect::EffectParameterEvaluatorFloat maxStopsHDR; // 90
    effect::EffectParameterEvaluatorFloat midGrayScaleHDR; // B0
};
RED4EXT_ASSERT_SIZE(TrackItemTonemapping, 0xD0);
} // namespace effect
using effectTrackItemTonemapping = effect::TrackItemTonemapping;
} // namespace RED4ext

// clang-format on
