#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/WidgetGameController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct VehicleShopGameController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiVehicleShopGameController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkE0[0xF0 - 0xE0]; // E0
};
RED4EXT_ASSERT_SIZE(VehicleShopGameController, 0xF0);
} // namespace game::ui
using gameuiVehicleShopGameController = game::ui::VehicleShopGameController;
} // namespace RED4ext

// clang-format on
