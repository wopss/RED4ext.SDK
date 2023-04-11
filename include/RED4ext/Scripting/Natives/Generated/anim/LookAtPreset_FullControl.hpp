#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/LookAtLimits.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/LookAtPreset.hpp>

namespace RED4ext
{
namespace anim
{
struct LookAtPreset_FullControl : anim::LookAtPreset
{
    static constexpr const char* NAME = "animLookAtPreset_FullControl";
    static constexpr const char* ALIAS = NAME;

    anim::LookAtLimits limits; // 40
    float eyesSuppress; // 50
    int32_t eyesMode; // 54
    float headSuppress; // 58
    int32_t headMode; // 5C
    float headSquareScale; // 60
    float chestSuppress; // 64
    int32_t chestMode; // 68
    float chestSquareScale; // 6C
};
RED4EXT_ASSERT_SIZE(LookAtPreset_FullControl, 0x70);
} // namespace anim
using animLookAtPreset_FullControl = anim::LookAtPreset_FullControl;
} // namespace RED4ext

// clang-format on
