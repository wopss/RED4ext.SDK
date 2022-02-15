#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/BaseMinimapMappinController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ShapeWidgetReference.hpp>

namespace RED4ext
{
namespace game::mappins { struct IArea; }

namespace game::ui { 
struct MinimapSecurityAreaMappinController : game::ui::BaseMinimapMappinController
{
    static constexpr const char* NAME = "gameuiMinimapSecurityAreaMappinController";
    static constexpr const char* ALIAS = "MinimapSecurityAreaMappinController";

    uint8_t unk220[0x221 - 0x220]; // 220
    bool playerInArea; // 221
    uint8_t unk222[0x228 - 0x222]; // 222
    Handle<game::mappins::IArea> area; // 228
    uint8_t unk238[0x248 - 0x238]; // 238
    ink::ShapeWidgetReference areaShapeWidget; // 248
};
RED4EXT_ASSERT_SIZE(MinimapSecurityAreaMappinController, 0x260);
} // namespace game::ui
using MinimapSecurityAreaMappinController = game::ui::MinimapSecurityAreaMappinController;
} // namespace RED4ext
