#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace physics
{
struct QueryPreset
{
    static constexpr const char* NAME = "physicsQueryPreset";
    static constexpr const char* ALIAS = "QueryPreset";

    CName presetName; // 00
};
RED4EXT_ASSERT_SIZE(QueryPreset, 0x8);
} // namespace physics
using physicsQueryPreset = physics::QueryPreset;
using QueryPreset = physics::QueryPreset;
} // namespace RED4ext

// clang-format on
