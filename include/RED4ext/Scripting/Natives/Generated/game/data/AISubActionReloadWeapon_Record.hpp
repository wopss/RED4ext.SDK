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
struct AISubActionReloadWeapon_Record : game::data::AISubAction_Record
{
    static constexpr const char* NAME = "gamedataAISubActionReloadWeapon_Record";
    static constexpr const char* ALIAS = "AISubActionReloadWeapon_Record";

    uint8_t unk48[0x60 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AISubActionReloadWeapon_Record, 0x60);
} // namespace game::data
using gamedataAISubActionReloadWeapon_Record = game::data::AISubActionReloadWeapon_Record;
using AISubActionReloadWeapon_Record = game::data::AISubActionReloadWeapon_Record;
} // namespace RED4ext

// clang-format on
