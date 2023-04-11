#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace physics
{
struct QueryFilter
{
    static constexpr const char* NAME = "physicsQueryFilter";
    static constexpr const char* ALIAS = "QueryFilter";

    uint64_t mask1; // 00
    uint64_t mask2; // 08
};
RED4EXT_ASSERT_SIZE(QueryFilter, 0x10);
} // namespace physics
using physicsQueryFilter = physics::QueryFilter;
using QueryFilter = physics::QueryFilter;
} // namespace RED4ext

// clang-format on
