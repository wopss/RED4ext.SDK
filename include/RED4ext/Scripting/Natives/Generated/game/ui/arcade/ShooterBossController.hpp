#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/ShooterAIBase.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct __declspec(align(0x10)) ShooterBossController : game::ui::arcade::ShooterAIBase
{
    static constexpr const char* NAME = "gameuiarcadeShooterBossController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk260[0x26E - 0x260]; // 260
    bool customBoundSize; // 26E
    uint8_t unk26F[0x274 - 0x26F]; // 26F
    Vector2 bossSize; // 274
    uint8_t unk27C[0x280 - 0x27C]; // 27C
};
RED4EXT_ASSERT_SIZE(ShooterBossController, 0x280);
} // namespace game::ui::arcade
using gameuiarcadeShooterBossController = game::ui::arcade::ShooterBossController;
} // namespace RED4ext

// clang-format on
