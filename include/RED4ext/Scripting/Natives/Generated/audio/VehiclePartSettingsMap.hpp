#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VehiclePartSettingsMapItem.hpp>

namespace RED4ext
{
namespace audio
{
struct VehiclePartSettingsMap : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioVehiclePartSettingsMap";
    static constexpr const char* ALIAS = NAME;

    float minAcousticsIsolationFactorValue; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
    DynArray<audio::VehiclePartSettingsMapItem> partSettings; // 40
    uint8_t unk50[0x78 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(VehiclePartSettingsMap, 0x78);
} // namespace audio
using audioVehiclePartSettingsMap = audio::VehiclePartSettingsMap;
} // namespace RED4ext

// clang-format on
