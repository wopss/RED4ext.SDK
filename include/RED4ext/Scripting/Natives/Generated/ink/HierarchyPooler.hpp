#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace ink
{
struct HierarchyPooler
{
    static constexpr const char* NAME = "inkHierarchyPooler";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x60 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(HierarchyPooler, 0x60);
} // namespace ink
using inkHierarchyPooler = ink::HierarchyPooler;
} // namespace RED4ext

// clang-format on
