#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ImageWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct InputHintGroupController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiInputHintGroupController";
    static constexpr const char* ALIAS = "InputHintGroupController";

    uint8_t unk78[0xC8 - 0x78]; // 78
    ink::TextWidgetReference titleTextRef; // C8
    ink::TextWidgetReference descriptionTextRef; // E0
    ink::CompoundWidgetReference hintsContainerRef; // F8
    ink::ImageWidgetReference iconRef; // 110
};
RED4EXT_ASSERT_SIZE(InputHintGroupController, 0x128);
} // namespace game::ui
using gameuiInputHintGroupController = game::ui::InputHintGroupController;
using InputHintGroupController = game::ui::InputHintGroupController;
} // namespace RED4ext

// clang-format on
