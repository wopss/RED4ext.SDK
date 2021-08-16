#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AISubActionShootWithWeapon_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AISubActionShootToPoint_Record : game::data::AISubActionShootWithWeapon_Record
{
    static constexpr const char* NAME = "gamedataAISubActionShootToPoint_Record";
    static constexpr const char* ALIAS = "AISubActionShootToPoint_Record";

    uint8_t unk78[0x88 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(AISubActionShootToPoint_Record, 0x88);
} // namespace game::data
using AISubActionShootToPoint_Record = game::data::AISubActionShootToPoint_Record;
} // namespace RED4ext
