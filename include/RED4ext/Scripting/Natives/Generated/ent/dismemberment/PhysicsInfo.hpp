#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace ent::dismemberment
{
struct PhysicsInfo
{
    static constexpr const char* NAME = "entdismembermentPhysicsInfo";
    static constexpr const char* ALIAS = NAME;

    float DensityScale; // 00
};
RED4EXT_ASSERT_SIZE(PhysicsInfo, 0x4);
} // namespace ent::dismemberment
using entdismembermentPhysicsInfo = ent::dismemberment::PhysicsInfo;
} // namespace RED4ext

// clang-format on
