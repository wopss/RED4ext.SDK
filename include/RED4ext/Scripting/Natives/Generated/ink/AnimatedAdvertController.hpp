#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/anim/LoopType.hpp>

namespace RED4ext
{
namespace ink { 
struct AnimatedAdvertController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkAnimatedAdvertController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk68[0x80 - 0x68]; // 68
    CName animName; // 80
    ink::anim::LoopType loopType; // 88
    uint8_t unk89[0x90 - 0x89]; // 89
};
RED4EXT_ASSERT_SIZE(AnimatedAdvertController, 0x90);
} // namespace ink
} // namespace RED4ext
