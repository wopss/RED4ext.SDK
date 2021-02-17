#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ink/ESliderDirection.hpp>
#include <RED4ext/Types/generated/ink/SliderControllerHandleReleasedCallback.hpp>
#include <RED4ext/Types/generated/ink/SliderControllerInputCallback.hpp>
#include <RED4ext/Types/generated/ink/SliderControllerValueChangeCallback.hpp>
#include <RED4ext/Types/generated/ink/WidgetLogicController.hpp>
#include <RED4ext/Types/generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace ink { 
struct SliderController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkSliderController";
    static constexpr const char* ALIAS = NAME;

    ink::SliderControllerInputCallback SliderInput; // 68
    ink::SliderControllerValueChangeCallback SliderValueChanged; // A0
    ink::SliderControllerHandleReleasedCallback SliderHandleReleased; // D8
    ink::WidgetReference slidingAreaRef; // 110
    ink::WidgetReference handleRef; // 128
    ink::WidgetReference nextRef; // 140
    ink::WidgetReference priorRef; // 158
    ink::ESliderDirection direction; // 170
    uint8_t unk174[0x175 - 0x174]; // 174
    bool autoSizeHandle; // 175
    uint8_t unk176[0x178 - 0x176]; // 176
    float percentHandleSize; // 178
    float minHandleSize; // 17C
    float maxHandleSize; // 180
    float step; // 184
    uint8_t unk188[0x18C - 0x188]; // 188
    float minimumValue; // 18C
    float maximumValue; // 190
    float currentProgress; // 194
    uint8_t unk198[0x1F0 - 0x198]; // 198
};
RED4EXT_ASSERT_SIZE(SliderController, 0x1F0);
} // namespace ink
} // namespace RED4ext
