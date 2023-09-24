#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/SenseShape_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct Box_Record : game::data::SenseShape_Record
{
    static constexpr const char* NAME = "gamedataBox_Record";
    static constexpr const char* ALIAS = "Box_Record";

    uint8_t unk60[0x78 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(Box_Record, 0x78);
} // namespace game::data
using gamedataBox_Record = game::data::Box_Record;
using Box_Record = game::data::Box_Record;
} // namespace RED4ext

// clang-format on
