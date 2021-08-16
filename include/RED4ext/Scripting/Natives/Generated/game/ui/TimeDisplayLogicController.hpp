#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct TimeDisplayLogicController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiTimeDisplayLogicController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk68[0x70 - 0x68]; // 68
    ink::TextWidgetReference timerText; // 70
    ink::TextWidgetReference noConnectionText; // 88
    uint8_t unkA0[0xB0 - 0xA0]; // A0
};
RED4EXT_ASSERT_SIZE(TimeDisplayLogicController, 0xB0);
} // namespace game::ui
} // namespace RED4ext
