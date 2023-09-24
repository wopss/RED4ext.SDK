#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/HUDGameController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct WeaponRosterGameController : game::ui::HUDGameController
{
    static constexpr const char* NAME = "gameuiWeaponRosterGameController";
    static constexpr const char* ALIAS = "WeaponRosterGameController";

};
RED4EXT_ASSERT_SIZE(WeaponRosterGameController, 0xF8);
} // namespace game::ui
using gameuiWeaponRosterGameController = game::ui::WeaponRosterGameController;
using WeaponRosterGameController = game::ui::WeaponRosterGameController;
} // namespace RED4ext

// clang-format on
