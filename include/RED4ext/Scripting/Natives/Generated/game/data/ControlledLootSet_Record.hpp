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
struct ControlledLootSet_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataControlledLootSet_Record";
    static constexpr const char* ALIAS = "ControlledLootSet_Record";

    uint8_t unk48[0x148 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ControlledLootSet_Record, 0x148);
} // namespace game::data
using gamedataControlledLootSet_Record = game::data::ControlledLootSet_Record;
using ControlledLootSet_Record = game::data::ControlledLootSet_Record;
} // namespace RED4ext

// clang-format on
