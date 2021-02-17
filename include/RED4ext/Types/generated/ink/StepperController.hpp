#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/ink/CompoundWidgetReference.hpp>
#include <RED4ext/Types/generated/ink/StepperChangedCallback.hpp>
#include <RED4ext/Types/generated/ink/TextWidgetReference.hpp>
#include <RED4ext/Types/generated/ink/WidgetLogicController.hpp>
#include <RED4ext/Types/generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace ink { 
struct StepperController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkStepperController";
    static constexpr const char* ALIAS = NAME;

    ink::StepperChangedCallback Change; // 68
    uint8_t unkA0[0xB8 - 0xA0]; // A0
    bool cycledNavigation; // B8
    uint8_t unkB9[0xC0 - 0xB9]; // B9
    ink::TextWidgetReference currentValueDisplay; // C0
    ink::CompoundWidgetReference indicatorContainer; // D8
    ink::WidgetReference leftButton; // F0
    ink::WidgetReference rightButton; // 108
    CName indicatorUnitLibraryID; // 120
    uint8_t unk128[0x148 - 0x128]; // 128
};
RED4EXT_ASSERT_SIZE(StepperController, 0x148);
} // namespace ink
} // namespace RED4ext
