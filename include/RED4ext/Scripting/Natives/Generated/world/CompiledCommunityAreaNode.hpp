#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
namespace community { struct Area; }

namespace world
{
struct CompiledCommunityAreaNode : world::Node
{
    static constexpr const char* NAME = "worldCompiledCommunityAreaNode";
    static constexpr const char* ALIAS = NAME;

    Handle<community::Area> area; // 38
    ent::EntityID sourceObjectId; // 48
};
RED4EXT_ASSERT_SIZE(CompiledCommunityAreaNode, 0x50);
} // namespace world
using worldCompiledCommunityAreaNode = world::CompiledCommunityAreaNode;
} // namespace RED4ext

// clang-format on
