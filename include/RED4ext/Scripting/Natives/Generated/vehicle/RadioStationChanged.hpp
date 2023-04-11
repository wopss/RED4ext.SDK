#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace vehicle
{
struct RadioStationChanged : red::Event
{
    static constexpr const char* NAME = "vehicleRadioStationChanged";
    static constexpr const char* ALIAS = "VehicleRadioStationChanged";

    bool isActive; // 40
    uint8_t unk41[0x44 - 0x41]; // 41
    uint32_t radioIndex; // 44
    CName radioStationName; // 48
    CName radioSongName; // 50
};
RED4EXT_ASSERT_SIZE(RadioStationChanged, 0x58);
} // namespace vehicle
using vehicleRadioStationChanged = vehicle::RadioStationChanged;
using VehicleRadioStationChanged = vehicle::RadioStationChanged;
} // namespace RED4ext

// clang-format on
