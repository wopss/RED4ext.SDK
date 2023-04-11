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
struct BaseVehicleHUDGameController : game::ui::HUDGameController
{
    static constexpr const char* NAME = "gameuiBaseVehicleHUDGameController";
    static constexpr const char* ALIAS = "BaseVehicleHUDGameController";

    bool mounted; // F8
    uint8_t unkF9[0x110 - 0xF9]; // F9
};
RED4EXT_ASSERT_SIZE(BaseVehicleHUDGameController, 0x110);
} // namespace game::ui
using gameuiBaseVehicleHUDGameController = game::ui::BaseVehicleHUDGameController;
using BaseVehicleHUDGameController = game::ui::BaseVehicleHUDGameController;
} // namespace RED4ext

// clang-format on
