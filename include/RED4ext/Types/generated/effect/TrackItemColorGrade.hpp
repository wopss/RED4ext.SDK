#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ColorGradingLutParams.hpp>
#include <RED4ext/Types/generated/effect/EffectParameterEvaluatorFloat.hpp>
#include <RED4ext/Types/generated/effect/TrackItem.hpp>

namespace RED4ext
{
namespace effect { 
struct TrackItemColorGrade : effect::TrackItem
{
    static constexpr const char* NAME = "effectTrackItemColorGrade";
    static constexpr const char* ALIAS = NAME;

    effect::EffectParameterEvaluatorFloat contrast; // 48
    effect::EffectParameterEvaluatorFloat saturate; // 68
    effect::EffectParameterEvaluatorFloat brightness; // 88
    effect::EffectParameterEvaluatorFloat lutWeight; // A8
    ColorGradingLutParams lutParams; // C8
    ColorGradingLutParams lutParamsHdr; // E8
};
RED4EXT_ASSERT_SIZE(TrackItemColorGrade, 0x108);
} // namespace effect
} // namespace RED4ext
