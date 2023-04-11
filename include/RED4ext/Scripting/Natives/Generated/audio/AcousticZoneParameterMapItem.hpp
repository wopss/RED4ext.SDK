#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct AcousticZoneParameterMapItem : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioAcousticZoneParameterMapItem";
    static constexpr const char* ALIAS = NAME;

    CName param; // 38
    float value; // 40
    float enterCurveTime; // 44
    float exitCurveTime; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(AcousticZoneParameterMapItem, 0x50);
} // namespace audio
using audioAcousticZoneParameterMapItem = audio::AcousticZoneParameterMapItem;
} // namespace RED4ext

// clang-format on
