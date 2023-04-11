#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/NavGenNavigationSetting.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/AreaShapeNode.hpp>

namespace RED4ext
{
namespace physics { struct FilterData; }

namespace world
{
struct CollisionAreaNode : world::AreaShapeNode
{
    static constexpr const char* NAME = "worldCollisionAreaNode";
    static constexpr const char* ALIAS = NAME;

    Handle<physics::FilterData> filterData; // 60
    NavGenNavigationSetting navigationSetting; // 70
    uint8_t unk72[0x78 - 0x72]; // 72
    CName material; // 78
};
RED4EXT_ASSERT_SIZE(CollisionAreaNode, 0x80);
} // namespace world
using worldCollisionAreaNode = world::CollisionAreaNode;
} // namespace RED4ext

// clang-format on
