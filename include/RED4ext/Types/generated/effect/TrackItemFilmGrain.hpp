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
struct TrackItemFilmGrain : effect::TrackItem
{
    static constexpr const char* NAME = "effectTrackItemFilmGrain";
    static constexpr const char* ALIAS = NAME;

    effect::EffectParameterEvaluatorFloat luminanceBias; // 48
    effect::EffectParameterEvaluatorVector strength; // 68
    bool override; // 80
    uint8_t unk81[0x88 - 0x81]; // 81
};
RED4EXT_ASSERT_SIZE(TrackItemFilmGrain, 0x88);
} // namespace effect
} // namespace RED4ext
