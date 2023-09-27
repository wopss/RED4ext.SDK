#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct ShooterWeaponController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiarcadeShooterWeaponController";
    static constexpr const char* ALIAS = "ShooterWeaponController";

    uint8_t unk78[0x168 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(ShooterWeaponController, 0x168);
} // namespace game::ui::arcade
using gameuiarcadeShooterWeaponController = game::ui::arcade::ShooterWeaponController;
using ShooterWeaponController = game::ui::arcade::ShooterWeaponController;
} // namespace RED4ext

// clang-format on
