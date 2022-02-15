#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/BaseMinimapMappinController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CircleWidgetReference.hpp>

namespace RED4ext
{
namespace game::ui { 
struct MinimapDeviceMappinController : game::ui::BaseMinimapMappinController
{
    static constexpr const char* NAME = "gameuiMinimapDeviceMappinController";
    static constexpr const char* ALIAS = "MinimapDeviceMappinController";

    uint8_t unk220[0x228 - 0x220]; // 220
    ink::CircleWidgetReference effectAreaWidget; // 228
};
RED4EXT_ASSERT_SIZE(MinimapDeviceMappinController, 0x240);
} // namespace game::ui
using MinimapDeviceMappinController = game::ui::MinimapDeviceMappinController;
} // namespace RED4ext
