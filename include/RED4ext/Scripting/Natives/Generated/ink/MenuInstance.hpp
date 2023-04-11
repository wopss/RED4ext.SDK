#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace ink
{
struct MenuInstance : IScriptable
{
    static constexpr const char* NAME = "inkMenuInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0xB0 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(MenuInstance, 0xB0);
} // namespace ink
using inkMenuInstance = ink::MenuInstance;
} // namespace RED4ext

// clang-format on
