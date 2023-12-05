#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/BaseMinimapMappinController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ShapeWidgetReference.hpp>

namespace RED4ext
{
namespace game::mappins { struct IArea; }

namespace game::ui
{
struct MinimapSecurityAreaMappinController : game::ui::BaseMinimapMappinController
{
    static constexpr const char* NAME = "gameuiMinimapSecurityAreaMappinController";
    static constexpr const char* ALIAS = "MinimapSecurityAreaMappinController";

    uint8_t unk228[0x229 - 0x228]; // 228
    bool playerInArea; // 229
    uint8_t unk22A[0x230 - 0x22A]; // 22A
    Handle<game::mappins::IArea> area; // 230
    uint8_t unk240[0x250 - 0x240]; // 240
    ink::ShapeWidgetReference areaShapeWidget; // 250
};
RED4EXT_ASSERT_SIZE(MinimapSecurityAreaMappinController, 0x268);
} // namespace game::ui
using gameuiMinimapSecurityAreaMappinController = game::ui::MinimapSecurityAreaMappinController;
using MinimapSecurityAreaMappinController = game::ui::MinimapSecurityAreaMappinController;
} // namespace RED4ext

// clang-format on
