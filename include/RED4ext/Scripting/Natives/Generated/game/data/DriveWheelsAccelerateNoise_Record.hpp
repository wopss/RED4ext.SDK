#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/DriveHelper_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct DriveWheelsAccelerateNoise_Record : game::data::DriveHelper_Record
{
    static constexpr const char* NAME = "gamedataDriveWheelsAccelerateNoise_Record";
    static constexpr const char* ALIAS = "DriveWheelsAccelerateNoise_Record";

    uint8_t unk58[0xB8 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(DriveWheelsAccelerateNoise_Record, 0xB8);
} // namespace game::data
using gamedataDriveWheelsAccelerateNoise_Record = game::data::DriveWheelsAccelerateNoise_Record;
using DriveWheelsAccelerateNoise_Record = game::data::DriveWheelsAccelerateNoise_Record;
} // namespace RED4ext

// clang-format on
