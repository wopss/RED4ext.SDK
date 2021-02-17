#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ink/Window.hpp>

namespace RED4ext
{
namespace ink { 
struct VirtualWindow : ink::Window
{
    static constexpr const char* NAME = "inkVirtualWindow";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk260[0x470 - 0x260]; // 260
};
RED4EXT_ASSERT_SIZE(VirtualWindow, 0x470);
} // namespace ink
} // namespace RED4ext
