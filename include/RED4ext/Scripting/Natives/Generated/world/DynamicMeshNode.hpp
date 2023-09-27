#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/NavGenNavigationSetting.hpp>
#include <RED4ext/Scripting/Natives/Generated/TrafficGenDynamicTrafficSetting.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/MeshNode.hpp>

namespace RED4ext
{
namespace world
{
struct DynamicMeshNode : world::MeshNode
{
    static constexpr const char* NAME = "worldDynamicMeshNode";
    static constexpr const char* ALIAS = NAME;

    TrafficGenDynamicTrafficSetting dynamicTrafficSetting; // 60
    NavGenNavigationSetting navigationSetting; // 62
    bool startAsleep; // 64
    bool isDebris; // 65
    bool initialGuess; // 66
    bool useMeshNavmeshSettings; // 67
};
RED4EXT_ASSERT_SIZE(DynamicMeshNode, 0x68);
} // namespace world
using worldDynamicMeshNode = world::DynamicMeshNode;
} // namespace RED4ext

// clang-format on
