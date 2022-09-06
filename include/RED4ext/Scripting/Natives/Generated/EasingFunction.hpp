#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/EEasingType.hpp>
#include <RED4ext/Scripting/Natives/Generated/ETransitionType.hpp>

namespace RED4ext
{
struct EasingFunction
{
    static constexpr const char* NAME = "EasingFunction";
    static constexpr const char* ALIAS = NAME;

    ETransitionType transitionType; // 00
    EEasingType easingType; // 04
};
RED4EXT_ASSERT_SIZE(EasingFunction, 0x8);
} // namespace RED4ext

// clang-format on
