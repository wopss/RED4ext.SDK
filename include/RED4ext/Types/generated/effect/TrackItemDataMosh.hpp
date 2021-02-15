#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/effect/EffectParameterEvaluatorFloat.hpp>
#include <RED4ext/Types/generated/effect/EffectParameterEvaluatorVector.hpp>
#include <RED4ext/Types/generated/effect/TrackItem.hpp>

namespace RED4ext
{
namespace effect { 
struct TrackItemDataMosh : effect::TrackItem
{
    static constexpr const char* NAME = "effectTrackItemDataMosh";
    static constexpr const char* ALIAS = NAME;

    effect::EffectParameterEvaluatorFloat intensity; // 48
    bool override; // 68
    bool useGlitch; // 69
    uint8_t unk6A[0x70 - 0x6A]; // 6A
    effect::EffectParameterEvaluatorVector glitchColor; // 70
};
RED4EXT_ASSERT_SIZE(TrackItemDataMosh, 0x88);
} // namespace effect
} // namespace RED4ext
