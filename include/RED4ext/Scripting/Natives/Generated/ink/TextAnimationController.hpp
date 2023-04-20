#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace ink
{
struct TextAnimationController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkTextAnimationController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk78[0xA8 - 0x78]; // 78
    bool playOnInitialize; // A8
    uint8_t unkA9[0xB4 - 0xA9]; // A9
    float duration; // B4
    float startDelay; // B8
    float startValue; // BC
    float endValue; // C0
    uint8_t unkC4[0xC8 - 0xC4]; // C4
    CName animationName; // C8
    bool useDefaultAnimation; // D0
    uint8_t unkD1[0xF0 - 0xD1]; // D1
};
RED4EXT_ASSERT_SIZE(TextAnimationController, 0xF0);
} // namespace ink
using inkTextAnimationController = ink::TextAnimationController;
} // namespace RED4ext

// clang-format on
