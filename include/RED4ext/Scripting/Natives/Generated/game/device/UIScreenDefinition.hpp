#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game::device
{
struct UIScreenDefinition
{
    static constexpr const char* NAME = "gamedeviceUIScreenDefinition";
    static constexpr const char* ALIAS = "UIScreenDefinition";

    TweakDBID screenType; // 00
};
RED4EXT_ASSERT_SIZE(UIScreenDefinition, 0x8);
} // namespace game::device
using gamedeviceUIScreenDefinition = game::device::UIScreenDefinition;
using UIScreenDefinition = game::device::UIScreenDefinition;
} // namespace RED4ext

// clang-format on
