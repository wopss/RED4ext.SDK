#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Stat_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct Substat_Record : game::data::Stat_Record
{
    static constexpr const char* NAME = "gamedataSubstat_Record";
    static constexpr const char* ALIAS = "Substat_Record";

    uint8_t unk70[0x78 - 0x70]; // 70
};
RED4EXT_ASSERT_SIZE(Substat_Record, 0x78);
} // namespace game::data
using Substat_Record = game::data::Substat_Record;
} // namespace RED4ext
