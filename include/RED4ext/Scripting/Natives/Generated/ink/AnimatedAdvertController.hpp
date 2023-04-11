#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/anim/LoopType.hpp>

namespace RED4ext
{
namespace ink
{
struct AnimatedAdvertController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkAnimatedAdvertController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk78[0x90 - 0x78]; // 78
    CName animName; // 90
    ink::anim::LoopType loopType; // 98
    uint8_t unk99[0xA0 - 0x99]; // 99
};
RED4EXT_ASSERT_SIZE(AnimatedAdvertController, 0xA0);
} // namespace ink
using inkAnimatedAdvertController = ink::AnimatedAdvertController;
} // namespace RED4ext

// clang-format on
