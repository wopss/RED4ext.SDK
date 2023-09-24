#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AISubAction_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct AISubActionShootWithWeapon_Record : game::data::AISubAction_Record
{
    static constexpr const char* NAME = "gamedataAISubActionShootWithWeapon_Record";
    static constexpr const char* ALIAS = "AISubActionShootWithWeapon_Record";

    uint8_t unk48[0x118 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AISubActionShootWithWeapon_Record, 0x118);
} // namespace game::data
using gamedataAISubActionShootWithWeapon_Record = game::data::AISubActionShootWithWeapon_Record;
using AISubActionShootWithWeapon_Record = game::data::AISubActionShootWithWeapon_Record;
} // namespace RED4ext

// clang-format on
