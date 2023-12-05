#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/input/IInputSystem.hpp>

namespace RED4ext
{
namespace input
{
struct InputSystemNullInterface : input::IInputSystem
{
    static constexpr const char* NAME = "inputInputSystemNullInterface";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(InputSystemNullInterface, 0x158);
} // namespace input
using inputInputSystemNullInterface = input::InputSystemNullInterface;
} // namespace RED4ext

// clang-format on
