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
struct ShooterPlatformCollisionController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiarcadeShooterPlatformCollisionController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk78[0xC0 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(ShooterPlatformCollisionController, 0xC0);
} // namespace game::ui::arcade
using gameuiarcadeShooterPlatformCollisionController = game::ui::arcade::ShooterPlatformCollisionController;
} // namespace RED4ext

// clang-format on
