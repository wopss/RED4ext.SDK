#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/LookAtPreset.hpp>

namespace RED4ext
{
namespace anim
{
struct LookAtPreset_DroneVertical : anim::LookAtPreset
{
    static constexpr const char* NAME = "animLookAtPreset_DroneVertical";
    static constexpr const char* ALIAS = NAME;

    float softLimitDegrees; // 40
    float hardLimitDegrees; // 44
    float hardLimitDistance; // 48
    float backLimitDegrees; // 4C
    float suppress; // 50
    int32_t mode; // 54
};
RED4EXT_ASSERT_SIZE(LookAtPreset_DroneVertical, 0x58);
} // namespace anim
using animLookAtPreset_DroneVertical = anim::LookAtPreset_DroneVertical;
} // namespace RED4ext

// clang-format on
