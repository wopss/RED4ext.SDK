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
struct TrackItemDataMosh : effect::TrackItem
{
    static constexpr const char* NAME = "effectTrackItemDataMosh";
    static constexpr const char* ALIAS = NAME;

    effect::EffectParameterEvaluatorFloat intensity; // 48
    bool override; // 68
    bool useGlitch; // 69
    uint8_t unk6A[0x70 - 0x6A]; // 6A
    effect::EffectParameterEvaluatorVector glitchColor; // 70
    bool usePixelsort; // 88
    uint8_t unk89[0x90 - 0x89]; // 89
    effect::EffectParameterEvaluatorFloat pixelsortIntensity; // 90
    bool pixelsortOverride; // B0
    bool pixelsortStencil; // B1
    bool pixelsortVfx; // B2
    uint8_t unkB3[0xB8 - 0xB3]; // B3
};
RED4EXT_ASSERT_SIZE(TrackItemDataMosh, 0xB8);
} // namespace effect
using effectTrackItemDataMosh = effect::TrackItemDataMosh;
} // namespace RED4ext

// clang-format on
