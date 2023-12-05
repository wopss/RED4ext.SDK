#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/BaseMinimapMappinController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CircleWidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct MinimapDeviceMappinController : game::ui::BaseMinimapMappinController
{
    static constexpr const char* NAME = "gameuiMinimapDeviceMappinController";
    static constexpr const char* ALIAS = "MinimapDeviceMappinController";

    uint8_t unk228[0x230 - 0x228]; // 228
    ink::CircleWidgetReference effectAreaWidget; // 230
};
RED4EXT_ASSERT_SIZE(MinimapDeviceMappinController, 0x248);
} // namespace game::ui
using gameuiMinimapDeviceMappinController = game::ui::MinimapDeviceMappinController;
using MinimapDeviceMappinController = game::ui::MinimapDeviceMappinController;
} // namespace RED4ext

// clang-format on
