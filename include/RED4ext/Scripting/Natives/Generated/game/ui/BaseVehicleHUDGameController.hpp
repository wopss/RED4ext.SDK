#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/HUDGameController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct BaseVehicleHUDGameController : game::ui::HUDGameController
{
    static constexpr const char* NAME = "gameuiBaseVehicleHUDGameController";
    static constexpr const char* ALIAS = "BaseVehicleHUDGameController";

    bool mounted; // E8
    uint8_t unkE9[0x100 - 0xE9]; // E9
};
RED4EXT_ASSERT_SIZE(BaseVehicleHUDGameController, 0x100);
} // namespace game::ui
using BaseVehicleHUDGameController = game::ui::BaseVehicleHUDGameController;
} // namespace RED4ext
