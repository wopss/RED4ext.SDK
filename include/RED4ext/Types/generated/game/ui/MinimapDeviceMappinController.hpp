#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/ui/BaseMinimapMappinController.hpp>
#include <RED4ext/Types/generated/ink/CircleWidgetReference.hpp>

namespace RED4ext
{
namespace game::ui { 
struct MinimapDeviceMappinController : game::ui::BaseMinimapMappinController
{
    static constexpr const char* NAME = "gameuiMinimapDeviceMappinController";
    static constexpr const char* ALIAS = "MinimapDeviceMappinController";

    uint8_t unk210[0x218 - 0x210]; // 210
    ink::CircleWidgetReference effectAreaWidget; // 218
};
RED4EXT_ASSERT_SIZE(MinimapDeviceMappinController, 0x230);
} // namespace game::ui
using MinimapDeviceMappinController = game::ui::MinimapDeviceMappinController;
} // namespace RED4ext
