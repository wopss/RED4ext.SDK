#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextAnimationController.hpp>

namespace RED4ext
{
namespace ink { 
struct TextValueProgressAnimationController : ink::TextAnimationController
{
    static constexpr const char* NAME = "inkTextValueProgressAnimationController";
    static constexpr const char* ALIAS = NAME;

    float baseValue; // E0
    float targetValue; // E4
    int32_t numbersAfterDot; // E8
    float stepValue; // EC
    uint8_t unkF0[0x118 - 0xF0]; // F0
    CString suffix; // 118
};
RED4EXT_ASSERT_SIZE(TextValueProgressAnimationController, 0x138);
} // namespace ink
} // namespace RED4ext
