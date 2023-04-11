#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/DangleConstraint_Simulation.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct DangleConstraint_SimulationSingleBone : anim::DangleConstraint_Simulation
{
    static constexpr const char* NAME = "animDangleConstraint_SimulationSingleBone";
    static constexpr const char* ALIAS = NAME;

    anim::TransformIndex dangleBone; // 78
};
RED4EXT_ASSERT_SIZE(DangleConstraint_SimulationSingleBone, 0x90);
} // namespace anim
using animDangleConstraint_SimulationSingleBone = anim::DangleConstraint_SimulationSingleBone;
} // namespace RED4ext

// clang-format on
