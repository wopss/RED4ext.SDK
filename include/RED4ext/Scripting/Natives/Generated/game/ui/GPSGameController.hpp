#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/gps/Settings.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/HUDGameController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct GPSGameController : game::ui::HUDGameController
{
    static constexpr const char* NAME = "gameuiGPSGameController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkF8[0x100 - 0xF8]; // F8
    game::gps::Settings gpsSettings; // 100
};
RED4EXT_ASSERT_SIZE(GPSGameController, 0x138);
} // namespace game::ui
using gameuiGPSGameController = game::ui::GPSGameController;
} // namespace RED4ext

// clang-format on
