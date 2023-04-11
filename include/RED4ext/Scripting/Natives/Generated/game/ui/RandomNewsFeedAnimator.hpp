#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct RandomNewsFeedAnimator : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiRandomNewsFeedAnimator";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk78[0xA8 - 0x78]; // 78
    ink::TextWidgetReference textWidget; // A8
    float animDuration; // C0
    uint8_t unkC4[0xC8 - 0xC4]; // C4
};
RED4EXT_ASSERT_SIZE(RandomNewsFeedAnimator, 0xC8);
} // namespace game::ui
using gameuiRandomNewsFeedAnimator = game::ui::RandomNewsFeedAnimator;
} // namespace RED4ext

// clang-format on
