#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Attack_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct Attack_GameEffect_Record : game::data::Attack_Record
{
    static constexpr const char* NAME = "gamedataAttack_GameEffect_Record";
    static constexpr const char* ALIAS = "Attack_GameEffect_Record";

    uint8_t unk108[0x150 - 0x108]; // 108
};
RED4EXT_ASSERT_SIZE(Attack_GameEffect_Record, 0x150);
} // namespace game::data
using gamedataAttack_GameEffect_Record = game::data::Attack_GameEffect_Record;
using Attack_GameEffect_Record = game::data::Attack_GameEffect_Record;
} // namespace RED4ext

// clang-format on
