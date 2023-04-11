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
struct LookAtPreset_EyesHead : anim::LookAtPreset
{
    static constexpr const char* NAME = "animLookAtPreset_EyesHead";
    static constexpr const char* ALIAS = NAME;

    float suppressHeadAnimation; // 40
    float headMobility; // 44
    float softLimitAngle; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(LookAtPreset_EyesHead, 0x50);
} // namespace anim
using animLookAtPreset_EyesHead = anim::LookAtPreset_EyesHead;
} // namespace RED4ext

// clang-format on
