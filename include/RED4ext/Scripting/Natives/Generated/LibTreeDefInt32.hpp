#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
struct LibTreeDefInt32
{
    static constexpr const char* NAME = "LibTreeDefInt32";
    static constexpr const char* ALIAS = NAME;

    uint16_t variableId; // 00
    uint8_t unk02[0x8 - 0x2]; // 2
    CName treeVariable; // 08
    int32_t v; // 10
    uint8_t unk14[0x18 - 0x14]; // 14
};
RED4EXT_ASSERT_SIZE(LibTreeDefInt32, 0x18);
} // namespace RED4ext

// clang-format on
