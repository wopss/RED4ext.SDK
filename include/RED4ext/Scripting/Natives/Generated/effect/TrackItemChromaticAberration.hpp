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
struct TrackItemChromaticAberration : effect::TrackItem
{
    static constexpr const char* NAME = "effectTrackItemChromaticAberration";
    static constexpr const char* ALIAS = NAME;

    bool override; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
    effect::EffectParameterEvaluatorFloat chromaticAberrationOffset; // 50
    effect::EffectParameterEvaluatorFloat chromaticAberrationExp; // 70
};
RED4EXT_ASSERT_SIZE(TrackItemChromaticAberration, 0x90);
} // namespace effect
using effectTrackItemChromaticAberration = effect::TrackItemChromaticAberration;
} // namespace RED4ext

// clang-format on
