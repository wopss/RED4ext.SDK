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
struct TrackItemFOV : effect::TrackItem
{
    static constexpr const char* NAME = "effectTrackItemFOV";
    static constexpr const char* ALIAS = NAME;

    effect::EffectParameterEvaluatorFloat FOV; // 48
};
RED4EXT_ASSERT_SIZE(TrackItemFOV, 0x68);
} // namespace effect
using effectTrackItemFOV = effect::TrackItemFOV;
} // namespace RED4ext

// clang-format on
