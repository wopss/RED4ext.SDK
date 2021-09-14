#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/DriveHelper_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct RotationLimiter_Record : game::data::DriveHelper_Record
{
    static constexpr const char* NAME = "gamedataRotationLimiter_Record";
    static constexpr const char* ALIAS = "RotationLimiter_Record";

    uint8_t unk50[0x70 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(RotationLimiter_Record, 0x70);
} // namespace game::data
using RotationLimiter_Record = game::data::RotationLimiter_Record;
} // namespace RED4ext
