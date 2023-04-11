#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>

namespace RED4ext
{
namespace audio
{
struct AmbientPaletteBrush
{
    static constexpr const char* NAME = "audioAmbientPaletteBrush";
    static constexpr const char* ALIAS = NAME;

    float distributionBucketSize; // 00
    float virtualHearingRadius; // 04
    float hearingDistanceCooldown; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
    DynArray<CName> eventsPool; // 10
    CName radioStationMetadata; // 20
    uint8_t unk28[0x30 - 0x28]; // 28
};
RED4EXT_ASSERT_SIZE(AmbientPaletteBrush, 0x30);
} // namespace audio
using audioAmbientPaletteBrush = audio::AmbientPaletteBrush;
} // namespace RED4ext

// clang-format on
