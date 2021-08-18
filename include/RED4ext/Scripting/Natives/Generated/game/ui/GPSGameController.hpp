#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/gps/Settings.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/HUDGameController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct GPSGameController : game::ui::HUDGameController
{
    static constexpr const char* NAME = "gameuiGPSGameController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkE8[0xF0 - 0xE8]; // E8
    game::gps::Settings gpsSettings; // F0
};
RED4EXT_ASSERT_SIZE(GPSGameController, 0x128);
} // namespace game::ui
} // namespace RED4ext
