#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct RandomNewsFeedAnimator : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiRandomNewsFeedAnimator";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk68[0x98 - 0x68]; // 68
    ink::TextWidgetReference textWidget; // 98
    float animDuration; // B0
    uint8_t unkB4[0xB8 - 0xB4]; // B4
};
RED4EXT_ASSERT_SIZE(RandomNewsFeedAnimator, 0xB8);
} // namespace game::ui
} // namespace RED4ext
