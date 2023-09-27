#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Stat_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct Substat_Record : game::data::Stat_Record
{
    static constexpr const char* NAME = "gamedataSubstat_Record";
    static constexpr const char* ALIAS = "Substat_Record";

    uint8_t unk140[0x150 - 0x140]; // 140
};
RED4EXT_ASSERT_SIZE(Substat_Record, 0x150);
} // namespace game::data
using gamedataSubstat_Record = game::data::Substat_Record;
using Substat_Record = game::data::Substat_Record;
} // namespace RED4ext

// clang-format on
