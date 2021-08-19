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
    static constexpr const char* ALIAS = NAME;

    uint8_t unkE8[0x130 - 0xE8]; // E8
};
RED4EXT_ASSERT_SIZE(StealthIndicatorGameController, 0x130);
} // namespace game::ui
} // namespace RED4ext
