#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/MenuInstance.hpp>

namespace RED4ext
{
namespace ink
{
struct MenuInstanceImpl : ink::MenuInstance
{
    static constexpr const char* NAME = "inkMenuInstanceImpl";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkB0[0x120 - 0xB0]; // B0
};
RED4EXT_ASSERT_SIZE(MenuInstanceImpl, 0x120);
} // namespace ink
using inkMenuInstanceImpl = ink::MenuInstanceImpl;
} // namespace RED4ext

// clang-format on
