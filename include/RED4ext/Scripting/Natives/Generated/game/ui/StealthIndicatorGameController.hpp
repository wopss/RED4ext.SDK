#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/HUDGameController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct StealthIndicatorGameController : game::ui::HUDGameController
{
    static constexpr const char* NAME = "gameuiStealthIndicatorGameController";
    static constexpr const char* ALIAS = "StealthIndicatorGameController";

    uint8_t unkF8[0x140 - 0xF8]; // F8
};
RED4EXT_ASSERT_SIZE(StealthIndicatorGameController, 0x140);
} // namespace game::ui
using StealthIndicatorGameController = game::ui::StealthIndicatorGameController;
} // namespace RED4ext
