#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/HUDGameController.hpp>

namespace RED4ext
{
namespace game
{
struct MuppetLoadoutsGameController : game::ui::HUDGameController
{
    static constexpr const char* NAME = "gameMuppetLoadoutsGameController";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(MuppetLoadoutsGameController, 0xF8);
} // namespace game
using gameMuppetLoadoutsGameController = game::MuppetLoadoutsGameController;
} // namespace RED4ext

// clang-format on
