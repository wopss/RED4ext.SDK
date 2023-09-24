#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/ShooterExplodingPlatformSpawnDetail.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct ShooterCollisionController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiarcadeShooterCollisionController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk78[0x98 - 0x78]; // 78
    float explosionPlatformDelay; // 98
    uint8_t unk9C[0xF0 - 0x9C]; // 9C
    DynArray<game::ui::arcade::ShooterExplodingPlatformSpawnDetail> respawnPlatformDetails; // F0
};
RED4EXT_ASSERT_SIZE(ShooterCollisionController, 0x100);
} // namespace game::ui::arcade
using gameuiarcadeShooterCollisionController = game::ui::arcade::ShooterCollisionController;
} // namespace RED4ext

// clang-format on
