#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Character_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct SubCharacter_Record : game::data::Character_Record
{
    static constexpr const char* NAME = "gamedataSubCharacter_Record";
    static constexpr const char* ALIAS = "SubCharacter_Record";

    uint8_t unk148[0x160 - 0x148]; // 148
};
RED4EXT_ASSERT_SIZE(SubCharacter_Record, 0x160);
} // namespace game::data
using SubCharacter_Record = game::data::SubCharacter_Record;
} // namespace RED4ext
