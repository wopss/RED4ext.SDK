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
struct MenusState : IScriptable
{
    static constexpr const char* NAME = "inkMenusState";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0xB0 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(MenusState, 0xB0);
} // namespace ink
using inkMenusState = ink::MenusState;
} // namespace RED4ext

// clang-format on
