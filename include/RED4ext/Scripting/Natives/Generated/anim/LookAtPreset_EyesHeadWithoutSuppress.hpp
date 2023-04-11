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
struct LookAtPreset_EyesHeadWithoutSuppress : anim::LookAtPreset
{
    static constexpr const char* NAME = "animLookAtPreset_EyesHeadWithoutSuppress";
    static constexpr const char* ALIAS = NAME;

    float headMobility; // 40
    float softLimitAngle; // 44
};
RED4EXT_ASSERT_SIZE(LookAtPreset_EyesHeadWithoutSuppress, 0x48);
} // namespace anim
using animLookAtPreset_EyesHeadWithoutSuppress = anim::LookAtPreset_EyesHeadWithoutSuppress;
} // namespace RED4ext

// clang-format on
