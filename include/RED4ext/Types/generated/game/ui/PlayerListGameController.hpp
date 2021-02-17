#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/ui/HUDGameController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct PlayerListGameController : game::ui::HUDGameController
{
    static constexpr const char* NAME = "gameuiPlayerListGameController";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(PlayerListGameController, 0xE8);
} // namespace game::ui
} // namespace RED4ext
