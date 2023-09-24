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
struct MinimapConfigAreaNode : world::AreaShapeNode
{
    static constexpr const char* NAME = "worldMinimapConfigAreaNode";
    static constexpr const char* ALIAS = NAME;

    float streamingRadius; // 60
    uint8_t unk64[0x68 - 0x64]; // 64
};
RED4EXT_ASSERT_SIZE(MinimapConfigAreaNode, 0x68);
} // namespace world
using worldMinimapConfigAreaNode = world::MinimapConfigAreaNode;
} // namespace RED4ext

// clang-format on
