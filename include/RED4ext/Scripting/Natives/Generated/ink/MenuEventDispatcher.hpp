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
struct MenuEventDispatcher : IScriptable
{
    static constexpr const char* NAME = "inkMenuEventDispatcher";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x88 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(MenuEventDispatcher, 0x88);
} // namespace ink
using inkMenuEventDispatcher = ink::MenuEventDispatcher;
} // namespace RED4ext

// clang-format on
