#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/QueryFilter.hpp>

namespace RED4ext
{
namespace world::geometry
{
struct __declspec(align(0x10)) DescriptionQuery : IScriptable
{
    static constexpr const char* NAME = "worldgeometryDescriptionQuery";
    static constexpr const char* ALIAS = "GeometryDescriptionQuery";

    Vector4 refPosition; // 40
    Vector4 refDirection; // 50
    Vector4 refUp; // 60
    Vector4 primitiveDimension; // 70
    Quaternion primitiveRotation; // 80
    float maxDistance; // 90
    float maxExtent; // 94
    float raycastStartDistance; // 98
    float probingPrecision; // 9C
    float probingMaxDistanceDiff; // A0
    float probingMaxHeight; // A4
    uint32_t maxProbes; // A8
    uint8_t unkAC[0xB0 - 0xAC]; // AC
    Vector4 probeDimensions; // B0
    physics::QueryFilter filter; // C0
    uint8_t unkD0[0xD4 - 0xD0]; // D0
    uint32_t flags; // D4
    uint8_t unkD8[0xE0 - 0xD8]; // D8
};
RED4EXT_ASSERT_SIZE(DescriptionQuery, 0xE0);
} // namespace world::geometry
using worldgeometryDescriptionQuery = world::geometry::DescriptionQuery;
using GeometryDescriptionQuery = world::geometry::DescriptionQuery;
} // namespace RED4ext

// clang-format on
