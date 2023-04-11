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
struct LookAtPreset_Eyes : anim::LookAtPreset
{
    static constexpr const char* NAME = "animLookAtPreset_Eyes";
    static constexpr const char* ALIAS = NAME;

    float softLimitAngle; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(LookAtPreset_Eyes, 0x48);
} // namespace anim
using animLookAtPreset_Eyes = anim::LookAtPreset_Eyes;
} // namespace RED4ext

// clang-format on
