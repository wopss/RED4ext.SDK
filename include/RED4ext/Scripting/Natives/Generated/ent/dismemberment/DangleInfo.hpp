#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace ent::dismemberment
{
struct DangleInfo
{
    static constexpr const char* NAME = "entdismembermentDangleInfo";
    static constexpr const char* ALIAS = NAME;

    float DangleVelocityDamping; // 00
    float DangleSegmentLenght; // 04
    float DangleBendStiffness; // 08
    float DangleSegmentStiffness; // 0C
    float DangleCollisionSphereRadius; // 10
};
RED4EXT_ASSERT_SIZE(DangleInfo, 0x14);
} // namespace ent::dismemberment
using entdismembermentDangleInfo = ent::dismemberment::DangleInfo;
} // namespace RED4ext

// clang-format on
