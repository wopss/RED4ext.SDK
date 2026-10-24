#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/Window.hpp>

namespace RED4ext
{
namespace ink
{
struct __declspec(align(0x10)) VirtualWindow : ink::Window
{
    static constexpr const char* NAME = "inkVirtualWindow";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk280[0x5B0 - 0x280]; // 280
};
RED4EXT_ASSERT_SIZE(VirtualWindow, 0x5B0);
} // namespace ink
using inkVirtualWindow = ink::VirtualWindow;
} // namespace RED4ext

// clang-format on
