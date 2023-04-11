#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct PhysicalObstructionSettings : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioPhysicalObstructionSettings";
    static constexpr const char* ALIAS = NAME;

    float initialAbsorbtion; // 38
    float absorptionPerMeter; // 3C
};
RED4EXT_ASSERT_SIZE(PhysicalObstructionSettings, 0x40);
} // namespace audio
using audioPhysicalObstructionSettings = audio::PhysicalObstructionSettings;
} // namespace RED4ext

// clang-format on
