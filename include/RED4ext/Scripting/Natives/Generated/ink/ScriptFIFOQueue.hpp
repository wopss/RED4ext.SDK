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
struct ScriptFIFOQueue : IScriptable
{
    static constexpr const char* NAME = "inkScriptFIFOQueue";
    static constexpr const char* ALIAS = "inkFIFOQueue";

    uint8_t unk40[0x60 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ScriptFIFOQueue, 0x60);
} // namespace ink
using inkScriptFIFOQueue = ink::ScriptFIFOQueue;
using inkFIFOQueue = ink::ScriptFIFOQueue;
} // namespace RED4ext

// clang-format on
