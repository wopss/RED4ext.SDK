#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace ink { 
struct TextAnimationController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkTextAnimationController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk68[0x98 - 0x68]; // 68
    bool playOnInitialize; // 98
    uint8_t unk99[0xA4 - 0x99]; // 99
    float duration; // A4
    float startDelay; // A8
    float startValue; // AC
    float endValue; // B0
    uint8_t unkB4[0xB8 - 0xB4]; // B4
    CName animationName; // B8
    bool useDefaultAnimation; // C0
    uint8_t unkC1[0xE0 - 0xC1]; // C1
};
RED4EXT_ASSERT_SIZE(TextAnimationController, 0xE0);
} // namespace ink
} // namespace RED4ext
