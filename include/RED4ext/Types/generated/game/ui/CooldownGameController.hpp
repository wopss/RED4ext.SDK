#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/ui/WidgetGameController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct CooldownGameController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiCooldownGameController";
    static constexpr const char* ALIAS = "inkCooldownGameController";

    uint8_t unkD0[0xE0 - 0xD0]; // D0
};
RED4EXT_ASSERT_SIZE(CooldownGameController, 0xE0);
} // namespace game::ui
using inkCooldownGameController = game::ui::CooldownGameController;
} // namespace RED4ext
