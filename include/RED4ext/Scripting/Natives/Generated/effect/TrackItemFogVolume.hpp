#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/TrackItem.hpp>

namespace RED4ext
{
struct IEvaluatorColor;
struct IEvaluatorFloat;
struct IEvaluatorVector;

namespace effect
{
struct TrackItemFogVolume : effect::TrackItem
{
    static constexpr const char* NAME = "effectTrackItemFogVolume";
    static constexpr const char* ALIAS = NAME;

    float densityFalloff; // 48
    float blendFalloff; // 4C
    uint8_t priority; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
    Handle<IEvaluatorFloat> density; // 58
    Handle<IEvaluatorVector> size; // 68
    uint8_t unk78[0x88 - 0x78]; // 78
    Handle<IEvaluatorColor> color; // 88
};
RED4EXT_ASSERT_SIZE(TrackItemFogVolume, 0x98);
} // namespace effect
using effectTrackItemFogVolume = effect::TrackItemFogVolume;
} // namespace RED4ext

// clang-format on
