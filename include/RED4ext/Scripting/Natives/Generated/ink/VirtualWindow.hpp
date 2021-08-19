#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/Window.hpp>

namespace RED4ext
{
namespace ink { 
struct VirtualWindow : ink::Window
{
    static constexpr const char* NAME = "inkVirtualWindow";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk260[0x560 - 0x260]; // 260
};
RED4EXT_ASSERT_SIZE(VirtualWindow, 0x560);
} // namespace ink
} // namespace RED4ext
