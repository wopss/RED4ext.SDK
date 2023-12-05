#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace input
{
struct IInputSystem
{
    static constexpr const char* NAME = "inputIInputSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x158 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(IInputSystem, 0x158);
} // namespace input
using inputIInputSystem = input::IInputSystem;
} // namespace RED4ext

// clang-format on
