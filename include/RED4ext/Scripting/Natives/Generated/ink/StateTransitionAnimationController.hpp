#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetStateAnimatedTransition.hpp>

namespace RED4ext
{
namespace ink
{
struct StateTransitionAnimationController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkStateTransitionAnimationController";
    static constexpr const char* ALIAS = NAME;

    bool stopActiveAnimation; // 78
    uint8_t unk79[0x90 - 0x79]; // 79
    DynArray<ink::WidgetStateAnimatedTransition> transition; // 90
};
RED4EXT_ASSERT_SIZE(StateTransitionAnimationController, 0xA0);
} // namespace ink
using inkStateTransitionAnimationController = ink::StateTransitionAnimationController;
} // namespace RED4ext

// clang-format on
