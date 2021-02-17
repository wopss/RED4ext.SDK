#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/data/SenseShape_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct Box_Record : game::data::SenseShape_Record
{
    static constexpr const char* NAME = "gamedataBox_Record";
    static constexpr const char* ALIAS = "Box_Record";

    uint8_t unk50[0x58 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(Box_Record, 0x58);
} // namespace game::data
using Box_Record = game::data::Box_Record;
} // namespace RED4ext
