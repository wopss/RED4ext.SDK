#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/NavGenSamplingDensity.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/AreaShapeNode.hpp>

namespace RED4ext
{
namespace world
{
struct NavigationConfigAreaNode : world::AreaShapeNode
{
    static constexpr const char* NAME = "worldNavigationConfigAreaNode";
    static constexpr const char* ALIAS = NAME;

    bool generateVariantsNavmesh; // 60
    bool smoothWalkableAreas; // 61
    bool generateCrouchableAreas; // 62
    NavGenSamplingDensity detailSamplingDensity; // 63
    uint8_t unk64[0x68 - 0x64]; // 64
};
RED4EXT_ASSERT_SIZE(NavigationConfigAreaNode, 0x68);
} // namespace world
using worldNavigationConfigAreaNode = world::NavigationConfigAreaNode;
} // namespace RED4ext

// clang-format on
