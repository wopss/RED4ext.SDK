#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextAnimationController.hpp>

namespace RED4ext
{
namespace ink
{
struct TextValueProgressAnimationController : ink::TextAnimationController
{
    static constexpr const char* NAME = "inkTextValueProgressAnimationController";
    static constexpr const char* ALIAS = "inkTextValueProgressController";

    float baseValue; // F0
    float targetValue; // F4
    int32_t numbersAfterDot; // F8
    float stepValue; // FC
    uint8_t unk100[0x128 - 0x100]; // 100
    CString suffix; // 128
};
RED4EXT_ASSERT_SIZE(TextValueProgressAnimationController, 0x148);
} // namespace ink
using inkTextValueProgressAnimationController = ink::TextValueProgressAnimationController;
using inkTextValueProgressController = ink::TextValueProgressAnimationController;
} // namespace RED4ext

// clang-format on
