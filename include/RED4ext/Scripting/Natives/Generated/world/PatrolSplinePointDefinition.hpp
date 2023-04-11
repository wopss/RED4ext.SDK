#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/PatrolSplinePointTypes.hpp>

namespace RED4ext
{
namespace world
{
struct PatrolSplinePointDefinition : ISerializable
{
    static constexpr const char* NAME = "worldPatrolSplinePointDefinition";
    static constexpr const char* ALIAS = NAME;

    world::PatrolSplinePointTypes pointType; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
    NodeRef node; // 38
    game::EntityReference target; // 40
};
RED4EXT_ASSERT_SIZE(PatrolSplinePointDefinition, 0x78);
} // namespace world
using worldPatrolSplinePointDefinition = world::PatrolSplinePointDefinition;
} // namespace RED4ext

// clang-format on
