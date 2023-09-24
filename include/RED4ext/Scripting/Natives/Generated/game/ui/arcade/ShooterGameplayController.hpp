#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/ArcadeGameplayController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct ShooterGameplayController : game::ui::arcade::ArcadeGameplayController
{
    static constexpr const char* NAME = "gameuiarcadeShooterGameplayController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk118[0x140 - 0x118]; // 118
    ink::WidgetReference player; // 140
    ink::WidgetReference hud; // 158
    ink::WidgetReference levelContainer; // 170
    uint8_t unk188[0x1E8 - 0x188]; // 188
};
RED4EXT_ASSERT_SIZE(ShooterGameplayController, 0x1E8);
} // namespace game::ui::arcade
using gameuiarcadeShooterGameplayController = game::ui::arcade::ShooterGameplayController;
} // namespace RED4ext

// clang-format on
