#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AISubActionShootWithWeapon_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct AISubActionShootToPoint_Record : game::data::AISubActionShootWithWeapon_Record
{
    static constexpr const char* NAME = "gamedataAISubActionShootToPoint_Record";
    static constexpr const char* ALIAS = "AISubActionShootToPoint_Record";

    uint8_t unk118[0x158 - 0x118]; // 118
};
RED4EXT_ASSERT_SIZE(AISubActionShootToPoint_Record, 0x158);
} // namespace game::data
using gamedataAISubActionShootToPoint_Record = game::data::AISubActionShootToPoint_Record;
using AISubActionShootToPoint_Record = game::data::AISubActionShootToPoint_Record;
} // namespace RED4ext

// clang-format on
