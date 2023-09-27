#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AmbientGroupingVariant.hpp>

namespace RED4ext
{
namespace audio
{
struct AmbientAreaGroupingSettings
{
    static constexpr const char* NAME = "audioAmbientAreaGroupingSettings";
    static constexpr const char* ALIAS = NAME;

    CName GroupCountTag; // 00
    CName GroupCountRtpc; // 08
    CName GroupAvgDistanceRtpc; // 10
    float MinDistance; // 18
    float MaxDistance; // 1C
    float GroupingVerticallimit; // 20
    audio::AmbientGroupingVariant groupingVariant; // 24
};
RED4EXT_ASSERT_SIZE(AmbientAreaGroupingSettings, 0x28);
} // namespace audio
using audioAmbientAreaGroupingSettings = audio::AmbientAreaGroupingSettings;
} // namespace RED4ext

// clang-format on
