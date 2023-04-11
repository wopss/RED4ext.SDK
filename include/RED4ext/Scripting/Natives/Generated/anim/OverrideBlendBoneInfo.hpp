#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct OverrideBlendBoneInfo
{
    static constexpr const char* NAME = "animOverrideBlendBoneInfo";
    static constexpr const char* ALIAS = NAME;

    anim::TransformIndex transformIndex; // 00
    float weight; // 18
    uint8_t unk1C[0x20 - 0x1C]; // 1C
};
RED4EXT_ASSERT_SIZE(OverrideBlendBoneInfo, 0x20);
} // namespace anim
using animOverrideBlendBoneInfo = anim::OverrideBlendBoneInfo;
} // namespace RED4ext

// clang-format on
