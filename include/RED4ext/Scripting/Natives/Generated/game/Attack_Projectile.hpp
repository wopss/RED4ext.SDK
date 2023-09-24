#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IAttack.hpp>

namespace RED4ext
{
namespace game
{
struct Attack_Projectile : game::IAttack
{
    static constexpr const char* NAME = "gameAttack_Projectile";
    static constexpr const char* ALIAS = "Attack_Projectile";

    uint8_t unk128[0x148 - 0x128]; // 128
};
RED4EXT_ASSERT_SIZE(Attack_Projectile, 0x148);
} // namespace game
using gameAttack_Projectile = game::Attack_Projectile;
using Attack_Projectile = game::Attack_Projectile;
} // namespace RED4ext

// clang-format on
