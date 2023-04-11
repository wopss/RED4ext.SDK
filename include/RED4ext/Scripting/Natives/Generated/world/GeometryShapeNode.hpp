#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
struct GeometryShape;

namespace world
{
struct GeometryShapeNode : world::Node
{
    static constexpr const char* NAME = "worldGeometryShapeNode";
    static constexpr const char* ALIAS = NAME;

    Handle<GeometryShape> shape; // 38
    Color color; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(GeometryShapeNode, 0x50);
} // namespace world
using worldGeometryShapeNode = world::GeometryShapeNode;
} // namespace RED4ext

// clang-format on
