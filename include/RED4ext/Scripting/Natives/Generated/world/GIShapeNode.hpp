#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/GIGroup.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/GeometryShapeNode.hpp>

namespace RED4ext
{
namespace world
{
struct GIShapeNode : world::GeometryShapeNode
{
    static constexpr const char* NAME = "worldGIShapeNode";
    static constexpr const char* ALIAS = NAME;

    rend::GIGroup group; // 50
    uint8_t unk51[0x54 - 0x51]; // 51
    uint32_t priority; // 54
    bool interior; // 58
    bool runtime; // 59
    uint8_t unk5A[0x5B - 0x5A]; // 5A
    bool updated; // 5B
    uint8_t unk5C[0x60 - 0x5C]; // 5C
};
RED4EXT_ASSERT_SIZE(GIShapeNode, 0x60);
} // namespace world
using worldGIShapeNode = world::GIShapeNode;
} // namespace RED4ext

// clang-format on
