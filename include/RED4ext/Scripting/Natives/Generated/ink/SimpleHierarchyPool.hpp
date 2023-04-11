#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace ink
{
struct SimpleHierarchyPool
{
    static constexpr const char* NAME = "inkSimpleHierarchyPool";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x30 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(SimpleHierarchyPool, 0x30);
} // namespace ink
using inkSimpleHierarchyPool = ink::SimpleHierarchyPool;
} // namespace RED4ext

// clang-format on
