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
struct ShooterTraumaTeamController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiarcadeShooterTraumaTeamController";
    static constexpr const char* ALIAS = "ShooterTraumaTeamController";

    uint8_t unk78[0xC8 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(ShooterTraumaTeamController, 0xC8);
} // namespace game::ui::arcade
using gameuiarcadeShooterTraumaTeamController = game::ui::arcade::ShooterTraumaTeamController;
using ShooterTraumaTeamController = game::ui::arcade::ShooterTraumaTeamController;
} // namespace RED4ext

// clang-format on
