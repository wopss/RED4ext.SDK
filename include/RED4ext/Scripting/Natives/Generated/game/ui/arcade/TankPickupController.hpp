#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/ArcadeObjectController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct TankPickupController : game::ui::arcade::ArcadeObjectController
{
    static constexpr const char* NAME = "gameuiarcadeTankPickupController";
    static constexpr const char* ALIAS = NAME;

    ink::WidgetReference pickup; // 100
    ink::WidgetReference pickupText; // 118
    uint8_t unk130[0x150 - 0x130]; // 130
};
RED4EXT_ASSERT_SIZE(TankPickupController, 0x150);
} // namespace game::ui::arcade
using gameuiarcadeTankPickupController = game::ui::arcade::TankPickupController;
} // namespace RED4ext

// clang-format on
