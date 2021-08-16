#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/MenuInstance.hpp>

namespace RED4ext
{
namespace ink { 
struct MenuInstanceImpl : ink::MenuInstance
{
    static constexpr const char* NAME = "inkMenuInstanceImpl";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk78[0xE8 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(MenuInstanceImpl, 0xE8);
} // namespace ink
} // namespace RED4ext
