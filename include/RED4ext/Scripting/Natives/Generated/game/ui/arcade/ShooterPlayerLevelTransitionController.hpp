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
struct ShooterPlayerLevelTransitionController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiarcadeShooterPlayerLevelTransitionController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk78[0xB0 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(ShooterPlayerLevelTransitionController, 0xB0);
} // namespace game::ui::arcade
using gameuiarcadeShooterPlayerLevelTransitionController = game::ui::arcade::ShooterPlayerLevelTransitionController;
} // namespace RED4ext

// clang-format on
