#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ImageWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct InputHintGroupController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiInputHintGroupController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk68[0xB8 - 0x68]; // 68
    ink::TextWidgetReference titleTextRef; // B8
    ink::TextWidgetReference descriptionTextRef; // D0
    ink::CompoundWidgetReference hintsContainerRef; // E8
    ink::ImageWidgetReference iconRef; // 100
};
RED4EXT_ASSERT_SIZE(InputHintGroupController, 0x118);
} // namespace game::ui
} // namespace RED4ext
