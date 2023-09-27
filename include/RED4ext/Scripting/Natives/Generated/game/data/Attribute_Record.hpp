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
struct Attribute_Record : game::data::Stat_Record
{
    static constexpr const char* NAME = "gamedataAttribute_Record";
    static constexpr const char* ALIAS = "Attribute_Record";

    uint8_t unk140[0x150 - 0x140]; // 140
};
RED4EXT_ASSERT_SIZE(Attribute_Record, 0x150);
} // namespace game::data
using gamedataAttribute_Record = game::data::Attribute_Record;
using Attribute_Record = game::data::Attribute_Record;
} // namespace RED4ext

// clang-format on
