#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/LookAtAdditionalPreset.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/LookAtLimits.hpp>

namespace RED4ext
{
namespace anim
{
struct LookAtAdditionalPreset_FullControl : anim::LookAtAdditionalPreset
{
    static constexpr const char* NAME = "animLookAtAdditionalPreset_FullControl";
    static constexpr const char* ALIAS = NAME;

    bool useRightHand; // 40
    bool attachHandToOtherOne; // 41
    uint8_t unk42[0x44 - 0x42]; // 42
    anim::LookAtLimits limits; // 44
    float suppress; // 54
    int32_t mode; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
};
RED4EXT_ASSERT_SIZE(LookAtAdditionalPreset_FullControl, 0x60);
} // namespace anim
using animLookAtAdditionalPreset_FullControl = anim::LookAtAdditionalPreset_FullControl;
} // namespace RED4ext

// clang-format on
