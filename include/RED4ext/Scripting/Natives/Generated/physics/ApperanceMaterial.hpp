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
struct ApperanceMaterial
{
    static constexpr const char* NAME = "physicsApperanceMaterial";
    static constexpr const char* ALIAS = NAME;

    CName apperanceName; // 00
    CName materialFrom; // 08
    CName material; // 10
};
RED4EXT_ASSERT_SIZE(ApperanceMaterial, 0x18);
} // namespace physics
using physicsApperanceMaterial = physics::ApperanceMaterial;
} // namespace RED4ext

// clang-format on
