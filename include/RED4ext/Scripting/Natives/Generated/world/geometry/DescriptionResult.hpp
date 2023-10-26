#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/geometry/DescriptionQueryStatus.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/geometry/HandIKDescriptionResult.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/geometry/ProbingStatus.hpp>

namespace RED4ext
{
namespace ent { struct Entity; }

namespace world::geometry
{
struct __declspec(align(0x10)) DescriptionResult : IScriptable
{
    static constexpr const char* NAME = "worldgeometryDescriptionResult";
    static constexpr const char* ALIAS = "GeometryDescriptionResult";

    world::geometry::HandIKDescriptionResult leftHandData; // 40
    world::geometry::HandIKDescriptionResult rightHandData; // 60
    Vector4 collisionNormal; // 80
    Vector4 distanceVector; // 90
    Vector4 topPoint; // A0
    Vector4 topNormal; // B0
    Vector4 behindPoint; // C0
    Vector4 behindNormal; // D0
    uint8_t unkE0[0xF0 - 0xE0]; // E0
    float obstacleDepth; // F0
    float upExtent; // F4
    float downExtent; // F8
    float topExtent; // FC
    world::geometry::ProbingStatus obstacleDepthStatus; // 100
    world::geometry::ProbingStatus leftExtentStatus; // 104
    world::geometry::ProbingStatus rightExtentStatus; // 108
    world::geometry::ProbingStatus upExtentStatus; // 10C
    world::geometry::ProbingStatus downExtentStatus; // 110
    uint8_t unk114[0x118 - 0x114]; // 114
    world::geometry::ProbingStatus topTestStatus; // 118
    world::geometry::ProbingStatus behindTestStatus; // 11C
    world::geometry::DescriptionQueryStatus queryStatus; // 120
    uint8_t unk124[0x128 - 0x124]; // 124
    WeakHandle<ent::Entity> climbedEntity; // 128
    uint8_t unk138[0x140 - 0x138]; // 138
};
RED4EXT_ASSERT_SIZE(DescriptionResult, 0x140);
} // namespace world::geometry
using worldgeometryDescriptionResult = world::geometry::DescriptionResult;
using GeometryDescriptionResult = world::geometry::DescriptionResult;
} // namespace RED4ext

// clang-format on
