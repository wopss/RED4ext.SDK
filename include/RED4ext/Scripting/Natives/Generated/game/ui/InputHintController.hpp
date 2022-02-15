#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLibraryReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct InputHintController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiInputHintController";
    static constexpr const char* ALIAS = "InputHintController";

    ink::WidgetLibraryReference inputDisplayLibRef; // 78
    ink::CompoundWidgetReference inputDisplayContainer; // 88
    ink::TextWidgetReference textWidgetRef; // A0
    uint8_t unkB8[0xD8 - 0xB8]; // B8
};
RED4EXT_ASSERT_SIZE(InputHintController, 0xD8);
} // namespace game::ui
using InputHintController = game::ui::InputHintController;
} // namespace RED4ext
