#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/ArcadeGameController.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct ShooterGameController : game::ui::arcade::ArcadeGameController
{
    static constexpr const char* NAME = "gameuiarcadeShooterGameController";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ShooterGameController, 0x238);
} // namespace game::ui::arcade
using gameuiarcadeShooterGameController = game::ui::arcade::ShooterGameController;
} // namespace RED4ext

// clang-format on
