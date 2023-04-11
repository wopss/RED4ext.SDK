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
struct TrackItemMotionBlurScale : effect::TrackItem
{
    static constexpr const char* NAME = "effectTrackItemMotionBlurScale";
    static constexpr const char* ALIAS = NAME;

    effect::EffectParameterEvaluatorFloat scale; // 48
};
RED4EXT_ASSERT_SIZE(TrackItemMotionBlurScale, 0x68);
} // namespace effect
using effectTrackItemMotionBlurScale = effect::TrackItemMotionBlurScale;
} // namespace RED4ext

// clang-format on
