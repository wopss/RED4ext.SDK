#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
namespace world
{
struct StaticVectorFieldNode : world::Node
{
    static constexpr const char* NAME = "worldStaticVectorFieldNode";
    static constexpr const char* ALIAS = NAME;

    Vector3 direction; // 38
    float autoHideDistance; // 44
};
RED4EXT_ASSERT_SIZE(StaticVectorFieldNode, 0x48);
} // namespace world
using worldStaticVectorFieldNode = world::StaticVectorFieldNode;
} // namespace RED4ext

// clang-format on
