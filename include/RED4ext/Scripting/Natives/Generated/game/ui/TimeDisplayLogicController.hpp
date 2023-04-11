#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct TimeDisplayLogicController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiTimeDisplayLogicController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk78[0x80 - 0x78]; // 78
    ink::TextWidgetReference timerText; // 80
    ink::TextWidgetReference noConnectionText; // 98
    uint8_t unkB0[0xC0 - 0xB0]; // B0
};
RED4EXT_ASSERT_SIZE(TimeDisplayLogicController, 0xC0);
} // namespace game::ui
using gameuiTimeDisplayLogicController = game::ui::TimeDisplayLogicController;
} // namespace RED4ext

// clang-format on
