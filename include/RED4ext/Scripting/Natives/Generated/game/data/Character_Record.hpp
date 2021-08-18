#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/SpawnableObject_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct Character_Record : game::data::SpawnableObject_Record
{
    static constexpr const char* NAME = "gamedataCharacter_Record";
    static constexpr const char* ALIAS = "Character_Record";

    uint8_t unk78[0x148 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(Character_Record, 0x148);
} // namespace game::data
using Character_Record = game::data::Character_Record;
} // namespace RED4ext
