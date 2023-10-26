#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/InteractionMappinController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct __declspec(align(0x10)) DriverCombatMappinController : game::ui::InteractionMappinController
{
    static constexpr const char* NAME = "gameuiDriverCombatMappinController";
    static constexpr const char* ALIAS = "DriverCombatMappinController";

};
RED4EXT_ASSERT_SIZE(DriverCombatMappinController, 0x2C0);
} // namespace game::ui
using gameuiDriverCombatMappinController = game::ui::DriverCombatMappinController;
using DriverCombatMappinController = game::ui::DriverCombatMappinController;
} // namespace RED4ext

// clang-format on
