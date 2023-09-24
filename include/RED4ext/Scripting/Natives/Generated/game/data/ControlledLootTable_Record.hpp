#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data
{
struct ControlledLootTable_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataControlledLootTable_Record";
    static constexpr const char* ALIAS = "ControlledLootTable_Record";

    uint8_t unk48[0x60 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ControlledLootTable_Record, 0x60);
} // namespace game::data
using gamedataControlledLootTable_Record = game::data::ControlledLootTable_Record;
using ControlledLootTable_Record = game::data::ControlledLootTable_Record;
} // namespace RED4ext

// clang-format on
