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
struct ScriptIntHashMap : IScriptable
{
    static constexpr const char* NAME = "inkScriptIntHashMap";
    static constexpr const char* ALIAS = "inkIntHashMap";

    uint8_t unk40[0x78 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ScriptIntHashMap, 0x78);
} // namespace ink
using inkScriptIntHashMap = ink::ScriptIntHashMap;
using inkIntHashMap = ink::ScriptIntHashMap;
} // namespace RED4ext

// clang-format on
