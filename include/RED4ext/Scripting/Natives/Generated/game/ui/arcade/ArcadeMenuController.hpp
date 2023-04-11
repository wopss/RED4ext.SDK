#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/IArcadeScreenController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct ArcadeMenuController : game::ui::arcade::IArcadeScreenController
{
    static constexpr const char* NAME = "gameuiarcadeArcadeMenuController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk98[0xC0 - 0x98]; // 98
    ink::WidgetReference startArrow; // C0
    ink::WidgetReference scoreboardArrow; // D8
    uint8_t unkF0[0x128 - 0xF0]; // F0
};
RED4EXT_ASSERT_SIZE(ArcadeMenuController, 0x128);
} // namespace game::ui::arcade
using gameuiarcadeArcadeMenuController = game::ui::arcade::ArcadeMenuController;
} // namespace RED4ext

// clang-format on
