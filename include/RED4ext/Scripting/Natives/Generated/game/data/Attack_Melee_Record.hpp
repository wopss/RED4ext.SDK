#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Attack_GameEffect_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct Attack_Melee_Record : game::data::Attack_GameEffect_Record
{
    static constexpr const char* NAME = "gamedataAttack_Melee_Record";
    static constexpr const char* ALIAS = "Attack_Melee_Record";

    uint8_t unk150[0x310 - 0x150]; // 150
};
RED4EXT_ASSERT_SIZE(Attack_Melee_Record, 0x310);
} // namespace game::data
using gamedataAttack_Melee_Record = game::data::Attack_Melee_Record;
using Attack_Melee_Record = game::data::Attack_Melee_Record;
} // namespace RED4ext

// clang-format on
