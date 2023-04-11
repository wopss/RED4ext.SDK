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
struct DroneGlobalSettings : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioDroneGlobalSettings";
    static constexpr const char* ALIAS = NAME;

    CName speedRtpc; // 38
    CName thrustRtpc; // 40
};
RED4EXT_ASSERT_SIZE(DroneGlobalSettings, 0x48);
} // namespace audio
using audioDroneGlobalSettings = audio::DroneGlobalSettings;
} // namespace RED4ext

// clang-format on
