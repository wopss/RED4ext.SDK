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
struct PlayerListGameController : game::ui::HUDGameController
{
    static constexpr const char* NAME = "gameuiPlayerListGameController";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(PlayerListGameController, 0xF8);
} // namespace game::ui
using gameuiPlayerListGameController = game::ui::PlayerListGameController;
} // namespace RED4ext

// clang-format on
