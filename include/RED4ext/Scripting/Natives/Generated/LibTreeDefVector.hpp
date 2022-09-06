#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
struct LibTreeDefVector
{
    static constexpr const char* NAME = "LibTreeDefVector";
    static constexpr const char* ALIAS = NAME;

    uint16_t variableId; // 00
    uint8_t unk02[0x8 - 0x2]; // 2
    CName treeVariable; // 08
    Vector3 v; // 10
    uint8_t unk1C[0x20 - 0x1C]; // 1C
};
RED4EXT_ASSERT_SIZE(LibTreeDefVector, 0x20);
} // namespace RED4ext

// clang-format on
