#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ink/Margin.hpp>
#include <RED4ext/Types/generated/ink/WidgetLogicController.hpp>
#include <RED4ext/Types/generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui { 
struct TooltipsManager : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiTooltipsManager";
    static constexpr const char* ALIAS = "gameuiTooltipsManager";

    uint8_t unk68[0x6D - 0x68]; // 68
    bool flipX; // 6D
    bool flipY; // 6E
    uint8_t unk6F[0x70 - 0x6F]; // 6F
    ink::Margin rootMargin; // 70
    uint8_t unk80[0xC0 - 0x80]; // 80
    ink::Margin screenMargin; // C0
    ink::WidgetReference tooltipsContainer; // D0
    uint8_t unkE8[0x120 - 0xE8]; // E8
};
RED4EXT_ASSERT_SIZE(TooltipsManager, 0x120);
} // namespace game::ui
} // namespace RED4ext
