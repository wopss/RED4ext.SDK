#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextAnimationController.hpp>

namespace RED4ext
{
namespace ink
{
struct TextOffsetAnimationController : ink::TextAnimationController
{
    static constexpr const char* NAME = "inkTextOffsetAnimationController";
    static constexpr const char* ALIAS = "inkTextOffsetController";

    uint8_t unkF0[0x174 - 0xF0]; // F0
    float timeToSkip; // 174
};
RED4EXT_ASSERT_SIZE(TextOffsetAnimationController, 0x178);
} // namespace ink
using inkTextOffsetAnimationController = ink::TextOffsetAnimationController;
using inkTextOffsetController = ink::TextOffsetAnimationController;
} // namespace RED4ext

// clang-format on
