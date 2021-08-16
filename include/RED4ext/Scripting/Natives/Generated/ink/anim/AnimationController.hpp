#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace ink::anim { 
struct AnimationController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkanimAnimationController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk68[0x98 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(AnimationController, 0x98);
} // namespace ink::anim
} // namespace RED4ext
