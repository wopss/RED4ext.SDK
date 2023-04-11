#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/LookAtAdditionalPreset.hpp>

namespace RED4ext
{
namespace anim
{
struct LookAtAdditionalPreset_Eyes : anim::LookAtAdditionalPreset
{
    static constexpr const char* NAME = "animLookAtAdditionalPreset_Eyes";
    static constexpr const char* ALIAS = NAME;

    float softLimitAngle; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(LookAtAdditionalPreset_Eyes, 0x48);
} // namespace anim
using animLookAtAdditionalPreset_Eyes = anim::LookAtAdditionalPreset_Eyes;
} // namespace RED4ext

// clang-format on
