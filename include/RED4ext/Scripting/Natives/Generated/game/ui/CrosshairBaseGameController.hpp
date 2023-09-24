#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/WidgetGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct CrosshairBaseGameController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiCrosshairBaseGameController";
    static constexpr const char* ALIAS = NAME;

    ink::WidgetReference details; // E0
    uint8_t unkF8[0x108 - 0xF8]; // F8
    bool isActive; // 108
    uint8_t unk109[0x110 - 0x109]; // 109
};
RED4EXT_ASSERT_SIZE(CrosshairBaseGameController, 0x110);
} // namespace game::ui
using gameuiCrosshairBaseGameController = game::ui::CrosshairBaseGameController;
} // namespace RED4ext

// clang-format on
