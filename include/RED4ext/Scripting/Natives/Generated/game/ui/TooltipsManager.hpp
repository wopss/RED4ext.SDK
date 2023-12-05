#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/Margin.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct TooltipsManager : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiTooltipsManager";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk78[0x7D - 0x78]; // 78
    bool flipX; // 7D
    bool flipY; // 7E
    bool flipVerticalAttachment; // 7F
    ink::Margin rootMargin; // 80
    uint8_t unk90[0xD0 - 0x90]; // 90
    ink::Margin screenMargin; // D0
    ink::WidgetReference tooltipsContainer; // E0
    uint8_t unkF8[0x130 - 0xF8]; // F8
};
RED4EXT_ASSERT_SIZE(TooltipsManager, 0x130);
} // namespace game::ui
using gameuiTooltipsManager = game::ui::TooltipsManager;
} // namespace RED4ext

// clang-format on
