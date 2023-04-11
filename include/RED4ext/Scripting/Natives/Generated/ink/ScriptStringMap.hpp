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
struct ScriptStringMap : IScriptable
{
    static constexpr const char* NAME = "inkScriptStringMap";
    static constexpr const char* ALIAS = "inkStringMap";

    uint8_t unk40[0x70 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ScriptStringMap, 0x70);
} // namespace ink
using inkScriptStringMap = ink::ScriptStringMap;
using inkStringMap = ink::ScriptStringMap;
} // namespace RED4ext

// clang-format on
