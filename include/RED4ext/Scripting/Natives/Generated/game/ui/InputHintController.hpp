#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLibraryReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct InputHintController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiInputHintController";
    static constexpr const char* ALIAS = "InputHintController";

    uint8_t unk78[0x88 - 0x78]; // 78
    ink::WidgetLibraryReference inputDisplayLibRef; // 88
    ink::CompoundWidgetReference inputDisplayContainer; // 98
    ink::TextWidgetReference textWidgetRef; // B0
    uint8_t unkC8[0xE0 - 0xC8]; // C8
};
RED4EXT_ASSERT_SIZE(InputHintController, 0xE0);
} // namespace game::ui
using gameuiInputHintController = game::ui::InputHintController;
using InputHintController = game::ui::InputHintController;
} // namespace RED4ext

// clang-format on
