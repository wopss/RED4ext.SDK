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
struct ScriptDynArray : IScriptable
{
    static constexpr const char* NAME = "inkScriptDynArray";
    static constexpr const char* ALIAS = "inkArray";

    uint8_t unk40[0x58 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ScriptDynArray, 0x58);
} // namespace ink
using inkScriptDynArray = ink::ScriptDynArray;
using inkArray = ink::ScriptDynArray;
} // namespace RED4ext

// clang-format on
