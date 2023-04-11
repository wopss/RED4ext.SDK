#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/StepperChangedCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace ink
{
struct StepperController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkStepperController";
    static constexpr const char* ALIAS = NAME;

    ink::StepperChangedCallback Change; // 78
    uint8_t unkB0[0xC8 - 0xB0]; // B0
    bool cycledNavigation; // C8
    uint8_t unkC9[0xD0 - 0xC9]; // C9
    ink::TextWidgetReference currentValueDisplay; // D0
    ink::CompoundWidgetReference indicatorContainer; // E8
    ink::WidgetReference leftButton; // 100
    ink::WidgetReference rightButton; // 118
    CName indicatorUnitLibraryID; // 130
    uint8_t unk138[0x158 - 0x138]; // 138
};
RED4EXT_ASSERT_SIZE(StepperController, 0x158);
} // namespace ink
using inkStepperController = ink::StepperController;
} // namespace RED4ext

// clang-format on
