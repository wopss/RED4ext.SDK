#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/MeshNode.hpp>

namespace RED4ext
{
namespace world
{
struct MirrorNode : world::MeshNode
{
    static constexpr const char* NAME = "worldMirrorNode";
    static constexpr const char* ALIAS = NAME;

    Vector3 cullingBoxExtents; // 60
    Vector3 cullingBoxOffset; // 6C
};
RED4EXT_ASSERT_SIZE(MirrorNode, 0x78);
} // namespace world
using worldMirrorNode = world::MirrorNode;
} // namespace RED4ext

// clang-format on
