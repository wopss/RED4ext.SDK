#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace vehicle { 
struct AudioPSData
{
    static constexpr const char* NAME = "vehicleAudioPSData";
    static constexpr const char* ALIAS = NAME;

    CName activeRadioStation; // 00
    float acousticIsolationFactor; // 08
    bool isPlayerVehicleSummoned; // 0C
    uint8_t unk0D[0x10 - 0xD]; // D
};
RED4EXT_ASSERT_SIZE(AudioPSData, 0x10);
} // namespace vehicle
} // namespace RED4ext
