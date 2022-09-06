#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ETimeOfYearSeason.hpp>

namespace RED4ext
{
struct GlobalLightingTrajectoryOverride
{
    static constexpr const char* NAME = "GlobalLightingTrajectoryOverride";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
    float latitude; // 08
    float sunRotationOffset; // 0C
    float moonRotationOffset; // 10
    ETimeOfYearSeason timeOfYearSeason; // 14
    float overrideScale; // 18
    uint8_t unk1C[0x20 - 0x1C]; // 1C
};
RED4EXT_ASSERT_SIZE(GlobalLightingTrajectoryOverride, 0x20);
} // namespace RED4ext

// clang-format on
