#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace physics::cloth
{
struct PhaseConfig
{
    static constexpr const char* NAME = "physicsclothPhaseConfig";
    static constexpr const char* ALIAS = NAME;

    float stiffness; // 00
    float stiffnessMultiplier; // 04
    float compressionLimit; // 08
    float stretchLimit; // 0C
};
RED4EXT_ASSERT_SIZE(PhaseConfig, 0x10);
} // namespace physics::cloth
using physicsclothPhaseConfig = physics::cloth::PhaseConfig;
} // namespace RED4ext

// clang-format on
