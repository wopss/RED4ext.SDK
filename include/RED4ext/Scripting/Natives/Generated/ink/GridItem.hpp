#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace ink
{
struct GridItem
{
    static constexpr const char* NAME = "inkGridItem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x18 - 0x0]; // 0
    uint32_t rootIdx; // 18
    uint8_t unk1C[0x20 - 0x1C]; // 1C
};
RED4EXT_ASSERT_SIZE(GridItem, 0x20);
} // namespace ink
using inkGridItem = ink::GridItem;
} // namespace RED4ext

// clang-format on
