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
struct ScriptWeakHashMap : IScriptable
{
    static constexpr const char* NAME = "inkScriptWeakHashMap";
    static constexpr const char* ALIAS = "inkWeakHashMap";

    uint8_t unk40[0x78 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ScriptWeakHashMap, 0x78);
} // namespace ink
using inkScriptWeakHashMap = ink::ScriptWeakHashMap;
using inkWeakHashMap = ink::ScriptWeakHashMap;
} // namespace RED4ext

// clang-format on
