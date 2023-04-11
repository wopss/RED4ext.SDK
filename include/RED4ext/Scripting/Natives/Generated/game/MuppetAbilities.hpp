#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MuppetAbility.hpp>

namespace RED4ext
{
namespace game
{
struct MuppetAbilities
{
    static constexpr const char* NAME = "gameMuppetAbilities";
    static constexpr const char* ALIAS = NAME;

    game::MuppetAbility canLook; // 00
    game::MuppetAbility canMove; // 28
    game::MuppetAbility canCrouch; // 50
    game::MuppetAbility canSprint; // 78
    game::MuppetAbility canSwitchWeapon; // A0
    game::MuppetAbility canHoldWeapon; // C8
    game::MuppetAbility canShoot; // F0
    game::MuppetAbility canAimDownSight; // 118
};
RED4EXT_ASSERT_SIZE(MuppetAbilities, 0x140);
} // namespace game
using gameMuppetAbilities = game::MuppetAbilities;
} // namespace RED4ext

// clang-format on
