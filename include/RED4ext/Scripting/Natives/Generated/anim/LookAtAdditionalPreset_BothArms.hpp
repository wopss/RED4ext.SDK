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
struct LookAtAdditionalPreset_BothArms : anim::LookAtAdditionalPreset
{
    static constexpr const char* NAME = "animLookAtAdditionalPreset_BothArms";
    static constexpr const char* ALIAS = NAME;

    bool rightHanded; // 40
    uint8_t unk41[0x44 - 0x41]; // 41
    float softLimitAngle; // 44
};
RED4EXT_ASSERT_SIZE(LookAtAdditionalPreset_BothArms, 0x48);
} // namespace anim
using animLookAtAdditionalPreset_BothArms = anim::LookAtAdditionalPreset_BothArms;
} // namespace RED4ext

// clang-format on
