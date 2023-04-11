#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/SplineNode.hpp>

namespace RED4ext
{
namespace world { struct PatrolSplinePointDefinition; }
namespace world { struct TrafficSpotDefinition; }

namespace world
{
struct PatrolSplineNode : world::SplineNode
{
    static constexpr const char* NAME = "worldPatrolSplineNode";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<world::TrafficSpotDefinition>> spots; // 70
    DynArray<NodeRef> patrolPoints; // 80
    DynArray<Handle<world::PatrolSplinePointDefinition>> patrolPointDefs; // 90
};
RED4EXT_ASSERT_SIZE(PatrolSplineNode, 0xA0);
} // namespace world
using worldPatrolSplineNode = world::PatrolSplineNode;
} // namespace RED4ext

// clang-format on
