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
struct ActionName : IScriptable
{
    static constexpr const char* NAME = "inkActionName";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x58 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ActionName, 0x58);
} // namespace ink
using inkActionName = ink::ActionName;
} // namespace RED4ext

// clang-format on
