#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ETimeOfYearSeason.hpp>

namespace RED4ext
{
struct GlobalLightingTrajectory
{
    static constexpr const char* NAME = "GlobalLightingTrajectory";
    static constexpr const char* ALIAS = NAME;

    float latitude; // 00
    float sunRotationOffset; // 04
    float moonRotationOffset; // 08
    ETimeOfYearSeason timeOfYearSeason; // 0C
};
RED4EXT_ASSERT_SIZE(GlobalLightingTrajectory, 0x10);
} // namespace RED4ext

// clang-format on
