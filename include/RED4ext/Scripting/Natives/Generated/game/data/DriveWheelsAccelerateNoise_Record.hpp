#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/DriveHelper_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct DriveWheelsAccelerateNoise_Record : game::data::DriveHelper_Record
{
    static constexpr const char* NAME = "gamedataDriveWheelsAccelerateNoise_Record";
    static constexpr const char* ALIAS = "DriveWheelsAccelerateNoise_Record";

    uint8_t unk50[0x68 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(DriveWheelsAccelerateNoise_Record, 0x68);
} // namespace game::data
using DriveWheelsAccelerateNoise_Record = game::data::DriveWheelsAccelerateNoise_Record;
} // namespace RED4ext
