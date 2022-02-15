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

    uint8_t unk270[0x570 - 0x270]; // 270
};
RED4EXT_ASSERT_SIZE(VirtualWindow, 0x570);
} // namespace ink
} // namespace RED4ext
