#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/generated/game/ui/BaseMinimapMappinController.hpp>
#include <RED4ext/Types/generated/ink/ShapeWidgetReference.hpp>

namespace RED4ext
{
namespace game::mappins { struct IArea; }

namespace game::ui { 
struct MinimapSecurityAreaMappinController : game::ui::BaseMinimapMappinController
{
    static constexpr const char* NAME = "gameuiMinimapSecurityAreaMappinController";
    static constexpr const char* ALIAS = "MinimapSecurityAreaMappinController";

    uint8_t unk210[0x211 - 0x210]; // 210
    bool playerInArea; // 211
    uint8_t unk212[0x218 - 0x212]; // 212
    Handle<game::mappins::IArea> area; // 218
    uint8_t unk228[0x238 - 0x228]; // 228
    ink::ShapeWidgetReference areaShapeWidget; // 238
};
RED4EXT_ASSERT_SIZE(MinimapSecurityAreaMappinController, 0x250);
} // namespace game::ui
using MinimapSecurityAreaMappinController = game::ui::MinimapSecurityAreaMappinController;
} // namespace RED4ext
