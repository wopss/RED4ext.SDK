#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/effect/EffectParameterEvaluatorFloat.hpp>
#include <RED4ext/Types/generated/effect/TrackItem.hpp>

namespace RED4ext
{
namespace effect { 
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
} // namespace RED4ext
