#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/ShooterObjectController.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct ShooterBullet : game::ui::arcade::ShooterObjectController
{
    static constexpr const char* NAME = "gameuiarcadeShooterBullet";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk120[0x1A0 - 0x120]; // 120
    bool customBoundSize; // 1A0
    uint8_t unk1A1[0x1A4 - 0x1A1]; // 1A1
    Vector2 boundSize; // 1A4
    uint8_t unk1AC[0x1B0 - 0x1AC]; // 1AC
};
RED4EXT_ASSERT_SIZE(ShooterBullet, 0x1B0);
} // namespace game::ui::arcade
using gameuiarcadeShooterBullet = game::ui::arcade::ShooterBullet;
} // namespace RED4ext

// clang-format on
