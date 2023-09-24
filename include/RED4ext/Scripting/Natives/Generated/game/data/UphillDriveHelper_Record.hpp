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
struct UphillDriveHelper_Record : game::data::DriveHelper_Record
{
    static constexpr const char* NAME = "gamedataUphillDriveHelper_Record";
    static constexpr const char* ALIAS = "UphillDriveHelper_Record";

    uint8_t unk58[0x70 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(UphillDriveHelper_Record, 0x70);
} // namespace game::data
using gamedataUphillDriveHelper_Record = game::data::UphillDriveHelper_Record;
using UphillDriveHelper_Record = game::data::UphillDriveHelper_Record;
} // namespace RED4ext

// clang-format on
