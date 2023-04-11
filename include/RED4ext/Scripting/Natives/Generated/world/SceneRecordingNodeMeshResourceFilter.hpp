#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
struct CMesh;

namespace world
{
struct SceneRecordingNodeMeshResourceFilter
{
    static constexpr const char* NAME = "worldSceneRecordingNodeMeshResourceFilter";
    static constexpr const char* ALIAS = NAME;

    DynArray<RaRef<CMesh>> forceFilterIgnore; // 00
    DynArray<RaRef<CMesh>> forceFilterMatch; // 10
};
RED4EXT_ASSERT_SIZE(SceneRecordingNodeMeshResourceFilter, 0x20);
} // namespace world
using worldSceneRecordingNodeMeshResourceFilter = world::SceneRecordingNodeMeshResourceFilter;
} // namespace RED4ext

// clang-format on
