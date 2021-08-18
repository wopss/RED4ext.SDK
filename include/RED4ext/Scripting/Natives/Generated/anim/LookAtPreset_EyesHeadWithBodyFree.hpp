#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/LookAtPreset.hpp>

namespace RED4ext
{
namespace anim { 
struct LookAtPreset_EyesHeadWithBodyFree : anim::LookAtPreset
{
    static constexpr const char* NAME = "animLookAtPreset_EyesHeadWithBodyFree";
    static constexpr const char* ALIAS = NAME;

    float suppressHeadAnimation; // 40
    float headMobility; // 44
    float suppressChestAnimation; // 48
    float chestMobility; // 4C
    float softLimitAngle; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(LookAtPreset_EyesHeadWithBodyFree, 0x58);
} // namespace anim
} // namespace RED4ext
