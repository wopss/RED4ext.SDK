#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/SceneRecordingNodeMeshResourceFilter.hpp>

namespace RED4ext
{
namespace world
{
struct SceneRecordingNodeFilter
{
    static constexpr const char* NAME = "worldSceneRecordingNodeFilter";
    static constexpr const char* ALIAS = NAME;

    float streamInNodesWithStreamingDistanceMoreThan; // 00
    float streamOutPrefabProxyMeshesWithStreamingDistanceMoreThan; // 04
    bool meshNodesOnly; // 08
    uint8_t unk09[0x10 - 0x9]; // 9
    world::SceneRecordingNodeMeshResourceFilter meshResourceFilter; // 10
};
RED4EXT_ASSERT_SIZE(SceneRecordingNodeFilter, 0x30);
} // namespace world
using worldSceneRecordingNodeFilter = world::SceneRecordingNodeFilter;
} // namespace RED4ext

// clang-format on
