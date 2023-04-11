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
struct RadioSongChanged : red::Event
{
    static constexpr const char* NAME = "vehicleRadioSongChanged";
    static constexpr const char* ALIAS = "VehicleRadioSongChanged";

    CName radioSongName; // 40
};
RED4EXT_ASSERT_SIZE(RadioSongChanged, 0x48);
} // namespace vehicle
using vehicleRadioSongChanged = vehicle::RadioSongChanged;
using VehicleRadioSongChanged = vehicle::RadioSongChanged;
} // namespace RED4ext

// clang-format on
