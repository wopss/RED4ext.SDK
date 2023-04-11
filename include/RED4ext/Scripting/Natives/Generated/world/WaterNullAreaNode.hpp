#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/AreaShapeNode.hpp>

namespace RED4ext
{
namespace world
{
struct WaterNullAreaNode : world::AreaShapeNode
{
    static constexpr const char* NAME = "worldWaterNullAreaNode";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(WaterNullAreaNode, 0x60);
} // namespace world
using worldWaterNullAreaNode = world::WaterNullAreaNode;
} // namespace RED4ext

// clang-format on
