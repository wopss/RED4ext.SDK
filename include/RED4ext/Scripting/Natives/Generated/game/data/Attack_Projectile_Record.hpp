#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Attack_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct Attack_Projectile_Record : game::data::Attack_Record
{
    static constexpr const char* NAME = "gamedataAttack_Projectile_Record";
    static constexpr const char* ALIAS = "Attack_Projectile_Record";

    uint8_t unk70[0x78 - 0x70]; // 70
};
RED4EXT_ASSERT_SIZE(Attack_Projectile_Record, 0x78);
} // namespace game::data
using Attack_Projectile_Record = game::data::Attack_Projectile_Record;
} // namespace RED4ext
