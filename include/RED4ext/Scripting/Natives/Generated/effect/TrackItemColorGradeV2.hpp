#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/EffectParameterEvaluatorFloat.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/EffectParameterEvaluatorVector.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/TrackItem.hpp>

namespace RED4ext
{
namespace effect
{
struct TrackItemColorGradeV2 : effect::TrackItem
{
    static constexpr const char* NAME = "effectTrackItemColorGradeV2";
    static constexpr const char* ALIAS = NAME;

    effect::EffectParameterEvaluatorFloat contrast; // 48
    effect::EffectParameterEvaluatorFloat contrastPivot; // 68
    effect::EffectParameterEvaluatorFloat saturation; // 88
    effect::EffectParameterEvaluatorFloat hue; // A8
    effect::EffectParameterEvaluatorFloat brightness; // C8
    effect::EffectParameterEvaluatorFloat lowRange; // E8
    effect::EffectParameterEvaluatorFloat highRange; // 108
    effect::EffectParameterEvaluatorVector lift; // 128
    effect::EffectParameterEvaluatorVector gamma; // 140
    effect::EffectParameterEvaluatorVector gain; // 158
    effect::EffectParameterEvaluatorVector offset; // 170
    effect::EffectParameterEvaluatorVector shadow; // 188
    effect::EffectParameterEvaluatorVector midtone; // 1A0
    effect::EffectParameterEvaluatorVector highlight; // 1B8
    uint8_t unk1D0[0x1D8 - 0x1D0]; // 1D0
};
RED4EXT_ASSERT_SIZE(TrackItemColorGradeV2, 0x1D8);
} // namespace effect
using effectTrackItemColorGradeV2 = effect::TrackItemColorGradeV2;
} // namespace RED4ext

// clang-format on
