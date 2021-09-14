#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ProjectileLaunch_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct Regular_Record : game::data::ProjectileLaunch_Record
{
    static constexpr const char* NAME = "gamedataRegular_Record";
    static constexpr const char* ALIAS = "Regular_Record";

    uint8_t unk58[0x60 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(Regular_Record, 0x60);
} // namespace game::data
using Regular_Record = game::data::Regular_Record;
} // namespace RED4ext
