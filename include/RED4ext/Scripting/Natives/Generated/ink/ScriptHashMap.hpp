#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace ink { 
struct ScriptHashMap : IScriptable
{
    static constexpr const char* NAME = "inkScriptHashMap";
    static constexpr const char* ALIAS = "inkHashMap";

    uint8_t unk40[0x78 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ScriptHashMap, 0x78);
} // namespace ink
using inkHashMap = ink::ScriptHashMap;
} // namespace RED4ext
