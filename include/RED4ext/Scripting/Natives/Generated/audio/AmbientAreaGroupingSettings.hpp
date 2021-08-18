#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AmbientGroupingVariant.hpp>

namespace RED4ext
{
namespace audio { 
struct AmbientAreaGroupingSettings
{
    static constexpr const char* NAME = "audioAmbientAreaGroupingSettings";
    static constexpr const char* ALIAS = NAME;

    CName GroupCountTag; // 00
    CName GroupCountRtpc; // 08
    CName GroupAvgDistanceRtpc; // 10
    float MinDistance; // 18
    float MaxDistance; // 1C
    audio::AmbientGroupingVariant groupingVariant; // 20
    uint8_t unk24[0x28 - 0x24]; // 24
};
RED4EXT_ASSERT_SIZE(AmbientAreaGroupingSettings, 0x28);
} // namespace audio
} // namespace RED4ext
