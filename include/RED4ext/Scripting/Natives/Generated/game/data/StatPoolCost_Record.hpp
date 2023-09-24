#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ObjectActionCost_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct StatPoolCost_Record : game::data::ObjectActionCost_Record
{
    static constexpr const char* NAME = "gamedataStatPoolCost_Record";
    static constexpr const char* ALIAS = "StatPoolCost_Record";

    uint8_t unk58[0x68 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(StatPoolCost_Record, 0x68);
} // namespace game::data
using gamedataStatPoolCost_Record = game::data::StatPoolCost_Record;
using StatPoolCost_Record = game::data::StatPoolCost_Record;
} // namespace RED4ext

// clang-format on
