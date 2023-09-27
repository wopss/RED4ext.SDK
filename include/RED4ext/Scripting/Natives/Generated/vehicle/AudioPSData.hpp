#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace vehicle
{
struct AudioPSData
{
    static constexpr const char* NAME = "vehicleAudioPSData";
    static constexpr const char* ALIAS = NAME;

    CName activeRadioStation; // 00
    float acousticIsolationFactor; // 08
    float glassAcousticIsolationFactor; // 0C
    bool isPlayerVehicleSummoned; // 10
    uint8_t unk11[0x18 - 0x11]; // 11
#pragma warning(suppress : 4324)
    alignas(8) StaticArray<CName, 6> openedWindows; // 18
};
RED4EXT_ASSERT_SIZE(AudioPSData, 0x50);
} // namespace vehicle
using vehicleAudioPSData = vehicle::AudioPSData;
} // namespace RED4ext

// clang-format on
