#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ESliderDirection.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/SliderControllerHandleReleasedCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/SliderControllerInputCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/SliderControllerValueChangeCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace ink
{
struct SliderController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkSliderController";
    static constexpr const char* ALIAS = NAME;

    ink::SliderControllerInputCallback SliderInput; // 78
    ink::SliderControllerValueChangeCallback SliderValueChanged; // B0
    ink::SliderControllerHandleReleasedCallback SliderHandleReleased; // E8
    ink::WidgetReference slidingAreaRef; // 120
    ink::WidgetReference handleRef; // 138
    ink::WidgetReference nextRef; // 150
    ink::WidgetReference priorRef; // 168
    ink::ESliderDirection direction; // 180
    uint8_t unk184[0x185 - 0x184]; // 184
    bool autoSizeHandle; // 185
    uint8_t unk186[0x188 - 0x186]; // 186
    float percentHandleSize; // 188
    float minHandleSize; // 18C
    float maxHandleSize; // 190
    float step; // 194
    uint8_t unk198[0x19C - 0x198]; // 198
    float minimumValue; // 19C
    float maximumValue; // 1A0
    float currentProgress; // 1A4
    uint8_t unk1A8[0x200 - 0x1A8]; // 1A8
};
RED4EXT_ASSERT_SIZE(SliderController, 0x200);
} // namespace ink
using inkSliderController = ink::SliderController;
} // namespace RED4ext

// clang-format on
