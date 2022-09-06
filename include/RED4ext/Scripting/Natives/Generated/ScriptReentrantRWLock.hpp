#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct ScriptReentrantRWLock
{
    static constexpr const char* NAME = "ScriptReentrantRWLock";
    static constexpr const char* ALIAS = "RWLock";

    uint8_t unk00[0x10 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(ScriptReentrantRWLock, 0x10);
using RWLock = ScriptReentrantRWLock;
} // namespace RED4ext

// clang-format on
