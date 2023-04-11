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
struct TrackItemExposureScale : effect::TrackItem
{
    static constexpr const char* NAME = "effectTrackItemExposureScale";
    static constexpr const char* ALIAS = NAME;

    bool useInitialCameraPosDirForFadeout; // 48
    uint8_t unk49[0x4C - 0x49]; // 49
    float fullEffectRadius; // 4C
    float fadeOutRadius; // 50
    float fullyVisibleAngle; // 54
    float fadeOutAngle; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
    effect::EffectParameterEvaluatorFloat scale; // 60
};
RED4EXT_ASSERT_SIZE(TrackItemExposureScale, 0x80);
} // namespace effect
using effectTrackItemExposureScale = effect::TrackItemExposureScale;
} // namespace RED4ext

// clang-format on
