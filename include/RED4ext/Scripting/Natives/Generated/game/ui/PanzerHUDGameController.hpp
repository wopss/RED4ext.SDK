#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/HUDGameController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct PanzerHUDGameController : game::ui::HUDGameController
{
    static constexpr const char* NAME = "gameuiPanzerHUDGameController";
    static constexpr const char* ALIAS = "PanzerHUDGameController";

    uint8_t unkE8[0x128 - 0xE8]; // E8
};
RED4EXT_ASSERT_SIZE(PanzerHUDGameController, 0x128);
} // namespace game::ui
using PanzerHUDGameController = game::ui::PanzerHUDGameController;
} // namespace RED4ext
