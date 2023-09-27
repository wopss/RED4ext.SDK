#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/LootTable_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct PersistentLootTable_Record : game::data::LootTable_Record
{
    static constexpr const char* NAME = "gamedataPersistentLootTable_Record";
    static constexpr const char* ALIAS = "PersistentLootTable_Record";

};
RED4EXT_ASSERT_SIZE(PersistentLootTable_Record, 0x90);
} // namespace game::data
using gamedataPersistentLootTable_Record = game::data::PersistentLootTable_Record;
using PersistentLootTable_Record = game::data::PersistentLootTable_Record;
} // namespace RED4ext

// clang-format on
