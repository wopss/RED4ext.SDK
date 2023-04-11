#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace world
{
struct RelativeNodePathElement
{
    static constexpr const char* NAME = "worldRelativeNodePathElement";
    static constexpr const char* ALIAS = NAME;

    CString prefab; // 00
    uint8_t unk20[0x28 - 0x20]; // 20
    uint64_t nodeID; // 28
    uint8_t unk30[0x38 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(RelativeNodePathElement, 0x38);
} // namespace world
using worldRelativeNodePathElement = world::RelativeNodePathElement;
} // namespace RED4ext

// clang-format on
