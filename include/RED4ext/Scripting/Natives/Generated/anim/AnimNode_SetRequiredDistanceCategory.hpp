#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_SetRequiredDistanceCategory : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_SetRequiredDistanceCategory";
    static constexpr const char* ALIAS = NAME;

    uint32_t requiredQualityDistanceCategory; // 60
    uint8_t unk64[0x68 - 0x64]; // 64
};
RED4EXT_ASSERT_SIZE(AnimNode_SetRequiredDistanceCategory, 0x68);
} // namespace anim
using animAnimNode_SetRequiredDistanceCategory = anim::AnimNode_SetRequiredDistanceCategory;
} // namespace RED4ext

// clang-format on
