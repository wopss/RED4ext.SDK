#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/NavGenNavigationSetting.hpp>
#include <RED4ext/Scripting/Natives/Generated/TrafficGenDynamicTrafficSetting.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/MeshNode.hpp>

namespace RED4ext
{
namespace world { 
struct DynamicMeshNode : world::MeshNode
{
    static constexpr const char* NAME = "worldDynamicMeshNode";
    static constexpr const char* ALIAS = NAME;

    TrafficGenDynamicTrafficSetting dynamicTrafficSetting; // 58
    NavGenNavigationSetting navigationSetting; // 5A
    bool startAsleep; // 5C
    bool isDebris; // 5D
    bool initialGuess; // 5E
    bool useMeshNavmeshSettings; // 5F
};
RED4EXT_ASSERT_SIZE(DynamicMeshNode, 0x60);
} // namespace world
} // namespace RED4ext
